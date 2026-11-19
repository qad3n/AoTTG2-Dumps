// Type: Gisketch.Aottg2UI.Game.AottgModerationReasonDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgModerationReasonDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgModerationReasonDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgModerationReasonDialog__get_Title (Gisketch_Aottg2UI_Game_AottgModerationReasonDialog_o* __this, const MethodInfo* method);
// 0x58b43a0

System_String_o *
Gisketch_Aottg2UI_Game_AottgModerationReasonDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgModerationReasonDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_0754534b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup.Moderation.ReasonTitle");
    Il2CppMethodInitialized_0754534b = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("ScoreboardPopup.Moderation.ReasonTitle",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgModerationReasonDialog$$get_HeaderTitleKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgModerationReasonDialog__get_HeaderTitleKey (Gisketch_Aottg2UI_Game_AottgModerationReasonDialog_o* __this, const MethodInfo* method);
// 0x58b4400

System_String_o *
Gisketch_Aottg2UI_Game_AottgModerationReasonDialog__get_HeaderTitleKey
          (Gisketch_Aottg2UI_Game_AottgModerationReasonDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754534c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-moderation-reason-title");
    Il2CppMethodInitialized_0754534c = '\x01';
  }
  return "ingame-moderation-reason-title";
}


// Gisketch.Aottg2UI.Game.AottgModerationReasonDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgModerationReasonDialog__get_BodyScrollable (Gisketch_Aottg2UI_Game_AottgModerationReasonDialog_o* __this, const MethodInfo* method);
// 0x58b4430

bool Gisketch_Aottg2UI_Game_AottgModerationReasonDialog__get_BodyScrollable
               (Gisketch_Aottg2UI_Game_AottgModerationReasonDialog_o *__this,MethodInfo *method)

{
  return false;
}


// Gisketch.Aottg2UI.Game.AottgModerationReasonDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgModerationReasonDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgModerationReasonDialog_o* __this, const MethodInfo* method);
// 0x58b4440

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgModerationReasonDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgModerationReasonDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_0754534d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_0754534d = '\x01';
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
// 0x58b4500

void Gisketch_Aottg2UI_Game_AottgModerationReasonDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgModerationReasonDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754534e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup.Moderation.ReasonOptional");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-moderation-reason-reason");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup.Moderation.ReasonTitle");
    Il2CppMethodInitialized_0754534e = '\x01';
  }
  if (body == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (body,"ScoreboardPopup.Moderation.ReasonOptional","inGameInfo",(System_String_o *)0x0,(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__InputFieldKey
            (body,"ingame-moderation-reason-reason","ScoreboardPopup.Moderation.ReasonTitle",0,"inputField",
             (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (System_Action_GisketchActionContext__o *)0x0,0.2,0,(System_Action_GisketchActionContext__o *)0x0
             ,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgModerationReasonDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgModerationReasonDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgModerationReasonDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x58b45e0

void Gisketch_Aottg2UI_Game_AottgModerationReasonDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgModerationReasonDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754534f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.moderation.reason.confirm");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.popup.back");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Confirm");
    Il2CppMethodInitialized_0754534f = '\x01';
  }
  if (footer == (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
            (footer,"Common.Cancel","ingame.popup.back",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey
            (footer,"Common.Confirm","ingame.moderation.reason.confirm",(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgModerationReasonDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgModerationReasonDialog___ctor (Gisketch_Aottg2UI_Game_AottgModerationReasonDialog_o* __this, const MethodInfo* method);
// 0x58b4670

void Gisketch_Aottg2UI_Game_AottgModerationReasonDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgModerationReasonDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


