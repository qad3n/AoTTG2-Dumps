// Type: Gisketch.Aottg2UI.Game.AottgDirectConnectDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgDirectConnectDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgDirectConnectDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgDirectConnectDialog__get_Title (Gisketch_Aottg2UI_Game_AottgDirectConnectDialog_o* __this, const MethodInfo* method);
// 0x58c6d30

System_String_o *
Gisketch_Aottg2UI_Game_AottgDirectConnectDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgDirectConnectDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07545411 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.MultiplayerLanPopup.Title");
    Il2CppMethodInitialized_07545411 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("MainMenu.MultiplayerLanPopup.Title",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgDirectConnectDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgDirectConnectDialog__get_BodyScrollable (Gisketch_Aottg2UI_Game_AottgDirectConnectDialog_o* __this, const MethodInfo* method);
// 0x58c6d90

bool Gisketch_Aottg2UI_Game_AottgDirectConnectDialog__get_BodyScrollable
               (Gisketch_Aottg2UI_Game_AottgDirectConnectDialog_o *__this,MethodInfo *method)

{
  return false;
}


// Gisketch.Aottg2UI.Game.AottgDirectConnectDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgDirectConnectDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgDirectConnectDialog_o* __this, const MethodInfo* method);
// 0x58c6da0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgDirectConnectDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgDirectConnectDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07545412 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_07545412 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgDirectConnectDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDirectConnectDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgDirectConnectDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x58c6e60

void Gisketch_Aottg2UI_Game_AottgDirectConnectDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgDirectConnectDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Settings_MultiplayerSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_IntSetting_o *setting;
  Settings_BoolSetting_o *setting_00;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *id;
  System_Action_GisketchActionContext__o *pSVar5;
  Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter_o *pGVar6;
  Gisketch_Aottg2UI_Code_AottgComponent_o *pGVar7;
  Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o *__this_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o *__this_01;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  if (Il2CppMethodInitialized_07545413 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgDirectConnectDialog_Save);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"multiplayer-direct-connect-description");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.MultiplayerLanPopup.IP");
    il2cpp_codegen_initialize_runtime_metadata(&"multiplayer-direct-connect-port");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.MultiplayerLanPopup.SupportsAccounts");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.MultiplayerLanPopup.Description");
    il2cpp_codegen_initialize_runtime_metadata(&"multiplayer-direct-connect-password");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.MultiplayerLanPopup.Port");
    il2cpp_codegen_initialize_runtime_metadata(&"multiplayer-direct-connect-ip");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.MultiplayerLanPopup.SupportsAccountsTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.MultiplayerLanPopup.PasswordOptional");
    il2cpp_codegen_initialize_runtime_metadata(&"multiplayer-direct-connect-accounts");
    Il2CppMethodInitialized_07545413 = '\x01';
  }
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (body,"MainMenu.MultiplayerLanPopup.Description","text","multiplayer-direct-connect-description",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pSVar1 != (Settings_MultiplayerSettings_o *)0x0) {
      pSVar2 = (pSVar1->fields).LanIP;
      pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor
                (pSVar5,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgDirectConnectDialog_Save,
                 (MethodInfo_4A803E0 *)0x0);
      pSVar4 = "multiplayer-direct-connect-ip";
      pSVar3 = "MainMenu.MultiplayerLanPopup.IP";
      if (Il2CppMethodInitialized_07545417 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter);
        Il2CppMethodInitialized_07545417 = '\x01';
      }
      pGVar6 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter);
      Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter___ctor(pGVar6,pSVar2,(MethodInfo *)0x0);
      pGVar7 = Gisketch_Aottg2UI_Game_AottgMultiplayerRows__Row
                         (pSVar4,pSVar3,4,(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)pGVar6,
                          (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,pSVar5,
                          in_stack_ffffffffffffffc0);
      Gisketch_Aottg2UI_Code_AottgUi__Component(body,pGVar7,(MethodInfo *)0x0);
      setting = (pSVar1->fields).LanPort;
      pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor
                (pSVar5,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgDirectConnectDialog_Save,
                 (MethodInfo_4A803E0 *)0x0);
      pSVar4 = "multiplayer-direct-connect-port";
      pSVar3 = "MainMenu.MultiplayerLanPopup.Port";
      if (Il2CppMethodInitialized_07545418 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter);
        Il2CppMethodInitialized_07545418 = '\x01';
      }
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter);
      Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter___ctor(__this_00,setting,(MethodInfo *)0x0);
      pGVar7 = Gisketch_Aottg2UI_Game_AottgMultiplayerRows__Row
                         (pSVar4,pSVar3,4,(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this_00
                          ,(System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,pSVar5,
                          in_stack_ffffffffffffffc0);
      Gisketch_Aottg2UI_Code_AottgUi__Component(body,pGVar7,(MethodInfo *)0x0);
      pSVar2 = (pSVar1->fields).LanPassword;
      pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor
                (pSVar5,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgDirectConnectDialog_Save,
                 (MethodInfo_4A803E0 *)0x0);
      pSVar4 = "multiplayer-direct-connect-password";
      pSVar3 = "MainMenu.MultiplayerLanPopup.PasswordOptional";
      if (Il2CppMethodInitialized_07545417 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter);
        Il2CppMethodInitialized_07545417 = '\x01';
      }
      pGVar6 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter);
      Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter___ctor(pGVar6,pSVar2,(MethodInfo *)0x0);
      pGVar7 = Gisketch_Aottg2UI_Game_AottgMultiplayerRows__Row
                         (pSVar4,pSVar3,4,(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)pGVar6,
                          (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,pSVar5,
                          in_stack_ffffffffffffffc0);
      Gisketch_Aottg2UI_Code_AottgUi__Component(body,pGVar7,(MethodInfo *)0x0);
      setting_00 = (pSVar1->fields).LanSupportsAccounts;
      pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor
                (pSVar5,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgDirectConnectDialog_Save,
                 (MethodInfo_4A803E0 *)0x0);
      id = "multiplayer-direct-connect-accounts";
      pSVar4 = "MainMenu.MultiplayerLanPopup.SupportsAccountsTooltip";
      pSVar3 = "MainMenu.MultiplayerLanPopup.SupportsAccounts";
      if (Il2CppMethodInitialized_07545419 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter);
        Il2CppMethodInitialized_07545419 = '\x01';
      }
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter)
      ;
      Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter___ctor(__this_01,setting_00,(MethodInfo *)0x0);
      pGVar7 = Gisketch_Aottg2UI_Game_AottgMultiplayerRows__Row
                         (id,pSVar3,0,(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this_01,
                          pSVar4,pSVar5,(System_Action_GisketchActionContext__o *)0x0,
                          in_stack_ffffffffffffffc0);
      Gisketch_Aottg2UI_Code_AottgUi__Component(body,pGVar7,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgDirectConnectDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDirectConnectDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgDirectConnectDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x58c73f0

void Gisketch_Aottg2UI_Game_AottgDirectConnectDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgDirectConnectDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  System_Action_GisketchActionContext__o *pSVar1;
  
  if (Il2CppMethodInitialized_07545414 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgDirectConnectDialog_Back);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgDirectConnectDialog_Connect);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.MultiplayerLanPopup.Connect");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Back");
    Il2CppMethodInitialized_07545414 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor
            (pSVar1,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgDirectConnectDialog_Back,
             (MethodInfo_4A803E0 *)0x0);
  if (footer == (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey_5265c30
            (footer,"Common.Back",pSVar1,(MethodInfo *)0x0);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor
            (pSVar1,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgDirectConnectDialog_Connect,
             (MethodInfo_4A803E0 *)0x0);
  Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey_52658f0
            (footer,"MainMenu.MultiplayerLanPopup.Connect",pSVar1,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgDirectConnectDialog$$Save
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDirectConnectDialog__Save (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x58c74d0

void Gisketch_Aottg2UI_Game_AottgDirectConnectDialog__Save
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Settings_MultiplayerSettings_o *pSVar1;
  
  if (Il2CppMethodInitialized_07545415 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07545415 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
  if (pSVar1 == (Settings_MultiplayerSettings_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pSVar1->klass->vtable)._18_Save.methodPtr)(pSVar1,(pSVar1->klass->vtable)._18_Save.method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgDirectConnectDialog$$Back
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDirectConnectDialog__Back (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x58c7520

void Gisketch_Aottg2UI_Game_AottgDirectConnectDialog__Back
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Settings_MultiplayerSettings_o *pSVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  
  if (Il2CppMethodInitialized_07545415 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07545415 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
  if (pSVar1 != (Settings_MultiplayerSettings_o *)0x0) {
    (*(pSVar1->klass->vtable)._18_Save.methodPtr)(pSVar1,(pSVar1->klass->vtable)._18_Save.method);
    pGVar2 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_Root((MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      __this = (pGVar2->fields)._Overlays_k__BackingField;
      if (__this == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
        return;
      }
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(__this,true,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgDirectConnectDialog$$Connect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDirectConnectDialog__Connect (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x58c75a0

void Gisketch_Aottg2UI_Game_AottgDirectConnectDialog__Connect
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Settings_MultiplayerSettings_o *pSVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  Gisketch_Aottg2UI_Game_AottgQuickPlay_c *method_00;
  
  if (Il2CppMethodInitialized_07545416 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07545416 = '\x01';
  }
  if (Il2CppMethodInitialized_07545415 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07545415 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
  if (pSVar1 != (Settings_MultiplayerSettings_o *)0x0) {
    (*(pSVar1->klass->vtable)._18_Save.methodPtr)(pSVar1,(pSVar1->klass->vtable)._18_Save.method);
    pGVar2 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_Root((MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      __this = (pGVar2->fields)._Overlays_k__BackingField;
      if (__this != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(__this,true,(MethodInfo *)0x0);
      }
      method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
      }
      Gisketch_Aottg2UI_Game_AottgQuickPlay__Cancel((MethodInfo *)method_00);
      pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
      if (pSVar1 != (Settings_MultiplayerSettings_o *)0x0) {
        Settings_MultiplayerSettings__ConnectLAN(pSVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgDirectConnectDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDirectConnectDialog___ctor (Gisketch_Aottg2UI_Game_AottgDirectConnectDialog_o* __this, const MethodInfo* method);
// 0x58c7790

void Gisketch_Aottg2UI_Game_AottgDirectConnectDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgDirectConnectDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


