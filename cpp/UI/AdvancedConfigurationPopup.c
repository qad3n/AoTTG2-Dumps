// Type: UI.AdvancedConfigurationPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/UI/AdvancedConfigurationPopup.cs
// Prior real C# source: none
// --------------------------------

// UI.AdvancedConfigurationPopup.<>c__DisplayClass19_0$$.ctor
// il2cpp: void UI_AdvancedConfigurationPopup___c__DisplayClass19_0___ctor (UI_AdvancedConfigurationPopup___c__DisplayClass19_0_o* __this, const MethodInfo* method);
// 0x43fa1a0

void UI_AdvancedConfigurationPopup___c__DisplayClass19_0___ctor
               (UI_AdvancedConfigurationPopup___c__DisplayClass19_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.AdvancedConfigurationPopup.<>c__DisplayClass19_0$$<CreateServiceRow>b__0
// il2cpp: void UI_AdvancedConfigurationPopup___c__DisplayClass19_0___CreateServiceRow_b__0 (UI_AdvancedConfigurationPopup___c__DisplayClass19_0_o* __this, const MethodInfo* method);
// 0x43faa30

void UI_AdvancedConfigurationPopup___c__DisplayClass19_0___CreateServiceRow_b__0
               (UI_AdvancedConfigurationPopup___c__DisplayClass19_0_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *in_R8;
  
  if ((__this->fields).__4__this != (UI_AdvancedConfigurationPopup_o *)0x0) {
    UI_AdvancedConfigurationPopup__ValidateUrl
              ((UI_AdvancedConfigurationPopup_o *)__this,(__this->fields).urlSetting,in_RDX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((((UI_AdvancedConfigurationPopup_o *)__this)->fields).m_CachedPtr != 0) {
    UI_AdvancedConfigurationPopup__OnRemoveServiceClick
              ((UI_AdvancedConfigurationPopup_o *)__this,
               (UnityEngine_GameObject_o *)(((UI_AdvancedConfigurationPopup_o *)__this)->fields).SinglePanel,
               (Settings_StringSetting_o *)
               (((UI_AdvancedConfigurationPopup_o *)__this)->fields).DoublePanelLeft,
               (Settings_StringSetting_o *)
               (((UI_AdvancedConfigurationPopup_o *)__this)->fields).m_CancellationTokenSource,in_R8);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((((UI_AdvancedConfigurationPopup_o *)__this)->fields).m_CachedPtr != 0) {
    UI_AdvancedConfigurationPopup__OnRemoveSecretClick
              ((UI_AdvancedConfigurationPopup_o *)__this,
               (UnityEngine_GameObject_o *)
               (((UI_AdvancedConfigurationPopup_o *)__this)->fields).m_CancellationTokenSource,
               (Settings_StringSetting_o *)(((UI_AdvancedConfigurationPopup_o *)__this)->fields).SinglePanel,
               (Settings_StringSetting_o *)
               (((UI_AdvancedConfigurationPopup_o *)__this)->fields).DoublePanelLeft,in_R8);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.AdvancedConfigurationPopup.<>c__DisplayClass19_0$$<CreateServiceRow>b__1
// il2cpp: void UI_AdvancedConfigurationPopup___c__DisplayClass19_0___CreateServiceRow_b__1 (UI_AdvancedConfigurationPopup___c__DisplayClass19_0_o* __this, const MethodInfo* method);
// 0x43faa50

void UI_AdvancedConfigurationPopup___c__DisplayClass19_0___CreateServiceRow_b__1
               (UI_AdvancedConfigurationPopup___c__DisplayClass19_0_o *__this,MethodInfo *method)

{
  MethodInfo *in_R8;
  
  if ((__this->fields).__4__this != (UI_AdvancedConfigurationPopup_o *)0x0) {
    UI_AdvancedConfigurationPopup__OnRemoveServiceClick
              ((UI_AdvancedConfigurationPopup_o *)__this,(__this->fields).row,(__this->fields).keySetting,
               (__this->fields).urlSetting,in_R8);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((((UI_AdvancedConfigurationPopup_o *)__this)->fields).m_CachedPtr != 0) {
    UI_AdvancedConfigurationPopup__OnRemoveSecretClick
              ((UI_AdvancedConfigurationPopup_o *)__this,
               (UnityEngine_GameObject_o *)
               (((UI_AdvancedConfigurationPopup_o *)__this)->fields).m_CancellationTokenSource,
               (Settings_StringSetting_o *)(((UI_AdvancedConfigurationPopup_o *)__this)->fields).SinglePanel,
               (Settings_StringSetting_o *)
               (((UI_AdvancedConfigurationPopup_o *)__this)->fields).DoublePanelLeft,in_R8);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.AdvancedConfigurationPopup.<>c__DisplayClass20_0$$.ctor
// il2cpp: void UI_AdvancedConfigurationPopup___c__DisplayClass20_0___ctor (UI_AdvancedConfigurationPopup___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x43fa360

void UI_AdvancedConfigurationPopup___c__DisplayClass20_0___ctor
               (UI_AdvancedConfigurationPopup___c__DisplayClass20_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.AdvancedConfigurationPopup.<>c__DisplayClass20_0$$<CreateSecretRow>b__0
// il2cpp: void UI_AdvancedConfigurationPopup___c__DisplayClass20_0___CreateSecretRow_b__0 (UI_AdvancedConfigurationPopup___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x43faa70

void UI_AdvancedConfigurationPopup___c__DisplayClass20_0___CreateSecretRow_b__0
               (UI_AdvancedConfigurationPopup___c__DisplayClass20_0_o *__this,MethodInfo *method)

{
  MethodInfo *in_R8;
  
  if ((__this->fields).__4__this != (UI_AdvancedConfigurationPopup_o *)0x0) {
    UI_AdvancedConfigurationPopup__OnRemoveSecretClick
              ((UI_AdvancedConfigurationPopup_o *)__this,(__this->fields).row,(__this->fields).keySetting,
               (__this->fields).valueSetting,in_R8);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.AdvancedConfigurationPopup$$get_Title
// il2cpp: System_String_o* UI_AdvancedConfigurationPopup__get_Title (UI_AdvancedConfigurationPopup_o* __this, const MethodInfo* method);
// 0x43f8ee0

System_String_o *
UI_AdvancedConfigurationPopup__get_Title(UI_AdvancedConfigurationPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae550 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"MainMenu");
    il2cpp_runtime_helper_023445d0(&"Title");
    il2cpp_runtime_helper_023445d0(&"AdvancedConfigurationPopup");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae550 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("MainMenu","AdvancedConfigurationPopup","Title","","",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.AdvancedConfigurationPopup$$get_Width
// il2cpp: float UI_AdvancedConfigurationPopup__get_Width (UI_AdvancedConfigurationPopup_o* __this, const MethodInfo* method);
// 0x43f8f80

float UI_AdvancedConfigurationPopup__get_Width(UI_AdvancedConfigurationPopup_o *__this,MethodInfo *method)

{
  return 640.0;
}


// UI.AdvancedConfigurationPopup$$get_Height
// il2cpp: float UI_AdvancedConfigurationPopup__get_Height (UI_AdvancedConfigurationPopup_o* __this, const MethodInfo* method);
// 0x43f8f90

float UI_AdvancedConfigurationPopup__get_Height(UI_AdvancedConfigurationPopup_o *__this,MethodInfo *method)

{
  return 560.0;
}


// UI.AdvancedConfigurationPopup$$get_VerticalSpacing
// il2cpp: float UI_AdvancedConfigurationPopup__get_VerticalSpacing (UI_AdvancedConfigurationPopup_o* __this, const MethodInfo* method);
// 0x43f8fa0

float UI_AdvancedConfigurationPopup__get_VerticalSpacing
                (UI_AdvancedConfigurationPopup_o *__this,MethodInfo *method)

{
  return 15.0;
}


// UI.AdvancedConfigurationPopup$$get_ScrollBar
// il2cpp: bool UI_AdvancedConfigurationPopup__get_ScrollBar (UI_AdvancedConfigurationPopup_o* __this, const MethodInfo* method);
// 0x43f8fb0

bool_conflict
UI_AdvancedConfigurationPopup__get_ScrollBar(UI_AdvancedConfigurationPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.AdvancedConfigurationPopup$$get_UseSound
// il2cpp: bool UI_AdvancedConfigurationPopup__get_UseSound (UI_AdvancedConfigurationPopup_o* __this, const MethodInfo* method);
// 0x43f8fc0

bool_conflict
UI_AdvancedConfigurationPopup__get_UseSound(UI_AdvancedConfigurationPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.AdvancedConfigurationPopup$$Setup
// il2cpp: void UI_AdvancedConfigurationPopup__Setup (UI_AdvancedConfigurationPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43f8fd0

void UI_AdvancedConfigurationPopup__Setup
               (UI_AdvancedConfigurationPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  long lVar1;
  Settings_BaseSetting_o *setting;
  System_Collections_Generic_List_object__o *pSVar2;
  System_String_o *category;
  int32_t iVar3;
  System_String_o *pSVar4;
  UI_ElementStyle_o *pUVar5;
  UnityEngine_Events_UnityAction_o *pUVar6;
  System_String_o *tooltip;
  UI_ElementStyle_o *__this_00;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_GameObject_o *pUVar9;
  Il2CppObject *pIVar10;
  Settings_StringSetting_o *pSVar11;
  Settings_StringSetting_o *pSVar12;
  UI_ElementStyle_o *__this_01;
  UnityEngine_UI_Text_o *__this_02;
  System_String_o *pSVar13;
  Il2CppClass *pIVar14;
  int iVar15;
  Settings_ListSetting_T__o *pSVar16;
  float fVar17;
  
  if (g_data_057ae551 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnAddSecretClick);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnAddServiceClick);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnSaveButtonClick);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__17_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_GetCount);
    il2cpp_runtime_helper_023445d0(&MethodInfo_StringSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_StringSetting_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"MainMenu");
    il2cpp_runtime_helper_023445d0(&"SecretsTitle");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"AddSecretButton");
    il2cpp_runtime_helper_023445d0(&"UrlHeader");
    il2cpp_runtime_helper_023445d0(&"KeyHeader");
    il2cpp_runtime_helper_023445d0(&"SecretsHint");
    il2cpp_runtime_helper_023445d0(&"ValueHeader");
    il2cpp_runtime_helper_023445d0(&"AddServiceButton");
    il2cpp_runtime_helper_023445d0(&"AdvancedConfigurationPopup");
    il2cpp_runtime_helper_023445d0(&"Save");
    il2cpp_runtime_helper_023445d0(&"ServicesEnabledTooltip");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"ServicesEnabled");
    g_data_057ae551 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  category = "MainMenu";
  pSVar13 = "AdvancedConfigurationPopup";
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
  iVar3 = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                    (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar4 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar5 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar5,iVar3,120.0,20.0,pSVar4,(MethodInfo *)0x0);
  pUVar8 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  pUVar6 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar8,pUVar5,pSVar4,0.0,pUVar6,(MethodInfo *)0x0);
  pUVar8 = (__this->fields).BottomBar;
  pSVar4 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  pUVar6 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar8,pUVar5,pSVar4,0.0,pUVar6,(MethodInfo *)0x0);
  pSVar4 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar5 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar5,0x18,340.0,20.0,pSVar4,(MethodInfo *)0x0);
  if (lVar1 != 0) {
    pUVar8 = (__this->fields).SinglePanel;
    setting = *(Settings_BaseSetting_o **)(lVar1 + 0x20);
    pSVar4 = UI_UIManager__GetLocale
                       (category,pSVar13,"ServicesEnabled","","",(MethodInfo *)0x0);
    tooltip = UI_UIManager__GetLocale
                        (category,pSVar13,"ServicesEnabledTooltip","","",(MethodInfo *)0x0);
    UI_ElementFactory__CreateToggleSetting
              (pUVar8,pUVar5,setting,pSVar4,tooltip,30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0,
               (MethodInfo *)0x0);
    UI_BasePanel__CreateHorizontalDivider
              ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
    pSVar4 = (System_String_o *)
             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    pUVar5 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(pUVar5,0x16,120.0,20.0,pSVar4,(MethodInfo *)0x0);
    pUVar8 = (__this->fields).SinglePanel;
    pSVar4 = UI_UIManager__GetLocale
                       (category,pSVar13,"AddServiceButton","","",(MethodInfo *)0x0);
    pUVar6 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    UI_ElementFactory__CreateTextButton(pUVar8,pUVar5,pSVar4,200.0,pUVar6,(MethodInfo *)0x0);
    pSVar4 = (System_String_o *)
             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(__this_00,0x18,0.0,20.0,pSVar4,(MethodInfo *)0x0);
    pUVar7 = UI_ElementFactory__CreateHorizontalGroup((__this->fields).SinglePanel,10.0,3,(MethodInfo *)0x0);
    if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
      pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
      pSVar4 = UI_UIManager__GetLocale
                         (category,pSVar13,"KeyHeader","","",(MethodInfo *)0x0);
      if (g_data_057ae552 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
        g_data_057ae552 = '\x01';
      }
      pUVar9 = UI_ElementFactory__CreateDefaultLabel(pUVar8,__this_00,pSVar4,0,3,(MethodInfo *)0x0);
      if ((pUVar9 != (UnityEngine_GameObject_o *)0x0) &&
         (pIVar10 = UnityEngine_GameObject__GetComponent_object_(pUVar9,MethodInfo_LayoutElement_GetComponent_LayoutElement),
         pIVar10 != (Il2CppObject *)0x0)) {
        (*pIVar10->klass->vtable[0x24].methodPtr)(0x430c0000,pIVar10);
        pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
        pSVar4 = UI_UIManager__GetLocale
                           (category,pSVar13,"UrlHeader","","",(MethodInfo *)0x0);
        if (g_data_057ae552 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
          g_data_057ae552 = '\x01';
        }
        pUVar7 = UI_ElementFactory__CreateDefaultLabel(pUVar8,__this_00,pSVar4,0,3,(MethodInfo *)0x0);
        if ((pUVar7 != (UnityEngine_GameObject_o *)0x0) &&
           (pIVar10 = UnityEngine_GameObject__GetComponent_object_(pUVar7,MethodInfo_LayoutElement_GetComponent_LayoutElement),
           pIVar10 != (Il2CppObject *)0x0)) {
          pIVar14 = pIVar10->klass;
          (*pIVar14->vtable[0x24].methodPtr)(0x438c0000,pIVar10,pIVar14->vtable[0x24].method);
          pUVar8 = (__this->fields).SinglePanel;
          fVar17 = (float)(*(__this->klass->vtable)._11_get_VerticalSpacing.methodPtr)(__this);
          pUVar7 = UI_ElementFactory__CreateVerticalGroup(pUVar8,fVar17,0,(MethodInfo *)0x0);
          if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
            iVar15 = 0;
            pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
            (__this->fields)._serviceRowsContainer = pUVar8;
            il2cpp_runtime_helper_022b4080(&(__this->fields)._serviceRowsContainer,pUVar8);
            pSVar16 = *(Settings_ListSetting_T__o **)(lVar1 + 0x28);
            if (pSVar16 != (Settings_ListSetting_T__o *)0x0) {
              while (iVar3 = Settings_ListSetting_object___GetCount(pSVar16,MethodInfo_Int32_GetCount), iVar15 < iVar3) {
                if ((*(long *)(lVar1 + 0x28) == 0) ||
                   (pSVar2 = *(System_Collections_Generic_List_object__o **)(*(long *)(lVar1 + 0x28) + 0x18),
                   pSVar2 == (System_Collections_Generic_List_object__o *)0x0)) goto label_043f9b24;
                pSVar11 = (Settings_StringSetting_o *)
                          System_Collections_Generic_List_object___get_Item(pSVar2,iVar15,MethodInfo_StringSetting_get_Item);
                if ((*(long *)(lVar1 + 0x30) == 0) ||
                   (pSVar2 = *(System_Collections_Generic_List_object__o **)(*(long *)(lVar1 + 0x30) + 0x18),
                   pSVar2 == (System_Collections_Generic_List_object__o *)0x0)) goto label_043f9b24;
                pSVar12 = (Settings_StringSetting_o *)
                          System_Collections_Generic_List_object___get_Item(pSVar2,iVar15,MethodInfo_StringSetting_get_Item);
                UI_AdvancedConfigurationPopup__CreateServiceRow(__this,pSVar11,pSVar12,(MethodInfo *)pIVar14);
                iVar15 = iVar15 + 1;
                pSVar16 = *(Settings_ListSetting_T__o **)(lVar1 + 0x28);
                if (pSVar16 == (Settings_ListSetting_T__o *)0x0) goto label_043f9b24;
              }
              UI_BasePanel__CreateHorizontalDivider
                        ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
              pSVar4 = (System_String_o *)
                       (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                 (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
              __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
              UI_ElementStyle___ctor(__this_01,0x16,120.0,20.0,pSVar4,(MethodInfo *)0x0);
              pUVar8 = (__this->fields).SinglePanel;
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar4 = UI_UIManager__GetLocale
                                 (category,pSVar13,"SecretsTitle","","",(MethodInfo *)0x0);
              UI_ElementFactory__CreateDefaultLabel(pUVar8,__this_01,pSVar4,1,3,(MethodInfo *)0x0);
              pUVar8 = (__this->fields).SinglePanel;
              pSVar4 = UI_UIManager__GetLocale
                                 (category,pSVar13,"SecretsHint","","",(MethodInfo *)0x0);
              pUVar7 = UI_ElementFactory__CreateDefaultLabel(pUVar8,__this_00,pSVar4,0,3,(MethodInfo *)0x0);
              if ((pUVar7 != (UnityEngine_GameObject_o *)0x0) &&
                 (__this_02 = (UnityEngine_UI_Text_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar7,MethodInfo_Text_GetComponent_Text),
                 __this_02 != (UnityEngine_UI_Text_o *)0x0)) {
                UnityEngine_UI_Text__set_fontStyle(__this_02,2,(MethodInfo *)0x0);
                pUVar8 = (__this->fields).SinglePanel;
                pSVar4 = UI_UIManager__GetLocale
                                   (category,pSVar13,"AddSecretButton","","",(MethodInfo *)0x0)
                ;
                pUVar6 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                UnityEngine_Events_UnityAction___ctor();
                UI_ElementFactory__CreateTextButton(pUVar8,pUVar5,pSVar4,200.0,pUVar6,(MethodInfo *)0x0);
                pUVar7 = UI_ElementFactory__CreateHorizontalGroup
                                   ((__this->fields).SinglePanel,10.0,3,(MethodInfo *)0x0);
                if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
                  pSVar4 = UI_UIManager__GetLocale
                                     (category,pSVar13,"KeyHeader","","",
                                      (MethodInfo *)0x0);
                  if (g_data_057ae552 == '\0') {
                    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
                    g_data_057ae552 = '\x01';
                  }
                  pUVar9 = UI_ElementFactory__CreateDefaultLabel
                                     (pUVar8,__this_00,pSVar4,0,3,(MethodInfo *)0x0);
                  if ((pUVar9 != (UnityEngine_GameObject_o *)0x0) &&
                     (pIVar10 = UnityEngine_GameObject__GetComponent_object_(pUVar9,MethodInfo_LayoutElement_GetComponent_LayoutElement),
                     pIVar10 != (Il2CppObject *)0x0)) {
                    (*pIVar10->klass->vtable[0x24].methodPtr)(0x430c0000,pIVar10);
                    pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
                    pSVar13 = UI_UIManager__GetLocale
                                        (category,pSVar13,"ValueHeader","","",
                                         (MethodInfo *)0x0);
                    if (g_data_057ae552 == '\0') {
                      il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
                      g_data_057ae552 = '\x01';
                    }
                    pUVar7 = UI_ElementFactory__CreateDefaultLabel
                                       (pUVar8,__this_00,pSVar13,0,3,(MethodInfo *)0x0);
                    if ((pUVar7 != (UnityEngine_GameObject_o *)0x0) &&
                       (pIVar10 = UnityEngine_GameObject__GetComponent_object_(pUVar7,MethodInfo_LayoutElement_GetComponent_LayoutElement),
                       pIVar10 != (Il2CppObject *)0x0)) {
                      pIVar14 = pIVar10->klass;
                      (*pIVar14->vtable[0x24].methodPtr)(0x438c0000,pIVar10,pIVar14->vtable[0x24].method);
                      pUVar8 = (__this->fields).SinglePanel;
                      fVar17 = (float)(*(__this->klass->vtable)._11_get_VerticalSpacing.methodPtr)(__this);
                      pUVar7 = UI_ElementFactory__CreateVerticalGroup(pUVar8,fVar17,0,(MethodInfo *)0x0);
                      if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                        iVar15 = 0;
                        pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
                        (__this->fields)._secretRowsContainer = pUVar8;
                        il2cpp_runtime_helper_022b4080(&(__this->fields)._secretRowsContainer,pUVar8);
                        pSVar16 = *(Settings_ListSetting_T__o **)(lVar1 + 0x38);
                        if (pSVar16 != (Settings_ListSetting_T__o *)0x0) goto label_043f9ac0;
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
label_043f9b24:
  il2cpp_runtime_helper_022b2c90();
  return;
label_043f9ac0:
  iVar3 = Settings_ListSetting_object___GetCount(pSVar16,MethodInfo_Int32_GetCount);
  if (iVar3 <= iVar15) {
    return;
  }
  if ((*(long *)(lVar1 + 0x38) == 0) ||
     (pSVar2 = *(System_Collections_Generic_List_object__o **)(*(long *)(lVar1 + 0x38) + 0x18),
     pSVar2 == (System_Collections_Generic_List_object__o *)0x0)) goto label_043f9b24;
  pSVar11 = (Settings_StringSetting_o *)
            System_Collections_Generic_List_object___get_Item(pSVar2,iVar15,MethodInfo_StringSetting_get_Item);
  if ((*(long *)(lVar1 + 0x40) == 0) ||
     (pSVar2 = *(System_Collections_Generic_List_object__o **)(*(long *)(lVar1 + 0x40) + 0x18),
     pSVar2 == (System_Collections_Generic_List_object__o *)0x0)) goto label_043f9b24;
  pSVar12 = (Settings_StringSetting_o *)
            System_Collections_Generic_List_object___get_Item(pSVar2,iVar15,MethodInfo_StringSetting_get_Item);
  UI_AdvancedConfigurationPopup__CreateSecretRow(__this,pSVar11,pSVar12,(MethodInfo *)pIVar14);
  iVar15 = iVar15 + 1;
  pSVar16 = *(Settings_ListSetting_T__o **)(lVar1 + 0x38);
  if (pSVar16 == (Settings_ListSetting_T__o *)0x0) goto label_043f9b24;
  goto label_043f9ac0;
}


// UI.AdvancedConfigurationPopup$$CreateHeaderLabel
// il2cpp: void UI_AdvancedConfigurationPopup__CreateHeaderLabel (UI_AdvancedConfigurationPopup_o* __this, UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* text, float width, const MethodInfo* method);
// 0x43f9b40

void UI_AdvancedConfigurationPopup__CreateHeaderLabel
               (UI_AdvancedConfigurationPopup_o *__this,UnityEngine_Transform_o *parent,
               UI_ElementStyle_o *style,System_String_o *text,float width,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  Settings_BaseSetting_c *pSVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_InputField_o *__this_01;
  undefined8 uVar2;
  bool_conflict bVar3;
  UnityEngine_Transform_c *__this_02;
  Il2CppObject *pIVar4;
  UnityEngine_Transform_o *__this_03;
  System_String_o *pSVar5;
  MethodInfo_255A0F0 *__this_04;
  MethodInfo_255A0F0 *pMVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Events_UnityAction_o *pUVar8;
  long *parent_00;
  UnityEngine_Transform_o *pUVar9;
  UI_ElementStyle_o *__this_05;
  UnityEngine_Transform_c *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  UnityEngine_UI_Selectable_o *__this_06;
  UnityEngine_Transform_c *extraout_RDX;
  intptr_t extraout_RDX_00;
  undefined1 *puVar12;
  undefined1 auStack_28 [12];
  float local_1c;
  
  local_1c = width;
  if (g_data_057ae552 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    g_data_057ae552 = '\x01';
  }
  __this_04 = (MethodInfo_255A0F0 *)style;
  pUVar10 = (UnityEngine_Transform_c *)parent;
  __this_02 = (UnityEngine_Transform_c *)
              UI_ElementFactory__CreateDefaultLabel(parent,style,text,0,3,(MethodInfo *)0x0);
  if (__this_02 != (UnityEngine_Transform_c *)0x0) {
    __this_04 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
    pIVar4 = UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)__this_02,MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pUVar10 = __this_02;
    if (pIVar4 != (Il2CppObject *)0x0) {
      vtableDispatch = pIVar4->klass->vtable[0x24].methodPtr;
      (*vtableDispatch)(local_1c,pIVar4,pIVar4->klass->vtable[0x24].method,vtableDispatch);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae553 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateServiceRow_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateServiceRow_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass19_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Icons/Navigation/TrashIcon");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae553 = '\x01';
  }
  __this_03 = (UnityEngine_Transform_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass19_0);
  pMVar6 = (MethodInfo_255A0F0 *)0x0;
  pUVar7 = __this_03;
  System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
  if (__this_03 != (UnityEngine_Transform_o *)0x0) {
    (__this_03->fields).m_CachedPtr = (intptr_t)pUVar10;
    il2cpp_runtime_helper_022b4080(&__this_03->fields,pUVar10);
    __this_03[1].klass = extraout_RDX;
    il2cpp_runtime_helper_022b4080(__this_03 + 1,extraout_RDX);
    __this_03[1].fields.m_CachedPtr = (intptr_t)__this_04;
    il2cpp_runtime_helper_022b4080(&__this_03[1].fields,__this_04);
    pSVar1 = (pUVar10->_1).image;
    pSVar5 = (System_String_o *)
             (*(pSVar1->vtable)._4_unknown.methodPtr)(pUVar10,(pSVar1->vtable)._4_unknown.method);
    __this_04 = (MethodInfo_255A0F0 *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor((UI_ElementStyle_o *)__this_04,0x18,0.0,20.0,pSVar5,(MethodInfo *)0x0);
    pMVar6 = (MethodInfo_255A0F0 *)
             UI_ElementFactory__CreateHorizontalGroup
                       ((UnityEngine_Transform_o *)(pUVar10->_1).implementedInterfaces,10.0,3,
                        (MethodInfo *)0x0);
    __this_03[1].monitor = pMVar6;
    il2cpp_runtime_helper_022b4080(&__this_03[1].monitor);
    pUVar7 = (UnityEngine_Transform_o *)0x0;
    if (__this_03[1].monitor != (UnityEngine_GameObject_o *)0x0) {
      pUVar7 = UnityEngine_GameObject__get_transform(__this_03[1].monitor,(MethodInfo *)0x0);
      pMVar6 = __this_04;
      UI_ElementFactory__CreateInputSetting
                (pUVar7,(UI_ElementStyle_o *)__this_04,
                 (Settings_BaseSetting_o *)__this_03[1].fields.m_CachedPtr,
                 (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),"",140.0,40.0,0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      __this_00 = __this_03[1].monitor;
      pUVar7 = (UnityEngine_Transform_o *)0x0;
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        pUVar7 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        pUVar10 = __this_03[1].klass;
        pSVar5 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        pUVar8 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        pMVar6 = __this_04;
        UI_ElementFactory__CreateInputSetting
                  (pUVar7,(UI_ElementStyle_o *)__this_04,(Settings_BaseSetting_o *)pUVar10,pSVar5,""
                   ,280.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,pUVar8,
                   (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        pUVar7 = (UnityEngine_Transform_o *)0x0;
        if (__this_03[1].monitor != (UnityEngine_GameObject_o *)0x0) {
          parent_00 = (long *)UnityEngine_GameObject__get_transform(__this_03[1].monitor,(MethodInfo *)0x0);
          pUVar8 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          pUVar7 = (UnityEngine_Transform_o *)
                   UI_ElementFactory__CreateIconButton
                             ((UnityEngine_Transform_o *)parent_00,(UI_ElementStyle_o *)__this_04,"Icons/Navigation/TrashIcon"
                              ,28.0,28.0,pUVar8,(MethodInfo *)0x0);
          puVar12 = auStack_28;
          __this_03 = parent;
          goto UI_AdvancedConfigurationPopup__SetDeleteButtonColors;
        }
      }
    }
  }
  style = (UI_ElementStyle_o *)pUVar10;
  text = (System_String_o *)__this_04;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae554 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateSecretRow_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Icons/Navigation/TrashIcon");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae554 = '\x01';
  }
  pUVar9 = (UnityEngine_Transform_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0);
  pUVar11 = pUVar9;
  System_Object___ctor((Il2CppObject *)pUVar9,(MethodInfo *)0x0);
  if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
    (pUVar9->fields).m_CachedPtr = (intptr_t)pUVar7;
    il2cpp_runtime_helper_022b4080(&pUVar9->fields,pUVar7);
    pUVar9[1].monitor = pMVar6;
    il2cpp_runtime_helper_022b4080(&pUVar9[1].monitor,pMVar6);
    pUVar9[1].fields.m_CachedPtr = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080(&pUVar9[1].fields,extraout_RDX_00);
    pSVar5 = (System_String_o *)
             (*((Il2CppClass *)pUVar7->klass)->vtable[4].methodPtr)
                       (pUVar7,((Il2CppClass *)pUVar7->klass)->vtable[4].method);
    __this_05 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(__this_05,0x18,0.0,20.0,pSVar5,(MethodInfo *)0x0);
    pUVar10 = (UnityEngine_Transform_c *)
              UI_ElementFactory__CreateHorizontalGroup(pUVar7[7].monitor,10.0,3,(MethodInfo *)0x0);
    pUVar7 = pUVar9 + 1;
    pUVar9[1].klass = pUVar10;
    il2cpp_runtime_helper_022b4080(pUVar7);
    pUVar11 = (UnityEngine_Transform_o *)0x0;
    if (pUVar9[1].klass != (UnityEngine_Transform_c *)0x0) {
      pUVar11 = UnityEngine_GameObject__get_transform
                          ((UnityEngine_GameObject_o *)pUVar9[1].klass,(MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar11,__this_05,pUVar9[1].monitor,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8)
                 ,"",140.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                 (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      pUVar11 = (UnityEngine_Transform_o *)0x0;
      if (pUVar7->klass != (UnityEngine_Transform_c *)0x0) {
        pUVar11 = UnityEngine_GameObject__get_transform
                            ((UnityEngine_GameObject_o *)pUVar7->klass,(MethodInfo *)0x0);
        pUVar9 = (UnityEngine_Transform_o *)
                 UI_ElementFactory__CreateInputSetting
                           (pUVar11,__this_05,(Settings_BaseSetting_o *)pUVar9[1].fields.m_CachedPtr,
                            (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),"",280.0,40.0,
                            0,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                            (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                            (MethodInfo *)0x0);
        if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
          pIVar4 = UnityEngine_GameObject__GetComponent_object_
                             ((UnityEngine_GameObject_o *)pUVar9,MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
          pUVar11 = pUVar9;
          if ((pIVar4 != (Il2CppObject *)0x0) &&
             (__this_01 = pIVar4[3].monitor, __this_01 != (UnityEngine_UI_InputField_o *)0x0)) {
            UnityEngine_UI_InputField__set_contentType(__this_01,7,(MethodInfo *)0x0);
            UnityEngine_UI_InputField__ForceLabelUpdate(__this_01,(MethodInfo *)0x0);
            pUVar11 = (UnityEngine_Transform_o *)0x0;
            if (pUVar7->klass != (UnityEngine_Transform_c *)0x0) {
              parent_00 = (long *)UnityEngine_GameObject__get_transform
                                            ((UnityEngine_GameObject_o *)pUVar7->klass,(MethodInfo *)0x0);
              pUVar8 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
              UnityEngine_Events_UnityAction___ctor();
              pUVar7 = (UnityEngine_Transform_o *)
                       UI_ElementFactory__CreateIconButton
                                 ((UnityEngine_Transform_o *)parent_00,__this_05,"Icons/Navigation/TrashIcon",28.0,28.0,pUVar8
                                  ,(MethodInfo *)0x0);
              puVar12 = &stack0xffffffffffffff80;
UI_AdvancedConfigurationPopup__SetDeleteButtonColors:
              *(UI_ElementStyle_o **)(puVar12 + -8) = style;
              *(System_String_o **)(puVar12 + -0x10) = text;
              *(UnityEngine_Transform_o **)(puVar12 + -0x18) = __this_03;
              if (g_data_057ae555 == '\0') {
                *(undefined8 *)(puVar12 + -0xd0) = 0x43fa1d4;
                il2cpp_runtime_helper_023445d0(&TypeInfo_ColorBlock);
                *(undefined8 *)(puVar12 + -0xd0) = 0x43fa1e0;
                il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
                *(undefined8 *)(puVar12 + -0xd0) = 0x43fa1ec;
                il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
                parent_00 = &TypeInfo_Object;
                *(undefined8 *)(puVar12 + -0xd0) = 0x43fa1f8;
                il2cpp_runtime_helper_023445d0();
                g_data_057ae555 = '\x01';
              }
              if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                *(undefined8 *)(puVar12 + -0xd0) = 0x43fa21a;
                parent_00 = (long *)pUVar7;
                __this_06 = (UnityEngine_UI_Selectable_o *)
                            UnityEngine_GameObject__GetComponent_object_
                                      ((UnityEngine_GameObject_o *)pUVar7,MethodInfo_Button_GetComponent_Button);
                if (__this_06 != (UnityEngine_UI_Selectable_o *)0x0) {
                  uVar2 = *(undefined8 *)&(__this_06->fields).m_Colors.fields.m_ColorMultiplier;
                  if (*(int *)(TypeInfo_ColorBlock + 0xe4) == 0) {
                    *(undefined8 *)(puVar12 + -0xd0) = 0x43fa245;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  *(undefined8 *)(puVar12 + -0x70) = 0x3e4ccccd3f800000;
                  *(undefined8 *)(puVar12 + -0x68) = 0x3f8000003e4ccccd;
                  *(undefined8 *)(puVar12 + -0x60) = 0x3e99999a3f800000;
                  *(undefined8 *)(puVar12 + -0x58) = 0x3f8000003e99999a;
                  *(undefined8 *)(puVar12 + -0x50) = 0x3dcccccd3f59999a;
                  *(undefined8 *)(puVar12 + -0x48) = 0x3f8000003dcccccd;
                  *(undefined8 *)(puVar12 + -0x40) = 0x3e99999a3f800000;
                  *(undefined8 *)(puVar12 + -0x38) = 0x3f8000003e99999a;
                  *(undefined8 *)(puVar12 + -0x30) = 0x3dcccccd3f000000;
                  *(undefined8 *)(puVar12 + -0x28) = 0x3f4ccccd3dcccccd;
                  *(undefined8 *)(puVar12 + -0x20) = uVar2;
                  *(undefined8 *)(puVar12 + -0x78) = *(undefined8 *)(puVar12 + -0x20);
                  *(undefined8 *)(puVar12 + -0x88) = *(undefined8 *)(puVar12 + -0x30);
                  *(undefined8 *)(puVar12 + -0x80) = *(undefined8 *)(puVar12 + -0x28);
                  *(undefined8 *)(puVar12 + -0x98) = *(undefined8 *)(puVar12 + -0x40);
                  *(undefined8 *)(puVar12 + -0x90) = *(undefined8 *)(puVar12 + -0x38);
                  *(undefined8 *)(puVar12 + -0xa8) = *(undefined8 *)(puVar12 + -0x50);
                  *(undefined8 *)(puVar12 + -0xa0) = *(undefined8 *)(puVar12 + -0x48);
                  *(undefined8 *)(puVar12 + -0xb8) = *(undefined8 *)(puVar12 + -0x60);
                  *(undefined8 *)(puVar12 + -0xb0) = *(undefined8 *)(puVar12 + -0x58);
                  *(undefined8 *)(puVar12 + -200) = *(undefined8 *)(puVar12 + -0x70);
                  *(undefined8 *)(puVar12 + -0xc0) = *(undefined8 *)(puVar12 + -0x68);
                  *(undefined8 *)(puVar12 + -0xd0) = 0x43fa2d6;
                  UnityEngine_UI_Selectable__set_colors
                            (__this_06,
                             (UnityEngine_UI_ColorBlock_o)
                             *(UnityEngine_UI_ColorBlock_Fields *)(puVar12 + -200),(MethodInfo *)0x0);
                  *(undefined8 *)(puVar12 + -0xd0) = 0x43fa2e8;
                  pUVar7 = (UnityEngine_Transform_o *)
                           UnityEngine_GameObject__GetComponent_object_
                                     ((UnityEngine_GameObject_o *)pUVar7,MethodInfo_RawImage_GetComponent_RawImage);
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    *(undefined8 *)(puVar12 + -0xd0) = 0x43fa303;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  *(undefined8 *)(puVar12 + -0xd0) = 0x43fa30f;
                  parent_00 = (long *)pUVar7;
                  bVar3 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  if ((char)bVar3 == '\0') {
                    return;
                  }
                  if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                    pUVar10 = pUVar7->klass;
                    uVar2._0_2_ = pUVar10[1]._2.interfaces_count;
                    uVar2._2_2_ = pUVar10[1]._2.interface_offsets_count;
                    uVar2._4_1_ = pUVar10[1]._2.typeHierarchyDepth;
                    uVar2._5_1_ = pUVar10[1]._2.genericRecursionDepth;
                    uVar2._6_1_ = pUVar10[1]._2.rank;
                    uVar2._7_1_ = pUVar10[1]._2.minimumAlignment;
                    (**(code **)&pUVar10[1]._2.field_count)(0x3f800000,0x3f800000,pUVar7,uVar2);
                    return;
                  }
                }
              }
              *(undefined8 *)(puVar12 + -0xd0) = 0x43fa356;
              il2cpp_runtime_helper_022b2c90();
              System_Object___ctor((Il2CppObject *)parent_00,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pUVar11,(MethodInfo *)0x0);
  return;
}


// UI.AdvancedConfigurationPopup$$CreateServiceRow
// il2cpp: void UI_AdvancedConfigurationPopup__CreateServiceRow (UI_AdvancedConfigurationPopup_o* __this, Settings_StringSetting_o* keySetting, Settings_StringSetting_o* urlSetting, const MethodInfo* method);
// 0x43f9be0

void UI_AdvancedConfigurationPopup__CreateServiceRow
               (UI_AdvancedConfigurationPopup_o *__this,Settings_StringSetting_o *keySetting,
               Settings_StringSetting_o *urlSetting,MethodInfo *method)

{
  Il2CppClass *__this_00;
  UnityEngine_UI_InputField_o *__this_01;
  undefined8 uVar1;
  bool_conflict bVar2;
  Il2CppObject *__this_02;
  System_String_o *pSVar3;
  Il2CppClass *pIVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Events_UnityAction_o *pUVar6;
  long *parent;
  UnityEngine_Transform_o *pUVar7;
  UI_ElementStyle_o *__this_03;
  UnityEngine_Transform_c *pUVar8;
  Il2CppObject *pIVar9;
  UnityEngine_UI_Selectable_o *__this_04;
  intptr_t extraout_RDX;
  Il2CppObject *unaff_RBX;
  Il2CppClass *unaff_R14;
  UI_AdvancedConfigurationPopup_o *unaff_R15;
  UnityEngine_Transform_o *pUVar10;
  
  if (g_data_057ae553 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateServiceRow_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateServiceRow_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass19_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Icons/Navigation/TrashIcon");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae553 = '\x01';
  }
  __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass19_0);
  pIVar4 = (Il2CppClass *)0x0;
  pIVar9 = __this_02;
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  if (__this_02 != (Il2CppObject *)0x0) {
    __this_02[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_02 + 1,__this);
    __this_02[1].monitor = urlSetting;
    il2cpp_runtime_helper_022b4080(&__this_02[1].monitor,urlSetting);
    __this_02[2].monitor = keySetting;
    il2cpp_runtime_helper_022b4080(&__this_02[2].monitor,keySetting);
    pSVar3 = (System_String_o *)
             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    keySetting = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor((UI_ElementStyle_o *)keySetting,0x18,0.0,20.0,pSVar3,(MethodInfo *)0x0);
    pIVar4 = (Il2CppClass *)
             UI_ElementFactory__CreateHorizontalGroup
                       ((__this->fields)._serviceRowsContainer,10.0,3,(MethodInfo *)0x0);
    __this_02[2].klass = pIVar4;
    il2cpp_runtime_helper_022b4080(__this_02 + 2);
    pIVar9 = (Il2CppObject *)0x0;
    if (__this_02[2].klass != (Il2CppClass *)0x0) {
      pUVar5 = UnityEngine_GameObject__get_transform
                         ((UnityEngine_GameObject_o *)__this_02[2].klass,(MethodInfo *)0x0);
      pIVar4 = (Il2CppClass *)keySetting;
      UI_ElementFactory__CreateInputSetting
                (pUVar5,(UI_ElementStyle_o *)keySetting,__this_02[2].monitor,
                 (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),"",140.0,40.0,0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      __this_00 = __this_02[2].klass;
      pIVar9 = (Il2CppObject *)0x0;
      if (__this_00 != (Il2CppClass *)0x0) {
        pUVar5 = UnityEngine_GameObject__get_transform
                           ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
        __this = __this_02[1].monitor;
        pSVar3 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        pUVar6 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        pIVar4 = (Il2CppClass *)keySetting;
        UI_ElementFactory__CreateInputSetting
                  (pUVar5,(UI_ElementStyle_o *)keySetting,(Settings_BaseSetting_o *)__this,pSVar3,""
                   ,280.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,pUVar6,
                   (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        pIVar9 = (Il2CppObject *)0x0;
        if (__this_02[2].klass != (Il2CppClass *)0x0) {
          parent = (long *)UnityEngine_GameObject__get_transform
                                     ((UnityEngine_GameObject_o *)__this_02[2].klass,(MethodInfo *)0x0);
          pUVar6 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          pUVar5 = (UnityEngine_Transform_o *)
                   UI_ElementFactory__CreateIconButton
                             ((UnityEngine_Transform_o *)parent,(UI_ElementStyle_o *)keySetting,"Icons/Navigation/TrashIcon",
                              28.0,28.0,pUVar6,(MethodInfo *)0x0);
          __this_02 = unaff_RBX;
          goto UI_AdvancedConfigurationPopup__SetDeleteButtonColors;
        }
      }
    }
  }
  unaff_R15 = __this;
  unaff_R14 = (Il2CppClass *)keySetting;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae554 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateSecretRow_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Icons/Navigation/TrashIcon");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae554 = '\x01';
  }
  pUVar7 = (UnityEngine_Transform_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0);
  pUVar5 = pUVar7;
  System_Object___ctor((Il2CppObject *)pUVar7,(MethodInfo *)0x0);
  if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
    (pUVar7->fields).m_CachedPtr = (intptr_t)pIVar9;
    il2cpp_runtime_helper_022b4080(&pUVar7->fields,pIVar9);
    pUVar7[1].monitor = pIVar4;
    il2cpp_runtime_helper_022b4080(&pUVar7[1].monitor,pIVar4);
    pUVar7[1].fields.m_CachedPtr = extraout_RDX;
    il2cpp_runtime_helper_022b4080(&pUVar7[1].fields,extraout_RDX);
    pSVar3 = (System_String_o *)(*pIVar9->klass->vtable[4].methodPtr)(pIVar9,pIVar9->klass->vtable[4].method);
    __this_03 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(__this_03,0x18,0.0,20.0,pSVar3,(MethodInfo *)0x0);
    pUVar8 = (UnityEngine_Transform_c *)
             UI_ElementFactory__CreateHorizontalGroup
                       ((UnityEngine_Transform_o *)pIVar9[0xb].klass,10.0,3,(MethodInfo *)0x0);
    pUVar10 = pUVar7 + 1;
    pUVar7[1].klass = pUVar8;
    il2cpp_runtime_helper_022b4080(pUVar10);
    pUVar5 = (UnityEngine_Transform_o *)0x0;
    if (pUVar7[1].klass != (UnityEngine_Transform_c *)0x0) {
      pUVar5 = UnityEngine_GameObject__get_transform
                         ((UnityEngine_GameObject_o *)pUVar7[1].klass,(MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar5,__this_03,pUVar7[1].monitor,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                 "",140.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                 (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      pUVar5 = (UnityEngine_Transform_o *)0x0;
      if (pUVar10->klass != (UnityEngine_Transform_c *)0x0) {
        pUVar5 = UnityEngine_GameObject__get_transform
                           ((UnityEngine_GameObject_o *)pUVar10->klass,(MethodInfo *)0x0);
        pUVar7 = (UnityEngine_Transform_o *)
                 UI_ElementFactory__CreateInputSetting
                           (pUVar5,__this_03,(Settings_BaseSetting_o *)pUVar7[1].fields.m_CachedPtr,
                            (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),"",280.0,40.0,
                            0,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                            (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                            (MethodInfo *)0x0);
        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
          pIVar9 = UnityEngine_GameObject__GetComponent_object_
                             ((UnityEngine_GameObject_o *)pUVar7,MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
          pUVar5 = pUVar7;
          if ((pIVar9 != (Il2CppObject *)0x0) &&
             (__this_01 = pIVar9[3].monitor, __this_01 != (UnityEngine_UI_InputField_o *)0x0)) {
            UnityEngine_UI_InputField__set_contentType(__this_01,7,(MethodInfo *)0x0);
            UnityEngine_UI_InputField__ForceLabelUpdate(__this_01,(MethodInfo *)0x0);
            pUVar5 = (UnityEngine_Transform_o *)0x0;
            if (pUVar10->klass != (UnityEngine_Transform_c *)0x0) {
              parent = (long *)UnityEngine_GameObject__get_transform
                                         ((UnityEngine_GameObject_o *)pUVar10->klass,(MethodInfo *)0x0);
              pUVar6 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
              UnityEngine_Events_UnityAction___ctor();
              pUVar5 = (UnityEngine_Transform_o *)
                       UI_ElementFactory__CreateIconButton
                                 ((UnityEngine_Transform_o *)parent,__this_03,"Icons/Navigation/TrashIcon",28.0,28.0,pUVar6,
                                  (MethodInfo *)0x0);
              register0x00000020 = (BADSPACEBASE *)&stack0xffffffffffffffa8;
UI_AdvancedConfigurationPopup__SetDeleteButtonColors:
              *(UI_AdvancedConfigurationPopup_o **)((long)register0x00000020 + -8) = unaff_R15;
              *(Il2CppClass **)((long)register0x00000020 + -0x10) = unaff_R14;
              *(Il2CppObject **)((long)register0x00000020 + -0x18) = __this_02;
              if (g_data_057ae555 == '\0') {
                *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x43fa1d4;
                il2cpp_runtime_helper_023445d0(&TypeInfo_ColorBlock);
                *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x43fa1e0;
                il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
                *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x43fa1ec;
                il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
                parent = &TypeInfo_Object;
                *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x43fa1f8;
                il2cpp_runtime_helper_023445d0();
                g_data_057ae555 = '\x01';
              }
              if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x43fa21a;
                parent = (long *)pUVar5;
                __this_04 = (UnityEngine_UI_Selectable_o *)
                            UnityEngine_GameObject__GetComponent_object_
                                      ((UnityEngine_GameObject_o *)pUVar5,MethodInfo_Button_GetComponent_Button);
                if (__this_04 != (UnityEngine_UI_Selectable_o *)0x0) {
                  uVar1 = *(undefined8 *)&(__this_04->fields).m_Colors.fields.m_ColorMultiplier;
                  if (*(int *)(TypeInfo_ColorBlock + 0xe4) == 0) {
                    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x43fa245;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3e4ccccd3f800000;
                  *(undefined8 *)((long)register0x00000020 + -0x68) = 0x3f8000003e4ccccd;
                  *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3e99999a3f800000;
                  *(undefined8 *)((long)register0x00000020 + -0x58) = 0x3f8000003e99999a;
                  *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3dcccccd3f59999a;
                  *(undefined8 *)((long)register0x00000020 + -0x48) = 0x3f8000003dcccccd;
                  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3e99999a3f800000;
                  *(undefined8 *)((long)register0x00000020 + -0x38) = 0x3f8000003e99999a;
                  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3dcccccd3f000000;
                  *(undefined8 *)((long)register0x00000020 + -0x28) = 0x3f4ccccd3dcccccd;
                  *(undefined8 *)((long)register0x00000020 + -0x20) = uVar1;
                  *(undefined8 *)((long)register0x00000020 + -0x78) =
                       *(undefined8 *)((long)register0x00000020 + -0x20);
                  *(undefined8 *)((long)register0x00000020 + -0x88) =
                       *(undefined8 *)((long)register0x00000020 + -0x30);
                  *(undefined8 *)((long)register0x00000020 + -0x80) =
                       *(undefined8 *)((long)register0x00000020 + -0x28);
                  *(undefined8 *)((long)register0x00000020 + -0x98) =
                       *(undefined8 *)((long)register0x00000020 + -0x40);
                  *(undefined8 *)((long)register0x00000020 + -0x90) =
                       *(undefined8 *)((long)register0x00000020 + -0x38);
                  *(undefined8 *)((long)register0x00000020 + -0xa8) =
                       *(undefined8 *)((long)register0x00000020 + -0x50);
                  *(undefined8 *)((long)register0x00000020 + -0xa0) =
                       *(undefined8 *)((long)register0x00000020 + -0x48);
                  *(undefined8 *)((long)register0x00000020 + -0xb8) =
                       *(undefined8 *)((long)register0x00000020 + -0x60);
                  *(undefined8 *)((long)register0x00000020 + -0xb0) =
                       *(undefined8 *)((long)register0x00000020 + -0x58);
                  *(undefined8 *)((long)register0x00000020 + -200) =
                       *(undefined8 *)((long)register0x00000020 + -0x70);
                  *(undefined8 *)((long)register0x00000020 + -0xc0) =
                       *(undefined8 *)((long)register0x00000020 + -0x68);
                  *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x43fa2d6;
                  UnityEngine_UI_Selectable__set_colors
                            (__this_04,
                             (UnityEngine_UI_ColorBlock_o)
                             *(UnityEngine_UI_ColorBlock_Fields *)((long)register0x00000020 + -200),
                             (MethodInfo *)0x0);
                  *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x43fa2e8;
                  pUVar5 = (UnityEngine_Transform_o *)
                           UnityEngine_GameObject__GetComponent_object_
                                     ((UnityEngine_GameObject_o *)pUVar5,MethodInfo_RawImage_GetComponent_RawImage);
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x43fa303;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x43fa30f;
                  parent = (long *)pUVar5;
                  bVar2 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  if ((char)bVar2 == '\0') {
                    return;
                  }
                  if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                    pUVar8 = pUVar5->klass;
                    uVar1._0_2_ = pUVar8[1]._2.interfaces_count;
                    uVar1._2_2_ = pUVar8[1]._2.interface_offsets_count;
                    uVar1._4_1_ = pUVar8[1]._2.typeHierarchyDepth;
                    uVar1._5_1_ = pUVar8[1]._2.genericRecursionDepth;
                    uVar1._6_1_ = pUVar8[1]._2.rank;
                    uVar1._7_1_ = pUVar8[1]._2.minimumAlignment;
                    (**(code **)&pUVar8[1]._2.field_count)(0x3f800000,0x3f800000,pUVar5,uVar1);
                    return;
                  }
                }
              }
              *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x43fa356;
              il2cpp_runtime_helper_022b2c90();
              System_Object___ctor((Il2CppObject *)parent,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pUVar5,(MethodInfo *)0x0);
  return;
}


// UI.AdvancedConfigurationPopup$$CreateSecretRow
// il2cpp: void UI_AdvancedConfigurationPopup__CreateSecretRow (UI_AdvancedConfigurationPopup_o* __this, Settings_StringSetting_o* keySetting, Settings_StringSetting_o* valueSetting, const MethodInfo* method);
// 0x43f9ec0

void UI_AdvancedConfigurationPopup__CreateSecretRow
               (UI_AdvancedConfigurationPopup_o *__this,Settings_StringSetting_o *keySetting,
               Settings_StringSetting_o *valueSetting,MethodInfo *method)

{
  undefined4 uVar1;
  UnityEngine_UI_InputField_o *__this_00;
  undefined4 uVar3;
  undefined8 uVar2;
  UnityEngine_UI_ColorBlock_o value;
  bool_conflict bVar4;
  UnityEngine_Transform_o *pUVar5;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Transform_c *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  Il2CppObject *pIVar8;
  long *parent;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_UI_Selectable_o *__this_02;
  UnityEngine_Transform_o *pUVar9;
  
  if (g_data_057ae554 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateSecretRow_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Icons/Navigation/TrashIcon");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae554 = '\x01';
  }
  pUVar5 = (UnityEngine_Transform_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0);
  pUVar7 = pUVar5;
  System_Object___ctor((Il2CppObject *)pUVar5,(MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
    (pUVar5->fields).m_CachedPtr = (intptr_t)__this;
    il2cpp_runtime_helper_022b4080(&pUVar5->fields,__this);
    pUVar5[1].monitor = keySetting;
    il2cpp_runtime_helper_022b4080(&pUVar5[1].monitor,keySetting);
    pUVar5[1].fields.m_CachedPtr = (intptr_t)valueSetting;
    il2cpp_runtime_helper_022b4080(&pUVar5[1].fields,valueSetting);
    themePanel = (System_String_o *)
                 (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                           (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(__this_01,0x18,0.0,20.0,themePanel,(MethodInfo *)0x0);
    pUVar6 = (UnityEngine_Transform_c *)
             UI_ElementFactory__CreateHorizontalGroup
                       ((__this->fields)._secretRowsContainer,10.0,3,(MethodInfo *)0x0);
    pUVar9 = pUVar5 + 1;
    pUVar5[1].klass = pUVar6;
    il2cpp_runtime_helper_022b4080(pUVar9);
    pUVar7 = (UnityEngine_Transform_o *)0x0;
    if (pUVar5[1].klass != (UnityEngine_Transform_c *)0x0) {
      pUVar7 = UnityEngine_GameObject__get_transform
                         ((UnityEngine_GameObject_o *)pUVar5[1].klass,(MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar7,__this_01,pUVar5[1].monitor,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                 "",140.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                 (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      pUVar7 = (UnityEngine_Transform_o *)0x0;
      if (pUVar9->klass != (UnityEngine_Transform_c *)0x0) {
        pUVar7 = UnityEngine_GameObject__get_transform
                           ((UnityEngine_GameObject_o *)pUVar9->klass,(MethodInfo *)0x0);
        pUVar5 = (UnityEngine_Transform_o *)
                 UI_ElementFactory__CreateInputSetting
                           (pUVar7,__this_01,(Settings_BaseSetting_o *)pUVar5[1].fields.m_CachedPtr,
                            (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),"",280.0,40.0,
                            0,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                            (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                            (MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
          pIVar8 = UnityEngine_GameObject__GetComponent_object_
                             ((UnityEngine_GameObject_o *)pUVar5,MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
          pUVar7 = pUVar5;
          if ((pIVar8 != (Il2CppObject *)0x0) &&
             (__this_00 = pIVar8[3].monitor, __this_00 != (UnityEngine_UI_InputField_o *)0x0)) {
            UnityEngine_UI_InputField__set_contentType(__this_00,7,(MethodInfo *)0x0);
            UnityEngine_UI_InputField__ForceLabelUpdate(__this_00,(MethodInfo *)0x0);
            pUVar7 = (UnityEngine_Transform_o *)0x0;
            if (pUVar9->klass != (UnityEngine_Transform_c *)0x0) {
              parent = (long *)UnityEngine_GameObject__get_transform
                                         ((UnityEngine_GameObject_o *)pUVar9->klass,(MethodInfo *)0x0);
              onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
              UnityEngine_Events_UnityAction___ctor();
              pUVar7 = (UnityEngine_Transform_o *)
                       UI_ElementFactory__CreateIconButton
                                 ((UnityEngine_Transform_o *)parent,__this_01,"Icons/Navigation/TrashIcon",28.0,28.0,onClick,
                                  (MethodInfo *)0x0);
              if (g_data_057ae555 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_ColorBlock);
                il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
                il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
                parent = &TypeInfo_Object;
                il2cpp_runtime_helper_023445d0();
                g_data_057ae555 = '\x01';
              }
              if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                parent = (long *)pUVar7;
                __this_02 = (UnityEngine_UI_Selectable_o *)
                            UnityEngine_GameObject__GetComponent_object_
                                      ((UnityEngine_GameObject_o *)pUVar7,MethodInfo_Button_GetComponent_Button);
                if (__this_02 != (UnityEngine_UI_Selectable_o *)0x0) {
                  uVar1 = (__this_02->fields).m_Colors.fields.m_ColorMultiplier;
                  uVar3 = (__this_02->fields).m_Colors.fields.m_FadeDuration;
                  value.fields.m_FadeDuration = (float)uVar3;
                  value.fields.m_ColorMultiplier = (float)uVar1;
                  if (*(int *)(TypeInfo_ColorBlock + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  value.fields.m_NormalColor.fields.b = 0.2;
                  value.fields.m_NormalColor.fields.a = 1.0;
                  value.fields.m_NormalColor.fields.r = 1.0;
                  value.fields.m_NormalColor.fields.g = 0.2;
                  value.fields.m_HighlightedColor.fields.r = 1.0;
                  value.fields.m_HighlightedColor.fields.g = 0.3;
                  value.fields.m_HighlightedColor.fields.b = 0.3;
                  value.fields.m_HighlightedColor.fields.a = 1.0;
                  value.fields.m_PressedColor.fields.r = 0.85;
                  value.fields.m_PressedColor.fields.g = 0.1;
                  value.fields.m_PressedColor.fields.b = 0.1;
                  value.fields.m_PressedColor.fields.a = 1.0;
                  value.fields.m_SelectedColor.fields.r = 1.0;
                  value.fields.m_SelectedColor.fields.g = 0.3;
                  value.fields.m_SelectedColor.fields.b = 0.3;
                  value.fields.m_SelectedColor.fields.a = 1.0;
                  value.fields.m_DisabledColor.fields.r = 0.5;
                  value.fields.m_DisabledColor.fields.g = 0.1;
                  value.fields.m_DisabledColor.fields.b = 0.1;
                  value.fields.m_DisabledColor.fields.a = 0.8;
                  UnityEngine_UI_Selectable__set_colors(__this_02,value,(MethodInfo *)0x0);
                  pUVar7 = (UnityEngine_Transform_o *)
                           UnityEngine_GameObject__GetComponent_object_
                                     ((UnityEngine_GameObject_o *)pUVar7,MethodInfo_RawImage_GetComponent_RawImage);
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  parent = (long *)pUVar7;
                  bVar4 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  if ((char)bVar4 == '\0') {
                    return;
                  }
                  if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                    pUVar6 = pUVar7->klass;
                    uVar2._0_2_ = pUVar6[1]._2.interfaces_count;
                    uVar2._2_2_ = pUVar6[1]._2.interface_offsets_count;
                    uVar2._4_1_ = pUVar6[1]._2.typeHierarchyDepth;
                    uVar2._5_1_ = pUVar6[1]._2.genericRecursionDepth;
                    uVar2._6_1_ = pUVar6[1]._2.rank;
                    uVar2._7_1_ = pUVar6[1]._2.minimumAlignment;
                    (**(code **)&pUVar6[1]._2.field_count)(0x3f800000,0x3f800000,pUVar7,uVar2);
                    return;
                  }
                }
              }
              il2cpp_runtime_helper_022b2c90();
              System_Object___ctor((Il2CppObject *)parent,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pUVar7,(MethodInfo *)0x0);
  return;
}


// UI.AdvancedConfigurationPopup$$SetDeleteButtonColors
// il2cpp: void UI_AdvancedConfigurationPopup__SetDeleteButtonColors (UI_AdvancedConfigurationPopup_o* __this, UnityEngine_GameObject_o* deleteButton, const MethodInfo* method);
// 0x43fa1b0

void UI_AdvancedConfigurationPopup__SetDeleteButtonColors
               (UI_AdvancedConfigurationPopup_o *__this,UnityEngine_GameObject_o *deleteButton,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_UI_ColorBlock_o value;
  bool_conflict bVar3;
  UnityEngine_UI_Selectable_o *__this_00;
  UI_AdvancedConfigurationPopup_o *x;
  long *plVar4;
  
  if (g_data_057ae555 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorBlock);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    plVar4 = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae555 = '\x01';
    __this = (UI_AdvancedConfigurationPopup_o *)plVar4;
  }
  if (deleteButton != (UnityEngine_GameObject_o *)0x0) {
    __this = (UI_AdvancedConfigurationPopup_o *)deleteButton;
    __this_00 = (UnityEngine_UI_Selectable_o *)
                UnityEngine_GameObject__GetComponent_object_(deleteButton,MethodInfo_Button_GetComponent_Button);
    if (__this_00 != (UnityEngine_UI_Selectable_o *)0x0) {
      uVar1 = (__this_00->fields).m_Colors.fields.m_ColorMultiplier;
      uVar2 = (__this_00->fields).m_Colors.fields.m_FadeDuration;
      value.fields.m_FadeDuration = (float)uVar2;
      value.fields.m_ColorMultiplier = (float)uVar1;
      if (*(int *)(TypeInfo_ColorBlock + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      value.fields.m_NormalColor.fields.b = 0.2;
      value.fields.m_NormalColor.fields.a = 1.0;
      value.fields.m_NormalColor.fields.r = 1.0;
      value.fields.m_NormalColor.fields.g = 0.2;
      value.fields.m_HighlightedColor.fields.r = 1.0;
      value.fields.m_HighlightedColor.fields.g = 0.3;
      value.fields.m_HighlightedColor.fields.b = 0.3;
      value.fields.m_HighlightedColor.fields.a = 1.0;
      value.fields.m_PressedColor.fields.r = 0.85;
      value.fields.m_PressedColor.fields.g = 0.1;
      value.fields.m_PressedColor.fields.b = 0.1;
      value.fields.m_PressedColor.fields.a = 1.0;
      value.fields.m_SelectedColor.fields.r = 1.0;
      value.fields.m_SelectedColor.fields.g = 0.3;
      value.fields.m_SelectedColor.fields.b = 0.3;
      value.fields.m_SelectedColor.fields.a = 1.0;
      value.fields.m_DisabledColor.fields.r = 0.5;
      value.fields.m_DisabledColor.fields.g = 0.1;
      value.fields.m_DisabledColor.fields.b = 0.1;
      value.fields.m_DisabledColor.fields.a = 0.8;
      UnityEngine_UI_Selectable__set_colors(__this_00,value,(MethodInfo *)0x0);
      x = (UI_AdvancedConfigurationPopup_o *)
          UnityEngine_GameObject__GetComponent_object_(deleteButton,MethodInfo_RawImage_GetComponent_RawImage);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = x;
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      if (x != (UI_AdvancedConfigurationPopup_o *)0x0) {
        (*(x->klass->vtable)._23_SyncSettingElements.methodPtr)
                  (0x3f800000,0x3f800000,x,(x->klass->vtable)._23_SyncSettingElements.method);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.AdvancedConfigurationPopup$$ValidateUrl
// il2cpp: void UI_AdvancedConfigurationPopup__ValidateUrl (UI_AdvancedConfigurationPopup_o* __this, Settings_StringSetting_o* urlSetting, const MethodInfo* method);
// 0x43fa370

void UI_AdvancedConfigurationPopup__ValidateUrl
               (UI_AdvancedConfigurationPopup_o *__this,Settings_StringSetting_o *urlSetting,
               MethodInfo *method)

{
  long lVar1;
  UI_MessagePopup_o *pUVar2;
  long *plVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  Settings_StringSetting_o *pSVar6;
  UI_AdvancedConfigurationPopup_o *__this_00;
  System_Collections_Generic_List_object__o *pSVar7;
  MethodInfo *pMVar8;
  Il2CppObject *item;
  Il2CppObject *item_00;
  Settings_StringSetting_o *pSVar9;
  System_String_o **ppSVar10;
  UI_AdvancedConfigurationPopup_o *__this_01;
  System_Collections_Generic_List_object__o *pSVar11;
  UI_TooltipPopup_o *__this_02;
  System_Uri_o *local_18;
  
  if (g_data_057ae556 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Uri);
    ppSVar10 = &"Service URL must be a valid http:// or https:// address.";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae556 = '\x01';
    __this = (UI_AdvancedConfigurationPopup_o *)ppSVar10;
  }
  local_18 = (System_Uri_o *)0x0;
  if (urlSetting == (Settings_StringSetting_o *)0x0) goto label_043fa4ef;
  bVar4 = System_String__IsNullOrWhiteSpace((urlSetting->fields)._value,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  pSVar5 = (urlSetting->fields)._value;
  if (*(int *)(TypeInfo_Uri + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = System_Uri__TryCreate(pSVar5,1,&local_18,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    __this = (UI_AdvancedConfigurationPopup_o *)(UI_TooltipPopup_o *)0x0;
    if (local_18 == (System_Uri_o *)0x0) goto label_043fa4ef;
    pSVar5 = System_Uri__get_Scheme(local_18,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Uri + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = System_String__op_Inequality
                      (pSVar5,*(System_String_o **)(*(long *)(TypeInfo_Uri + 0xb8) + 0x18),(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return;
    }
    __this = (UI_AdvancedConfigurationPopup_o *)(UI_TooltipPopup_o *)0x0;
    if (local_18 == (System_Uri_o *)0x0) goto label_043fa4ef;
    pSVar5 = System_Uri__get_Scheme(local_18,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Uri + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = System_String__op_Inequality
                      (pSVar5,*(System_String_o **)(*(long *)(TypeInfo_Uri + 0xb8) + 0x20),(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return;
    }
  }
  if (*(int *)((long)&TypeInfo_UIManager[1].fields.m_CancellationTokenSource + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar1 = (TypeInfo_UIManager->fields).Caller[1].fields.m_CachedPtr;
  __this = (UI_AdvancedConfigurationPopup_o *)TypeInfo_UIManager;
  if (lVar1 != 0) {
    pUVar2 = *(UI_MessagePopup_o **)(lVar1 + 0x30);
    __this = (UI_AdvancedConfigurationPopup_o *)0x0;
    if (pUVar2 != (UI_MessagePopup_o *)0x0) {
      UI_MessagePopup__Show(pUVar2,"Service URL must be a valid http:// or https:// address.",1,(MethodInfo *)0x0);
      return;
    }
  }
label_043fa4ef:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae557 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddItem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae557 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
  pSVar5 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar6 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar6,pSVar5,0x40,(MethodInfo *)0x0);
  pSVar9 = (Settings_StringSetting_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_00 = (UI_AdvancedConfigurationPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  pMVar8 = (MethodInfo *)0x0;
  __this_01 = __this_00;
  Settings_StringSetting___ctor_40f74f0
            ((Settings_StringSetting_o *)__this_00,(System_String_o *)pSVar9,0x800,(MethodInfo *)0x0);
  if (lVar1 != 0) {
    __this_01 = (UI_AdvancedConfigurationPopup_o *)0x0;
    if (*(Settings_ListSetting_T__o **)(lVar1 + 0x28) != (Settings_ListSetting_T__o *)0x0) {
      pSVar9 = pSVar6;
      Settings_ListSetting_object___AddItem
                (*(Settings_ListSetting_T__o **)(lVar1 + 0x28),(Settings_BaseSetting_o *)pSVar6,MethodInfo_Void_AddItem);
      __this_01 = (UI_AdvancedConfigurationPopup_o *)0x0;
      if (*(Settings_ListSetting_T__o **)(lVar1 + 0x30) != (Settings_ListSetting_T__o *)0x0) {
        Settings_ListSetting_object___AddItem
                  (*(Settings_ListSetting_T__o **)(lVar1 + 0x30),(Settings_BaseSetting_o *)__this_00,
                   MethodInfo_Void_AddItem);
        UI_AdvancedConfigurationPopup__CreateServiceRow
                  (__this,pSVar6,(Settings_StringSetting_o *)__this_00,pMVar8);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae558 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_01 = (UI_AdvancedConfigurationPopup_o *)&MethodInfo_List_1_Settings_StringSetting_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae558 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
  if (((lVar1 != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
     (__this_01 = *(UI_AdvancedConfigurationPopup_o **)(*(long *)(lVar1 + 0x28) + 0x18),
     __this_01 != (UI_AdvancedConfigurationPopup_o *)0x0)) {
    System_Collections_Generic_List_object___Remove
              ((System_Collections_Generic_List_object__o *)__this_01,item,MethodInfo_Boolean_Remove);
    if (*(long *)(lVar1 + 0x30) != 0) {
      pSVar11 = *(System_Collections_Generic_List_object__o **)(*(long *)(lVar1 + 0x30) + 0x18);
      __this_01 = (UI_AdvancedConfigurationPopup_o *)0x0;
      if (pSVar11 != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List_object___Remove(pSVar11,(Il2CppObject *)pMVar8,MethodInfo_Boolean_Remove);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pSVar9,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae559 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddItem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae559 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
  pSVar5 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar6 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar6,pSVar5,0x40,(MethodInfo *)0x0);
  pSVar9 = (Settings_StringSetting_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar7 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  pMVar8 = (MethodInfo *)0x0;
  pSVar11 = pSVar7;
  Settings_StringSetting___ctor_40f74f0
            ((Settings_StringSetting_o *)pSVar7,(System_String_o *)pSVar9,0x1000,(MethodInfo *)0x0);
  if (lVar1 != 0) {
    pSVar11 = (System_Collections_Generic_List_object__o *)0x0;
    if (*(Settings_ListSetting_T__o **)(lVar1 + 0x38) != (Settings_ListSetting_T__o *)0x0) {
      pSVar9 = pSVar6;
      Settings_ListSetting_object___AddItem
                (*(Settings_ListSetting_T__o **)(lVar1 + 0x38),(Settings_BaseSetting_o *)pSVar6,MethodInfo_Void_AddItem);
      pSVar11 = (System_Collections_Generic_List_object__o *)0x0;
      if (*(Settings_ListSetting_T__o **)(lVar1 + 0x40) != (Settings_ListSetting_T__o *)0x0) {
        Settings_ListSetting_object___AddItem
                  (*(Settings_ListSetting_T__o **)(lVar1 + 0x40),(Settings_BaseSetting_o *)pSVar7,MethodInfo_Void_AddItem
                  );
        UI_AdvancedConfigurationPopup__CreateSecretRow
                  (__this_01,pSVar6,(Settings_StringSetting_o *)pSVar7,pMVar8);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae55a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pSVar11 = (System_Collections_Generic_List_object__o *)&MethodInfo_List_1_Settings_StringSetting_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae55a = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
  if (((lVar1 != 0) && (*(long *)(lVar1 + 0x38) != 0)) &&
     (pSVar11 = *(System_Collections_Generic_List_object__o **)(*(long *)(lVar1 + 0x38) + 0x18),
     pSVar11 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___Remove(pSVar11,item_00,MethodInfo_Boolean_Remove);
    if (*(long *)(lVar1 + 0x40) != 0) {
      pSVar7 = *(System_Collections_Generic_List_object__o **)(*(long *)(lVar1 + 0x40) + 0x18);
      pSVar11 = (System_Collections_Generic_List_object__o *)0x0;
      if (pSVar7 != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List_object___Remove(pSVar7,(Il2CppObject *)pMVar8,MethodInfo_Boolean_Remove);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pSVar9,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae55b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Advanced configuration saved.");
    g_data_057ae55b = '\x01';
  }
  plVar3 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
  __this_02 = (UI_TooltipPopup_o *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x238))();
    if (*(int *)((long)&TypeInfo_UIManager[1].fields.m_CancellationTokenSource + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar1 = (TypeInfo_UIManager->fields).Caller[1].fields.m_CachedPtr;
    __this_02 = TypeInfo_UIManager;
    if (lVar1 != 0) {
      pUVar2 = *(UI_MessagePopup_o **)(lVar1 + 0x30);
      __this_02 = (UI_TooltipPopup_o *)0x0;
      if (pUVar2 != (UI_MessagePopup_o *)0x0) {
        UI_MessagePopup__Show(pUVar2,"Advanced configuration saved.",1,(MethodInfo *)0x0);
        (*(pSVar11->klass->vtable)._22_Clear.methodPtr)(pSVar11,(pSVar11->klass->vtable)._22_Clear.method);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UI_BasePopup___ctor(__this_02,(MethodInfo *)0x0);
  return;
}


// UI.AdvancedConfigurationPopup$$OnAddServiceClick
// il2cpp: void UI_AdvancedConfigurationPopup__OnAddServiceClick (UI_AdvancedConfigurationPopup_o* __this, const MethodInfo* method);
// 0x43fa500

void UI_AdvancedConfigurationPopup__OnAddServiceClick
               (UI_AdvancedConfigurationPopup_o *__this,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  long *plVar3;
  UI_MessagePopup_o *__this_00;
  Settings_StringSetting_o *pSVar4;
  UI_AdvancedConfigurationPopup_o *__this_01;
  System_Collections_Generic_List_object__o *pSVar5;
  MethodInfo *pMVar6;
  Il2CppObject *item;
  Il2CppObject *item_00;
  Settings_StringSetting_o *pSVar7;
  UI_AdvancedConfigurationPopup_o *__this_02;
  System_Collections_Generic_List_object__o *pSVar8;
  UI_TooltipPopup_o *__this_03;
  
  if (g_data_057ae557 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddItem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae557 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
  pSVar2 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar4 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar4,pSVar2,0x40,(MethodInfo *)0x0);
  pSVar7 = (Settings_StringSetting_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_01 = (UI_AdvancedConfigurationPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  pMVar6 = (MethodInfo *)0x0;
  __this_02 = __this_01;
  Settings_StringSetting___ctor_40f74f0
            ((Settings_StringSetting_o *)__this_01,(System_String_o *)pSVar7,0x800,(MethodInfo *)0x0);
  if ((lVar1 != 0) &&
     (__this_02 = (UI_AdvancedConfigurationPopup_o *)0x0,
     *(Settings_ListSetting_T__o **)(lVar1 + 0x28) != (Settings_ListSetting_T__o *)0x0)) {
    pSVar7 = pSVar4;
    Settings_ListSetting_object___AddItem
              (*(Settings_ListSetting_T__o **)(lVar1 + 0x28),(Settings_BaseSetting_o *)pSVar4,MethodInfo_Void_AddItem);
    __this_02 = (UI_AdvancedConfigurationPopup_o *)0x0;
    if (*(Settings_ListSetting_T__o **)(lVar1 + 0x30) != (Settings_ListSetting_T__o *)0x0) {
      Settings_ListSetting_object___AddItem
                (*(Settings_ListSetting_T__o **)(lVar1 + 0x30),(Settings_BaseSetting_o *)__this_01,
                 MethodInfo_Void_AddItem);
      UI_AdvancedConfigurationPopup__CreateServiceRow
                (__this,pSVar4,(Settings_StringSetting_o *)__this_01,pMVar6);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae558 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_02 = (UI_AdvancedConfigurationPopup_o *)&MethodInfo_List_1_Settings_StringSetting_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae558 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
  if (((lVar1 != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
     (__this_02 = *(UI_AdvancedConfigurationPopup_o **)(*(long *)(lVar1 + 0x28) + 0x18),
     __this_02 != (UI_AdvancedConfigurationPopup_o *)0x0)) {
    System_Collections_Generic_List_object___Remove
              ((System_Collections_Generic_List_object__o *)__this_02,item,MethodInfo_Boolean_Remove);
    if ((*(long *)(lVar1 + 0x30) != 0) &&
       (pSVar8 = *(System_Collections_Generic_List_object__o **)(*(long *)(lVar1 + 0x30) + 0x18),
       __this_02 = (UI_AdvancedConfigurationPopup_o *)0x0,
       pSVar8 != (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List_object___Remove(pSVar8,(Il2CppObject *)pMVar6,MethodInfo_Boolean_Remove);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pSVar7,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae559 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddItem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae559 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
  pSVar2 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar4 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar4,pSVar2,0x40,(MethodInfo *)0x0);
  pSVar7 = (Settings_StringSetting_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar5 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  pMVar6 = (MethodInfo *)0x0;
  pSVar8 = pSVar5;
  Settings_StringSetting___ctor_40f74f0
            ((Settings_StringSetting_o *)pSVar5,(System_String_o *)pSVar7,0x1000,(MethodInfo *)0x0);
  if ((lVar1 != 0) &&
     (pSVar8 = (System_Collections_Generic_List_object__o *)0x0,
     *(Settings_ListSetting_T__o **)(lVar1 + 0x38) != (Settings_ListSetting_T__o *)0x0)) {
    pSVar7 = pSVar4;
    Settings_ListSetting_object___AddItem
              (*(Settings_ListSetting_T__o **)(lVar1 + 0x38),(Settings_BaseSetting_o *)pSVar4,MethodInfo_Void_AddItem);
    pSVar8 = (System_Collections_Generic_List_object__o *)0x0;
    if (*(Settings_ListSetting_T__o **)(lVar1 + 0x40) != (Settings_ListSetting_T__o *)0x0) {
      Settings_ListSetting_object___AddItem
                (*(Settings_ListSetting_T__o **)(lVar1 + 0x40),(Settings_BaseSetting_o *)pSVar5,MethodInfo_Void_AddItem);
      UI_AdvancedConfigurationPopup__CreateSecretRow
                (__this_02,pSVar4,(Settings_StringSetting_o *)pSVar5,pMVar6);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae55a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pSVar8 = (System_Collections_Generic_List_object__o *)&MethodInfo_List_1_Settings_StringSetting_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae55a = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
  if (((lVar1 != 0) && (*(long *)(lVar1 + 0x38) != 0)) &&
     (pSVar8 = *(System_Collections_Generic_List_object__o **)(*(long *)(lVar1 + 0x38) + 0x18),
     pSVar8 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___Remove(pSVar8,item_00,MethodInfo_Boolean_Remove);
    if ((*(long *)(lVar1 + 0x40) != 0) &&
       (pSVar5 = *(System_Collections_Generic_List_object__o **)(*(long *)(lVar1 + 0x40) + 0x18),
       pSVar8 = (System_Collections_Generic_List_object__o *)0x0,
       pSVar5 != (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List_object___Remove(pSVar5,(Il2CppObject *)pMVar6,MethodInfo_Boolean_Remove);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pSVar7,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae55b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Advanced configuration saved.");
    g_data_057ae55b = '\x01';
  }
  plVar3 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
  __this_03 = (UI_TooltipPopup_o *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x238))();
    if (*(int *)((long)&TypeInfo_UIManager[1].fields.m_CancellationTokenSource + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar1 = (TypeInfo_UIManager->fields).Caller[1].fields.m_CachedPtr;
    __this_03 = TypeInfo_UIManager;
    if ((lVar1 != 0) &&
       (__this_00 = *(UI_MessagePopup_o **)(lVar1 + 0x30), __this_03 = (UI_TooltipPopup_o *)0x0,
       __this_00 != (UI_MessagePopup_o *)0x0)) {
      UI_MessagePopup__Show(__this_00,"Advanced configuration saved.",1,(MethodInfo *)0x0);
      (*(pSVar8->klass->vtable)._22_Clear.methodPtr)(pSVar8,(pSVar8->klass->vtable)._22_Clear.method);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UI_BasePopup___ctor(__this_03,(MethodInfo *)0x0);
  return;
}


// UI.AdvancedConfigurationPopup$$OnRemoveServiceClick
// il2cpp: void UI_AdvancedConfigurationPopup__OnRemoveServiceClick (UI_AdvancedConfigurationPopup_o* __this, UnityEngine_GameObject_o* row, Settings_StringSetting_o* keySetting, Settings_StringSetting_o* urlSetting, const MethodInfo* method);
// 0x43fa620

void UI_AdvancedConfigurationPopup__OnRemoveServiceClick
               (UI_AdvancedConfigurationPopup_o *__this,UnityEngine_GameObject_o *row,
               Settings_StringSetting_o *keySetting,Settings_StringSetting_o *urlSetting,MethodInfo *method)

{
  long lVar1;
  System_String_o *defaultValue;
  long *plVar2;
  UI_MessagePopup_o *__this_00;
  Settings_StringSetting_o *__this_01;
  System_Collections_Generic_List_object__o *pSVar3;
  MethodInfo *method_00;
  Il2CppObject *item;
  Settings_StringSetting_o *defaultValue_00;
  System_Collections_Generic_List_object__o *pSVar4;
  UI_TooltipPopup_o *__this_02;
  
  if (g_data_057ae558 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this = (UI_AdvancedConfigurationPopup_o *)&MethodInfo_List_1_Settings_StringSetting_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae558 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
  if (((lVar1 != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
     (__this = *(UI_AdvancedConfigurationPopup_o **)(*(long *)(lVar1 + 0x28) + 0x18),
     __this != (UI_AdvancedConfigurationPopup_o *)0x0)) {
    System_Collections_Generic_List_object___Remove
              ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)keySetting,MethodInfo_Boolean_Remove);
    if ((*(long *)(lVar1 + 0x30) != 0) &&
       (pSVar4 = *(System_Collections_Generic_List_object__o **)(*(long *)(lVar1 + 0x30) + 0x18),
       __this = (UI_AdvancedConfigurationPopup_o *)0x0,
       pSVar4 != (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List_object___Remove(pSVar4,(Il2CppObject *)urlSetting,MethodInfo_Boolean_Remove);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)row,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae559 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddItem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae559 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_01 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_01,defaultValue,0x40,(MethodInfo *)0x0);
  defaultValue_00 = (Settings_StringSetting_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar3 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  method_00 = (MethodInfo *)0x0;
  pSVar4 = pSVar3;
  Settings_StringSetting___ctor_40f74f0
            ((Settings_StringSetting_o *)pSVar3,(System_String_o *)defaultValue_00,0x1000,(MethodInfo *)0x0);
  if ((lVar1 != 0) &&
     (pSVar4 = (System_Collections_Generic_List_object__o *)0x0,
     *(Settings_ListSetting_T__o **)(lVar1 + 0x38) != (Settings_ListSetting_T__o *)0x0)) {
    defaultValue_00 = __this_01;
    Settings_ListSetting_object___AddItem
              (*(Settings_ListSetting_T__o **)(lVar1 + 0x38),(Settings_BaseSetting_o *)__this_01,MethodInfo_Void_AddItem)
    ;
    pSVar4 = (System_Collections_Generic_List_object__o *)0x0;
    if (*(Settings_ListSetting_T__o **)(lVar1 + 0x40) != (Settings_ListSetting_T__o *)0x0) {
      Settings_ListSetting_object___AddItem
                (*(Settings_ListSetting_T__o **)(lVar1 + 0x40),(Settings_BaseSetting_o *)pSVar3,MethodInfo_Void_AddItem);
      UI_AdvancedConfigurationPopup__CreateSecretRow
                (__this,__this_01,(Settings_StringSetting_o *)pSVar3,method_00);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae55a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pSVar4 = (System_Collections_Generic_List_object__o *)&MethodInfo_List_1_Settings_StringSetting_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae55a = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
  if (((lVar1 != 0) && (*(long *)(lVar1 + 0x38) != 0)) &&
     (pSVar4 = *(System_Collections_Generic_List_object__o **)(*(long *)(lVar1 + 0x38) + 0x18),
     pSVar4 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___Remove(pSVar4,item,MethodInfo_Boolean_Remove);
    if ((*(long *)(lVar1 + 0x40) != 0) &&
       (pSVar3 = *(System_Collections_Generic_List_object__o **)(*(long *)(lVar1 + 0x40) + 0x18),
       pSVar4 = (System_Collections_Generic_List_object__o *)0x0,
       pSVar3 != (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List_object___Remove(pSVar3,(Il2CppObject *)method_00,MethodInfo_Boolean_Remove);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)defaultValue_00,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae55b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Advanced configuration saved.");
    g_data_057ae55b = '\x01';
  }
  plVar2 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
  __this_02 = (UI_TooltipPopup_o *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x238))();
    if (*(int *)((long)&TypeInfo_UIManager[1].fields.m_CancellationTokenSource + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar1 = (TypeInfo_UIManager->fields).Caller[1].fields.m_CachedPtr;
    __this_02 = TypeInfo_UIManager;
    if ((lVar1 != 0) &&
       (__this_00 = *(UI_MessagePopup_o **)(lVar1 + 0x30), __this_02 = (UI_TooltipPopup_o *)0x0,
       __this_00 != (UI_MessagePopup_o *)0x0)) {
      UI_MessagePopup__Show(__this_00,"Advanced configuration saved.",1,(MethodInfo *)0x0);
      (*(pSVar4->klass->vtable)._22_Clear.methodPtr)(pSVar4,(pSVar4->klass->vtable)._22_Clear.method);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UI_BasePopup___ctor(__this_02,(MethodInfo *)0x0);
  return;
}


// UI.AdvancedConfigurationPopup$$OnAddSecretClick
// il2cpp: void UI_AdvancedConfigurationPopup__OnAddSecretClick (UI_AdvancedConfigurationPopup_o* __this, const MethodInfo* method);
// 0x43fa710

void UI_AdvancedConfigurationPopup__OnAddSecretClick
               (UI_AdvancedConfigurationPopup_o *__this,MethodInfo *method)

{
  long lVar1;
  System_String_o *defaultValue;
  long *plVar2;
  UI_MessagePopup_o *__this_00;
  Settings_StringSetting_o *__this_01;
  System_Collections_Generic_List_object__o *pSVar3;
  MethodInfo *method_00;
  Il2CppObject *item;
  Settings_StringSetting_o *defaultValue_00;
  System_Collections_Generic_List_object__o *__this_02;
  UI_TooltipPopup_o *__this_03;
  
  if (g_data_057ae559 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddItem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae559 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_01 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_01,defaultValue,0x40,(MethodInfo *)0x0);
  defaultValue_00 = (Settings_StringSetting_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar3 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  method_00 = (MethodInfo *)0x0;
  __this_02 = pSVar3;
  Settings_StringSetting___ctor_40f74f0
            ((Settings_StringSetting_o *)pSVar3,(System_String_o *)defaultValue_00,0x1000,(MethodInfo *)0x0);
  if ((lVar1 != 0) &&
     (__this_02 = (System_Collections_Generic_List_object__o *)0x0,
     *(Settings_ListSetting_T__o **)(lVar1 + 0x38) != (Settings_ListSetting_T__o *)0x0)) {
    defaultValue_00 = __this_01;
    Settings_ListSetting_object___AddItem
              (*(Settings_ListSetting_T__o **)(lVar1 + 0x38),(Settings_BaseSetting_o *)__this_01,MethodInfo_Void_AddItem)
    ;
    __this_02 = (System_Collections_Generic_List_object__o *)0x0;
    if (*(Settings_ListSetting_T__o **)(lVar1 + 0x40) != (Settings_ListSetting_T__o *)0x0) {
      Settings_ListSetting_object___AddItem
                (*(Settings_ListSetting_T__o **)(lVar1 + 0x40),(Settings_BaseSetting_o *)pSVar3,MethodInfo_Void_AddItem);
      UI_AdvancedConfigurationPopup__CreateSecretRow
                (__this,__this_01,(Settings_StringSetting_o *)pSVar3,method_00);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae55a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_02 = (System_Collections_Generic_List_object__o *)&MethodInfo_List_1_Settings_StringSetting_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae55a = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
  if (((lVar1 != 0) && (*(long *)(lVar1 + 0x38) != 0)) &&
     (__this_02 = *(System_Collections_Generic_List_object__o **)(*(long *)(lVar1 + 0x38) + 0x18),
     __this_02 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___Remove(__this_02,item,MethodInfo_Boolean_Remove);
    if ((*(long *)(lVar1 + 0x40) != 0) &&
       (pSVar3 = *(System_Collections_Generic_List_object__o **)(*(long *)(lVar1 + 0x40) + 0x18),
       __this_02 = (System_Collections_Generic_List_object__o *)0x0,
       pSVar3 != (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List_object___Remove(pSVar3,(Il2CppObject *)method_00,MethodInfo_Boolean_Remove);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)defaultValue_00,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae55b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Advanced configuration saved.");
    g_data_057ae55b = '\x01';
  }
  plVar2 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
  __this_03 = (UI_TooltipPopup_o *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x238))();
    if (*(int *)((long)&TypeInfo_UIManager[1].fields.m_CancellationTokenSource + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar1 = (TypeInfo_UIManager->fields).Caller[1].fields.m_CachedPtr;
    __this_03 = TypeInfo_UIManager;
    if ((lVar1 != 0) &&
       (__this_00 = *(UI_MessagePopup_o **)(lVar1 + 0x30), __this_03 = (UI_TooltipPopup_o *)0x0,
       __this_00 != (UI_MessagePopup_o *)0x0)) {
      UI_MessagePopup__Show(__this_00,"Advanced configuration saved.",1,(MethodInfo *)0x0);
      (*(__this_02->klass->vtable)._22_Clear.methodPtr)(__this_02,(__this_02->klass->vtable)._22_Clear.method)
      ;
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UI_BasePopup___ctor(__this_03,(MethodInfo *)0x0);
  return;
}


// UI.AdvancedConfigurationPopup$$OnRemoveSecretClick
// il2cpp: void UI_AdvancedConfigurationPopup__OnRemoveSecretClick (UI_AdvancedConfigurationPopup_o* __this, UnityEngine_GameObject_o* row, Settings_StringSetting_o* keySetting, Settings_StringSetting_o* valueSetting, const MethodInfo* method);
// 0x43fa830

void UI_AdvancedConfigurationPopup__OnRemoveSecretClick
               (UI_AdvancedConfigurationPopup_o *__this,UnityEngine_GameObject_o *row,
               Settings_StringSetting_o *keySetting,Settings_StringSetting_o *valueSetting,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_List_object__o *__this_00;
  long *plVar2;
  UI_MessagePopup_o *__this_01;
  UI_TooltipPopup_o *__this_02;
  
  if (g_data_057ae55a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this = (UI_AdvancedConfigurationPopup_o *)&MethodInfo_List_1_Settings_StringSetting_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae55a = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
  if (((lVar1 != 0) && (*(long *)(lVar1 + 0x38) != 0)) &&
     (__this = *(UI_AdvancedConfigurationPopup_o **)(*(long *)(lVar1 + 0x38) + 0x18),
     __this != (UI_AdvancedConfigurationPopup_o *)0x0)) {
    System_Collections_Generic_List_object___Remove
              ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)keySetting,MethodInfo_Boolean_Remove);
    if ((*(long *)(lVar1 + 0x40) != 0) &&
       (__this_00 = *(System_Collections_Generic_List_object__o **)(*(long *)(lVar1 + 0x40) + 0x18),
       __this = (UI_AdvancedConfigurationPopup_o *)0x0,
       __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List_object___Remove(__this_00,(Il2CppObject *)valueSetting,MethodInfo_Boolean_Remove);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)row,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae55b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Advanced configuration saved.");
    g_data_057ae55b = '\x01';
  }
  plVar2 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
  __this_02 = (UI_TooltipPopup_o *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x238))();
    if (*(int *)((long)&TypeInfo_UIManager[1].fields.m_CancellationTokenSource + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar1 = (TypeInfo_UIManager->fields).Caller[1].fields.m_CachedPtr;
    __this_02 = TypeInfo_UIManager;
    if ((lVar1 != 0) &&
       (__this_01 = *(UI_MessagePopup_o **)(lVar1 + 0x30), __this_02 = (UI_TooltipPopup_o *)0x0,
       __this_01 != (UI_MessagePopup_o *)0x0)) {
      UI_MessagePopup__Show(__this_01,"Advanced configuration saved.",1,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UI_BasePopup___ctor(__this_02,(MethodInfo *)0x0);
  return;
}


// UI.AdvancedConfigurationPopup$$OnSaveButtonClick
// il2cpp: void UI_AdvancedConfigurationPopup__OnSaveButtonClick (UI_AdvancedConfigurationPopup_o* __this, const MethodInfo* method);
// 0x43fa920

void UI_AdvancedConfigurationPopup__OnSaveButtonClick
               (UI_AdvancedConfigurationPopup_o *__this,MethodInfo *method)

{
  long *plVar1;
  long lVar2;
  UI_MessagePopup_o *__this_00;
  UI_TooltipPopup_o *__this_01;
  
  if (g_data_057ae55b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Advanced configuration saved.");
    g_data_057ae55b = '\x01';
  }
  plVar1 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
  __this_01 = (UI_TooltipPopup_o *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x238))();
    if (*(int *)((long)&TypeInfo_UIManager[1].fields.m_CancellationTokenSource + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar2 = (TypeInfo_UIManager->fields).Caller[1].fields.m_CachedPtr;
    __this_01 = TypeInfo_UIManager;
    if ((lVar2 != 0) &&
       (__this_00 = *(UI_MessagePopup_o **)(lVar2 + 0x30), __this_01 = (UI_TooltipPopup_o *)0x0,
       __this_00 != (UI_MessagePopup_o *)0x0)) {
      UI_MessagePopup__Show(__this_00,"Advanced configuration saved.",1,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UI_BasePopup___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// UI.AdvancedConfigurationPopup$$.ctor
// il2cpp: void UI_AdvancedConfigurationPopup___ctor (UI_AdvancedConfigurationPopup_o* __this, const MethodInfo* method);
// 0x43faa00

void UI_AdvancedConfigurationPopup___ctor(UI_AdvancedConfigurationPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.AdvancedConfigurationPopup$$<Setup>b__17_0
// il2cpp: void UI_AdvancedConfigurationPopup___Setup_b__17_0 (UI_AdvancedConfigurationPopup_o* __this, const MethodInfo* method);
// 0x43faa10

void UI_AdvancedConfigurationPopup___Setup_b__17_0(UI_AdvancedConfigurationPopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 in_RDX;
  
  vtableDispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtableDispatch)(__this,(__this->klass->vtable)._22_Hide.method,in_RDX,vtableDispatch);
  return;
}


