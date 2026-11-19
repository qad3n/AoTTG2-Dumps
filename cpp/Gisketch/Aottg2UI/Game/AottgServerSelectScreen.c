// Type: Gisketch.Aottg2UI.Game.AottgServerSelectScreen
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgServerSelectScreen.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgServerSelectScreen$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgServerSelectScreen__get_RootStyle (Gisketch_Aottg2UI_Game_AottgServerSelectScreen_o* __this, const MethodInfo* method);
// 0x58d4ae0

System_String_o *
Gisketch_Aottg2UI_Game_AottgServerSelectScreen__get_RootStyle
          (Gisketch_Aottg2UI_Game_AottgServerSelectScreen_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545496 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuOverlay");
    Il2CppMethodInitialized_07545496 = '\x01';
  }
  return "mainMenuOverlay";
}


// Gisketch.Aottg2UI.Game.AottgServerSelectScreen$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgServerSelectScreen__get_RootLayout (Gisketch_Aottg2UI_Game_AottgServerSelectScreen_o* __this, const MethodInfo* method);
// 0x58d4b10

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgServerSelectScreen__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgServerSelectScreen_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07545497 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_07545497 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgServerSelectScreen$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgServerSelectScreen__Build (Gisketch_Aottg2UI_Game_AottgServerSelectScreen_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x58d4be0

void Gisketch_Aottg2UI_Game_AottgServerSelectScreen__Build
               (Gisketch_Aottg2UI_Game_AottgServerSelectScreen_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *options;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *footerOptions;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o *__this_00;
  System_Action_AottgUi__o *__this_01;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this_02;
  Gisketch_Aottg2UI_Game_AottgMenuStatusLabel_o *__this_03;
  System_String_o **ppSVar3;
  
  if (Il2CppMethodInitialized_07545498 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMenuStatusLabel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgServerSelectScreen_BuildContent);
    il2cpp_codegen_initialize_runtime_metadata(&"menuStatusText");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Intro.MultiplayerButton");
    ppSVar3 = &"server-select-status";
    il2cpp_codegen_initialize_runtime_metadata(&"server-select-status");
    Il2CppMethodInitialized_07545498 = '\x01';
    __this = (Gisketch_Aottg2UI_Game_AottgServerSelectScreen_o *)ppSVar3;
  }
  options = Gisketch_Aottg2UI_Game_AottgServerSelectScreen__Options((MethodInfo *)__this);
  footerOptions = Gisketch_Aottg2UI_Game_AottgServerSelectScreen__FooterOptions((MethodInfo *)__this);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanel);
  Gisketch_Aottg2UI_Game_AottgBrushSidePanel___ctor
            (__this_00,"MainMenu.Intro.MultiplayerButton",options,footerOptions,120.0,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_01,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgServerSelectScreen_BuildContent,
             (MethodInfo_4A81BE0 *)0x0);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel);
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___ctor
            (__this_02,__this_00,__this_01,(System_Action_AottgUi__o *)0x0,1,(MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_02,(MethodInfo *)0x0);
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMenuStatusLabel);
  pSVar2 = "server-select-status";
  pSVar1 = "menuStatusText";
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_03,(MethodInfo *)0x0);
  (__this_03->fields)._id = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this_03->fields)._id);
  (__this_03->fields)._style = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this_03->fields)._style);
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_03,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgServerSelectScreen$$BuildContent
// il2cpp: void Gisketch_Aottg2UI_Game_AottgServerSelectScreen__BuildContent (Gisketch_Aottg2UI_Code_AottgUi_o* content, const MethodInfo* method);
// 0x58d51b0

void Gisketch_Aottg2UI_Game_AottgServerSelectScreen__BuildContent
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Game_AottgServerSelectMap_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Game_AottgCustomServerWarning_o *__this_00;
  
  if (Il2CppMethodInitialized_07545499 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCustomServerWarning);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgServerSelectMap);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    il2cpp_codegen_initialize_runtime_metadata(&"server-select-custom-warning");
    Il2CppMethodInitialized_07545499 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgServerSelectMap);
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  if (content == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (content,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(860.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      "Absolute",(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,582.0,-56.0,
                      0.0,1.0,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCustomServerWarning);
  pSVar1 = "server-select-custom-warning";
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields)._id = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._id);
  (__this_00->fields)._placement = pGVar2;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._placement);
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (content,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgServerSelectScreen$$Options
// il2cpp: Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array* Gisketch_Aottg2UI_Game_AottgServerSelectScreen__Options (const MethodInfo* method);
// 0x58d4d80

Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *
Gisketch_Aottg2UI_Game_AottgServerSelectScreen__Options(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar1;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o local_58;
  
  if (Il2CppMethodInitialized_0754549a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array);
    il2cpp_codegen_initialize_runtime_metadata(&"quick-play");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.QuickPlay.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"multiplayer");
    il2cpp_codegen_initialize_runtime_metadata(&"multiplayer.quick-play");
    Il2CppMethodInitialized_0754549a = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array,1);
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
            (&local_58,"quick-play","MainMenu.QuickPlay.Title","multiplayer.quick-play","multiplayer"
             ,false,(System_String_o *)0x0,(MethodInfo *)0x0);
  if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pGVar1->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
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
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgServerSelectScreen$$FooterOptions
// il2cpp: Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array* Gisketch_Aottg2UI_Game_AottgServerSelectScreen__FooterOptions (const MethodInfo* method);
// 0x58d4ea0

Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *
Gisketch_Aottg2UI_Game_AottgServerSelectScreen__FooterOptions(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar1;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o local_f8;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o local_a8;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o local_58;
  
  if (Il2CppMethodInitialized_0754549b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array);
    il2cpp_codegen_initialize_runtime_metadata(&"gear");
    il2cpp_codegen_initialize_runtime_metadata(&"multiplayer.server-select.back");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.MultiplayerMapPopup.ServerSettings");
    il2cpp_codegen_initialize_runtime_metadata(&"exitLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"server-settings");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.MultiplayerLanPopup.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"back");
    il2cpp_codegen_initialize_runtime_metadata(&"share2");
    il2cpp_codegen_initialize_runtime_metadata(&"direct-connect");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Back");
    il2cpp_codegen_initialize_runtime_metadata(&"dialog.multiplayer-settings");
    il2cpp_codegen_initialize_runtime_metadata(&"dialog.multiplayer-direct-connect");
    Il2CppMethodInitialized_0754549b = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array,3);
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
            (&local_58,"server-settings","MainMenu.MultiplayerMapPopup.ServerSettings","dialog.multiplayer-settings","gear"
             ,false,(System_String_o *)0x0,(MethodInfo *)0x0);
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
              (&local_a8,"direct-connect","MainMenu.MultiplayerLanPopup.Title","dialog.multiplayer-direct-connect",
               "share2",false,(System_String_o *)0x0,(MethodInfo *)0x0);
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
      local_f8.fields.Searchable = false;
      local_f8.fields._49_7_ = 0;
      local_f8.fields.Tooltip = (System_String_o *)0x0;
      local_f8.fields.ActionId = (System_String_o *)0x0;
      local_f8.fields.Action = (System_Action_GisketchActionContext__o *)0x0;
      local_f8.fields.TextKey = (System_String_o *)0x0;
      local_f8.fields.Icon = (System_String_o *)0x0;
      local_f8.fields._text = (System_String_o *)0x0;
      local_f8.fields.Id = (System_String_o *)0x0;
      local_f8.fields.StackedOptions = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
      Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor
                (&local_f8,"back","Common.Back","multiplayer.server-select.back",
                 "exitLeft",false,(System_String_o *)0x0,(MethodInfo *)0x0);
      if (2 < (uint)pGVar1->max_length) {
        pGVar1->m_Items[2].fields.StackedOptions = local_f8.fields.StackedOptions;
        pGVar1->m_Items[2].fields.Searchable = local_f8.fields.Searchable;
        *(undefined7 *)&pGVar1->m_Items[2].fields.field_0x31 = local_f8.fields._49_7_;
        pGVar1->m_Items[2].fields.Tooltip = local_f8.fields.Tooltip;
        pGVar1->m_Items[2].fields.ActionId = local_f8.fields.ActionId;
        pGVar1->m_Items[2].fields.Action = local_f8.fields.Action;
        pGVar1->m_Items[2].fields.TextKey = local_f8.fields.TextKey;
        pGVar1->m_Items[2].fields.Icon = local_f8.fields.Icon;
        pGVar1->m_Items[2].fields._text = local_f8.fields._text;
        pGVar1->m_Items[2].fields.Id = local_f8.fields.Id;
        Il2CppCodeGenWriteBarrier((void **)(pGVar1->m_Items + 2));
        return pGVar1;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgServerSelectScreen$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgServerSelectScreen___ctor (Gisketch_Aottg2UI_Game_AottgServerSelectScreen_o* __this, const MethodInfo* method);
// 0x58d5330

void Gisketch_Aottg2UI_Game_AottgServerSelectScreen___ctor
               (Gisketch_Aottg2UI_Game_AottgServerSelectScreen_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgScreen___ctor((Gisketch_Aottg2UI_Code_AottgScreen_o *)__this,(MethodInfo *)0x0);
  return;
}


