// Type: Gisketch.Aottg2UI.Game.AottgSettingsScreen
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgSettingsScreen.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgSettingsScreen.<>c__DisplayClass8_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_0___ctor (Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x5911990

void Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_0___ctor
               (Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen.<>c__DisplayClass8_1$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_1___ctor (Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_1_o* __this, const MethodInfo* method);
// 0x59119a0

void Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_1___ctor
               (Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_1_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen.<>c__DisplayClass8_1$$<RefreshCategory>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_1___RefreshCategory_b__0 (Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_1_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5911dc0

void Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_1___RefreshCategory_b__0
               (Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_1_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_0_o *pGVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_Fields context;
  bool bVar2;
  System_String_o *tabId;
  float scrollOffset;
  
  if (Il2CppMethodInitialized_075456be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    il2cpp_codegen_initialize_runtime_metadata(&"keybinds");
    Il2CppMethodInitialized_075456be = '\x01';
  }
  bVar2 = System_String__Equals_52ffe30
                    ((__this->fields).section.fields.Id,"keybinds",5,(MethodInfo *)0x0);
  if (!bVar2) {
    Gisketch_Aottg2UI_Game_AottgScreenSection__Build
              (&(__this->fields).section,ui,
               (Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o)(__this->fields).context.fields,
               (MethodInfo *)0x0);
    return;
  }
  pGVar1 = (__this->fields).CS___8__locals1;
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_0_o *)0x0) {
    root = (pGVar1->fields).root;
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    }
    tabId = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SelectedTab
                      (root,(MethodInfo *)0x0);
    context = (__this->fields).context.fields;
    pGVar1 = (__this->fields).CS___8__locals1;
    if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_0_o *)0x0) {
      scrollOffset = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SavedScroll
                               ((pGVar1->fields).root,tabId,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Build_5d42950
                (ui,(Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o)context,tabId,scrollOffset,
                 (MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgSettingsScreen__get_RootStyle (Gisketch_Aottg2UI_Game_AottgSettingsScreen_o* __this, const MethodInfo* method);
// 0x59108f0

System_String_o *
Gisketch_Aottg2UI_Game_AottgSettingsScreen__get_RootStyle
          (Gisketch_Aottg2UI_Game_AottgSettingsScreen_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075456b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuOverlay");
    Il2CppMethodInitialized_075456b4 = '\x01';
  }
  return "mainMenuOverlay";
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgSettingsScreen__get_RootLayout (Gisketch_Aottg2UI_Game_AottgSettingsScreen_o* __this, const MethodInfo* method);
// 0x5910920

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgSettingsScreen__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgSettingsScreen_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_075456b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_075456b5 = '\x01';
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
// 0x59109f0

void Gisketch_Aottg2UI_Game_AottgSettingsScreen__Build
               (Gisketch_Aottg2UI_Game_AottgSettingsScreen_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *sections;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *footerOptions;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this_01;
  System_String_o **ppSVar1;
  
  if (Il2CppMethodInitialized_075456b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_BuildFooter);
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Settings");
    ppSVar1 = &"settings-screen";
    il2cpp_codegen_initialize_runtime_metadata(&"settings-screen");
    Il2CppMethodInitialized_075456b6 = '\x01';
    __this = (Gisketch_Aottg2UI_Game_AottgSettingsScreen_o *)ppSVar1;
  }
  sections = Gisketch_Aottg2UI_Game_AottgSettingsScreen__Sections((MethodInfo *)__this);
  footerOptions = Gisketch_Aottg2UI_Game_AottgSettingsScreen__SettingsFooterOptions((MethodInfo *)__this);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_BuildFooter,
             (MethodInfo_4A81BE0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel);
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___ctor_58165f0
            (__this_01,"Common.Settings",sections,1,footerOptions,"settings-screen",__this_00,false,
             true,true,1,(MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen$$Sections
// il2cpp: Gisketch_Aottg2UI_Game_AottgScreenSection_array* Gisketch_Aottg2UI_Game_AottgSettingsScreen__Sections (const MethodInfo* method);
// 0x5910af0

Gisketch_Aottg2UI_Game_AottgScreenSection_array *
Gisketch_Aottg2UI_Game_AottgSettingsScreen__Sections(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar1;
  System_Action_T1__T2__o *pSVar2;
  Gisketch_Aottg2UI_Game_AottgScreenSection_o local_218;
  System_Action_AottgUi__AottgScreenSectionContext__o *local_1d8;
  System_Action_AottgUi__AottgScreenSectionContext__o *pSStack_1d0;
  System_String_o *local_1c8;
  System_String_o *pSStack_1c0;
  System_String_o *local_1b8;
  System_String_o *pSStack_1b0;
  System_String_o *local_1a8;
  bool bStack_1a0;
  bool bStack_19f;
  bool bStack_19e;
  undefined5 uStack_19d;
  System_Action_AottgUi__AottgScreenSectionContext__o *local_198;
  System_Action_AottgUi__AottgScreenSectionContext__o *pSStack_190;
  System_String_o *local_188;
  System_String_o *pSStack_180;
  System_String_o *local_178;
  System_String_o *pSStack_170;
  System_String_o *local_168;
  bool bStack_160;
  bool bStack_15f;
  bool bStack_15e;
  undefined5 uStack_15d;
  System_Action_AottgUi__AottgScreenSectionContext__o *local_158;
  System_Action_AottgUi__AottgScreenSectionContext__o *pSStack_150;
  System_String_o *local_148;
  System_String_o *pSStack_140;
  System_String_o *local_138;
  System_String_o *pSStack_130;
  System_String_o *local_128;
  bool bStack_120;
  bool bStack_11f;
  bool bStack_11e;
  undefined5 uStack_11d;
  System_Action_AottgUi__AottgScreenSectionContext__o *local_118;
  System_Action_AottgUi__AottgScreenSectionContext__o *pSStack_110;
  System_String_o *local_108;
  System_String_o *pSStack_100;
  System_String_o *local_f8;
  System_String_o *pSStack_f0;
  System_String_o *local_e8;
  bool bStack_e0;
  bool bStack_df;
  bool bStack_de;
  undefined5 uStack_dd;
  System_Action_AottgUi__AottgScreenSectionContext__o *local_d8;
  System_Action_AottgUi__AottgScreenSectionContext__o *pSStack_d0;
  System_String_o *local_c8;
  System_String_o *pSStack_c0;
  System_String_o *local_b8;
  System_String_o *pSStack_b0;
  System_String_o *local_a8;
  bool bStack_a0;
  bool bStack_9f;
  bool bStack_9e;
  undefined5 uStack_9d;
  System_Action_AottgUi__AottgScreenSectionContext__o *local_98;
  System_Action_AottgUi__AottgScreenSectionContext__o *pSStack_90;
  System_String_o *local_88;
  System_String_o *pSStack_80;
  System_String_o *local_78;
  System_String_o *pSStack_70;
  System_String_o *local_68;
  bool bStack_60;
  bool bStack_5f;
  bool bStack_5e;
  undefined5 uStack_5d;
  System_Action_AottgUi__AottgScreenSectionContext__o *local_58;
  System_Action_AottgUi__AottgScreenSectionContext__o *pSStack_50;
  System_String_o *local_48;
  System_String_o *pSStack_40;
  System_String_o *local_38;
  System_String_o *pSStack_30;
  System_String_o *local_28;
  bool bStack_20;
  bool bStack_1f;
  bool bStack_1e;
  undefined5 uStack_1d;
  
  if (Il2CppMethodInitialized_075456b7 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&"skins");
    il2cpp_codegen_initialize_runtime_metadata(&"sound");
    il2cpp_codegen_initialize_runtime_metadata(&"graphics");
    il2cpp_codegen_initialize_runtime_metadata(&"target");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Top.KeybindsButton");
    il2cpp_codegen_initialize_runtime_metadata(&"contrast");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Top.GraphicsButton");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Top.GeneralButton");
    il2cpp_codegen_initialize_runtime_metadata(&"shoppingBasket");
    il2cpp_codegen_initialize_runtime_metadata(&"ui");
    il2cpp_codegen_initialize_runtime_metadata(&"menuList");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Top.UIButton");
    il2cpp_codegen_initialize_runtime_metadata(&"audioOn");
    il2cpp_codegen_initialize_runtime_metadata(&"keybinds");
    il2cpp_codegen_initialize_runtime_metadata(&"ability");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Top.SkinsButton");
    Il2CppMethodInitialized_075456b7 = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenSection_array,7);
  pSVar2 = (System_Action_T1__T2__o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi_AottgScreenSectionContext);
  System_Action_object__AottgScreenSectionContext____ctor
            (pSVar2,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_BuildGeneral,
             (MethodInfo_4A897E0 *)0x0);
  local_218.fields._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
  local_218.fields._buildHeaderActions = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
  local_218.fields.Id = (System_String_o *)0x0;
  local_218.fields.Text = (System_String_o *)0x0;
  local_218.fields.TextKey = (System_String_o *)0x0;
  local_218.fields.Icon = (System_String_o *)0x0;
  local_218.fields.Keywords = (System_String_o *)0x0;
  local_218.fields.AutoAddKeywords = false;
  local_218.fields.HideSearch = false;
  local_218.fields.HideHeader = false;
  local_218.fields._59_5_ = 0;
  Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_5816070
            (&local_218,"general","SettingsPopup.Top.GeneralButton","gear",
             (System_Action_AottgUi__AottgScreenSectionContext__o *)pSVar2,(System_String_o *)0x0,true,
             (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0,false,false,(MethodInfo *)0x0);
  local_28 = local_218.fields.Keywords;
  bStack_20 = local_218.fields.AutoAddKeywords;
  bStack_1f = local_218.fields.HideSearch;
  bStack_1e = local_218.fields.HideHeader;
  uStack_1d = local_218.fields._59_5_;
  local_38 = local_218.fields.TextKey;
  pSStack_30 = local_218.fields.Icon;
  local_48 = local_218.fields.Id;
  pSStack_40 = local_218.fields.Text;
  local_58 = local_218.fields._buildContent;
  pSStack_50 = local_218.fields._buildHeaderActions;
  if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pGVar1->max_length != 0) {
    pGVar1->m_Items[0].fields.Keywords = local_218.fields.Keywords;
    pGVar1->m_Items[0].fields.AutoAddKeywords = local_218.fields.AutoAddKeywords;
    pGVar1->m_Items[0].fields.HideSearch = local_218.fields.HideSearch;
    pGVar1->m_Items[0].fields.HideHeader = local_218.fields.HideHeader;
    *(undefined5 *)&pGVar1->m_Items[0].fields.field_0x3b = local_218.fields._59_5_;
    pGVar1->m_Items[0].fields.TextKey = local_218.fields.TextKey;
    pGVar1->m_Items[0].fields.Icon = local_218.fields.Icon;
    pGVar1->m_Items[0].fields.Id = local_218.fields.Id;
    pGVar1->m_Items[0].fields.Text = local_218.fields.Text;
    pGVar1->m_Items[0].fields._buildContent = local_218.fields._buildContent;
    pGVar1->m_Items[0].fields._buildHeaderActions = local_218.fields._buildHeaderActions;
    Il2CppCodeGenWriteBarrier((void **)pGVar1->m_Items);
    pSVar2 = (System_Action_T1__T2__o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Action_AottgUi_AottgScreenSectionContext);
    System_Action_object__AottgScreenSectionContext____ctor
              (pSVar2,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_BuildSound,
               (MethodInfo_4A897E0 *)0x0);
    local_218.fields._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
    local_218.fields._buildHeaderActions = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
    local_218.fields.Id = (System_String_o *)0x0;
    local_218.fields.Text = (System_String_o *)0x0;
    local_218.fields.TextKey = (System_String_o *)0x0;
    local_218.fields.Icon = (System_String_o *)0x0;
    local_218.fields.Keywords = (System_String_o *)0x0;
    local_218.fields.AutoAddKeywords = false;
    local_218.fields.HideSearch = false;
    local_218.fields.HideHeader = false;
    local_218.fields._59_5_ = 0;
    Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_5816070
              (&local_218,"sound","SettingsPopup.Top.SoundButton","audioOn",
               (System_Action_AottgUi__AottgScreenSectionContext__o *)pSVar2,(System_String_o *)0x0,true,
               (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0,false,false,(MethodInfo *)0x0);
    local_68 = local_218.fields.Keywords;
    bStack_60 = local_218.fields.AutoAddKeywords;
    bStack_5f = local_218.fields.HideSearch;
    bStack_5e = local_218.fields.HideHeader;
    uStack_5d = local_218.fields._59_5_;
    local_78 = local_218.fields.TextKey;
    pSStack_70 = local_218.fields.Icon;
    local_88 = local_218.fields.Id;
    pSStack_80 = local_218.fields.Text;
    local_98 = local_218.fields._buildContent;
    pSStack_90 = local_218.fields._buildHeaderActions;
    if ((pGVar1->max_length & 0xfffffffe) != 0) {
      pGVar1->m_Items[1].fields.Keywords = local_218.fields.Keywords;
      pGVar1->m_Items[1].fields.AutoAddKeywords = local_218.fields.AutoAddKeywords;
      pGVar1->m_Items[1].fields.HideSearch = local_218.fields.HideSearch;
      pGVar1->m_Items[1].fields.HideHeader = local_218.fields.HideHeader;
      *(undefined5 *)&pGVar1->m_Items[1].fields.field_0x3b = local_218.fields._59_5_;
      pGVar1->m_Items[1].fields.TextKey = local_218.fields.TextKey;
      pGVar1->m_Items[1].fields.Icon = local_218.fields.Icon;
      pGVar1->m_Items[1].fields.Id = local_218.fields.Id;
      pGVar1->m_Items[1].fields.Text = local_218.fields.Text;
      pGVar1->m_Items[1].fields._buildContent = local_218.fields._buildContent;
      pGVar1->m_Items[1].fields._buildHeaderActions = local_218.fields._buildHeaderActions;
      Il2CppCodeGenWriteBarrier((void **)(pGVar1->m_Items + 1));
      pSVar2 = (System_Action_T1__T2__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Action_AottgUi_AottgScreenSectionContext);
      System_Action_object__AottgScreenSectionContext____ctor
                (pSVar2,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_BuildGraphics,
                 (MethodInfo_4A897E0 *)0x0);
      local_218.fields._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
      local_218.fields._buildHeaderActions = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
      local_218.fields.Id = (System_String_o *)0x0;
      local_218.fields.Text = (System_String_o *)0x0;
      local_218.fields.TextKey = (System_String_o *)0x0;
      local_218.fields.Icon = (System_String_o *)0x0;
      local_218.fields.Keywords = (System_String_o *)0x0;
      local_218.fields.AutoAddKeywords = false;
      local_218.fields.HideSearch = false;
      local_218.fields.HideHeader = false;
      local_218.fields._59_5_ = 0;
      Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_5816070
                (&local_218,"graphics","SettingsPopup.Top.GraphicsButton","contrast",
                 (System_Action_AottgUi__AottgScreenSectionContext__o *)pSVar2,(System_String_o *)0x0,true,
                 (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0,false,false,(MethodInfo *)0x0);
      local_a8 = local_218.fields.Keywords;
      bStack_a0 = local_218.fields.AutoAddKeywords;
      bStack_9f = local_218.fields.HideSearch;
      bStack_9e = local_218.fields.HideHeader;
      uStack_9d = local_218.fields._59_5_;
      local_b8 = local_218.fields.TextKey;
      pSStack_b0 = local_218.fields.Icon;
      local_c8 = local_218.fields.Id;
      pSStack_c0 = local_218.fields.Text;
      local_d8 = local_218.fields._buildContent;
      pSStack_d0 = local_218.fields._buildHeaderActions;
      if (2 < (uint)pGVar1->max_length) {
        pGVar1->m_Items[2].fields.Keywords = local_218.fields.Keywords;
        pGVar1->m_Items[2].fields.AutoAddKeywords = local_218.fields.AutoAddKeywords;
        pGVar1->m_Items[2].fields.HideSearch = local_218.fields.HideSearch;
        pGVar1->m_Items[2].fields.HideHeader = local_218.fields.HideHeader;
        *(undefined5 *)&pGVar1->m_Items[2].fields.field_0x3b = local_218.fields._59_5_;
        pGVar1->m_Items[2].fields.TextKey = local_218.fields.TextKey;
        pGVar1->m_Items[2].fields.Icon = local_218.fields.Icon;
        pGVar1->m_Items[2].fields.Id = local_218.fields.Id;
        pGVar1->m_Items[2].fields.Text = local_218.fields.Text;
        pGVar1->m_Items[2].fields._buildContent = local_218.fields._buildContent;
        pGVar1->m_Items[2].fields._buildHeaderActions = local_218.fields._buildHeaderActions;
        Il2CppCodeGenWriteBarrier((void **)(pGVar1->m_Items + 2));
        pSVar2 = (System_Action_T1__T2__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Action_AottgUi_AottgScreenSectionContext);
        System_Action_object__AottgScreenSectionContext____ctor
                  (pSVar2,(Il2CppObject *)0x0,
                   (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_BuildUi,
                   (MethodInfo_4A897E0 *)0x0);
        local_218.fields._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
        local_218.fields._buildHeaderActions = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
        local_218.fields.Id = (System_String_o *)0x0;
        local_218.fields.Text = (System_String_o *)0x0;
        local_218.fields.TextKey = (System_String_o *)0x0;
        local_218.fields.Icon = (System_String_o *)0x0;
        local_218.fields.Keywords = (System_String_o *)0x0;
        local_218.fields.AutoAddKeywords = false;
        local_218.fields.HideSearch = false;
        local_218.fields.HideHeader = false;
        local_218.fields._59_5_ = 0;
        Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_5816070
                  (&local_218,"ui","SettingsPopup.Top.UIButton","menuList",
                   (System_Action_AottgUi__AottgScreenSectionContext__o *)pSVar2,(System_String_o *)0x0,true,
                   (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0,false,false,(MethodInfo *)0x0);
        local_e8 = local_218.fields.Keywords;
        bStack_e0 = local_218.fields.AutoAddKeywords;
        bStack_df = local_218.fields.HideSearch;
        bStack_de = local_218.fields.HideHeader;
        uStack_dd = local_218.fields._59_5_;
        local_f8 = local_218.fields.TextKey;
        pSStack_f0 = local_218.fields.Icon;
        local_108 = local_218.fields.Id;
        pSStack_100 = local_218.fields.Text;
        local_118 = local_218.fields._buildContent;
        pSStack_110 = local_218.fields._buildHeaderActions;
        if ((pGVar1->max_length & 0xfffffffc) != 0) {
          pGVar1->m_Items[3].fields.Keywords = local_218.fields.Keywords;
          pGVar1->m_Items[3].fields.AutoAddKeywords = local_218.fields.AutoAddKeywords;
          pGVar1->m_Items[3].fields.HideSearch = local_218.fields.HideSearch;
          pGVar1->m_Items[3].fields.HideHeader = local_218.fields.HideHeader;
          *(undefined5 *)&pGVar1->m_Items[3].fields.field_0x3b = local_218.fields._59_5_;
          pGVar1->m_Items[3].fields.TextKey = local_218.fields.TextKey;
          pGVar1->m_Items[3].fields.Icon = local_218.fields.Icon;
          pGVar1->m_Items[3].fields.Id = local_218.fields.Id;
          pGVar1->m_Items[3].fields.Text = local_218.fields.Text;
          pGVar1->m_Items[3].fields._buildContent = local_218.fields._buildContent;
          pGVar1->m_Items[3].fields._buildHeaderActions = local_218.fields._buildHeaderActions;
          Il2CppCodeGenWriteBarrier((void **)(pGVar1->m_Items + 3));
          pSVar2 = (System_Action_T1__T2__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Action_AottgUi_AottgScreenSectionContext);
          System_Action_object__AottgScreenSectionContext____ctor
                    (pSVar2,(Il2CppObject *)0x0,
                     (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_BuildKeybinds,
                     (MethodInfo_4A897E0 *)0x0);
          local_218.fields._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
          local_218.fields._buildHeaderActions = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
          local_218.fields.Id = (System_String_o *)0x0;
          local_218.fields.Text = (System_String_o *)0x0;
          local_218.fields.TextKey = (System_String_o *)0x0;
          local_218.fields.Icon = (System_String_o *)0x0;
          local_218.fields.Keywords = (System_String_o *)0x0;
          local_218.fields.AutoAddKeywords = false;
          local_218.fields.HideSearch = false;
          local_218.fields.HideHeader = false;
          local_218.fields._59_5_ = 0;
          Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_5816070
                    (&local_218,"keybinds","SettingsPopup.Top.KeybindsButton","buttonA",
                     (System_Action_AottgUi__AottgScreenSectionContext__o *)pSVar2,(System_String_o *)0x0,true
                     ,(System_Action_AottgUi__AottgScreenSectionContext__o *)0x0,false,false,(MethodInfo *)0x0
                    );
          local_128 = local_218.fields.Keywords;
          bStack_120 = local_218.fields.AutoAddKeywords;
          bStack_11f = local_218.fields.HideSearch;
          bStack_11e = local_218.fields.HideHeader;
          uStack_11d = local_218.fields._59_5_;
          local_138 = local_218.fields.TextKey;
          pSStack_130 = local_218.fields.Icon;
          local_148 = local_218.fields.Id;
          pSStack_140 = local_218.fields.Text;
          local_158 = local_218.fields._buildContent;
          pSStack_150 = local_218.fields._buildHeaderActions;
          if (4 < (uint)pGVar1->max_length) {
            pGVar1->m_Items[4].fields.Keywords = local_218.fields.Keywords;
            pGVar1->m_Items[4].fields.AutoAddKeywords = local_218.fields.AutoAddKeywords;
            pGVar1->m_Items[4].fields.HideSearch = local_218.fields.HideSearch;
            pGVar1->m_Items[4].fields.HideHeader = local_218.fields.HideHeader;
            *(undefined5 *)&pGVar1->m_Items[4].fields.field_0x3b = local_218.fields._59_5_;
            pGVar1->m_Items[4].fields.TextKey = local_218.fields.TextKey;
            pGVar1->m_Items[4].fields.Icon = local_218.fields.Icon;
            pGVar1->m_Items[4].fields.Id = local_218.fields.Id;
            pGVar1->m_Items[4].fields.Text = local_218.fields.Text;
            pGVar1->m_Items[4].fields._buildContent = local_218.fields._buildContent;
            pGVar1->m_Items[4].fields._buildHeaderActions = local_218.fields._buildHeaderActions;
            Il2CppCodeGenWriteBarrier((void **)(pGVar1->m_Items + 4));
            pSVar2 = (System_Action_T1__T2__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Action_AottgUi_AottgScreenSectionContext);
            System_Action_object__AottgScreenSectionContext____ctor
                      (pSVar2,(Il2CppObject *)0x0,
                       (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_BuildSkins,
                       (MethodInfo_4A897E0 *)0x0);
            local_218.fields._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
            local_218.fields._buildHeaderActions = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
            local_218.fields.Id = (System_String_o *)0x0;
            local_218.fields.Text = (System_String_o *)0x0;
            local_218.fields.TextKey = (System_String_o *)0x0;
            local_218.fields.Icon = (System_String_o *)0x0;
            local_218.fields.Keywords = (System_String_o *)0x0;
            local_218.fields.AutoAddKeywords = false;
            local_218.fields.HideSearch = false;
            local_218.fields.HideHeader = false;
            local_218.fields._59_5_ = 0;
            Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_5816070
                      (&local_218,"skins","SettingsPopup.Top.SkinsButton","shoppingBasket",
                       (System_Action_AottgUi__AottgScreenSectionContext__o *)pSVar2,(System_String_o *)0x0,
                       true,(System_Action_AottgUi__AottgScreenSectionContext__o *)0x0,false,false,
                       (MethodInfo *)0x0);
            local_168 = local_218.fields.Keywords;
            bStack_160 = local_218.fields.AutoAddKeywords;
            bStack_15f = local_218.fields.HideSearch;
            bStack_15e = local_218.fields.HideHeader;
            uStack_15d = local_218.fields._59_5_;
            local_178 = local_218.fields.TextKey;
            pSStack_170 = local_218.fields.Icon;
            local_188 = local_218.fields.Id;
            pSStack_180 = local_218.fields.Text;
            local_198 = local_218.fields._buildContent;
            pSStack_190 = local_218.fields._buildHeaderActions;
            if (5 < (uint)pGVar1->max_length) {
              pGVar1->m_Items[5].fields.Keywords = local_218.fields.Keywords;
              pGVar1->m_Items[5].fields.AutoAddKeywords = local_218.fields.AutoAddKeywords;
              pGVar1->m_Items[5].fields.HideSearch = local_218.fields.HideSearch;
              pGVar1->m_Items[5].fields.HideHeader = local_218.fields.HideHeader;
              *(undefined5 *)&pGVar1->m_Items[5].fields.field_0x3b = local_218.fields._59_5_;
              pGVar1->m_Items[5].fields.TextKey = local_218.fields.TextKey;
              pGVar1->m_Items[5].fields.Icon = local_218.fields.Icon;
              pGVar1->m_Items[5].fields.Id = local_218.fields.Id;
              pGVar1->m_Items[5].fields.Text = local_218.fields.Text;
              pGVar1->m_Items[5].fields._buildContent = local_218.fields._buildContent;
              pGVar1->m_Items[5].fields._buildHeaderActions = local_218.fields._buildHeaderActions;
              Il2CppCodeGenWriteBarrier((void **)(pGVar1->m_Items + 5));
              pSVar2 = (System_Action_T1__T2__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Action_AottgUi_AottgScreenSectionContext);
              System_Action_object__AottgScreenSectionContext____ctor
                        (pSVar2,(Il2CppObject *)0x0,
                         (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_BuildAbility,
                         (MethodInfo_4A897E0 *)0x0);
              local_218.fields._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
              local_218.fields._buildHeaderActions =
                   (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
              local_218.fields.Id = (System_String_o *)0x0;
              local_218.fields.Text = (System_String_o *)0x0;
              local_218.fields.TextKey = (System_String_o *)0x0;
              local_218.fields.Icon = (System_String_o *)0x0;
              local_218.fields.Keywords = (System_String_o *)0x0;
              local_218.fields.AutoAddKeywords = false;
              local_218.fields.HideSearch = false;
              local_218.fields.HideHeader = false;
              local_218.fields._59_5_ = 0;
              Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_5816070
                        (&local_218,"ability","SettingsPopup.Top.AbilityButton","target",
                         (System_Action_AottgUi__AottgScreenSectionContext__o *)pSVar2,(System_String_o *)0x0,
                         true,(System_Action_AottgUi__AottgScreenSectionContext__o *)0x0,false,false,
                         (MethodInfo *)0x0);
              local_1a8 = local_218.fields.Keywords;
              bStack_1a0 = local_218.fields.AutoAddKeywords;
              bStack_19f = local_218.fields.HideSearch;
              bStack_19e = local_218.fields.HideHeader;
              uStack_19d = local_218.fields._59_5_;
              local_1b8 = local_218.fields.TextKey;
              pSStack_1b0 = local_218.fields.Icon;
              local_1c8 = local_218.fields.Id;
              pSStack_1c0 = local_218.fields.Text;
              local_1d8 = local_218.fields._buildContent;
              pSStack_1d0 = local_218.fields._buildHeaderActions;
              if (6 < (uint)pGVar1->max_length) {
                pGVar1->m_Items[6].fields.Keywords = local_218.fields.Keywords;
                pGVar1->m_Items[6].fields.AutoAddKeywords = local_218.fields.AutoAddKeywords;
                pGVar1->m_Items[6].fields.HideSearch = local_218.fields.HideSearch;
                pGVar1->m_Items[6].fields.HideHeader = local_218.fields.HideHeader;
                *(undefined5 *)&pGVar1->m_Items[6].fields.field_0x3b = local_218.fields._59_5_;
                pGVar1->m_Items[6].fields.TextKey = local_218.fields.TextKey;
                pGVar1->m_Items[6].fields.Icon = local_218.fields.Icon;
                pGVar1->m_Items[6].fields.Id = local_218.fields.Id;
                pGVar1->m_Items[6].fields.Text = local_218.fields.Text;
                pGVar1->m_Items[6].fields._buildContent = local_218.fields._buildContent;
                pGVar1->m_Items[6].fields._buildHeaderActions = local_218.fields._buildHeaderActions;
                Il2CppCodeGenWriteBarrier((void **)(pGVar1->m_Items + 6));
                return pGVar1;
              }
            }
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen$$Category
// il2cpp: Gisketch_Aottg2UI_Game_AottgScreenSection_o Gisketch_Aottg2UI_Game_AottgSettingsScreen__Category (System_String_o* id, System_String_o* icon, System_String_o* textKey, System_Action_AottgUi__AottgScreenSectionContext__o* build, const MethodInfo* method);
// 0x59115a0

Gisketch_Aottg2UI_Game_AottgScreenSection_o *
Gisketch_Aottg2UI_Game_AottgSettingsScreen__Category
          (Gisketch_Aottg2UI_Game_AottgScreenSection_o *__return_storage_ptr__,System_String_o *id,
          System_String_o *icon,System_String_o *textKey,
          System_Action_AottgUi__AottgScreenSectionContext__o *build,MethodInfo *method)

{
  (__return_storage_ptr__->fields).Keywords = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).AutoAddKeywords = false;
  (__return_storage_ptr__->fields).HideSearch = false;
  (__return_storage_ptr__->fields).HideHeader = false;
  *(undefined5 *)&(__return_storage_ptr__->fields).field_0x3b = 0;
  (__return_storage_ptr__->fields).TextKey = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Icon = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Id = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Text = (System_String_o *)0x0;
  (__return_storage_ptr__->fields)._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
  (__return_storage_ptr__->fields)._buildHeaderActions =
       (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
  Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_5816070
            (__return_storage_ptr__,id,textKey,icon,build,(System_String_o *)0x0,true,
             (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0,false,false,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen$$RefreshCategory
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgSettingsScreen__RefreshCategory (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* categoryId, const MethodInfo* method);
// 0x59115e0
// asm: 9 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59117b5: xor ebp, ebp
// asm:   0x591195e: mov rdi, rbp
// asm:   0x5911961: mov rsi, r15
// asm:   0x5911964: mov rdx, r14
// asm:   0x5911967: mov rcx, rbx
// asm:   0x591196a: xor r8d, r8d
// asm:   0x591196d: call 0x531cf80  ; Gisketch_Aottg2UI_GisketchUIRoot__RefreshNode()
// asm:   0x5911972: mov ebp, eax
// asm:   0x5911974: jmp 0x59117b7

bool Gisketch_Aottg2UI_Game_AottgSettingsScreen__RefreshCategory
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *categoryId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_0_o **targetAddress;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *replacement;
  System_Action_AottgUi__AottgScreenSectionContext__o *pSVar2;
  System_Action_AottgUi__AottgScreenSectionContext__o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  bool bVar6;
  bool bVar7;
  undefined5 uVar8;
  bool bVar9;
  Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_0_o *pGVar10;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar11;
  Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_1_o *__this;
  System_String_o *pSVar12;
  System_Action_AottgUi__o *__this_00;
  System_String_o *pSVar13;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar14;
  UnityEngine_GameObject_o *root_00;
  Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions_o *__this_01;
  int order;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Game_AottgScreenSection_o *pGVar15;
  ulong uVar16;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o local_58;
  
  if (Il2CppMethodInitialized_075456b8 == '\0') {
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
    Il2CppMethodInitialized_075456b8 = '\x01';
  }
  pGVar10 = il2cpp_codegen_object_new
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_c__DisplayClass8_0);
  System_Object___ctor((Il2CppObject *)pGVar10,(MethodInfo *)0x0);
  if (pGVar10 == (Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_0_o *)0x0) {
label_05911979:
    ThrowNullReferenceException();
  }
  (pGVar10->fields).root = root;
  Il2CppCodeGenWriteBarrier(&(pGVar10->fields).root);
  pGVar1 = (pGVar10->fields).root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar9 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((!bVar9) &&
     (method_00 = (MethodInfo *)categoryId, bVar9 = System_String__IsNullOrEmpty(categoryId,(MethodInfo *)0x0)
     , !bVar9)) {
    pGVar11 = Gisketch_Aottg2UI_Game_AottgSettingsScreen__Sections(method_00);
    if (pGVar11 == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) goto label_05911979;
    if (0 < (int)pGVar11->max_length) {
      pGVar15 = pGVar11->m_Items;
      order = 0x1e;
      uVar16 = 0;
label_05911710:
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)
                          TypeInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_c__DisplayClass8_1);
      System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
      if (__this == (Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_1_o *)0x0)
      goto label_05911979;
      targetAddress = &(__this->fields).CS___8__locals1;
      (__this->fields).CS___8__locals1 = pGVar10;
      Il2CppCodeGenWriteBarrier(targetAddress);
      if (uVar16 < (uint)pGVar11->max_length) {
        pSVar2 = (pGVar15->fields)._buildContent;
        pSVar3 = (pGVar15->fields)._buildHeaderActions;
        pSVar12 = (pGVar15->fields).Id;
        pSVar13 = (pGVar15->fields).Text;
        pSVar4 = (pGVar15->fields).TextKey;
        pSVar5 = (pGVar15->fields).Icon;
        bVar9 = (pGVar15->fields).AutoAddKeywords;
        bVar6 = (pGVar15->fields).HideSearch;
        bVar7 = (pGVar15->fields).HideHeader;
        uVar8 = *(undefined5 *)&(pGVar15->fields).field_0x3b;
        (__this->fields).section.fields.Keywords = (pGVar15->fields).Keywords;
        (__this->fields).section.fields.AutoAddKeywords = bVar9;
        (__this->fields).section.fields.HideSearch = bVar6;
        (__this->fields).section.fields.HideHeader = bVar7;
        *(undefined5 *)&(__this->fields).section.fields.field_0x3b = uVar8;
        (__this->fields).section.fields.TextKey = pSVar4;
        (__this->fields).section.fields.Icon = pSVar5;
        (__this->fields).section.fields.Id = pSVar12;
        (__this->fields).section.fields.Text = pSVar13;
        (__this->fields).section.fields._buildContent = pSVar2;
        (__this->fields).section.fields._buildHeaderActions = pSVar3;
        Il2CppCodeGenWriteBarrier((void **)&__this->fields);
        bVar9 = System_String__Equals_52ffe30
                          ((__this->fields).section.fields.Id,categoryId,5,(MethodInfo *)0x0);
        if (!bVar9) {
          uVar16 = uVar16 + 1;
          order = order + 10;
          pGVar15 = pGVar15 + 1;
          if ((long)(int)pGVar11->max_length <= (long)uVar16) {
            return false;
          }
          goto label_05911710;
        }
        local_58.fields._SectionId_k__BackingField = (System_String_o *)0x0;
        local_58.fields._SectionTitle_k__BackingField = (System_String_o *)0x0;
        local_58.fields._group = (System_String_o *)0x0;
        local_58.fields._order = 0;
        local_58.fields._12_4_ = 0;
        Gisketch_Aottg2UI_Game_AottgScreenSectionContext___ctor
                  (&local_58,"settings-screen",(__this->fields).section.fields.Id,
                   (__this->fields).section.fields.Text,order,(MethodInfo *)0x0);
        (__this->fields).context.fields._SectionId_k__BackingField =
             local_58.fields._SectionId_k__BackingField;
        (__this->fields).context.fields._SectionTitle_k__BackingField =
             local_58.fields._SectionTitle_k__BackingField;
        (__this->fields).context.fields._group = local_58.fields._group;
        (__this->fields).context.fields._order = local_58.fields._order;
        *(undefined4 *)&(__this->fields).context.fields.field_0xc = local_58.fields._12_4_;
        Il2CppCodeGenWriteBarrier((void **)&(__this->fields).context);
        pGVar10 = (__this->fields).CS___8__locals1;
        if (pGVar10 == (Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_0_o *)0x0)
        goto label_05911979;
        pGVar1 = (pGVar10->fields).root;
        pSVar12 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__ContentId
                            ((__this->fields).section.fields.Id,(MethodInfo *)0x0);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgSettingsScreen_c__DisplayClass8_1_RefreshCategory_b__0
                   ,(MethodInfo_4A81BE0 *)0x0);
        pSVar13 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__OwnerPrefix
                            ((__this->fields).section.fields.Id,(MethodInfo *)0x0);
        if (pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_05911979;
        pGVar14 = Gisketch_Aottg2UI_GisketchUIRoot__BuildDetachedNodes
                            (pGVar1,pSVar12,__this_00,pSVar13,(MethodInfo *)0x0);
        if (pGVar14 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
          return false;
        }
        if (pGVar14->max_length == 0) {
          return false;
        }
        if ((int)pGVar14->max_length == 0) goto label_0591197e;
        if (pGVar14->m_Items[0] == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          return false;
        }
        if ((*targetAddress == (Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_0_o *)0x0) ||
           (pGVar1 = ((*targetAddress)->fields).root, pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0))
        goto label_05911979;
        root_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pGVar1,(MethodInfo *)0x0);
        if ((int)pGVar14->max_length != 0) {
          bVar9 = Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__Invalidate
                            (root_00,"settings-screen",(__this->fields).section.fields.Id,
                             pGVar14->m_Items[0],(MethodInfo *)0x0);
          if (bVar9) {
            return true;
          }
          if (*targetAddress == (Gisketch_Aottg2UI_Game_AottgSettingsScreen___c__DisplayClass8_0_o *)0x0)
          goto label_05911979;
          pGVar1 = ((*targetAddress)->fields).root;
          pSVar12 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__ContentId
                              ((__this->fields).section.fields.Id,(MethodInfo *)0x0);
          if ((int)pGVar14->max_length != 0) {
            replacement = pGVar14->m_Items[0];
            __this_01 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions);
            Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions___ctor(__this_01,(MethodInfo *)0x0);
            if (__this_01 != (Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions_o *)0x0) {
              (__this_01->fields).PreserveScroll = true;
              (__this_01->fields).PreserveFocus = true;
              (__this_01->fields).SettleLayout = true;
              if (pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
                bVar9 = Gisketch_Aottg2UI_GisketchUIRoot__RefreshNode
                                  (pGVar1,pSVar12,replacement,__this_01,(MethodInfo *)0x0);
                return bVar9;
              }
            }
            goto label_05911979;
          }
        }
      }
label_0591197e:
      ThrowIndexOutOfRangeException();
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen$$SyncState
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSettingsScreen__SyncState (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x59119b0

void Gisketch_Aottg2UI_Game_AottgSettingsScreen__SyncState
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075456b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    Il2CppMethodInitialized_075456b9 = '\x01';
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory__SyncState(root,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__SyncState(root,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGraphicsCategory__SyncState(root,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory__SyncState(root,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__SyncState(root,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SyncState(root,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory__SyncState(root,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen$$BuildGeneral
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSettingsScreen__BuildGeneral (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x5911a30

void Gisketch_Aottg2UI_Game_AottgSettingsScreen__BuildGeneral
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory__Build(content,context,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen$$BuildSound
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSettingsScreen__BuildSound (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x5911a40

void Gisketch_Aottg2UI_Game_AottgSettingsScreen__BuildSound
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSoundCategory__Build(content,context,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen$$BuildGraphics
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSettingsScreen__BuildGraphics (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x5911a50

void Gisketch_Aottg2UI_Game_AottgSettingsScreen__BuildGraphics
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGraphicsCategory__Build(content,context,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen$$BuildUi
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSettingsScreen__BuildUi (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x5911a60

void Gisketch_Aottg2UI_Game_AottgSettingsScreen__BuildUi
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsUiCategory__Build(content,context,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen$$BuildKeybinds
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSettingsScreen__BuildKeybinds (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x5911a70

void Gisketch_Aottg2UI_Game_AottgSettingsScreen__BuildKeybinds
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075456ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    Il2CppMethodInitialized_075456ba = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).
            cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Build(content,context,(MethodInfo *)0x0);
    return;
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__Build(content,context,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen$$BuildSkins
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSettingsScreen__BuildSkins (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x5911ae0

void Gisketch_Aottg2UI_Game_AottgSettingsScreen__BuildSkins
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__Build(content,context,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen$$BuildAbility
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSettingsScreen__BuildAbility (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x5911af0

void Gisketch_Aottg2UI_Game_AottgSettingsScreen__BuildAbility
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory__Build(content,context,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSettingsScreen__BuildFooter (Gisketch_Aottg2UI_Code_AottgUi_o* footer, const MethodInfo* method);
// 0x5911b00

void Gisketch_Aottg2UI_Game_AottgSettingsScreen__BuildFooter
               (Gisketch_Aottg2UI_Code_AottgUi_o *footer,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffe8;
  
  if (Il2CppMethodInitialized_075456bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"return");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Default");
    il2cpp_codegen_initialize_runtime_metadata(&"save");
    il2cpp_codegen_initialize_runtime_metadata(&"settings.load");
    il2cpp_codegen_initialize_runtime_metadata(&"settings.default");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Save");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-footer-default");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-footer-load");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-footer-save");
    il2cpp_codegen_initialize_runtime_metadata(&"settings.save");
    il2cpp_codegen_initialize_runtime_metadata(&"import");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Load");
    il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanelFooterPrimaryButton");
    Il2CppMethodInitialized_075456bb = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgSettingsScreen__FooterButton
            (footer,1,"Common.Default","settings.default","settings-footer-default","return",
             in_stack_ffffffffffffffe8);
  Gisketch_Aottg2UI_Game_AottgSettingsScreen__FooterButton
            (footer,1,"Common.Load","settings.load","settings-footer-load","import",
             in_stack_ffffffffffffffe8);
  pGVar1 = Gisketch_Aottg2UI_Game_AottgSettingsScreen__FooterButton
                     (footer,0,"Common.Save","settings.save","settings-footer-save",
                      "save",in_stack_ffffffffffffffe8);
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pGVar1->fields).style = "brushSidePanelFooterPrimaryButton";
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).style);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen$$SettingsFooterOptions
// il2cpp: Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array* Gisketch_Aottg2UI_Game_AottgSettingsScreen__SettingsFooterOptions (const MethodInfo* method);
// 0x5911380

Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *
Gisketch_Aottg2UI_Game_AottgSettingsScreen__SettingsFooterOptions(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar1;
  System_String_o *tooltip;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o local_a8;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o local_58;
  
  if (Il2CppMethodInitialized_075456bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array);
    il2cpp_codegen_initialize_runtime_metadata(&"dialog.aottg-settings-search-palette");
    il2cpp_codegen_initialize_runtime_metadata(&"exitLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"back");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Search");
    il2cpp_codegen_initialize_runtime_metadata(&"search");
    il2cpp_codegen_initialize_runtime_metadata(&"zoom");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Back");
    il2cpp_codegen_initialize_runtime_metadata(&"settings.back");
    Il2CppMethodInitialized_075456bc = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array,2);
  tooltip = Gisketch_Aottg2UI_Game_AottgSearchShortcuts__CurrentScreenTooltip((MethodInfo *)0x0);
  local_58.fields.Searchable = false;
  local_58.fields._49_7_ = 0;
  local_58.fields.Tooltip = (System_String_o *)0x0;
  local_58.fields.ActionId = (System_String_o *)0x0;
  local_58.fields.Action = (System_Action_GisketchActionContext__o *)0x0;
  local_58.fields.TextKey = (System_String_o *)0x0;
  local_58.fields.Icon = (System_String_o *)0x0;
  local_58.fields._text = (System_String_o *)0x0;
  local_58.fields.Id = (System_String_o *)0x0;
  local_58.fields.StackedOptions = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor
            (&local_58,"search","Common.Search","dialog.aottg-settings-search-palette","zoom"
             ,false,tooltip,(MethodInfo *)0x0);
  if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pGVar1->max_length != 0) {
    pGVar1->m_Items[0].fields.StackedOptions = local_58.fields.StackedOptions;
    pGVar1->m_Items[0].fields.Searchable = local_58.fields.Searchable;
    *(undefined7 *)&pGVar1->m_Items[0].fields.field_0x31 = local_58.fields._49_7_;
    pGVar1->m_Items[0].fields.Tooltip = local_58.fields.Tooltip;
    pGVar1->m_Items[0].fields.ActionId = local_58.fields.ActionId;
    pGVar1->m_Items[0].fields.Action = local_58.fields.Action;
    pGVar1->m_Items[0].fields.TextKey = local_58.fields.TextKey;
    pGVar1->m_Items[0].fields.Icon = local_58.fields.Icon;
    pGVar1->m_Items[0].fields._text = local_58.fields._text;
    pGVar1->m_Items[0].fields.Id = local_58.fields.Id;
    Il2CppCodeGenWriteBarrier((void **)pGVar1->m_Items);
    local_a8.fields.Searchable = false;
    local_a8.fields._49_7_ = 0;
    local_a8.fields.Tooltip = (System_String_o *)0x0;
    local_a8.fields.ActionId = (System_String_o *)0x0;
    local_a8.fields.Action = (System_Action_GisketchActionContext__o *)0x0;
    local_a8.fields.TextKey = (System_String_o *)0x0;
    local_a8.fields.Icon = (System_String_o *)0x0;
    local_a8.fields._text = (System_String_o *)0x0;
    local_a8.fields.Id = (System_String_o *)0x0;
    local_a8.fields.StackedOptions = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
    Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor
              (&local_a8,"back","Common.Back","settings.back",
               "exitLeft",false,(System_String_o *)0x0,(MethodInfo *)0x0);
    if ((pGVar1->max_length & 0xfffffffe) != 0) {
      pGVar1->m_Items[1].fields.StackedOptions = local_a8.fields.StackedOptions;
      pGVar1->m_Items[1].fields.Searchable = local_a8.fields.Searchable;
      *(undefined7 *)&pGVar1->m_Items[1].fields.field_0x31 = local_a8.fields._49_7_;
      pGVar1->m_Items[1].fields.Tooltip = local_a8.fields.Tooltip;
      pGVar1->m_Items[1].fields.ActionId = local_a8.fields.ActionId;
      pGVar1->m_Items[1].fields.Action = local_a8.fields.Action;
      pGVar1->m_Items[1].fields.TextKey = local_a8.fields.TextKey;
      pGVar1->m_Items[1].fields.Icon = local_a8.fields.Icon;
      pGVar1->m_Items[1].fields._text = local_a8.fields._text;
      pGVar1->m_Items[1].fields.Id = local_a8.fields.Id;
      Il2CppCodeGenWriteBarrier((void **)(pGVar1->m_Items + 1));
      return pGVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen$$FooterButton
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Game_AottgSettingsScreen__FooterButton (Gisketch_Aottg2UI_Code_AottgUi_o* footer, int32_t variant, System_String_o* textKey, System_String_o* actionId, System_String_o* id, System_String_o* icon, const MethodInfo* method);
// 0x5911c80

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Game_AottgSettingsScreen__FooterButton
          (Gisketch_Aottg2UI_Code_AottgUi_o *footer,int32_t variant,System_String_o *textKey,
          System_String_o *actionId,System_String_o *id,System_String_o *icon,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  
  if (Il2CppMethodInitialized_075456bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    Il2CppMethodInitialized_075456bd = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
                       (footer,variant,textKey,actionId,id,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,icon,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).layout = pGVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
      return pGVar1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgSettingsScreen$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSettingsScreen___ctor (Gisketch_Aottg2UI_Game_AottgSettingsScreen_o* __this, const MethodInfo* method);
// 0x5911db0

void Gisketch_Aottg2UI_Game_AottgSettingsScreen___ctor
               (Gisketch_Aottg2UI_Game_AottgSettingsScreen_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgScreen___ctor((Gisketch_Aottg2UI_Code_AottgScreen_o *)__this,(MethodInfo *)0x0);
  return;
}


