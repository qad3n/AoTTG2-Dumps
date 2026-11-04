// Type: Gisketch.Aottg2UI.Game.AottgSettingsScreen
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgSettingsScreen.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgSettingsScreen.<>c__DisplayClass8_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_0___ctor (Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_0___ctor(Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen.<>c__DisplayClass8_1$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_1___ctor (Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_1_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_1___ctor(Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_1_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen.<>c__DisplayClass8_1$$<RefreshCategory>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_1___RefreshCategory_b__0 (Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_1_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x181e41ad0

void Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_1___RefreshCategory_b__0
               (Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_1_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_Action_AottgUi__AottgScreenSectionContext__o *pSVar1;
  Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_0_o *pGVar2;
  bool bVar3;
  System_String_o *tabId;
  float scrollOffset;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o local_28;
  
  if (Il2CppMethodInitialized_184344d46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"keybinds");
    Il2CppMethodInitialized_184344d46 = '\x01';
  }
  bVar3 = System_String__Equals_196c550
                    ((__this->fields).section.fields.Id,"keybinds",5,(MethodInfo *)0x0);
  if (bVar3) {
    pGVar2 = (__this->fields).CS___8__locals1;
    if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_0_o *)0x0) {
      tabId = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SelectedTab
                        ((pGVar2->fields).root,(MethodInfo *)0x0);
      pGVar2 = (__this->fields).CS___8__locals1;
      if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_0_o *)0x0) {
        local_28.fields._group = (__this->fields).context.fields._group;
        local_28.fields._order = (__this->fields).context.fields._order;
        local_28.fields._12_4_ = *(undefined4 *)&(__this->fields).context.fields.field_0xc;
        local_28.fields._SectionId_k__BackingField =
             (__this->fields).context.fields._SectionId_k__BackingField;
        local_28.fields._SectionTitle_k__BackingField =
             (__this->fields).context.fields._SectionTitle_k__BackingField;
        scrollOffset = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SavedScroll
                                 ((pGVar2->fields).root,tabId,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Build_231c980
                  (ui,&local_28,tabId,scrollOffset,(MethodInfo *)0x0);
        return;
      }
    }
    ThrowNullReferenceException();
  }
  pSVar1 = (__this->fields).section.fields._buildContent;
  if (pSVar1 == (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0) {
    return;
  }
  local_28.fields._group = (__this->fields).context.fields._group;
  local_28.fields._order = (__this->fields).context.fields._order;
  local_28.fields._12_4_ = *(undefined4 *)&(__this->fields).context.fields.field_0xc;
  local_28.fields._SectionId_k__BackingField = (__this->fields).context.fields._SectionId_k__BackingField;
  local_28.fields._SectionTitle_k__BackingField =
       (__this->fields).context.fields._SectionTitle_k__BackingField;
  (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,ui,&local_28,(pSVar1->fields).method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgSettingsScreen__get_RootStyle (Gisketch_Aottg2UI_Game_AottgSettingsScreen_o* __this, const MethodInfo* method);
// 0x181e31d90

System_String_o *
Gisketch_Aottg2UI_Game_AottgSettingsScreen__get_RootStyle
          (Gisketch_Aottg2UI_Game_AottgSettingsScreen_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344d3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuOverlay");
    Il2CppMethodInitialized_184344d3e = '\x01';
  }
  return "mainMenuOverlay";
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgSettingsScreen__get_RootLayout (Gisketch_Aottg2UI_Game_AottgSettingsScreen_o* __this, const MethodInfo* method);
// 0x181e31c80

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgSettingsScreen__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgSettingsScreen_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344d3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_184344d3f = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column","FlexStart","FlexStart",(System_String_o *)0x0
                      ,(System_String_o *)0x0,0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSettingsScreen__Build (Gisketch_Aottg2UI_Game_AottgSettingsScreen_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x181e308f0

void Gisketch_Aottg2UI_Game_AottgSettingsScreen__Build
               (Gisketch_Aottg2UI_Game_AottgSettingsScreen_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  System_String_o *value;
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *value_00;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *value_01;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *component;
  System_String_o *value_02;
  System_String_o *value_03;
  
  if (Il2CppMethodInitialized_184344d40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_BuildFooter);
    il2cpp_codegen_initialize_runtime_metadata(&"SETTINGS");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Settings");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-screen");
    Il2CppMethodInitialized_184344d40 = '\x01';
  }
  value_00 = Gisketch_Aottg2UI_Game_AottgSettingsScreen__Sections((MethodInfo *)0x0);
  value_01 = Gisketch_Aottg2UI_Game_AottgSettingsScreen__SettingsFooterOptions((MethodInfo *)0x0);
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_BuildFooter,(MethodInfo *)0x0);
  component = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel);
  value_02 = "settings-screen";
  value = "Common.Settings";
  value_03 = "SETTINGS";
  if (Il2CppMethodInitialized_184344d79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenSection_array);
    il2cpp_codegen_initialize_runtime_metadata(&"brush-side-panel");
    il2cpp_codegen_initialize_runtime_metadata(&"OPTIONS");
    Il2CppMethodInitialized_184344d79 = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)component,(MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrEmpty(value_02,(MethodInfo *)0x0);
  if (bVar1) {
    value_02 = "brush-side-panel";
  }
  if (component != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
    (component->fields)._id = value_02;
    Il2CppCodeGenWriteBarrier(&(component->fields)._id,value_02);
    bVar1 = System_String__IsNullOrEmpty(value_03,(MethodInfo *)0x0);
    if (bVar1) {
      value_03 = "OPTIONS";
    }
    (component->fields)._title = value_03;
    Il2CppCodeGenWriteBarrier(&(component->fields)._title,value_03);
    (component->fields)._titleKey = value;
    Il2CppCodeGenWriteBarrier(&(component->fields)._titleKey,value);
    if (value_00 == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
      value_00 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)
                 SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenSection_array,0);
    }
    (component->fields)._sections = value_00;
    Il2CppCodeGenWriteBarrier(&(component->fields)._sections,value_00);
    (component->fields)._layoutMode = 1;
    (component->fields)._footerOptions = value_01;
    Il2CppCodeGenWriteBarrier(&(component->fields)._footerOptions,value_01);
    (component->fields)._buildContentFooter = (System_Action_AottgUi__o *)__this_00;
    Il2CppCodeGenWriteBarrier(&(component->fields)._buildContentFooter,__this_00);
    (component->fields)._deferScrollSections = false;
    (component->fields)._lazySections = true;
    (component->fields)._hideSectionChrome = true;
    (component->fields)._contentScrollMode = 1;
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Component
                (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)component,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen$$Sections
// il2cpp: Gisketch_Aottg2UI_Game_AottgScreenSection_array* Gisketch_Aottg2UI_Game_AottgSettingsScreen__Sections (const MethodInfo* method);
// 0x181e31080

Gisketch_Aottg2UI_Game_AottgScreenSection_array *
Gisketch_Aottg2UI_Game_AottgSettingsScreen__Sections(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar5;
  System_Action_T1__T2__o *pSVar6;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Game_AottgScreenSection_o local_98;
  
  if (Il2CppMethodInitialized_184344d41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi_AottgScreenSectionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenSection_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_BuildAbility);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_BuildGeneral);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_BuildGraphics);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_BuildKeybinds);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_BuildSkins);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_BuildSound);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_BuildUi)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"buttonA");
    il2cpp_codegen_initialize_runtime_metadata(&"gear");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Top.SoundButton");
    il2cpp_codegen_initialize_runtime_metadata(&"general");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Top.AbilityButton");
    il2cpp_codegen_initialize_runtime_metadata(&"ABILITY");
    il2cpp_codegen_initialize_runtime_metadata(&"skins");
    il2cpp_codegen_initialize_runtime_metadata(&"sound");
    il2cpp_codegen_initialize_runtime_metadata(&"KEYBINDS");
    il2cpp_codegen_initialize_runtime_metadata(&"graphics");
    il2cpp_codegen_initialize_runtime_metadata(&"target");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Top.KeybindsButton");
    il2cpp_codegen_initialize_runtime_metadata(&"GRAPHICS");
    il2cpp_codegen_initialize_runtime_metadata(&"contrast");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Top.GraphicsButton");
    il2cpp_codegen_initialize_runtime_metadata(&"SOUND");
    il2cpp_codegen_initialize_runtime_metadata(&"SKINS");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Top.GeneralButton");
    il2cpp_codegen_initialize_runtime_metadata(&"shoppingBasket");
    il2cpp_codegen_initialize_runtime_metadata(&"UI");
    il2cpp_codegen_initialize_runtime_metadata(&"ui");
    il2cpp_codegen_initialize_runtime_metadata(&"menuList");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Top.UIButton");
    il2cpp_codegen_initialize_runtime_metadata(&"audioOn");
    il2cpp_codegen_initialize_runtime_metadata(&"keybinds");
    il2cpp_codegen_initialize_runtime_metadata(&"GENERAL");
    il2cpp_codegen_initialize_runtime_metadata(&"ability");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Top.SkinsButton");
    Il2CppMethodInitialized_184344d41 = '\x01';
  }
  pGVar5 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenSection_array,7);
  pSVar6 = (System_Action_T1__T2__o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi_AottgScreenSectionContext);
  System_Action_object__AottgScreenSectionContext____ctor
            (pSVar6,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_BuildGeneral,
             (MethodInfo_1467710 *)0x0);
  pSVar4 = "GENERAL";
  pSVar3 = "general";
  pSVar2 = "gear";
  pSVar1 = "SettingsPopup.Top.GeneralButton";
  pSVar7 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__TitleCase
                     ("GENERAL",(MethodInfo *)0x0);
  local_98.fields.AutoAddKeywords = false;
  local_98.fields.HideSearch = false;
  local_98.fields.HideHeader = false;
  local_98.fields._67_5_ = 0;
  local_98.fields._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
  local_98.fields._buildHeaderActions = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
  local_98.fields.Id = (System_String_o *)0x0;
  local_98.fields.Label = (System_String_o *)0x0;
  local_98.fields.TextKey = (System_String_o *)0x0;
  local_98.fields.Icon = (System_String_o *)0x0;
  local_98.fields.SearchTitle = (System_String_o *)0x0;
  local_98.fields.Keywords = (System_String_o *)0x0;
  Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_1e2d890
            (&local_98,pSVar3,pSVar4,pSVar2,(System_Action_AottgUi__AottgScreenSectionContext__o *)pSVar6,
             pSVar1,(System_String_o *)0x0,true,pSVar7,
             (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0,false,false,(MethodInfo *)0x0);
  if (pGVar5 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
    if ((int)pGVar5->max_length != 0) {
      pGVar5->m_Items[0].fields._buildContent = local_98.fields._buildContent;
      pGVar5->m_Items[0].fields._buildHeaderActions = local_98.fields._buildHeaderActions;
      pGVar5->m_Items[0].fields.Id = local_98.fields.Id;
      pGVar5->m_Items[0].fields.Label = local_98.fields.Label;
      pGVar5->m_Items[0].fields.TextKey = local_98.fields.TextKey;
      pGVar5->m_Items[0].fields.Icon = local_98.fields.Icon;
      pGVar5->m_Items[0].fields.SearchTitle = local_98.fields.SearchTitle;
      pGVar5->m_Items[0].fields.Keywords = local_98.fields.Keywords;
      pGVar5->m_Items[0].fields.AutoAddKeywords = local_98.fields.AutoAddKeywords;
      pGVar5->m_Items[0].fields.HideSearch = local_98.fields.HideSearch;
      pGVar5->m_Items[0].fields.HideHeader = local_98.fields.HideHeader;
      *(undefined5 *)&pGVar5->m_Items[0].fields.field_0x43 = local_98.fields._67_5_;
      Il2CppCodeGenWriteBarrier((void **)pGVar5->m_Items,(void *)0x0);
      pSVar6 = (System_Action_T1__T2__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Action_AottgUi_AottgScreenSectionContext);
      System_Action_object__AottgScreenSectionContext____ctor
                (pSVar6,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_BuildSound,
                 (MethodInfo_1467710 *)0x0);
      pSVar4 = "sound";
      pSVar3 = "SettingsPopup.Top.SoundButton";
      pSVar2 = "audioOn";
      pSVar1 = "SOUND";
      pSVar7 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__TitleCase
                         ("SOUND",(MethodInfo *)0x0);
      local_98.fields.AutoAddKeywords = false;
      local_98.fields.HideSearch = false;
      local_98.fields.HideHeader = false;
      local_98.fields._67_5_ = 0;
      local_98.fields._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
      local_98.fields._buildHeaderActions = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
      local_98.fields.Id = (System_String_o *)0x0;
      local_98.fields.Label = (System_String_o *)0x0;
      local_98.fields.TextKey = (System_String_o *)0x0;
      local_98.fields.Icon = (System_String_o *)0x0;
      local_98.fields.SearchTitle = (System_String_o *)0x0;
      local_98.fields.Keywords = (System_String_o *)0x0;
      Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_1e2d890
                (&local_98,pSVar4,pSVar1,pSVar2,(System_Action_AottgUi__AottgScreenSectionContext__o *)pSVar6,
                 pSVar3,(System_String_o *)0x0,true,pSVar7,
                 (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0,false,false,(MethodInfo *)0x0);
      if (1 < (uint)pGVar5->max_length) {
        pGVar5->m_Items[1].fields._buildContent = local_98.fields._buildContent;
        pGVar5->m_Items[1].fields._buildHeaderActions = local_98.fields._buildHeaderActions;
        pGVar5->m_Items[1].fields.Id = local_98.fields.Id;
        pGVar5->m_Items[1].fields.Label = local_98.fields.Label;
        pGVar5->m_Items[1].fields.TextKey = local_98.fields.TextKey;
        pGVar5->m_Items[1].fields.Icon = local_98.fields.Icon;
        pGVar5->m_Items[1].fields.SearchTitle = local_98.fields.SearchTitle;
        pGVar5->m_Items[1].fields.Keywords = local_98.fields.Keywords;
        pGVar5->m_Items[1].fields.AutoAddKeywords = local_98.fields.AutoAddKeywords;
        pGVar5->m_Items[1].fields.HideSearch = local_98.fields.HideSearch;
        pGVar5->m_Items[1].fields.HideHeader = local_98.fields.HideHeader;
        *(undefined5 *)&pGVar5->m_Items[1].fields.field_0x43 = local_98.fields._67_5_;
        Il2CppCodeGenWriteBarrier((void **)(pGVar5->m_Items + 1),(void *)0x0);
        pSVar6 = (System_Action_T1__T2__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Action_AottgUi_AottgScreenSectionContext);
        System_Action_object__AottgScreenSectionContext____ctor
                  (pSVar6,(Il2CppObject *)0x0,
                   (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_BuildGraphics,
                   (MethodInfo_1467710 *)0x0);
        pSVar4 = "GRAPHICS";
        pSVar3 = "graphics";
        pSVar2 = "contrast";
        pSVar1 = "SettingsPopup.Top.GraphicsButton";
        pSVar7 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__TitleCase
                           ("GRAPHICS",(MethodInfo *)0x0);
        local_98.fields.AutoAddKeywords = false;
        local_98.fields.HideSearch = false;
        local_98.fields.HideHeader = false;
        local_98.fields._67_5_ = 0;
        local_98.fields._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
        local_98.fields._buildHeaderActions = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
        local_98.fields.Id = (System_String_o *)0x0;
        local_98.fields.Label = (System_String_o *)0x0;
        local_98.fields.TextKey = (System_String_o *)0x0;
        local_98.fields.Icon = (System_String_o *)0x0;
        local_98.fields.SearchTitle = (System_String_o *)0x0;
        local_98.fields.Keywords = (System_String_o *)0x0;
        Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_1e2d890
                  (&local_98,pSVar3,pSVar4,pSVar2,
                   (System_Action_AottgUi__AottgScreenSectionContext__o *)pSVar6,pSVar1,(System_String_o *)0x0
                   ,true,pSVar7,(System_Action_AottgUi__AottgScreenSectionContext__o *)0x0,false,false,
                   (MethodInfo *)0x0);
        if (2 < (uint)pGVar5->max_length) {
          pGVar5->m_Items[2].fields._buildContent = local_98.fields._buildContent;
          pGVar5->m_Items[2].fields._buildHeaderActions = local_98.fields._buildHeaderActions;
          pGVar5->m_Items[2].fields.Id = local_98.fields.Id;
          pGVar5->m_Items[2].fields.Label = local_98.fields.Label;
          pGVar5->m_Items[2].fields.TextKey = local_98.fields.TextKey;
          pGVar5->m_Items[2].fields.Icon = local_98.fields.Icon;
          pGVar5->m_Items[2].fields.SearchTitle = local_98.fields.SearchTitle;
          pGVar5->m_Items[2].fields.Keywords = local_98.fields.Keywords;
          pGVar5->m_Items[2].fields.AutoAddKeywords = local_98.fields.AutoAddKeywords;
          pGVar5->m_Items[2].fields.HideSearch = local_98.fields.HideSearch;
          pGVar5->m_Items[2].fields.HideHeader = local_98.fields.HideHeader;
          *(undefined5 *)&pGVar5->m_Items[2].fields.field_0x43 = local_98.fields._67_5_;
          Il2CppCodeGenWriteBarrier((void **)(pGVar5->m_Items + 2),(void *)0x0);
          pSVar6 = (System_Action_T1__T2__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Action_AottgUi_AottgScreenSectionContext);
          System_Action_object__AottgScreenSectionContext____ctor
                    (pSVar6,(Il2CppObject *)0x0,
                     (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_BuildUi,
                     (MethodInfo_1467710 *)0x0);
          pSVar4 = "menuList";
          pSVar3 = "SettingsPopup.Top.UIButton";
          pSVar2 = "UI";
          pSVar1 = "ui";
          pSVar7 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__TitleCase
                             ("UI",(MethodInfo *)0x0);
          local_98.fields.AutoAddKeywords = false;
          local_98.fields.HideSearch = false;
          local_98.fields.HideHeader = false;
          local_98.fields._67_5_ = 0;
          local_98.fields._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
          local_98.fields._buildHeaderActions = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
          local_98.fields.Id = (System_String_o *)0x0;
          local_98.fields.Label = (System_String_o *)0x0;
          local_98.fields.TextKey = (System_String_o *)0x0;
          local_98.fields.Icon = (System_String_o *)0x0;
          local_98.fields.SearchTitle = (System_String_o *)0x0;
          local_98.fields.Keywords = (System_String_o *)0x0;
          Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_1e2d890
                    (&local_98,pSVar1,pSVar2,pSVar4,
                     (System_Action_AottgUi__AottgScreenSectionContext__o *)pSVar6,pSVar3,
                     (System_String_o *)0x0,true,pSVar7,
                     (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0,false,false,(MethodInfo *)0x0)
          ;
          if (3 < (uint)pGVar5->max_length) {
            pGVar5->m_Items[3].fields._buildContent = local_98.fields._buildContent;
            pGVar5->m_Items[3].fields._buildHeaderActions = local_98.fields._buildHeaderActions;
            pGVar5->m_Items[3].fields.Id = local_98.fields.Id;
            pGVar5->m_Items[3].fields.Label = local_98.fields.Label;
            pGVar5->m_Items[3].fields.TextKey = local_98.fields.TextKey;
            pGVar5->m_Items[3].fields.Icon = local_98.fields.Icon;
            pGVar5->m_Items[3].fields.SearchTitle = local_98.fields.SearchTitle;
            pGVar5->m_Items[3].fields.Keywords = local_98.fields.Keywords;
            pGVar5->m_Items[3].fields.AutoAddKeywords = local_98.fields.AutoAddKeywords;
            pGVar5->m_Items[3].fields.HideSearch = local_98.fields.HideSearch;
            pGVar5->m_Items[3].fields.HideHeader = local_98.fields.HideHeader;
            *(undefined5 *)&pGVar5->m_Items[3].fields.field_0x43 = local_98.fields._67_5_;
            Il2CppCodeGenWriteBarrier((void **)(pGVar5->m_Items + 3),(void *)0x0);
            pSVar6 = (System_Action_T1__T2__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Action_AottgUi_AottgScreenSectionContext);
            System_Action_object__AottgScreenSectionContext____ctor
                      (pSVar6,(Il2CppObject *)0x0,
                       (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_BuildKeybinds,
                       (MethodInfo_1467710 *)0x0);
            pSVar4 = "KEYBINDS";
            pSVar3 = "buttonA";
            pSVar2 = "SettingsPopup.Top.KeybindsButton";
            pSVar1 = "keybinds";
            pSVar7 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__TitleCase
                               ("KEYBINDS",(MethodInfo *)0x0);
            local_98.fields.AutoAddKeywords = false;
            local_98.fields.HideSearch = false;
            local_98.fields.HideHeader = false;
            local_98.fields._67_5_ = 0;
            local_98.fields._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
            local_98.fields._buildHeaderActions = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
            local_98.fields.Id = (System_String_o *)0x0;
            local_98.fields.Label = (System_String_o *)0x0;
            local_98.fields.TextKey = (System_String_o *)0x0;
            local_98.fields.Icon = (System_String_o *)0x0;
            local_98.fields.SearchTitle = (System_String_o *)0x0;
            local_98.fields.Keywords = (System_String_o *)0x0;
            Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_1e2d890
                      (&local_98,pSVar1,pSVar4,pSVar3,
                       (System_Action_AottgUi__AottgScreenSectionContext__o *)pSVar6,pSVar2,
                       (System_String_o *)0x0,true,pSVar7,
                       (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0,false,false,
                       (MethodInfo *)0x0);
            if (4 < (uint)pGVar5->max_length) {
              pGVar5->m_Items[4].fields._buildContent = local_98.fields._buildContent;
              pGVar5->m_Items[4].fields._buildHeaderActions = local_98.fields._buildHeaderActions;
              pGVar5->m_Items[4].fields.Id = local_98.fields.Id;
              pGVar5->m_Items[4].fields.Label = local_98.fields.Label;
              pGVar5->m_Items[4].fields.TextKey = local_98.fields.TextKey;
              pGVar5->m_Items[4].fields.Icon = local_98.fields.Icon;
              pGVar5->m_Items[4].fields.SearchTitle = local_98.fields.SearchTitle;
              pGVar5->m_Items[4].fields.Keywords = local_98.fields.Keywords;
              pGVar5->m_Items[4].fields.AutoAddKeywords = local_98.fields.AutoAddKeywords;
              pGVar5->m_Items[4].fields.HideSearch = local_98.fields.HideSearch;
              pGVar5->m_Items[4].fields.HideHeader = local_98.fields.HideHeader;
              *(undefined5 *)&pGVar5->m_Items[4].fields.field_0x43 = local_98.fields._67_5_;
              Il2CppCodeGenWriteBarrier((void **)(pGVar5->m_Items + 4),(void *)0x0);
              pSVar6 = (System_Action_T1__T2__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Action_AottgUi_AottgScreenSectionContext);
              System_Action_object__AottgScreenSectionContext____ctor
                        (pSVar6,(Il2CppObject *)0x0,
                         (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_BuildSkins,
                         (MethodInfo_1467710 *)0x0);
              pSVar4 = "skins";
              pSVar3 = "shoppingBasket";
              pSVar2 = "SettingsPopup.Top.SkinsButton";
              pSVar1 = "SKINS";
              pSVar7 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__TitleCase
                                 ("SKINS",(MethodInfo *)0x0);
              local_98.fields.AutoAddKeywords = false;
              local_98.fields.HideSearch = false;
              local_98.fields.HideHeader = false;
              local_98.fields._67_5_ = 0;
              local_98.fields._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
              local_98.fields._buildHeaderActions = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0
              ;
              local_98.fields.Id = (System_String_o *)0x0;
              local_98.fields.Label = (System_String_o *)0x0;
              local_98.fields.TextKey = (System_String_o *)0x0;
              local_98.fields.Icon = (System_String_o *)0x0;
              local_98.fields.SearchTitle = (System_String_o *)0x0;
              local_98.fields.Keywords = (System_String_o *)0x0;
              Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_1e2d890
                        (&local_98,pSVar4,pSVar1,pSVar3,
                         (System_Action_AottgUi__AottgScreenSectionContext__o *)pSVar6,pSVar2,
                         (System_String_o *)0x0,true,pSVar7,
                         (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0,false,false,
                         (MethodInfo *)0x0);
              if (5 < (uint)pGVar5->max_length) {
                pGVar5->m_Items[5].fields._buildContent = local_98.fields._buildContent;
                pGVar5->m_Items[5].fields._buildHeaderActions = local_98.fields._buildHeaderActions;
                pGVar5->m_Items[5].fields.Id = local_98.fields.Id;
                pGVar5->m_Items[5].fields.Label = local_98.fields.Label;
                pGVar5->m_Items[5].fields.TextKey = local_98.fields.TextKey;
                pGVar5->m_Items[5].fields.Icon = local_98.fields.Icon;
                pGVar5->m_Items[5].fields.SearchTitle = local_98.fields.SearchTitle;
                pGVar5->m_Items[5].fields.Keywords = local_98.fields.Keywords;
                pGVar5->m_Items[5].fields.AutoAddKeywords = local_98.fields.AutoAddKeywords;
                pGVar5->m_Items[5].fields.HideSearch = local_98.fields.HideSearch;
                pGVar5->m_Items[5].fields.HideHeader = local_98.fields.HideHeader;
                *(undefined5 *)&pGVar5->m_Items[5].fields.field_0x43 = local_98.fields._67_5_;
                Il2CppCodeGenWriteBarrier((void **)(pGVar5->m_Items + 5),(void *)0x0);
                pSVar6 = (System_Action_T1__T2__o *)
                         il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_System_Action_AottgUi_AottgScreenSectionContext);
                System_Action_object__AottgScreenSectionContext____ctor
                          (pSVar6,(Il2CppObject *)0x0,
                           (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_BuildAbility,
                           (MethodInfo_1467710 *)0x0);
                pSVar4 = "target";
                pSVar3 = "SettingsPopup.Top.AbilityButton";
                pSVar2 = "ability";
                pSVar1 = "ABILITY";
                pSVar7 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__TitleCase
                                   ("ABILITY",(MethodInfo *)0x0);
                local_98.fields.AutoAddKeywords = false;
                local_98.fields.HideSearch = false;
                local_98.fields.HideHeader = false;
                local_98.fields._67_5_ = 0;
                local_98.fields._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
                local_98.fields._buildHeaderActions =
                     (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
                local_98.fields.Id = (System_String_o *)0x0;
                local_98.fields.Label = (System_String_o *)0x0;
                local_98.fields.TextKey = (System_String_o *)0x0;
                local_98.fields.Icon = (System_String_o *)0x0;
                local_98.fields.SearchTitle = (System_String_o *)0x0;
                local_98.fields.Keywords = (System_String_o *)0x0;
                Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_1e2d890
                          (&local_98,pSVar2,pSVar1,pSVar4,
                           (System_Action_AottgUi__AottgScreenSectionContext__o *)pSVar6,pSVar3,
                           (System_String_o *)0x0,true,pSVar7,
                           (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0,false,false,
                           (MethodInfo *)0x0);
                if (6 < (uint)pGVar5->max_length) {
                  pGVar5->m_Items[6].fields._buildContent = local_98.fields._buildContent;
                  pGVar5->m_Items[6].fields._buildHeaderActions = local_98.fields._buildHeaderActions;
                  pGVar5->m_Items[6].fields.Id = local_98.fields.Id;
                  pGVar5->m_Items[6].fields.Label = local_98.fields.Label;
                  pGVar5->m_Items[6].fields.TextKey = local_98.fields.TextKey;
                  pGVar5->m_Items[6].fields.Icon = local_98.fields.Icon;
                  pGVar5->m_Items[6].fields.SearchTitle = local_98.fields.SearchTitle;
                  pGVar5->m_Items[6].fields.Keywords = local_98.fields.Keywords;
                  pGVar5->m_Items[6].fields.AutoAddKeywords = local_98.fields.AutoAddKeywords;
                  pGVar5->m_Items[6].fields.HideSearch = local_98.fields.HideSearch;
                  pGVar5->m_Items[6].fields.HideHeader = local_98.fields.HideHeader;
                  *(undefined5 *)&pGVar5->m_Items[6].fields.field_0x43 = local_98.fields._67_5_;
                  Il2CppCodeGenWriteBarrier((void **)(pGVar5->m_Items + 6),(void *)0x0);
                  return pGVar5;
                }
              }
            }
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen$$Category
// il2cpp: Gisketch_Aottg2UI_Game_AottgScreenSection_o Gisketch_Aottg2UI_Game_AottgSettingsScreen__Category (System_String_o* id, System_String_o* label, System_String_o* icon, System_String_o* textKey, System_Action_AottgUi__AottgScreenSectionContext__o* build, const MethodInfo* method);
// 0x181e30ae0

Gisketch_Aottg2UI_Game_AottgScreenSection_o *
Gisketch_Aottg2UI_Game_AottgSettingsScreen__Category
          (Gisketch_Aottg2UI_Game_AottgScreenSection_o *__return_storage_ptr__,System_String_o *id,
          System_String_o *label,System_String_o *icon,System_String_o *textKey,
          System_Action_AottgUi__AottgScreenSectionContext__o *build,MethodInfo *method)

{
  System_String_o *searchTitle;
  
  searchTitle = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__TitleCase
                          (label,(MethodInfo *)0x0);
  (__return_storage_ptr__->fields)._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
  (__return_storage_ptr__->fields)._buildHeaderActions =
       (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
  (__return_storage_ptr__->fields).Id = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Label = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).TextKey = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Icon = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).SearchTitle = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Keywords = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).AutoAddKeywords = false;
  (__return_storage_ptr__->fields).HideSearch = false;
  (__return_storage_ptr__->fields).HideHeader = false;
  *(undefined5 *)&(__return_storage_ptr__->fields).field_0x43 = 0;
  Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_1e2d890
            (__return_storage_ptr__,id,label,icon,build,textKey,(System_String_o *)0x0,true,searchTitle,
             (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0,false,false,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen$$RefreshCategory
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgSettingsScreen__RefreshCategory (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* categoryId, const MethodInfo* method);
// 0x181e30ce0

bool Gisketch_Aottg2UI_Game_AottgSettingsScreen__RefreshCategory
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *categoryId,MethodInfo *method)

{
  System_String_o **ppSVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *replacement;
  System_Action_AottgUi__AottgScreenSectionContext__o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Game_AottgScreenSection_o *pGVar8;
  bool bVar9;
  bool bVar10;
  undefined5 uVar11;
  bool bVar12;
  Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_0_o *pGVar13;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar14;
  Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_1_o *object;
  System_String_o *pSVar15;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  System_String_o *pSVar16;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar17;
  UnityEngine_GameObject_o *root_00;
  Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions_o *__this_00;
  uint uVar18;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o local_38;
  
  if (Il2CppMethodInitialized_184344d42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_c__DisplayClass8_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_c__DisplayClass8_1_RefreshCategory_b__0)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_c__DisplayClass8_1);
    il2cpp_codegen_initialize_runtime_metadata(&"settings-screen");
    Il2CppMethodInitialized_184344d42 = '\x01';
  }
  pGVar13 = il2cpp_codegen_object_new
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_c__DisplayClass8_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pGVar13,(MethodInfo *)0x0);
  if (pGVar13 != (Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_0_o *)0x0) {
    (pGVar13->fields).root = root;
    Il2CppCodeGenWriteBarrier(&(pGVar13->fields).root,root);
    pGVar2 = (pGVar13->fields).root;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar12 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((bVar12) || (bVar12 = System_String__IsNullOrEmpty(categoryId,(MethodInfo *)0x0), bVar12)) {
      return false;
    }
    pGVar14 = Gisketch_Aottg2UI_Game_AottgSettingsScreen__Sections((MethodInfo *)0x0);
    if (pGVar14 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
      uVar18 = 0;
label_181e30df3:
      if ((int)pGVar14->max_length <= (int)uVar18) {
        return false;
      }
      object = il2cpp_codegen_object_new
                         ((Il2CppClass *)
                          TypeInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_c__DisplayClass8_1);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
      if (object == (Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_1_o *)0x0)
      goto label_181e31065;
      (object->fields).CS___8__locals1 = pGVar13;
      Il2CppCodeGenWriteBarrier(&(object->fields).CS___8__locals1,pGVar13);
      if (uVar18 < (uint)pGVar14->max_length) {
        pSVar3 = pGVar14->m_Items[(int)uVar18].fields._buildHeaderActions;
        ppSVar1 = &pGVar14->m_Items[(int)uVar18].fields.Id;
        pSVar15 = *ppSVar1;
        pSVar16 = ppSVar1[1];
        ppSVar1 = &pGVar14->m_Items[(int)uVar18].fields.TextKey;
        pSVar4 = *ppSVar1;
        pSVar5 = ppSVar1[1];
        ppSVar1 = &pGVar14->m_Items[(int)uVar18].fields.SearchTitle;
        pSVar6 = *ppSVar1;
        pSVar7 = ppSVar1[1];
        pGVar8 = pGVar14->m_Items + (int)uVar18;
        bVar12 = (pGVar8->fields).AutoAddKeywords;
        bVar9 = (pGVar8->fields).HideSearch;
        bVar10 = (pGVar8->fields).HideHeader;
        uVar11 = *(undefined5 *)&(pGVar8->fields).field_0x43;
        (object->fields).section.fields._buildContent = pGVar14->m_Items[(int)uVar18].fields._buildContent;
        (object->fields).section.fields._buildHeaderActions = pSVar3;
        (object->fields).section.fields.Id = pSVar15;
        (object->fields).section.fields.Label = pSVar16;
        (object->fields).section.fields.TextKey = pSVar4;
        (object->fields).section.fields.Icon = pSVar5;
        (object->fields).section.fields.SearchTitle = pSVar6;
        (object->fields).section.fields.Keywords = pSVar7;
        (object->fields).section.fields.AutoAddKeywords = bVar12;
        (object->fields).section.fields.HideSearch = bVar9;
        (object->fields).section.fields.HideHeader = bVar10;
        *(undefined5 *)&(object->fields).section.fields.field_0x43 = uVar11;
        Il2CppCodeGenWriteBarrier((void **)&object->fields,(void *)0x0);
        bVar12 = System_String__Equals_196c550
                           ((object->fields).section.fields.Id,categoryId,5,(MethodInfo *)0x0);
        if (!bVar12) {
          uVar18 = uVar18 + 1;
          goto label_181e30df3;
        }
        local_38.fields._group = (System_String_o *)0x0;
        local_38.fields._order = 0;
        local_38.fields._12_4_ = 0;
        local_38.fields._SectionId_k__BackingField = (System_String_o *)0x0;
        local_38.fields._SectionTitle_k__BackingField = (System_String_o *)0x0;
        Gisketch_Aottg2UI_Game_AottgScreenSectionContext___ctor
                  (&local_38,"settings-screen",(object->fields).section.fields.Id,
                   (object->fields).section.fields.SearchTitle,uVar18 * 10 + 0x1e,(MethodInfo *)0x0);
        (object->fields).context.fields._group = local_38.fields._group;
        (object->fields).context.fields._order = local_38.fields._order;
        *(undefined4 *)&(object->fields).context.fields.field_0xc = local_38.fields._12_4_;
        (object->fields).context.fields._SectionId_k__BackingField =
             local_38.fields._SectionId_k__BackingField;
        (object->fields).context.fields._SectionTitle_k__BackingField =
             local_38.fields._SectionTitle_k__BackingField;
        Il2CppCodeGenWriteBarrier((void **)&(object->fields).context,(void *)0x0);
        pGVar13 = (object->fields).CS___8__locals1;
        if (pGVar13 != (Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_0_o *)0x0) {
          pGVar2 = (pGVar13->fields).root;
          pSVar15 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__ContentId
                              ((object->fields).section.fields.Id,(MethodInfo *)0x0);
          __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                   il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
          System_Action_object____ctor
                    (__this,(Il2CppObject *)object,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_c__DisplayClass8_1_RefreshCategory_b__0
                     ,(MethodInfo *)0x0);
          pSVar16 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__OwnerPrefix
                              ((object->fields).section.fields.Id,(MethodInfo *)0x0);
          if (pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
            pGVar17 = Gisketch_Aottg2UI_GisketchUIRoot__BuildDetachedNodes
                                (pGVar2,pSVar15,(System_Action_AottgUi__o *)__this,pSVar16,(MethodInfo *)0x0);
            if (pGVar17 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
              return false;
            }
            if (pGVar17->max_length == 0) {
              return false;
            }
            if ((int)pGVar17->max_length != 0) {
              if (pGVar17->m_Items[0] == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                return false;
              }
              pGVar13 = (object->fields).CS___8__locals1;
              if ((pGVar13 == (Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_0_o *)0x0) ||
                 (pGVar2 = (pGVar13->fields).root, pGVar2 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0))
              goto label_181e31065;
              root_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pGVar2,(MethodInfo *)0x0);
              if ((int)pGVar17->max_length == 0) goto label_181e31071;
              bVar12 = Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__Invalidate
                                 (root_00,"settings-screen",(object->fields).section.fields.Id,
                                  pGVar17->m_Items[0],(MethodInfo *)0x0);
              if (bVar12) {
                return true;
              }
              pGVar13 = (object->fields).CS___8__locals1;
              if (pGVar13 == (Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_0_o *)0x0)
              goto label_181e31065;
              pGVar2 = (pGVar13->fields).root;
              pSVar15 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__ContentId
                                  ((object->fields).section.fields.Id,(MethodInfo *)0x0);
              if ((int)pGVar17->max_length != 0) {
                replacement = pGVar17->m_Items[0];
                __this_00 = il2cpp_codegen_object_new
                                      ((Il2CppClass *)
                                       TypeInfo_Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions);
                Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions___ctor(__this_00,(MethodInfo *)0x0);
                if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions_o *)0x0) {
                  (__this_00->fields).PreserveScroll = true;
                  (__this_00->fields).PreserveFocus = true;
                  (__this_00->fields).SettleLayout = true;
                  if (pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
                    bVar12 = Gisketch_Aottg2UI_GisketchUIRoot__RefreshNode
                                       (pGVar2,pSVar15,replacement,__this_00,(MethodInfo *)0x0);
                    return bVar12;
                  }
                }
                goto label_181e31065;
              }
            }
            goto label_181e31071;
          }
        }
        ThrowNullReferenceException();
      }
label_181e31071:
      ThrowIndexOutOfRangeException();
    }
  }
label_181e31065:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen$$SyncState
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSettingsScreen__SyncState (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x181e31c20

void Gisketch_Aottg2UI_Game_AottgSettingsScreen__SyncState
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory__SyncState(root,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__SyncState(root,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGraphicsCategory__SyncState(root,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory__SyncState(root,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SyncState(root,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SyncState(root,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory__SyncState(root,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen$$BuildGeneral
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSettingsScreen__BuildGeneral (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x181e307d0

void Gisketch_Aottg2UI_Game_AottgSettingsScreen__BuildGeneral
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o local_28;
  
  local_28.fields._group = (context->fields)._group;
  local_28.fields._order = (context->fields)._order;
  local_28.fields._12_4_ = *(undefined4 *)&(context->fields).field_0xc;
  local_28.fields._SectionId_k__BackingField = (context->fields)._SectionId_k__BackingField;
  local_28.fields._SectionTitle_k__BackingField = (context->fields)._SectionTitle_k__BackingField;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory__Build(content,&local_28,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen$$BuildSound
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSettingsScreen__BuildSound (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x181e30890

void Gisketch_Aottg2UI_Game_AottgSettingsScreen__BuildSound
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o local_28;
  
  local_28.fields._group = (context->fields)._group;
  local_28.fields._order = (context->fields)._order;
  local_28.fields._12_4_ = *(undefined4 *)&(context->fields).field_0xc;
  local_28.fields._SectionId_k__BackingField = (context->fields)._SectionId_k__BackingField;
  local_28.fields._SectionTitle_k__BackingField = (context->fields)._SectionTitle_k__BackingField;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__Build(content,&local_28,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen$$BuildGraphics
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSettingsScreen__BuildGraphics (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x181e30800

void Gisketch_Aottg2UI_Game_AottgSettingsScreen__BuildGraphics
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o local_28;
  
  local_28.fields._group = (context->fields)._group;
  local_28.fields._order = (context->fields)._order;
  local_28.fields._12_4_ = *(undefined4 *)&(context->fields).field_0xc;
  local_28.fields._SectionId_k__BackingField = (context->fields)._SectionId_k__BackingField;
  local_28.fields._SectionTitle_k__BackingField = (context->fields)._SectionTitle_k__BackingField;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGraphicsCategory__Build(content,&local_28,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen$$BuildUi
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSettingsScreen__BuildUi (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x181e308c0

void Gisketch_Aottg2UI_Game_AottgSettingsScreen__BuildUi
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o local_28;
  
  local_28.fields._group = (context->fields)._group;
  local_28.fields._order = (context->fields)._order;
  local_28.fields._12_4_ = *(undefined4 *)&(context->fields).field_0xc;
  local_28.fields._SectionId_k__BackingField = (context->fields)._SectionId_k__BackingField;
  local_28.fields._SectionTitle_k__BackingField = (context->fields)._SectionTitle_k__BackingField;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory__Build(content,&local_28,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen$$BuildKeybinds
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSettingsScreen__BuildKeybinds (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x181e30830

void Gisketch_Aottg2UI_Game_AottgSettingsScreen__BuildKeybinds
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o local_28;
  
  local_28.fields._group = (context->fields)._group;
  local_28.fields._order = (context->fields)._order;
  local_28.fields._12_4_ = *(undefined4 *)&(context->fields).field_0xc;
  local_28.fields._SectionId_k__BackingField = (context->fields)._SectionId_k__BackingField;
  local_28.fields._SectionTitle_k__BackingField = (context->fields)._SectionTitle_k__BackingField;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Build(content,&local_28,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen$$BuildSkins
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSettingsScreen__BuildSkins (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x181e30860

void Gisketch_Aottg2UI_Game_AottgSettingsScreen__BuildSkins
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o local_28;
  
  local_28.fields._group = (context->fields)._group;
  local_28.fields._order = (context->fields)._order;
  local_28.fields._12_4_ = *(undefined4 *)&(context->fields).field_0xc;
  local_28.fields._SectionId_k__BackingField = (context->fields)._SectionId_k__BackingField;
  local_28.fields._SectionTitle_k__BackingField = (context->fields)._SectionTitle_k__BackingField;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__Build(content,&local_28,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen$$BuildAbility
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSettingsScreen__BuildAbility (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x181e305c0

void Gisketch_Aottg2UI_Game_AottgSettingsScreen__BuildAbility
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o local_28;
  
  local_28.fields._group = (context->fields)._group;
  local_28.fields._order = (context->fields)._order;
  local_28.fields._12_4_ = *(undefined4 *)&(context->fields).field_0xc;
  local_28.fields._SectionId_k__BackingField = (context->fields)._SectionId_k__BackingField;
  local_28.fields._SectionTitle_k__BackingField = (context->fields)._SectionTitle_k__BackingField;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory__Build(content,&local_28,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSettingsScreen__BuildFooter (Gisketch_Aottg2UI_Code_AottgUi_o* footer, const MethodInfo* method);
// 0x181e305f0

void Gisketch_Aottg2UI_Game_AottgSettingsScreen__BuildFooter
               (Gisketch_Aottg2UI_Code_AottgUi_o *footer,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344d43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"return");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Default");
    il2cpp_codegen_initialize_runtime_metadata(&"save");
    il2cpp_codegen_initialize_runtime_metadata(&"settings.load");
    il2cpp_codegen_initialize_runtime_metadata(&"settings.default");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Save");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-footer-default");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-footer-load");
    il2cpp_codegen_initialize_runtime_metadata(&"Load");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-footer-save");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    il2cpp_codegen_initialize_runtime_metadata(&"settings.save");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"import");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Load");
    il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanelFooterPrimaryButton");
    Il2CppMethodInitialized_184344d43 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgSettingsScreen__FooterButton
            (footer,1,"Default","settings.default","settings-footer-default","return",
             "Common.Default",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgSettingsScreen__FooterButton
            (footer,1,"Load","settings.load","settings-footer-load","import",
             "Common.Load",(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Game_AottgSettingsScreen__FooterButton
                     (footer,0,"Save","settings.save","settings-footer-save",
                      "save","Common.Save",(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).style = "brushSidePanelFooterPrimaryButton";
    Il2CppCodeGenWriteBarrier(&(pGVar1->fields).style,"brushSidePanelFooterPrimaryButton");
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen$$SettingsFooterOptions
// il2cpp: Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array* Gisketch_Aottg2UI_Game_AottgSettingsScreen__SettingsFooterOptions (const MethodInfo* method);
// 0x181e31950

Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *
Gisketch_Aottg2UI_Game_AottgSettingsScreen__SettingsFooterOptions(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar5;
  System_String_o *value;
  System_String_o *local_c8;
  System_String_o *pSStack_c0;
  System_String_o *local_b8;
  System_String_o *pSStack_b0;
  System_String_o *local_a8;
  System_Action_GisketchActionContext__o *pSStack_a0;
  ulonglong local_98;
  System_String_o *pSStack_90;
  System_String_o *local_88;
  System_String_o *pSStack_80;
  System_String_o *local_78;
  System_String_o *pSStack_70;
  System_String_o *local_68;
  System_Action_GisketchActionContext__o *pSStack_60;
  ulonglong local_58;
  System_String_o *apSStack_50 [2];
  
  if (Il2CppMethodInitialized_184344d44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array);
    il2cpp_codegen_initialize_runtime_metadata(&"dialog.aottg-settings-search-palette");
    il2cpp_codegen_initialize_runtime_metadata(&"exitLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"back");
    il2cpp_codegen_initialize_runtime_metadata(&"SEARCH");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Search");
    il2cpp_codegen_initialize_runtime_metadata(&"search");
    il2cpp_codegen_initialize_runtime_metadata(&"zoom");
    il2cpp_codegen_initialize_runtime_metadata(&"BACK");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Back");
    il2cpp_codegen_initialize_runtime_metadata(&"settings.back");
    Il2CppMethodInitialized_184344d44 = '\x01';
  }
  pGVar5 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array,2);
  value = Gisketch_Aottg2UI_Game_AottgSearchShortcuts__CurrentScreenTooltip((MethodInfo *)0x0);
  pSVar4 = "dialog.aottg-settings-search-palette";
  pSVar3 = "zoom";
  pSVar2 = "Common.Search";
  pSVar1 = "SEARCH";
  local_b8 = (System_String_o *)0x0;
  pSStack_b0 = (System_String_o *)0x0;
  local_a8 = (System_String_o *)0x0;
  pSStack_a0 = (System_Action_GisketchActionContext__o *)0x0;
  local_98 = 0;
  pSStack_90 = (System_String_o *)0x0;
  local_c8 = "search";
  pSStack_c0 = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&local_c8,"search");
  pSStack_c0 = pSVar1;
  Il2CppCodeGenWriteBarrier(&pSStack_c0,pSVar1);
  local_b8 = pSVar2;
  Il2CppCodeGenWriteBarrier(&local_b8,pSVar2);
  local_a8 = pSVar4;
  Il2CppCodeGenWriteBarrier(&local_a8,pSVar4);
  pSStack_b0 = pSVar3;
  Il2CppCodeGenWriteBarrier(&pSStack_b0,pSVar3);
  pSStack_a0 = (System_Action_GisketchActionContext__o *)0x0;
  Il2CppCodeGenWriteBarrier(&pSStack_a0,(void *)0x0);
  local_98 = local_98 & 0xffffffffffffff00;
  pSStack_90 = value;
  Il2CppCodeGenWriteBarrier(&pSStack_90,value);
  if (pGVar5 != (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) {
    if ((int)pGVar5->max_length != 0) {
      pGVar5->m_Items[0].fields._id = local_c8;
      pGVar5->m_Items[0].fields.Label = pSStack_c0;
      pGVar5->m_Items[0].fields.TextKey = local_b8;
      pGVar5->m_Items[0].fields.Icon = pSStack_b0;
      pGVar5->m_Items[0].fields.ActionId = local_a8;
      pGVar5->m_Items[0].fields.Action = pSStack_a0;
      *(ulonglong *)&pGVar5->m_Items[0].fields.Searchable = local_98;
      pGVar5->m_Items[0].fields.Tooltip = pSStack_90;
      Il2CppCodeGenWriteBarrier((void **)pGVar5->m_Items,(void *)0x0);
      pSVar4 = "settings.back";
      pSVar3 = "exitLeft";
      pSVar2 = "BACK";
      pSVar1 = "Common.Back";
      local_78 = (System_String_o *)0x0;
      pSStack_70 = (System_String_o *)0x0;
      local_68 = (System_String_o *)0x0;
      pSStack_60 = (System_Action_GisketchActionContext__o *)0x0;
      local_58 = 0;
      apSStack_50[0] = (System_String_o *)0x0;
      local_88 = "back";
      pSStack_80 = (System_String_o *)0x0;
      Il2CppCodeGenWriteBarrier(&local_88,"back");
      pSStack_80 = pSVar2;
      Il2CppCodeGenWriteBarrier(&pSStack_80,pSVar2);
      local_78 = pSVar1;
      Il2CppCodeGenWriteBarrier(&local_78,pSVar1);
      local_68 = pSVar4;
      Il2CppCodeGenWriteBarrier(&local_68,pSVar4);
      pSStack_70 = pSVar3;
      Il2CppCodeGenWriteBarrier(&pSStack_70,pSVar3);
      pSStack_60 = (System_Action_GisketchActionContext__o *)0x0;
      Il2CppCodeGenWriteBarrier(&pSStack_60,(void *)0x0);
      local_58 = local_58 & 0xffffffffffffff00;
      apSStack_50[0] = (System_String_o *)0x0;
      Il2CppCodeGenWriteBarrier(apSStack_50,(void *)0x0);
      if (1 < (uint)pGVar5->max_length) {
        pGVar5->m_Items[1].fields._id = local_88;
        pGVar5->m_Items[1].fields.Label = pSStack_80;
        pGVar5->m_Items[1].fields.TextKey = local_78;
        pGVar5->m_Items[1].fields.Icon = pSStack_70;
        pGVar5->m_Items[1].fields.ActionId = local_68;
        pGVar5->m_Items[1].fields.Action = pSStack_60;
        *(ulonglong *)&pGVar5->m_Items[1].fields.Searchable = local_58;
        pGVar5->m_Items[1].fields.Tooltip = apSStack_50[0];
        Il2CppCodeGenWriteBarrier((void **)(pGVar5->m_Items + 1),(void *)0x0);
        return pGVar5;
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen$$FooterButton
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Game_AottgSettingsScreen__FooterButton (Gisketch_Aottg2UI_Code_AottgUi_o* footer, int32_t variant, System_String_o* text, System_String_o* actionId, System_String_o* id, System_String_o* icon, System_String_o* textKey, const MethodInfo* method);
// 0x181e30b70

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Game_AottgSettingsScreen__FooterButton
          (Gisketch_Aottg2UI_Code_AottgUi_o *footer,int32_t variant,System_String_o *text,
          System_String_o *actionId,System_String_o *id,System_String_o *icon,System_String_o *textKey,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  
  if (Il2CppMethodInitialized_184344d45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    Il2CppMethodInitialized_184344d45 = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (footer,variant,text,actionId,id,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,icon,(MethodInfo *)0x0);
    value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).layout = value;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout,value);
      (pGVar1->fields).textKey = textKey;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).textKey,textKey);
      return pGVar1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSettingsScreen___ctor (Gisketch_Aottg2UI_Game_AottgSettingsScreen_o* __this, const MethodInfo* method);
// 0x1805386d0

void
Gisketch_Aottg2UI_Game_AottgSettingsScreen___ctor(Gisketch_Aottg2UI_Game_AottgSettingsScreen_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgScreen___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}


