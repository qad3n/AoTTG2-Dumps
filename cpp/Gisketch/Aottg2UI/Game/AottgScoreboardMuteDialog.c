// Type: Gisketch.Aottg2UI.Game.AottgScoreboardMuteDialog
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgScoreboardMuteDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgScoreboardMuteDialog.<>c__DisplayClass12_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog___c__DisplayClass12_0___ctor (Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog___c__DisplayClass12_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog___c__DisplayClass12_0___ctor(Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog___c__DisplayClass12_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScoreboardMuteDialog.<>c__DisplayClass12_0$$<MuteRow>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog___c__DisplayClass12_0___MuteRow_b__0 (Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog___c__DisplayClass12_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x181dedee0

void Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog___c__DisplayClass12_0___MuteRow_b__0
               (Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog___c__DisplayClass12_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  System_String_o *key;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  
  if (Il2CppMethodInitialized_184344ab8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup.MutePopup.");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameInfo");
    Il2CppMethodInitialized_184344ab8 = '\x01';
  }
  key = System_String__Concat_1969e50("ScoreboardPopup.MutePopup.",(__this->fields).key,(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__TextKey
                       (row,key,(__this->fields).fallback,"inGameInfo",(System_String_o *)0x0,
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                       1.0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).layout = value;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout,value);
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
// 0x181de6cf0

System_String_o *
Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344ab3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Mute");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup.MutePopup.Title");
    Il2CppMethodInitialized_184344ab3 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                     ("ScoreboardPopup.MutePopup.Title","Mute",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgScoreboardMuteDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog__get_BodyScrollable (Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog_o* __this, const MethodInfo* method);
// 0x180668280

bool
Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog__get_BodyScrollable(Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog_o* __this, MethodInfo* method)

{
  return false;
}


// Gisketch.Aottg2UI.Game.AottgScoreboardMuteDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog_o* __this, const MethodInfo* method);
// 0x181de6bf0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344ab4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184344ab4 = '\x01';
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
// 0x181de6780

void Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344ab5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"slider");
    il2cpp_codegen_initialize_runtime_metadata(&"MuteText");
    il2cpp_codegen_initialize_runtime_metadata(&"Mute emotes");
    il2cpp_codegen_initialize_runtime_metadata(&"MuteEmote");
    il2cpp_codegen_initialize_runtime_metadata(&"Voice volume");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-scoreboard-mute-emote");
    il2cpp_codegen_initialize_runtime_metadata(&"Mute voice");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-scoreboard-mute-voice");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup.MutePopup.VoiceVolume");
    il2cpp_codegen_initialize_runtime_metadata(&"MuteVoice");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-scoreboard-mute-volume");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-scoreboard-mute-text");
    il2cpp_codegen_initialize_runtime_metadata(&"Mute text");
    Il2CppMethodInitialized_184344ab5 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog__MuteRow
            (body,"ingame-scoreboard-mute-emote","MuteEmote","Mute emotes",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog__MuteRow
            (body,"ingame-scoreboard-mute-text","MuteText","Mute text",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog__MuteRow
            (body,"ingame-scoreboard-mute-voice","MuteVoice","Mute voice",(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (body,"ScoreboardPopup.MutePopup.VoiceVolume","Voice volume","inGameInfo",(System_String_o *)0x0,
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Slider
              (body,"ingame-scoreboard-mute-volume",1.0,true,(System_String_o *)0x0,"slider",0.0,1.0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgScoreboardMuteDialog$$MuteRow
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog__MuteRow (Gisketch_Aottg2UI_Code_AottgUi_o* body, System_String_o* id, System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x181de6a00

void Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog__MuteRow
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,System_String_o *id,System_String_o *key,
               System_String_o *fallback,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog___c__DisplayClass12_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184344ab6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog_c__DisplayClass12_0_MuteRow_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog_c__DisplayClass12_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_184344ab6 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog_c__DisplayClass12_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog___c__DisplayClass12_0_o *)0x0) {
    (object->fields).key = key;
    Il2CppCodeGenWriteBarrier(&(object->fields).key,key);
    (object->fields).fallback = fallback;
    Il2CppCodeGenWriteBarrier(&(object->fields).fallback,fallback);
    (object->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(object->fields).id,id);
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog_c__DisplayClass12_0_MuteRow_b__0,
               (MethodInfo *)0x0);
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
                (body,"clear",(System_Action_AottgUi__o *)__this,(System_String_o *)0x0,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgScoreboardMuteDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x181de6940

void Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344ab7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.player.mute.confirm");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.popup.back");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Confirm");
    Il2CppMethodInitialized_184344ab7 = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
              (footer,"Common.Cancel","Cancel","ingame.popup.back",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey
              (footer,"Common.Confirm","Confirm","ingame.player.mute.confirm",(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgScoreboardMuteDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog___ctor (Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog_o* __this, const MethodInfo* method);
// 0x1805386d0

void
Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog___ctor(Gisketch_Aottg2UI_Game_AottgScoreboardMuteDialog_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}


