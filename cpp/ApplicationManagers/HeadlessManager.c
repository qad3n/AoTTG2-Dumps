// Type: ApplicationManagers.HeadlessManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers/HeadlessManager.cs
// Prior source: NEW in this update
// --------------------------------

// ApplicationManagers.HeadlessManager.<HostRoom>d__30$$.ctor
// il2cpp: void ApplicationManagers_HeadlessManager__HostRoom_d__30___ctor (ApplicationManagers_HeadlessManager__HostRoom_d__30_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x419fc80

void ApplicationManagers_HeadlessManager_<HostRoom>d__30___ctor
               (ApplicationManagers_HeadlessManager__HostRoom_d__30_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.HeadlessManager.<HostRoom>d__30$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_HeadlessManager__HostRoom_d__30__System_IDisposable_Dispose (ApplicationManagers_HeadlessManager__HostRoom_d__30_o* __this, const MethodInfo* method);
// 0x41a06f0

void ApplicationManagers_HeadlessManager_<HostRoom>d__30__System_IDisposable_Dispose
               (ApplicationManagers_HeadlessManager__HostRoom_d__30_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.HeadlessManager.<HostRoom>d__30$$MoveNext
// il2cpp: bool ApplicationManagers_HeadlessManager__HostRoom_d__30__MoveNext (ApplicationManagers_HeadlessManager__HostRoom_d__30_o* __this, const MethodInfo* method);
// 0x41a0700

bool_conflict
ApplicationManagers_HeadlessManager_<HostRoom>d__30__MoveNext
          (ApplicationManagers_HeadlessManager__HostRoom_d__30_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_TypedSetting_T__o *pSVar2;
  Il2CppObject *arg0;
  Settings_TypedSetting_int__o *pSVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  long lVar6;
  Il2CppObject *arg1;
  UnityEngine_WaitForSeconds_o *__this_00;
  undefined4 local_2c;
  
  if (DAT_05704c8d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    il2cpp_init_method_metadata(&"[Headless] Creating room \"{0}\" (max={1}) with preset \"{2}\"\x2026");
    il2cpp_init_method_metadata(&"\" not found \x2013 using defaults.");
    il2cpp_init_method_metadata(&"[Headless] Preset \"");
    DAT_05704c8d = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (DAT_05704d90 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
      DAT_05704d90 = '\x01';
    }
    lVar6 = *(long *)(TypeInfo_HeadlessManager + 0xb8);
    arg0 = *(Il2CppObject **)(lVar6 + 0x10);
    if (DAT_05704d91 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
      DAT_05704d91 = '\x01';
      lVar6 = *(long *)(TypeInfo_HeadlessManager + 0xb8);
    }
    local_2c = *(undefined4 *)(lVar6 + 0x18);
    arg1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_2c);
    if (DAT_05704d92 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
      DAT_05704d92 = '\x01';
    }
    pSVar5 = System_String__Format
                       ("[Headless] Creating room \"{0}\" (max={1}) with preset \"{2}\"\x2026",arg0,arg1,
                        *(Il2CppObject **)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x20),(MethodInfo *)0x0)
    ;
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Debug__Log((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
    if ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8) ==
        (Settings_MultiplayerSettings_o *)0x0) goto LAB_041a0b7f;
    Settings_MultiplayerSettings__StartRoom
              ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8),
               (MethodInfo *)0x0);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (DAT_05704d92 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
      DAT_05704d92 = '\x01';
    }
    bVar4 = ApplicationManagers_HeadlessManager__TryApplyPreset
                      (*(System_String_o **)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x20),method);
    if ((char)bVar4 == '\0') {
      if (DAT_05704d92 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
        DAT_05704d92 = '\x01';
      }
      pSVar5 = System_String__Concat
                         ("[Headless] Preset \"",*(System_String_o **)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x20),
                          "\" not found \x2013 using defaults.",(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
    }
    lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x38), lVar6 != 0)) {
      pSVar2 = *(Settings_TypedSetting_T__o **)(lVar6 + 0x50);
      if (DAT_05704d90 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
        DAT_05704d90 = '\x01';
      }
      if (pSVar2 != (Settings_TypedSetting_T__o *)0x0) {
        Settings_TypedSetting<object>__set_Value
                  (pSVar2,*(Il2CppObject **)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x10),MethodInfo_Void_set_Value);
        lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
        if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x38), lVar6 != 0)) {
          pSVar2 = *(Settings_TypedSetting_T__o **)(lVar6 + 0x50);
          if (DAT_05704d90 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
            DAT_05704d90 = '\x01';
          }
          if (pSVar2 != (Settings_TypedSetting_T__o *)0x0) {
            Settings_TypedSetting<object>__set_Value
                      (pSVar2,*(Il2CppObject **)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x10),MethodInfo_Void_set_Value
                      );
            if (DAT_05704d91 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
              DAT_05704d91 = '\x01';
              iVar1 = *(int *)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x18);
            }
            else {
              iVar1 = *(int *)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x18);
            }
            if (iVar1 < 1) {
LAB_041a0b31:
              __this_00 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
              UnityEngine_WaitForSeconds___ctor(__this_00,0.5,(MethodInfo *)0x0);
              (__this->fields).__2__current = (Il2CppObject *)__this_00;
              il2cpp_runtime_glue(&(__this->fields).__2__current,__this_00);
              (__this->fields).__1__state = 1;
              return (bool_conflict)CONCAT71((int7)((ulong)__this_00 >> 8),1);
            }
            lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
            if (((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x38), lVar6 != 0)) &&
               (pSVar3 = *(Settings_TypedSetting_int__o **)(lVar6 + 0x60),
               pSVar3 != (Settings_TypedSetting_int__o *)0x0)) {
              Settings_TypedSetting<int>__set_Value
                        (pSVar3,*(int32_t *)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x18),MethodInfo_Void_set_Value);
              lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
              if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x38), lVar6 != 0)) {
                pSVar3 = *(Settings_TypedSetting_int__o **)(lVar6 + 0x60);
                if (DAT_05704d91 == '\0') {
                  il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
                  DAT_05704d91 = '\x01';
                }
                if (pSVar3 != (Settings_TypedSetting_int__o *)0x0) {
                  Settings_TypedSetting<int>__set_Value
                            (pSVar3,*(int32_t *)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x18),MethodInfo_Void_set_Value
                            );
                  goto LAB_041a0b31;
                }
              }
            }
          }
        }
      }
    }
LAB_041a0b7f:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return 0;
}


// ApplicationManagers.HeadlessManager.<HostRoom>d__30$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_HeadlessManager__HostRoom_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_HeadlessManager__HostRoom_d__30_o* __this, const MethodInfo* method);
// 0x41a0b90

Il2CppObject *
ApplicationManagers_HeadlessManager_<HostRoom>d__30__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (ApplicationManagers_HeadlessManager__HostRoom_d__30_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.HeadlessManager.<HostRoom>d__30$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_HeadlessManager__HostRoom_d__30__System_Collections_IEnumerator_Reset (ApplicationManagers_HeadlessManager__HostRoom_d__30_o* __this, const MethodInfo* method);
// 0x41a0ba0

void ApplicationManagers_HeadlessManager_<HostRoom>d__30__System_Collections_IEnumerator_Reset
               (ApplicationManagers_HeadlessManager__HostRoom_d__30_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// ApplicationManagers.HeadlessManager.<HostRoom>d__30$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_HeadlessManager__HostRoom_d__30__System_Collections_IEnumerator_get_Current (ApplicationManagers_HeadlessManager__HostRoom_d__30_o* __this, const MethodInfo* method);
// 0x41a0be0

Il2CppObject *
ApplicationManagers_HeadlessManager_<HostRoom>d__30__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_HeadlessManager__HostRoom_d__30_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.HeadlessManager.<TryJoinRoom>d__31$$.ctor
// il2cpp: void ApplicationManagers_HeadlessManager__TryJoinRoom_d__31___ctor (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x419fca0

void ApplicationManagers_HeadlessManager_<TryJoinRoom>d__31___ctor
               (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.HeadlessManager.<TryJoinRoom>d__31$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_HeadlessManager__TryJoinRoom_d__31__System_IDisposable_Dispose (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o* __this, const MethodInfo* method);
// 0x41a0bf0

void ApplicationManagers_HeadlessManager_<TryJoinRoom>d__31__System_IDisposable_Dispose
               (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.HeadlessManager.<TryJoinRoom>d__31$$MoveNext
// il2cpp: bool ApplicationManagers_HeadlessManager__TryJoinRoom_d__31__MoveNext (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o* __this, const MethodInfo* method);
// 0x41a0c00

bool_conflict
ApplicationManagers_HeadlessManager_<TryJoinRoom>d__31__MoveNext
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
  
  if (DAT_05704c8e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&TypeInfo_RoomProperty);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    il2cpp_init_method_metadata(&"[Headless] Joining room \"");
    il2cpp_init_method_metadata(&"[Headless] Room \"");
    il2cpp_init_method_metadata(&"\" (id=");
    il2cpp_init_method_metadata(&")\x2026");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"\" not found \x2013 retrying in 3 s\x2026");
    DAT_05704c8e = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  pAVar2 = (__this->fields).__4__this;
  if (iVar1 == 2) {
    (__this->fields).__1__state = -1;
    if (pAVar2 == (ApplicationManagers_HeadlessManager_o *)0x0) {
LAB_041a0fdb:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    *(undefined1 *)((long)&(pAVar2->fields)._lobbyReady + 1) = 0;
LAB_041a0f18:
    bVar4 = 0;
  }
  else {
    if (iVar1 == 1) {
      (__this->fields).__1__state = -1;
      if (DAT_05704d90 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
        DAT_05704d90 = '\x01';
      }
      room = ApplicationManagers_HeadlessManager__FindRoom
                       (*(System_String_o **)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x10),method);
      if (room != (Photon_Realtime_RoomInfo_o *)0x0) {
        values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,5);
        if (values != (System_String_array *)0x0) {
          if ((int)values->max_length != 0) {
            values->m_Items[0] = "[Headless] Joining room \"";
            il2cpp_runtime_glue(values->m_Items);
            if (DAT_05704d90 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
              DAT_05704d90 = '\x01';
            }
            if (1 < (uint)values->max_length) {
              values->m_Items[1] = *(System_String_o **)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x10);
              il2cpp_runtime_glue(values->m_Items + 1);
              if (2 < (uint)values->max_length) {
                values->m_Items[2] = "\" (id=";
                il2cpp_runtime_glue(values->m_Items + 2);
                if (3 < (uint)values->max_length) {
                  values->m_Items[3] = *(System_String_o **)&(room->fields).autoCleanUp;
                  il2cpp_runtime_glue(values->m_Items + 3);
                  if (4 < (uint)values->max_length) {
                    values->m_Items[4] = ")\x2026";
                    il2cpp_runtime_glue(values->m_Items + 4);
                    method_00 = (MethodInfo *)System_String__Concat(values,(MethodInfo *)0x0);
                    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    UnityEngine_Debug__Log((Il2CppObject *)method_00,(MethodInfo *)0x0);
                    ApplicationManagers_HeadlessManager__PrepareJoinCharacterSettings(method_00);
                    __this_00 = (Settings_MultiplayerSettings_o *)
                                **(undefined8 **)(TypeInfo_SettingsManager + 0xb8);
                    pSVar3 = *(System_String_o **)&(room->fields).autoCleanUp;
                    if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    roomName = PhotonExtensions__GetStringProperty
                                         (room,(System_String_o *)
                                               **(undefined8 **)(TypeInfo_RoomProperty + 0xb8),"",
                                          (MethodInfo *)0x0);
                    if (__this_00 != (Settings_MultiplayerSettings_o *)0x0) {
                      Settings_MultiplayerSettings__JoinRoom
                                (__this_00,pSVar3,roomName,
                                 (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                                 (MethodInfo *)0x0);
                      return 0;
                    }
                    goto LAB_041a0fdb;
                  }
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        goto LAB_041a0fdb;
      }
      if (DAT_05704d90 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
        DAT_05704d90 = '\x01';
      }
      pSVar3 = System_String__Concat
                         ("[Headless] Room \"",*(System_String_o **)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x10),
                          "\" not found \x2013 retrying in 3 s\x2026",(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Debug__Log((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
      __this_01 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor(__this_01,3.0,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)__this_01;
      il2cpp_runtime_glue(&(__this->fields).__2__current,__this_01);
      (__this->fields).__1__state = 2;
    }
    else {
      if (iVar1 != 0) goto LAB_041a0f18;
      (__this->fields).__1__state = -1;
      if (pAVar2 == (ApplicationManagers_HeadlessManager_o *)0x0) goto LAB_041a0fdb;
      *(undefined1 *)((long)&(pAVar2->fields)._lobbyReady + 1) = 1;
      __this_01 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor(__this_01,1.0,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)__this_01;
      il2cpp_runtime_glue(&(__this->fields).__2__current,__this_01);
      (__this->fields).__1__state = 1;
    }
    bVar4 = (bool_conflict)CONCAT71((int7)((ulong)__this_01 >> 8),1);
  }
  return bVar4;
}


// ApplicationManagers.HeadlessManager.<TryJoinRoom>d__31$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_HeadlessManager__TryJoinRoom_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o* __this, const MethodInfo* method);
// 0x41a0fe0

Il2CppObject *
ApplicationManagers_HeadlessManager_<TryJoinRoom>d__31__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.HeadlessManager.<TryJoinRoom>d__31$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_HeadlessManager__TryJoinRoom_d__31__System_Collections_IEnumerator_Reset (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o* __this, const MethodInfo* method);
// 0x41a0ff0

void ApplicationManagers_HeadlessManager_<TryJoinRoom>d__31__System_Collections_IEnumerator_Reset
               (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// ApplicationManagers.HeadlessManager.<TryJoinRoom>d__31$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_HeadlessManager__TryJoinRoom_d__31__System_Collections_IEnumerator_get_Current (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o* __this, const MethodInfo* method);
// 0x41a1030

Il2CppObject *
ApplicationManagers_HeadlessManager_<TryJoinRoom>d__31__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.HeadlessManager$$get_IsHeadless
// il2cpp: bool ApplicationManagers_HeadlessManager__get_IsHeadless (const MethodInfo* method);
// 0x419ed40

bool_conflict ApplicationManagers_HeadlessManager__get_IsHeadless(MethodInfo *method)

{
  if (DAT_05704c77 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
    DAT_05704c77 = '\x01';
  }
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(undefined1 **)(TypeInfo_HeadlessManager + 0xb8) >> 8),
                  **(undefined1 **)(TypeInfo_HeadlessManager + 0xb8));
}


// ApplicationManagers.HeadlessManager$$set_IsHeadless
// il2cpp: void ApplicationManagers_HeadlessManager__set_IsHeadless (bool value, const MethodInfo* method);
// 0x419ed80

void ApplicationManagers_HeadlessManager__set_IsHeadless(bool_conflict value,MethodInfo *method)

{
  if (DAT_05704c78 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
    DAT_05704c78 = '\x01';
  }
  **(undefined1 **)(TypeInfo_HeadlessManager + 0xb8) = (char)value;
  return;
}


// ApplicationManagers.HeadlessManager$$get_Mode
// il2cpp: int32_t ApplicationManagers_HeadlessManager__get_Mode (const MethodInfo* method);
// 0x419edc0

int32_t ApplicationManagers_HeadlessManager__get_Mode(MethodInfo *method)

{
  if (DAT_05704c79 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
    DAT_05704c79 = '\x01';
  }
  return *(int32_t *)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 4);
}


// ApplicationManagers.HeadlessManager$$set_Mode
// il2cpp: void ApplicationManagers_HeadlessManager__set_Mode (int32_t value, const MethodInfo* method);
// 0x419ee00

void ApplicationManagers_HeadlessManager__set_Mode(int32_t value,MethodInfo *method)

{
  if (DAT_05704c7a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
    DAT_05704c7a = '\x01';
  }
  *(int32_t *)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 4) = value;
  return;
}


// ApplicationManagers.HeadlessManager$$get_Region
// il2cpp: int32_t ApplicationManagers_HeadlessManager__get_Region (const MethodInfo* method);
// 0x419ee40

int32_t ApplicationManagers_HeadlessManager__get_Region(MethodInfo *method)

{
  if (DAT_05704c7b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
    DAT_05704c7b = '\x01';
  }
  return *(int32_t *)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 8);
}


// ApplicationManagers.HeadlessManager$$set_Region
// il2cpp: void ApplicationManagers_HeadlessManager__set_Region (int32_t value, const MethodInfo* method);
// 0x419ee80

void ApplicationManagers_HeadlessManager__set_Region(int32_t value,MethodInfo *method)

{
  if (DAT_05704c7c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
    DAT_05704c7c = '\x01';
  }
  *(int32_t *)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 8) = value;
  return;
}


// ApplicationManagers.HeadlessManager$$get_RoomName
// il2cpp: System_String_o* ApplicationManagers_HeadlessManager__get_RoomName (const MethodInfo* method);
// 0x419eec0

System_String_o * ApplicationManagers_HeadlessManager__get_RoomName(MethodInfo *method)

{
  if (DAT_05704c7d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
    DAT_05704c7d = '\x01';
  }
  return *(System_String_o **)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x10);
}


// ApplicationManagers.HeadlessManager$$set_RoomName
// il2cpp: void ApplicationManagers_HeadlessManager__set_RoomName (System_String_o* value, const MethodInfo* method);
// 0x419ef00

void ApplicationManagers_HeadlessManager__set_RoomName(System_String_o *value,MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05704c7e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
    DAT_05704c7e = '\x01';
  }
  lVar1 = *(long *)(TypeInfo_HeadlessManager + 0xb8);
  *(System_String_o **)(lVar1 + 0x10) = value;
  il2cpp_runtime_glue(lVar1 + 0x10,value);
  return;
}


// ApplicationManagers.HeadlessManager$$get_MaxPlayers
// il2cpp: int32_t ApplicationManagers_HeadlessManager__get_MaxPlayers (const MethodInfo* method);
// 0x419ef50

int32_t ApplicationManagers_HeadlessManager__get_MaxPlayers(MethodInfo *method)

{
  if (DAT_05704c7f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
    DAT_05704c7f = '\x01';
  }
  return *(int32_t *)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x18);
}


// ApplicationManagers.HeadlessManager$$set_MaxPlayers
// il2cpp: void ApplicationManagers_HeadlessManager__set_MaxPlayers (int32_t value, const MethodInfo* method);
// 0x419ef90

void ApplicationManagers_HeadlessManager__set_MaxPlayers(int32_t value,MethodInfo *method)

{
  if (DAT_05704c80 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
    DAT_05704c80 = '\x01';
  }
  *(int32_t *)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x18) = value;
  return;
}


// ApplicationManagers.HeadlessManager$$get_PresetName
// il2cpp: System_String_o* ApplicationManagers_HeadlessManager__get_PresetName (const MethodInfo* method);
// 0x419efd0

System_String_o * ApplicationManagers_HeadlessManager__get_PresetName(MethodInfo *method)

{
  if (DAT_05704c81 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
    DAT_05704c81 = '\x01';
  }
  return *(System_String_o **)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x20);
}


// ApplicationManagers.HeadlessManager$$set_PresetName
// il2cpp: void ApplicationManagers_HeadlessManager__set_PresetName (System_String_o* value, const MethodInfo* method);
// 0x419f010

void ApplicationManagers_HeadlessManager__set_PresetName(System_String_o *value,MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05704c82 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
    DAT_05704c82 = '\x01';
  }
  lVar1 = *(long *)(TypeInfo_HeadlessManager + 0xb8);
  *(System_String_o **)(lVar1 + 0x20) = value;
  il2cpp_runtime_glue(lVar1 + 0x20,value);
  return;
}


// ApplicationManagers.HeadlessManager$$Init
// il2cpp: void ApplicationManagers_HeadlessManager__Init (const MethodInfo* method);
// 0x419f060

void ApplicationManagers_HeadlessManager__Init(MethodInfo *method)

{
  Settings_MultiplayerSettings_o *__this;
  int32_t iVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  System_Object_array *args;
  long lVar4;
  System_String_o *pSVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  MethodInfo *in_R9;
  int32_t local_40;
  int32_t local_3c;
  int32_t local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  System_String_o *local_28;
  System_String_o *local_20;
  
  if (DAT_05704c83 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
    il2cpp_init_method_metadata(&TypeInfo_HeadlessMode);
    il2cpp_init_method_metadata(&TypeInfo_MultiplayerRegion);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_HeadlessManager_CreateSingleton_HeadlessManager);
    il2cpp_init_method_metadata(&"[Headless] Initialised \x2013 mode={0} region={1} room=\"{2}\" maxPlayers={3} preset=\"{4}\"");
    DAT_05704c83 = '\x01';
  }
  local_38 = 0;
  local_3c = 0;
  local_20 = (System_String_o *)0x0;
  local_40 = 0;
  local_28 = (System_String_o *)0x0;
  bVar2 = ApplicationManagers_HeadlessManager__TryParseArgs
                    (&local_38,&local_3c,&local_20,&local_40,&local_28,in_R9);
  if ((char)bVar2 == '\0') {
    return;
  }
  if (DAT_05704d88 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
    DAT_05704d88 = '\x01';
  }
  iVar1 = local_38;
  puVar7 = *(undefined1 **)(TypeInfo_HeadlessManager + 0xb8);
  *puVar7 = 1;
  if (DAT_05704d89 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
    DAT_05704d89 = '\x01';
    puVar7 = *(undefined1 **)(TypeInfo_HeadlessManager + 0xb8);
    *(int32_t *)(puVar7 + 4) = iVar1;
    if (DAT_05704d8a == '\0') goto LAB_0419f55a;
LAB_0419f17e:
    *(int32_t *)(puVar7 + 8) = local_3c;
    pSVar5 = local_20;
  }
  else {
    *(int32_t *)(puVar7 + 4) = local_38;
    if (DAT_05704d8a != '\0') goto LAB_0419f17e;
LAB_0419f55a:
    iVar1 = local_3c;
    il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
    DAT_05704d8a = '\x01';
    puVar7 = *(undefined1 **)(TypeInfo_HeadlessManager + 0xb8);
    *(int32_t *)(puVar7 + 8) = iVar1;
    pSVar5 = local_20;
  }
  local_20 = pSVar5;
  if (DAT_05704d8b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
    DAT_05704d8b = '\x01';
    puVar7 = *(undefined1 **)(TypeInfo_HeadlessManager + 0xb8);
  }
  *(System_String_o **)(puVar7 + 0x10) = pSVar5;
  il2cpp_runtime_glue(puVar7 + 0x10,pSVar5);
  iVar1 = local_40;
  if (DAT_05704d8c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
    DAT_05704d8c = '\x01';
  }
  pSVar5 = local_28;
  lVar4 = *(long *)(TypeInfo_HeadlessManager + 0xb8);
  *(int32_t *)(lVar4 + 0x18) = iVar1;
  if (DAT_05704d8d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
    DAT_05704d8d = '\x01';
    lVar4 = *(long *)(TypeInfo_HeadlessManager + 0xb8);
  }
  *(System_String_o **)(lVar4 + 0x20) = pSVar5;
  il2cpp_runtime_glue(lVar4 + 0x20,pSVar5);
  pIVar3 = Utility_SingletonFactory__CreateSingleton<object>
                     (*(Il2CppObject **)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x28),MethodInfo_HeadlessManager_CreateSingleton_HeadlessManager);
  lVar4 = *(long *)(TypeInfo_HeadlessManager + 0xb8);
  *(Il2CppObject **)(lVar4 + 0x28) = pIVar3;
  il2cpp_runtime_glue(lVar4 + 0x28,pIVar3);
  args = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,5);
  if (DAT_05704d8e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
    DAT_05704d8e = '\x01';
  }
  local_2c = *(undefined4 *)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 4);
  pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_HeadlessMode,&local_2c);
  if (args == (System_Object_array *)0x0) {
LAB_0419f5ba:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((pIVar3 != (Il2CppObject *)0x0) &&
     (lVar4 = il2cpp_runtime_glue(pIVar3,(((args->obj).klass)->_1).element_class), lVar4 == 0)) {
LAB_0419f5ab:
    uVar6 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(uVar6,0);
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = pIVar3;
    il2cpp_runtime_glue(args->m_Items,pIVar3);
    if (DAT_05704d8f == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
      DAT_05704d8f = '\x01';
    }
    local_30 = *(undefined4 *)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 8);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_MultiplayerRegion,&local_30);
    if ((pIVar3 != (Il2CppObject *)0x0) &&
       (lVar4 = il2cpp_runtime_glue(pIVar3,(((args->obj).klass)->_1).element_class), lVar4 == 0))
    goto LAB_0419f5ab;
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = pIVar3;
      il2cpp_runtime_glue(args->m_Items + 1,pIVar3);
      if (DAT_05704d90 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
        DAT_05704d90 = '\x01';
      }
      pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x10);
      if ((pIVar3 != (Il2CppObject *)0x0) &&
         (lVar4 = il2cpp_runtime_glue(pIVar3,(((args->obj).klass)->_1).element_class), lVar4 == 0))
      goto LAB_0419f5ab;
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = pIVar3;
        il2cpp_runtime_glue(args->m_Items + 2,pIVar3);
        if (DAT_05704d91 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
          DAT_05704d91 = '\x01';
        }
        local_34 = *(undefined4 *)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x18);
        pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_34);
        if ((pIVar3 != (Il2CppObject *)0x0) &&
           (lVar4 = il2cpp_runtime_glue(pIVar3,(((args->obj).klass)->_1).element_class), lVar4 == 0))
        goto LAB_0419f5ab;
        if (3 < (uint)args->max_length) {
          args->m_Items[3] = pIVar3;
          il2cpp_runtime_glue(args->m_Items + 3,pIVar3);
          if (DAT_05704d92 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
            DAT_05704d92 = '\x01';
          }
          pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x20);
          if ((pIVar3 != (Il2CppObject *)0x0) &&
             (lVar4 = il2cpp_runtime_glue(pIVar3,(((args->obj).klass)->_1).element_class), lVar4 == 0
             )) goto LAB_0419f5ab;
          if (4 < (uint)args->max_length) {
            args->m_Items[4] = pIVar3;
            il2cpp_runtime_glue(args->m_Items + 4,pIVar3);
            pSVar5 = System_String__Format("[Headless] Initialised \x2013 mode={0} region={1} room=\"{2}\" maxPlayers={3} preset=\"{4}\"",args,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
              il2cpp_init_class();
            }
            UnityEngine_Debug__Log((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
            __this = (Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8);
            if (DAT_05704d8f == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
              DAT_05704d8f = '\x01';
            }
            if (__this != (Settings_MultiplayerSettings_o *)0x0) {
              Settings_MultiplayerSettings__ConnectServer
                        (__this,*(int32_t *)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 8),(MethodInfo *)0x0);
              return;
            }
            goto LAB_0419f5ba;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.HeadlessManager$$OnJoinedLobby
// il2cpp: void ApplicationManagers_HeadlessManager__OnJoinedLobby (const MethodInfo* method);
// 0x419f910

void ApplicationManagers_HeadlessManager__OnJoinedLobby(MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_MonoBehaviour_o *__this;
  bool_conflict bVar1;
  Il2CppObject *__this_00;
  
  if (DAT_05704c84 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704c84 = '\x01';
  }
  if (DAT_05704d93 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
    DAT_05704d93 = '\x01';
  }
  if (**(char **)(TypeInfo_HeadlessManager + 0xb8) != '\0') {
    x = *(UnityEngine_Object_o **)(*(char **)(TypeInfo_HeadlessManager + 0xb8) + 0x28);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      if (DAT_05704d8e == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
        DAT_05704d8e = '\x01';
      }
      __this = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x28);
      if (*(int *)(*(long *)(TypeInfo_HeadlessManager + 0xb8) + 4) == 0) {
        if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
          if (DAT_05704c86 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_HostRoom_d__30);
            DAT_05704c86 = '\x01';
          }
          __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_HostRoom_d__30);
          System_Object___ctor(__this_00,(MethodInfo *)0x0);
          *(undefined4 *)&__this_00[1].klass = 0;
          UnityEngine_MonoBehaviour__StartCoroutine
                    (__this,(System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
          return;
        }
      }
      else if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
        *(undefined1 *)&__this[1].klass = 1;
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// ApplicationManagers.HeadlessManager$$OnRoomListUpdate
// il2cpp: void ApplicationManagers_HeadlessManager__OnRoomListUpdate (const MethodInfo* method);
// 0x419fa90

void ApplicationManagers_HeadlessManager__OnRoomListUpdate(MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *x;
  long lVar2;
  Il2CppClass *__this;
  bool_conflict bVar3;
  Il2CppObject *__this_00;
  
  if (DAT_05704c85 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704c85 = '\x01';
  }
  if (DAT_05704d93 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
    DAT_05704d93 = '\x01';
  }
  if (**(char **)(TypeInfo_HeadlessManager + 0xb8) != '\0') {
    x = *(UnityEngine_Object_o **)(*(char **)(TypeInfo_HeadlessManager + 0xb8) + 0x28);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (DAT_05704d8e == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
        DAT_05704d8e = '\x01';
        lVar2 = *(long *)(TypeInfo_HeadlessManager + 0xb8);
        iVar1 = *(int *)(lVar2 + 4);
      }
      else {
        lVar2 = *(long *)(TypeInfo_HeadlessManager + 0xb8);
        iVar1 = *(int *)(lVar2 + 4);
      }
      if (iVar1 == 1) {
        __this = *(Il2CppClass **)(lVar2 + 0x28);
        if (__this != (Il2CppClass *)0x0) {
          if (*(char *)&(__this->_1).byval_arg.data == '\0') {
            return;
          }
          if (*(char *)((long)&(__this->_1).byval_arg.data + 1) != '\0') {
            return;
          }
          if (DAT_05704c87 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_TryJoinRoom_d__31);
            DAT_05704c87 = '\x01';
          }
          __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_TryJoinRoom_d__31);
          System_Object___ctor(__this_00,(MethodInfo *)0x0);
          *(undefined4 *)&__this_00[1].klass = 0;
          if (__this_00 != (Il2CppObject *)0x0) {
            __this_00[2].klass = __this;
            il2cpp_runtime_glue(__this_00 + 2,__this);
            UnityEngine_MonoBehaviour__StartCoroutine
                      ((UnityEngine_MonoBehaviour_o *)__this,
                       (System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
  return;
}


// ApplicationManagers.HeadlessManager$$HostRoom
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_HeadlessManager__HostRoom (ApplicationManagers_HeadlessManager_o* __this, const MethodInfo* method);
// 0x419fa40

System_Collections_IEnumerator_o *
ApplicationManagers_HeadlessManager__HostRoom
          (ApplicationManagers_HeadlessManager_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05704c86 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HostRoom_d__30);
    DAT_05704c86 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_HostRoom_d__30);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ApplicationManagers.HeadlessManager$$TryJoinRoom
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_HeadlessManager__TryJoinRoom (ApplicationManagers_HeadlessManager_o* __this, const MethodInfo* method);
// 0x419fc10

System_Collections_IEnumerator_o *
ApplicationManagers_HeadlessManager__TryJoinRoom
          (ApplicationManagers_HeadlessManager_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05704c87 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TryJoinRoom_d__31);
    DAT_05704c87 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_TryJoinRoom_d__31);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.HeadlessManager$$FindRoom
// il2cpp: Photon_Realtime_RoomInfo_o* ApplicationManagers_HeadlessManager__FindRoom (System_String_o* displayName, const MethodInfo* method);
// 0x419fcc0

Photon_Realtime_RoomInfo_o *
ApplicationManagers_HeadlessManager__FindRoom(System_String_o *displayName,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  bool_conflict bVar1;
  System_String_o *a;
  Photon_Realtime_RoomInfo_o *pPVar2;
  Photon_Realtime_RoomInfo_o *room;
  Photon_Realtime_RoomInfo_o *pPVar3;
  int iVar4;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  Il2CppObject *pIVar7;
  Il2CppObject *pIVar8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSVar9;
  
  if (DAT_05704c88 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_String_Photon_Realtime_Roo);
    il2cpp_init_method_metadata(&MethodInfo_RoomInfo_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_MainMenuGameManager);
    il2cpp_init_method_metadata(&TypeInfo_RoomProperty);
    il2cpp_init_method_metadata(&"");
    DAT_05704c88 = '\x01';
  }
  pIVar7 = (Il2CppObject *)0x0;
  pIVar8 = (Il2CppObject *)0x0;
  pSVar5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  pSVar9 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
  if (*(int *)(TypeInfo_MainMenuGameManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_MainMenuGameManager + 0xb8) + 8);
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_Dictionary<object__object>__GetEnumerator
            ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)
             &stack0xffffffffffffffa8,__this,MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
  do {
    __this_00.fields._8_8_ = pIVar6;
    __this_00.fields._dictionary = pSVar5;
    __this_00.fields._current.fields.key = pIVar7;
    __this_00.fields._current.fields.value = pIVar8;
    __this_00.fields._32_8_ = pSVar9;
    bVar1 = System_Collections_Generic_Dictionary_Enumerator<object__object>__MoveNext
                      (__this_00,(MethodInfo_31CFE90 *)&stack0xffffffffffffffa8);
    if ((char)bVar1 == '\0') {
      iVar4 = 5;
      pPVar3 = (Photon_Realtime_RoomInfo_o *)0x0;
      goto LAB_0419fe27;
    }
    il2cpp_glue_032bf890(&stack0xffffffffffffffa8,MethodInfo_KeyValuePair_2_System_String_Photon_Realtime_Roo);
    if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    a = PhotonExtensions__GetStringProperty
                  (room,(System_String_o *)**(undefined8 **)(TypeInfo_RoomProperty + 0xb8),"",
                   (MethodInfo *)0x0);
    bVar1 = System_String__Equals(a,displayName,5,(MethodInfo *)0x0);
  } while ((char)bVar1 == '\0');
  iVar4 = 4;
  pPVar3 = room;
LAB_0419fe27:
  __this_01.fields._8_8_ = pIVar6;
  __this_01.fields._dictionary = pSVar5;
  __this_01.fields._current.fields.key = pIVar7;
  __this_01.fields._current.fields.value = pIVar8;
  __this_01.fields._32_8_ = pSVar9;
  System_Collections_Generic_Dictionary_Enumerator<object__object>__Dispose
            (__this_01,(MethodInfo_31CFFB0 *)&stack0xffffffffffffffa8);
  pPVar2 = (Photon_Realtime_RoomInfo_o *)0x0;
  if (iVar4 == 4) {
    pPVar2 = pPVar3;
  }
  return pPVar2;
}


// ApplicationManagers.HeadlessManager$$PrepareJoinCharacterSettings
// il2cpp: void ApplicationManagers_HeadlessManager__PrepareJoinCharacterSettings (const MethodInfo* method);
// 0x419ff00

void ApplicationManagers_HeadlessManager__PrepareJoinCharacterSettings(MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Settings_TypedSetting_T__o *pSVar3;
  long lVar4;
  Settings_ListSetting_T__o *pSVar5;
  System_String_o *pSVar6;
  int32_t iVar7;
  int32_t iVar8;
  bool_conflict bVar9;
  Settings_BaseSetting_o *pSVar10;
  int32_t index;
  int index_00;
  Settings_TypedSetting_int__o *__this;
  
  if (DAT_05704c89 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseSetSetting);
    il2cpp_init_method_metadata(&TypeInfo_HumanLoadout);
    il2cpp_init_method_metadata(&MethodInfo_Int32_GetCount);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_GetItemAt);
    il2cpp_init_method_metadata(&TypeInfo_PlayerCharacter);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05704c89 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70);
  if (lVar2 != 0) {
    pSVar3 = *(Settings_TypedSetting_T__o **)(lVar2 + 0x28);
    if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (pSVar3 != (Settings_TypedSetting_T__o *)0x0) {
      Settings_TypedSetting<object>__set_Value
                (pSVar3,(Il2CppObject *)**(undefined8 **)(TypeInfo_PlayerCharacter + 0xb8),MethodInfo_Void_set_Value);
      if (*(Settings_TypedSetting_int__o **)(lVar2 + 0x20) != (Settings_TypedSetting_int__o *)0x0) {
        Settings_TypedSetting<int>__set_Value
                  (*(Settings_TypedSetting_int__o **)(lVar2 + 0x20),2,MethodInfo_Void_set_Value);
        pSVar3 = *(Settings_TypedSetting_T__o **)(lVar2 + 0x30);
        if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (pSVar3 != (Settings_TypedSetting_T__o *)0x0) {
          Settings_TypedSetting<object>__set_Value
                    (pSVar3,(Il2CppObject *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8),MethodInfo_Void_set_Value);
          lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
          if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x28), lVar4 != 0)) &&
             (pSVar5 = *(Settings_ListSetting_T__o **)(lVar4 + 0x28),
             pSVar5 != (Settings_ListSetting_T__o *)0x0)) {
            iVar7 = Settings_ListSetting<object>__GetCount(pSVar5,MethodInfo_Int32_GetCount);
            lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
            if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) &&
               (pSVar5 = *(Settings_ListSetting_T__o **)(lVar4 + 0x28),
               pSVar5 != (Settings_ListSetting_T__o *)0x0)) {
              iVar8 = Settings_ListSetting<object>__GetCount(pSVar5,MethodInfo_Int32_GetCount);
              if (0 < iVar7) {
                index = 0;
                do {
                  lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
                  if (((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x28), lVar4 == 0)) ||
                     ((pSVar5 = *(Settings_ListSetting_T__o **)(lVar4 + 0x28),
                      pSVar5 == (Settings_ListSetting_T__o *)0x0 ||
                      (pSVar10 = Settings_ListSetting<object>__GetItemAt(pSVar5,index,MethodInfo_BaseSetting_GetItemAt),
                      pSVar10 == (Settings_BaseSetting_o *)0x0)))) goto LAB_041a035c;
                  bVar1 = (TypeInfo_BaseSetSetting->_2).naturalAligment;
                  if (((pSVar10->klass->_2).naturalAligment < bVar1) ||
                     ((pSVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseSetSetting))
                  goto LAB_041a0361;
                  if (pSVar10[2].klass == (Settings_BaseSetting_c *)0x0) goto LAB_041a035c;
                  pSVar6 = (System_String_o *)((pSVar10[2].klass)->_1).namespaze;
                  if (DAT_05704d92 == '\0') {
                    il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
                    DAT_05704d92 = '\x01';
                  }
                  bVar9 = System_String__Equals
                                    (pSVar6,*(System_String_o **)
                                             (*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x20),5,
                                     (MethodInfo *)0x0);
                  if ((char)bVar9 != '\0') {
                    __this = *(Settings_TypedSetting_int__o **)(lVar2 + 0x40);
                    goto joined_r0x041a030c;
                  }
                  index = index + 1;
                } while (iVar7 != index);
              }
              if (0 < iVar8) {
                index_00 = 0;
                do {
                  lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
                  if ((((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x20), lVar4 == 0)) ||
                      (pSVar5 = *(Settings_ListSetting_T__o **)(lVar4 + 0x28),
                      pSVar5 == (Settings_ListSetting_T__o *)0x0)) ||
                     (pSVar10 = Settings_ListSetting<object>__GetItemAt
                                          (pSVar5,index_00,MethodInfo_BaseSetting_GetItemAt),
                     pSVar10 == (Settings_BaseSetting_o *)0x0)) goto LAB_041a035c;
                  bVar1 = (TypeInfo_BaseSetSetting->_2).naturalAligment;
                  if (((pSVar10->klass->_2).naturalAligment < bVar1) ||
                     ((pSVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseSetSetting)) {
LAB_041a0361:
                    /* WARNING: Subroutine does not return */
                    il2cpp_unwind_resume(pSVar10);
                  }
                  if (pSVar10[2].klass == (Settings_BaseSetting_c *)0x0) goto LAB_041a035c;
                  pSVar6 = (System_String_o *)((pSVar10[2].klass)->_1).namespaze;
                  if (DAT_05704d92 == '\0') {
                    il2cpp_init_method_metadata(&TypeInfo_HeadlessManager);
                    DAT_05704d92 = '\x01';
                  }
                  bVar9 = System_String__Equals
                                    (pSVar6,*(System_String_o **)
                                             (*(long *)(TypeInfo_HeadlessManager + 0xb8) + 0x20),5,
                                     (MethodInfo *)0x0);
                  if ((char)bVar9 != '\0') {
                    __this = *(Settings_TypedSetting_int__o **)(lVar2 + 0x40);
                    if (__this == (Settings_TypedSetting_int__o *)0x0) goto LAB_041a035c;
                    index = iVar7 + index_00;
                    goto LAB_041a033a;
                  }
                  index_00 = index_00 + 1;
                } while (iVar8 != index_00);
              }
              if (iVar8 + iVar7 < 1) {
                return;
              }
              __this = *(Settings_TypedSetting_int__o **)(lVar2 + 0x40);
              index = UnityEngine_Random__Range(0,iVar8 + iVar7,(MethodInfo *)0x0);
joined_r0x041a030c:
              if (__this != (Settings_TypedSetting_int__o *)0x0) {
LAB_041a033a:
                Settings_TypedSetting<int>__set_Value(__this,index,MethodInfo_Void_set_Value);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_041a035c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.HeadlessManager$$TryApplyPreset
// il2cpp: bool ApplicationManagers_HeadlessManager__TryApplyPreset (System_String_o* presetName, const MethodInfo* method);
// 0x41a0370

bool_conflict
ApplicationManagers_HeadlessManager__TryApplyPreset(System_String_o *presetName,MethodInfo *method)

{
  long lVar1;
  Settings_ListSetting_T__o *__this;
  long *plVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar3;
  System_Collections_Generic_List_object__o *__this_02;
  undefined8 extraout_RAX;
  int iVar4;
  byte bVar5;
  System_Collections_Generic_List_Enumerator_T__c *pSVar6;
  Il2CppType *pIVar7;
  Il2CppObject *pIVar8;
  Il2CppObject *pIVar9;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (DAT_05704c8a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_InGameSet);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Settings_BaseSetting__GetItems);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_BaseSetting__GetEn);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_05704c8a = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40);
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x20), lVar1 != 0)) &&
     (__this = *(Settings_ListSetting_T__o **)(lVar1 + 0x28),
     __this != (Settings_ListSetting_T__o *)0x0)) {
    __this_02 = (System_Collections_Generic_List_object__o *)
                Settings_ListSetting<object>__GetItems(__this,MethodInfo_List_1_Settings_BaseSetting__GetItems);
    if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,__this_02,MethodInfo_List_1_T__Enumerator_Settings_BaseSetting__GetEn)
      ;
      pSVar6 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
      pIVar7 = (Il2CppType *)local_48._8_8_;
      do {
        pIVar8 = local_38;
        __this_00.fields._8_8_ = pIVar7;
        __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
        __this_00.fields._current = pIVar8;
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
        if ((char)bVar3 == '\0') {
          iVar4 = 5;
          bVar5 = 0;
          goto LAB_041a0565;
        }
        if (pIVar8 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar5 = (TypeInfo_InGameSet->_2).naturalAligment;
        if (((pIVar8->klass->_2).naturalAligment < bVar5) ||
           ((pIVar8->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_InGameSet)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pIVar8);
        }
        if (pIVar8[2].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pIVar9 = pIVar8;
        bVar3 = System_String__Equals
                          ((System_String_o *)((pIVar8[2].klass)->_1).namespaze,presetName,5,
                           (MethodInfo *)0x0);
        local_38 = pIVar9;
      } while ((char)bVar3 == '\0');
      plVar2 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      (**(code **)(*plVar2 + 0x1c8))(plVar2,pIVar8,*(undefined8 *)(*plVar2 + 0x1d0));
      plVar2 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      (**(code **)(*plVar2 + 0x1c8))(plVar2,pIVar8,*(undefined8 *)(*plVar2 + 0x1d0));
      bVar5 = 1;
      iVar4 = 4;
      pIVar8 = pIVar9;
LAB_041a0565:
      __this_01.fields._8_8_ = pIVar7;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
      __this_01.fields._current = pIVar8;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
      return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),iVar4 == 4 & bVar5);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.HeadlessManager$$TryParseArgs
// il2cpp: bool ApplicationManagers_HeadlessManager__TryParseArgs (int32_t* mode, int32_t* region, System_String_o** roomName, int32_t* maxPlayers, System_String_o** preset, const MethodInfo* method);
// 0x419f5c0

bool_conflict
ApplicationManagers_HeadlessManager__TryParseArgs
          (int32_t *mode,int32_t *region,System_String_o **roomName,int32_t *maxPlayers,
          System_String_o **preset,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  System_String_array *pSVar4;
  System_String_o *pSVar5;
  uint uVar6;
  ulong uVar7;
  
  if (DAT_05704c8b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&"-headless-host");
    il2cpp_init_method_metadata(&"-headless-join");
    il2cpp_init_method_metadata(&"[Headless] Unknown region \"");
    il2cpp_init_method_metadata(&"\" \x2013 defaulting to 10.");
    il2cpp_init_method_metadata(&"\" \x2013 defaulting to EU.");
    il2cpp_init_method_metadata(&"[Headless] Invalid maxplayers \"");
    DAT_05704c8b = '\x01';
  }
  *mode = 0;
  *region = 0;
  *roomName = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  il2cpp_runtime_glue(roomName);
  *maxPlayers = 10;
  *preset = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  il2cpp_runtime_glue();
  pSVar4 = System_Environment__GetCommandLineArgs((MethodInfo *)0x0);
  if (pSVar4 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)pSVar4->max_length < 1) {
    return 0;
  }
  uVar7 = 0;
  if ((pSVar4->max_length & 0xffffffff) != 0) {
    do {
      bVar2 = System_String__op_Equality(pSVar4->m_Items[uVar7],"-headless-host",(MethodInfo *)0x0);
      if ((uint)pSVar4->max_length <= uVar7) break;
      bVar3 = System_String__op_Equality(pSVar4->m_Items[uVar7],"-headless-join",(MethodInfo *)0x0);
      if ((byte)((byte)bVar3 | (byte)bVar2) == 1) {
        iVar1 = (int)uVar7;
        uVar6 = (uint)pSVar4->max_length;
        if (iVar1 + 4 < (int)uVar6) {
          if (uVar6 <= iVar1 + 1U) break;
          pSVar5 = pSVar4->m_Items[uVar7 + 1];
          if (DAT_05704c8c == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Boolean_TryParse_MultiplayerRegion);
            DAT_05704c8c = '\x01';
          }
          if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar3 = System_Enum__TryParse<Int32Enum>(pSVar5,1,region,MethodInfo_Boolean_TryParse_MultiplayerRegion);
          if ((char)bVar3 == '\0') {
            if ((uint)pSVar4->max_length <= iVar1 + 1U) break;
            pSVar5 = System_String__Concat
                               ("[Headless] Unknown region \"",pSVar4->m_Items[uVar7 + 1],"\" \x2013 defaulting to EU.",
                                (MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
              il2cpp_init_class();
            }
            UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
          }
          if ((uint)pSVar4->max_length <= iVar1 + 2U) break;
          *roomName = pSVar4->m_Items[(int)(iVar1 + 2U)];
          il2cpp_runtime_glue(roomName);
          uVar6 = iVar1 + 3;
          if ((uint)pSVar4->max_length <= uVar6) break;
          bVar3 = System_Int32__TryParse(pSVar4->m_Items[(int)uVar6],maxPlayers,(MethodInfo *)0x0);
          if (((char)bVar3 == '\0') || (*maxPlayers < 0)) {
            if ((uint)pSVar4->max_length <= uVar6) break;
            pSVar5 = System_String__Concat
                               ("[Headless] Invalid maxplayers \"",pSVar4->m_Items[(int)uVar6],"\" \x2013 defaulting to 10.",
                                (MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
              il2cpp_init_class();
            }
            UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
            *maxPlayers = 10;
          }
          if (iVar1 + 4U < (uint)pSVar4->max_length) {
            *preset = pSVar4->m_Items[(int)(iVar1 + 4U)];
            il2cpp_runtime_glue();
            *mode = (uint)(byte)((byte)bVar2 ^ 1);
            return 1;
          }
          break;
        }
      }
      uVar7 = uVar7 + 1;
      uVar6 = (uint)pSVar4->max_length;
      if ((long)(int)uVar6 <= (long)uVar7) {
        return 0;
      }
    } while (uVar7 < uVar6);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.HeadlessManager$$TryParseRegion
// il2cpp: bool ApplicationManagers_HeadlessManager__TryParseRegion (System_String_o* value, int32_t* region, const MethodInfo* method);
// 0x41a0670

bool_conflict
ApplicationManagers_HeadlessManager__TryParseRegion
          (System_String_o *value,int32_t *region,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_05704c8c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryParse_MultiplayerRegion);
    DAT_05704c8c = '\x01';
  }
  if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = System_Enum__TryParse<Int32Enum>(value,1,region,MethodInfo_Boolean_TryParse_MultiplayerRegion);
  return bVar1;
}


// ApplicationManagers.HeadlessManager$$.ctor
// il2cpp: void ApplicationManagers_HeadlessManager___ctor (ApplicationManagers_HeadlessManager_o* __this, const MethodInfo* method);
// 0x41a06e0

void ApplicationManagers_HeadlessManager___ctor
               (ApplicationManagers_HeadlessManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


