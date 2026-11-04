// Type: UI.SettingsPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SettingsPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/SettingsPopup/SettingsPopup.cs
// --------------------------------

// UI.SettingsPopup.<>c__DisplayClass18_0$$.ctor
// il2cpp: void UI_SettingsPopup___c__DisplayClass18_0___ctor (UI_SettingsPopup___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_SettingsPopup___c__DisplayClass18_0___ctor(UI_SettingsPopup___c__DisplayClass18_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SettingsPopup.<>c__DisplayClass18_0$$<SetupTopButtons>b__0
// il2cpp: void UI_SettingsPopup___c__DisplayClass18_0___SetupTopButtons_b__0 (UI_SettingsPopup___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x182283300

void UI_SettingsPopup___c__DisplayClass18_0___SetupTopButtons_b__0
               (UI_SettingsPopup___c__DisplayClass18_0_o *__this,MethodInfo *method)

{
  UI_SettingsPopup_o *pUVar1;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_SettingsPopup_o *)0x0) {
    (*(pUVar1->klass->vtable)._28_SetCategoryPanel.methodPtr)
              (pUVar1,(__this->fields).buttonName,(pUVar1->klass->vtable)._28_SetCategoryPanel.method);
    return;
  }
  ThrowNullReferenceException();
}


// UI.SettingsPopup.<>c__DisplayClass21_0$$.ctor
// il2cpp: void UI_SettingsPopup___c__DisplayClass21_0___ctor (UI_SettingsPopup___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_SettingsPopup___c__DisplayClass21_0___ctor(UI_SettingsPopup___c__DisplayClass21_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SettingsPopup.<>c__DisplayClass21_0$$<SetupBottomButtons>b__0
// il2cpp: void UI_SettingsPopup___c__DisplayClass21_0___SetupBottomButtons_b__0 (UI_SettingsPopup___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x1822ea3b0

void UI_SettingsPopup___c__DisplayClass21_0___SetupBottomButtons_b__0
               (UI_SettingsPopup___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  UI_SettingsPopup_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_SettingsPopup_o *)0x0) {
    UI_SettingsPopup__OnBottomBarButtonClick(__this_00,(__this->fields).buttonName,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.SettingsPopup$$get_Title
// il2cpp: System_String_o* UI_SettingsPopup__get_Title (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x1818c6010

System_String_o*
UI_SettingsPopup__get_Title(UI_SettingsPopup_o* __this, MethodInfo* method)

{
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// UI.SettingsPopup$$get_Width
// il2cpp: float UI_SettingsPopup__get_Width (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x18210fa90

float UI_SettingsPopup__get_Width(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  return 1000.0;
}


// UI.SettingsPopup$$get_Height
// il2cpp: float UI_SettingsPopup__get_Height (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x18228d430

float UI_SettingsPopup__get_Height(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  return 630.0;
}


// UI.SettingsPopup$$get_CategoryPanel
// il2cpp: bool UI_SettingsPopup__get_CategoryPanel (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_SettingsPopup__get_CategoryPanel(UI_SettingsPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.SettingsPopup$$get_CategoryButtons
// il2cpp: bool UI_SettingsPopup__get_CategoryButtons (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_SettingsPopup__get_CategoryButtons(UI_SettingsPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.SettingsPopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_SettingsPopup__get_DefaultCategoryPanel (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x1822e6860

System_String_o * UI_SettingsPopup__get_DefaultCategoryPanel(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347631 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    Il2CppMethodInitialized_184347631 = '\x01';
  }
  return "General";
}


// UI.SettingsPopup$$get_UseSound
// il2cpp: bool UI_SettingsPopup__get_UseSound (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_SettingsPopup__get_UseSound(UI_SettingsPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.SettingsPopup$$Setup
// il2cpp: void UI_SettingsPopup__Setup (UI_SettingsPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1822e6720

void UI_SettingsPopup__Setup(UI_SettingsPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  UI_SettingsPopup__SetupBottomButtons(__this,(MethodInfo *)0x0);
  UI_SettingsPopup__SetupSettingsList(__this,(MethodInfo *)0x0);
  return;
}


// UI.SettingsPopup$$SetupTopButtons
// il2cpp: void UI_SettingsPopup__SetupTopButtons (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x1822e6360

void UI_SettingsPopup__SetupTopButtons(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  Il2CppClass *value;
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_01;
  Il2CppObject *pIVar2;
  UI_SettingsPopup___c__DisplayClass18_0_o *object;
  System_String_o *item;
  UnityEngine_Events_UnityAction_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_UI_Button_o *value_00;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184347632 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Button_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_SettingsPopup_c__DisplayClass18_0_SetupTopButtons_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SettingsPopup_c__DisplayClass18_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Skins");
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"Top");
    il2cpp_codegen_initialize_runtime_metadata(&"Keybinds");
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    il2cpp_codegen_initialize_runtime_metadata(&"Sound");
    il2cpp_codegen_initialize_runtime_metadata(&"Ability");
    il2cpp_codegen_initialize_runtime_metadata(&"UI");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Graphics");
    Il2CppMethodInitialized_184347632 = '\x01';
  }
  pSVar1 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x1c,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  pIVar2 = SZArrayNew(TypeInfo_string_array,7);
  pSVar1 = "General";
  if (pIVar2 != (Il2CppObject *)0x0) {
    if (*(int *)&pIVar2[1].monitor != 0) {
      pIVar2[2].klass = (Il2CppClass *)"General";
      Il2CppCodeGenWriteBarrier(&pIVar2[2].klass,pSVar1);
      pSVar1 = "Sound";
      if (1 < *(uint *)&pIVar2[1].monitor) {
        pIVar2[2].monitor = "Sound";
        Il2CppCodeGenWriteBarrier(&pIVar2[2].monitor,pSVar1);
        pSVar1 = "Graphics";
        if (2 < *(uint *)&pIVar2[1].monitor) {
          pIVar2[3].klass = (Il2CppClass *)"Graphics";
          Il2CppCodeGenWriteBarrier(&pIVar2[3].klass,pSVar1);
          pSVar1 = "UI";
          if (3 < *(uint *)&pIVar2[1].monitor) {
            pIVar2[3].monitor = "UI";
            Il2CppCodeGenWriteBarrier(&pIVar2[3].monitor,pSVar1);
            pSVar1 = "Keybinds";
            if (4 < *(uint *)&pIVar2[1].monitor) {
              pIVar2[4].klass = (Il2CppClass *)"Keybinds";
              Il2CppCodeGenWriteBarrier(&pIVar2[4].klass,pSVar1);
              pSVar1 = "Skins";
              if (5 < *(uint *)&pIVar2[1].monitor) {
                pIVar2[4].monitor = "Skins";
                Il2CppCodeGenWriteBarrier(&pIVar2[4].monitor,pSVar1);
                pSVar1 = "Ability";
                if (6 < *(uint *)&pIVar2[1].monitor) {
                  pIVar2[5].klass = (Il2CppClass *)"Ability";
                  Il2CppCodeGenWriteBarrier(&pIVar2[5].klass,pSVar1);
                  uVar3 = 0;
                  while( true ) {
                    if (*(int *)&pIVar2[1].monitor <= (int)uVar3) {
                      UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
                      return;
                    }
                    object = il2cpp_codegen_object_new
                                       ((Il2CppClass *)TypeInfo_UI_SettingsPopup_c__DisplayClass18_0);
                    System_Object___ctor
                              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,
                               (MethodInfo *)0x0);
                    if (object == (UI_SettingsPopup___c__DisplayClass18_0_o *)0x0) break;
                    (object->fields).__4__this = __this;
                    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
                    if (*(uint *)&pIVar2[1].monitor <= uVar3) goto label_1822e6719;
                    value = (&pIVar2[2].klass)[(int)uVar3];
                    (object->fields).buttonName = (System_String_o *)value;
                    Il2CppCodeGenWriteBarrier(&(object->fields).buttonName,value);
                    parent = (__this->fields).TopBar;
                    pSVar1 = (__this->fields).LocaleCategory;
                    item = System_String__Concat_1969e50
                                     ((object->fields).buttonName,"Button",(MethodInfo *)0x0);
                    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                    }
                    pSVar1 = UI_UIManager__GetLocale
                                       (pSVar1,"Top",item,"",
                                        "",(MethodInfo *)0x0);
                    __this_02 = il2cpp_codegen_object_new
                                          ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                    UnityEngine_Events_UnityAction___ctor
                              ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_02,
                               (Il2CppObject *)object,
                               (intptr_t)MethodInfo_UI_SettingsPopup_c__DisplayClass18_0_SetupTopButtons_b__0,
                               (MethodInfo *)0x0);
                    __this_03 = UI_ElementFactory__CreateCategoryButton
                                          (parent,__this_01,pSVar1,__this_02,(MethodInfo *)0x0);
                    if (__this_03 == (UnityEngine_GameObject_o *)0x0) break;
                    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                                (__this->fields)._topButtons;
                    pSVar1 = (object->fields).buttonName;
                    value_00 = UnityEngine_GameObject__GetComponent_object_
                                         (__this_03,
                                          (MethodInfo_6F5650 *)
                                          MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
                    System_Collections_Generic_Dictionary_object__object___Add
                              (__this_00,(Il2CppObject *)pSVar1,(Il2CppObject *)value_00,
                               (MethodInfo_146B4B0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_Button_Add);
                    uVar3 = uVar3 + 1;
                  }
                  goto label_1822e6713;
                }
              }
            }
          }
        }
      }
    }
label_1822e6719:
    ThrowIndexOutOfRangeException();
  }
label_1822e6713:
  ThrowNullReferenceException();
}


// UI.SettingsPopup$$RegisterCategoryPanels
// il2cpp: void UI_SettingsPopup__RegisterCategoryPanels (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x1822e5a00

void UI_SettingsPopup__RegisterCategoryPanels(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Il2CppType *handle;
  System_Type_o *pSVar2;
  
  if (Il2CppMethodInitialized_184347633 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_SettingsAbilityPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_SettingsGeneralPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_SettingsGraphicsPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_SettingsKeybindsPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_SettingsSkinsPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_SettingsSoundPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_SettingsUIPanel);
    il2cpp_codegen_initialize_runtime_metadata(&"Skins");
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"Keybinds");
    il2cpp_codegen_initialize_runtime_metadata(&"Sound");
    il2cpp_codegen_initialize_runtime_metadata(&"Ability");
    il2cpp_codegen_initialize_runtime_metadata(&"UI");
    il2cpp_codegen_initialize_runtime_metadata(&"Graphics");
    Il2CppMethodInitialized_184347633 = '\x01';
  }
  handle = TypeRef_UI_SettingsGeneralPanel;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar1,(Il2CppObject *)"General",(Il2CppObject *)pSVar2,
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UI_SettingsSoundPanel,(MethodInfo *)0x0);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,(Il2CppObject *)"Sound",(Il2CppObject *)pSVar2,
                 (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes
      ;
      pSVar2 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UI_SettingsGraphicsPanel,(MethodInfo *)0x0);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar1,(Il2CppObject *)"Graphics",(Il2CppObject *)pSVar2,
                   (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields)._categoryPanelTypes;
        pSVar2 = System_Type__GetTypeFromHandle
                           ((System_RuntimeTypeHandle_o)TypeRef_UI_SettingsUIPanel,(MethodInfo *)0x0);
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar1,(Il2CppObject *)"UI",(Il2CppObject *)pSVar2,
                     (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._categoryPanelTypes;
          pSVar2 = System_Type__GetTypeFromHandle
                             ((System_RuntimeTypeHandle_o)TypeRef_UI_SettingsKeybindsPanel,(MethodInfo *)0x0);
          if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary_object__object___Add
                      (pSVar1,(Il2CppObject *)"Keybinds",(Il2CppObject *)pSVar2,
                       (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add)
            ;
            pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__this->fields)._categoryPanelTypes;
            pSVar2 = System_Type__GetTypeFromHandle
                               ((System_RuntimeTypeHandle_o)TypeRef_UI_SettingsSkinsPanel,(MethodInfo *)0x0);
            if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary_object__object___Add
                        (pSVar1,(Il2CppObject *)"Skins",(Il2CppObject *)pSVar2,
                         (MethodInfo_146B4B0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
              pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields)._categoryPanelTypes;
              pSVar2 = System_Type__GetTypeFromHandle
                                 ((System_RuntimeTypeHandle_o)TypeRef_UI_SettingsAbilityPanel,
                                  (MethodInfo *)0x0);
              if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                System_Collections_Generic_Dictionary_object__object___Add
                          (pSVar1,(Il2CppObject *)"Ability",(Il2CppObject *)pSVar2,
                           (MethodInfo_146B4B0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.SettingsPopup$$SetupSettingsList
// il2cpp: void UI_SettingsPopup__SetupSettingsList (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x1822e5f10

void UI_SettingsPopup__SetupSettingsList(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_SaveableSettingsContainer__o *pSVar3;
  Settings_SaveableSettingsContainer_array *pSVar4;
  Settings_GeneralSettings_o *item;
  Settings_SoundSettings_o *item_00;
  Settings_GraphicsSettings_o *item_01;
  Settings_UISettings_o *item_02;
  Settings_InputSettings_o *item_03;
  Settings_CustomSkinSettings_o *pSVar5;
  Settings_AbilitySettings_o *item_04;
  System_Collections_Generic_List_BaseSettingsContainer__o *__this_00;
  Settings_BaseSettingsContainer_array *pSVar6;
  MethodInfo *pMVar7;
  
  if (Il2CppMethodInitialized_184347634 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseSettingsContainer_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184347634 = '\x01';
  }
  pMVar7 = MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_Add;
  pSVar3 = (__this->fields)._saveableSettings;
  if (pSVar3 != (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) {
    pSVar4 = (pSVar3->fields)._items;
    item = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    if (pSVar4 == (Settings_SaveableSettingsContainer_array *)0x0) goto label_1822e634c;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pSVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pSVar4->max_length <= uVar2) goto label_1822e6352;
      pSVar4->m_Items[(int)uVar2] = (Settings_SaveableSettingsContainer_o *)item;
      Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,item);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)item,
                 (MethodInfo_93DD50 *)pMVar7->klass->rgctx_data[0xe].method);
    }
    pMVar7 = MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_Add;
    pSVar3 = (__this->fields)._saveableSettings;
    if (pSVar3 == (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) goto label_1822e634c;
    pSVar4 = (pSVar3->fields)._items;
    item_00 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    if (pSVar4 == (Settings_SaveableSettingsContainer_array *)0x0) goto label_1822e634c;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pSVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pSVar4->max_length <= uVar2) goto label_1822e6352;
      pSVar4->m_Items[(int)uVar2] = (Settings_SaveableSettingsContainer_o *)item_00;
      Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,item_00);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)item_00,
                 (MethodInfo_93DD50 *)pMVar7->klass->rgctx_data[0xe].method);
    }
    pMVar7 = MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_Add;
    pSVar3 = (__this->fields)._saveableSettings;
    if (pSVar3 == (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) goto label_1822e634c;
    pSVar4 = (pSVar3->fields)._items;
    item_01 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    if (pSVar4 == (Settings_SaveableSettingsContainer_array *)0x0) goto label_1822e634c;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pSVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pSVar4->max_length <= uVar2) goto label_1822e6352;
      pSVar4->m_Items[(int)uVar2] = (Settings_SaveableSettingsContainer_o *)item_01;
      Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,item_01);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)item_01,
                 (MethodInfo_93DD50 *)pMVar7->klass->rgctx_data[0xe].method);
    }
    pMVar7 = MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_Add;
    pSVar3 = (__this->fields)._saveableSettings;
    if (pSVar3 == (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) goto label_1822e634c;
    pSVar4 = (pSVar3->fields)._items;
    item_02 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    if (pSVar4 == (Settings_SaveableSettingsContainer_array *)0x0) goto label_1822e634c;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pSVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pSVar4->max_length <= uVar2) goto label_1822e6352;
      pSVar4->m_Items[(int)uVar2] = (Settings_SaveableSettingsContainer_o *)item_02;
      Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,item_02);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)item_02,
                 (MethodInfo_93DD50 *)pMVar7->klass->rgctx_data[0xe].method);
    }
    pMVar7 = MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_Add;
    pSVar3 = (__this->fields)._saveableSettings;
    if (pSVar3 == (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) goto label_1822e634c;
    pSVar4 = (pSVar3->fields)._items;
    item_03 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    if (pSVar4 == (Settings_SaveableSettingsContainer_array *)0x0) goto label_1822e634c;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pSVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pSVar4->max_length <= uVar2) goto label_1822e6352;
      pSVar4->m_Items[(int)uVar2] = (Settings_SaveableSettingsContainer_o *)item_03;
      Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,item_03);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)item_03,
                 (MethodInfo_93DD50 *)pMVar7->klass->rgctx_data[0xe].method);
    }
    pMVar7 = MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_Add;
    pSVar3 = (__this->fields)._saveableSettings;
    if (pSVar3 == (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) goto label_1822e634c;
    pSVar4 = (pSVar3->fields)._items;
    pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    if (pSVar4 == (Settings_SaveableSettingsContainer_array *)0x0) goto label_1822e634c;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pSVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pSVar4->max_length <= uVar2) goto label_1822e6352;
      pSVar4->m_Items[(int)uVar2] = (Settings_SaveableSettingsContainer_o *)pSVar5;
      Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,pSVar5);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pSVar5,
                 (MethodInfo_93DD50 *)pMVar7->klass->rgctx_data[0xe].method);
    }
    pMVar7 = MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_Add;
    pSVar3 = (__this->fields)._saveableSettings;
    if (pSVar3 == (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) goto label_1822e634c;
    pSVar4 = (pSVar3->fields)._items;
    item_04 = TypeInfo_Settings_SettingsManager->static_fields->AbilitySettings;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    if (pSVar4 == (Settings_SaveableSettingsContainer_array *)0x0) goto label_1822e634c;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pSVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pSVar4->max_length <= uVar2) goto label_1822e6352;
      pSVar4->m_Items[(int)uVar2] = (Settings_SaveableSettingsContainer_o *)item_04;
      Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,item_04);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)item_04,
                 (MethodInfo_93DD50 *)pMVar7->klass->rgctx_data[0xe].method);
    }
    pMVar7 = MethodInfo_System_Collections_Generic_List_BaseSettingsContainer_Add;
    __this_00 = (__this->fields)._ignoreDefaultButtonSettings;
    if (__this_00 != (System_Collections_Generic_List_BaseSettingsContainer__o *)0x0) {
      pSVar6 = (__this_00->fields)._items;
      pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      if (pSVar6 != (Settings_BaseSettingsContainer_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        if ((uint)pSVar6->max_length <= uVar2) {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar5,
                     (MethodInfo_93DD50 *)pMVar7->klass->rgctx_data[0xe].method);
          return;
        }
        (__this_00->fields)._size = uVar2 + 1;
        if (uVar2 < (uint)pSVar6->max_length) {
          pSVar6->m_Items[(int)uVar2] = (Settings_BaseSettingsContainer_o *)pSVar5;
          Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar2,pSVar5);
          return;
        }
label_1822e6352:
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_1822e634c:
  ThrowNullReferenceException();
}


// UI.SettingsPopup$$SetupBottomButtons
// il2cpp: void UI_SettingsPopup__SetupBottomButtons (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x1822e5c70

void UI_SettingsPopup__SetupBottomButtons(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  Il2CppClass *value;
  UnityEngine_Transform_o *parent;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  Il2CppObject *pIVar2;
  UI_SettingsPopup___c__DisplayClass21_0_o *object;
  UnityEngine_Events_UnityAction_o *__this_01;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184347635 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_SettingsPopup_c__DisplayClass21_0_SetupBottomButtons_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SettingsPopup_c__DisplayClass21_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Load");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_184347635 = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)(__this);
  pSVar1 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  pIVar2 = SZArrayNew(TypeInfo_string_array,4);
  pSVar1 = "Default";
  if (pIVar2 != (Il2CppObject *)0x0) {
    if (*(int *)&pIVar2[1].monitor != 0) {
      pIVar2[2].klass = (Il2CppClass *)"Default";
      Il2CppCodeGenWriteBarrier(&pIVar2[2].klass,pSVar1);
      pSVar1 = "Load";
      if (1 < *(uint *)&pIVar2[1].monitor) {
        pIVar2[2].monitor = "Load";
        Il2CppCodeGenWriteBarrier(&pIVar2[2].monitor,pSVar1);
        pSVar1 = "Save";
        if (2 < *(uint *)&pIVar2[1].monitor) {
          pIVar2[3].klass = (Il2CppClass *)"Save";
          Il2CppCodeGenWriteBarrier(&pIVar2[3].klass,pSVar1);
          pSVar1 = "Back";
          if (3 < *(uint *)&pIVar2[1].monitor) {
            pIVar2[3].monitor = "Back";
            Il2CppCodeGenWriteBarrier(&pIVar2[3].monitor,pSVar1);
            uVar3 = 0;
            while( true ) {
              if (*(int *)&pIVar2[1].monitor <= (int)uVar3) {
                return;
              }
              object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_SettingsPopup_c__DisplayClass21_0)
              ;
              System_Configuration_ConfigurationCollectionAttribute___ctor
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,
                         (MethodInfo *)0x0);
              if (object == (UI_SettingsPopup___c__DisplayClass21_0_o *)0x0) break;
              (object->fields).__4__this = __this;
              Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
              if (*(uint *)&pIVar2[1].monitor <= uVar3) goto label_1822e5f00;
              value = (&pIVar2[2].klass)[(int)uVar3];
              (object->fields).buttonName = (System_String_o *)value;
              Il2CppCodeGenWriteBarrier(&(object->fields).buttonName,value);
              parent = (__this->fields).BottomBar;
              pSVar1 = (object->fields).buttonName;
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              pSVar1 = UI_UIManager__GetLocaleCommon(pSVar1,(MethodInfo *)0x0);
              __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
              UnityEngine_Events_UnityAction___ctor
                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)object,
                         (intptr_t)MethodInfo_UI_SettingsPopup_c__DisplayClass21_0_SetupBottomButtons_b__0,
                         (MethodInfo *)0x0);
              UI_ElementFactory__CreateTextButton(parent,__this_00,pSVar1,0.0,__this_01,(MethodInfo *)0x0);
              uVar3 = uVar3 + 1;
            }
            goto label_1822e5f06;
          }
        }
      }
    }
label_1822e5f00:
    ThrowIndexOutOfRangeException();
  }
label_1822e5f06:
  ThrowNullReferenceException();
}


// UI.SettingsPopup$$OnConfirmSetDefault
// il2cpp: void UI_SettingsPopup__OnConfirmSetDefault (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x1822e5800
// eh: try 0x1822e58d4..0x1822e59ec -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822e5953: mov rdx, qword ptr [rip + 0x1daf5c6]  ; MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_Dispose
// asm:   0x1822e595a: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822e595f: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822e5964: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822e5969: test rcx, rcx
// asm:   0x1822e596c: jne 0x1822e59ec
// asm:   0x1822e596e: mov rsi, qword ptr [rsp + 0x70]
// asm:   0x1822e59ec: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void UI_SettingsPopup__OnConfirmSetDefault(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_SaveableSettingsContainer__o *__this_00;
  System_Collections_Generic_List_BaseSettingsContainer__o *__this_01;
  UI_BaseMenu_o *pUVar1;
  UI_MessagePopup_o *__this_02;
  Il2CppObject *pIVar2;
  bool bVar3;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  undefined1 local_28 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_20;
  Il2CppObject *local_18;
  
  if (Il2CppMethodInitialized_184347636 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseSettingsContainer_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Settings reset to default.");
    Il2CppMethodInitialized_184347636 = '\x01';
  }
  local_28 = (undefined1  [8])0x0;
  pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_18 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._saveableSettings;
  if (__this_00 != (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_GetEnumerator);
    local_28 = (undefined1  [8])local_40._0_8_;
    pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
    local_18 = local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_MoveNext
                        );
      pIVar2 = local_18;
      if (!bVar3) break;
      __this_01 = (__this->fields)._ignoreDefaultButtonSettings;
      if (__this_01 == (System_Collections_Generic_List_BaseSettingsContainer__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar3 = System_Collections_Generic_List_object___Contains
                        ((System_Collections_Generic_List_object__o *)__this_01,local_18,
                         (MethodInfo_93FC70 *)
                         MethodInfo_System_Collections_Generic_List_BaseSettingsContainer_Contains);
      if (!bVar3) {
        if (pIVar2 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        (*pIVar2->klass->vtable[4].methodPtr)(pIVar2,pIVar2->klass->vtable[4].method);
        (*pIVar2->klass->vtable[0x12].methodPtr)(pIVar2,pIVar2->klass->vtable[0x12].method);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_Dispose);
    UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if ((pUVar1 != (UI_BaseMenu_o *)0x0) &&
       (__this_02 = (pUVar1->fields).MessagePopup, __this_02 != (UI_MessagePopup_o *)0x0)) {
      UI_MessagePopup__Show(__this_02,"Settings reset to default.",true,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.SettingsPopup$$OnBottomBarButtonClick
// il2cpp: void UI_SettingsPopup__OnBottomBarButtonClick (UI_SettingsPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1822e52a0
// eh: try 0x1822e5401..0x1822e57eb -> pad 0x183317e10 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 39 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822e5447: mov rdx, qword ptr [rip + 0x1dafad2]  ; MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_Dispose
// asm:   0x1822e544e: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x1822e5453: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822e5458: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1822e545d: test rcx, rcx
// asm:   0x1822e5460: jne 0x1822e57d6
// asm:   0x1822e5466: mov rdi, qword ptr [rsp + 0x80]
// asm:   0x1822e559c: nop dword ptr [rax]
// asm:   0x1822e55e6: mov rdx, qword ptr [rip + 0x1daf933]  ; MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_Dispose
// asm:   0x1822e55ed: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x1822e55f2: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822e55f7: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1822e55fc: test rcx, rcx
// asm:   0x1822e55ff: jne 0x1822e57eb
// asm:   0x1822e5605: mov rdi, qword ptr [rsp + 0x80]
// asm:   0x1822e57d6: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1822e57eb: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315b20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315b25: push rbp
// asm:   0x183315b26: sub rsp, 0x30
// asm:   0x183315b2a: mov rbp, rdx
// asm:   0x183315b2d: mov rax, qword ptr [rbp + 0x38]
// asm:   0x183315b31: mov rcx, qword ptr [rax]
// asm:   0x183315b34: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183315b38: movabs rax, 0
// asm:   0x183315b42: add rsp, 0x30
// asm:   0x183315b46: pop rbp
// asm:   0x183315b47: ret 
// asm:   0x183317e10: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317e15: push rbp
// asm:   0x183317e16: sub rsp, 0x30
// asm:   0x183317e1a: mov rbp, rdx
// asm:   0x183317e1d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183317e21: mov rcx, qword ptr [rax]
// asm:   0x183317e24: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183317e28: movabs rax, 0
// asm:   0x183317e32: add rsp, 0x30
// asm:   0x183317e36: pop rbp
// asm:   0x183317e37: ret 

void UI_SettingsPopup__OnBottomBarButtonClick
               (UI_SettingsPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_List_SaveableSettingsContainer__o *pSVar2;
  UI_BaseMenu_o *pUVar3;
  UI_NewImportPopup_o *pUVar4;
  UI_MessagePopup_o *__this_00;
  UI_ConfirmPopup_o *__this_01;
  bool bVar5;
  UnityEngine_Events_UnityAction_o *__this_02;
  undefined1 local_38 [16];
  Il2CppObject *local_28;
  undefined1 local_20 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_18;
  Il2CppObject *local_10;
  
  if (Il2CppMethodInitialized_184347637 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_SettingsPopup_OnBottomBarButtonClick_b__23_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Are you sure you want to reset to default?");
    il2cpp_codegen_initialize_runtime_metadata(&"Load");
    il2cpp_codegen_initialize_runtime_metadata(&"Settings loaded from file.");
    il2cpp_codegen_initialize_runtime_metadata(&"Reset default");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_184347637 = '\x01';
  }
  local_20 = (undefined1  [8])0x0;
  pUStack_18 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_10 = (Il2CppObject *)0x0;
  bVar5 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if (bVar5) {
    pSVar2 = (__this->fields)._saveableSettings;
    if (pSVar2 != (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_38,
                 (System_Collections_Generic_List_T__o *)pSVar2,
                 (MethodInfo_91F180 *)
                 MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_GetEnumerator);
      local_20 = (undefined1  [8])local_38._0_8_;
      pUStack_18 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38._8_8_;
      local_10 = local_28;
      local_38._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_38._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_20;
      while (bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               ((System_Collections_Generic_List_Enumerator_object__o *)local_20,
                                (MethodInfo_153A2A0 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_MoveNext
                               ), bVar5) {
        if (local_10 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        (*local_10->klass->vtable[0x12].methodPtr)(local_10,local_10->klass->vtable[0x12].method);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_20,
                 MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_Dispose);
      if (TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName != 2) {
label_1822e5513:
        (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
        return;
      }
      Settings_SettingsManager__NotifySettingsChanged((MethodInfo *)0x0);
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar3 != (UI_BaseMenu_o *)0x0) {
        bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
        if (((pUVar3->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pUVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu))
        {
          il2cpp_codegen_raise_invalid_cast_exception(pUVar3);
        }
        pUVar4 = (*(uint64_t *)((char *)pUVar3 + 0x110));
        if (pUVar4 != (UI_NewImportPopup_o *)0x0) {
          (*(pUVar4->klass->vtable)._21_Show.methodPtr)(pUVar4,(pUVar4->klass->vtable)._21_Show.method);
          goto label_1822e5513;
        }
      }
    }
  }
  else {
    bVar5 = System_String__op_Equality(name,"Load",(MethodInfo *)0x0);
    if (bVar5) {
      pSVar2 = (__this->fields)._saveableSettings;
      if (pSVar2 != (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) {
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_38,
                   (System_Collections_Generic_List_T__o *)pSVar2,
                   (MethodInfo_91F180 *)
                   MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_GetEnumerator);
        local_20 = (undefined1  [8])local_38._0_8_;
        pUStack_18 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38._8_8_;
        local_10 = local_28;
        local_38._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_38._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_20;
        while (bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 ((System_Collections_Generic_List_Enumerator_object__o *)local_20,
                                  (MethodInfo_153A2A0 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_MoveNext
                                 ), bVar5) {
          if (local_10 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          (*local_10->klass->vtable[0x13].methodPtr)(local_10,local_10->klass->vtable[0x13].method);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_20,
                   MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_Dispose);
        UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
        if ((pUVar3 != (UI_BaseMenu_o *)0x0) &&
           (__this_00 = (pUVar3->fields).MessagePopup, __this_00 != (UI_MessagePopup_o *)0x0)) {
          UI_MessagePopup__Show(__this_00,"Settings loaded from file.",true,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      bVar5 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
      if (bVar5) {
        if (TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName == 2) {
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
          if (pUVar3 == (UI_BaseMenu_o *)0x0) goto label_1822e57ca;
          bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
          if (((pUVar3->klass->_2).typeHierarchyDepth < bVar1) ||
             ((pUVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu
             )) {
            il2cpp_codegen_raise_invalid_cast_exception(pUVar3);
          }
          *(undefined1 *)&(*(uint64_t *)((char *)pUVar3 + 0x168)) = 1;
        }
        goto label_1822e5513;
      }
      bVar5 = System_String__op_Equality(name,"Default",(MethodInfo *)0x0);
      if (!bVar5) {
        return;
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar3 != (UI_BaseMenu_o *)0x0) {
        __this_01 = (pUVar3->fields).ConfirmPopup;
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_02,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_UI_SettingsPopup_OnBottomBarButtonClick_b__23_0,(MethodInfo *)0x0);
        if (__this_01 != (UI_ConfirmPopup_o *)0x0) {
          UI_ConfirmPopup__Show
                    (__this_01,"Are you sure you want to reset to default?",__this_02,"Reset default",(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_1822e57ca:
  ThrowNullReferenceException();
}


// UI.SettingsPopup$$Hide
// il2cpp: void UI_SettingsPopup__Hide (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x1822e5140
// eh: try 0x1822e5210..0x1822e5293 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822e5252: mov rdx, qword ptr [rip + 0x1dafcc7]  ; MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_Dispose
// asm:   0x1822e5259: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822e525e: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822e5263: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822e5268: test rcx, rcx
// asm:   0x1822e526b: jne 0x1822e5293
// asm:   0x1822e526d: mov rdi, qword ptr [rsp + 0x70]
// asm:   0x1822e5293: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void UI_SettingsPopup__Hide(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_SaveableSettingsContainer__o *__this_00;
  bool bVar1;
  UnityEngine_GameObject_o *__this_01;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  undefined1 local_28 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_20;
  Il2CppObject *local_18;
  
  if (Il2CppMethodInitialized_184347638 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_GetEnumerator);
    Il2CppMethodInitialized_184347638 = '\x01';
  }
  local_28 = (undefined1  [8])0x0;
  pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_18 = (Il2CppObject *)0x0;
  __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
    if (bVar1) {
      __this_00 = (__this->fields)._saveableSettings;
      if (__this_00 == (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0)
      goto label_1822e5287;
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
                 (System_Collections_Generic_List_T__o *)__this_00,
                 (MethodInfo_91F180 *)
                 MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_GetEnumerator);
      local_28 = (undefined1  [8])local_40._0_8_;
      pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
      local_18 = local_30;
      local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_28,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_MoveNext
                          );
        if (!bVar1) break;
        if (local_18 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        (*local_18->klass->vtable[0xc].methodPtr)(local_18,local_18->klass->vtable[0xc].method);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
                 MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_Dispose);
    }
    UI_BasePopup__Hide((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
    return;
  }
label_1822e5287:
  ThrowNullReferenceException();
}


// UI.SettingsPopup$$.ctor
// il2cpp: void UI_SettingsPopup___ctor (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x1822e6760

void UI_SettingsPopup___ctor(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BaseSettingsContainer__o *__this_00;
  System_Collections_Generic_List_SaveableSettingsContainer__o *__this_01;
  
  if (Il2CppMethodInitialized_184347639 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseSettingsContainer_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_SaveableSettingsContainer);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_BaseSettingsContainer);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    Il2CppMethodInitialized_184347639 = '\x01';
  }
  (__this->fields).LocaleCategory = "SettingsPopup";
  Il2CppCodeGenWriteBarrier(&(__this->fields).LocaleCategory,"SettingsPopup");
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BaseSettingsContainer);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_BaseSettingsContainer_ctor);
  (__this->fields)._ignoreDefaultButtonSettings = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._ignoreDefaultButtonSettings,__this_00);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_SaveableSettingsContainer);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_ctor);
  (__this->fields)._saveableSettings = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._saveableSettings,__this_01);
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SettingsPopup$$<OnBottomBarButtonClick>b__23_0
// il2cpp: void UI_SettingsPopup___OnBottomBarButtonClick_b__23_0 (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x1822e6750

void UI_SettingsPopup___OnBottomBarButtonClick_b__23_0(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  UI_SettingsPopup__OnConfirmSetDefault(__this,(MethodInfo *)0x0);
  return;
}


