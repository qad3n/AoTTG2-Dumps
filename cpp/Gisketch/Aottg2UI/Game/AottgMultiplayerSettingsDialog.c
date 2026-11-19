// Type: Gisketch.Aottg2UI.Game.AottgMultiplayerSettingsDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgMultiplayerSettingsDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgMultiplayerSettingsDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog__get_Title (Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog_o* __this, const MethodInfo* method);
// 0x58c7c40

System_String_o *
Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_0754541e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"MultiplayerSettingsPopup");
    Il2CppMethodInitialized_0754541e = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgMultiplayerRows__Key
                     ("MainMenu","MultiplayerSettingsPopup","Title",in_RCX);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,(MethodInfo *)0x0);
    return pSVar1;
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgMultiplayerSettingsDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog__get_BodyScrollable (Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog_o* __this, const MethodInfo* method);
// 0x58c7ce0

bool Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog__get_BodyScrollable
               (Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog_o *__this,MethodInfo *method)

{
  return false;
}


// Gisketch.Aottg2UI.Game.AottgMultiplayerSettingsDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog_o* __this, const MethodInfo* method);
// 0x58c7cf0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_0754541f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_0754541f = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(920.0,(MethodInfo *)0x0);
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


// Gisketch.Aottg2UI.Game.AottgMultiplayerSettingsDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x58c7db0

void Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_String_o *pSVar2;
  Settings_MultiplayerSettings_o *pSVar3;
  Gisketch_Aottg2UI_Code_AottgComponent_o *pGVar4;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter_o *pGVar6;
  MethodInfo *pMVar7;
  MethodInfo *method_00;
  MethodInfo *in_R9;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  if (Il2CppMethodInitialized_07545420 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MultiplayerSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"multiplayer-settings-custom-lobby");
    il2cpp_codegen_initialize_runtime_metadata(&"multiplayer-settings-lobby");
    il2cpp_codegen_initialize_runtime_metadata(&"Lobby");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickPlayRegion");
    il2cpp_codegen_initialize_runtime_metadata(&"LobbyCustom");
    il2cpp_codegen_initialize_runtime_metadata(&"multiplayer-settings-quick-play-region");
    il2cpp_codegen_initialize_runtime_metadata(&"MultiplayerSettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"AppId");
    il2cpp_codegen_initialize_runtime_metadata(&"multiplayer-settings-custom-app-id");
    il2cpp_codegen_initialize_runtime_metadata(&"AppIdCustom");
    il2cpp_codegen_initialize_runtime_metadata(&"multiplayer-settings-app-id");
    Il2CppMethodInitialized_07545420 = '\x01';
  }
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_MultiplayerSettings);
  Settings_MultiplayerSettings___ctor(pSVar3,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog->static_fields->_draft = pSVar3;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog->static_fields->_draft);
  pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog->static_fields->_draft;
  if (pSVar3 != (Settings_MultiplayerSettings_o *)0x0) {
    (*(pSVar3->klass->vtable)._10_Copy.methodPtr)
              (pSVar3,(Settings_BaseSetting_o *)
                      TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings,
               (pSVar3->klass->vtable)._10_Copy.method);
    pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog->static_fields->_draft;
    if (pSVar3 != (Settings_MultiplayerSettings_o *)0x0) {
      pGVar4 = Gisketch_Aottg2UI_Game_AottgMultiplayerRows__Select
                         ("multiplayer-settings-quick-play-region","MainMenu","MultiplayerSettingsPopup",
                          "QuickPlayRegion",(pSVar3->fields).QuickPlayRegion,in_R9);
      if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Component(body,pGVar4,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__Separator
                  (body,(System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                   (MethodInfo *)0x0);
        pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog->static_fields->_draft;
        if (pSVar3 != (Settings_MultiplayerSettings_o *)0x0) {
          pMVar7 = (MethodInfo *)"Lobby";
          pGVar4 = Gisketch_Aottg2UI_Game_AottgMultiplayerRows__Select
                             ("multiplayer-settings-lobby","MainMenu","MultiplayerSettingsPopup",
                              "Lobby",(pSVar3->fields).LobbyMode,in_R9);
          Gisketch_Aottg2UI_Code_AottgUi__Component(body,pGVar4,(MethodInfo *)0x0);
          pSVar5 = Gisketch_Aottg2UI_Game_AottgMultiplayerRows__Key
                             ("MainMenu","MultiplayerSettingsPopup","LobbyCustom",pMVar7);
          pSVar2 = "multiplayer-settings-custom-lobby";
          pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog->static_fields->_draft;
          if (pSVar3 != (Settings_MultiplayerSettings_o *)0x0) {
            pSVar1 = (pSVar3->fields).CustomLobby;
            if (Il2CppMethodInitialized_07545417 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter);
              Il2CppMethodInitialized_07545417 = '\x01';
            }
            pGVar6 = il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter);
            Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter___ctor(pGVar6,pSVar1,(MethodInfo *)0x0)
            ;
            pMVar7 = (MethodInfo *)0x0;
            pGVar4 = Gisketch_Aottg2UI_Game_AottgMultiplayerRows__Row
                               (pSVar2,pSVar5,4,
                                (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)pGVar6,
                                (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                                (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffc0);
            Gisketch_Aottg2UI_Code_AottgUi__Component(body,pGVar4,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Code_AottgUi__Separator
                      (body,(System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                       (MethodInfo *)0x0);
            pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog->static_fields->_draft;
            if (pSVar3 != (Settings_MultiplayerSettings_o *)0x0) {
              method_00 = (MethodInfo *)"AppId";
              pGVar4 = Gisketch_Aottg2UI_Game_AottgMultiplayerRows__Select
                                 ("multiplayer-settings-app-id","MainMenu","MultiplayerSettingsPopup",
                                  "AppId",(pSVar3->fields).AppIdMode,pMVar7);
              Gisketch_Aottg2UI_Code_AottgUi__Component(body,pGVar4,(MethodInfo *)0x0);
              pSVar5 = Gisketch_Aottg2UI_Game_AottgMultiplayerRows__Key
                                 ("MainMenu","MultiplayerSettingsPopup","AppIdCustom",method_00)
              ;
              pSVar2 = "multiplayer-settings-custom-app-id";
              pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog->static_fields->_draft;
              if (pSVar3 != (Settings_MultiplayerSettings_o *)0x0) {
                pSVar1 = (pSVar3->fields).CustomAppId;
                if (Il2CppMethodInitialized_07545417 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter);
                  Il2CppMethodInitialized_07545417 = '\x01';
                }
                pGVar6 = il2cpp_codegen_object_new
                                   ((Il2CppClass *)
                                    TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter);
                Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter___ctor
                          (pGVar6,pSVar1,(MethodInfo *)0x0);
                pGVar4 = Gisketch_Aottg2UI_Game_AottgMultiplayerRows__Row
                                   (pSVar2,pSVar5,4,
                                    (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)pGVar6,
                                    (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                                    (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffc0);
                Gisketch_Aottg2UI_Code_AottgUi__Component(body,pGVar4,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMultiplayerSettingsDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x58c8190

void Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  System_Action_GisketchActionContext__o *__this_00;
  
  if (Il2CppMethodInitialized_07545421 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog_Save);
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Save");
    Il2CppMethodInitialized_07545421 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor
            (__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog_Save,
             (MethodInfo_4A803E0 *)0x0);
  if (footer == (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey_52658f0
            (footer,"Common.Save",__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMultiplayerSettingsDialog$$Save
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog__Save (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x58c8220

void Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog__Save
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Settings_MultiplayerSettings_o *method_00;
  
  if (Il2CppMethodInitialized_07545422 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07545422 = '\x01';
  }
  method_00 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
  if (method_00 != (Settings_MultiplayerSettings_o *)0x0) {
    (*(method_00->klass->vtable)._10_Copy.methodPtr)
              (method_00,
               (Settings_BaseSetting_o *)
               TypeInfo_Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog->static_fields->_draft,
               (method_00->klass->vtable)._10_Copy.method);
    (*(method_00->klass->vtable)._18_Save.methodPtr)(method_00,(method_00->klass->vtable)._18_Save.method);
    Gisketch_Aottg2UI_Game_AottgCustomServerWarning__Sync((MethodInfo *)method_00);
    pGVar1 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_Root((MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      __this = (pGVar1->fields)._Overlays_k__BackingField;
      if (__this == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
        return;
      }
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(__this,true,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMultiplayerSettingsDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog___ctor (Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog_o* __this, const MethodInfo* method);
// 0x58c82d0

void Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


