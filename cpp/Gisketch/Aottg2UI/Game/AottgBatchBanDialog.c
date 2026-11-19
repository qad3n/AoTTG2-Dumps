// Type: Gisketch.Aottg2UI.Game.AottgBatchBanDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgBatchBanDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgBatchBanDialog.<>c__DisplayClass11_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBatchBanDialog___c__DisplayClass11_0___ctor (Gisketch_Aottg2UI_Game_AottgBatchBanDialog___c__DisplayClass11_0_o* __this, const MethodInfo* method);
// 0x58b3d60

void Gisketch_Aottg2UI_Game_AottgBatchBanDialog___c__DisplayClass11_0___ctor
               (Gisketch_Aottg2UI_Game_AottgBatchBanDialog___c__DisplayClass11_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBatchBanDialog.<>c__DisplayClass11_0$$<ActionRow>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBatchBanDialog___c__DisplayClass11_0___ActionRow_b__0 (Gisketch_Aottg2UI_Game_AottgBatchBanDialog___c__DisplayClass11_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x58b3de0

void Gisketch_Aottg2UI_Game_AottgBatchBanDialog___c__DisplayClass11_0___ActionRow_b__0
               (Gisketch_Aottg2UI_Game_AottgBatchBanDialog___c__DisplayClass11_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  
  if (Il2CppMethodInitialized_07545345 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup.Moderation.");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    Il2CppMethodInitialized_07545345 = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320("ScoreboardPopup.Moderation.",(__this->fields).firstItem,(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
                       (row,3,pSVar1,(__this->fields).firstAction,(System_String_o *)0x0,
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (System_String_o *)0x0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).layout = pGVar3;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).layout);
      pSVar1 = System_String__Concat_52f0320
                         ("ScoreboardPopup.Moderation.",(__this->fields).secondItem,(MethodInfo *)0x0);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
                         (row,3,pSVar1,(__this->fields).secondAction,(System_String_o *)0x0,
                          (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (System_String_o *)0x0,(MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          1.0,1.0,(MethodInfo *)0x0);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).layout = pGVar3;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).layout);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgBatchBanDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgBatchBanDialog__get_Title (Gisketch_Aottg2UI_Game_AottgBatchBanDialog_o* __this, const MethodInfo* method);
// 0x58b3800

System_String_o *
Gisketch_Aottg2UI_Game_AottgBatchBanDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgBatchBanDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07545340 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup.Moderation.BatchBan");
    Il2CppMethodInitialized_07545340 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("ScoreboardPopup.Moderation.BatchBan",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgBatchBanDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgBatchBanDialog__get_BodyScrollable (Gisketch_Aottg2UI_Game_AottgBatchBanDialog_o* __this, const MethodInfo* method);
// 0x58b3860

bool Gisketch_Aottg2UI_Game_AottgBatchBanDialog__get_BodyScrollable
               (Gisketch_Aottg2UI_Game_AottgBatchBanDialog_o *__this,MethodInfo *method)

{
  return false;
}


// Gisketch.Aottg2UI.Game.AottgBatchBanDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgBatchBanDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgBatchBanDialog_o* __this, const MethodInfo* method);
// 0x58b3870

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgBatchBanDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgBatchBanDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07545341 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_07545341 = '\x01';
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
// 0x58b3930

void Gisketch_Aottg2UI_Game_AottgBatchBanDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgBatchBanDialog_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *body,
               MethodInfo *method)

{
  System_String_o *placeholder;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545342 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"SessionUnban");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup.Moderation.BatchBanHint");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.moderation.batch.ip-ban");
    il2cpp_codegen_initialize_runtime_metadata(&"IpUnban");
    il2cpp_codegen_initialize_runtime_metadata(&"textArea");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-moderation-batch-ban-targets");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.moderation.batch.session-unban");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.moderation.batch.ip-unban");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup.Moderation.Targets");
    il2cpp_codegen_initialize_runtime_metadata(&"SessionBan");
    il2cpp_codegen_initialize_runtime_metadata(&"IpBan");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.moderation.batch.session-ban");
    Il2CppMethodInitialized_07545342 = '\x01';
  }
  if (body == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (body,"ScoreboardPopup.Moderation.BatchBanHint","inGameInfo",(System_String_o *)0x0,(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  placeholder = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                          ("ScoreboardPopup.Moderation.Targets",(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(150.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  node = Gisketch_Aottg2UI_Code_AottgUi__TextArea
                   (body,"ingame-moderation-batch-ban-targets",placeholder,"textArea",layout,
                    (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Key(node,"ScoreboardPopup.Moderation.Targets",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgBatchBanDialog__ActionRow
            (body,"SessionBan","ingame.moderation.batch.session-ban","IpBan","ingame.moderation.batch.ip-ban",
             method_00);
  Gisketch_Aottg2UI_Game_AottgBatchBanDialog__ActionRow
            (body,"SessionUnban","ingame.moderation.batch.session-unban","IpUnban","ingame.moderation.batch.ip-unban",
             method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBatchBanDialog$$ActionRow
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBatchBanDialog__ActionRow (Gisketch_Aottg2UI_Code_AottgUi_o* body, System_String_o* firstItem, System_String_o* firstAction, System_String_o* secondItem, System_String_o* secondAction, const MethodInfo* method);
// 0x58b3ba0

void Gisketch_Aottg2UI_Game_AottgBatchBanDialog__ActionRow
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,System_String_o *firstItem,System_String_o *firstAction
               ,System_String_o *secondItem,System_String_o *secondAction,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBatchBanDialog___c__DisplayClass11_0_o *__this;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_07545343 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgBatchBanDialog_c__DisplayClass11_0_ActionRow_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgBatchBanDialog_c__DisplayClass11_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_07545343 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgBatchBanDialog_c__DisplayClass11_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgBatchBanDialog___c__DisplayClass11_0_o *)0x0) {
    (__this->fields).firstItem = firstItem;
    Il2CppCodeGenWriteBarrier(&(__this->fields).firstItem);
    (__this->fields).firstAction = firstAction;
    Il2CppCodeGenWriteBarrier(&(__this->fields).firstAction);
    (__this->fields).secondItem = secondItem;
    Il2CppCodeGenWriteBarrier(&(__this->fields).secondItem);
    (__this->fields).secondAction = secondAction;
    Il2CppCodeGenWriteBarrier(&(__this->fields).secondAction);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgBatchBanDialog_c__DisplayClass11_0_ActionRow_b__0,
               (MethodInfo_4A81BE0 *)0x0);
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
                (body,"clear",__this_00,(System_String_o *)0x0,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgBatchBanDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBatchBanDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgBatchBanDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x58b3d70

void Gisketch_Aottg2UI_Game_AottgBatchBanDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgBatchBanDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545344 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Back");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.popup.back");
    Il2CppMethodInitialized_07545344 = '\x01';
  }
  if (footer == (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
            (footer,"Common.Back","ingame.popup.back",(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBatchBanDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBatchBanDialog___ctor (Gisketch_Aottg2UI_Game_AottgBatchBanDialog_o* __this, const MethodInfo* method);
// 0x58b3dd0

void Gisketch_Aottg2UI_Game_AottgBatchBanDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgBatchBanDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


