// Type: Gisketch.Aottg2UI.Game.AottgPlayerPropDialog
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgPlayerPropDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgPlayerPropDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgPlayerPropDialog__get_Title (Gisketch_Aottg2UI_Game_AottgPlayerPropDialog_o* __this, const MethodInfo* method);
// 0x181de5060

System_String_o *
Gisketch_Aottg2UI_Game_AottgPlayerPropDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgPlayerPropDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344a9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Edit Prop");
    Il2CppMethodInitialized_184344a9e = '\x01';
  }
  return "Edit Prop";
}


// Gisketch.Aottg2UI.Game.AottgPlayerPropDialog$$get_HeaderTitleKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgPlayerPropDialog__get_HeaderTitleKey (Gisketch_Aottg2UI_Game_AottgPlayerPropDialog_o* __this, const MethodInfo* method);
// 0x181de4f30

System_String_o *
Gisketch_Aottg2UI_Game_AottgPlayerPropDialog__get_HeaderTitleKey
          (Gisketch_Aottg2UI_Game_AottgPlayerPropDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344a9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-moderation-player-prop-title");
    Il2CppMethodInitialized_184344a9f = '\x01';
  }
  return "ingame-moderation-player-prop-title";
}


// Gisketch.Aottg2UI.Game.AottgPlayerPropDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgPlayerPropDialog__get_BodyScrollable (Gisketch_Aottg2UI_Game_AottgPlayerPropDialog_o* __this, const MethodInfo* method);
// 0x180668280

bool
Gisketch_Aottg2UI_Game_AottgPlayerPropDialog__get_BodyScrollable(Gisketch_Aottg2UI_Game_AottgPlayerPropDialog_o* __this, MethodInfo* method)

{
  return false;
}


// Gisketch.Aottg2UI.Game.AottgPlayerPropDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgPlayerPropDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgPlayerPropDialog_o* __this, const MethodInfo* method);
// 0x181de4f60

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgPlayerPropDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgPlayerPropDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344aa0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184344aa0 = '\x01';
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
// 0x181de4ca0

void Gisketch_Aottg2UI_Game_AottgPlayerPropDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgPlayerPropDialog_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *body,
               MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344aa1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-moderation-player-prop-status");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"Value");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-moderation-player-prop-name");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-moderation-player-prop-value");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameError");
    Il2CppMethodInitialized_184344aa1 = '\x01';
  }
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (body,"Name","inGameInfo",(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__InputField
              (body,"ingame-moderation-player-prop-name","Name",0,"inputField",
               (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (System_Action_GisketchActionContext__o *)0x0,0.2,0,
               (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (body,"Value","inGameInfo",(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__InputField
              (body,"ingame-moderation-player-prop-value","Value",0,"inputField",
               (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (System_Action_GisketchActionContext__o *)0x0,0.2,0,
               (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (body,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),"inGameError",
               "ingame-moderation-player-prop-status",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPlayerPropDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPlayerPropDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgPlayerPropDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x181de4e70

void Gisketch_Aottg2UI_Game_AottgPlayerPropDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgPlayerPropDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344aa2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Save");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.moderation.player-prop.save");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.popup.back");
    Il2CppMethodInitialized_184344aa2 = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
              (footer,"Common.Cancel","Cancel","ingame.popup.back",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey
              (footer,"Common.Save","Save","ingame.moderation.player-prop.save",(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPlayerPropDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPlayerPropDialog___ctor (Gisketch_Aottg2UI_Game_AottgPlayerPropDialog_o* __this, const MethodInfo* method);
// 0x1805386d0

void
Gisketch_Aottg2UI_Game_AottgPlayerPropDialog___ctor(Gisketch_Aottg2UI_Game_AottgPlayerPropDialog_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}


