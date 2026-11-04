// Type: Gisketch.Aottg2UI.Game.AottgBatchBanDialog
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgBatchBanDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgBatchBanDialog.<>c__DisplayClass9_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBatchBanDialog___c__DisplayClass9_0___ctor (Gisketch_Aottg2UI_Game_AottgBatchBanDialog___c__DisplayClass9_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgBatchBanDialog___c__DisplayClass9_0___ctor(Gisketch_Aottg2UI_Game_AottgBatchBanDialog___c__DisplayClass9_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBatchBanDialog.<>c__DisplayClass9_0$$<ActionRow>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBatchBanDialog___c__DisplayClass9_0___ActionRow_b__0 (Gisketch_Aottg2UI_Game_AottgBatchBanDialog___c__DisplayClass9_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x181def800

void Gisketch_Aottg2UI_Game_AottgBatchBanDialog___c__DisplayClass9_0___ActionRow_b__0
               (Gisketch_Aottg2UI_Game_AottgBatchBanDialog___c__DisplayClass9_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  
  if (Il2CppMethodInitialized_184344a9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    Il2CppMethodInitialized_184344a9d = '\x01';
  }
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (row,3,(__this->fields).firstLabel,(__this->fields).firstAction,(System_String_o *)0x0,
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (System_String_o *)0x0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).layout = pGVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout,pGVar2);
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (row,3,(__this->fields).secondLabel,(__this->fields).secondAction,
                          (System_String_o *)0x0,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                          (MethodInfo *)0x0);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          1.0,1.0,(MethodInfo *)0x0);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).layout = pGVar2;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout,pGVar2);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgBatchBanDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgBatchBanDialog__get_Title (Gisketch_Aottg2UI_Game_AottgBatchBanDialog_o* __this, const MethodInfo* method);
// 0x181dd8390

System_String_o *
Gisketch_Aottg2UI_Game_AottgBatchBanDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgBatchBanDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344a98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Batch Ban");
    Il2CppMethodInitialized_184344a98 = '\x01';
  }
  return "Batch Ban";
}


// Gisketch.Aottg2UI.Game.AottgBatchBanDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgBatchBanDialog__get_BodyScrollable (Gisketch_Aottg2UI_Game_AottgBatchBanDialog_o* __this, const MethodInfo* method);
// 0x180668280

bool
Gisketch_Aottg2UI_Game_AottgBatchBanDialog__get_BodyScrollable(Gisketch_Aottg2UI_Game_AottgBatchBanDialog_o* __this, MethodInfo* method)

{
  return false;
}


// Gisketch.Aottg2UI.Game.AottgBatchBanDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgBatchBanDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgBatchBanDialog_o* __this, const MethodInfo* method);
// 0x181dd8290

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgBatchBanDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgBatchBanDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344a99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184344a99 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(550.0,(MethodInfo *)0x0);
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


// Gisketch.Aottg2UI.Game.AottgBatchBanDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBatchBanDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgBatchBanDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x181dd7fb0

void Gisketch_Aottg2UI_Game_AottgBatchBanDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgBatchBanDialog_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *body,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184344a9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.moderation.batch.ip-ban");
    il2cpp_codegen_initialize_runtime_metadata(&"Session Ban");
    il2cpp_codegen_initialize_runtime_metadata(&"Targets");
    il2cpp_codegen_initialize_runtime_metadata(&"textArea");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-moderation-batch-ban-targets");
    il2cpp_codegen_initialize_runtime_metadata(&"Session Unban");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.moderation.batch.session-unban");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.moderation.batch.ip-unban");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.moderation.batch.session-ban");
    il2cpp_codegen_initialize_runtime_metadata(&"IP Unban");
    il2cpp_codegen_initialize_runtime_metadata(&"Enter session IDs or IP addresses, one per line.");
    il2cpp_codegen_initialize_runtime_metadata(&"IP Ban");
    Il2CppMethodInitialized_184344a9a = '\x01';
  }
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (body,"Enter session IDs or IP addresses, one per line.","inGameInfo",(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(150.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__TextArea
              (body,"ingame-moderation-batch-ban-targets","Targets","textArea",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgBatchBanDialog__ActionRow
              (body,"Session Ban","ingame.moderation.batch.session-ban","IP Ban","ingame.moderation.batch.ip-ban",
               (MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgBatchBanDialog__ActionRow
              (body,"Session Unban","ingame.moderation.batch.session-unban","IP Unban","ingame.moderation.batch.ip-unban",
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgBatchBanDialog$$ActionRow
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBatchBanDialog__ActionRow (Gisketch_Aottg2UI_Code_AottgUi_o* body, System_String_o* firstLabel, System_String_o* firstAction, System_String_o* secondLabel, System_String_o* secondAction, const MethodInfo* method);
// 0x181dd7dd0

void Gisketch_Aottg2UI_Game_AottgBatchBanDialog__ActionRow
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,System_String_o *firstLabel,
               System_String_o *firstAction,System_String_o *secondLabel,System_String_o *secondAction,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBatchBanDialog___c__DisplayClass9_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184344a9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgBatchBanDialog_c__DisplayClass9_0_ActionRow_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgBatchBanDialog_c__DisplayClass9_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_184344a9b = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgBatchBanDialog_c__DisplayClass9_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgBatchBanDialog___c__DisplayClass9_0_o *)0x0) {
    (object->fields).firstLabel = firstLabel;
    Il2CppCodeGenWriteBarrier(&(object->fields).firstLabel,firstLabel);
    (object->fields).firstAction = firstAction;
    Il2CppCodeGenWriteBarrier(&(object->fields).firstAction,firstAction);
    (object->fields).secondLabel = secondLabel;
    Il2CppCodeGenWriteBarrier(&(object->fields).secondLabel,secondLabel);
    (object->fields).secondAction = secondAction;
    Il2CppCodeGenWriteBarrier(&(object->fields).secondAction,secondAction);
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgBatchBanDialog_c__DisplayClass9_0_ActionRow_b__0,
               (MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,12.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (body,"clear",(System_Action_AottgUi__o *)__this,(System_String_o *)0x0,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgBatchBanDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBatchBanDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgBatchBanDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x181dd8210

void Gisketch_Aottg2UI_Game_AottgBatchBanDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgBatchBanDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344a9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Back");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.popup.back");
    Il2CppMethodInitialized_184344a9c = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
              (footer,"Common.Back","Back","ingame.popup.back",(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgBatchBanDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBatchBanDialog___ctor (Gisketch_Aottg2UI_Game_AottgBatchBanDialog_o* __this, const MethodInfo* method);
// 0x1805386d0

void
Gisketch_Aottg2UI_Game_AottgBatchBanDialog___ctor(Gisketch_Aottg2UI_Game_AottgBatchBanDialog_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}


