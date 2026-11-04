// Type: Gisketch.Aottg2UI.Game.AottgPauseScreen
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgPauseScreen.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgPauseScreen$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgPauseScreen__get_RootStyle (Gisketch_Aottg2UI_Game_AottgPauseScreen_o* __this, const MethodInfo* method);
// 0x181de4990

System_String_o *
Gisketch_Aottg2UI_Game_AottgPauseScreen__get_RootStyle
          (Gisketch_Aottg2UI_Game_AottgPauseScreen_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344aa8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuOverlay");
    Il2CppMethodInitialized_184344aa8 = '\x01';
  }
  return "mainMenuOverlay";
}


// Gisketch.Aottg2UI.Game.AottgPauseScreen$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgPauseScreen__get_RootLayout (Gisketch_Aottg2UI_Game_AottgPauseScreen_o* __this, const MethodInfo* method);
// 0x181de4880

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgPauseScreen__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgPauseScreen_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344aa9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_184344aa9 = '\x01';
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
// 0x181de4200

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
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o local_158;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o local_118;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o local_d8;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o local_98;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o local_58;
  
  if (Il2CppMethodInitialized_184344aaa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanel);
    il2cpp_codegen_initialize_runtime_metadata(&"gear");
    il2cpp_codegen_initialize_runtime_metadata(&"singleplayer");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"exit");
    il2cpp_codegen_initialize_runtime_metadata(&"return");
    il2cpp_codegen_initialize_runtime_metadata(&"QUIT");
    il2cpp_codegen_initialize_runtime_metadata(&"back");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Quit");
    il2cpp_codegen_initialize_runtime_metadata(&"SETTINGS");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Paused");
    il2cpp_codegen_initialize_runtime_metadata(&"PAUSED");
    il2cpp_codegen_initialize_runtime_metadata(&"pause-dim-overlay");
    il2cpp_codegen_initialize_runtime_metadata(&"inGamePauseDimOverlay");
    il2cpp_codegen_initialize_runtime_metadata(&"dialog.aottg-pause-search-palette");
    il2cpp_codegen_initialize_runtime_metadata(&"pause.back");
    il2cpp_codegen_initialize_runtime_metadata(&"SEARCH");
    il2cpp_codegen_initialize_runtime_metadata(&"game");
    il2cpp_codegen_initialize_runtime_metadata(&"pause.game");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Search");
    il2cpp_codegen_initialize_runtime_metadata(&"settings");
    il2cpp_codegen_initialize_runtime_metadata(&"search");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Settings");
    il2cpp_codegen_initialize_runtime_metadata(&"zoom");
    il2cpp_codegen_initialize_runtime_metadata(&"GAME");
    il2cpp_codegen_initialize_runtime_metadata(&"pause.settings");
    il2cpp_codegen_initialize_runtime_metadata(&"quit");
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    il2cpp_codegen_initialize_runtime_metadata(&"BACK");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Game");
    il2cpp_codegen_initialize_runtime_metadata(&"pause.quit");
    Il2CppMethodInitialized_184344aaa = '\x01';
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
    local_158.fields._id = (System_String_o *)0x0;
    local_158.fields.Label = (System_String_o *)0x0;
    local_158.fields.TextKey = (System_String_o *)0x0;
    local_158.fields.Icon = (System_String_o *)0x0;
    local_158.fields.ActionId = (System_String_o *)0x0;
    local_158.fields.Action = (System_Action_GisketchActionContext__o *)0x0;
    local_158.fields.Searchable = false;
    local_158.fields._49_7_ = 0;
    local_158.fields.Tooltip = (System_String_o *)0x0;
    Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor_1e29240
              (&local_158,"settings","SETTINGS","pause.settings",
               "gear","Common.Settings",true,(System_String_o *)0x0,(MethodInfo *)0x0);
    if (options != (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) {
      if ((int)options->max_length != 0) {
        options->m_Items[0].fields._id = local_158.fields._id;
        options->m_Items[0].fields.Label = local_158.fields.Label;
        options->m_Items[0].fields.TextKey = local_158.fields.TextKey;
        options->m_Items[0].fields.Icon = local_158.fields.Icon;
        options->m_Items[0].fields.ActionId = local_158.fields.ActionId;
        options->m_Items[0].fields.Action = local_158.fields.Action;
        options->m_Items[0].fields.Searchable = local_158.fields.Searchable;
        *(undefined7 *)&options->m_Items[0].fields.field_0x31 = local_158.fields._49_7_;
        options->m_Items[0].fields.Tooltip = local_158.fields.Tooltip;
        Il2CppCodeGenWriteBarrier((void **)options->m_Items,(void *)0x0);
        local_118.fields._id = (System_String_o *)0x0;
        local_118.fields.Label = (System_String_o *)0x0;
        local_118.fields.TextKey = (System_String_o *)0x0;
        local_118.fields.Icon = (System_String_o *)0x0;
        local_118.fields.ActionId = (System_String_o *)0x0;
        local_118.fields.Action = (System_Action_GisketchActionContext__o *)0x0;
        local_118.fields.Searchable = false;
        local_118.fields._49_7_ = 0;
        local_118.fields.Tooltip = (System_String_o *)0x0;
        Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor_1e29240
                  (&local_118,"game","GAME","pause.game",
                   "singleplayer","Common.Game",false,(System_String_o *)0x0,(MethodInfo *)0x0)
        ;
        if (1 < (uint)options->max_length) {
          options->m_Items[1].fields._id = local_118.fields._id;
          options->m_Items[1].fields.Label = local_118.fields.Label;
          options->m_Items[1].fields.TextKey = local_118.fields.TextKey;
          options->m_Items[1].fields.Icon = local_118.fields.Icon;
          options->m_Items[1].fields.ActionId = local_118.fields.ActionId;
          options->m_Items[1].fields.Action = local_118.fields.Action;
          options->m_Items[1].fields.Searchable = local_118.fields.Searchable;
          *(undefined7 *)&options->m_Items[1].fields.field_0x31 = local_118.fields._49_7_;
          options->m_Items[1].fields.Tooltip = local_118.fields.Tooltip;
          Il2CppCodeGenWriteBarrier((void **)(options->m_Items + 1),(void *)0x0);
          footerOptions =
               (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)
               SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array,3);
          local_d8.fields._id = (System_String_o *)0x0;
          local_d8.fields.Label = (System_String_o *)0x0;
          local_d8.fields.TextKey = (System_String_o *)0x0;
          local_d8.fields.Icon = (System_String_o *)0x0;
          local_d8.fields.ActionId = (System_String_o *)0x0;
          local_d8.fields.Action = (System_Action_GisketchActionContext__o *)0x0;
          local_d8.fields.Searchable = false;
          local_d8.fields._49_7_ = 0;
          local_d8.fields.Tooltip = (System_String_o *)0x0;
          Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor_1e29240
                    (&local_d8,"quit","QUIT","pause.quit",
                     "exit","Common.Quit",false,(System_String_o *)0x0,
                     (MethodInfo *)0x0);
          if (footerOptions == (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0)
          goto label_181de486c;
          if ((int)footerOptions->max_length != 0) {
            footerOptions->m_Items[0].fields._id = local_d8.fields._id;
            footerOptions->m_Items[0].fields.Label = local_d8.fields.Label;
            footerOptions->m_Items[0].fields.TextKey = local_d8.fields.TextKey;
            footerOptions->m_Items[0].fields.Icon = local_d8.fields.Icon;
            footerOptions->m_Items[0].fields.ActionId = local_d8.fields.ActionId;
            footerOptions->m_Items[0].fields.Action = local_d8.fields.Action;
            footerOptions->m_Items[0].fields.Searchable = local_d8.fields.Searchable;
            *(undefined7 *)&footerOptions->m_Items[0].fields.field_0x31 = local_d8.fields._49_7_;
            footerOptions->m_Items[0].fields.Tooltip = local_d8.fields.Tooltip;
            Il2CppCodeGenWriteBarrier((void **)footerOptions->m_Items,(void *)0x0);
            tooltip = Gisketch_Aottg2UI_Game_AottgSearchShortcuts__CurrentScreenTooltip((MethodInfo *)0x0);
            local_98.fields._id = (System_String_o *)0x0;
            local_98.fields.Label = (System_String_o *)0x0;
            local_98.fields.TextKey = (System_String_o *)0x0;
            local_98.fields.Icon = (System_String_o *)0x0;
            local_98.fields.ActionId = (System_String_o *)0x0;
            local_98.fields.Action = (System_Action_GisketchActionContext__o *)0x0;
            local_98.fields.Searchable = false;
            local_98.fields._49_7_ = 0;
            local_98.fields.Tooltip = (System_String_o *)0x0;
            Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor_1e29240
                      (&local_98,"search","SEARCH","dialog.aottg-pause-search-palette",
                       "zoom","Common.Search",false,tooltip,(MethodInfo *)0x0);
            if (1 < (uint)footerOptions->max_length) {
              footerOptions->m_Items[1].fields._id = local_98.fields._id;
              footerOptions->m_Items[1].fields.Label = local_98.fields.Label;
              footerOptions->m_Items[1].fields.TextKey = local_98.fields.TextKey;
              footerOptions->m_Items[1].fields.Icon = local_98.fields.Icon;
              footerOptions->m_Items[1].fields.ActionId = local_98.fields.ActionId;
              footerOptions->m_Items[1].fields.Action = local_98.fields.Action;
              footerOptions->m_Items[1].fields.Searchable = local_98.fields.Searchable;
              *(undefined7 *)&footerOptions->m_Items[1].fields.field_0x31 = local_98.fields._49_7_;
              footerOptions->m_Items[1].fields.Tooltip = local_98.fields.Tooltip;
              Il2CppCodeGenWriteBarrier((void **)(footerOptions->m_Items + 1),(void *)0x0);
              local_58.fields._id = (System_String_o *)0x0;
              local_58.fields.Label = (System_String_o *)0x0;
              local_58.fields.TextKey = (System_String_o *)0x0;
              local_58.fields.Icon = (System_String_o *)0x0;
              local_58.fields.ActionId = (System_String_o *)0x0;
              local_58.fields.Action = (System_Action_GisketchActionContext__o *)0x0;
              local_58.fields.Searchable = false;
              local_58.fields._49_7_ = 0;
              local_58.fields.Tooltip = (System_String_o *)0x0;
              Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor_1e29240
                        (&local_58,"back","BACK","pause.back",
                         "return","Common.Back",false,(System_String_o *)0x0,
                         (MethodInfo *)0x0);
              if (2 < (uint)footerOptions->max_length) {
                footerOptions->m_Items[2].fields._id = local_58.fields._id;
                footerOptions->m_Items[2].fields.Label = local_58.fields.Label;
                footerOptions->m_Items[2].fields.TextKey = local_58.fields.TextKey;
                footerOptions->m_Items[2].fields.Icon = local_58.fields.Icon;
                footerOptions->m_Items[2].fields.ActionId = local_58.fields.ActionId;
                footerOptions->m_Items[2].fields.Action = local_58.fields.Action;
                footerOptions->m_Items[2].fields.Searchable = local_58.fields.Searchable;
                *(undefined7 *)&footerOptions->m_Items[2].fields.field_0x31 = local_58.fields._49_7_;
                footerOptions->m_Items[2].fields.Tooltip = local_58.fields.Tooltip;
                Il2CppCodeGenWriteBarrier((void **)(footerOptions->m_Items + 2),(void *)0x0);
                __this_00 = il2cpp_codegen_object_new
                                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanel);
                Gisketch_Aottg2UI_Game_AottgBrushSidePanel___ctor
                          (__this_00,"PAUSED",options,footerOptions,"Common.Paused",
                           (MethodInfo *)0x0);
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
label_181de486c:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPauseScreen$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPauseScreen___ctor (Gisketch_Aottg2UI_Game_AottgPauseScreen_o* __this, const MethodInfo* method);
// 0x1805386d0

void
Gisketch_Aottg2UI_Game_AottgPauseScreen___ctor(Gisketch_Aottg2UI_Game_AottgPauseScreen_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgScreen___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}


