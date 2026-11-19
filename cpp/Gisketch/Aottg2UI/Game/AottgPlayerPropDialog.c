// Type: Gisketch.Aottg2UI.Game.AottgPlayerPropDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgPlayerPropDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgPlayerPropDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgPlayerPropDialog__get_Title (Gisketch_Aottg2UI_Game_AottgPlayerPropDialog_o* __this, const MethodInfo* method);
// 0x58b3ff0

System_String_o *
Gisketch_Aottg2UI_Game_AottgPlayerPropDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgPlayerPropDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07545346 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup.Moderation.EditProp");
    Il2CppMethodInitialized_07545346 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("ScoreboardPopup.Moderation.EditProp",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgPlayerPropDialog$$get_HeaderTitleKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgPlayerPropDialog__get_HeaderTitleKey (Gisketch_Aottg2UI_Game_AottgPlayerPropDialog_o* __this, const MethodInfo* method);
// 0x58b4050

System_String_o *
Gisketch_Aottg2UI_Game_AottgPlayerPropDialog__get_HeaderTitleKey
          (Gisketch_Aottg2UI_Game_AottgPlayerPropDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545347 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-moderation-player-prop-title");
    Il2CppMethodInitialized_07545347 = '\x01';
  }
  return "ingame-moderation-player-prop-title";
}


// Gisketch.Aottg2UI.Game.AottgPlayerPropDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgPlayerPropDialog__get_BodyScrollable (Gisketch_Aottg2UI_Game_AottgPlayerPropDialog_o* __this, const MethodInfo* method);
// 0x58b4080

bool Gisketch_Aottg2UI_Game_AottgPlayerPropDialog__get_BodyScrollable
               (Gisketch_Aottg2UI_Game_AottgPlayerPropDialog_o *__this,MethodInfo *method)

{
  return false;
}


// Gisketch.Aottg2UI.Game.AottgPlayerPropDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgPlayerPropDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgPlayerPropDialog_o* __this, const MethodInfo* method);
// 0x58b4090

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgPlayerPropDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgPlayerPropDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07545348 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_07545348 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(480.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgPlayerPropDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPlayerPropDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgPlayerPropDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x58b4150

void Gisketch_Aottg2UI_Game_AottgPlayerPropDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgPlayerPropDialog_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *body,
               MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545349 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Name");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-moderation-player-prop-status");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup.Moderation.Value");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-moderation-player-prop-name");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-moderation-player-prop-value");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameError");
    Il2CppMethodInitialized_07545349 = '\x01';
  }
  if (body == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (body,"Common.Name","inGameInfo",(System_String_o *)0x0,(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__InputFieldKey
            (body,"ingame-moderation-player-prop-name","Common.Name",0,"inputField",
             (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (System_Action_GisketchActionContext__o *)0x0,0.2,0,(System_Action_GisketchActionContext__o *)0x0
             ,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (body,"ScoreboardPopup.Moderation.Value","inGameInfo",(System_String_o *)0x0,(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__InputFieldKey
            (body,"ingame-moderation-player-prop-value","ScoreboardPopup.Moderation.Value",0,"inputField",
             (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (System_Action_GisketchActionContext__o *)0x0,0.2,0,(System_Action_GisketchActionContext__o *)0x0
             ,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Text
            (body,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),"inGameError",
             "ingame-moderation-player-prop-status",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPlayerPropDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPlayerPropDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgPlayerPropDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x58b4300

void Gisketch_Aottg2UI_Game_AottgPlayerPropDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgPlayerPropDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754534a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Save");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.moderation.player-prop.save");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.popup.back");
    Il2CppMethodInitialized_0754534a = '\x01';
  }
  if (footer == (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
            (footer,"Common.Cancel","ingame.popup.back",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey
            (footer,"Common.Save","ingame.moderation.player-prop.save",(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPlayerPropDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPlayerPropDialog___ctor (Gisketch_Aottg2UI_Game_AottgPlayerPropDialog_o* __this, const MethodInfo* method);
// 0x58b4390

void Gisketch_Aottg2UI_Game_AottgPlayerPropDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgPlayerPropDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


