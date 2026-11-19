// Type: Gisketch.Aottg2UI.Game.AottgPauseScreen
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgPauseScreen.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgPauseScreen$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgPauseScreen__get_RootStyle (Gisketch_Aottg2UI_Game_AottgPauseScreen_o* __this, const MethodInfo* method);
// 0x58b4680

System_String_o *
Gisketch_Aottg2UI_Game_AottgPauseScreen__get_RootStyle
          (Gisketch_Aottg2UI_Game_AottgPauseScreen_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545350 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuOverlay");
    Il2CppMethodInitialized_07545350 = '\x01';
  }
  return "mainMenuOverlay";
}


// Gisketch.Aottg2UI.Game.AottgPauseScreen$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgPauseScreen__get_RootLayout (Gisketch_Aottg2UI_Game_AottgPauseScreen_o* __this, const MethodInfo* method);
// 0x58b46b0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgPauseScreen__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgPauseScreen_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07545351 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_07545351 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgPauseScreen$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPauseScreen__Build (Gisketch_Aottg2UI_Game_AottgPauseScreen_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x58b4780

void Gisketch_Aottg2UI_Game_AottgPauseScreen__Build
               (Gisketch_Aottg2UI_Game_AottgPauseScreen_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *options;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *footerOptions;
  System_String_o *tooltip;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o local_1a8;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o local_158;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o local_108;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o local_b8;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o local_68;
  
  if (Il2CppMethodInitialized_07545352 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanel);
    il2cpp_codegen_initialize_runtime_metadata(&"gear");
    il2cpp_codegen_initialize_runtime_metadata(&"singleplayer");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"exit");
    il2cpp_codegen_initialize_runtime_metadata(&"return");
    il2cpp_codegen_initialize_runtime_metadata(&"back");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Quit");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Paused");
    il2cpp_codegen_initialize_runtime_metadata(&"pause-dim-overlay");
    il2cpp_codegen_initialize_runtime_metadata(&"inGamePauseDimOverlay");
    il2cpp_codegen_initialize_runtime_metadata(&"dialog.aottg-pause-search-palette");
    il2cpp_codegen_initialize_runtime_metadata(&"pause.back");
    il2cpp_codegen_initialize_runtime_metadata(&"game");
    il2cpp_codegen_initialize_runtime_metadata(&"pause.game");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Search");
    il2cpp_codegen_initialize_runtime_metadata(&"settings");
    il2cpp_codegen_initialize_runtime_metadata(&"search");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Settings");
    il2cpp_codegen_initialize_runtime_metadata(&"zoom");
    il2cpp_codegen_initialize_runtime_metadata(&"pause.settings");
    il2cpp_codegen_initialize_runtime_metadata(&"quit");
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Game");
    il2cpp_codegen_initialize_runtime_metadata(&"pause.quit");
    Il2CppMethodInitialized_07545352 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      "Absolute",(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,"inGamePauseDimOverlay",(System_Action_AottgUi__o *)0x0,"pause-dim-overlay",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    options = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)
              SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array,2);
    local_68.fields.Searchable = false;
    local_68.fields._49_7_ = 0;
    local_68.fields.Tooltip = (System_String_o *)0x0;
    local_68.fields.ActionId = (System_String_o *)0x0;
    local_68.fields.Action = (System_Action_GisketchActionContext__o *)0x0;
    local_68.fields.TextKey = (System_String_o *)0x0;
    local_68.fields.Icon = (System_String_o *)0x0;
    local_68.fields._text = (System_String_o *)0x0;
    local_68.fields.Id = (System_String_o *)0x0;
    local_68.fields.StackedOptions = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
    Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor
              (&local_68,"settings","Common.Settings","pause.settings",
               "gear",true,(System_String_o *)0x0,(MethodInfo *)0x0);
    if (options != (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) {
      if ((int)options->max_length != 0) {
        options->m_Items[0].fields.StackedOptions = local_68.fields.StackedOptions;
        options->m_Items[0].fields.Searchable = local_68.fields.Searchable;
        *(undefined7 *)&options->m_Items[0].fields.field_0x31 = local_68.fields._49_7_;
        options->m_Items[0].fields.Tooltip = local_68.fields.Tooltip;
        options->m_Items[0].fields.ActionId = local_68.fields.ActionId;
        options->m_Items[0].fields.Action = local_68.fields.Action;
        options->m_Items[0].fields.TextKey = local_68.fields.TextKey;
        options->m_Items[0].fields.Icon = local_68.fields.Icon;
        options->m_Items[0].fields._text = local_68.fields._text;
        options->m_Items[0].fields.Id = local_68.fields.Id;
        Il2CppCodeGenWriteBarrier((void **)options->m_Items);
        local_b8.fields.Searchable = false;
        local_b8.fields._49_7_ = 0;
        local_b8.fields.Tooltip = (System_String_o *)0x0;
        local_b8.fields.ActionId = (System_String_o *)0x0;
        local_b8.fields.Action = (System_Action_GisketchActionContext__o *)0x0;
        local_b8.fields.TextKey = (System_String_o *)0x0;
        local_b8.fields.Icon = (System_String_o *)0x0;
        local_b8.fields._text = (System_String_o *)0x0;
        local_b8.fields.Id = (System_String_o *)0x0;
        local_b8.fields.StackedOptions = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
        Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor
                  (&local_b8,"game","Common.Game","pause.game",
                   "singleplayer",false,(System_String_o *)0x0,(MethodInfo *)0x0);
        if ((options->max_length & 0xfffffffe) != 0) {
          options->m_Items[1].fields.StackedOptions = local_b8.fields.StackedOptions;
          options->m_Items[1].fields.Searchable = local_b8.fields.Searchable;
          *(undefined7 *)&options->m_Items[1].fields.field_0x31 = local_b8.fields._49_7_;
          options->m_Items[1].fields.Tooltip = local_b8.fields.Tooltip;
          options->m_Items[1].fields.ActionId = local_b8.fields.ActionId;
          options->m_Items[1].fields.Action = local_b8.fields.Action;
          options->m_Items[1].fields.TextKey = local_b8.fields.TextKey;
          options->m_Items[1].fields.Icon = local_b8.fields.Icon;
          options->m_Items[1].fields._text = local_b8.fields._text;
          options->m_Items[1].fields.Id = local_b8.fields.Id;
          Il2CppCodeGenWriteBarrier((void **)(options->m_Items + 1));
          footerOptions =
               (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)
               SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array,3);
          local_108.fields.Searchable = false;
          local_108.fields._49_7_ = 0;
          local_108.fields.Tooltip = (System_String_o *)0x0;
          local_108.fields.ActionId = (System_String_o *)0x0;
          local_108.fields.Action = (System_Action_GisketchActionContext__o *)0x0;
          local_108.fields.TextKey = (System_String_o *)0x0;
          local_108.fields.Icon = (System_String_o *)0x0;
          local_108.fields._text = (System_String_o *)0x0;
          local_108.fields.Id = (System_String_o *)0x0;
          local_108.fields.StackedOptions = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
          Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor
                    (&local_108,"quit","Common.Quit","pause.quit",
                     "exit",false,(System_String_o *)0x0,(MethodInfo *)0x0);
          if (footerOptions == (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0)
          goto label_058b4e28;
          if ((int)footerOptions->max_length != 0) {
            footerOptions->m_Items[0].fields.StackedOptions = local_108.fields.StackedOptions;
            footerOptions->m_Items[0].fields.Searchable = local_108.fields.Searchable;
            *(undefined7 *)&footerOptions->m_Items[0].fields.field_0x31 = local_108.fields._49_7_;
            footerOptions->m_Items[0].fields.Tooltip = local_108.fields.Tooltip;
            footerOptions->m_Items[0].fields.ActionId = local_108.fields.ActionId;
            footerOptions->m_Items[0].fields.Action = local_108.fields.Action;
            footerOptions->m_Items[0].fields.TextKey = local_108.fields.TextKey;
            footerOptions->m_Items[0].fields.Icon = local_108.fields.Icon;
            footerOptions->m_Items[0].fields._text = local_108.fields._text;
            footerOptions->m_Items[0].fields.Id = local_108.fields.Id;
            Il2CppCodeGenWriteBarrier((void **)footerOptions->m_Items);
            tooltip = Gisketch_Aottg2UI_Game_AottgSearchShortcuts__CurrentScreenTooltip((MethodInfo *)0x0);
            local_158.fields.Searchable = false;
            local_158.fields._49_7_ = 0;
            local_158.fields.Tooltip = (System_String_o *)0x0;
            local_158.fields.ActionId = (System_String_o *)0x0;
            local_158.fields.Action = (System_Action_GisketchActionContext__o *)0x0;
            local_158.fields.TextKey = (System_String_o *)0x0;
            local_158.fields.Icon = (System_String_o *)0x0;
            local_158.fields._text = (System_String_o *)0x0;
            local_158.fields.Id = (System_String_o *)0x0;
            local_158.fields.StackedOptions = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
            Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor
                      (&local_158,"search","Common.Search","dialog.aottg-pause-search-palette",
                       "zoom",false,tooltip,(MethodInfo *)0x0);
            if ((footerOptions->max_length & 0xfffffffe) != 0) {
              footerOptions->m_Items[1].fields.StackedOptions = local_158.fields.StackedOptions;
              footerOptions->m_Items[1].fields.Searchable = local_158.fields.Searchable;
              *(undefined7 *)&footerOptions->m_Items[1].fields.field_0x31 = local_158.fields._49_7_;
              footerOptions->m_Items[1].fields.Tooltip = local_158.fields.Tooltip;
              footerOptions->m_Items[1].fields.ActionId = local_158.fields.ActionId;
              footerOptions->m_Items[1].fields.Action = local_158.fields.Action;
              footerOptions->m_Items[1].fields.TextKey = local_158.fields.TextKey;
              footerOptions->m_Items[1].fields.Icon = local_158.fields.Icon;
              footerOptions->m_Items[1].fields._text = local_158.fields._text;
              footerOptions->m_Items[1].fields.Id = local_158.fields.Id;
              Il2CppCodeGenWriteBarrier((void **)(footerOptions->m_Items + 1));
              local_1a8.fields.Searchable = false;
              local_1a8.fields._49_7_ = 0;
              local_1a8.fields.Tooltip = (System_String_o *)0x0;
              local_1a8.fields.ActionId = (System_String_o *)0x0;
              local_1a8.fields.Action = (System_Action_GisketchActionContext__o *)0x0;
              local_1a8.fields.TextKey = (System_String_o *)0x0;
              local_1a8.fields.Icon = (System_String_o *)0x0;
              local_1a8.fields._text = (System_String_o *)0x0;
              local_1a8.fields.Id = (System_String_o *)0x0;
              local_1a8.fields.StackedOptions = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
              Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor
                        (&local_1a8,"back","Common.Back","pause.back",
                         "return",false,(System_String_o *)0x0,(MethodInfo *)0x0);
              if (2 < (uint)footerOptions->max_length) {
                footerOptions->m_Items[2].fields.StackedOptions = local_1a8.fields.StackedOptions;
                footerOptions->m_Items[2].fields.Searchable = local_1a8.fields.Searchable;
                *(undefined7 *)&footerOptions->m_Items[2].fields.field_0x31 = local_1a8.fields._49_7_;
                footerOptions->m_Items[2].fields.Tooltip = local_1a8.fields.Tooltip;
                footerOptions->m_Items[2].fields.ActionId = local_1a8.fields.ActionId;
                footerOptions->m_Items[2].fields.Action = local_1a8.fields.Action;
                footerOptions->m_Items[2].fields.TextKey = local_1a8.fields.TextKey;
                footerOptions->m_Items[2].fields.Icon = local_1a8.fields.Icon;
                footerOptions->m_Items[2].fields._text = local_1a8.fields._text;
                footerOptions->m_Items[2].fields.Id = local_1a8.fields.Id;
                Il2CppCodeGenWriteBarrier((void **)(footerOptions->m_Items + 2));
                __this_00 = il2cpp_codegen_object_new
                                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanel);
                Gisketch_Aottg2UI_Game_AottgBrushSidePanel___ctor
                          (__this_00,"Common.Paused",options,footerOptions,0.0,(MethodInfo *)0x0);
                Gisketch_Aottg2UI_Code_AottgUi__Component
                          (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_058b4e28:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPauseScreen$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPauseScreen___ctor (Gisketch_Aottg2UI_Game_AottgPauseScreen_o* __this, const MethodInfo* method);
// 0x58b4e30

void Gisketch_Aottg2UI_Game_AottgPauseScreen___ctor
               (Gisketch_Aottg2UI_Game_AottgPauseScreen_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgScreen___ctor((Gisketch_Aottg2UI_Code_AottgScreen_o *)__this,(MethodInfo *)0x0);
  return;
}


