// Type: Gisketch.Aottg2UI.Game.AottgScoreboardMuteDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgScoreboardMuteDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgScoreboardMuteDialog.<>c__DisplayClass12_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog___c__DisplayClass12_0___ctor (Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog___c__DisplayClass12_0_o* __this, const MethodInfo* method);
// 0x58b57e0

void Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog___c__DisplayClass12_0___ctor
               (Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog___c__DisplayClass12_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScoreboardMuteDialog.<>c__DisplayClass12_0$$<MuteRow>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog___c__DisplayClass12_0___MuteRow_b__0 (Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog___c__DisplayClass12_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x58b5890

void Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog___c__DisplayClass12_0___MuteRow_b__0
               (Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog___c__DisplayClass12_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  System_String_o *key;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  
  if (Il2CppMethodInitialized_07545360 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup.MutePopup.");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameInfo");
    Il2CppMethodInitialized_07545360 = '\x01';
  }
  key = System_String__Concat_52f0320("ScoreboardPopup.MutePopup.",(__this->fields).key,(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__TextKey
                       (row,key,"inGameInfo",(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
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
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
      Gisketch_Aottg2UI_Code_AottgUi__Switch
                (row,(__this->fields).id,false,(System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0
                );
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgScoreboardMuteDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog__get_Title (Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog_o* __this, const MethodInfo* method);
// 0x58b53a0

System_String_o *
Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_0754535b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup.MutePopup.Title");
    Il2CppMethodInitialized_0754535b = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("ScoreboardPopup.MutePopup.Title",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgScoreboardMuteDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog__get_BodyScrollable (Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog_o* __this, const MethodInfo* method);
// 0x58b5400

bool Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog__get_BodyScrollable
               (Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog_o *__this,MethodInfo *method)

{
  return false;
}


// Gisketch.Aottg2UI.Game.AottgScoreboardMuteDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog_o* __this, const MethodInfo* method);
// 0x58b5410

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_0754535c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_0754535c = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(440.0,(MethodInfo *)0x0);
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


// Gisketch.Aottg2UI.Game.AottgScoreboardMuteDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x58b54d0

void Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_0754535d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"slider");
    il2cpp_codegen_initialize_runtime_metadata(&"MuteText");
    il2cpp_codegen_initialize_runtime_metadata(&"MuteEmote");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-scoreboard-mute-emote");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-scoreboard-mute-voice");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup.MutePopup.VoiceVolume");
    il2cpp_codegen_initialize_runtime_metadata(&"MuteVoice");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-scoreboard-mute-volume");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-scoreboard-mute-text");
    Il2CppMethodInitialized_0754535d = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog__MuteRow
            (body,"ingame-scoreboard-mute-emote","MuteEmote",in_RCX);
  Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog__MuteRow
            (body,"ingame-scoreboard-mute-text","MuteText",in_RCX);
  Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog__MuteRow
            (body,"ingame-scoreboard-mute-voice","MuteVoice",in_RCX);
  if (body == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (body,"ScoreboardPopup.MutePopup.VoiceVolume","inGameInfo",(System_String_o *)0x0,(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Slider
            (body,"ingame-scoreboard-mute-volume",1.0,true,(System_String_o *)0x0,"slider",0.0,1.0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScoreboardMuteDialog$$MuteRow
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog__MuteRow (Gisketch_Aottg2UI_Code_AottgUi_o* body, System_String_o* id, System_String_o* key, const MethodInfo* method);
// 0x58b5630

void Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog__MuteRow
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,System_String_o *id,System_String_o *key,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog___c__DisplayClass12_0_o *__this;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_0754535e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog_c__DisplayClass12_0_MuteRow_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog_c__DisplayClass12_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_0754535e = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog_c__DisplayClass12_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog___c__DisplayClass12_0_o *)0x0) {
    (__this->fields).key = key;
    Il2CppCodeGenWriteBarrier(&(__this->fields).key);
    (__this->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog_c__DisplayClass12_0_MuteRow_b__0,
               (MethodInfo_4A81BE0 *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(44.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,"Center",
                        (System_String_o *)0x0,(System_String_o *)0x0,16.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,height,
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


// Gisketch.Aottg2UI.Game.AottgScoreboardMuteDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x58b57f0

void Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754535f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.player.mute.confirm");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.popup.back");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Confirm");
    Il2CppMethodInitialized_0754535f = '\x01';
  }
  if (footer == (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
            (footer,"Common.Cancel","ingame.popup.back",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey
            (footer,"Common.Confirm","ingame.player.mute.confirm",(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScoreboardMuteDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog___ctor (Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog_o* __this, const MethodInfo* method);
// 0x58b5880

void Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


