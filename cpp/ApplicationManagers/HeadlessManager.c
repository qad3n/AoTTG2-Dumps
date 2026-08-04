// Type: ApplicationManagers.HeadlessManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/HeadlessManager.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.HeadlessManager.<HostRoom>d__30$$.ctor
// il2cpp: void ApplicationManagers_HeadlessManager__HostRoom_d__30___ctor (ApplicationManagers_HeadlessManager__HostRoom_d__30_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x44b8e00

void ApplicationManagers_HeadlessManager__HostRoom_d__30___ctor
               (ApplicationManagers_HeadlessManager__HostRoom_d__30_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.HeadlessManager.<HostRoom>d__30$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_HeadlessManager__HostRoom_d__30__System_IDisposable_Dispose (ApplicationManagers_HeadlessManager__HostRoom_d__30_o* __this, const MethodInfo* method);
// 0x44b9870

void ApplicationManagers_HeadlessManager__HostRoom_d__30__System_IDisposable_Dispose
               (ApplicationManagers_HeadlessManager__HostRoom_d__30_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.HeadlessManager.<HostRoom>d__30$$MoveNext
// il2cpp: bool ApplicationManagers_HeadlessManager__HostRoom_d__30__MoveNext (ApplicationManagers_HeadlessManager__HostRoom_d__30_o* __this, const MethodInfo* method);
// 0x44b9880

bool_conflict
ApplicationManagers_HeadlessManager__HostRoom_d__30__MoveNext
          (ApplicationManagers_HeadlessManager__HostRoom_d__30_o *__this,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *arg0;
  Settings_TypedSetting_int__o *__this_00;
  bool_conflict bVar2;
  Settings_TypedSetting_T__o *presetName;
  long lVar3;
  Il2CppObject *arg1;
  System_String_o *message;
  UnityEngine_WaitForSeconds_o *__this_01;
  Settings_TypedSetting_T__o *pSVar4;
  undefined4 local_2c;
  
  if (g_data_057aea5b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitForSeconds);
    il2cpp_runtime_helper_023445d0(&"[Headless] Creating room \"{0}\" (max={1}) with preset \"{2}\"\xe2\x80\xa6");
    il2cpp_runtime_helper_023445d0(&"\" not found \xe2\x80\x93 using defaults.");
    il2cpp_runtime_helper_023445d0(&"[Headless] Preset \"");
    g_data_057aea5b = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (g_data_057aeb7f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
      g_data_057aeb7f = '\x01';
    }
    lVar3 = *(long *)(TypeInfo_HeadlessManager + 0xb8);
    arg0 = *(Il2CppObject **)(lVar3 + 0x10);
    if (g_data_057aeb80 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
      g_data_057aeb80 = '\x01';
      lVar3 = *(long *)(TypeInfo_HeadlessManager + 0xb8);
    }
    local_2c = *(undefined4 *)(lVar3 + 0x18);
    arg1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_2c);
    if (g_data_057aeb81 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
      g_data_057aeb81 = '\x01';
    }
    message = System_String__Format_3af7930
                        ("[Headless] Creating room \"{0}\" (max={1}) with preset \"{2}\"\xe2\x80\xa6",arg0,arg1,*(Il2CppObject **)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x20),
                         (MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
    presetName = (Settings_TypedSetting_T__o *)0x0;
    if ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8) ==
        (Settings_MultiplayerSettings_o *)0x0) goto label_044b9cff;
    Settings_MultiplayerSettings__StartRoom
              ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8),(MethodInfo *)0x0);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (g_data_057aeb81 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
      g_data_057aeb81 = '\x01';
    }
    presetName = *(Settings_TypedSetting_T__o **)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x20);
    bVar2 = ApplicationManagers_HeadlessManager__TryApplyPreset((System_String_o *)presetName,method);
    if ((char)bVar2 == '\0') {
      if (g_data_057aeb81 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
        g_data_057aeb81 = '\x01';
      }
      presetName = (Settings_TypedSetting_T__o *)
                   System_String__Concat_3af7150
                             ("[Headless] Preset \"",*(System_String_o **)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x20),
                              "\" not found \xe2\x80\x93 using defaults.",(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Debug__LogWarning((Il2CppObject *)presetName,(MethodInfo *)0x0);
    }
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x38), lVar3 != 0)) {
      pSVar4 = *(Settings_TypedSetting_T__o **)(lVar3 + 0x50);
      if (g_data_057aeb7f == '\0') {
        presetName = (Settings_TypedSetting_T__o *)&TypeInfo_HeadlessManager;
        il2cpp_runtime_helper_023445d0();
        g_data_057aeb7f = '\x01';
      }
      if (pSVar4 != (Settings_TypedSetting_T__o *)0x0) {
        Settings_TypedSetting_object___set_Value
                  (pSVar4,*(Il2CppObject **)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x10),MethodInfo_Void_set_Value);
        lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
        presetName = pSVar4;
        if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x38), lVar3 != 0)) {
          pSVar4 = *(Settings_TypedSetting_T__o **)(lVar3 + 0x50);
          if (g_data_057aeb7f == '\0') {
            presetName = (Settings_TypedSetting_T__o *)&TypeInfo_HeadlessManager;
            il2cpp_runtime_helper_023445d0();
            g_data_057aeb7f = '\x01';
          }
          if (pSVar4 != (Settings_TypedSetting_T__o *)0x0) {
            Settings_TypedSetting_object___set_Value
                      (pSVar4,*(Il2CppObject **)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x10),MethodInfo_Void_set_Value);
            if (g_data_057aeb80 == '\0') {
              presetName = (Settings_TypedSetting_T__o *)&TypeInfo_HeadlessManager;
              il2cpp_runtime_helper_023445d0();
              g_data_057aeb80 = '\x01';
              iVar1 = *(int *)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x18);
            }
            else {
              iVar1 = *(int *)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x18);
              presetName = pSVar4;
            }
            if (iVar1 < 1) {
label_044b9cb1:
              __this_01 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
              UnityEngine_WaitForSeconds___ctor(__this_01,0.5,(MethodInfo *)0x0);
              (__this->fields).__2__current = (Il2CppObject *)__this_01;
              il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_01);
              (__this->fields).__1__state = 1;
              return (bool_conflict)CONCAT71((int7)((ulong)__this_01 >> 8),1);
            }
            lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
            if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x38), lVar3 != 0)) &&
               (presetName = *(Settings_TypedSetting_T__o **)(lVar3 + 0x60),
               presetName != (Settings_TypedSetting_T__o *)0x0)) {
              Settings_TypedSetting_int___set_Value
                        ((Settings_TypedSetting_int__o *)presetName,
                         *(int32_t *)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x18),MethodInfo_Void_set_Value);
              lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
              if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x38), lVar3 != 0)) {
                __this_00 = *(Settings_TypedSetting_int__o **)(lVar3 + 0x60);
                if (g_data_057aeb80 == '\0') {
                  presetName = (Settings_TypedSetting_T__o *)&TypeInfo_HeadlessManager;
                  il2cpp_runtime_helper_023445d0();
                  g_data_057aeb80 = '\x01';
                }
                if (__this_00 != (Settings_TypedSetting_int__o *)0x0) {
                  Settings_TypedSetting_int___set_Value
                            (__this_00,*(int32_t *)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x18),MethodInfo_Void_set_Value);
                  goto label_044b9cb1;
                }
              }
            }
          }
        }
      }
    }
label_044b9cff:
    il2cpp_runtime_helper_022b2c90();
    return (bool_conflict)(presetName->fields)._value;
  }
  return 0;
}


// ApplicationManagers.HeadlessManager.<HostRoom>d__30$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_HeadlessManager__HostRoom_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_HeadlessManager__HostRoom_d__30_o* __this, const MethodInfo* method);
// 0x44b9d10

Il2CppObject *
ApplicationManagers_HeadlessManager__HostRoom_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_HeadlessManager__HostRoom_d__30_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.HeadlessManager.<HostRoom>d__30$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_HeadlessManager__HostRoom_d__30__System_Collections_IEnumerator_Reset (ApplicationManagers_HeadlessManager__HostRoom_d__30_o* __this, const MethodInfo* method);
// 0x44b9d20

void ApplicationManagers_HeadlessManager__HostRoom_d__30__System_Collections_IEnumerator_Reset
               (ApplicationManagers_HeadlessManager__HostRoom_d__30_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// ApplicationManagers.HeadlessManager.<HostRoom>d__30$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_HeadlessManager__HostRoom_d__30__System_Collections_IEnumerator_get_Current (ApplicationManagers_HeadlessManager__HostRoom_d__30_o* __this, const MethodInfo* method);
// 0x44b9d60

Il2CppObject *
ApplicationManagers_HeadlessManager__HostRoom_d__30__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_HeadlessManager__HostRoom_d__30_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.HeadlessManager.<TryJoinRoom>d__31$$.ctor
// il2cpp: void ApplicationManagers_HeadlessManager__TryJoinRoom_d__31___ctor (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x44b8e20

void ApplicationManagers_HeadlessManager__TryJoinRoom_d__31___ctor
               (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.HeadlessManager.<TryJoinRoom>d__31$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_HeadlessManager__TryJoinRoom_d__31__System_IDisposable_Dispose (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o* __this, const MethodInfo* method);
// 0x44b9d70

void ApplicationManagers_HeadlessManager__TryJoinRoom_d__31__System_IDisposable_Dispose
               (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.HeadlessManager.<TryJoinRoom>d__31$$MoveNext
// il2cpp: bool ApplicationManagers_HeadlessManager__TryJoinRoom_d__31__MoveNext (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o* __this, const MethodInfo* method);
// 0x44b9d80

bool_conflict
ApplicationManagers_HeadlessManager__TryJoinRoom_d__31__MoveNext
          (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o *__this,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_HeadlessManager_o *pAVar2;
  Settings_MultiplayerSettings_o *__this_00;
  UnityEngine_WaitForSeconds_o *__this_01;
  Photon_Realtime_RoomInfo_o *room;
  System_String_array *values;
  MethodInfo *method_00;
  System_String_o *roomName;
  System_String_o *pSVar3;
  bool_conflict bVar4;
  Photon_Realtime_RoomInfo_o *pPVar5;
  
  pPVar5 = (Photon_Realtime_RoomInfo_o *)__this;
  if (g_data_057aea5c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoomProperty);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitForSeconds);
    il2cpp_runtime_helper_023445d0(&"[Headless] Joining room \"");
    il2cpp_runtime_helper_023445d0(&"[Headless] Room \"");
    il2cpp_runtime_helper_023445d0(&"\" (id=");
    il2cpp_runtime_helper_023445d0(&")\xe2\x80\xa6");
    il2cpp_runtime_helper_023445d0(&"");
    pPVar5 = (Photon_Realtime_RoomInfo_o *)&"\" not found \xe2\x80\x93 retrying in 3 s\xe2\x80\xa6";
    il2cpp_runtime_helper_023445d0();
    g_data_057aea5c = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  pAVar2 = (__this->fields).__4__this;
  if (iVar1 == 2) {
    (__this->fields).__1__state = -1;
    if (pAVar2 == (ApplicationManagers_HeadlessManager_o *)0x0) {
label_044ba15b:
      il2cpp_runtime_helper_022b2c90();
      return (bool_conflict)(pPVar5->fields).customProperties;
    }
    *(undefined1 *)((long)&(pAVar2->fields)._lobbyReady + 1) = 0;
label_044ba098:
    bVar4 = 0;
  }
  else {
    if (iVar1 == 1) {
      (__this->fields).__1__state = -1;
      if (g_data_057aeb7f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
        g_data_057aeb7f = '\x01';
      }
      room = ApplicationManagers_HeadlessManager__FindRoom
                       (*(System_String_o **)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x10),method);
      if (room != (Photon_Realtime_RoomInfo_o *)0x0) {
        pPVar5 = TypeInfo_string;
        values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,5);
        if (values != (System_String_array *)0x0) {
          if ((int)values->max_length != 0) {
            pPVar5 = (Photon_Realtime_RoomInfo_o *)values->m_Items;
            values->m_Items[0] = "[Headless] Joining room \"";
            il2cpp_runtime_helper_022b4080();
            if (g_data_057aeb7f == '\0') {
              pPVar5 = (Photon_Realtime_RoomInfo_o *)&TypeInfo_HeadlessManager;
              il2cpp_runtime_helper_023445d0();
              g_data_057aeb7f = '\x01';
            }
            if (1 < (uint)values->max_length) {
              pPVar5 = (Photon_Realtime_RoomInfo_o *)(values->m_Items + 1);
              values->m_Items[1] = *(System_String_o **)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x10);
              il2cpp_runtime_helper_022b4080();
              if (2 < (uint)values->max_length) {
                pPVar5 = (Photon_Realtime_RoomInfo_o *)(values->m_Items + 2);
                values->m_Items[2] = "\" (id=";
                il2cpp_runtime_helper_022b4080();
                if (3 < (uint)values->max_length) {
                  pPVar5 = (Photon_Realtime_RoomInfo_o *)(values->m_Items + 3);
                  values->m_Items[3] = *(System_String_o **)&(room->fields).autoCleanUp;
                  il2cpp_runtime_helper_022b4080();
                  if (4 < (uint)values->max_length) {
                    values->m_Items[4] = ")\xe2\x80\xa6";
                    il2cpp_runtime_helper_022b4080(values->m_Items + 4);
                    method_00 = (MethodInfo *)System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    UnityEngine_Debug__Log((Il2CppObject *)method_00,(MethodInfo *)0x0);
                    ApplicationManagers_HeadlessManager__PrepareJoinCharacterSettings(method_00);
                    __this_00 = (Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8);
                    pSVar3 = *(System_String_o **)&(room->fields).autoCleanUp;
                    if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    roomName = PhotonExtensions__GetStringProperty_3f67f30
                                         (room,(System_String_o *)**(undefined8 **)(TypeInfo_RoomProperty + 0xb8),
                                          "",(MethodInfo *)0x0);
                    pPVar5 = room;
                    if (__this_00 != (Settings_MultiplayerSettings_o *)0x0) {
                      Settings_MultiplayerSettings__JoinRoom
                                (__this_00,pSVar3,roomName,
                                 (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
                      return 0;
                    }
                    goto label_044ba15b;
                  }
                }
              }
            }
          }
          il2cpp_runtime_helper_022b2ca0();
        }
        goto label_044ba15b;
      }
      if (g_data_057aeb7f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
        g_data_057aeb7f = '\x01';
      }
      pSVar3 = System_String__Concat_3af7150
                         ("[Headless] Room \"",*(System_String_o **)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x10),
                          "\" not found \xe2\x80\x93 retrying in 3 s\xe2\x80\xa6",(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Debug__Log((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
      __this_01 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor(__this_01,3.0,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)__this_01;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_01);
      (__this->fields).__1__state = 2;
    }
    else {
      if (iVar1 != 0) goto label_044ba098;
      (__this->fields).__1__state = -1;
      if (pAVar2 == (ApplicationManagers_HeadlessManager_o *)0x0) goto label_044ba15b;
      *(undefined1 *)((long)&(pAVar2->fields)._lobbyReady + 1) = 1;
      __this_01 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor(__this_01,1.0,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)__this_01;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_01);
      (__this->fields).__1__state = 1;
    }
    bVar4 = (bool_conflict)CONCAT71((int7)((ulong)__this_01 >> 8),1);
  }
  return bVar4;
}


// ApplicationManagers.HeadlessManager.<TryJoinRoom>d__31$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_HeadlessManager__TryJoinRoom_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o* __this, const MethodInfo* method);
// 0x44ba160

Il2CppObject *
ApplicationManagers_HeadlessManager__TryJoinRoom_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.HeadlessManager.<TryJoinRoom>d__31$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_HeadlessManager__TryJoinRoom_d__31__System_Collections_IEnumerator_Reset (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o* __this, const MethodInfo* method);
// 0x44ba170

void ApplicationManagers_HeadlessManager__TryJoinRoom_d__31__System_Collections_IEnumerator_Reset
               (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// ApplicationManagers.HeadlessManager.<TryJoinRoom>d__31$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_HeadlessManager__TryJoinRoom_d__31__System_Collections_IEnumerator_get_Current (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o* __this, const MethodInfo* method);
// 0x44ba1b0

Il2CppObject *
ApplicationManagers_HeadlessManager__TryJoinRoom_d__31__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.HeadlessManager$$get_IsHeadless
// il2cpp: bool ApplicationManagers_HeadlessManager__get_IsHeadless (const MethodInfo* method);
// 0x44b7ec0

bool_conflict ApplicationManagers_HeadlessManager__get_IsHeadless(MethodInfo *method)

{
  if (g_data_057aea45 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
    g_data_057aea45 = '\x01';
  }
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(undefined1 **)(TypeInfo_HeadlessManager + 0xb8) >> 8),
                  **(undefined1 **)(TypeInfo_HeadlessManager + 0xb8));
}


// ApplicationManagers.HeadlessManager$$set_IsHeadless
// il2cpp: void ApplicationManagers_HeadlessManager__set_IsHeadless (bool value, const MethodInfo* method);
// 0x44b7f00

void ApplicationManagers_HeadlessManager__set_IsHeadless(bool_conflict value,MethodInfo *method)

{
  if (g_data_057aea46 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
    g_data_057aea46 = '\x01';
  }
  **(undefined1 **)(TypeInfo_HeadlessManager + 0xb8) = (char)value;
  return;
}


// ApplicationManagers.HeadlessManager$$get_Mode
// il2cpp: int32_t ApplicationManagers_HeadlessManager__get_Mode (const MethodInfo* method);
// 0x44b7f40

int32_t ApplicationManagers_HeadlessManager__get_Mode(MethodInfo *method)

{
  if (g_data_057aea47 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
    g_data_057aea47 = '\x01';
  }
  return *(int32_t *)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 4);
}


// ApplicationManagers.HeadlessManager$$set_Mode
// il2cpp: void ApplicationManagers_HeadlessManager__set_Mode (int32_t value, const MethodInfo* method);
// 0x44b7f80

void ApplicationManagers_HeadlessManager__set_Mode(int32_t value,MethodInfo *method)

{
  if (g_data_057aea48 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
    g_data_057aea48 = '\x01';
  }
  *(int32_t *)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 4) = value;
  return;
}


// ApplicationManagers.HeadlessManager$$get_Region
// il2cpp: int32_t ApplicationManagers_HeadlessManager__get_Region (const MethodInfo* method);
// 0x44b7fc0

int32_t ApplicationManagers_HeadlessManager__get_Region(MethodInfo *method)

{
  if (g_data_057aea49 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
    g_data_057aea49 = '\x01';
  }
  return *(int32_t *)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 8);
}


// ApplicationManagers.HeadlessManager$$set_Region
// il2cpp: void ApplicationManagers_HeadlessManager__set_Region (int32_t value, const MethodInfo* method);
// 0x44b8000

void ApplicationManagers_HeadlessManager__set_Region(int32_t value,MethodInfo *method)

{
  if (g_data_057aea4a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
    g_data_057aea4a = '\x01';
  }
  *(int32_t *)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 8) = value;
  return;
}


// ApplicationManagers.HeadlessManager$$get_RoomName
// il2cpp: System_String_o* ApplicationManagers_HeadlessManager__get_RoomName (const MethodInfo* method);
// 0x44b8040

System_String_o * ApplicationManagers_HeadlessManager__get_RoomName(MethodInfo *method)

{
  if (g_data_057aea4b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
    g_data_057aea4b = '\x01';
  }
  return *(System_String_o **)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x10);
}


// ApplicationManagers.HeadlessManager$$set_RoomName
// il2cpp: void ApplicationManagers_HeadlessManager__set_RoomName (System_String_o* value, const MethodInfo* method);
// 0x44b8080

void ApplicationManagers_HeadlessManager__set_RoomName(System_String_o *value,MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057aea4c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
    g_data_057aea4c = '\x01';
  }
  lVar1 = *(long *)(TypeInfo_HeadlessManager + 0xb8);
  *(System_String_o **)(lVar1 + 0x10) = value;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10,value);
  return;
}


// ApplicationManagers.HeadlessManager$$get_MaxPlayers
// il2cpp: int32_t ApplicationManagers_HeadlessManager__get_MaxPlayers (const MethodInfo* method);
// 0x44b80d0

int32_t ApplicationManagers_HeadlessManager__get_MaxPlayers(MethodInfo *method)

{
  if (g_data_057aea4d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
    g_data_057aea4d = '\x01';
  }
  return *(int32_t *)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x18);
}


// ApplicationManagers.HeadlessManager$$set_MaxPlayers
// il2cpp: void ApplicationManagers_HeadlessManager__set_MaxPlayers (int32_t value, const MethodInfo* method);
// 0x44b8110

void ApplicationManagers_HeadlessManager__set_MaxPlayers(int32_t value,MethodInfo *method)

{
  if (g_data_057aea4e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
    g_data_057aea4e = '\x01';
  }
  *(int32_t *)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x18) = value;
  return;
}


// ApplicationManagers.HeadlessManager$$get_PresetName
// il2cpp: System_String_o* ApplicationManagers_HeadlessManager__get_PresetName (const MethodInfo* method);
// 0x44b8150

System_String_o * ApplicationManagers_HeadlessManager__get_PresetName(MethodInfo *method)

{
  if (g_data_057aea4f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
    g_data_057aea4f = '\x01';
  }
  return *(System_String_o **)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x20);
}


// ApplicationManagers.HeadlessManager$$set_PresetName
// il2cpp: void ApplicationManagers_HeadlessManager__set_PresetName (System_String_o* value, const MethodInfo* method);
// 0x44b8190

void ApplicationManagers_HeadlessManager__set_PresetName(System_String_o *value,MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057aea50 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
    g_data_057aea50 = '\x01';
  }
  lVar1 = *(long *)(TypeInfo_HeadlessManager + 0xb8);
  *(System_String_o **)(lVar1 + 0x20) = value;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x20,value);
  return;
}


// ApplicationManagers.HeadlessManager$$Init
// il2cpp: void ApplicationManagers_HeadlessManager__Init (const MethodInfo* method);
// 0x44b81e0

void ApplicationManagers_HeadlessManager__Init(MethodInfo *method)

{
  Settings_MultiplayerSettings_o *__this;
  UnityEngine_Object_o *x;
  UnityEngine_MonoBehaviour_o *__this_00;
  int iVar1;
  int32_t iVar2;
  bool_conflict bVar3;
  bool_conflict bVar4;
  Il2CppObject *pIVar5;
  System_Object_array *args;
  long lVar6;
  System_String_o *pSVar7;
  System_String_array *pSVar8;
  System_String_o *pSVar9;
  int32_t *result;
  undefined8 *extraout_RDX;
  int32_t *result_00;
  undefined1 *puVar10;
  System_String_o **preset;
  MethodInfo *in_R9;
  uint uVar11;
  ulong uVar12;
  int32_t local_40;
  int32_t local_3c;
  int32_t local_38;
  undefined4 local_34;
  undefined4 local_30;
  int32_t local_2c;
  System_String_o *local_28;
  System_String_o *local_20;
  
  if (g_data_057aea51 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessMode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MultiplayerRegion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HeadlessManager_CreateSingleton_HeadlessManager);
    il2cpp_runtime_helper_023445d0(&"[Headless] Initialised \xe2\x80\x93 mode={0} region={1} room=\"{2}\" maxPlayers={3} preset=\"{4}\"");
    g_data_057aea51 = '\x01';
  }
  local_38 = 0;
  local_3c = 0;
  local_20 = (System_String_o *)0x0;
  local_40 = 0;
  local_28 = (System_String_o *)0x0;
  preset = &local_28;
  bVar3 = ApplicationManagers_HeadlessManager__TryParseArgs
                    (&local_38,&local_3c,&local_20,&local_40,preset,in_R9);
  if ((char)bVar3 == '\0') {
    return;
  }
  if (g_data_057aeb77 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
    g_data_057aeb77 = '\x01';
  }
  iVar2 = local_38;
  puVar10 = *(undefined1 **)(TypeInfo_HeadlessManager + 0x2e);
  *puVar10 = 1;
  if (g_data_057aeb78 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
    g_data_057aeb78 = '\x01';
    puVar10 = *(undefined1 **)(TypeInfo_HeadlessManager + 0x2e);
    *(int32_t *)(puVar10 + 4) = iVar2;
    if (g_data_057aeb79 != '\0') goto label_044b82fe;
label_044b86da:
    iVar2 = local_3c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
    g_data_057aeb79 = '\x01';
    puVar10 = *(undefined1 **)(TypeInfo_HeadlessManager + 0x2e);
    *(int32_t *)(puVar10 + 8) = iVar2;
    pSVar7 = local_20;
  }
  else {
    *(int32_t *)(puVar10 + 4) = local_38;
    if (g_data_057aeb79 == '\0') goto label_044b86da;
label_044b82fe:
    *(int32_t *)(puVar10 + 8) = local_3c;
    pSVar7 = local_20;
  }
  local_20 = pSVar7;
  if (g_data_057aeb7a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
    g_data_057aeb7a = '\x01';
    puVar10 = *(undefined1 **)(TypeInfo_HeadlessManager + 0x2e);
  }
  *(System_String_o **)(puVar10 + 0x10) = pSVar7;
  il2cpp_runtime_helper_022b4080(puVar10 + 0x10,pSVar7);
  iVar2 = local_40;
  if (g_data_057aeb7b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
    g_data_057aeb7b = '\x01';
  }
  pSVar7 = local_28;
  lVar6 = *(long *)(TypeInfo_HeadlessManager + 0x2e);
  *(int32_t *)(lVar6 + 0x18) = iVar2;
  if (g_data_057aeb7c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
    g_data_057aeb7c = '\x01';
    lVar6 = *(long *)(TypeInfo_HeadlessManager + 0x2e);
  }
  *(System_String_o **)(lVar6 + 0x20) = pSVar7;
  il2cpp_runtime_helper_022b4080(lVar6 + 0x20,pSVar7);
  pIVar5 = Utility_SingletonFactory__CreateSingleton_object_
                     (*(Il2CppObject **)(*(long *)(TypeInfo_HeadlessManager + 0x2e) + 0x28),MethodInfo_HeadlessManager_CreateSingleton_HeadlessManager);
  result = TypeInfo_HeadlessManager;
  lVar6 = *(long *)(TypeInfo_HeadlessManager + 0x2e);
  *(Il2CppObject **)(lVar6 + 0x28) = pIVar5;
  il2cpp_runtime_helper_022b4080(lVar6 + 0x28,pIVar5);
  args = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,5);
  if (g_data_057aeb7d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
    g_data_057aeb7d = '\x01';
  }
  local_2c = *(int32_t *)(*(long *)(TypeInfo_HeadlessManager + 0x2e) + 4);
  result_00 = &local_2c;
  pSVar7 = TypeInfo_HeadlessMode;
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30();
  if (args == (System_Object_array *)0x0) goto label_044b873a;
  if ((pIVar5 == (Il2CppObject *)0x0) || (lVar6 = il2cpp_runtime_helper_023051f0(pIVar5), lVar6 != 0)) {
    if ((int)args->max_length != 0) {
      args->m_Items[0] = pIVar5;
      il2cpp_runtime_helper_022b4080(args->m_Items,pIVar5);
      if (g_data_057aeb7e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
        g_data_057aeb7e = '\x01';
      }
      local_30 = *(undefined4 *)(*(long *)(TypeInfo_HeadlessManager + 0x2e) + 8);
      pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_MultiplayerRegion);
      if ((pIVar5 != (Il2CppObject *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pIVar5), lVar6 == 0))
      goto label_044b872b;
      if (1 < (uint)args->max_length) {
        args->m_Items[1] = pIVar5;
        il2cpp_runtime_helper_022b4080(args->m_Items + 1);
        if (g_data_057aeb7f == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
          g_data_057aeb7f = '\x01';
        }
        pIVar5 = *(Il2CppObject **)(*(long *)(TypeInfo_HeadlessManager + 0x2e) + 0x10);
        if ((pIVar5 != (Il2CppObject *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pIVar5), lVar6 == 0))
        goto label_044b872b;
        if (2 < (uint)args->max_length) {
          args->m_Items[2] = pIVar5;
          il2cpp_runtime_helper_022b4080(args->m_Items + 2,pIVar5);
          if (g_data_057aeb80 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
            g_data_057aeb80 = '\x01';
          }
          local_34 = *(undefined4 *)(*(long *)(TypeInfo_HeadlessManager + 0x2e) + 0x18);
          pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
          if ((pIVar5 != (Il2CppObject *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pIVar5), lVar6 == 0))
          goto label_044b872b;
          if (3 < (uint)args->max_length) {
            args->m_Items[3] = pIVar5;
            il2cpp_runtime_helper_022b4080(args->m_Items + 3);
            if (g_data_057aeb81 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
              g_data_057aeb81 = '\x01';
            }
            pIVar5 = *(Il2CppObject **)(*(long *)(TypeInfo_HeadlessManager + 0x2e) + 0x20);
            if ((pIVar5 != (Il2CppObject *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pIVar5), lVar6 == 0))
            goto label_044b872b;
            if (4 < (uint)args->max_length) {
              args->m_Items[4] = pIVar5;
              il2cpp_runtime_helper_022b4080(args->m_Items + 4,pIVar5);
              pSVar7 = System_String__Format_3af7980("[Headless] Initialised \xe2\x80\x93 mode={0} region={1} room=\"{2}\" maxPlayers={3} preset=\"{4}\"",args,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              result_00 = (int32_t *)0x0;
              UnityEngine_Debug__Log((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
              __this = (Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8);
              if (g_data_057aeb7e == '\0') {
                pSVar7 = (System_String_o *)&TypeInfo_HeadlessManager;
                il2cpp_runtime_helper_023445d0();
                g_data_057aeb7e = '\x01';
              }
              if (__this != (Settings_MultiplayerSettings_o *)0x0) {
                Settings_MultiplayerSettings__ConnectServer
                          (__this,*(int32_t *)(*(long *)(TypeInfo_HeadlessManager + 0x2e) + 8),(MethodInfo *)0x0);
                return;
              }
              goto label_044b873a;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_044b872b:
  pSVar7 = (System_String_o *)il2cpp_runtime_helper_0231b270();
  result_00 = (int32_t *)0x0;
  il2cpp_runtime_helper_022b2b10();
label_044b873a:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea59 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&"-headless-host");
    il2cpp_runtime_helper_023445d0(&"-headless-join");
    il2cpp_runtime_helper_023445d0(&"[Headless] Unknown region \"");
    il2cpp_runtime_helper_023445d0(&"\" \xe2\x80\x93 defaulting to 10.");
    il2cpp_runtime_helper_023445d0(&"\" \xe2\x80\x93 defaulting to EU.");
    il2cpp_runtime_helper_023445d0(&"[Headless] Invalid maxplayers \"");
    g_data_057aea59 = '\x01';
  }
  *(undefined4 *)&pSVar7->klass = 0;
  *result_00 = 0;
  *extraout_RDX = **(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(extraout_RDX);
  *result = 10;
  *preset = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080();
  pSVar8 = System_Environment__GetCommandLineArgs((MethodInfo *)0x0);
  if (pSVar8 != (System_String_array *)0x0) {
    if ((int)pSVar8->max_length < 1) {
      return;
    }
    uVar12 = 0;
    if ((pSVar8->max_length & 0xffffffff) != 0) {
      do {
        bVar3 = System_String__op_Equality(pSVar8->m_Items[uVar12],"-headless-host",(MethodInfo *)0x0);
        if ((uint)pSVar8->max_length <= uVar12) break;
        bVar4 = System_String__op_Equality(pSVar8->m_Items[uVar12],"-headless-join",(MethodInfo *)0x0);
        if ((byte)((byte)bVar4 | (byte)bVar3) == 1) {
          iVar1 = (int)uVar12;
          uVar11 = (uint)pSVar8->max_length;
          if (iVar1 + 4 < (int)uVar11) {
            if (uVar11 <= iVar1 + 1U) break;
            pSVar9 = pSVar8->m_Items[uVar12 + 1];
            if (g_data_057aea5a == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParse_MultiplayerRegion);
              g_data_057aea5a = '\x01';
            }
            if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar4 = System_Enum__TryParse_Int32Enum__2501010(pSVar9,1,result_00,MethodInfo_Boolean_TryParse_MultiplayerRegion);
            if ((char)bVar4 == '\0') {
              if ((uint)pSVar8->max_length <= iVar1 + 1U) break;
              pSVar9 = System_String__Concat_3af7150
                                 ("[Headless] Unknown region \"",pSVar8->m_Items[uVar12 + 1],"\" \xe2\x80\x93 defaulting to EU.",(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
            }
            if ((uint)pSVar8->max_length <= iVar1 + 2U) break;
            *extraout_RDX = pSVar8->m_Items[(int)(iVar1 + 2U)];
            il2cpp_runtime_helper_022b4080(extraout_RDX);
            uVar11 = iVar1 + 3;
            if ((uint)pSVar8->max_length <= uVar11) break;
            bVar4 = System_Int32__TryParse(pSVar8->m_Items[(int)uVar11],result,(MethodInfo *)0x0);
            if (((char)bVar4 == '\0') || (*result < 0)) {
              if ((uint)pSVar8->max_length <= uVar11) break;
              pSVar9 = System_String__Concat_3af7150
                                 ("[Headless] Invalid maxplayers \"",pSVar8->m_Items[(int)uVar11],_DAT_055bcac8,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
              *result = 10;
            }
            if (iVar1 + 4U < (uint)pSVar8->max_length) {
              *preset = pSVar8->m_Items[(int)(iVar1 + 4U)];
              il2cpp_runtime_helper_022b4080();
              *(uint *)&pSVar7->klass = (uint)(byte)((byte)bVar3 ^ 1);
              return;
            }
            break;
          }
        }
        uVar12 = uVar12 + 1;
        uVar11 = (uint)pSVar8->max_length;
        if ((long)(int)uVar11 <= (long)uVar12) {
          return;
        }
      } while (uVar12 < uVar11);
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea52 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aea52 = '\x01';
  }
  if (g_data_057aeb82 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
    g_data_057aeb82 = '\x01';
  }
  if (**(char **)(TypeInfo_HeadlessManager + 0x2e) != '\0') {
    x = *(UnityEngine_Object_o **)(*(char **)(TypeInfo_HeadlessManager + 0x2e) + 0x28);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (g_data_057aeb7d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
        g_data_057aeb7d = '\x01';
      }
      __this_00 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_HeadlessManager + 0x2e) + 0x28);
      if (*(int *)(*(long *)(TypeInfo_HeadlessManager + 0x2e) + 4) == 0) {
        if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
          if (g_data_057aea54 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_HostRoom_d__30);
            g_data_057aea54 = '\x01';
          }
          pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_HostRoom_d__30);
          System_Object___ctor(pIVar5,(MethodInfo *)0x0);
          *(undefined4 *)&pIVar5[1].klass = 0;
          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                    (__this_00,(System_Collections_IEnumerator_o *)pIVar5,(MethodInfo *)0x0);
          return;
        }
      }
      else if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
        *(undefined1 *)&__this_00[1].klass = 1;
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aea54 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_HostRoom_d__30);
        g_data_057aea54 = '\x01';
      }
      pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_HostRoom_d__30);
      System_Object___ctor(pIVar5,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar5[1].klass = 0;
      return;
    }
  }
  return;
}


// ApplicationManagers.HeadlessManager$$OnJoinedLobby
// il2cpp: void ApplicationManagers_HeadlessManager__OnJoinedLobby (const MethodInfo* method);
// 0x44b8a90

void ApplicationManagers_HeadlessManager__OnJoinedLobby(MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_MonoBehaviour_o *__this;
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  
  if (g_data_057aea52 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aea52 = '\x01';
  }
  if (g_data_057aeb82 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
    g_data_057aeb82 = '\x01';
  }
  if (**(char **)(TypeInfo_HeadlessManager + 0xb8) != '\0') {
    x = *(UnityEngine_Object_o **)(*(char **)(TypeInfo_HeadlessManager + 0xb8) + 0x28);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      if (g_data_057aeb7d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
        g_data_057aeb7d = '\x01';
      }
      __this = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x28);
      if (*(int *)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 4) == 0) {
        if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
          if (g_data_057aea54 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_HostRoom_d__30);
            g_data_057aea54 = '\x01';
          }
          pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_HostRoom_d__30);
          System_Object___ctor(pIVar2,(MethodInfo *)0x0);
          *(undefined4 *)&pIVar2[1].klass = 0;
          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                    (__this,(System_Collections_IEnumerator_o *)pIVar2,(MethodInfo *)0x0);
          return;
        }
      }
      else if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
        *(undefined1 *)&__this[1].klass = 1;
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aea54 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_HostRoom_d__30);
        g_data_057aea54 = '\x01';
      }
      pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_HostRoom_d__30);
      System_Object___ctor(pIVar2,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar2[1].klass = 0;
      return;
    }
  }
  return;
}


// ApplicationManagers.HeadlessManager$$OnRoomListUpdate
// il2cpp: void ApplicationManagers_HeadlessManager__OnRoomListUpdate (const MethodInfo* method);
// 0x44b8c10

void ApplicationManagers_HeadlessManager__OnRoomListUpdate(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  UnityEngine_MonoBehaviour_o *__this;
  bool_conflict bVar3;
  Il2CppClass *__this_00;
  Il2CppObject *__this_01;
  undefined4 uVar4;
  Il2CppClass *x;
  Il2CppObject *__this_02;
  
  if (g_data_057aea53 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aea53 = '\x01';
  }
  if (g_data_057aeb82 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
    g_data_057aeb82 = '\x01';
  }
  if (**(char **)(TypeInfo_HeadlessManager + 0xb8) != '\0') {
    x = *(Il2CppClass **)(*(char **)(TypeInfo_HeadlessManager + 0xb8) + 0x28);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (g_data_057aeb7d == '\0') {
        x = (Il2CppClass *)&TypeInfo_HeadlessManager;
        il2cpp_runtime_helper_023445d0();
        g_data_057aeb7d = '\x01';
        lVar2 = *(long *)(TypeInfo_HeadlessManager + 0xb8);
        iVar1 = *(int *)(lVar2 + 4);
      }
      else {
        lVar2 = *(long *)(TypeInfo_HeadlessManager + 0xb8);
        iVar1 = *(int *)(lVar2 + 4);
      }
      if (iVar1 == 1) {
        __this = *(UnityEngine_MonoBehaviour_o **)(lVar2 + 0x28);
        if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
          if (*(char *)&__this[1].klass == '\0') {
            return;
          }
          if (*(char *)((long)&__this[1].klass + 1) != '\0') {
            return;
          }
          if (g_data_057aea55 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_TryJoinRoom_d__31);
            g_data_057aea55 = '\x01';
          }
          __this_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_TryJoinRoom_d__31);
          x = __this_00;
          System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
          *(undefined4 *)&((UnityEngine_Object_Fields *)&(__this_00->_1).name)->m_CachedPtr = 0;
          if (__this_00 != (Il2CppClass *)0x0) {
            (__this_00->_1).byval_arg.data = __this;
            il2cpp_runtime_helper_022b4080(&(__this_00->_1).byval_arg,__this);
            UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                      (__this,(System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
            return;
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aea55 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_TryJoinRoom_d__31);
          g_data_057aea55 = '\x01';
        }
        __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_TryJoinRoom_d__31);
        uVar4 = 0;
        __this_02 = __this_01;
        System_Object___ctor(__this_01,(MethodInfo *)0x0);
        *(undefined4 *)&__this_01[1].klass = 0;
        if (__this_01 != (Il2CppObject *)0x0) {
          __this_01[2].klass = x;
          il2cpp_runtime_helper_022b4080(__this_01 + 2,x);
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        System_Object___ctor(__this_02,(MethodInfo *)0x0);
        *(undefined4 *)&__this_02[1].klass = uVar4;
        return;
      }
    }
  }
  return;
}


// ApplicationManagers.HeadlessManager$$HostRoom
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_HeadlessManager__HostRoom (ApplicationManagers_HeadlessManager_o* __this, const MethodInfo* method);
// 0x44b8bc0

System_Collections_IEnumerator_o *
ApplicationManagers_HeadlessManager__HostRoom
          (ApplicationManagers_HeadlessManager_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (g_data_057aea54 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HostRoom_d__30);
    g_data_057aea54 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_HostRoom_d__30);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ApplicationManagers.HeadlessManager$$TryJoinRoom
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_HeadlessManager__TryJoinRoom (ApplicationManagers_HeadlessManager_o* __this, const MethodInfo* method);
// 0x44b8d90

System_Collections_IEnumerator_o *
ApplicationManagers_HeadlessManager__TryJoinRoom
          (ApplicationManagers_HeadlessManager_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057aea55 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TryJoinRoom_d__31);
    g_data_057aea55 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_TryJoinRoom_d__31);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// ApplicationManagers.HeadlessManager$$FindRoom
// il2cpp: Photon_Realtime_RoomInfo_o* ApplicationManagers_HeadlessManager__FindRoom (System_String_o* displayName, const MethodInfo* method);
// 0x44b8e40

Photon_Realtime_RoomInfo_o *
ApplicationManagers_HeadlessManager__FindRoom(System_String_o *displayName,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  long lVar1;
  Settings_ListSetting_T__o *pSVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_04;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_05;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_06;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_07;
  bool_conflict bVar3;
  uint uVar4;
  int32_t index;
  System_String_o *pSVar5;
  Photon_Realtime_RoomInfo_o *pPVar6;
  undefined8 uVar7;
  Photon_Realtime_RoomInfo_o *pPVar8;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  Photon_Realtime_RoomInfo_o *extraout_RAX;
  System_Collections_Generic_List_object__o *__this_08;
  undefined8 extraout_RAX_00;
  long *plVar9;
  undefined8 extraout_RAX_01;
  Photon_Realtime_RoomInfo_o *room;
  Il2CppRGCTXData *__this_09;
  byte bVar10;
  int iVar11;
  ulong uVar12;
  Settings_TypedSetting_int__o *__this_10;
  _union_249689 unaff_R12;
  undefined8 *unaff_R13;
  undefined8 *puVar13;
  undefined8 *unaff_R15;
  undefined1 auVar14 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar15;
  Il2CppType *pIVar16;
  Il2CppObject *pIVar17;
  undefined1 auStack_e8 [16];
  Il2CppObject *pIStack_d8;
  Il2CppRGCTXData *pIStack_d0;
  _union_249689 _Stack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  ulong uStack_a8;
  uint uStack_94;
  ulong uStack_90;
  Il2CppRGCTXData *pIStack_88;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar18;
  Il2CppMethodPointer pIVar19;
  Il2CppObject *pIVar20;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSVar21;
  undefined4 extraout_var;
  
  if (g_data_057aea56 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Photon);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_Photon_Realtime_RoomInfo_ge);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RoomInfo_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenuGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoomProperty);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aea56 = '\x01';
  }
  pIVar17 = (Il2CppObject *)0x0;
  pIVar20 = (Il2CppObject *)0x0;
  pSVar18 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar19 = (Il2CppMethodPointer)0x0;
  pSVar21 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
  if (*(int *)(TypeInfo_MainMenuGameManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_MainMenuGameManager + 0xb8) + 8);
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&stack0xffffffffffffffa8,
               __this,MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Photon);
    do {
      __this_04.fields._8_8_ = pIVar19;
      __this_04.fields._dictionary = pSVar18;
      __this_04.fields._current.fields.key = pIVar17;
      __this_04.fields._current.fields.value = pIVar20;
      __this_04.fields._32_8_ = pSVar21;
      bVar3 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        (__this_04,(MethodInfo_3251160 *)&stack0xffffffffffffffa8);
      if ((char)bVar3 == '\0') {
        iVar11 = 5;
        pPVar8 = (Photon_Realtime_RoomInfo_o *)0x0;
        goto label_044b8fa7;
      }
      il2cpp_runtime_helper_03343020(&stack0xffffffffffffffa8,MethodInfo_KeyValuePair_2_System_String_Photon_Realtime_RoomInfo_ge);
      if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar5 = PhotonExtensions__GetStringProperty_3f67f30
                         (room,(System_String_o *)**(undefined8 **)(TypeInfo_RoomProperty + 0xb8),"",
                          (MethodInfo *)0x0);
      bVar3 = System_String__Equals_3af50f0(pSVar5,displayName,5,(MethodInfo *)0x0);
    } while ((char)bVar3 == '\0');
    iVar11 = 4;
    pPVar8 = room;
label_044b8fa7:
    __this_05.fields._8_8_ = pIVar19;
    __this_05.fields._dictionary = pSVar18;
    __this_05.fields._current.fields.key = pIVar17;
    __this_05.fields._current.fields.value = pIVar20;
    __this_05.fields._32_8_ = pSVar21;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (__this_05,(MethodInfo_3251280 *)&stack0xffffffffffffffa8);
label_044b8fb9:
    pPVar6 = (Photon_Realtime_RoomInfo_o *)0x0;
    if (iVar11 == 4) {
      pPVar6 = pPVar8;
    }
    return pPVar6;
  }
  auVar14 = il2cpp_runtime_helper_022b2c90();
  puVar13 = auVar14._0_8_;
  if (auVar14._8_4_ == 1) {
    puVar13 = (undefined8 *)__cxa_begin_catch(puVar13);
    __this_09 = (Il2CppRGCTXData *)*puVar13;
    __cxa_end_catch();
    __this_06.fields._8_8_ = pIVar19;
    __this_06.fields._dictionary = pSVar18;
    __this_06.fields._current.fields.key = pIVar17;
    __this_06.fields._current.fields.value = pIVar20;
    __this_06.fields._32_8_ = pSVar21;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (__this_06,(MethodInfo_3251280 *)&stack0xffffffffffffffa8);
    if (__this_09 == (Il2CppRGCTXData *)0x0) {
      pPVar8 = (Photon_Realtime_RoomInfo_o *)0x0;
      iVar11 = 0;
      goto label_044b8fb9;
    }
    puVar13 = (undefined8 *)il2cpp_runtime_helper_022fefe0(__this_09);
  }
  else {
    __this_09 = (Il2CppRGCTXData *)0x0;
  }
  __this_07.fields._8_8_ = pIVar19;
  __this_07.fields._dictionary = pSVar18;
  __this_07.fields._current.fields.key = pIVar17;
  __this_07.fields._current.fields.value = pIVar20;
  __this_07.fields._32_8_ = pSVar21;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
            (__this_07,(MethodInfo_3251280 *)&stack0xffffffffffffffa8);
  if (__this_09 == (Il2CppRGCTXData *)0x0) {
    _Unwind_Resume(puVar13);
  }
  uVar7 = il2cpp_runtime_helper_022fefe0(__this_09);
  il2cpp_runtime_helper_01f66400(uVar7);
  pIStack_88 = __this_09;
  if (g_data_057aea57 == '\0') {
    uStack_a8 = 0x44b90a3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseSetSetting);
    uStack_a8 = 0x44b90af;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanLoadout);
    uStack_a8 = 0x44b90bb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_GetCount);
    uStack_a8 = 0x44b90c7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_GetItemAt);
    uStack_a8 = 0x44b90d3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerCharacter);
    uStack_a8 = 0x44b90df;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    uStack_a8 = 0x44b90eb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    uStack_a8 = 0x44b90f7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    uStack_a8 = 0x44b9103;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057aea57 = '\x01';
  }
  uVar12 = *(ulong *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70);
  if (uVar12 != 0) {
    __this_09 = *(Il2CppRGCTXData **)(uVar12 + 0x28);
    puVar13 = &TypeInfo_PlayerCharacter;
    if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
      uStack_a8 = 0x44b9144;
      il2cpp_runtime_helper_02337ed0();
    }
    if (__this_09 != (Il2CppRGCTXData *)0x0) {
      puVar13 = &MethodInfo_Void_set_Value;
      uStack_a8 = 0x44b916c;
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_09,
                 (Il2CppObject *)**(undefined8 **)(TypeInfo_PlayerCharacter + 0xb8),MethodInfo_Void_set_Value);
      if (*(Settings_TypedSetting_int__o **)(uVar12 + 0x20) != (Settings_TypedSetting_int__o *)0x0) {
        uStack_a8 = 0x44b918d;
        Settings_TypedSetting_int___set_Value
                  (*(Settings_TypedSetting_int__o **)(uVar12 + 0x20),2,MethodInfo_Void_set_Value);
        __this_09 = *(Il2CppRGCTXData **)(uVar12 + 0x30);
        unaff_R15 = &TypeInfo_HumanLoadout;
        if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
          uStack_a8 = 0x44b91a9;
          il2cpp_runtime_helper_02337ed0();
        }
        if (__this_09 != (Il2CppRGCTXData *)0x0) {
          uStack_a8 = 0x44b91ca;
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)__this_09,
                     (Il2CppObject *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8),MethodInfo_Void_set_Value);
          lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
          if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x28), lVar1 != 0)) &&
             (pSVar2 = *(Settings_ListSetting_T__o **)(lVar1 + 0x28),
             pSVar2 != (Settings_ListSetting_T__o *)0x0)) {
            __this_09 = (Il2CppRGCTXData *)&MethodInfo_Int32_GetCount;
            uStack_a8 = 0x44b9211;
            uVar4 = Settings_ListSetting_object___GetCount(pSVar2,MethodInfo_Int32_GetCount);
            unaff_R15 = (undefined8 *)(ulong)uVar4;
            lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
            if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x20), lVar1 != 0)) &&
               (pSVar2 = *(Settings_ListSetting_T__o **)(lVar1 + 0x28), uStack_90 = uVar12,
               pSVar2 != (Settings_ListSetting_T__o *)0x0)) {
              uStack_a8 = 0x44b9259;
              uStack_94 = Settings_ListSetting_object___GetCount(pSVar2,MethodInfo_Int32_GetCount);
              pPVar8 = (Photon_Realtime_RoomInfo_o *)CONCAT44(extraout_var,uStack_94);
              if (0 < (int)uVar4) {
                uVar12 = 0;
                unaff_R13 = &MethodInfo_BaseSetting_GetItemAt;
                puVar13 = &TypeInfo_BaseSetSetting;
                unaff_R12.genericMethod = &TypeInfo_HeadlessManager;
                do {
                  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
                  if (((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x28), lVar1 == 0)) ||
                     (pSVar2 = *(Settings_ListSetting_T__o **)(lVar1 + 0x28),
                     pSVar2 == (Settings_ListSetting_T__o *)0x0)) goto label_044b94dc;
                  index = (int32_t)uVar12;
                  uStack_a8 = 0x44b92c3;
                  pSVar5 = (System_String_o *)
                           Settings_ListSetting_object___GetItemAt(pSVar2,index,MethodInfo_BaseSetting_GetItemAt);
                  if (pSVar5 == (System_String_o *)0x0) goto label_044b94dc;
                  bVar10 = (TypeInfo_BaseSetSetting->_2).naturalAligment;
                  if (((pSVar5->klass->_2).naturalAligment < bVar10) ||
                     ((pSVar5->klass->_2).typeHierarchy[(ulong)bVar10 - 1] != TypeInfo_BaseSetSetting))
                  goto label_044b94e1;
                  if (pSVar5[1].monitor == (void *)0x0) goto label_044b94dc;
                  __this_09 = *(Il2CppRGCTXData **)((long)pSVar5[1].monitor + 0x18);
                  if (g_data_057aeb81 == '\0') {
                    uStack_a8 = 0x44b9319;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
                    g_data_057aeb81 = '\x01';
                  }
                  uStack_a8 = 0x44b933e;
                  bVar3 = System_String__Equals_3af50f0
                                    ((System_String_o *)__this_09,
                                     *(System_String_o **)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x20),5,
                                     (MethodInfo *)0x0);
                  pPVar8 = (Photon_Realtime_RoomInfo_o *)CONCAT44(extraout_var_00,bVar3);
                  if ((char)bVar3 != '\0') {
                    __this_10 = *(Settings_TypedSetting_int__o **)(uStack_90 + 0x40);
                    goto joined_r0x044b948c;
                  }
                  uVar12 = (ulong)(index + 1U);
                } while (uVar4 != index + 1U);
              }
              if (0 < (int)uStack_94) {
                uVar12 = 0;
                unaff_R13 = &MethodInfo_BaseSetting_GetItemAt;
                puVar13 = &TypeInfo_BaseSetSetting;
                unaff_R12.genericMethod = &TypeInfo_HeadlessManager;
                do {
                  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
                  if (((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x20), lVar1 == 0)) ||
                     (pSVar2 = *(Settings_ListSetting_T__o **)(lVar1 + 0x28),
                     pSVar2 == (Settings_ListSetting_T__o *)0x0)) goto label_044b94dc;
                  iVar11 = (int)uVar12;
                  uStack_a8 = 0x44b93c3;
                  pSVar5 = (System_String_o *)
                           Settings_ListSetting_object___GetItemAt(pSVar2,iVar11,MethodInfo_BaseSetting_GetItemAt);
                  if (pSVar5 == (System_String_o *)0x0) goto label_044b94dc;
                  bVar10 = (TypeInfo_BaseSetSetting->_2).naturalAligment;
                  if (((pSVar5->klass->_2).naturalAligment < bVar10) ||
                     ((pSVar5->klass->_2).typeHierarchy[(ulong)bVar10 - 1] != TypeInfo_BaseSetSetting))
                  goto label_044b94e1;
                  if (pSVar5[1].monitor == (void *)0x0) goto label_044b94dc;
                  __this_09 = *(Il2CppRGCTXData **)((long)pSVar5[1].monitor + 0x18);
                  if (g_data_057aeb81 == '\0') {
                    uStack_a8 = 0x44b9419;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
                    g_data_057aeb81 = '\x01';
                  }
                  uStack_a8 = 0x44b943e;
                  bVar3 = System_String__Equals_3af50f0
                                    ((System_String_o *)__this_09,
                                     *(System_String_o **)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x20),5,
                                     (MethodInfo *)0x0);
                  pPVar8 = (Photon_Realtime_RoomInfo_o *)CONCAT44(extraout_var_01,bVar3);
                  if ((char)bVar3 != '\0') {
                    __this_10 = *(Settings_TypedSetting_int__o **)(uStack_90 + 0x40);
                    if (__this_10 == (Settings_TypedSetting_int__o *)0x0) goto label_044b94dc;
                    index = uVar4 + iVar11;
                    goto label_044b94ba;
                  }
                  uVar12 = (ulong)(iVar11 + 1U);
                } while (uStack_94 != iVar11 + 1U);
              }
              if ((int)(uStack_94 + uVar4) < 1) {
                return pPVar8;
              }
              __this_10 = *(Settings_TypedSetting_int__o **)(uStack_90 + 0x40);
              uStack_a8 = 0x44b946a;
              index = UnityEngine_Random__Range_4df2410(0,uStack_94 + uVar4,(MethodInfo *)0x0);
              __this_09 = (Il2CppRGCTXData *)0x0;
joined_r0x044b948c:
              if (__this_10 != (Settings_TypedSetting_int__o *)0x0) {
label_044b94ba:
                Settings_TypedSetting_int___set_Value(__this_10,index,MethodInfo_Void_set_Value);
                return extraout_RAX;
              }
            }
          }
        }
      }
    }
  }
label_044b94dc:
  uStack_a8 = 0x44b94e1;
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
label_044b94e1:
  uStack_a8 = 0x44b94e9;
  il2cpp_runtime_helper_022b2fd0();
  pIStack_d0 = __this_09;
  _Stack_c8 = unaff_R12;
  puStack_c0 = unaff_R13;
  puStack_b8 = puVar13;
  puStack_b0 = unaff_R15;
  uStack_a8 = uVar12;
  if (g_data_057aea58 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_BaseSetting_GetItems);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_BaseSetting_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057aea58 = '\x01';
  }
  pSVar15 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar16 = (Il2CppType *)0x0;
  pIVar17 = (Il2CppObject *)0x0;
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40);
  if (((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x20), lVar1 == 0)) ||
     ((pSVar2 = *(Settings_ListSetting_T__o **)(lVar1 + 0x28), pSVar2 == (Settings_ListSetting_T__o *)0x0 ||
      (__this_08 = (System_Collections_Generic_List_object__o *)
                   Settings_ListSetting_object___GetItems(pSVar2,MethodInfo_List_1_Settings_BaseSetting_GetItems),
      __this_08 == (System_Collections_Generic_List_object__o *)0x0)))) {
label_044b9721:
    il2cpp_runtime_helper_022b2c90();
label_044b9726:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_e8,__this_08,MethodInfo_List_1_T_Enumerator_Settings_BaseSetting_GetEnumerator);
    pSVar15 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_e8._0_8_;
    pIVar16 = (Il2CppType *)auStack_e8._8_8_;
    do {
      pIVar20 = pIStack_d8;
      __this_00.fields._8_8_ = pIVar16;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar15;
      __this_00.fields._current = pIVar20;
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_00,(MethodInfo_321A1D0 *)&stack0xfffffffffffffef8);
      if ((char)bVar3 == '\0') {
        iVar11 = 5;
        bVar10 = 0;
        goto label_044b96e5;
      }
      if (pIVar20 == (Il2CppObject *)0x0) {
label_044b971c:
        il2cpp_runtime_helper_022b2c90();
        pIVar17 = pIVar20;
        goto label_044b9721;
      }
      bVar10 = (TypeInfo_InGameSet->_2).naturalAligment;
      if (((pIVar20->klass->_2).naturalAligment < bVar10) ||
         ((pIVar20->klass->_2).typeHierarchy[(ulong)bVar10 - 1] != TypeInfo_InGameSet)) {
        il2cpp_runtime_helper_022b2fd0(pIVar20);
label_044b9717:
        il2cpp_runtime_helper_022b2c90();
        goto label_044b971c;
      }
      if (pIVar20[2].klass == (Il2CppClass *)0x0) goto label_044b9717;
      pIVar17 = pIVar20;
      bVar3 = System_String__Equals_3af50f0
                        ((System_String_o *)((pIVar20[2].klass)->_1).namespaze,pSVar5,5,(MethodInfo *)0x0);
      pIStack_d8 = pIVar17;
    } while ((char)bVar3 == '\0');
    plVar9 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if (plVar9 == (long *)0x0) goto label_044b9726;
    (**(code **)(*plVar9 + 0x1c8))(plVar9,pIVar20,*(undefined8 *)(*plVar9 + 0x1d0));
    plVar9 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x1c8))(plVar9,pIVar20,*(undefined8 *)(*plVar9 + 0x1d0));
      bVar10 = 1;
      iVar11 = 4;
      pIVar20 = pIVar17;
label_044b96e5:
      __this_01.fields._8_8_ = pIVar16;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar15;
      __this_01.fields._current = pIVar20;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_01,(MethodInfo_321A1C0 *)&stack0xfffffffffffffef8);
      uVar7 = extraout_RAX_00;
      goto label_044b96f7;
    }
  }
  auVar14 = il2cpp_runtime_helper_022b2c90();
  if (auVar14._8_4_ == 1) {
    plVar9 = (long *)__cxa_begin_catch(auVar14._0_8_);
    lVar1 = *plVar9;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar16;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar15;
    __this_02.fields._current = pIVar17;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xfffffffffffffef8);
    bVar10 = 0;
    iVar11 = 0;
    uVar7 = extraout_RAX_01;
    if (lVar1 == 0) {
label_044b96f7:
      return (Photon_Realtime_RoomInfo_o *)CONCAT71((int7)((ulong)uVar7 >> 8),iVar11 == 4 & bVar10);
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_03.fields._8_8_ = pIVar16;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar15;
  __this_03.fields._current = pIVar17;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xfffffffffffffef8);
  _Unwind_Resume(auVar14._0_8_);
}


// ApplicationManagers.HeadlessManager$$PrepareJoinCharacterSettings
// il2cpp: void ApplicationManagers_HeadlessManager__PrepareJoinCharacterSettings (const MethodInfo* method);
// 0x44b9080

void ApplicationManagers_HeadlessManager__PrepareJoinCharacterSettings(MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Settings_ListSetting_T__o *pSVar3;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  uint uVar4;
  bool_conflict bVar5;
  int32_t index;
  System_String_o *b;
  System_Collections_Generic_List_object__o *__this_03;
  long *plVar6;
  Il2CppRGCTXData *unaff_RBX;
  int index_00;
  ulong uVar7;
  Settings_TypedSetting_int__o *__this_04;
  _union_249689 unaff_R12;
  undefined8 *unaff_R13;
  undefined8 *unaff_R14;
  undefined8 *unaff_R15;
  undefined1 auVar8 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar9;
  Il2CppType *pIVar10;
  Il2CppObject *pIVar11;
  Il2CppObject *pIVar12;
  undefined1 auStack_90 [16];
  Il2CppObject *pIStack_80;
  Il2CppRGCTXData *pIStack_78;
  _union_249689 _Stack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  ulong uStack_50;
  uint local_3c;
  ulong local_38;
  
  if (g_data_057aea57 == '\0') {
    uStack_50 = 0x44b90a3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseSetSetting);
    uStack_50 = 0x44b90af;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanLoadout);
    uStack_50 = 0x44b90bb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_GetCount);
    uStack_50 = 0x44b90c7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_GetItemAt);
    uStack_50 = 0x44b90d3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerCharacter);
    uStack_50 = 0x44b90df;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    uStack_50 = 0x44b90eb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    uStack_50 = 0x44b90f7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    uStack_50 = 0x44b9103;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057aea57 = '\x01';
  }
  uVar7 = *(ulong *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70);
  if (uVar7 != 0) {
    unaff_RBX = *(Il2CppRGCTXData **)(uVar7 + 0x28);
    unaff_R14 = &TypeInfo_PlayerCharacter;
    if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
      uStack_50 = 0x44b9144;
      il2cpp_runtime_helper_02337ed0();
    }
    if (unaff_RBX != (Il2CppRGCTXData *)0x0) {
      unaff_R14 = &MethodInfo_Void_set_Value;
      uStack_50 = 0x44b916c;
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)unaff_RBX,
                 (Il2CppObject *)**(undefined8 **)(TypeInfo_PlayerCharacter + 0xb8),MethodInfo_Void_set_Value);
      if (*(Settings_TypedSetting_int__o **)(uVar7 + 0x20) != (Settings_TypedSetting_int__o *)0x0) {
        uStack_50 = 0x44b918d;
        Settings_TypedSetting_int___set_Value(*(Settings_TypedSetting_int__o **)(uVar7 + 0x20),2,MethodInfo_Void_set_Value)
        ;
        unaff_RBX = *(Il2CppRGCTXData **)(uVar7 + 0x30);
        unaff_R15 = &TypeInfo_HumanLoadout;
        if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
          uStack_50 = 0x44b91a9;
          il2cpp_runtime_helper_02337ed0();
        }
        if (unaff_RBX != (Il2CppRGCTXData *)0x0) {
          uStack_50 = 0x44b91ca;
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)unaff_RBX,
                     (Il2CppObject *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8),MethodInfo_Void_set_Value);
          lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
          if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) &&
             (pSVar3 = *(Settings_ListSetting_T__o **)(lVar2 + 0x28),
             pSVar3 != (Settings_ListSetting_T__o *)0x0)) {
            unaff_RBX = (Il2CppRGCTXData *)&MethodInfo_Int32_GetCount;
            uStack_50 = 0x44b9211;
            uVar4 = Settings_ListSetting_object___GetCount(pSVar3,MethodInfo_Int32_GetCount);
            unaff_R15 = (undefined8 *)(ulong)uVar4;
            lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
            if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) &&
               (pSVar3 = *(Settings_ListSetting_T__o **)(lVar2 + 0x28), local_38 = uVar7,
               pSVar3 != (Settings_ListSetting_T__o *)0x0)) {
              uStack_50 = 0x44b9259;
              local_3c = Settings_ListSetting_object___GetCount(pSVar3,MethodInfo_Int32_GetCount);
              if (0 < (int)uVar4) {
                uVar7 = 0;
                unaff_R13 = &MethodInfo_BaseSetting_GetItemAt;
                unaff_R14 = &TypeInfo_BaseSetSetting;
                unaff_R12.genericMethod = &TypeInfo_HeadlessManager;
                do {
                  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
                  if (((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x28), lVar2 == 0)) ||
                     (pSVar3 = *(Settings_ListSetting_T__o **)(lVar2 + 0x28),
                     pSVar3 == (Settings_ListSetting_T__o *)0x0)) goto label_044b94dc;
                  index = (int32_t)uVar7;
                  uStack_50 = 0x44b92c3;
                  b = (System_String_o *)Settings_ListSetting_object___GetItemAt(pSVar3,index,MethodInfo_BaseSetting_GetItemAt);
                  if (b == (System_String_o *)0x0) goto label_044b94dc;
                  bVar1 = (TypeInfo_BaseSetSetting->_2).naturalAligment;
                  if (((b->klass->_2).naturalAligment < bVar1) ||
                     ((b->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseSetSetting)) goto label_044b94e1;
                  if (b[1].monitor == (void *)0x0) goto label_044b94dc;
                  unaff_RBX = *(Il2CppRGCTXData **)((long)b[1].monitor + 0x18);
                  if (g_data_057aeb81 == '\0') {
                    uStack_50 = 0x44b9319;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
                    g_data_057aeb81 = '\x01';
                  }
                  uStack_50 = 0x44b933e;
                  bVar5 = System_String__Equals_3af50f0
                                    ((System_String_o *)unaff_RBX,
                                     *(System_String_o **)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x20),5,
                                     (MethodInfo *)0x0);
                  if ((char)bVar5 != '\0') {
                    __this_04 = *(Settings_TypedSetting_int__o **)(local_38 + 0x40);
                    goto joined_r0x044b948c;
                  }
                  uVar7 = (ulong)(index + 1U);
                } while (uVar4 != index + 1U);
              }
              if (0 < (int)local_3c) {
                uVar7 = 0;
                unaff_R13 = &MethodInfo_BaseSetting_GetItemAt;
                unaff_R14 = &TypeInfo_BaseSetSetting;
                unaff_R12.genericMethod = &TypeInfo_HeadlessManager;
                do {
                  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
                  if (((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x20), lVar2 == 0)) ||
                     (pSVar3 = *(Settings_ListSetting_T__o **)(lVar2 + 0x28),
                     pSVar3 == (Settings_ListSetting_T__o *)0x0)) goto label_044b94dc;
                  index_00 = (int)uVar7;
                  uStack_50 = 0x44b93c3;
                  b = (System_String_o *)Settings_ListSetting_object___GetItemAt(pSVar3,index_00,MethodInfo_BaseSetting_GetItemAt)
                  ;
                  if (b == (System_String_o *)0x0) goto label_044b94dc;
                  bVar1 = (TypeInfo_BaseSetSetting->_2).naturalAligment;
                  if (((b->klass->_2).naturalAligment < bVar1) ||
                     ((b->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseSetSetting)) goto label_044b94e1;
                  if (b[1].monitor == (void *)0x0) goto label_044b94dc;
                  unaff_RBX = *(Il2CppRGCTXData **)((long)b[1].monitor + 0x18);
                  if (g_data_057aeb81 == '\0') {
                    uStack_50 = 0x44b9419;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
                    g_data_057aeb81 = '\x01';
                  }
                  uStack_50 = 0x44b943e;
                  bVar5 = System_String__Equals_3af50f0
                                    ((System_String_o *)unaff_RBX,
                                     *(System_String_o **)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x20),5,
                                     (MethodInfo *)0x0);
                  if ((char)bVar5 != '\0') {
                    __this_04 = *(Settings_TypedSetting_int__o **)(local_38 + 0x40);
                    if (__this_04 == (Settings_TypedSetting_int__o *)0x0) goto label_044b94dc;
                    index = uVar4 + index_00;
                    goto label_044b94ba;
                  }
                  uVar7 = (ulong)(index_00 + 1U);
                } while (local_3c != index_00 + 1U);
              }
              if ((int)(local_3c + uVar4) < 1) {
                return;
              }
              __this_04 = *(Settings_TypedSetting_int__o **)(local_38 + 0x40);
              uStack_50 = 0x44b946a;
              index = UnityEngine_Random__Range_4df2410(0,local_3c + uVar4,(MethodInfo *)0x0);
              unaff_RBX = (Il2CppRGCTXData *)0x0;
joined_r0x044b948c:
              if (__this_04 != (Settings_TypedSetting_int__o *)0x0) {
label_044b94ba:
                Settings_TypedSetting_int___set_Value(__this_04,index,MethodInfo_Void_set_Value);
                return;
              }
            }
          }
        }
      }
    }
  }
label_044b94dc:
  uStack_50 = 0x44b94e1;
  b = (System_String_o *)il2cpp_runtime_helper_022b2c90();
label_044b94e1:
  uStack_50 = 0x44b94e9;
  il2cpp_runtime_helper_022b2fd0();
  pIStack_78 = unaff_RBX;
  _Stack_70 = unaff_R12;
  puStack_68 = unaff_R13;
  puStack_60 = unaff_R14;
  puStack_58 = unaff_R15;
  uStack_50 = uVar7;
  if (g_data_057aea58 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_BaseSetting_GetItems);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_BaseSetting_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057aea58 = '\x01';
  }
  pSVar9 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar10 = (Il2CppType *)0x0;
  pIVar11 = (Il2CppObject *)0x0;
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40);
  if (((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x20), lVar2 == 0)) ||
     ((pSVar3 = *(Settings_ListSetting_T__o **)(lVar2 + 0x28), pSVar3 == (Settings_ListSetting_T__o *)0x0 ||
      (__this_03 = (System_Collections_Generic_List_object__o *)
                   Settings_ListSetting_object___GetItems(pSVar3,MethodInfo_List_1_Settings_BaseSetting_GetItems),
      __this_03 == (System_Collections_Generic_List_object__o *)0x0)))) {
label_044b9721:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_90,__this_03,MethodInfo_List_1_T_Enumerator_Settings_BaseSetting_GetEnumerator);
    pSVar9 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_90._0_8_;
    pIVar10 = (Il2CppType *)auStack_90._8_8_;
    do {
      pIVar12 = pIStack_80;
      __this.fields._8_8_ = pIVar10;
      __this.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
      __this.fields._current = pIVar12;
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this,(MethodInfo_321A1D0 *)&stack0xffffffffffffff50);
      if ((char)bVar5 == '\0') goto label_044b96e5;
      if (pIVar12 == (Il2CppObject *)0x0) {
label_044b971c:
        il2cpp_runtime_helper_022b2c90();
        pIVar11 = pIVar12;
        goto label_044b9721;
      }
      bVar1 = (TypeInfo_InGameSet->_2).naturalAligment;
      if (((pIVar12->klass->_2).naturalAligment < bVar1) ||
         ((pIVar12->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameSet)) {
        il2cpp_runtime_helper_022b2fd0(pIVar12);
label_044b9717:
        il2cpp_runtime_helper_022b2c90();
        goto label_044b971c;
      }
      if (pIVar12[2].klass == (Il2CppClass *)0x0) goto label_044b9717;
      pIVar11 = pIVar12;
      bVar5 = System_String__Equals_3af50f0
                        ((System_String_o *)((pIVar12[2].klass)->_1).namespaze,b,5,(MethodInfo *)0x0);
      pIStack_80 = pIVar11;
    } while ((char)bVar5 == '\0');
    plVar6 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x1c8))(plVar6,pIVar12,*(undefined8 *)(*plVar6 + 0x1d0));
      plVar6 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x1c8))(plVar6,pIVar12,*(undefined8 *)(*plVar6 + 0x1d0));
        pIVar12 = pIVar11;
label_044b96e5:
        __this_00.fields._8_8_ = pIVar10;
        __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
        __this_00.fields._current = pIVar12;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_00,(MethodInfo_321A1C0 *)&stack0xffffffffffffff50);
        return;
      }
      goto label_044b972b;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_044b972b:
  auVar8 = il2cpp_runtime_helper_022b2c90();
  if (auVar8._8_4_ == 1) {
    plVar6 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar2 = *plVar6;
    __cxa_end_catch();
    __this_01.fields._8_8_ = pIVar10;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
    __this_01.fields._current = pIVar11;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff50);
    if (lVar2 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_02.fields._8_8_ = pIVar10;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
  __this_02.fields._current = pIVar11;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff50);
  _Unwind_Resume(auVar8._0_8_);
}


// ApplicationManagers.HeadlessManager$$TryApplyPreset
// il2cpp: bool ApplicationManagers_HeadlessManager__TryApplyPreset (System_String_o* presetName, const MethodInfo* method);
// 0x44b94f0

bool_conflict
ApplicationManagers_HeadlessManager__TryApplyPreset(System_String_o *presetName,MethodInfo *method)

{
  long lVar1;
  Settings_ListSetting_T__o *__this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar2;
  System_Collections_Generic_List_object__o *__this_04;
  undefined8 extraout_RAX;
  undefined8 uVar3;
  long *plVar4;
  undefined8 extraout_RAX_00;
  int iVar5;
  byte bVar6;
  undefined1 auVar7 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar8;
  Il2CppType *pIVar9;
  Il2CppObject *pIVar10;
  Il2CppObject *pIVar11;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (g_data_057aea58 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_BaseSetting_GetItems);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_BaseSetting_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057aea58 = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar9 = (Il2CppType *)0x0;
  pIVar10 = (Il2CppObject *)0x0;
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40);
  if ((((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x20), lVar1 == 0)) ||
      (__this = *(Settings_ListSetting_T__o **)(lVar1 + 0x28), __this == (Settings_ListSetting_T__o *)0x0)) ||
     (__this_04 = (System_Collections_Generic_List_object__o *)
                  Settings_ListSetting_object___GetItems(__this,MethodInfo_List_1_Settings_BaseSetting_GetItems),
     __this_04 == (System_Collections_Generic_List_object__o *)0x0)) {
label_044b9721:
    il2cpp_runtime_helper_022b2c90();
label_044b9726:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,__this_04,MethodInfo_List_1_T_Enumerator_Settings_BaseSetting_GetEnumerator);
    pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
    pIVar9 = (Il2CppType *)local_48._8_8_;
    do {
      pIVar11 = local_38;
      __this_00.fields._8_8_ = pIVar9;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
      __this_00.fields._current = pIVar11;
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
      if ((char)bVar2 == '\0') {
        iVar5 = 5;
        bVar6 = 0;
        goto label_044b96e5;
      }
      if (pIVar11 == (Il2CppObject *)0x0) {
label_044b971c:
        il2cpp_runtime_helper_022b2c90();
        pIVar10 = pIVar11;
        goto label_044b9721;
      }
      bVar6 = (TypeInfo_InGameSet->_2).naturalAligment;
      if (((pIVar11->klass->_2).naturalAligment < bVar6) ||
         ((pIVar11->klass->_2).typeHierarchy[(ulong)bVar6 - 1] != TypeInfo_InGameSet)) {
        il2cpp_runtime_helper_022b2fd0(pIVar11);
label_044b9717:
        il2cpp_runtime_helper_022b2c90();
        goto label_044b971c;
      }
      if (pIVar11[2].klass == (Il2CppClass *)0x0) goto label_044b9717;
      pIVar10 = pIVar11;
      bVar2 = System_String__Equals_3af50f0
                        ((System_String_o *)((pIVar11[2].klass)->_1).namespaze,presetName,5,(MethodInfo *)0x0)
      ;
      local_38 = pIVar10;
    } while ((char)bVar2 == '\0');
    plVar4 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if (plVar4 == (long *)0x0) goto label_044b9726;
    (**(code **)(*plVar4 + 0x1c8))(plVar4,pIVar11,*(undefined8 *)(*plVar4 + 0x1d0));
    plVar4 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x1c8))(plVar4,pIVar11,*(undefined8 *)(*plVar4 + 0x1d0));
      bVar6 = 1;
      iVar5 = 4;
      pIVar11 = pIVar10;
label_044b96e5:
      __this_01.fields._8_8_ = pIVar9;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
      __this_01.fields._current = pIVar11;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
      uVar3 = extraout_RAX;
      goto label_044b96f7;
    }
  }
  auVar7 = il2cpp_runtime_helper_022b2c90();
  if (auVar7._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar7._0_8_);
    lVar1 = *plVar4;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar9;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
    __this_02.fields._current = pIVar10;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    bVar6 = 0;
    iVar5 = 0;
    uVar3 = extraout_RAX_00;
    if (lVar1 == 0) {
label_044b96f7:
      return (bool_conflict)CONCAT71((int7)((ulong)uVar3 >> 8),iVar5 == 4 & bVar6);
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_03.fields._8_8_ = pIVar9;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
  __this_03.fields._current = pIVar10;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar7._0_8_);
}


// ApplicationManagers.HeadlessManager$$TryParseArgs
// il2cpp: bool ApplicationManagers_HeadlessManager__TryParseArgs (int32_t* mode, int32_t* region, System_String_o** roomName, int32_t* maxPlayers, System_String_o** preset, const MethodInfo* method);
// 0x44b8740

bool_conflict
ApplicationManagers_HeadlessManager__TryParseArgs
          (int32_t *mode,int32_t *region,System_String_o **roomName,int32_t *maxPlayers,
          System_String_o **preset,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_MonoBehaviour_o *__this;
  int iVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  uint uVar4;
  System_String_array *pSVar5;
  System_String_o *pSVar6;
  UnityEngine_Coroutine_o *pUVar8;
  Il2CppObject *pIVar9;
  ulong uVar10;
  char *pcVar7;
  
  if (g_data_057aea59 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&"-headless-host");
    il2cpp_runtime_helper_023445d0(&"-headless-join");
    il2cpp_runtime_helper_023445d0(&"[Headless] Unknown region \"");
    il2cpp_runtime_helper_023445d0(&"\" \xe2\x80\x93 defaulting to 10.");
    il2cpp_runtime_helper_023445d0(&"\" \xe2\x80\x93 defaulting to EU.");
    il2cpp_runtime_helper_023445d0(&"[Headless] Invalid maxplayers \"");
    g_data_057aea59 = '\x01';
  }
  *mode = 0;
  *region = 0;
  *roomName = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(roomName);
  *maxPlayers = 10;
  *preset = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080();
  pSVar5 = System_Environment__GetCommandLineArgs((MethodInfo *)0x0);
  if (pSVar5 != (System_String_array *)0x0) {
    if ((int)pSVar5->max_length < 1) {
      return 0;
    }
    uVar10 = 0;
    if ((pSVar5->max_length & 0xffffffff) != 0) {
      do {
        bVar2 = System_String__op_Equality(pSVar5->m_Items[uVar10],"-headless-host",(MethodInfo *)0x0);
        if ((uint)pSVar5->max_length <= uVar10) break;
        bVar3 = System_String__op_Equality(pSVar5->m_Items[uVar10],"-headless-join",(MethodInfo *)0x0);
        if ((byte)((byte)bVar3 | (byte)bVar2) == 1) {
          iVar1 = (int)uVar10;
          uVar4 = (uint)pSVar5->max_length;
          if (iVar1 + 4 < (int)uVar4) {
            if (uVar4 <= iVar1 + 1U) break;
            pSVar6 = pSVar5->m_Items[uVar10 + 1];
            if (g_data_057aea5a == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParse_MultiplayerRegion);
              g_data_057aea5a = '\x01';
            }
            if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar3 = System_Enum__TryParse_Int32Enum__2501010(pSVar6,1,region,MethodInfo_Boolean_TryParse_MultiplayerRegion);
            if ((char)bVar3 == '\0') {
              if ((uint)pSVar5->max_length <= iVar1 + 1U) break;
              pSVar6 = System_String__Concat_3af7150
                                 ("[Headless] Unknown region \"",pSVar5->m_Items[uVar10 + 1],"\" \xe2\x80\x93 defaulting to EU.",(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
            }
            if ((uint)pSVar5->max_length <= iVar1 + 2U) break;
            *roomName = pSVar5->m_Items[(int)(iVar1 + 2U)];
            il2cpp_runtime_helper_022b4080(roomName);
            uVar4 = iVar1 + 3;
            if ((uint)pSVar5->max_length <= uVar4) break;
            bVar3 = System_Int32__TryParse(pSVar5->m_Items[(int)uVar4],maxPlayers,(MethodInfo *)0x0);
            if (((char)bVar3 == '\0') || (*maxPlayers < 0)) {
              if ((uint)pSVar5->max_length <= uVar4) break;
              pSVar6 = System_String__Concat_3af7150
                                 ("[Headless] Invalid maxplayers \"",pSVar5->m_Items[(int)uVar4],_DAT_055bcac8,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
              *maxPlayers = 10;
            }
            if (iVar1 + 4U < (uint)pSVar5->max_length) {
              *preset = pSVar5->m_Items[(int)(iVar1 + 4U)];
              il2cpp_runtime_helper_022b4080();
              *mode = (uint)(byte)((byte)bVar2 ^ 1);
              return 1;
            }
            break;
          }
        }
        uVar10 = uVar10 + 1;
        uVar4 = (uint)pSVar5->max_length;
        if ((long)(int)uVar4 <= (long)uVar10) {
          return 0;
        }
      } while (uVar10 < uVar4);
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea52 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aea52 = '\x01';
  }
  if (g_data_057aeb82 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
    g_data_057aeb82 = '\x01';
  }
  pcVar7 = *(char **)(TypeInfo_HeadlessManager + 0xb8);
  if (*pcVar7 != '\0') {
    x = *(UnityEngine_Object_o **)(pcVar7 + 0x28);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pcVar7 = (char *)(ulong)uVar4;
    if ((char)uVar4 == '\0') {
      if (g_data_057aeb7d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_HeadlessManager);
        g_data_057aeb7d = '\x01';
      }
      pcVar7 = *(char **)(TypeInfo_HeadlessManager + 0xb8);
      __this = *(UnityEngine_MonoBehaviour_o **)(pcVar7 + 0x28);
      if (*(int *)(pcVar7 + 4) == 0) {
        if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
          if (g_data_057aea54 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_HostRoom_d__30);
            g_data_057aea54 = '\x01';
          }
          pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_HostRoom_d__30);
          System_Object___ctor(pIVar9,(MethodInfo *)0x0);
          *(undefined4 *)&pIVar9[1].klass = 0;
          pUVar8 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                             (__this,(System_Collections_IEnumerator_o *)pIVar9,(MethodInfo *)0x0);
          return (bool_conflict)pUVar8;
        }
      }
      else if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
        *(undefined1 *)&__this[1].klass = 1;
        goto label_044b8b53;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aea54 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_HostRoom_d__30);
        g_data_057aea54 = '\x01';
      }
      pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_HostRoom_d__30);
      System_Object___ctor(pIVar9,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar9[1].klass = 0;
      return (bool_conflict)pIVar9;
    }
  }
label_044b8b53:
  return (bool_conflict)pcVar7;
}


// ApplicationManagers.HeadlessManager$$TryParseRegion
// il2cpp: bool ApplicationManagers_HeadlessManager__TryParseRegion (System_String_o* value, int32_t* region, const MethodInfo* method);
// 0x44b97f0

bool_conflict
ApplicationManagers_HeadlessManager__TryParseRegion(System_String_o *value,int32_t *region,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057aea5a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryParse_MultiplayerRegion);
    g_data_057aea5a = '\x01';
  }
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = System_Enum__TryParse_Int32Enum__2501010(value,1,region,MethodInfo_Boolean_TryParse_MultiplayerRegion);
  return bVar1;
}


// ApplicationManagers.HeadlessManager$$.ctor
// il2cpp: void ApplicationManagers_HeadlessManager___ctor (ApplicationManagers_HeadlessManager_o* __this, const MethodInfo* method);
// 0x44b9860

void ApplicationManagers_HeadlessManager___ctor
               (ApplicationManagers_HeadlessManager_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057b4c9f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057b4c9f = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 != 0) {
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


