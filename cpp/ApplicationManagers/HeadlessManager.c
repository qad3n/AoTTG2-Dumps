// Type: ApplicationManagers.HeadlessManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/HeadlessManager.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.HeadlessManager.<HostRoom>d__30$$.ctor
// il2cpp: void ApplicationManagers_HeadlessManager__HostRoom_d__30___ctor (ApplicationManagers_HeadlessManager__HostRoom_d__30_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5e170c0

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
// 0x5e17ac0

void ApplicationManagers_HeadlessManager__HostRoom_d__30__System_IDisposable_Dispose
               (ApplicationManagers_HeadlessManager__HostRoom_d__30_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.HeadlessManager.<HostRoom>d__30$$MoveNext
// il2cpp: bool ApplicationManagers_HeadlessManager__HostRoom_d__30__MoveNext (ApplicationManagers_HeadlessManager__HostRoom_d__30_o* __this, const MethodInfo* method);
// 0x5e17ad0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e17e10: jmp 0x5e17eee

bool ApplicationManagers_HeadlessManager__HostRoom_d__30__MoveNext
               (ApplicationManagers_HeadlessManager__HostRoom_d__30_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  Settings_MultiplayerSettings_o *__this_00;
  Settings_InGameSet_o *pSVar3;
  Settings_InGameGeneralSettings_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  bool bVar7;
  undefined8 in_RAX;
  ApplicationManagers_HeadlessManager_StaticFields *pAVar8;
  Il2CppObject *arg1;
  System_String_o *pSVar9;
  UnityEngine_WaitForSeconds_o *__this_01;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (Il2CppMethodInitialized_0754844a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    il2cpp_codegen_initialize_runtime_metadata(&"[Headless] Creating room \"{0}\" (max={1}) with preset \"{2}\"\xe2\x80\xa6");
    il2cpp_codegen_initialize_runtime_metadata(&"\" not found \xe2\x80\x93 using defaults.");
    il2cpp_codegen_initialize_runtime_metadata(&"[Headless] Preset \"");
    Il2CppMethodInitialized_0754844a = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      (__this->fields).__1__state = -1;
      if (Il2CppMethodInitialized_075484de == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
        Il2CppMethodInitialized_075484de = '\x01';
      }
      pAVar8 = TypeInfo_ApplicationManagers_HeadlessManager->static_fields;
      pSVar9 = pAVar8->_RoomName_k__BackingField;
      if (Il2CppMethodInitialized_075484df == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
        Il2CppMethodInitialized_075484df = '\x01';
        pAVar8 = TypeInfo_ApplicationManagers_HeadlessManager->static_fields;
      }
      uStack_38 = CONCAT44(pAVar8->_MaxPlayers_k__BackingField,(undefined4)uStack_38);
      arg1 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&uStack_38 + 4));
      if (Il2CppMethodInitialized_075484e0 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
        Il2CppMethodInitialized_075484e0 = '\x01';
      }
      pSVar9 = System_String__Format_5302ca0
                         ("[Headless] Creating room \"{0}\" (max={1}) with preset \"{2}\"\xe2\x80\xa6",(Il2CppObject *)pSVar9,arg1,
                          (Il2CppObject *)
                          TypeInfo_ApplicationManagers_HeadlessManager->static_fields->
                          _PresetName_k__BackingField,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
      }
      UnityEngine_Debug__Log((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
      __this_00 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
      if (__this_00 == (Settings_MultiplayerSettings_o *)0x0) goto label_05e17f3e;
      Settings_MultiplayerSettings__StartRoom(__this_00,(MethodInfo *)0x0);
    }
label_05e17f2a:
    return iVar1 == 0;
  }
  (__this->fields).__1__state = -1;
  if (Il2CppMethodInitialized_075484e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_075484e0 = '\x01';
  }
  bVar7 = ApplicationManagers_HeadlessManager__TryApplyPreset
                    (TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_PresetName_k__BackingField,
                     method);
  if (!bVar7) {
    if (Il2CppMethodInitialized_075484e0 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
      Il2CppMethodInitialized_075484e0 = '\x01';
    }
    pSVar9 = System_String__Concat_5301f10
                       ("[Headless] Preset \"",
                        TypeInfo_ApplicationManagers_HeadlessManager->static_fields->
                        _PresetName_k__BackingField,"\" not found \xe2\x80\x93 using defaults.",(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
    }
    UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
  }
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if ((pSVar3 != (Settings_InGameSet_o *)0x0) &&
     (pSVar4 = (pSVar3->fields).General, pSVar4 != (Settings_InGameGeneralSettings_o *)0x0)) {
    pSVar5 = (pSVar4->fields).RoomName;
    if (Il2CppMethodInitialized_075484de == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
      Il2CppMethodInitialized_075484de = '\x01';
    }
    if (pSVar5 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar5,
                 (Il2CppObject *)
                 TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_RoomName_k__BackingField,
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
      if ((pSVar3 != (Settings_InGameSet_o *)0x0) &&
         (pSVar4 = (pSVar3->fields).General, pSVar4 != (Settings_InGameGeneralSettings_o *)0x0)) {
        pSVar5 = (pSVar4->fields).RoomName;
        if (Il2CppMethodInitialized_075484de == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
          Il2CppMethodInitialized_075484de = '\x01';
        }
        if (pSVar5 != (Settings_StringSetting_o *)0x0) {
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar5,
                     (Il2CppObject *)
                     TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_RoomName_k__BackingField,
                     (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          if (Il2CppMethodInitialized_075484df == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
            Il2CppMethodInitialized_075484df = '\x01';
            iVar2 = TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_MaxPlayers_k__BackingField;
          }
          else {
            iVar2 = TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_MaxPlayers_k__BackingField;
          }
          if (0 < iVar2) {
            pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
            if (((pSVar3 == (Settings_InGameSet_o *)0x0) ||
                (pSVar4 = (pSVar3->fields).General, pSVar4 == (Settings_InGameGeneralSettings_o *)0x0)) ||
               (pSVar6 = (pSVar4->fields).MaxPlayers, pSVar6 == (Settings_IntSetting_o *)0x0))
            goto label_05e17f3e;
            Settings_TypedSetting_int___set_Value
                      ((Settings_TypedSetting_int__o *)pSVar6,
                       TypeInfo_ApplicationManagers_HeadlessManager->static_fields->
                       _MaxPlayers_k__BackingField,
                       (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
            pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
            if ((pSVar3 == (Settings_InGameSet_o *)0x0) ||
               (pSVar4 = (pSVar3->fields).General, pSVar4 == (Settings_InGameGeneralSettings_o *)0x0))
            goto label_05e17f3e;
            pSVar6 = (pSVar4->fields).MaxPlayers;
            if (Il2CppMethodInitialized_075484df == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
              Il2CppMethodInitialized_075484df = '\x01';
            }
            if (pSVar6 == (Settings_IntSetting_o *)0x0) goto label_05e17f3e;
            Settings_TypedSetting_int___set_Value
                      ((Settings_TypedSetting_int__o *)pSVar6,
                       TypeInfo_ApplicationManagers_HeadlessManager->static_fields->
                       _MaxPlayers_k__BackingField,
                       (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
          }
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
          UnityEngine_WaitForSeconds___ctor(__this_01,0.5,(MethodInfo *)0x0);
          (__this->fields).__2__current = (Il2CppObject *)__this_01;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
          (__this->fields).__1__state = 1;
          goto label_05e17f2a;
        }
      }
    }
  }
label_05e17f3e:
  ThrowNullReferenceException();
}


// ApplicationManagers.HeadlessManager.<HostRoom>d__30$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_HeadlessManager__HostRoom_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_HeadlessManager__HostRoom_d__30_o* __this, const MethodInfo* method);
// 0x5e17f50

Il2CppObject *
ApplicationManagers_HeadlessManager__HostRoom_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_HeadlessManager__HostRoom_d__30_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.HeadlessManager.<HostRoom>d__30$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_HeadlessManager__HostRoom_d__30__System_Collections_IEnumerator_Reset (ApplicationManagers_HeadlessManager__HostRoom_d__30_o* __this, const MethodInfo* method);
// 0x5e17f60

void ApplicationManagers_HeadlessManager__HostRoom_d__30__System_Collections_IEnumerator_Reset
               (ApplicationManagers_HeadlessManager__HostRoom_d__30_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_ApplicationManagers_HeadlessManager_HostRoom_d__30_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// ApplicationManagers.HeadlessManager.<HostRoom>d__30$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_HeadlessManager__HostRoom_d__30__System_Collections_IEnumerator_get_Current (ApplicationManagers_HeadlessManager__HostRoom_d__30_o* __this, const MethodInfo* method);
// 0x5e17fa0

Il2CppObject *
ApplicationManagers_HeadlessManager__HostRoom_d__30__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_HeadlessManager__HostRoom_d__30_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.HeadlessManager.<TryJoinRoom>d__31$$.ctor
// il2cpp: void ApplicationManagers_HeadlessManager__TryJoinRoom_d__31___ctor (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5e170e0

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
// 0x5e17fb0

void ApplicationManagers_HeadlessManager__TryJoinRoom_d__31__System_IDisposable_Dispose
               (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.HeadlessManager.<TryJoinRoom>d__31$$MoveNext
// il2cpp: bool ApplicationManagers_HeadlessManager__TryJoinRoom_d__31__MoveNext (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o* __this, const MethodInfo* method);
// 0x5e17fc0

bool ApplicationManagers_HeadlessManager__TryJoinRoom_d__31__MoveNext
               (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o *__this,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_HeadlessManager_o *pAVar2;
  Settings_MultiplayerSettings_o *__this_00;
  UnityEngine_WaitForSeconds_o *pUVar3;
  Photon_Realtime_RoomInfo_o *room;
  System_String_array *values;
  MethodInfo *method_00;
  System_String_o *roomName;
  System_String_o *pSVar4;
  bool bVar5;
  
  if (Il2CppMethodInitialized_0754844b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RoomProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    il2cpp_codegen_initialize_runtime_metadata(&"[Headless] Joining room \"");
    il2cpp_codegen_initialize_runtime_metadata(&"[Headless] Room \"");
    il2cpp_codegen_initialize_runtime_metadata(&"\" (id=");
    il2cpp_codegen_initialize_runtime_metadata(&")\xe2\x80\xa6");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"\" not found \xe2\x80\x93 retrying in 3 s\xe2\x80\xa6");
    Il2CppMethodInitialized_0754844b = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  pAVar2 = (__this->fields).__4__this;
  if (iVar1 == 2) {
    (__this->fields).__1__state = -1;
    if (pAVar2 == (ApplicationManagers_HeadlessManager_o *)0x0) goto label_05e1839f;
    (pAVar2->fields)._joining = false;
    bVar5 = false;
  }
  else {
    if (iVar1 == 1) {
      (__this->fields).__1__state = -1;
      if (Il2CppMethodInitialized_075484de == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
        Il2CppMethodInitialized_075484de = '\x01';
      }
      room = ApplicationManagers_HeadlessManager__FindRoom
                       (TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_RoomName_k__BackingField
                        ,method);
      if (room != (Photon_Realtime_RoomInfo_o *)0x0) {
        values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
        if (values != (System_String_array *)0x0) {
          if ((int)values->max_length != 0) {
            values->m_Items[0] = "[Headless] Joining room \"";
            Il2CppCodeGenWriteBarrier(values->m_Items);
            if (Il2CppMethodInitialized_075484de == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
              Il2CppMethodInitialized_075484de = '\x01';
            }
            if ((values->max_length & 0xfffffffe) != 0) {
              values->m_Items[1] =
                   TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_RoomName_k__BackingField;
              Il2CppCodeGenWriteBarrier(values->m_Items + 1);
              if (2 < (uint)values->max_length) {
                values->m_Items[2] = "\" (id=";
                Il2CppCodeGenWriteBarrier(values->m_Items + 2);
                if ((values->max_length & 0xfffffffc) != 0) {
                  values->m_Items[3] = (room->fields).name;
                  Il2CppCodeGenWriteBarrier(values->m_Items + 3);
                  if (4 < (uint)values->max_length) {
                    values->m_Items[4] = ")\xe2\x80\xa6";
                    Il2CppCodeGenWriteBarrier(values->m_Items + 4);
                    method_00 = (MethodInfo *)System_String__Concat_5302910(values,(MethodInfo *)0x0);
                    if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
                    }
                    UnityEngine_Debug__Log((Il2CppObject *)method_00,(MethodInfo *)0x0);
                    ApplicationManagers_HeadlessManager__PrepareJoinCharacterSettings(method_00);
                    __this_00 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
                    pSVar4 = (room->fields).name;
                    if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
                    }
                    roomName = PhotonExtensions__GetStringProperty_5751c40
                                         (room,TypeInfo_GameManagers_RoomProperty->static_fields->Name,
                                          "",(MethodInfo *)0x0);
                    if (__this_00 != (Settings_MultiplayerSettings_o *)0x0) {
                      Settings_MultiplayerSettings__JoinRoom
                                (__this_00,pSVar4,roomName,
                                 (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
                      return false;
                    }
                    goto label_05e1839f;
                  }
                }
              }
            }
          }
          ThrowIndexOutOfRangeException();
        }
        goto label_05e1839f;
      }
      if (Il2CppMethodInitialized_075484de == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
        Il2CppMethodInitialized_075484de = '\x01';
      }
      pSVar4 = System_String__Concat_5301f10
                         ("[Headless] Room \"",
                          TypeInfo_ApplicationManagers_HeadlessManager->static_fields->
                          _RoomName_k__BackingField,"\" not found \xe2\x80\x93 retrying in 3 s\xe2\x80\xa6",(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
      }
      UnityEngine_Debug__Log((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
      pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor(pUVar3,3.0,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)pUVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 2;
    }
    else {
      if (iVar1 != 0) {
        return false;
      }
      (__this->fields).__1__state = -1;
      if (pAVar2 == (ApplicationManagers_HeadlessManager_o *)0x0) {
label_05e1839f:
        ThrowNullReferenceException();
      }
      (pAVar2->fields)._joining = true;
      pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor(pUVar3,1.0,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)pUVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 1;
    }
    bVar5 = true;
  }
  return bVar5;
}


// ApplicationManagers.HeadlessManager.<TryJoinRoom>d__31$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_HeadlessManager__TryJoinRoom_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o* __this, const MethodInfo* method);
// 0x5e183b0

Il2CppObject *
ApplicationManagers_HeadlessManager__TryJoinRoom_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.HeadlessManager.<TryJoinRoom>d__31$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_HeadlessManager__TryJoinRoom_d__31__System_Collections_IEnumerator_Reset (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o* __this, const MethodInfo* method);
// 0x5e183c0

void ApplicationManagers_HeadlessManager__TryJoinRoom_d__31__System_Collections_IEnumerator_Reset
               (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_ApplicationManagers_HeadlessManager_TryJoinRoom_d__31_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// ApplicationManagers.HeadlessManager.<TryJoinRoom>d__31$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_HeadlessManager__TryJoinRoom_d__31__System_Collections_IEnumerator_get_Current (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o* __this, const MethodInfo* method);
// 0x5e18400

Il2CppObject *
ApplicationManagers_HeadlessManager__TryJoinRoom_d__31__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.HeadlessManager$$get_IsHeadless
// il2cpp: bool ApplicationManagers_HeadlessManager__get_IsHeadless (const MethodInfo* method);
// 0x5e16730

bool ApplicationManagers_HeadlessManager__get_IsHeadless(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07548434 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_07548434 = '\x01';
  }
  return TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_IsHeadless_k__BackingField;
}


// ApplicationManagers.HeadlessManager$$set_IsHeadless
// il2cpp: void ApplicationManagers_HeadlessManager__set_IsHeadless (bool value, const MethodInfo* method);
// 0x5e16770

void ApplicationManagers_HeadlessManager__set_IsHeadless(bool value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07548435 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_07548435 = '\x01';
  }
  TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_IsHeadless_k__BackingField = value;
  return;
}


// ApplicationManagers.HeadlessManager$$get_Mode
// il2cpp: int32_t ApplicationManagers_HeadlessManager__get_Mode (const MethodInfo* method);
// 0x5e167b0

int32_t ApplicationManagers_HeadlessManager__get_Mode(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07548436 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_07548436 = '\x01';
  }
  return TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_Mode_k__BackingField;
}


// ApplicationManagers.HeadlessManager$$set_Mode
// il2cpp: void ApplicationManagers_HeadlessManager__set_Mode (int32_t value, const MethodInfo* method);
// 0x5e167f0

void ApplicationManagers_HeadlessManager__set_Mode(int32_t value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07548437 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_07548437 = '\x01';
  }
  TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_Mode_k__BackingField = value;
  return;
}


// ApplicationManagers.HeadlessManager$$get_Region
// il2cpp: int32_t ApplicationManagers_HeadlessManager__get_Region (const MethodInfo* method);
// 0x5e16830

int32_t ApplicationManagers_HeadlessManager__get_Region(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07548438 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_07548438 = '\x01';
  }
  return TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_Region_k__BackingField;
}


// ApplicationManagers.HeadlessManager$$set_Region
// il2cpp: void ApplicationManagers_HeadlessManager__set_Region (int32_t value, const MethodInfo* method);
// 0x5e16870

void ApplicationManagers_HeadlessManager__set_Region(int32_t value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07548439 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_07548439 = '\x01';
  }
  TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_Region_k__BackingField = value;
  return;
}


// ApplicationManagers.HeadlessManager$$get_RoomName
// il2cpp: System_String_o* ApplicationManagers_HeadlessManager__get_RoomName (const MethodInfo* method);
// 0x5e168b0

System_String_o * ApplicationManagers_HeadlessManager__get_RoomName(MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754843a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_0754843a = '\x01';
  }
  return TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_RoomName_k__BackingField;
}


// ApplicationManagers.HeadlessManager$$set_RoomName
// il2cpp: void ApplicationManagers_HeadlessManager__set_RoomName (System_String_o* value, const MethodInfo* method);
// 0x5e168f0

void ApplicationManagers_HeadlessManager__set_RoomName(System_String_o *value,MethodInfo *method)

{
  ApplicationManagers_HeadlessManager_StaticFields *pAVar1;
  
  if (Il2CppMethodInitialized_0754843b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_0754843b = '\x01';
  }
  pAVar1 = TypeInfo_ApplicationManagers_HeadlessManager->static_fields;
  pAVar1->_RoomName_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&pAVar1->_RoomName_k__BackingField);
  return;
}


// ApplicationManagers.HeadlessManager$$get_MaxPlayers
// il2cpp: int32_t ApplicationManagers_HeadlessManager__get_MaxPlayers (const MethodInfo* method);
// 0x5e16940

int32_t ApplicationManagers_HeadlessManager__get_MaxPlayers(MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754843c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_0754843c = '\x01';
  }
  return TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_MaxPlayers_k__BackingField;
}


// ApplicationManagers.HeadlessManager$$set_MaxPlayers
// il2cpp: void ApplicationManagers_HeadlessManager__set_MaxPlayers (int32_t value, const MethodInfo* method);
// 0x5e16980

void ApplicationManagers_HeadlessManager__set_MaxPlayers(int32_t value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754843d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_0754843d = '\x01';
  }
  TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_MaxPlayers_k__BackingField = value;
  return;
}


// ApplicationManagers.HeadlessManager$$get_PresetName
// il2cpp: System_String_o* ApplicationManagers_HeadlessManager__get_PresetName (const MethodInfo* method);
// 0x5e169c0

System_String_o * ApplicationManagers_HeadlessManager__get_PresetName(MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754843e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_0754843e = '\x01';
  }
  return TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_PresetName_k__BackingField;
}


// ApplicationManagers.HeadlessManager$$set_PresetName
// il2cpp: void ApplicationManagers_HeadlessManager__set_PresetName (System_String_o* value, const MethodInfo* method);
// 0x5e16a00

void ApplicationManagers_HeadlessManager__set_PresetName(System_String_o *value,MethodInfo *method)

{
  ApplicationManagers_HeadlessManager_StaticFields *pAVar1;
  
  if (Il2CppMethodInitialized_0754843f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_0754843f = '\x01';
  }
  pAVar1 = TypeInfo_ApplicationManagers_HeadlessManager->static_fields;
  pAVar1->_PresetName_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&pAVar1->_PresetName_k__BackingField);
  return;
}


// ApplicationManagers.HeadlessManager$$Init
// il2cpp: void ApplicationManagers_HeadlessManager__Init (const MethodInfo* method);
// 0x5e096b0

void ApplicationManagers_HeadlessManager__Init(MethodInfo *method)

{
  Settings_MultiplayerSettings_o *__this;
  int32_t iVar1;
  bool bVar2;
  ApplicationManagers_HeadlessManager_o *pAVar3;
  System_Object_array *args;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  System_String_o *pSVar6;
  ApplicationManagers_HeadlessManager_StaticFields *pAVar7;
  MethodInfo *in_R9;
  int32_t local_40;
  int32_t local_3c;
  int32_t local_38;
  int32_t local_34;
  int32_t local_30;
  int32_t local_2c;
  System_String_o *local_28;
  System_String_o *local_20;
  
  if (Il2CppMethodInitialized_07548440 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessMode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MultiplayerRegion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_HeadlessManager);
    il2cpp_codegen_initialize_runtime_metadata(&"[Headless] Initialised \xe2\x80\x93 mode={0} region={1} room=\"{2}\" maxPlayers={3} preset=\"{4}\"");
    Il2CppMethodInitialized_07548440 = '\x01';
  }
  local_38 = 0;
  local_3c = 0;
  local_20 = (System_String_o *)0x0;
  local_40 = 0;
  local_28 = (System_String_o *)0x0;
  bVar2 = ApplicationManagers_HeadlessManager__TryParseArgs
                    (&local_38,&local_3c,&local_20,&local_40,&local_28,in_R9);
  if (!bVar2) {
    return;
  }
  if (Il2CppMethodInitialized_075484d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_075484d6 = '\x01';
  }
  iVar1 = local_38;
  pAVar7 = TypeInfo_ApplicationManagers_HeadlessManager->static_fields;
  pAVar7->_IsHeadless_k__BackingField = true;
  if (Il2CppMethodInitialized_075484d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_075484d7 = '\x01';
    pAVar7 = TypeInfo_ApplicationManagers_HeadlessManager->static_fields;
    pAVar7->_Mode_k__BackingField = iVar1;
    if (g_data_075484d8 == '\0') goto label_05e09bb0;
label_05e097ce:
    pAVar7->_Region_k__BackingField = local_3c;
    pSVar6 = local_20;
  }
  else {
    pAVar7->_Mode_k__BackingField = local_38;
    if (g_data_075484d8 != '\0') goto label_05e097ce;
label_05e09bb0:
    iVar1 = local_3c;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    g_data_075484d8 = '\x01';
    pAVar7 = TypeInfo_ApplicationManagers_HeadlessManager->static_fields;
    pAVar7->_Region_k__BackingField = iVar1;
    pSVar6 = local_20;
  }
  local_20 = pSVar6;
  if (Il2CppMethodInitialized_075484d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_075484d9 = '\x01';
    pAVar7 = TypeInfo_ApplicationManagers_HeadlessManager->static_fields;
  }
  pAVar7->_RoomName_k__BackingField = pSVar6;
  Il2CppCodeGenWriteBarrier(&pAVar7->_RoomName_k__BackingField);
  iVar1 = local_40;
  if (Il2CppMethodInitialized_075484da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_075484da = '\x01';
  }
  pSVar6 = local_28;
  pAVar7 = TypeInfo_ApplicationManagers_HeadlessManager->static_fields;
  pAVar7->_MaxPlayers_k__BackingField = iVar1;
  if (Il2CppMethodInitialized_075484db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_075484db = '\x01';
    pAVar7 = TypeInfo_ApplicationManagers_HeadlessManager->static_fields;
  }
  pAVar7->_PresetName_k__BackingField = pSVar6;
  Il2CppCodeGenWriteBarrier(&pAVar7->_PresetName_k__BackingField);
  pAVar3 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_instance,
                      (MethodInfo_3680650 *)
                      MethodInfo_Utility_SingletonFactory_CreateSingleton_HeadlessManager);
  pAVar7 = TypeInfo_ApplicationManagers_HeadlessManager->static_fields;
  pAVar7->_instance = pAVar3;
  Il2CppCodeGenWriteBarrier(&pAVar7->_instance);
  args = (System_Object_array *)SZArrayNew(TypeInfo_object_array,5);
  if (Il2CppMethodInitialized_075484dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_075484dc = '\x01';
  }
  local_2c = TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_Mode_k__BackingField;
  pIVar4 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_ApplicationManagers_HeadlessMode,&local_2c);
  if (args == (System_Object_array *)0x0) {
label_05e09c10:
    ThrowNullReferenceException();
  }
  if ((pIVar4 != (Il2CppObject *)0x0) &&
     (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((args->obj).klass)->_1).element_class),
     pIVar5 == (Il2CppObject *)0x0)) {
label_05e09c01:
    pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = pIVar4;
    Il2CppCodeGenWriteBarrier(args->m_Items);
    if (Il2CppMethodInitialized_075484dd == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
      Il2CppMethodInitialized_075484dd = '\x01';
    }
    local_30 = TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_Region_k__BackingField;
    pIVar4 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_Settings_MultiplayerRegion,&local_30);
    if ((pIVar4 != (Il2CppObject *)0x0) &&
       (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((args->obj).klass)->_1).element_class),
       pIVar5 == (Il2CppObject *)0x0)) goto label_05e09c01;
    if ((args->max_length & 0xfffffffe) != 0) {
      args->m_Items[1] = pIVar4;
      Il2CppCodeGenWriteBarrier(args->m_Items + 1);
      if (Il2CppMethodInitialized_075484de == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
        Il2CppMethodInitialized_075484de = '\x01';
      }
      pSVar6 = TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_RoomName_k__BackingField;
      if ((pSVar6 != (System_String_o *)0x0) &&
         (pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar6,(((args->obj).klass)->_1).element_class),
         pIVar4 == (Il2CppObject *)0x0)) goto label_05e09c01;
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = (Il2CppObject *)pSVar6;
        Il2CppCodeGenWriteBarrier(args->m_Items + 2);
        if (Il2CppMethodInitialized_075484df == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
          Il2CppMethodInitialized_075484df = '\x01';
        }
        local_34 = TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_MaxPlayers_k__BackingField;
        pIVar4 = il2cpp_vm_Object_Box(g_data_07556710,&local_34);
        if ((pIVar4 != (Il2CppObject *)0x0) &&
           (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((args->obj).klass)->_1).element_class),
           pIVar5 == (Il2CppObject *)0x0)) goto label_05e09c01;
        if ((args->max_length & 0xfffffffc) != 0) {
          args->m_Items[3] = pIVar4;
          Il2CppCodeGenWriteBarrier(args->m_Items + 3);
          if (Il2CppMethodInitialized_075484e0 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
            Il2CppMethodInitialized_075484e0 = '\x01';
          }
          pSVar6 = TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_PresetName_k__BackingField;
          if ((pSVar6 != (System_String_o *)0x0) &&
             (pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar6,(((args->obj).klass)->_1).element_class)
             , pIVar4 == (Il2CppObject *)0x0)) goto label_05e09c01;
          if (4 < (uint)args->max_length) {
            args->m_Items[4] = (Il2CppObject *)pSVar6;
            Il2CppCodeGenWriteBarrier(args->m_Items + 4);
            pSVar6 = System_String__Format_5302cf0("[Headless] Initialised \xe2\x80\x93 mode={0} region={1} room=\"{2}\" maxPlayers={3} preset=\"{4}\"",args,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
            }
            UnityEngine_Debug__Log((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
            __this = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
            if (Il2CppMethodInitialized_075484dd == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
              Il2CppMethodInitialized_075484dd = '\x01';
            }
            if (__this != (Settings_MultiplayerSettings_o *)0x0) {
              Settings_MultiplayerSettings__ConnectServer
                        (__this,TypeInfo_ApplicationManagers_HeadlessManager->static_fields->
                                _Region_k__BackingField,(MethodInfo *)0x0);
              return;
            }
            goto label_05e09c10;
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// ApplicationManagers.HeadlessManager$$OnJoinedLobby
// il2cpp: void ApplicationManagers_HeadlessManager__OnJoinedLobby (const MethodInfo* method);
// 0x5e16d80

void ApplicationManagers_HeadlessManager__OnJoinedLobby(MethodInfo *method)

{
  ApplicationManagers_HeadlessManager_o *pAVar1;
  bool bVar2;
  ApplicationManagers_HeadlessManager__HostRoom_d__30_o *__this;
  
  if (Il2CppMethodInitialized_07548441 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548441 = '\x01';
  }
  if (Il2CppMethodInitialized_075458ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_075458ae = '\x01';
  }
  if (TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_IsHeadless_k__BackingField != false) {
    pAVar1 = TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_instance;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pAVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      if (Il2CppMethodInitialized_075484dc == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
        Il2CppMethodInitialized_075484dc = '\x01';
      }
      pAVar1 = TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_instance;
      if (TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_Mode_k__BackingField == 0) {
        if (pAVar1 != (ApplicationManagers_HeadlessManager_o *)0x0) {
          if (Il2CppMethodInitialized_07548443 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_ApplicationManagers_HeadlessManager_HostRoom_d__30);
            Il2CppMethodInitialized_07548443 = '\x01';
          }
          __this = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_ApplicationManagers_HeadlessManager_HostRoom_d__30);
          System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
          (__this->fields).__1__state = 0;
          UnityEngine_MonoBehaviour__StartCoroutine_691c390
                    ((UnityEngine_MonoBehaviour_o *)pAVar1,(System_Collections_IEnumerator_o *)__this,
                     (MethodInfo *)0x0);
          return;
        }
      }
      else if (pAVar1 != (ApplicationManagers_HeadlessManager_o *)0x0) {
        (pAVar1->fields)._lobbyReady = true;
        return;
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// ApplicationManagers.HeadlessManager$$OnRoomListUpdate
// il2cpp: void ApplicationManagers_HeadlessManager__OnRoomListUpdate (const MethodInfo* method);
// 0x5e16f00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e16fa3: jmp 0x5e16fdd

void ApplicationManagers_HeadlessManager__OnRoomListUpdate(MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_HeadlessManager_o *pAVar2;
  ApplicationManagers_HeadlessManager_StaticFields *pAVar3;
  bool bVar4;
  ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o *__this;
  
  if (Il2CppMethodInitialized_07548442 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548442 = '\x01';
  }
  if (Il2CppMethodInitialized_075458ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_075458ae = '\x01';
  }
  if (TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_IsHeadless_k__BackingField != false) {
    pAVar2 = TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_instance;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pAVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      if (Il2CppMethodInitialized_075484dc == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
        Il2CppMethodInitialized_075484dc = '\x01';
        pAVar3 = TypeInfo_ApplicationManagers_HeadlessManager->static_fields;
        iVar1 = pAVar3->_Mode_k__BackingField;
      }
      else {
        pAVar3 = TypeInfo_ApplicationManagers_HeadlessManager->static_fields;
        iVar1 = pAVar3->_Mode_k__BackingField;
      }
      if (iVar1 == 1) {
        pAVar2 = pAVar3->_instance;
        if (pAVar2 == (ApplicationManagers_HeadlessManager_o *)0x0) {
          ThrowNullReferenceException();
        }
        if (((pAVar2->fields)._lobbyReady != false) && ((pAVar2->fields)._joining == false)) {
          if (Il2CppMethodInitialized_07548444 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_ApplicationManagers_HeadlessManager_TryJoinRoom_d__31);
            Il2CppMethodInitialized_07548444 = '\x01';
          }
          __this = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_ApplicationManagers_HeadlessManager_TryJoinRoom_d__31);
          System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
          (__this->fields).__1__state = 0;
          (__this->fields).__4__this = pAVar2;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__4__this);
          UnityEngine_MonoBehaviour__StartCoroutine_691c390
                    ((UnityEngine_MonoBehaviour_o *)pAVar2,(System_Collections_IEnumerator_o *)__this,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  return;
}


// ApplicationManagers.HeadlessManager$$HostRoom
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_HeadlessManager__HostRoom (ApplicationManagers_HeadlessManager_o* __this, const MethodInfo* method);
// 0x5e16eb0

System_Collections_IEnumerator_o *
ApplicationManagers_HeadlessManager__HostRoom
          (ApplicationManagers_HeadlessManager_o *__this,MethodInfo *method)

{
  ApplicationManagers_HeadlessManager__HostRoom_d__30_o *__this_00;
  
  if (Il2CppMethodInitialized_07548443 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager_HostRoom_d__30);
    Il2CppMethodInitialized_07548443 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_HeadlessManager_HostRoom_d__30);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ApplicationManagers.HeadlessManager$$TryJoinRoom
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_HeadlessManager__TryJoinRoom (ApplicationManagers_HeadlessManager_o* __this, const MethodInfo* method);
// 0x5e17050

System_Collections_IEnumerator_o *
ApplicationManagers_HeadlessManager__TryJoinRoom
          (ApplicationManagers_HeadlessManager_o *__this,MethodInfo *method)

{
  ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o *__this_00;
  
  if (Il2CppMethodInitialized_07548444 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_HeadlessManager_TryJoinRoom_d__31);
    Il2CppMethodInitialized_07548444 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_HeadlessManager_TryJoinRoom_d__31);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ApplicationManagers.HeadlessManager$$FindRoom
// il2cpp: Photon_Realtime_RoomInfo_o* ApplicationManagers_HeadlessManager__FindRoom (System_String_o* displayName, const MethodInfo* method);
// 0x5e17100
// eh: try 0x5e17204..0x5e17255 -> pad 0x5e1729e (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5e172b5..0x5e172ba -> pad 0x5e172e1 cleanup
// eh: try 0x5e172e4..0x5e172ec -> pad 0x5e172f4 catch (...) [compiler noexcept guard]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e171ff: nop 
// asm:   0x5e17298: jmp 0x5e1729e
// asm:   0x5e1729a: jmp 0x5e1729e
// asm:   0x5e1729c: jmp 0x5e1729e
// asm:   0x5e1729e: mov rbx, rax
// asm:   0x5e172a1: cmp edx, 1
// asm:   0x5e172a4: jne 0x5e172e4
// asm:   0x5e172a6: mov rdi, rbx
// asm:   0x5e172a9: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e172ae: mov rbx, qword ptr [rax]
// asm:   0x5e172b1: mov qword ptr [rsp], rbx
// asm:   0x5e172b5: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e172ba: lea rax, [rip + 0x1478e3f]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_RoomInfo_Dispose
// asm:   0x5e172c1: mov rsi, qword ptr [rax]
// asm:   0x5e172c4: lea rdi, [rsp + 0x10]
// asm:   0x5e172c9: call 0x4de67f0  ; System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose()
// asm:   0x5e172ce: test rbx, rbx
// asm:   0x5e172d1: jne 0x5e172d9
// asm:   0x5e172d3: xor ebx, ebx
// asm:   0x5e172d5: xor ebp, ebp
// asm:   0x5e172d7: jmp 0x5e1727b
// asm:   0x5e172d9: mov rdi, rbx
// asm:   0x5e172dc: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5e172e1: mov rbx, rax
// asm:   0x5e172e4: mov rdi, rsp
// asm:   0x5e172e7: call 0x2fe0440  ; il2cpp_runtime_helper_02fe0440()
// asm:   0x5e172ec: mov rdi, rbx
// asm:   0x5e172ef: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e172f4: mov rdi, rax
// asm:   0x5e172f7: call 0x2ab61e0  ; __clang_call_terminate()

Photon_Realtime_RoomInfo_o *
ApplicationManagers_HeadlessManager__FindRoom(System_String_o *displayName,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar1;
  System_String_o *a;
  Photon_Realtime_RoomInfo_o *pPVar2;
  Photon_Realtime_RoomInfo_o *room;
  int iVar3;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_58;
  
  if (Il2CppMethodInitialized_07548445 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_RoomInfo_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_RoomInfo_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_RoomInfo_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_RoomInfo_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_RoomInfo_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MainMenuGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RoomProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07548445 = '\x01';
  }
  local_58.fields._current.fields.key = (Il2CppObject *)0x0;
  local_58.fields._current.fields.value = (Il2CppObject *)0x0;
  local_58.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_58.fields._version = 0;
  local_58.fields._index = 0;
  local_58.fields._getEnumeratorRetType = 0;
  local_58.fields._36_4_ = 0;
  if ((TypeInfo_GameManagers_MainMenuGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MainMenuGameManager);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_GameManagers_MainMenuGameManager->static_fields->RoomList;
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___GetEnumerator
            (&local_58,__this,
             (MethodInfo_4AAD970 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_RoomInfo_GetEnumerator);
  do {
    bVar1 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                      ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)&local_58,
                       (MethodInfo_4CE66D0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_RoomInfo_MoveNext);
    room = (Photon_Realtime_RoomInfo_o *)local_58.fields._current.fields.value;
    if (!bVar1) {
      iVar3 = 5;
      room = (Photon_Realtime_RoomInfo_o *)0x0;
      goto label_05e17267;
    }
    if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
    }
    a = PhotonExtensions__GetStringProperty_5751c40
                  (room,TypeInfo_GameManagers_RoomProperty->static_fields->Name,"",
                   (MethodInfo *)0x0);
    bVar1 = System_String__Equals_52ffe30(a,displayName,5,(MethodInfo *)0x0);
  } while (!bVar1);
  iVar3 = 4;
label_05e17267:
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
            ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)&local_58,
             (MethodInfo_4CE67F0 *)
             MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_RoomInfo_Dispose);
  pPVar2 = (Photon_Realtime_RoomInfo_o *)0x0;
  if (iVar3 == 4) {
    pPVar2 = room;
  }
  return pPVar2;
}


// ApplicationManagers.HeadlessManager$$PrepareJoinCharacterSettings
// il2cpp: void ApplicationManagers_HeadlessManager__PrepareJoinCharacterSettings (const MethodInfo* method);
// 0x5e17300
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e174fd: nop dword ptr [rax]
// asm:   0x5e176ee: lea rcx, [rip + 0x14876c3]  ; MethodInfo_Settings_TypedSetting_int_set_Value
// asm:   0x5e176f5: mov rdx, qword ptr [rcx]
// asm:   0x5e176f8: mov rdi, rbx
// asm:   0x5e176fb: mov esi, eax
// asm:   0x5e176fd: jmp 0x5e17739
// asm:   0x5e1770d: lea rax, [rip + 0x14876a4]  ; MethodInfo_Settings_TypedSetting_int_set_Value
// asm:   0x5e17714: mov rdx, qword ptr [rax]
// asm:   0x5e17717: mov esi, ebp
// asm:   0x5e17719: jmp 0x5e17739

void ApplicationManagers_HeadlessManager__PrepareJoinCharacterSettings(MethodInfo *method)

{
  byte bVar1;
  Settings_InGameCharacterSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  Settings_HumanCustomSettings_o *pSVar4;
  Settings_SetSettingsContainer_HumanCustomSet__o *pSVar5;
  Settings_ListSetting_T__o *pSVar6;
  System_String_o *pSVar7;
  bool bVar8;
  int32_t iVar9;
  int32_t iVar10;
  Settings_BaseSetting_o *pSVar11;
  int32_t index;
  int index_00;
  Settings_IntSetting_o *pSVar12;
  
  if (Il2CppMethodInitialized_07548446 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_HumanCustomSet_GetCount);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_HumanCustomSet_GetItemAt);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_07548446 = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
  if (pSVar2 != (Settings_InGameCharacterSettings_o *)0x0) {
    pSVar3 = (pSVar2->fields).CharacterType;
    if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
    }
    if (pSVar3 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar3,
                 (Il2CppObject *)TypeInfo_GameManagers_PlayerCharacter->static_fields->Human,
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      pSVar12 = (pSVar2->fields).ChooseStatus;
      if (pSVar12 != (Settings_IntSetting_o *)0x0) {
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)pSVar12,2,
                   (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        pSVar3 = (pSVar2->fields).Loadout;
        if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
        }
        if (pSVar3 != (Settings_StringSetting_o *)0x0) {
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar3,
                     (Il2CppObject *)TypeInfo_GameManagers_HumanLoadout->static_fields->Blade,
                     (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
          if (((pSVar4 != (Settings_HumanCustomSettings_o *)0x0) &&
              (pSVar5 = (pSVar4->fields).Costume1Sets,
              pSVar5 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) &&
             (pSVar6 = (pSVar5->fields).Sets, pSVar6 != (Settings_ListSetting_T__o *)0x0)) {
            iVar9 = Settings_ListSetting_object___GetCount
                              (pSVar6,(MethodInfo_515DE80 *)
                                      MethodInfo_Settings_ListSetting_HumanCustomSet_GetCount);
            pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
            if (((pSVar4 != (Settings_HumanCustomSettings_o *)0x0) &&
                (pSVar5 = (pSVar4->fields).CustomSets,
                pSVar5 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) &&
               (pSVar6 = (pSVar5->fields).Sets, pSVar6 != (Settings_ListSetting_T__o *)0x0)) {
              iVar10 = Settings_ListSetting_object___GetCount
                                 (pSVar6,(MethodInfo_515DE80 *)
                                         MethodInfo_Settings_ListSetting_HumanCustomSet_GetCount);
              if (0 < iVar9) {
                index = 0;
                do {
                  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
                  if (((pSVar4 == (Settings_HumanCustomSettings_o *)0x0) ||
                      (pSVar5 = (pSVar4->fields).Costume1Sets,
                      pSVar5 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) ||
                     ((pSVar6 = (pSVar5->fields).Sets, pSVar6 == (Settings_ListSetting_T__o *)0x0 ||
                      (pSVar11 = Settings_ListSetting_object___GetItemAt
                                           (pSVar6,index,
                                            (MethodInfo_515DEA0 *)
                                            MethodInfo_Settings_ListSetting_HumanCustomSet_GetItemAt),
                      pSVar11 == (Settings_BaseSetting_o *)0x0)))) goto label_05e1775b;
                  bVar1 = (TypeInfo_Settings_BaseSetSetting->_2).typeHierarchyDepth;
                  if (((pSVar11->klass->_2).typeHierarchyDepth < bVar1) ||
                     ((pSVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                      (Il2CppClass *)TypeInfo_Settings_BaseSetSetting)) goto label_05e17760;
                  if ((*(uint64_t *)((char *)pSVar11 + 0x30)) == (Settings_BaseSetting_c *)0x0) goto label_05e1775b;
                  pSVar7 = (((*(Il2CppClass **)((char *)pSVar11 + 0x30)))->_1).byval_arg.data;
                  if (Il2CppMethodInitialized_075484e0 == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
                    Il2CppMethodInitialized_075484e0 = '\x01';
                  }
                  bVar8 = System_String__Equals_52ffe30
                                    (pSVar7,TypeInfo_ApplicationManagers_HeadlessManager->static_fields->
                                            _PresetName_k__BackingField,5,(MethodInfo *)0x0);
                  if (bVar8) {
                    pSVar12 = (pSVar2->fields).CustomSet;
                    if (pSVar12 != (Settings_IntSetting_o *)0x0) goto label_05e17739;
                    goto label_05e1775b;
                  }
                  index = index + 1;
                } while (iVar9 != index);
              }
              if (0 < iVar10) {
                index_00 = 0;
                do {
                  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
                  if ((((pSVar4 == (Settings_HumanCustomSettings_o *)0x0) ||
                       (pSVar5 = (pSVar4->fields).CustomSets,
                       pSVar5 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) ||
                      (pSVar6 = (pSVar5->fields).Sets, pSVar6 == (Settings_ListSetting_T__o *)0x0)) ||
                     (pSVar11 = Settings_ListSetting_object___GetItemAt
                                          (pSVar6,index_00,
                                           (MethodInfo_515DEA0 *)
                                           MethodInfo_Settings_ListSetting_HumanCustomSet_GetItemAt),
                     pSVar11 == (Settings_BaseSetting_o *)0x0)) goto label_05e1775b;
                  bVar1 = (TypeInfo_Settings_BaseSetSetting->_2).typeHierarchyDepth;
                  if (((pSVar11->klass->_2).typeHierarchyDepth < bVar1) ||
                     ((pSVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                      (Il2CppClass *)TypeInfo_Settings_BaseSetSetting)) {
label_05e17760:
                    il2cpp_codegen_raise_invalid_cast_exception(pSVar11);
                  }
                  if ((*(uint64_t *)((char *)pSVar11 + 0x30)) == (Settings_BaseSetting_c *)0x0) goto label_05e1775b;
                  pSVar7 = (((*(Il2CppClass **)((char *)pSVar11 + 0x30)))->_1).byval_arg.data;
                  if (Il2CppMethodInitialized_075484e0 == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
                    Il2CppMethodInitialized_075484e0 = '\x01';
                  }
                  bVar8 = System_String__Equals_52ffe30
                                    (pSVar7,TypeInfo_ApplicationManagers_HeadlessManager->static_fields->
                                            _PresetName_k__BackingField,5,(MethodInfo *)0x0);
                  if (bVar8) {
                    pSVar12 = (pSVar2->fields).CustomSet;
                    if (pSVar12 == (Settings_IntSetting_o *)0x0) goto label_05e1775b;
                    index = iVar9 + index_00;
                    goto label_05e17739;
                  }
                  index_00 = index_00 + 1;
                } while (iVar10 != index_00);
              }
              if (iVar10 + iVar9 < 1) {
                return;
              }
              pSVar12 = (pSVar2->fields).CustomSet;
              index = UnityEngine_Random__Range_690e2b0(0,iVar10 + iVar9,(MethodInfo *)0x0);
              if (pSVar12 != (Settings_IntSetting_o *)0x0) {
label_05e17739:
                Settings_TypedSetting_int___set_Value
                          ((Settings_TypedSetting_int__o *)pSVar12,index,
                           (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                return;
              }
            }
          }
        }
      }
    }
  }
label_05e1775b:
  ThrowNullReferenceException();
}


// ApplicationManagers.HeadlessManager$$TryApplyPreset
// il2cpp: bool ApplicationManagers_HeadlessManager__TryApplyPreset (System_String_o* presetName, const MethodInfo* method);
// 0x5e17770
// eh: try 0x5e178a4..0x5e179c5 -> pad 0x5e179cf (+8 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5e179e9..0x5e179ee -> pad 0x5e17a19 cleanup
// eh: try 0x5e17a1c..0x5e17a26 -> pad 0x5e17a2e catch (...) [compiler noexcept guard]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e179c5: jmp 0x5e179d1
// asm:   0x5e179c7: jmp 0x5e179d1
// asm:   0x5e179c9: jmp 0x5e179d1
// asm:   0x5e179cb: jmp 0x5e179d1
// asm:   0x5e179cd: jmp 0x5e179d1
// asm:   0x5e179cf: jmp 0x5e179d1
// asm:   0x5e179d1: mov rbx, rax
// asm:   0x5e179d4: cmp edx, 1
// asm:   0x5e179d7: jne 0x5e17a1c
// asm:   0x5e179d9: mov rdi, rbx
// asm:   0x5e179dc: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e179e1: mov rbx, qword ptr [rax]
// asm:   0x5e179e4: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5e179e9: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e179ee: lea rax, [rip + 0x1475db3]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose
// asm:   0x5e179f5: mov rsi, qword ptr [rax]
// asm:   0x5e179f8: mov rdi, rsp
// asm:   0x5e179fb: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5e17a00: xor ebp, ebp
// asm:   0x5e17a02: mov r14d, 0
// asm:   0x5e17a08: test rbx, rbx
// asm:   0x5e17a0b: je 0x5e1798b
// asm:   0x5e17a11: mov rdi, rbx
// asm:   0x5e17a14: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5e17a19: mov rbx, rax
// asm:   0x5e17a1c: lea rdi, [rsp + 0x20]
// asm:   0x5e17a21: call 0x2fe0470  ; il2cpp_runtime_helper_02fe0470()
// asm:   0x5e17a26: mov rdi, rbx
// asm:   0x5e17a29: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e17a2e: mov rdi, rax
// asm:   0x5e17a31: call 0x2ab61e0  ; __clang_call_terminate()

bool ApplicationManagers_HeadlessManager__TryApplyPreset(System_String_o *presetName,MethodInfo *method)

{
  byte bVar1;
  Settings_InGameSettings_o *pSVar2;
  Settings_SetSettingsContainer_InGameSet__o *pSVar3;
  Settings_ListSetting_T__o *__this;
  Settings_InGameSet_o *pSVar4;
  Il2CppObject *pIVar5;
  bool bVar6;
  bool bVar7;
  System_Collections_Generic_List_BaseSetting__o *__this_00;
  int iVar8;
  System_Collections_Generic_List_Enumerator_object__o local_68;
  undefined1 local_48 [16];
  Settings_BaseSetting_o *local_38;
  
  if (Il2CppMethodInitialized_07548447 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InGameSet);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_InGameSet_GetItems);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07548447 = '\x01';
  }
  local_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameSettings;
  if (((pSVar2 != (Settings_InGameSettings_o *)0x0) &&
      (pSVar3 = (pSVar2->fields).InGameSets, pSVar3 != (Settings_SetSettingsContainer_InGameSet__o *)0x0)) &&
     (__this = (pSVar3->fields).Sets, __this != (Settings_ListSetting_T__o *)0x0)) {
    __this_00 = Settings_ListSetting_object___GetItems
                          (__this,(MethodInfo_515DED0 *)MethodInfo_Settings_ListSetting_InGameSet_GetItems);
    if (__this_00 != (System_Collections_Generic_List_BaseSetting__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                 (System_Collections_Generic_List_object__o *)__this_00,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
      local_68.fields._current = (Il2CppObject *)local_38;
      local_68.fields._list = (System_Collections_Generic_List_T__o *)local_48._0_8_;
      local_68.fields._index = local_48._8_4_;
      local_68.fields._version = local_48._12_4_;
      local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_48._8_8_ = &local_68;
      do {
        bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&local_68,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext);
        pIVar5 = local_68.fields._current;
        if (!bVar6) {
          iVar8 = 5;
          goto label_05e17979;
        }
        if ((Settings_BaseSetting_o *)local_68.fields._current == (Settings_BaseSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar1 = (TypeInfo_Settings_InGameSet->_2).typeHierarchyDepth;
        if (((((Settings_BaseSetting_c *)(local_68.fields._current)->klass)->_2).typeHierarchyDepth < bVar1)
           || ((((Settings_BaseSetting_c *)(local_68.fields._current)->klass)->_2).typeHierarchy
               [(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_InGameSet)) {
          il2cpp_codegen_raise_invalid_cast_exception(local_68.fields._current);
        }
        if (((Settings_BaseSetting_o *)((long)local_68.fields._current + 0x30))->klass ==
            (Settings_BaseSetting_c *)0x0) {
          ThrowNullReferenceException();
        }
        bVar7 = System_String__Equals_52ffe30
                          ((((Settings_BaseSetting_o *)((long)local_68.fields._current + 0x30))->klass->_1).
                           byval_arg.data,presetName,5,(MethodInfo *)0x0);
      } while (!bVar7);
      pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
      if (pSVar4 == (Settings_InGameSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(pSVar4->klass->vtable)._10_Copy.methodPtr)
                (pSVar4,(Settings_BaseSetting_o *)pIVar5,(pSVar4->klass->vtable)._10_Copy.method);
      pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
      if (pSVar4 == (Settings_InGameSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      iVar8 = 4;
      (*(pSVar4->klass->vtable)._10_Copy.methodPtr)
                (pSVar4,(Settings_BaseSetting_o *)pIVar5,(pSVar4->klass->vtable)._10_Copy.method);
label_05e17979:
      System_Collections_Generic_List_Enumerator_object___Dispose
                (&local_68,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
      return iVar8 == 4 && bVar6;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.HeadlessManager$$TryParseArgs
// il2cpp: bool ApplicationManagers_HeadlessManager__TryParseArgs (int32_t* mode, int32_t* region, System_String_o** roomName, int32_t* maxPlayers, System_String_o** preset, const MethodInfo* method);
// 0x5e16a50

bool ApplicationManagers_HeadlessManager__TryParseArgs
               (int32_t *mode,int32_t *region,System_String_o **roomName,int32_t *maxPlayers,
               System_String_o **preset,MethodInfo *method)

{
  ulong uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  System_String_array *pSVar5;
  System_String_o *pSVar6;
  ulong uVar7;
  uint uVar8;
  
  if (Il2CppMethodInitialized_07548448 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&"-headless-host");
    il2cpp_codegen_initialize_runtime_metadata(&"-headless-join");
    il2cpp_codegen_initialize_runtime_metadata(&"[Headless] Unknown region \"");
    il2cpp_codegen_initialize_runtime_metadata(&"\" \xe2\x80\x93 defaulting to 10.");
    il2cpp_codegen_initialize_runtime_metadata(&"\" \xe2\x80\x93 defaulting to EU.");
    il2cpp_codegen_initialize_runtime_metadata(&"[Headless] Invalid maxplayers \"");
    Il2CppMethodInitialized_07548448 = '\x01';
  }
  *mode = 0;
  *region = 0;
  *roomName = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(roomName);
  *maxPlayers = 10;
  *preset = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(preset);
  pSVar5 = System_Environment__GetCommandLineArgs((MethodInfo *)0x0);
  if (pSVar5 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = pSVar5->max_length;
  if (0 < (int)uVar1) {
    uVar7 = 0;
    do {
      if (((uVar1 & 0xffffffff) <= uVar7) ||
         (bVar3 = System_String__op_Equality(pSVar5->m_Items[uVar7],"-headless-host",(MethodInfo *)0x0),
         (uint)pSVar5->max_length <= uVar7)) {
label_05e16d72:
        ThrowIndexOutOfRangeException();
      }
      bVar4 = System_String__op_Equality(pSVar5->m_Items[uVar7],"-headless-join",(MethodInfo *)0x0);
      uVar1 = pSVar5->max_length;
      uVar8 = (uint)uVar1;
      if ((bVar4 || bVar3) && (iVar2 = (int)uVar7, iVar2 + 4 < (int)uVar8)) {
        if (iVar2 + 1U < uVar8) {
          pSVar6 = pSVar5->m_Items[uVar7 + 1];
          if (Il2CppMethodInitialized_07548449 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_TryParse_MultiplayerRegion);
            Il2CppMethodInitialized_07548449 = '\x01';
          }
          if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_07556760);
          }
          bVar4 = System_Enum__TryParse_Int32Enum__34dc6f0
                            (pSVar6,true,region,
                             (MethodInfo_34DC6F0 *)MethodInfo_System_Enum_TryParse_MultiplayerRegion);
          if (!bVar4) {
            if ((uint)pSVar5->max_length <= iVar2 + 1U) goto label_05e16d72;
            pSVar6 = System_String__Concat_5301f10
                               ("[Headless] Unknown region \"",pSVar5->m_Items[uVar7 + 1],"\" \xe2\x80\x93 defaulting to EU.",
                                (MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
            }
            UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
          }
          if (iVar2 + 2U < (uint)pSVar5->max_length) {
            *roomName = pSVar5->m_Items[(int)(iVar2 + 2U)];
            Il2CppCodeGenWriteBarrier(roomName);
            uVar8 = iVar2 + 3;
            if (uVar8 < (uint)pSVar5->max_length) {
              bVar4 = System_Int32__TryParse(pSVar5->m_Items[(int)uVar8],maxPlayers,(MethodInfo *)0x0);
              if ((!bVar4) || (*maxPlayers < 0)) {
                if ((uint)pSVar5->max_length <= uVar8) goto label_05e16d72;
                pSVar6 = System_String__Concat_5301f10
                                   ("[Headless] Invalid maxplayers \"",pSVar5->m_Items[(int)uVar8],"\" \xe2\x80\x93 defaulting to 10.",
                                    (MethodInfo *)0x0);
                if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
                }
                UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
                *maxPlayers = 10;
              }
              if (iVar2 + 4U < (uint)pSVar5->max_length) {
                *preset = pSVar5->m_Items[(int)(iVar2 + 4U)];
                Il2CppCodeGenWriteBarrier(preset);
                *mode = (uint)!bVar3;
                return true;
              }
            }
          }
        }
        goto label_05e16d72;
      }
      uVar7 = uVar7 + 1;
    } while ((long)uVar7 < (long)(int)uVar8);
  }
  return false;
}


// ApplicationManagers.HeadlessManager$$TryParseRegion
// il2cpp: bool ApplicationManagers_HeadlessManager__TryParseRegion (System_String_o* value, int32_t* region, const MethodInfo* method);
// 0x5e17a40

bool ApplicationManagers_HeadlessManager__TryParseRegion
               (System_String_o *value,int32_t *region,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_07548449 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_TryParse_MultiplayerRegion);
    Il2CppMethodInitialized_07548449 = '\x01';
  }
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  bVar1 = System_Enum__TryParse_Int32Enum__34dc6f0
                    (value,true,region,(MethodInfo_34DC6F0 *)MethodInfo_System_Enum_TryParse_MultiplayerRegion
                    );
  return bVar1;
}


// ApplicationManagers.HeadlessManager$$.ctor
// il2cpp: void ApplicationManagers_HeadlessManager___ctor (ApplicationManagers_HeadlessManager_o* __this, const MethodInfo* method);
// 0x5e17ab0

void ApplicationManagers_HeadlessManager___ctor
               (ApplicationManagers_HeadlessManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


