// Type: Gisketch.Aottg2UI.Game.AottgScoreboardProfileDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgScoreboardProfileDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgScoreboardProfileDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgScoreboardProfileDialog__get_Title (Gisketch_Aottg2UI_Game_AottgScoreboardProfileDialog_o* __this, const MethodInfo* method);
// 0x58b50e0

System_String_o *
Gisketch_Aottg2UI_Game_AottgScoreboardProfileDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgScoreboardProfileDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07545357 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Profile");
    Il2CppMethodInitialized_07545357 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("Common.Profile",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgScoreboardProfileDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgScoreboardProfileDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgScoreboardProfileDialog_o* __this, const MethodInfo* method);
// 0x58b5140

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgScoreboardProfileDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgScoreboardProfileDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07545358 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_07545358 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(520.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(640.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgScoreboardProfileDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScoreboardProfileDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgScoreboardProfileDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x58b5210

void Gisketch_Aottg2UI_Game_AottgScoreboardProfileDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgScoreboardProfileDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_07545359 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-scoreboard-profile-content");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    Il2CppMethodInitialized_07545359 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,16.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (body == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (body,"clear",(System_Action_AottgUi__o *)0x0,"ingame-scoreboard-profile-content",layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScoreboardProfileDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScoreboardProfileDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgScoreboardProfileDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x58b5330

void Gisketch_Aottg2UI_Game_AottgScoreboardProfileDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgScoreboardProfileDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754535a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Back");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.popup.back");
    Il2CppMethodInitialized_0754535a = '\x01';
  }
  if (footer == (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
            (footer,"Common.Back","ingame.popup.back",(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScoreboardProfileDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScoreboardProfileDialog___ctor (Gisketch_Aottg2UI_Game_AottgScoreboardProfileDialog_o* __this, const MethodInfo* method);
// 0x58b5390

void Gisketch_Aottg2UI_Game_AottgScoreboardProfileDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgScoreboardProfileDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


