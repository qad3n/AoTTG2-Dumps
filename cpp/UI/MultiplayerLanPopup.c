// Type: UI.MultiplayerLanPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MultiplayerLanPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/MultiplayerLanPopup.cs
// --------------------------------

// UI.MultiplayerLanPopup$$get_Title
// il2cpp: System_String_o* UI_MultiplayerLanPopup__get_Title (UI_MultiplayerLanPopup_o* __this, const MethodInfo* method);
// 0x440a100

System_String_o * UI_MultiplayerLanPopup__get_Title(UI_MultiplayerLanPopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae5ba == '\0') {
    il2cpp_runtime_helper_023445d0(&"LAN");
    g_data_057ae5ba = '\x01';
  }
  return "LAN";
}


// UI.MultiplayerLanPopup$$get_Width
// il2cpp: float UI_MultiplayerLanPopup__get_Width (UI_MultiplayerLanPopup_o* __this, const MethodInfo* method);
// 0x440a130

float UI_MultiplayerLanPopup__get_Width(UI_MultiplayerLanPopup_o *__this,MethodInfo *method)

{
  return 400.0;
}


// UI.MultiplayerLanPopup$$get_Height
// il2cpp: float UI_MultiplayerLanPopup__get_Height (UI_MultiplayerLanPopup_o* __this, const MethodInfo* method);
// 0x440a140

float UI_MultiplayerLanPopup__get_Height(UI_MultiplayerLanPopup_o *__this,MethodInfo *method)

{
  return 410.0;
}


// UI.MultiplayerLanPopup$$get_PanelAlignment
// il2cpp: int32_t UI_MultiplayerLanPopup__get_PanelAlignment (UI_MultiplayerLanPopup_o* __this, const MethodInfo* method);
// 0x440a150

int32_t UI_MultiplayerLanPopup__get_PanelAlignment(UI_MultiplayerLanPopup_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.MultiplayerLanPopup$$Setup
// il2cpp: void UI_MultiplayerLanPopup__Setup (UI_MultiplayerLanPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x440a160

void UI_MultiplayerLanPopup__Setup(UI_MultiplayerLanPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int iVar1;
  Settings_BoolSetting_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  System_String_o *pSVar4;
  long lVar5;
  Settings_MultiplayerSettings_o *__this_00;
  UnityEngine_Transform_c *pUVar6;
  undefined8 uVar7;
  int32_t iVar8;
  bool_conflict bVar9;
  Settings_MultiplayerSettings_o *__this_01;
  System_Net_NetworkCredential_o *pSVar10;
  Settings_StringSetting_o *pSVar11;
  System_String_o *pSVar12;
  UI_ElementStyle_o *__this_02;
  UI_ElementStyle_o *__this_03;
  System_String_o *pSVar13;
  UnityEngine_Events_UnityAction_o *pUVar14;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Settings_MultiplayerSettings_o *__this_04;
  long *plVar15;
  UnityEngine_Transform_o *pUVar16;
  UI_TooltipPopup_o *__this_05;
  
  if (g_data_057ae5bb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__8_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__8_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"MainMenu");
    il2cpp_runtime_helper_023445d0(&"Supports Accounts");
    il2cpp_runtime_helper_023445d0(&"Connect");
    il2cpp_runtime_helper_023445d0(&"Enable this if the LAN server supports account authentication.");
    il2cpp_runtime_helper_023445d0(&"MultiplayerLanPopup");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Password (optional)");
    il2cpp_runtime_helper_023445d0(&"IP");
    il2cpp_runtime_helper_023445d0(&"Port");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae5bb = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  pSVar4 = "MultiplayerLanPopup";
  pSVar13 = "MainMenu";
  lVar5 = **(long **)(TypeInfo_SettingsManager + 0xb8);
  iVar8 = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                    (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar12 = (System_String_o *)
            (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_02 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_02,iVar8,120.0,20.0,pSVar12,(MethodInfo *)0x0);
  pSVar12 = (System_String_o *)
            (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_03 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_03,0x18,120.0,20.0,pSVar12,(MethodInfo *)0x0);
  pUVar16 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar13 = UI_UIManager__GetLocale(pSVar13,pSVar4,"Connect","","",(MethodInfo *)0x0);
  pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar16,__this_02,pSVar13,0.0,pUVar14,(MethodInfo *)0x0);
  pUVar16 = (__this->fields).BottomBar;
  pSVar13 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar16,__this_02,pSVar13,0.0,pUVar14,(MethodInfo *)0x0);
  if (lVar5 != 0) {
    UI_ElementFactory__CreateInputSetting
              ((__this->fields).SinglePanel,__this_03,*(Settings_BaseSetting_o **)(lVar5 + 0x40),"IP",
               "",200.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
               (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
               (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    UI_ElementFactory__CreateInputSetting
              ((__this->fields).SinglePanel,__this_03,*(Settings_BaseSetting_o **)(lVar5 + 0x48),"Port",
               "",200.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
               (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
               (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    UI_ElementFactory__CreateInputSetting
              ((__this->fields).SinglePanel,__this_03,*(Settings_BaseSetting_o **)(lVar5 + 0x50),"Password (optional)",
               "",200.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
               (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
               (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    UI_ElementFactory__CreateToggleSetting
              ((__this->fields).SinglePanel,__this_03,*(Settings_BaseSetting_o **)(lVar5 + 0x58),"Supports Accounts",
               "Enable this if the LAN server supports account authentication.",30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5bc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&"Connect");
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae5bc = '\x01';
  }
  plVar15 = (long *)**(long **)(TypeInfo_SettingsManager + 0xb8);
  if (plVar15 == (long *)0x0) {
label_0440a617:
    __this_05 = (UI_TooltipPopup_o *)0x0;
    il2cpp_runtime_helper_022b2c90();
    UI_PromptPopup___ctor(__this_05,(MethodInfo *)0x0);
    return;
  }
  (**(code **)(*plVar15 + 0x238))(plVar15,*(undefined8 *)(*plVar15 + 0x240));
  bVar9 = System_String__op_Equality((System_String_o *)__this_02,"Connect",(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    bVar9 = System_String__op_Equality((System_String_o *)__this_02,"Back",(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      return;
    }
    pUVar6 = pUVar16->klass;
    uVar7._0_4_ = pUVar6[1]._2.token;
    uVar7._4_2_ = pUVar6[1]._2.method_count;
    uVar7._6_2_ = pUVar6[1]._2.property_count;
    (**(code **)&pUVar6[1]._2.thread_static_fields_offset)(pUVar16,uVar7);
    return;
  }
  __this_00 = (Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8);
  if (__this_00 == (Settings_MultiplayerSettings_o *)0x0) goto label_0440a617;
  method_01 = (MethodInfo *)0x0;
  __this_04 = __this_00;
  if (g_data_057ad87a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AuthenticationValues);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    __this_04 = (Settings_MultiplayerSettings_o *)&"token";
    il2cpp_runtime_helper_023445d0();
    g_data_057ad87a = '\x01';
  }
  Settings_MultiplayerSettings__Disconnect(__this_04,method_01);
  pSVar2 = (__this_00->fields).LanSupportsAccounts;
  if (pSVar2 == (Settings_BoolSetting_o *)0x0) goto label_041f8200;
  if (*(char *)((long)&(pSVar2->fields).DefaultValue + 1) == '\0') {
label_041f8085:
    pSVar11 = (__this_00->fields).LanIP;
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      __this_04 = (Settings_MultiplayerSettings_o *)0x0;
      bVar9 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
      if ((char)bVar9 != '\0') goto label_041f7f51;
      goto label_041f8085;
    }
    __this_04 = (Settings_MultiplayerSettings_o *)0x0;
    bVar9 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    if ((char)bVar9 == '\0') goto label_041f8085;
label_041f7f51:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ad90d != '\0') goto label_041f7f6e;
label_041f8153:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ad90d = '\x01';
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    else {
      if (g_data_057ad90d == '\0') goto label_041f8153;
label_041f7f6e:
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_04 = *(Settings_MultiplayerSettings_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x28);
    method_01 = (MethodInfo *)0x0;
    bVar9 = System_String__IsNullOrEmpty((System_String_o *)__this_04,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') goto label_041f8085;
    __this_01 = (Settings_MultiplayerSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AuthenticationValues);
    method_01 = (MethodInfo *)0x0;
    __this_04 = __this_01;
    Photon_Realtime_AuthenticationValues___ctor
              ((Photon_Realtime_AuthenticationValues_o *)__this_01,(MethodInfo *)0x0);
    if (__this_01 == (Settings_MultiplayerSettings_o *)0x0) goto label_041f8200;
    *(undefined1 *)&(__this_01->fields).Settings = 0;
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar13 = ApplicationManagers_AccountManager__get_PhotonUserId((MethodInfo *)0x0);
    bVar9 = System_String__IsNullOrEmpty(pSVar13,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar11 = (Settings_StringSetting_o *)
                ApplicationManagers_AccountManager__get_PhotonUserId((MethodInfo *)0x0);
      (__this_01->fields).CustomLobby = pSVar11;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields).CustomLobby,pSVar11);
      if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_041f7ffc;
label_041f81be:
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ad90d != '\0') goto label_041f8009;
label_041f81d0:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ad90d = '\x01';
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    else {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_041f81be;
label_041f7ffc:
      if (g_data_057ad90d == '\0') goto label_041f81d0;
label_041f8009:
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    (*(__this_01->klass->vtable)._7_SerializeToJsonString.methodPtr)
              (__this_01,"token",*(undefined8 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x28),
               (__this_01->klass->vtable)._7_SerializeToJsonString.method);
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_01 = (MethodInfo *)0x0;
    Photon_Pun_PhotonNetwork__set_AuthValues
              ((Photon_Realtime_AuthenticationValues_o *)__this_01,(MethodInfo *)0x0);
    pSVar11 = (__this_00->fields).LanIP;
    __this_04 = __this_01;
  }
  if ((pSVar11 != (Settings_StringSetting_o *)0x0) &&
     (pSVar3 = (__this_00->fields).LanPort, pSVar3 != (Settings_IntSetting_o *)0x0)) {
    pSVar13 = (pSVar11->fields)._value;
    iVar8 = (pSVar3->fields)._value;
    pSVar4 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar9 = Photon_Pun_PhotonNetwork__ConnectToMaster(pSVar13,iVar8,pSVar4,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      method_00 = extraout_RDX;
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        method_00 = extraout_RDX_00;
      }
      lVar5 = **(long **)(TypeInfo_PhotonNetwork + 0xb8);
      method_01 = (MethodInfo *)0x0;
      __this_04 = __this_00;
      pSVar10 = Settings_MultiplayerSettings__GetCurrentLobby(__this_00,0,method_00);
      if (lVar5 == 0) goto label_041f8200;
      *(System_Net_NetworkCredential_o **)(lVar5 + 0x18) = pSVar10;
      il2cpp_runtime_helper_022b4080(lVar5 + 0x18,pSVar10);
      (__this_00->fields).CurrentMultiplayerServerType = 0;
    }
    return;
  }
label_041f8200:
  il2cpp_runtime_helper_022b2c90();
  plVar15 = (long *)__this_04;
  if (g_data_057ad87b == '\0') {
    plVar15 = &TypeInfo_PhotonNetwork;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad87b = '\x01';
  }
  Settings_MultiplayerSettings__Disconnect((Settings_MultiplayerSettings_o *)plVar15,method_01);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Photon_Pun_PhotonNetwork__set_OfflineMode(1,(MethodInfo *)0x0);
  (__this_04->fields).CurrentMultiplayerServerType = 1;
  return;
}


// UI.MultiplayerLanPopup$$OnButtonClick
// il2cpp: void UI_MultiplayerLanPopup__OnButtonClick (UI_MultiplayerLanPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x440a540

void UI_MultiplayerLanPopup__OnButtonClick
               (UI_MultiplayerLanPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  int iVar1;
  int32_t port;
  Settings_BoolSetting_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  System_String_o *appID;
  long lVar4;
  Settings_MultiplayerSettings_o *__this_00;
  bool_conflict bVar5;
  Settings_MultiplayerSettings_o *__this_01;
  System_String_o *pSVar6;
  System_Net_NetworkCredential_o *pSVar7;
  Settings_StringSetting_o *pSVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_01;
  Settings_MultiplayerSettings_o *__this_02;
  long *plVar9;
  UI_TooltipPopup_o *__this_03;
  
  if (g_data_057ae5bc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&"Connect");
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae5bc = '\x01';
    method = extraout_RDX_01;
  }
  plVar9 = (long *)**(long **)(TypeInfo_SettingsManager + 0xb8);
  if (plVar9 == (long *)0x0) {
label_0440a617:
    __this_03 = (UI_TooltipPopup_o *)0x0;
    il2cpp_runtime_helper_022b2c90();
    UI_PromptPopup___ctor(__this_03,(MethodInfo *)0x0);
    return;
  }
  (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240),method);
  bVar5 = System_String__op_Equality(name,"Connect",(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    bVar5 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      return;
    }
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  __this_00 = (Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8);
  if (__this_00 == (Settings_MultiplayerSettings_o *)0x0) goto label_0440a617;
  method_01 = (MethodInfo *)0x0;
  __this_02 = __this_00;
  if (g_data_057ad87a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AuthenticationValues);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    __this_02 = (Settings_MultiplayerSettings_o *)&"token";
    il2cpp_runtime_helper_023445d0();
    g_data_057ad87a = '\x01';
  }
  Settings_MultiplayerSettings__Disconnect(__this_02,method_01);
  pSVar2 = (__this_00->fields).LanSupportsAccounts;
  if (pSVar2 == (Settings_BoolSetting_o *)0x0) goto label_041f8200;
  if (*(char *)((long)&(pSVar2->fields).DefaultValue + 1) == '\0') {
label_041f8085:
    pSVar8 = (__this_00->fields).LanIP;
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      __this_02 = (Settings_MultiplayerSettings_o *)0x0;
      bVar5 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
      if ((char)bVar5 != '\0') goto label_041f7f51;
      goto label_041f8085;
    }
    __this_02 = (Settings_MultiplayerSettings_o *)0x0;
    bVar5 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    if ((char)bVar5 == '\0') goto label_041f8085;
label_041f7f51:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ad90d != '\0') goto label_041f7f6e;
label_041f8153:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ad90d = '\x01';
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    else {
      if (g_data_057ad90d == '\0') goto label_041f8153;
label_041f7f6e:
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_02 = *(Settings_MultiplayerSettings_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x28);
    method_01 = (MethodInfo *)0x0;
    bVar5 = System_String__IsNullOrEmpty((System_String_o *)__this_02,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') goto label_041f8085;
    __this_01 = (Settings_MultiplayerSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AuthenticationValues);
    method_01 = (MethodInfo *)0x0;
    __this_02 = __this_01;
    Photon_Realtime_AuthenticationValues___ctor
              ((Photon_Realtime_AuthenticationValues_o *)__this_01,(MethodInfo *)0x0);
    if (__this_01 == (Settings_MultiplayerSettings_o *)0x0) goto label_041f8200;
    *(undefined1 *)&(__this_01->fields).Settings = 0;
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = ApplicationManagers_AccountManager__get_PhotonUserId((MethodInfo *)0x0);
    bVar5 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar8 = (Settings_StringSetting_o *)
               ApplicationManagers_AccountManager__get_PhotonUserId((MethodInfo *)0x0);
      (__this_01->fields).CustomLobby = pSVar8;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields).CustomLobby,pSVar8);
      if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_041f7ffc;
label_041f81be:
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ad90d != '\0') goto label_041f8009;
label_041f81d0:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ad90d = '\x01';
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    else {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_041f81be;
label_041f7ffc:
      if (g_data_057ad90d == '\0') goto label_041f81d0;
label_041f8009:
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    (*(__this_01->klass->vtable)._7_SerializeToJsonString.methodPtr)
              (__this_01,"token",*(undefined8 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x28),
               (__this_01->klass->vtable)._7_SerializeToJsonString.method);
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_01 = (MethodInfo *)0x0;
    Photon_Pun_PhotonNetwork__set_AuthValues
              ((Photon_Realtime_AuthenticationValues_o *)__this_01,(MethodInfo *)0x0);
    pSVar8 = (__this_00->fields).LanIP;
    __this_02 = __this_01;
  }
  if ((pSVar8 != (Settings_StringSetting_o *)0x0) &&
     (pSVar3 = (__this_00->fields).LanPort, pSVar3 != (Settings_IntSetting_o *)0x0)) {
    pSVar6 = (pSVar8->fields)._value;
    port = (pSVar3->fields)._value;
    appID = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = Photon_Pun_PhotonNetwork__ConnectToMaster(pSVar6,port,appID,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      method_00 = extraout_RDX;
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        method_00 = extraout_RDX_00;
      }
      lVar4 = **(long **)(TypeInfo_PhotonNetwork + 0xb8);
      method_01 = (MethodInfo *)0x0;
      __this_02 = __this_00;
      pSVar7 = Settings_MultiplayerSettings__GetCurrentLobby(__this_00,0,method_00);
      if (lVar4 == 0) goto label_041f8200;
      *(System_Net_NetworkCredential_o **)(lVar4 + 0x18) = pSVar7;
      il2cpp_runtime_helper_022b4080(lVar4 + 0x18,pSVar7);
      (__this_00->fields).CurrentMultiplayerServerType = 0;
    }
    return;
  }
label_041f8200:
  il2cpp_runtime_helper_022b2c90();
  plVar9 = (long *)__this_02;
  if (g_data_057ad87b == '\0') {
    plVar9 = &TypeInfo_PhotonNetwork;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad87b = '\x01';
  }
  Settings_MultiplayerSettings__Disconnect((Settings_MultiplayerSettings_o *)plVar9,method_01);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Photon_Pun_PhotonNetwork__set_OfflineMode(1,(MethodInfo *)0x0);
  (__this_02->fields).CurrentMultiplayerServerType = 1;
  return;
}


// UI.MultiplayerLanPopup$$.ctor
// il2cpp: void UI_MultiplayerLanPopup___ctor (UI_MultiplayerLanPopup_o* __this, const MethodInfo* method);
// 0x440a620

void UI_MultiplayerLanPopup___ctor(UI_MultiplayerLanPopup_o *__this,MethodInfo *method)

{
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerLanPopup$$<Setup>b__8_0
// il2cpp: void UI_MultiplayerLanPopup___Setup_b__8_0 (UI_MultiplayerLanPopup_o* __this, const MethodInfo* method);
// 0x440a630

void UI_MultiplayerLanPopup___Setup_b__8_0(UI_MultiplayerLanPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae5bd == '\0') {
    il2cpp_runtime_helper_023445d0(&"Connect");
    g_data_057ae5bd = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MultiplayerLanPopup__OnButtonClick(__this,"Connect",in_RDX);
  return;
}


// UI.MultiplayerLanPopup$$<Setup>b__8_1
// il2cpp: void UI_MultiplayerLanPopup___Setup_b__8_1 (UI_MultiplayerLanPopup_o* __this, const MethodInfo* method);
// 0x440a670

void UI_MultiplayerLanPopup___Setup_b__8_1(UI_MultiplayerLanPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae5be == '\0') {
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae5be = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MultiplayerLanPopup__OnButtonClick(__this,"Back",in_RDX);
  return;
}


