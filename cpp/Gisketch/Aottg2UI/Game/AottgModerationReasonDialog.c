// Type: Gisketch.Aottg2UI.Game.AottgModerationReasonDialog
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgModerationReasonDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgModerationReasonDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgModerationReasonDialog__get_Title (Gisketch_Aottg2UI_Game_AottgModerationReasonDialog_o* __this, const MethodInfo* method);
// 0x181de41d0

System_String_o *
Gisketch_Aottg2UI_Game_AottgModerationReasonDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgModerationReasonDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344aa3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Reason");
    Il2CppMethodInitialized_184344aa3 = '\x01';
  }
  return "Reason";
}


// Gisketch.Aottg2UI.Game.AottgModerationReasonDialog$$get_HeaderTitleKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgModerationReasonDialog__get_HeaderTitleKey (Gisketch_Aottg2UI_Game_AottgModerationReasonDialog_o* __this, const MethodInfo* method);
// 0x181de40a0

System_String_o *
Gisketch_Aottg2UI_Game_AottgModerationReasonDialog__get_HeaderTitleKey
          (Gisketch_Aottg2UI_Game_AottgModerationReasonDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344aa4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-moderation-reason-title");
    Il2CppMethodInitialized_184344aa4 = '\x01';
  }
  return "ingame-moderation-reason-title";
}


// Gisketch.Aottg2UI.Game.AottgModerationReasonDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgModerationReasonDialog__get_BodyScrollable (Gisketch_Aottg2UI_Game_AottgModerationReasonDialog_o* __this, const MethodInfo* method);
// 0x180668280

bool
Gisketch_Aottg2UI_Game_AottgModerationReasonDialog__get_BodyScrollable(Gisketch_Aottg2UI_Game_AottgModerationReasonDialog_o* __this, MethodInfo* method)

{
  return false;
}


// Gisketch.Aottg2UI.Game.AottgModerationReasonDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgModerationReasonDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgModerationReasonDialog_o* __this, const MethodInfo* method);
// 0x181de40d0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgModerationReasonDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgModerationReasonDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344aa5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184344aa5 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(520.0,(MethodInfo *)0x0);
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


// Gisketch.Aottg2UI.Game.AottgModerationReasonDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgModerationReasonDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgModerationReasonDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x181de3ef0

void Gisketch_Aottg2UI_Game_AottgModerationReasonDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgModerationReasonDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344aa6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"Reason (optional)");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-moderation-reason-reason");
    il2cpp_codegen_initialize_runtime_metadata(&"Reason");
    Il2CppMethodInitialized_184344aa6 = '\x01';
  }
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (body,"Reason (optional)","inGameInfo",(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__InputField
              (body,"ingame-moderation-reason-reason","Reason",0,"inputField",
               (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (System_Action_GisketchActionContext__o *)0x0,0.2,0,
               (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgModerationReasonDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgModerationReasonDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgModerationReasonDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x181de3fe0

void Gisketch_Aottg2UI_Game_AottgModerationReasonDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgModerationReasonDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344aa7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.moderation.reason.confirm");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.popup.back");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Confirm");
    Il2CppMethodInitialized_184344aa7 = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
              (footer,"Common.Cancel","Cancel","ingame.popup.back",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey
              (footer,"Common.Confirm","Confirm","ingame.moderation.reason.confirm",(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgModerationReasonDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgModerationReasonDialog___ctor (Gisketch_Aottg2UI_Game_AottgModerationReasonDialog_o* __this, const MethodInfo* method);
// 0x1805386d0

void
Gisketch_Aottg2UI_Game_AottgModerationReasonDialog___ctor(Gisketch_Aottg2UI_Game_AottgModerationReasonDialog_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}


