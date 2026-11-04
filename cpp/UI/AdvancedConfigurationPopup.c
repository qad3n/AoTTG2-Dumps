// Type: UI.AdvancedConfigurationPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/AdvancedConfigurationPopup.cs
// Prior real C# source: none
// --------------------------------

// UI.AdvancedConfigurationPopup.<>c__DisplayClass19_0$$.ctor
// il2cpp: void UI_AdvancedConfigurationPopup___c__DisplayClass19_0___ctor (UI_AdvancedConfigurationPopup___c__DisplayClass19_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_AdvancedConfigurationPopup___c__DisplayClass19_0___ctor(UI_AdvancedConfigurationPopup___c__DisplayClass19_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.AdvancedConfigurationPopup.<>c__DisplayClass19_0$$<CreateServiceRow>b__0
// il2cpp: void UI_AdvancedConfigurationPopup___c__DisplayClass19_0___CreateServiceRow_b__0 (UI_AdvancedConfigurationPopup___c__DisplayClass19_0_o* __this, const MethodInfo* method);
// 0x182283430

void UI_AdvancedConfigurationPopup___c__DisplayClass19_0___CreateServiceRow_b__0
               (UI_AdvancedConfigurationPopup___c__DisplayClass19_0_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  UI_BaseMenu_o *pUVar2;
  UI_MessagePopup_o *__this_00;
  bool bVar3;
  System_String_o *pSVar4;
  System_Uri_o *local_res8 [4];
  
  if ((__this->fields).__4__this == (UI_AdvancedConfigurationPopup_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = (__this->fields).urlSetting;
  if (Il2CppMethodInitialized_1843473e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Uri);
    il2cpp_codegen_initialize_runtime_metadata(&"Service URL must be a valid http:// or https:// address.");
    Il2CppMethodInitialized_1843473e7 = '\x01';
  }
  local_res8[0] = (System_Uri_o *)0x0;
  if (pSVar1 == (Settings_StringSetting_o *)0x0) goto label_1822835e3;
  bVar3 = System_String__IsNullOrWhiteSpace((pSVar1->fields)._value,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  pSVar4 = (pSVar1->fields)._value;
  if ((TypeInfo_System_Uri->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Uri);
  }
  bVar3 = System_Uri__TryCreate(pSVar4,1,local_res8,(MethodInfo *)0x0);
  if (bVar3) {
    if (local_res8[0] == (System_Uri_o *)0x0) goto label_1822835e3;
    pSVar4 = System_Uri__get_Scheme(local_res8[0],(MethodInfo *)0x0);
    if ((TypeInfo_System_Uri->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Uri);
    }
    bVar3 = System_String__op_Inequality
                      (pSVar4,TypeInfo_System_Uri->static_fields->UriSchemeHttp,(MethodInfo *)0x0);
    if (!bVar3) {
      return;
    }
    if (local_res8[0] == (System_Uri_o *)0x0) goto label_1822835e3;
    pSVar4 = System_Uri__get_Scheme(local_res8[0],(MethodInfo *)0x0);
    if ((TypeInfo_System_Uri->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Uri);
    }
    bVar3 = System_String__op_Inequality
                      (pSVar4,TypeInfo_System_Uri->static_fields->UriSchemeHttps,(MethodInfo *)0x0);
    if (!bVar3) {
      return;
    }
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if ((pUVar2 != (UI_BaseMenu_o *)0x0) &&
     (__this_00 = (pUVar2->fields).MessagePopup, __this_00 != (UI_MessagePopup_o *)0x0)) {
    UI_MessagePopup__Show(__this_00,"Service URL must be a valid http:// or https:// address.",true,(MethodInfo *)0x0);
    return;
  }
label_1822835e3:
  ThrowNullReferenceException();
}


// UI.AdvancedConfigurationPopup.<>c__DisplayClass19_0$$<CreateServiceRow>b__1
// il2cpp: void UI_AdvancedConfigurationPopup___c__DisplayClass19_0___CreateServiceRow_b__1 (UI_AdvancedConfigurationPopup___c__DisplayClass19_0_o* __this, const MethodInfo* method);
// 0x1822835f0

void UI_AdvancedConfigurationPopup___c__DisplayClass19_0___CreateServiceRow_b__1
               (UI_AdvancedConfigurationPopup___c__DisplayClass19_0_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *obj;
  Settings_StringSetting_o *item;
  Settings_StringSetting_o *item_00;
  Settings_AdvancedSettings_o *pSVar1;
  Settings_ListSetting_StringSetting__o *pSVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  
  if ((__this->fields).__4__this != (UI_AdvancedConfigurationPopup_o *)0x0) {
    obj = (UnityEngine_Object_o *)(__this->fields).row;
    item = (__this->fields).keySetting;
    item_00 = (__this->fields).urlSetting;
    if (Il2CppMethodInitialized_1843473e9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_StringSetting_Remove);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value);
      Il2CppMethodInitialized_1843473e9 = '\x01';
    }
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->AdvancedSettings;
    if (((pSVar1 != (Settings_AdvancedSettings_o *)0x0) &&
        (pSVar2 = (pSVar1->fields).ServiceKeys, pSVar2 != (Settings_ListSetting_StringSetting__o *)0x0)) &&
       (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value,
       pSVar3 != (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List_object___Remove
                (pSVar3,(Il2CppObject *)item,
                 (MethodInfo_947340 *)MethodInfo_System_Collections_Generic_List_StringSetting_Remove);
      pSVar2 = (pSVar1->fields).ServiceUrls;
      if ((pSVar2 != (Settings_ListSetting_StringSetting__o *)0x0) &&
         (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value,
         pSVar3 != (System_Collections_Generic_List_object__o *)0x0)) {
        System_Collections_Generic_List_object___Remove
                  (pSVar3,(Il2CppObject *)item_00,
                   (MethodInfo_947340 *)MethodInfo_System_Collections_Generic_List_StringSetting_Remove);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.AdvancedConfigurationPopup.<>c__DisplayClass20_0$$.ctor
// il2cpp: void UI_AdvancedConfigurationPopup___c__DisplayClass20_0___ctor (UI_AdvancedConfigurationPopup___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_AdvancedConfigurationPopup___c__DisplayClass20_0___ctor(UI_AdvancedConfigurationPopup___c__DisplayClass20_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.AdvancedConfigurationPopup.<>c__DisplayClass20_0$$<CreateSecretRow>b__0
// il2cpp: void UI_AdvancedConfigurationPopup___c__DisplayClass20_0___CreateSecretRow_b__0 (UI_AdvancedConfigurationPopup___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x1822836e0

void UI_AdvancedConfigurationPopup___c__DisplayClass20_0___CreateSecretRow_b__0
               (UI_AdvancedConfigurationPopup___c__DisplayClass20_0_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *obj;
  Settings_StringSetting_o *item;
  Settings_StringSetting_o *item_00;
  Settings_AdvancedSettings_o *pSVar1;
  Settings_ListSetting_StringSetting__o *pSVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  
  if ((__this->fields).__4__this != (UI_AdvancedConfigurationPopup_o *)0x0) {
    obj = (UnityEngine_Object_o *)(__this->fields).row;
    item = (__this->fields).keySetting;
    item_00 = (__this->fields).valueSetting;
    if (Il2CppMethodInitialized_1843473eb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_StringSetting_Remove);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value);
      Il2CppMethodInitialized_1843473eb = '\x01';
    }
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->AdvancedSettings;
    if (((pSVar1 != (Settings_AdvancedSettings_o *)0x0) &&
        (pSVar2 = (pSVar1->fields).SecretKeys, pSVar2 != (Settings_ListSetting_StringSetting__o *)0x0)) &&
       (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value,
       pSVar3 != (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List_object___Remove
                (pSVar3,(Il2CppObject *)item,
                 (MethodInfo_947340 *)MethodInfo_System_Collections_Generic_List_StringSetting_Remove);
      pSVar2 = (pSVar1->fields).SecretValues;
      if ((pSVar2 != (Settings_ListSetting_StringSetting__o *)0x0) &&
         (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value,
         pSVar3 != (System_Collections_Generic_List_object__o *)0x0)) {
        System_Collections_Generic_List_object___Remove
                  (pSVar3,(Il2CppObject *)item_00,
                   (MethodInfo_947340 *)MethodInfo_System_Collections_Generic_List_StringSetting_Remove);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.AdvancedConfigurationPopup$$get_Title
// il2cpp: System_String_o* UI_AdvancedConfigurationPopup__get_Title (UI_AdvancedConfigurationPopup_o* __this, const MethodInfo* method);
// 0x182278780

System_String_o *
UI_AdvancedConfigurationPopup__get_Title(UI_AdvancedConfigurationPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843473e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"AdvancedConfigurationPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843473e1 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("MainMenu","AdvancedConfigurationPopup","Title","",
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.AdvancedConfigurationPopup$$get_Width
// il2cpp: float UI_AdvancedConfigurationPopup__get_Width (UI_AdvancedConfigurationPopup_o* __this, const MethodInfo* method);
// 0x182278820

float UI_AdvancedConfigurationPopup__get_Width(UI_AdvancedConfigurationPopup_o *__this,MethodInfo *method)

{
  return 640.0;
}


// UI.AdvancedConfigurationPopup$$get_Height
// il2cpp: float UI_AdvancedConfigurationPopup__get_Height (UI_AdvancedConfigurationPopup_o* __this, const MethodInfo* method);
// 0x182278770

float
UI_AdvancedConfigurationPopup__get_Height(UI_AdvancedConfigurationPopup_o* __this, MethodInfo* method)

{
  return 560.0;
}


// UI.AdvancedConfigurationPopup$$get_VerticalSpacing
// il2cpp: float UI_AdvancedConfigurationPopup__get_VerticalSpacing (UI_AdvancedConfigurationPopup_o* __this, const MethodInfo* method);
// 0x182182ab0

float
UI_AdvancedConfigurationPopup__get_VerticalSpacing(UI_AdvancedConfigurationPopup_o* __this, MethodInfo* method)

{
  return 15.0;
}


// UI.AdvancedConfigurationPopup$$get_ScrollBar
// il2cpp: bool UI_AdvancedConfigurationPopup__get_ScrollBar (UI_AdvancedConfigurationPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_AdvancedConfigurationPopup__get_ScrollBar(UI_AdvancedConfigurationPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.AdvancedConfigurationPopup$$get_UseSound
// il2cpp: bool UI_AdvancedConfigurationPopup__get_UseSound (UI_AdvancedConfigurationPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_AdvancedConfigurationPopup__get_UseSound(UI_AdvancedConfigurationPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.AdvancedConfigurationPopup$$Setup
// il2cpp: void UI_AdvancedConfigurationPopup__Setup (UI_AdvancedConfigurationPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x182277b10

void UI_AdvancedConfigurationPopup__Setup
               (UI_AdvancedConfigurationPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  Settings_AdvancedSettings_o *pSVar1;
  Settings_BoolSetting_o *setting;
  Settings_ListSetting_StringSetting__o *pSVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  System_String_o *category;
  int32_t iVar4;
  System_String_o *pSVar5;
  UI_ElementStyle_o *pUVar6;
  UnityEngine_Events_UnityAction_o *pUVar7;
  System_String_o *tooltip;
  UI_ElementStyle_o *__this_00;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  Settings_StringSetting_o *pSVar10;
  Settings_StringSetting_o *pSVar11;
  UI_ElementStyle_o *__this_01;
  UnityEngine_UI_Text_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_UI_LayoutElement_o *pUVar12;
  System_String_o *pSVar13;
  int iVar14;
  float fVar15;
  
  if (Il2CppMethodInitialized_1843473e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_AdvancedConfigurationPopup_OnAddSecretClick);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_AdvancedConfigurationPopup_OnAddServiceClick);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_AdvancedConfigurationPopup_OnSaveButtonClick);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_AdvancedConfigurationPopup_Setup_b__17_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_GetCount);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"SecretsTitle");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"AddSecretButton");
    il2cpp_codegen_initialize_runtime_metadata(&"UrlHeader");
    il2cpp_codegen_initialize_runtime_metadata(&"KeyHeader");
    il2cpp_codegen_initialize_runtime_metadata(&"SecretsHint");
    il2cpp_codegen_initialize_runtime_metadata(&"ValueHeader");
    il2cpp_codegen_initialize_runtime_metadata(&"AddServiceButton");
    il2cpp_codegen_initialize_runtime_metadata(&"AdvancedConfigurationPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"ServicesEnabledTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ServicesEnabled");
    Il2CppMethodInitialized_1843473e2 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  category = "MainMenu";
  pSVar13 = "AdvancedConfigurationPopup";
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->AdvancedSettings;
  iVar4 = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)(__this);
  pSVar5 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(pUVar6,iVar4,120.0,20.0,pSVar5,(MethodInfo *)0x0);
  pUVar9 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar5 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar7,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_AdvancedConfigurationPopup_Setup_b__17_0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar9,pUVar6,pSVar5,0.0,pUVar7,(MethodInfo *)0x0);
  pUVar9 = (__this->fields).BottomBar;
  pSVar5 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar7,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_AdvancedConfigurationPopup_OnSaveButtonClick,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar9,pUVar6,pSVar5,0.0,pUVar7,(MethodInfo *)0x0);
  pSVar5 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(pUVar6,0x18,340.0,20.0,pSVar5,(MethodInfo *)0x0);
  if (pSVar1 != (Settings_AdvancedSettings_o *)0x0) {
    pUVar9 = (__this->fields).SinglePanel;
    setting = (pSVar1->fields).ServicesEnabled;
    pSVar5 = UI_UIManager__GetLocale
                       (category,pSVar13,"ServicesEnabled","","",
                        (MethodInfo *)0x0);
    tooltip = UI_UIManager__GetLocale
                        (category,pSVar13,"ServicesEnabledTooltip","","",
                         (MethodInfo *)0x0);
    UI_ElementFactory__CreateToggleSetting
              (pUVar9,pUVar6,(Settings_BaseSetting_o *)setting,pSVar5,tooltip,30.0,30.0,
               (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
    UI_BasePanel__CreateHorizontalDivider
              ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
    pSVar5 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    pUVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
    UI_ElementStyle___ctor(pUVar6,0x16,120.0,20.0,pSVar5,(MethodInfo *)0x0);
    pUVar9 = (__this->fields).SinglePanel;
    pSVar5 = UI_UIManager__GetLocale
                       (category,pSVar13,"AddServiceButton","","",
                        (MethodInfo *)0x0);
    pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar7,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_AdvancedConfigurationPopup_OnAddServiceClick,(MethodInfo *)0x0);
    UI_ElementFactory__CreateTextButton(pUVar9,pUVar6,pSVar5,200.0,pUVar7,(MethodInfo *)0x0);
    pSVar5 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
    iVar14 = 0;
    UI_ElementStyle___ctor(__this_00,0x18,0.0,20.0,pSVar5,(MethodInfo *)0x0);
    pUVar8 = UI_ElementFactory__CreateHorizontalGroup((__this->fields).SinglePanel,10.0,3,(MethodInfo *)0x0);
    if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
      pUVar9 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
      pSVar5 = UI_UIManager__GetLocale
                         (category,pSVar13,"KeyHeader","","",
                          (MethodInfo *)0x0);
      UI_AdvancedConfigurationPopup__CreateHeaderLabel(__this,pUVar9,__this_00,pSVar5,140.0,(MethodInfo *)0x0)
      ;
      pUVar9 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
      pSVar5 = UI_UIManager__GetLocale
                         (category,pSVar13,"UrlHeader","","",
                          (MethodInfo *)0x0);
      UI_AdvancedConfigurationPopup__CreateHeaderLabel(__this,pUVar9,__this_00,pSVar5,280.0,(MethodInfo *)0x0)
      ;
      pUVar9 = (__this->fields).SinglePanel;
      fVar15 = (*(__this->klass->vtable)._11_get_VerticalSpacing.methodPtr)
                         (__this,(__this->klass->vtable)._11_get_VerticalSpacing.method);
      pUVar8 = UI_ElementFactory__CreateVerticalGroup(pUVar9,fVar15,0,(MethodInfo *)0x0);
      if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
        pUVar9 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
        (__this->fields)._serviceRowsContainer = pUVar9;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._serviceRowsContainer,pUVar9);
        while (pSVar2 = (pSVar1->fields).ServiceKeys, pSVar2 != (Settings_ListSetting_StringSetting__o *)0x0)
        {
          iVar4 = Settings_ListSetting_object___GetCount
                            ((Settings_ListSetting_T__o *)pSVar2,
                             (MethodInfo_182B100 *)MethodInfo_Settings_ListSetting_StringSetting_GetCount);
          if (iVar4 <= iVar14) {
            UI_BasePanel__CreateHorizontalDivider
                      ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
            pSVar5 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                               (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
            __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
            UI_ElementStyle___ctor(__this_01,0x16,120.0,20.0,pSVar5,(MethodInfo *)0x0);
            pUVar9 = (__this->fields).SinglePanel;
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            pSVar5 = UI_UIManager__GetLocale
                               (category,pSVar13,"SecretsTitle","",
                                "",(MethodInfo *)0x0);
            UI_ElementFactory__CreateDefaultLabel(pUVar9,__this_01,pSVar5,1,3,(MethodInfo *)0x0);
            pUVar9 = (__this->fields).SinglePanel;
            pSVar5 = UI_UIManager__GetLocale
                               (category,pSVar13,"SecretsHint","",
                                "",(MethodInfo *)0x0);
            pUVar8 = UI_ElementFactory__CreateDefaultLabel(pUVar9,__this_00,pSVar5,0,3,(MethodInfo *)0x0);
            if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
              __this_02 = UnityEngine_GameObject__GetComponent_object_
                                    (pUVar8,(MethodInfo_6F5650 *)
                                            MethodInfo_UnityEngine_GameObject_GetComponent_Text);
              if (__this_02 != (UnityEngine_UI_Text_o *)0x0) {
                UnityEngine_UI_Text__set_fontStyle(__this_02,2,(MethodInfo *)0x0);
                pUVar9 = (__this->fields).SinglePanel;
                pSVar5 = UI_UIManager__GetLocale
                                   (category,pSVar13,"AddSecretButton","",
                                    "",(MethodInfo *)0x0);
                pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                UnityEngine_Events_UnityAction___ctor
                          ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar7,(Il2CppObject *)__this,
                           (intptr_t)MethodInfo_UI_AdvancedConfigurationPopup_OnAddSecretClick,
                           (MethodInfo *)0x0);
                UI_ElementFactory__CreateTextButton(pUVar9,pUVar6,pSVar5,200.0,pUVar7,(MethodInfo *)0x0);
                pUVar8 = UI_ElementFactory__CreateHorizontalGroup
                                   ((__this->fields).SinglePanel,10.0,3,(MethodInfo *)0x0);
                if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar9 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
                  pSVar5 = UI_UIManager__GetLocale
                                     (category,pSVar13,"KeyHeader","",
                                      "",(MethodInfo *)0x0);
                  if (Il2CppMethodInitialized_1843473e3 == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata
                              (&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
                    Il2CppMethodInitialized_1843473e3 = '\x01';
                  }
                  __this_03 = UI_ElementFactory__CreateDefaultLabel
                                        (pUVar9,__this_00,pSVar5,0,3,(MethodInfo *)0x0);
                  if (__this_03 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar12 = UnityEngine_GameObject__GetComponent_object_
                                        (__this_03,
                                         (MethodInfo_6F5650 *)
                                         MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
                    if (pUVar12 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                      (*(pUVar12->klass->vtable)._36_set_preferredWidth.methodPtr)
                                (pUVar12,140.0,(pUVar12->klass->vtable)._36_set_preferredWidth.method);
                      pUVar9 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
                      iVar14 = 0;
                      pSVar13 = UI_UIManager__GetLocale
                                          (category,pSVar13,"ValueHeader","",
                                           "",(MethodInfo *)0x0);
                      if (Il2CppMethodInitialized_1843473e3 == '\0') {
                        il2cpp_codegen_initialize_runtime_metadata
                                  (&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
                        Il2CppMethodInitialized_1843473e3 = '\x01';
                      }
                      pUVar8 = UI_ElementFactory__CreateDefaultLabel
                                         (pUVar9,__this_00,pSVar13,0,3,(MethodInfo *)0x0);
                      if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar12 = UnityEngine_GameObject__GetComponent_object_
                                            (pUVar8,(MethodInfo_6F5650 *)
                                                    MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement
                                            );
                        if (pUVar12 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                          (*(pUVar12->klass->vtable)._36_set_preferredWidth.methodPtr)
                                    (pUVar12,280.0,(pUVar12->klass->vtable)._36_set_preferredWidth.method);
                          pUVar9 = (__this->fields).SinglePanel;
                          fVar15 = (*(__this->klass->vtable)._11_get_VerticalSpacing.methodPtr)
                                             (__this,(__this->klass->vtable)._11_get_VerticalSpacing.method);
                          pUVar8 = UI_ElementFactory__CreateVerticalGroup(pUVar9,fVar15,0,(MethodInfo *)0x0);
                          if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                            pUVar9 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
                            (__this->fields)._secretRowsContainer = pUVar9;
                            Il2CppCodeGenWriteBarrier(&(__this->fields)._secretRowsContainer,pUVar9);
                            goto label_182278520;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            break;
          }
          pSVar2 = (pSVar1->fields).ServiceKeys;
          if ((pSVar2 == (Settings_ListSetting_StringSetting__o *)0x0) ||
             (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value,
             pSVar3 == (System_Collections_Generic_List_object__o *)0x0)) break;
          pSVar10 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              (pSVar3,iVar14,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_StringSetting_get_Item);
          pSVar2 = (pSVar1->fields).ServiceUrls;
          if ((pSVar2 == (Settings_ListSetting_StringSetting__o *)0x0) ||
             (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value,
             pSVar3 == (System_Collections_Generic_List_object__o *)0x0)) break;
          pSVar11 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              (pSVar3,iVar14,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_StringSetting_get_Item);
          UI_AdvancedConfigurationPopup__CreateServiceRow(__this,pSVar10,pSVar11,(MethodInfo *)0x0);
          iVar14 = iVar14 + 1;
        }
      }
    }
  }
label_1822785bc:
  ThrowNullReferenceException();
label_182278520:
  pSVar2 = (pSVar1->fields).SecretKeys;
  if (pSVar2 == (Settings_ListSetting_StringSetting__o *)0x0) goto label_1822785bc;
  iVar4 = Settings_ListSetting_object___GetCount
                    ((Settings_ListSetting_T__o *)pSVar2,
                     (MethodInfo_182B100 *)MethodInfo_Settings_ListSetting_StringSetting_GetCount);
  if (iVar4 <= iVar14) {
    return;
  }
  pSVar2 = (pSVar1->fields).SecretKeys;
  if ((pSVar2 == (Settings_ListSetting_StringSetting__o *)0x0) ||
     (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value,
     pSVar3 == (System_Collections_Generic_List_object__o *)0x0)) goto label_1822785bc;
  pSVar10 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                      (pSVar3,iVar14,
                       (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_StringSetting_get_Item)
  ;
  pSVar2 = (pSVar1->fields).SecretValues;
  if ((pSVar2 == (Settings_ListSetting_StringSetting__o *)0x0) ||
     (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value,
     pSVar3 == (System_Collections_Generic_List_object__o *)0x0)) goto label_1822785bc;
  pSVar11 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                      (pSVar3,iVar14,
                       (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_StringSetting_get_Item)
  ;
  UI_AdvancedConfigurationPopup__CreateSecretRow(__this,pSVar10,pSVar11,(MethodInfo *)0x0);
  iVar14 = iVar14 + 1;
  goto label_182278520;
}


// UI.AdvancedConfigurationPopup$$CreateHeaderLabel
// il2cpp: void UI_AdvancedConfigurationPopup__CreateHeaderLabel (UI_AdvancedConfigurationPopup_o* __this, UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* text, float width, const MethodInfo* method);
// 0x182276d80

void UI_AdvancedConfigurationPopup__CreateHeaderLabel
               (UI_AdvancedConfigurationPopup_o *__this,UnityEngine_Transform_o *parent,
               UI_ElementStyle_o *style,System_String_o *text,float width,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_LayoutElement_o *pUVar1;
  
  if (Il2CppMethodInitialized_1843473e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    Il2CppMethodInitialized_1843473e3 = '\x01';
  }
  __this_00 = UI_ElementFactory__CreateDefaultLabel(parent,style,text,0,3,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__GetComponent_object_
                       (__this_00,
                        (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    if (pUVar1 != (UnityEngine_UI_LayoutElement_o *)0x0) {
      (*(pUVar1->klass->vtable)._36_set_preferredWidth.methodPtr)
                (pUVar1,width,(pUVar1->klass->vtable)._36_set_preferredWidth.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.AdvancedConfigurationPopup$$CreateServiceRow
// il2cpp: void UI_AdvancedConfigurationPopup__CreateServiceRow (UI_AdvancedConfigurationPopup_o* __this, Settings_StringSetting_o* keySetting, Settings_StringSetting_o* urlSetting, const MethodInfo* method);
// 0x182277160

void UI_AdvancedConfigurationPopup__CreateServiceRow
               (UI_AdvancedConfigurationPopup_o *__this,Settings_StringSetting_o *keySetting,
               Settings_StringSetting_o *urlSetting,MethodInfo *method)

{
  Settings_StringSetting_o *setting;
  UI_AdvancedConfigurationPopup___c__DisplayClass19_0_o *object;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Events_UnityAction_o *pUVar4;
  
  if (Il2CppMethodInitialized_1843473e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_AdvancedConfigurationPopup_c__DisplayClass19_0_CreateServiceRow_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_AdvancedConfigurationPopup_c__DisplayClass19_0_CreateServiceRow_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_AdvancedConfigurationPopup_c__DisplayClass19_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/TrashIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843473e4 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_UI_AdvancedConfigurationPopup_c__DisplayClass19_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (UI_AdvancedConfigurationPopup___c__DisplayClass19_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    (object->fields).urlSetting = urlSetting;
    Il2CppCodeGenWriteBarrier(&(object->fields).urlSetting,urlSetting);
    (object->fields).keySetting = keySetting;
    Il2CppCodeGenWriteBarrier(&(object->fields).keySetting,keySetting);
    pSVar1 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
    UI_ElementStyle___ctor(__this_00,0x18,0.0,20.0,pSVar1,(MethodInfo *)0x0);
    pUVar2 = UI_ElementFactory__CreateHorizontalGroup
                       ((__this->fields)._serviceRowsContainer,10.0,3,(MethodInfo *)0x0);
    (object->fields).row = pUVar2;
    Il2CppCodeGenWriteBarrier(&(object->fields).row,pUVar2);
    pUVar2 = (object->fields).row;
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar3,__this_00,(Settings_BaseSetting_o *)(object->fields).keySetting,
                 (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),"",140.0,40.0,
                 false,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      pUVar2 = (object->fields).row;
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
        setting = (object->fields).urlSetting;
        pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar4,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_UI_AdvancedConfigurationPopup_c__DisplayClass19_0_CreateServiceRow_b__0,
                   (MethodInfo *)0x0);
        UI_ElementFactory__CreateInputSetting
                  (pUVar3,__this_00,(Settings_BaseSetting_o *)setting,pSVar1,"",280.0,40.0,
                   false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar4,(System_Func_string__bool__o *)0x0,
                   (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        pUVar2 = (object->fields).row;
        if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
          pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
          pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar4,(Il2CppObject *)object,
                     (intptr_t)
                     MethodInfo_UI_AdvancedConfigurationPopup_c__DisplayClass19_0_CreateServiceRow_b__1,
                     (MethodInfo *)0x0);
          pUVar2 = UI_ElementFactory__CreateIconButton
                             (pUVar3,__this_00,"Icons/Navigation/TrashIcon",28.0,28.0,pUVar4,(MethodInfo *)0x0);
          UI_AdvancedConfigurationPopup__SetDeleteButtonColors(__this,pUVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.AdvancedConfigurationPopup$$CreateSecretRow
// il2cpp: void UI_AdvancedConfigurationPopup__CreateSecretRow (UI_AdvancedConfigurationPopup_o* __this, Settings_StringSetting_o* keySetting, Settings_StringSetting_o* valueSetting, const MethodInfo* method);
// 0x182276e20

void UI_AdvancedConfigurationPopup__CreateSecretRow
               (UI_AdvancedConfigurationPopup_o *__this,Settings_StringSetting_o *keySetting,
               Settings_StringSetting_o *valueSetting,MethodInfo *method)

{
  UnityEngine_UI_InputField_o *__this_00;
  UI_AdvancedConfigurationPopup___c__DisplayClass20_0_o *object;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_01;
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  UI_InputSettingElement_o *pUVar3;
  UnityEngine_Events_UnityAction_o *__this_02;
  
  if (Il2CppMethodInitialized_1843473e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_AdvancedConfigurationPopup_c__DisplayClass20_0_CreateSecretRow_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_AdvancedConfigurationPopup_c__DisplayClass20_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/TrashIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843473e5 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_UI_AdvancedConfigurationPopup_c__DisplayClass20_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (UI_AdvancedConfigurationPopup___c__DisplayClass20_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    (object->fields).keySetting = keySetting;
    Il2CppCodeGenWriteBarrier(&(object->fields).keySetting,keySetting);
    (object->fields).valueSetting = valueSetting;
    Il2CppCodeGenWriteBarrier(&(object->fields).valueSetting,valueSetting);
    themePanel = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                           (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
    UI_ElementStyle___ctor(__this_01,0x18,0.0,20.0,themePanel,(MethodInfo *)0x0);
    pUVar1 = UI_ElementFactory__CreateHorizontalGroup
                       ((__this->fields)._secretRowsContainer,10.0,3,(MethodInfo *)0x0);
    (object->fields).row = pUVar1;
    Il2CppCodeGenWriteBarrier(&(object->fields).row,pUVar1);
    pUVar1 = (object->fields).row;
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar2,__this_01,(Settings_BaseSetting_o *)(object->fields).keySetting,
                 (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),"",140.0,40.0,
                 false,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      pUVar1 = (object->fields).row;
      if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
        pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
        pUVar1 = UI_ElementFactory__CreateInputSetting
                           (pUVar2,__this_01,(Settings_BaseSetting_o *)(object->fields).valueSetting,
                            (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),"",
                            280.0,40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                            (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                            (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
          pUVar3 = UnityEngine_GameObject__GetComponent_object_
                             (pUVar1,(MethodInfo_6F5650 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
          if ((pUVar3 != (UI_InputSettingElement_o *)0x0) &&
             (__this_00 = (pUVar3->fields)._inputField, __this_00 != (UnityEngine_UI_InputField_o *)0x0)) {
            UnityEngine_UI_InputField__set_contentType(__this_00,7,(MethodInfo *)0x0);
            UnityEngine_UI_InputField__ForceLabelUpdate(__this_00,(MethodInfo *)0x0);
            pUVar1 = (object->fields).row;
            if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
              pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
              __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
              UnityEngine_Events_UnityAction___ctor
                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_02,(Il2CppObject *)object,
                         (intptr_t)
                         MethodInfo_UI_AdvancedConfigurationPopup_c__DisplayClass20_0_CreateSecretRow_b__0,
                         (MethodInfo *)0x0);
              pUVar1 = UI_ElementFactory__CreateIconButton
                                 (pUVar2,__this_01,"Icons/Navigation/TrashIcon",28.0,28.0,__this_02,(MethodInfo *)0x0
                                 );
              UI_AdvancedConfigurationPopup__SetDeleteButtonColors(__this,pUVar1,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.AdvancedConfigurationPopup$$SetDeleteButtonColors
// il2cpp: void UI_AdvancedConfigurationPopup__SetDeleteButtonColors (UI_AdvancedConfigurationPopup_o* __this, UnityEngine_GameObject_o* deleteButton, const MethodInfo* method);
// 0x182277960

void UI_AdvancedConfigurationPopup__SetDeleteButtonColors
               (UI_AdvancedConfigurationPopup_o *__this,UnityEngine_GameObject_o *deleteButton,
               MethodInfo *method)

{
  UnityEngine_UI_ColorBlock_o *pUVar1;
  undefined8 uVar2;
  bool bVar3;
  UnityEngine_UI_Button_o *__this_00;
  UnityEngine_UI_RawImage_o *x;
  UnityEngine_Color_Fields local_88;
  UnityEngine_UI_ColorBlock_o local_78;
  
  if (Il2CppMethodInitialized_1843473e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_ColorBlock);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843473e6 = '\x01';
  }
  if (deleteButton != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__GetComponent_object_
                          (deleteButton,
                           (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    if (__this_00 != (UnityEngine_UI_Button_o *)0x0) {
      pUVar1 = &(__this_00->fields).m_Colors;
      local_78.fields.m_NormalColor.fields.r = (pUVar1->fields).m_NormalColor.fields.r;
      local_78.fields.m_NormalColor.fields.g = (pUVar1->fields).m_NormalColor.fields.g;
      pUVar1 = &(__this_00->fields).m_Colors;
      local_78.fields.m_NormalColor.fields.b = (pUVar1->fields).m_NormalColor.fields.b;
      local_78.fields.m_NormalColor.fields.a = (pUVar1->fields).m_NormalColor.fields.a;
      pUVar1 = &(__this_00->fields).m_Colors;
      local_78.fields.m_HighlightedColor.fields.r = (pUVar1->fields).m_HighlightedColor.fields.r;
      local_78.fields.m_HighlightedColor.fields.g = (pUVar1->fields).m_HighlightedColor.fields.g;
      pUVar1 = &(__this_00->fields).m_Colors;
      local_78.fields.m_HighlightedColor.fields.b = (pUVar1->fields).m_HighlightedColor.fields.b;
      local_78.fields.m_HighlightedColor.fields.a = (pUVar1->fields).m_HighlightedColor.fields.a;
      pUVar1 = &(__this_00->fields).m_Colors;
      local_78.fields.m_PressedColor.fields.r = (pUVar1->fields).m_PressedColor.fields.r;
      local_78.fields.m_PressedColor.fields.g = (pUVar1->fields).m_PressedColor.fields.g;
      pUVar1 = &(__this_00->fields).m_Colors;
      local_78.fields.m_PressedColor.fields.b = (pUVar1->fields).m_PressedColor.fields.b;
      local_78.fields.m_PressedColor.fields.a = (pUVar1->fields).m_PressedColor.fields.a;
      pUVar1 = &(__this_00->fields).m_Colors;
      local_78.fields.m_SelectedColor.fields.r = (pUVar1->fields).m_SelectedColor.fields.r;
      local_78.fields.m_SelectedColor.fields.g = (pUVar1->fields).m_SelectedColor.fields.g;
      pUVar1 = &(__this_00->fields).m_Colors;
      local_78.fields.m_SelectedColor.fields.b = (pUVar1->fields).m_SelectedColor.fields.b;
      local_78.fields.m_SelectedColor.fields.a = (pUVar1->fields).m_SelectedColor.fields.a;
      pUVar1 = &(__this_00->fields).m_Colors;
      local_78.fields.m_DisabledColor.fields.r = (pUVar1->fields).m_DisabledColor.fields.r;
      local_78.fields.m_DisabledColor.fields.g = (pUVar1->fields).m_DisabledColor.fields.g;
      pUVar1 = &(__this_00->fields).m_Colors;
      local_78.fields.m_DisabledColor.fields.b = (pUVar1->fields).m_DisabledColor.fields.b;
      local_78.fields.m_DisabledColor.fields.a = (pUVar1->fields).m_DisabledColor.fields.a;
      uVar2._0_4_ = (__this_00->fields).m_Colors.fields.m_ColorMultiplier;
      uVar2._4_4_ = (__this_00->fields).m_Colors.fields.m_FadeDuration;
      if ((TypeInfo_UnityEngine_UI_ColorBlock->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_ColorBlock);
      }
      local_78.fields.m_NormalColor.fields.r = 1.0;
      local_78.fields.m_NormalColor.fields.g = 0.2;
      local_78.fields.m_NormalColor.fields.b = 0.2;
      local_78.fields.m_NormalColor.fields.a = 1.0;
      local_78.fields.m_HighlightedColor.fields.r = 1.0;
      local_78.fields.m_HighlightedColor.fields.g = 0.3;
      local_78.fields.m_HighlightedColor.fields.b = 0.3;
      local_78.fields.m_HighlightedColor.fields.a = 1.0;
      local_78.fields.m_PressedColor.fields.r = 0.85;
      local_78.fields.m_PressedColor.fields.g = 0.1;
      local_78.fields.m_PressedColor.fields.b = 0.1;
      local_78.fields.m_PressedColor.fields.a = 1.0;
      local_78.fields.m_SelectedColor.fields.r = 1.0;
      local_78.fields.m_SelectedColor.fields.g = 0.3;
      local_78.fields.m_SelectedColor.fields.b = 0.3;
      local_78.fields.m_SelectedColor.fields.a = 1.0;
      local_78.fields.m_DisabledColor.fields.r = 0.5;
      local_78.fields.m_DisabledColor.fields.g = 0.1;
      local_78.fields.m_DisabledColor.fields.b = 0.1;
      local_78.fields.m_DisabledColor.fields.a = 0.8;
      local_78.fields._80_8_ = uVar2;
      UnityEngine_UI_Selectable__set_colors
                ((UnityEngine_UI_Selectable_o *)__this_00,&local_78,(MethodInfo *)0x0);
      x = UnityEngine_GameObject__GetComponent_object_
                    (deleteButton,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RawImage
                    );
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if (x == (UnityEngine_UI_RawImage_o *)0x0) goto label_182277afd;
        local_88.r = 1.0;
        local_88.g = 1.0;
        local_88.b = 1.0;
        local_88.a = 1.0;
        (*(x->klass->vtable)._23_set_color.methodPtr)
                  (x,(UnityEngine_Color_o *)&local_88,(x->klass->vtable)._23_set_color.method);
      }
      return;
    }
  }
label_182277afd:
  ThrowNullReferenceException();
}


// UI.AdvancedConfigurationPopup$$ValidateUrl
// il2cpp: void UI_AdvancedConfigurationPopup__ValidateUrl (UI_AdvancedConfigurationPopup_o* __this, Settings_StringSetting_o* urlSetting, const MethodInfo* method);
// 0x1822785d0

void UI_AdvancedConfigurationPopup__ValidateUrl
               (UI_AdvancedConfigurationPopup_o *__this,Settings_StringSetting_o *urlSetting,
               MethodInfo *method)

{
  UI_BaseMenu_o *pUVar1;
  UI_MessagePopup_o *__this_00;
  bool bVar2;
  System_String_o *pSVar3;
  System_Uri_o *local_res10 [3];
  
  if (Il2CppMethodInitialized_1843473e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Uri);
    il2cpp_codegen_initialize_runtime_metadata(&"Service URL must be a valid http:// or https:// address.");
    Il2CppMethodInitialized_1843473e7 = '\x01';
  }
  local_res10[0] = (System_Uri_o *)0x0;
  if (urlSetting == (Settings_StringSetting_o *)0x0) goto label_18227876a;
  bVar2 = System_String__IsNullOrWhiteSpace((urlSetting->fields)._value,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  pSVar3 = (urlSetting->fields)._value;
  if ((TypeInfo_System_Uri->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Uri);
  }
  bVar2 = System_Uri__TryCreate(pSVar3,1,local_res10,(MethodInfo *)0x0);
  if (bVar2) {
    if (local_res10[0] == (System_Uri_o *)0x0) goto label_18227876a;
    pSVar3 = System_Uri__get_Scheme(local_res10[0],(MethodInfo *)0x0);
    if ((TypeInfo_System_Uri->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Uri);
    }
    bVar2 = System_String__op_Inequality
                      (pSVar3,TypeInfo_System_Uri->static_fields->UriSchemeHttp,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    if (local_res10[0] == (System_Uri_o *)0x0) goto label_18227876a;
    pSVar3 = System_Uri__get_Scheme(local_res10[0],(MethodInfo *)0x0);
    if ((TypeInfo_System_Uri->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Uri);
    }
    bVar2 = System_String__op_Inequality
                      (pSVar3,TypeInfo_System_Uri->static_fields->UriSchemeHttps,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if ((pUVar1 != (UI_BaseMenu_o *)0x0) &&
     (__this_00 = (pUVar1->fields).MessagePopup, __this_00 != (UI_MessagePopup_o *)0x0)) {
    UI_MessagePopup__Show(__this_00,"Service URL must be a valid http:// or https:// address.",true,(MethodInfo *)0x0);
    return;
  }
label_18227876a:
  ThrowNullReferenceException();
}


// UI.AdvancedConfigurationPopup$$OnAddServiceClick
// il2cpp: void UI_AdvancedConfigurationPopup__OnAddServiceClick (UI_AdvancedConfigurationPopup_o* __this, const MethodInfo* method);
// 0x1822775b0

void UI_AdvancedConfigurationPopup__OnAddServiceClick
               (UI_AdvancedConfigurationPopup_o *__this,MethodInfo *method)

{
  Settings_AdvancedSettings_o *pSVar1;
  System_String_o *pSVar2;
  Settings_ListSetting_StringSetting__o *pSVar3;
  Settings_StringSetting_o *__this_00;
  Settings_StringSetting_o *__this_01;
  
  if (Il2CppMethodInitialized_1843473e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_AddItem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_1843473e8 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->AdvancedSettings;
  pSVar2 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(__this_00,pSVar2,0x40,(MethodInfo *)0x0);
  pSVar2 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(__this_01,pSVar2,0x800,(MethodInfo *)0x0);
  if ((pSVar1 != (Settings_AdvancedSettings_o *)0x0) &&
     (pSVar3 = (pSVar1->fields).ServiceKeys, pSVar3 != (Settings_ListSetting_StringSetting__o *)0x0)) {
    Settings_ListSetting_object___AddItem
              ((Settings_ListSetting_T__o *)pSVar3,(Settings_BaseSetting_o *)__this_00,
               (MethodInfo_182A740 *)MethodInfo_Settings_ListSetting_StringSetting_AddItem);
    pSVar3 = (pSVar1->fields).ServiceUrls;
    if (pSVar3 != (Settings_ListSetting_StringSetting__o *)0x0) {
      Settings_ListSetting_object___AddItem
                ((Settings_ListSetting_T__o *)pSVar3,(Settings_BaseSetting_o *)__this_01,
                 (MethodInfo_182A740 *)MethodInfo_Settings_ListSetting_StringSetting_AddItem);
      UI_AdvancedConfigurationPopup__CreateServiceRow(__this,__this_00,__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.AdvancedConfigurationPopup$$OnRemoveServiceClick
// il2cpp: void UI_AdvancedConfigurationPopup__OnRemoveServiceClick (UI_AdvancedConfigurationPopup_o* __this, UnityEngine_GameObject_o* row, Settings_StringSetting_o* keySetting, Settings_StringSetting_o* urlSetting, const MethodInfo* method);
// 0x1822777b0

void UI_AdvancedConfigurationPopup__OnRemoveServiceClick
               (UI_AdvancedConfigurationPopup_o *__this,UnityEngine_GameObject_o *row,
               Settings_StringSetting_o *keySetting,Settings_StringSetting_o *urlSetting,MethodInfo *method)

{
  Settings_AdvancedSettings_o *pSVar1;
  Settings_ListSetting_StringSetting__o *pSVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  
  if (Il2CppMethodInitialized_1843473e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    Il2CppMethodInitialized_1843473e9 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->AdvancedSettings;
  if (((pSVar1 != (Settings_AdvancedSettings_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).ServiceKeys, pSVar2 != (Settings_ListSetting_StringSetting__o *)0x0)) &&
     (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value,
     pSVar3 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___Remove
              (pSVar3,(Il2CppObject *)keySetting,
               (MethodInfo_947340 *)MethodInfo_System_Collections_Generic_List_StringSetting_Remove);
    pSVar2 = (pSVar1->fields).ServiceUrls;
    if ((pSVar2 != (Settings_ListSetting_StringSetting__o *)0x0) &&
       (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value,
       pSVar3 != (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List_object___Remove
                (pSVar3,(Il2CppObject *)urlSetting,
                 (MethodInfo_947340 *)MethodInfo_System_Collections_Generic_List_StringSetting_Remove);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)row,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.AdvancedConfigurationPopup$$OnAddSecretClick
// il2cpp: void UI_AdvancedConfigurationPopup__OnAddSecretClick (UI_AdvancedConfigurationPopup_o* __this, const MethodInfo* method);
// 0x182277490

void UI_AdvancedConfigurationPopup__OnAddSecretClick
               (UI_AdvancedConfigurationPopup_o *__this,MethodInfo *method)

{
  Settings_AdvancedSettings_o *pSVar1;
  System_String_o *pSVar2;
  Settings_ListSetting_StringSetting__o *pSVar3;
  Settings_StringSetting_o *__this_00;
  Settings_StringSetting_o *__this_01;
  
  if (Il2CppMethodInitialized_1843473ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_AddItem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_1843473ea = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->AdvancedSettings;
  pSVar2 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(__this_00,pSVar2,0x40,(MethodInfo *)0x0);
  pSVar2 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(__this_01,pSVar2,0x1000,(MethodInfo *)0x0);
  if ((pSVar1 != (Settings_AdvancedSettings_o *)0x0) &&
     (pSVar3 = (pSVar1->fields).SecretKeys, pSVar3 != (Settings_ListSetting_StringSetting__o *)0x0)) {
    Settings_ListSetting_object___AddItem
              ((Settings_ListSetting_T__o *)pSVar3,(Settings_BaseSetting_o *)__this_00,
               (MethodInfo_182A740 *)MethodInfo_Settings_ListSetting_StringSetting_AddItem);
    pSVar3 = (pSVar1->fields).SecretValues;
    if (pSVar3 != (Settings_ListSetting_StringSetting__o *)0x0) {
      Settings_ListSetting_object___AddItem
                ((Settings_ListSetting_T__o *)pSVar3,(Settings_BaseSetting_o *)__this_01,
                 (MethodInfo_182A740 *)MethodInfo_Settings_ListSetting_StringSetting_AddItem);
      UI_AdvancedConfigurationPopup__CreateSecretRow(__this,__this_00,__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.AdvancedConfigurationPopup$$OnRemoveSecretClick
// il2cpp: void UI_AdvancedConfigurationPopup__OnRemoveSecretClick (UI_AdvancedConfigurationPopup_o* __this, UnityEngine_GameObject_o* row, Settings_StringSetting_o* keySetting, Settings_StringSetting_o* valueSetting, const MethodInfo* method);
// 0x1822776d0

void UI_AdvancedConfigurationPopup__OnRemoveSecretClick
               (UI_AdvancedConfigurationPopup_o *__this,UnityEngine_GameObject_o *row,
               Settings_StringSetting_o *keySetting,Settings_StringSetting_o *valueSetting,MethodInfo *method)

{
  Settings_AdvancedSettings_o *pSVar1;
  Settings_ListSetting_StringSetting__o *pSVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  
  if (Il2CppMethodInitialized_1843473eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    Il2CppMethodInitialized_1843473eb = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->AdvancedSettings;
  if (((pSVar1 != (Settings_AdvancedSettings_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).SecretKeys, pSVar2 != (Settings_ListSetting_StringSetting__o *)0x0)) &&
     (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value,
     pSVar3 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___Remove
              (pSVar3,(Il2CppObject *)keySetting,
               (MethodInfo_947340 *)MethodInfo_System_Collections_Generic_List_StringSetting_Remove);
    pSVar2 = (pSVar1->fields).SecretValues;
    if ((pSVar2 != (Settings_ListSetting_StringSetting__o *)0x0) &&
       (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value,
       pSVar3 != (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List_object___Remove
                (pSVar3,(Il2CppObject *)valueSetting,
                 (MethodInfo_947340 *)MethodInfo_System_Collections_Generic_List_StringSetting_Remove);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)row,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.AdvancedConfigurationPopup$$OnSaveButtonClick
// il2cpp: void UI_AdvancedConfigurationPopup__OnSaveButtonClick (UI_AdvancedConfigurationPopup_o* __this, const MethodInfo* method);
// 0x182277890

void UI_AdvancedConfigurationPopup__OnSaveButtonClick
               (UI_AdvancedConfigurationPopup_o *__this,MethodInfo *method)

{
  Settings_AdvancedSettings_o *pSVar1;
  UI_BaseMenu_o *pUVar2;
  UI_MessagePopup_o *__this_00;
  
  if (Il2CppMethodInitialized_1843473ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Advanced configuration saved.");
    Il2CppMethodInitialized_1843473ec = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->AdvancedSettings;
  if (pSVar1 != (Settings_AdvancedSettings_o *)0x0) {
    (*(pSVar1->klass->vtable)._18_Save.methodPtr)(pSVar1,(pSVar1->klass->vtable)._18_Save.method);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if ((pUVar2 != (UI_BaseMenu_o *)0x0) &&
       (__this_00 = (pUVar2->fields).MessagePopup, __this_00 != (UI_MessagePopup_o *)0x0)) {
      UI_MessagePopup__Show(__this_00,"Advanced configuration saved.",true,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.AdvancedConfigurationPopup$$.ctor
// il2cpp: void UI_AdvancedConfigurationPopup___ctor (UI_AdvancedConfigurationPopup_o* __this, const MethodInfo* method);
// 0x1821c11a0

void
UI_AdvancedConfigurationPopup___ctor(UI_AdvancedConfigurationPopup_o* __this, MethodInfo* method)

{
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.AdvancedConfigurationPopup$$<Setup>b__17_0
// il2cpp: void UI_AdvancedConfigurationPopup___Setup_b__17_0 (UI_AdvancedConfigurationPopup_o* __this, const MethodInfo* method);
// 0x180a37400

void
UI_AdvancedConfigurationPopup___Setup_b__17_0(UI_AdvancedConfigurationPopup_o* __this, MethodInfo* method)

{
  Unity_VisualScripting_IGraph_o *pUVar1;
  
  pUVar1 = (Unity_VisualScripting_IGraph_o *)
           (*(__this->klass->vtable)._22_unknown.methodPtr)(__this,(__this->klass->vtable)._22_unknown.method)
  ;
  return pUVar1;
}


