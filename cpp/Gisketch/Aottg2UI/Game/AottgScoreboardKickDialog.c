// Type: Gisketch.Aottg2UI.Game.AottgScoreboardKickDialog
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgScoreboardKickDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgScoreboardKickDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgScoreboardKickDialog__get_Title (Gisketch_Aottg2UI_Game_AottgScoreboardKickDialog_o* __this, const MethodInfo* method);
// 0x181de6710

System_String_o *
Gisketch_Aottg2UI_Game_AottgScoreboardKickDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgScoreboardKickDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344ab9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Confirm");
    Il2CppMethodInitialized_184344ab9 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                     ("Common.Confirm","Confirm",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgScoreboardKickDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgScoreboardKickDialog__get_BodyScrollable (Gisketch_Aottg2UI_Game_AottgScoreboardKickDialog_o* __this, const MethodInfo* method);
// 0x180668280

bool
Gisketch_Aottg2UI_Game_AottgScoreboardKickDialog__get_BodyScrollable(Gisketch_Aottg2UI_Game_AottgScoreboardKickDialog_o* __this, MethodInfo* method)

{
  return false;
}


// Gisketch.Aottg2UI.Game.AottgScoreboardKickDialog$$get_Variant
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgScoreboardKickDialog__get_Variant (Gisketch_Aottg2UI_Game_AottgScoreboardKickDialog_o* __this, const MethodInfo* method);
// 0x180868060

int32_t
Gisketch_Aottg2UI_Game_AottgScoreboardKickDialog__get_Variant(Gisketch_Aottg2UI_Game_AottgScoreboardKickDialog_o* __this, MethodInfo* method)

{
  return 6;
}


// Gisketch.Aottg2UI.Game.AottgScoreboardKickDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgScoreboardKickDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgScoreboardKickDialog_o* __this, const MethodInfo* method);
// 0x181de6610

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgScoreboardKickDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgScoreboardKickDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344aba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184344aba = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(420.0,(MethodInfo *)0x0);
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


// Gisketch.Aottg2UI.Game.AottgScoreboardKickDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScoreboardKickDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgScoreboardKickDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x181de64d0

void Gisketch_Aottg2UI_Game_AottgScoreboardKickDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgScoreboardKickDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344abb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-scoreboard-kick-message");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameInfo");
    Il2CppMethodInitialized_184344abb = '\x01';
  }
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (body,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),"inGameInfo",
               "ingame-scoreboard-kick-message",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgScoreboardKickDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScoreboardKickDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgScoreboardKickDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x181de6550

void Gisketch_Aottg2UI_Game_AottgScoreboardKickDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgScoreboardKickDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344abc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.player.kick.confirm");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.popup.back");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Confirm");
    Il2CppMethodInitialized_184344abc = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
              (footer,"Common.Cancel","Cancel","ingame.popup.back",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgDialogFooter__DangerKey
              (footer,"Common.Confirm","Confirm","ingame.player.kick.confirm",(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgScoreboardKickDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScoreboardKickDialog___ctor (Gisketch_Aottg2UI_Game_AottgScoreboardKickDialog_o* __this, const MethodInfo* method);
// 0x1805386d0

void
Gisketch_Aottg2UI_Game_AottgScoreboardKickDialog___ctor(Gisketch_Aottg2UI_Game_AottgScoreboardKickDialog_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}


