// Type: ApplicationManagers.HeadlessManager
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/HeadlessManager.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.HeadlessManager.<HostRoom>d__30$$.ctor
// il2cpp: void ApplicationManagers_HeadlessManager__HostRoom_d__30___ctor (ApplicationManagers_HeadlessManager__HostRoom_d__30_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
ApplicationManagers_HeadlessManager__HostRoom_d__30___ctor(ApplicationManagers_HeadlessManager__HostRoom_d__30_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.HeadlessManager.<HostRoom>d__30$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_HeadlessManager__HostRoom_d__30__System_IDisposable_Dispose (ApplicationManagers_HeadlessManager__HostRoom_d__30_o* __this, const MethodInfo* method);
// 0x180547020

void
ApplicationManagers_HeadlessManager__HostRoom_d__30__System_IDisposable_Dispose(ApplicationManagers_HeadlessManager__HostRoom_d__30_o* __this, MethodInfo* method)

{
  return;
}


// ApplicationManagers.HeadlessManager.<HostRoom>d__30$$MoveNext
// il2cpp: bool ApplicationManagers_HeadlessManager__HostRoom_d__30__MoveNext (ApplicationManagers_HeadlessManager__HostRoom_d__30_o* __this, const MethodInfo* method);
// 0x182359ea0

bool ApplicationManagers_HeadlessManager__HostRoom_d__30__MoveNext
               (ApplicationManagers_HeadlessManager__HostRoom_d__30_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameGeneralSettings_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  Settings_MultiplayerSettings_o *__this_00;
  bool bVar6;
  System_String_o *pSVar7;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *__this_01;
  Il2CppObject *arg1;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_18434798e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    il2cpp_codegen_initialize_runtime_metadata(&"[Headless] Creating room \"{0}\" (max={1}) with preset \"{2}\"\xe2\x80\xa6");
    il2cpp_codegen_initialize_runtime_metadata(&"\" not found \xe2\x80\x93 using defaults.");
    il2cpp_codegen_initialize_runtime_metadata(&"[Headless] Preset \"");
    Il2CppMethodInitialized_18434798e = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      (__this->fields).__1__state = -1;
      if (Il2CppMethodInitialized_1843479db == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
        Il2CppMethodInitialized_1843479db = '\x01';
      }
      pSVar7 = TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_RoomName_k__BackingField;
      if (Il2CppMethodInitialized_1843479dc == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
        Il2CppMethodInitialized_1843479dc = '\x01';
      }
      local_res8[0] = TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_MaxPlayers_k__BackingField
      ;
      arg1 = il2cpp_value_box(g_data_184354e08,local_res8);
      if (Il2CppMethodInitialized_1843479dd == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
        Il2CppMethodInitialized_1843479dd = '\x01';
      }
      pSVar7 = System_String__Format_196d050
                         ("[Headless] Creating room \"{0}\" (max={1}) with preset \"{2}\"\xe2\x80\xa6",(Il2CppObject *)pSVar7,arg1,
                          (Il2CppObject *)
                          TypeInfo_ApplicationManagers_HeadlessManager->static_fields->
                          _PresetName_k__BackingField,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
      }
      UnityEngine_Debug__Log((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
      __this_00 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
      if (__this_00 == (Settings_MultiplayerSettings_o *)0x0) {
        ThrowNullReferenceException();
      }
      Settings_MultiplayerSettings__StartRoom(__this_00,(MethodInfo *)0x0);
    }
    return false;
  }
  (__this->fields).__1__state = -1;
  if (Il2CppMethodInitialized_1843479dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_1843479dd = '\x01';
  }
  bVar6 = ApplicationManagers_HeadlessManager__TryApplyPreset
                    (TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_PresetName_k__BackingField,
                     (MethodInfo *)0x0);
  if (!bVar6) {
    if (Il2CppMethodInitialized_1843479dd == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
      Il2CppMethodInitialized_1843479dd = '\x01';
    }
    pSVar7 = System_String__Concat_1969b70
                       ("[Headless] Preset \"",
                        TypeInfo_ApplicationManagers_HeadlessManager->static_fields->
                        _PresetName_k__BackingField,"\" not found \xe2\x80\x93 using defaults.",(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
    }
    UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if ((pSVar2 != (Settings_InGameSet_o *)0x0) &&
     (pSVar3 = (pSVar2->fields).General, pSVar3 != (Settings_InGameGeneralSettings_o *)0x0)) {
    pSVar4 = (pSVar3->fields).RoomName;
    if (Il2CppMethodInitialized_1843479db == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
      Il2CppMethodInitialized_1843479db = '\x01';
    }
    if (pSVar4 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar4,
                 (Il2CppObject *)
                 TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_RoomName_k__BackingField,
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
      if ((pSVar2 != (Settings_InGameSet_o *)0x0) &&
         (pSVar3 = (pSVar2->fields).General, pSVar3 != (Settings_InGameGeneralSettings_o *)0x0)) {
        pSVar4 = (pSVar3->fields).RoomName;
        if (Il2CppMethodInitialized_1843479db == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
          Il2CppMethodInitialized_1843479db = '\x01';
        }
        if (pSVar4 != (Settings_StringSetting_o *)0x0) {
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar4,
                     (Il2CppObject *)
                     TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_RoomName_k__BackingField,
                     (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          if (Il2CppMethodInitialized_1843479dc == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
            Il2CppMethodInitialized_1843479dc = '\x01';
          }
          if (TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_MaxPlayers_k__BackingField < 1) {
label_18235a1c5:
            __this_01 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                        il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
            UnityEngine_WaitForSeconds___ctor(__this_01,0.5,(MethodInfo *)0x0);
            (__this->fields).__2__current = (Il2CppObject *)__this_01;
            Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_01);
            (__this->fields).__1__state = 1;
            return true;
          }
          pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
          if ((pSVar2 != (Settings_InGameSet_o *)0x0) &&
             (pSVar3 = (pSVar2->fields).General, pSVar3 != (Settings_InGameGeneralSettings_o *)0x0)) {
            pSVar5 = (pSVar3->fields).MaxPlayers;
            if (Il2CppMethodInitialized_1843479dc == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
              Il2CppMethodInitialized_1843479dc = '\x01';
            }
            if (pSVar5 != (Settings_IntSetting_o *)0x0) {
              Settings_TypedSetting_int___set_Value
                        ((Settings_TypedSetting_int__o *)pSVar5,
                         TypeInfo_ApplicationManagers_HeadlessManager->static_fields->
                         _MaxPlayers_k__BackingField,
                         (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
              pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
              if ((pSVar2 != (Settings_InGameSet_o *)0x0) &&
                 (pSVar3 = (pSVar2->fields).General, pSVar3 != (Settings_InGameGeneralSettings_o *)0x0)) {
                pSVar5 = (pSVar3->fields).MaxPlayers;
                if (Il2CppMethodInitialized_1843479dc == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
                  Il2CppMethodInitialized_1843479dc = '\x01';
                }
                if (pSVar5 != (Settings_IntSetting_o *)0x0) {
                  Settings_TypedSetting_int___set_Value
                            ((Settings_TypedSetting_int__o *)pSVar5,
                             TypeInfo_ApplicationManagers_HeadlessManager->static_fields->
                             _MaxPlayers_k__BackingField,
                             (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                  goto label_18235a1c5;
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.HeadlessManager.<HostRoom>d__30$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_HeadlessManager__HostRoom_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_HeadlessManager__HostRoom_d__30_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_HeadlessManager__HostRoom_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current(ApplicationManagers_HeadlessManager__HostRoom_d__30_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.HeadlessManager.<HostRoom>d__30$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_HeadlessManager__HostRoom_d__30__System_Collections_IEnumerator_Reset (ApplicationManagers_HeadlessManager__HostRoom_d__30_o* __this, const MethodInfo* method);
// 0x18235a330

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
// 0x180573e90

Il2CppObject*
ApplicationManagers_HeadlessManager__HostRoom_d__30__System_Collections_IEnumerator_get_Current(ApplicationManagers_HeadlessManager__HostRoom_d__30_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.HeadlessManager.<TryJoinRoom>d__31$$.ctor
// il2cpp: void ApplicationManagers_HeadlessManager__TryJoinRoom_d__31___ctor (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
ApplicationManagers_HeadlessManager__TryJoinRoom_d__31___ctor(ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.HeadlessManager.<TryJoinRoom>d__31$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_HeadlessManager__TryJoinRoom_d__31__System_IDisposable_Dispose (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o* __this, const MethodInfo* method);
// 0x180547020

void
ApplicationManagers_HeadlessManager__TryJoinRoom_d__31__System_IDisposable_Dispose(ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o* __this, MethodInfo* method)

{
  return;
}


// ApplicationManagers.HeadlessManager.<TryJoinRoom>d__31$$MoveNext
// il2cpp: bool ApplicationManagers_HeadlessManager__TryJoinRoom_d__31__MoveNext (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o* __this, const MethodInfo* method);
// 0x18235dd40

bool ApplicationManagers_HeadlessManager__TryJoinRoom_d__31__MoveNext
               (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o *__this,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_HeadlessManager_o *pAVar2;
  Settings_MultiplayerSettings_o *__this_00;
  Photon_Realtime_RoomInfo_o *room;
  System_String_array *values;
  System_String_o *pSVar3;
  System_String_o *roomName;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *pPVar4;
  
  if (Il2CppMethodInitialized_18434798f == '\0') {
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
    Il2CppMethodInitialized_18434798f = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  pAVar2 = (__this->fields).__4__this;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (pAVar2 != (ApplicationManagers_HeadlessManager_o *)0x0) {
      (pAVar2->fields)._joining = true;
      pPVar4 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor(pPVar4,1.0,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)pPVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pPVar4);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        (__this->fields).__1__state = -1;
        if (pAVar2 == (ApplicationManagers_HeadlessManager_o *)0x0) goto label_18235e11b;
        (pAVar2->fields)._joining = false;
      }
      return false;
    }
    (__this->fields).__1__state = -1;
    if (Il2CppMethodInitialized_1843479db == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
      Il2CppMethodInitialized_1843479db = '\x01';
    }
    room = ApplicationManagers_HeadlessManager__FindRoom
                     (TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_RoomName_k__BackingField,
                      (MethodInfo *)0x0);
    if (room == (Photon_Realtime_RoomInfo_o *)0x0) {
      if (Il2CppMethodInitialized_1843479db == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
        Il2CppMethodInitialized_1843479db = '\x01';
      }
      pSVar3 = System_String__Concat_1969b70
                         ("[Headless] Room \"",
                          TypeInfo_ApplicationManagers_HeadlessManager->static_fields->
                          _RoomName_k__BackingField,"\" not found \xe2\x80\x93 retrying in 3 s\xe2\x80\xa6",(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
      }
      UnityEngine_Debug__Log((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
      pPVar4 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor(pPVar4,3.0,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)pPVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pPVar4);
      (__this->fields).__1__state = 2;
      return true;
    }
    values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
    pSVar3 = "[Headless] Joining room \"";
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        values->m_Items[0] = "[Headless] Joining room \"";
        Il2CppCodeGenWriteBarrier(values->m_Items,pSVar3);
        if (Il2CppMethodInitialized_1843479db == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
          Il2CppMethodInitialized_1843479db = '\x01';
        }
        if (1 < (uint)values->max_length) {
          pSVar3 = TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_RoomName_k__BackingField;
          values->m_Items[1] = pSVar3;
          Il2CppCodeGenWriteBarrier(values->m_Items + 1,pSVar3);
          pSVar3 = "\" (id=";
          if (2 < (uint)values->max_length) {
            values->m_Items[2] = "\" (id=";
            Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar3);
            if (3 < (uint)values->max_length) {
              pSVar3 = (room->fields).name;
              values->m_Items[3] = pSVar3;
              Il2CppCodeGenWriteBarrier(values->m_Items + 3,pSVar3);
              pSVar3 = ")\xe2\x80\xa6";
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = ")\xe2\x80\xa6";
                Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar3);
                pSVar3 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
                if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
                }
                UnityEngine_Debug__Log((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
                ApplicationManagers_HeadlessManager__PrepareJoinCharacterSettings((MethodInfo *)0x0);
                pSVar3 = (room->fields).name;
                __this_00 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
                if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
                }
                roomName = PhotonExtensions__GetStringProperty_1dacb40
                                     (room,TypeInfo_GameManagers_RoomProperty->static_fields->Name,
                                      "",(MethodInfo *)0x0);
                if (__this_00 != (Settings_MultiplayerSettings_o *)0x0) {
                  Settings_MultiplayerSettings__JoinRoom
                            (__this_00,pSVar3,roomName,
                             (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
                  return false;
                }
                goto label_18235e11b;
              }
            }
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_18235e11b:
  ThrowNullReferenceException();
}


// ApplicationManagers.HeadlessManager.<TryJoinRoom>d__31$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_HeadlessManager__TryJoinRoom_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_HeadlessManager__TryJoinRoom_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current(ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.HeadlessManager.<TryJoinRoom>d__31$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_HeadlessManager__TryJoinRoom_d__31__System_Collections_IEnumerator_Reset (ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o* __this, const MethodInfo* method);
// 0x18235e130

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
// 0x180573e90

Il2CppObject*
ApplicationManagers_HeadlessManager__TryJoinRoom_d__31__System_Collections_IEnumerator_get_Current(ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.HeadlessManager$$get_IsHeadless
// il2cpp: bool ApplicationManagers_HeadlessManager__get_IsHeadless (const MethodInfo* method);
// 0x182350e30

bool ApplicationManagers_HeadlessManager__get_IsHeadless(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347978 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_184347978 = '\x01';
  }
  return TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_IsHeadless_k__BackingField;
}


// ApplicationManagers.HeadlessManager$$set_IsHeadless
// il2cpp: void ApplicationManagers_HeadlessManager__set_IsHeadless (bool value, const MethodInfo* method);
// 0x182350fb0

void ApplicationManagers_HeadlessManager__set_IsHeadless(bool value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347979 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_184347979 = '\x01';
  }
  TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_IsHeadless_k__BackingField = value;
  return;
}


// ApplicationManagers.HeadlessManager$$get_Mode
// il2cpp: int32_t ApplicationManagers_HeadlessManager__get_Mode (const MethodInfo* method);
// 0x182350eb0

int32_t ApplicationManagers_HeadlessManager__get_Mode(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434797a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_18434797a = '\x01';
  }
  return TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_Mode_k__BackingField;
}


// ApplicationManagers.HeadlessManager$$set_Mode
// il2cpp: void ApplicationManagers_HeadlessManager__set_Mode (int32_t value, const MethodInfo* method);
// 0x182351030

void ApplicationManagers_HeadlessManager__set_Mode(int32_t value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434797b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_18434797b = '\x01';
  }
  TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_Mode_k__BackingField = value;
  return;
}


// ApplicationManagers.HeadlessManager$$get_Region
// il2cpp: int32_t ApplicationManagers_HeadlessManager__get_Region (const MethodInfo* method);
// 0x182350f30

int32_t ApplicationManagers_HeadlessManager__get_Region(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434797c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_18434797c = '\x01';
  }
  return TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_Region_k__BackingField;
}


// ApplicationManagers.HeadlessManager$$set_Region
// il2cpp: void ApplicationManagers_HeadlessManager__set_Region (int32_t value, const MethodInfo* method);
// 0x1823510d0

void ApplicationManagers_HeadlessManager__set_Region(int32_t value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434797d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_18434797d = '\x01';
  }
  TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_Region_k__BackingField = value;
  return;
}


// ApplicationManagers.HeadlessManager$$get_RoomName
// il2cpp: System_String_o* ApplicationManagers_HeadlessManager__get_RoomName (const MethodInfo* method);
// 0x182350f70

System_String_o * ApplicationManagers_HeadlessManager__get_RoomName(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434797e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_18434797e = '\x01';
  }
  return TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_RoomName_k__BackingField;
}


// ApplicationManagers.HeadlessManager$$set_RoomName
// il2cpp: void ApplicationManagers_HeadlessManager__set_RoomName (System_String_o* value, const MethodInfo* method);
// 0x182351110

void ApplicationManagers_HeadlessManager__set_RoomName(System_String_o *value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434797f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_18434797f = '\x01';
  }
  TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_RoomName_k__BackingField = value;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_RoomName_k__BackingField,value);
  return;
}


// ApplicationManagers.HeadlessManager$$get_MaxPlayers
// il2cpp: int32_t ApplicationManagers_HeadlessManager__get_MaxPlayers (const MethodInfo* method);
// 0x182350e70

int32_t ApplicationManagers_HeadlessManager__get_MaxPlayers(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347980 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_184347980 = '\x01';
  }
  return TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_MaxPlayers_k__BackingField;
}


// ApplicationManagers.HeadlessManager$$set_MaxPlayers
// il2cpp: void ApplicationManagers_HeadlessManager__set_MaxPlayers (int32_t value, const MethodInfo* method);
// 0x182350ff0

void ApplicationManagers_HeadlessManager__set_MaxPlayers(int32_t value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347981 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_184347981 = '\x01';
  }
  TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_MaxPlayers_k__BackingField = value;
  return;
}


// ApplicationManagers.HeadlessManager$$get_PresetName
// il2cpp: System_String_o* ApplicationManagers_HeadlessManager__get_PresetName (const MethodInfo* method);
// 0x182350ef0

System_String_o * ApplicationManagers_HeadlessManager__get_PresetName(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347982 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_184347982 = '\x01';
  }
  return TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_PresetName_k__BackingField;
}


// ApplicationManagers.HeadlessManager$$set_PresetName
// il2cpp: void ApplicationManagers_HeadlessManager__set_PresetName (System_String_o* value, const MethodInfo* method);
// 0x182351070

void ApplicationManagers_HeadlessManager__set_PresetName(System_String_o *value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347983 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_184347983 = '\x01';
  }
  TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_PresetName_k__BackingField = value;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_PresetName_k__BackingField,value);
  return;
}


// ApplicationManagers.HeadlessManager$$Init
// il2cpp: void ApplicationManagers_HeadlessManager__Init (const MethodInfo* method);
// 0x18234fb60

void ApplicationManagers_HeadlessManager__Init(MethodInfo *method)

{
  Settings_MultiplayerSettings_o *__this;
  int32_t iVar1;
  int32_t iVar2;
  bool bVar3;
  ApplicationManagers_HeadlessManager_o *value;
  System_Object_array *args;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  System_String_o *pSVar6;
  int32_t local_res10 [2];
  int32_t local_res18 [2];
  int32_t local_res20 [2];
  int32_t local_28;
  int32_t local_24;
  int32_t local_20 [2];
  System_String_o *local_18;
  System_String_o *local_10;
  
  if (Il2CppMethodInitialized_184347984 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessMode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MultiplayerRegion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_HeadlessManager);
    il2cpp_codegen_initialize_runtime_metadata(&"[Headless] Initialised \xe2\x80\x93 mode={0} region={1} room=\"{2}\" maxPlayers={3} preset=\"{4}\"");
    Il2CppMethodInitialized_184347984 = '\x01';
  }
  local_res10[0] = 0;
  local_res18[0] = 0;
  local_18 = (System_String_o *)0x0;
  local_res20[0] = 0;
  local_10 = (System_String_o *)0x0;
  bVar3 = ApplicationManagers_HeadlessManager__TryParseArgs
                    (local_res10,local_res18,&local_18,local_res20,&local_10,(MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  if (Il2CppMethodInitialized_1843479d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_1843479d3 = '\x01';
  }
  iVar1 = local_res10[0];
  TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_IsHeadless_k__BackingField = true;
  if (Il2CppMethodInitialized_1843479d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_1843479d4 = '\x01';
  }
  iVar2 = local_res18[0];
  TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_Mode_k__BackingField = iVar1;
  if (Il2CppMethodInitialized_1843479d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_1843479d5 = '\x01';
  }
  pSVar6 = local_18;
  TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_Region_k__BackingField = iVar2;
  if (Il2CppMethodInitialized_1843479d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_1843479d6 = '\x01';
  }
  TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_RoomName_k__BackingField = pSVar6;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_RoomName_k__BackingField,pSVar6);
  iVar1 = local_res20[0];
  if (Il2CppMethodInitialized_1843479d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_1843479d7 = '\x01';
  }
  pSVar6 = local_10;
  TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_MaxPlayers_k__BackingField = iVar1;
  if (Il2CppMethodInitialized_1843479d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_1843479d8 = '\x01';
  }
  TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_PresetName_k__BackingField = pSVar6;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_PresetName_k__BackingField,pSVar6)
  ;
  value = Utility_SingletonFactory__CreateSingleton_object_
                    ((Il2CppObject *)TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_instance,
                     (MethodInfo_798ED0 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_HeadlessManager)
  ;
  TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_instance = value;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_instance,value);
  args = (System_Object_array *)SZArrayNew(TypeInfo_object_array,5);
  if (Il2CppMethodInitialized_1843479d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_1843479d9 = '\x01';
  }
  local_28 = TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_Mode_k__BackingField;
  pIVar4 = il2cpp_value_box((Il2CppClass *)TypeInfo_ApplicationManagers_HeadlessMode,&local_28);
  if (args == (System_Object_array *)0x0) {
label_1823500b6:
    ThrowNullReferenceException();
  }
  if ((pIVar4 != (Il2CppObject *)0x0) &&
     (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((args->obj).klass)->_1).element_class),
     pIVar5 == (Il2CppObject *)0x0)) {
    pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = pIVar4;
    Il2CppCodeGenWriteBarrier(args->m_Items,pIVar4);
    if (Il2CppMethodInitialized_1843479da == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
      Il2CppMethodInitialized_1843479da = '\x01';
    }
    local_24 = TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_Region_k__BackingField;
    pIVar4 = il2cpp_value_box((Il2CppClass *)TypeInfo_Settings_MultiplayerRegion,&local_24);
    if ((pIVar4 != (Il2CppObject *)0x0) &&
       (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((args->obj).klass)->_1).element_class),
       pIVar5 == (Il2CppObject *)0x0)) {
      pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
    }
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = pIVar4;
      Il2CppCodeGenWriteBarrier(args->m_Items + 1,pIVar4);
      if (Il2CppMethodInitialized_1843479db == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
        Il2CppMethodInitialized_1843479db = '\x01';
      }
      pSVar6 = TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_RoomName_k__BackingField;
      if ((pSVar6 != (System_String_o *)0x0) &&
         (pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar6,(((args->obj).klass)->_1).element_class),
         pIVar4 == (Il2CppObject *)0x0)) {
        pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
      }
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = (Il2CppObject *)pSVar6;
        Il2CppCodeGenWriteBarrier(args->m_Items + 2,pSVar6);
        if (Il2CppMethodInitialized_1843479dc == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
          Il2CppMethodInitialized_1843479dc = '\x01';
        }
        local_20[0] = TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_MaxPlayers_k__BackingField
        ;
        pIVar4 = il2cpp_value_box(g_data_184354e08,local_20);
        if ((pIVar4 != (Il2CppObject *)0x0) &&
           (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((args->obj).klass)->_1).element_class),
           pIVar5 == (Il2CppObject *)0x0)) {
          pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
        }
        if (3 < (uint)args->max_length) {
          args->m_Items[3] = pIVar4;
          Il2CppCodeGenWriteBarrier(args->m_Items + 3,pIVar4);
          if (Il2CppMethodInitialized_1843479dd == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
            Il2CppMethodInitialized_1843479dd = '\x01';
          }
          pSVar6 = TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_PresetName_k__BackingField;
          if ((pSVar6 != (System_String_o *)0x0) &&
             (pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar6,(((args->obj).klass)->_1).element_class)
             , pIVar4 == (Il2CppObject *)0x0)) {
            pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
          }
          if (4 < (uint)args->max_length) {
            args->m_Items[4] = (Il2CppObject *)pSVar6;
            Il2CppCodeGenWriteBarrier(args->m_Items + 4,pSVar6);
            pSVar6 = System_String__Format_196ceb0("[Headless] Initialised \xe2\x80\x93 mode={0} region={1} room=\"{2}\" maxPlayers={3} preset=\"{4}\"",args,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
            }
            UnityEngine_Debug__Log((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
            __this = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
            if (Il2CppMethodInitialized_1843479da == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
              Il2CppMethodInitialized_1843479da = '\x01';
            }
            if (__this != (Settings_MultiplayerSettings_o *)0x0) {
              Settings_MultiplayerSettings__ConnectServer
                        (__this,TypeInfo_ApplicationManagers_HeadlessManager->static_fields->
                                _Region_k__BackingField,(MethodInfo *)0x0);
              return;
            }
            goto label_1823500b6;
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// ApplicationManagers.HeadlessManager$$OnJoinedLobby
// il2cpp: void ApplicationManagers_HeadlessManager__OnJoinedLobby (const MethodInfo* method);
// 0x182350120

void ApplicationManagers_HeadlessManager__OnJoinedLobby(MethodInfo *method)

{
  ApplicationManagers_HeadlessManager_o *pAVar1;
  ApplicationManagers_HeadlessManager_StaticFields *pAVar2;
  bool bVar3;
  ApplicationManagers_HeadlessManager__HostRoom_d__30_o *routine;
  
  if (Il2CppMethodInitialized_184347985 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347985 = '\x01';
  }
  if (Il2CppMethodInitialized_184344f91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_184344f91 = '\x01';
  }
  if (TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_IsHeadless_k__BackingField != false) {
    pAVar1 = TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_instance;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pAVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      if (Il2CppMethodInitialized_1843479d9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
        Il2CppMethodInitialized_1843479d9 = '\x01';
      }
      pAVar2 = TypeInfo_ApplicationManagers_HeadlessManager->static_fields;
      if (pAVar2->_Mode_k__BackingField == 0) {
        if (pAVar2->_instance != (ApplicationManagers_HeadlessManager_o *)0x0) {
          pAVar1 = pAVar2->_instance;
          if (Il2CppMethodInitialized_184347987 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_ApplicationManagers_HeadlessManager_HostRoom_d__30);
            Il2CppMethodInitialized_184347987 = '\x01';
          }
          routine = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_ApplicationManagers_HeadlessManager_HostRoom_d__30);
          System_Object___ctor
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
          (routine->fields).__1__state = 0;
          UnityEngine_MonoBehaviour__StartCoroutine_Auto
                    ((UnityEngine_MonoBehaviour_o *)pAVar1,(System_Collections_IEnumerator_o *)routine,
                     (MethodInfo *)0x0);
          return;
        }
      }
      else if (pAVar2->_instance != (ApplicationManagers_HeadlessManager_o *)0x0) {
        (pAVar2->_instance->fields)._lobbyReady = true;
        return;
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// ApplicationManagers.HeadlessManager$$OnRoomListUpdate
// il2cpp: void ApplicationManagers_HeadlessManager__OnRoomListUpdate (const MethodInfo* method);
// 0x182350260
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823503af: mov rbx, qword ptr [rsp + 0x30]

void ApplicationManagers_HeadlessManager__OnRoomListUpdate(MethodInfo *method)

{
  ApplicationManagers_HeadlessManager_o *pAVar1;
  bool bVar2;
  ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o *routine;
  
  if (Il2CppMethodInitialized_184347986 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347986 = '\x01';
  }
  if (Il2CppMethodInitialized_184344f91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
    Il2CppMethodInitialized_184344f91 = '\x01';
  }
  if (TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_IsHeadless_k__BackingField != false) {
    pAVar1 = TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_instance;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pAVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      if (Il2CppMethodInitialized_1843479d9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
        Il2CppMethodInitialized_1843479d9 = '\x01';
      }
      if (TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_Mode_k__BackingField == 1) {
        pAVar1 = TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_instance;
        if (pAVar1 == (ApplicationManagers_HeadlessManager_o *)0x0) {
          ThrowNullReferenceException();
        }
        if (((pAVar1->fields)._lobbyReady != false) && ((pAVar1->fields)._joining == false)) {
          if (Il2CppMethodInitialized_184347988 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_ApplicationManagers_HeadlessManager_TryJoinRoom_d__31);
            Il2CppMethodInitialized_184347988 = '\x01';
          }
          routine = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_ApplicationManagers_HeadlessManager_TryJoinRoom_d__31);
          System_Object___ctor
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
          (routine->fields).__1__state = 0;
          (routine->fields).__4__this = pAVar1;
          Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,pAVar1);
          UnityEngine_MonoBehaviour__StartCoroutine_Auto
                    ((UnityEngine_MonoBehaviour_o *)pAVar1,(System_Collections_IEnumerator_o *)routine,
                     (MethodInfo *)0x0);
        }
      }
    }
  }
  return;
}


// ApplicationManagers.HeadlessManager$$HostRoom
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_HeadlessManager__HostRoom (ApplicationManagers_HeadlessManager_o* __this, const MethodInfo* method);
// 0x18234fb10

System_Collections_IEnumerator_o *
ApplicationManagers_HeadlessManager__HostRoom
          (ApplicationManagers_HeadlessManager_o *__this,MethodInfo *method)

{
  ApplicationManagers_HeadlessManager__HostRoom_d__30_o *__this_00;
  
  if (Il2CppMethodInitialized_184347987 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager_HostRoom_d__30);
    Il2CppMethodInitialized_184347987 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_HeadlessManager_HostRoom_d__30);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ApplicationManagers.HeadlessManager$$TryJoinRoom
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_HeadlessManager__TryJoinRoom (ApplicationManagers_HeadlessManager_o* __this, const MethodInfo* method);
// 0x182350aa0

System_Collections_IEnumerator_o *
ApplicationManagers_HeadlessManager__TryJoinRoom
          (ApplicationManagers_HeadlessManager_o *__this,MethodInfo *method)

{
  ApplicationManagers_HeadlessManager__TryJoinRoom_d__31_o *__this_00;
  
  if (Il2CppMethodInitialized_184347988 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_HeadlessManager_TryJoinRoom_d__31);
    Il2CppMethodInitialized_184347988 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_HeadlessManager_TryJoinRoom_d__31);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ApplicationManagers.HeadlessManager$$FindRoom
// il2cpp: Photon_Realtime_RoomInfo_o* ApplicationManagers_HeadlessManager__FindRoom (System_String_o* displayName, const MethodInfo* method);
// 0x18234f920
// eh: try 0x18234fa33..0x18234faa4 -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18234fadc: mov rdx, qword ptr [rip + 0x1d6dd3d]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_RoomInfo_Dispose
// asm:   0x18234fae3: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18234fae8: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18234faed: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18234faf2: test rcx, rcx
// asm:   0x18234faf5: jne 0x18234fb01
// asm:   0x18234fb01: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

Photon_Realtime_RoomInfo_o *
ApplicationManagers_HeadlessManager__FindRoom(System_String_o *displayName,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__RoomInfo__o *__this;
  Il2CppObject *room;
  bool bVar1;
  System_String_o *a;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o local_60;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_38;
  
  if (Il2CppMethodInitialized_184347989 == '\0') {
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
    Il2CppMethodInitialized_184347989 = '\x01';
  }
  local_60.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_60.fields._version = 0;
  local_60.fields._index = 0;
  local_60.fields._current.fields.key = (Il2CppObject *)0x0;
  local_60.fields._current.fields.value = (Il2CppObject *)0x0;
  local_60.fields._getEnumeratorRetType = 0;
  local_60.fields._36_4_ = 0;
  if ((TypeInfo_GameManagers_MainMenuGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MainMenuGameManager);
  }
  __this = TypeInfo_GameManagers_MainMenuGameManager->static_fields->RoomList;
  if (__this != (System_Collections_Generic_Dictionary_string__RoomInfo__o *)0x0) {
    System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
              (&local_38,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
               (MethodInfo_13C1150 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_RoomInfo_GetEnumerator);
    local_60.fields._dictionary = local_38.fields._dictionary;
    local_60.fields._version = local_38.fields._version;
    local_60.fields._index = local_38.fields._index;
    local_60.fields._current.fields.key = local_38.fields._current.fields.key;
    local_60.fields._current.fields.value = local_38.fields._current.fields.value;
    local_60.fields._getEnumeratorRetType = local_38.fields._getEnumeratorRetType;
    local_60.fields._36_4_ = local_38.fields._36_4_;
    do {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        (&local_60,
                         (MethodInfo_1585360 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_RoomInfo_MoveNext)
      ;
      room = local_60.fields._current.fields.value;
      if (!bVar1) {
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_60,
                   MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_RoomInfo_Dispose);
        return (Photon_Realtime_RoomInfo_o *)0x0;
      }
      if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
      }
      a = PhotonExtensions__GetStringProperty_1dacb40
                    ((Photon_Realtime_RoomInfo_o *)room,
                     TypeInfo_GameManagers_RoomProperty->static_fields->Name,"",
                     (MethodInfo *)0x0);
      bVar1 = System_String__Equals_196c550(a,displayName,5,(MethodInfo *)0x0);
    } while (!bVar1);
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_60,
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_RoomInfo_Dispose);
    return (Photon_Realtime_RoomInfo_o *)room;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.HeadlessManager$$PrepareJoinCharacterSettings
// il2cpp: void ApplicationManagers_HeadlessManager__PrepareJoinCharacterSettings (const MethodInfo* method);
// 0x1823503c0
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823505aa: nop word ptr [rax + rax]
// asm:   0x18235069f: nop 
// asm:   0x18235079a: mov r8, qword ptr [rip + 0x1d45b9f]  ; MethodInfo_Settings_TypedSetting_int_set_Value
// asm:   0x1823507a1: mov edx, eax
// asm:   0x1823507a3: mov rcx, rbx
// asm:   0x1823507ce: mov r8, qword ptr [rip + 0x1d45b6b]  ; MethodInfo_Settings_TypedSetting_int_set_Value
// asm:   0x1823507d5: mov edx, ebx
// asm:   0x1823507d7: jmp 0x1823507a6

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
  Settings_IntSetting_o *pSVar12;
  int iVar13;
  
  if (Il2CppMethodInitialized_18434798a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_HumanCustomSet_GetCount);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_HumanCustomSet_GetItemAt);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_18434798a = '\x01';
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
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      pSVar12 = (pSVar2->fields).ChooseStatus;
      if (pSVar12 != (Settings_IntSetting_o *)0x0) {
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)pSVar12,2,
                   (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        pSVar3 = (pSVar2->fields).Loadout;
        if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
        }
        if (pSVar3 != (Settings_StringSetting_o *)0x0) {
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar3,
                     (Il2CppObject *)TypeInfo_GameManagers_HumanLoadout->static_fields->Blade,
                     (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
          if (((pSVar4 != (Settings_HumanCustomSettings_o *)0x0) &&
              (pSVar5 = (pSVar4->fields).Costume1Sets,
              pSVar5 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) &&
             (pSVar6 = (pSVar5->fields).Sets, pSVar6 != (Settings_ListSetting_T__o *)0x0)) {
            iVar9 = Settings_ListSetting_object___GetCount
                              (pSVar6,(MethodInfo_182B100 *)
                                      MethodInfo_Settings_ListSetting_HumanCustomSet_GetCount);
            pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
            if (((pSVar4 != (Settings_HumanCustomSettings_o *)0x0) &&
                (pSVar5 = (pSVar4->fields).CustomSets,
                pSVar5 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) &&
               (pSVar6 = (pSVar5->fields).Sets, pSVar6 != (Settings_ListSetting_T__o *)0x0)) {
              iVar10 = Settings_ListSetting_object___GetCount
                                 (pSVar6,(MethodInfo_182B100 *)
                                         MethodInfo_Settings_ListSetting_HumanCustomSet_GetCount);
              iVar13 = 0;
              if (0 < iVar9) {
                do {
                  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
                  if (((pSVar4 == (Settings_HumanCustomSettings_o *)0x0) ||
                      (pSVar5 = (pSVar4->fields).Costume1Sets,
                      pSVar5 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) ||
                     ((pSVar6 = (pSVar5->fields).Sets, pSVar6 == (Settings_ListSetting_T__o *)0x0 ||
                      (pSVar11 = Settings_ListSetting_object___GetItemAt
                                           (pSVar6,iVar13,
                                            (MethodInfo_182B120 *)
                                            MethodInfo_Settings_ListSetting_HumanCustomSet_GetItemAt),
                      pSVar11 == (Settings_BaseSetting_o *)0x0)))) goto label_1823507ee;
                  bVar1 = (TypeInfo_Settings_BaseSetSetting->_2).typeHierarchyDepth;
                  if (((pSVar11->klass->_2).typeHierarchyDepth < bVar1) ||
                     ((pSVar11->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                      (Il2CppClass *)TypeInfo_Settings_BaseSetSetting)) {
                    il2cpp_codegen_raise_invalid_cast_exception(pSVar11);
                  }
                  if ((*(uint64_t *)((char *)pSVar11 + 0x30)) == (Settings_BaseSetting_c *)0x0) goto label_1823507ee;
                  pSVar7 = (((*(Il2CppClass **)((char *)pSVar11 + 0x30)))->_1).byval_arg.data;
                  if (Il2CppMethodInitialized_1843479dd == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
                    Il2CppMethodInitialized_1843479dd = '\x01';
                  }
                  bVar8 = System_String__Equals_196c550
                                    (pSVar7,TypeInfo_ApplicationManagers_HeadlessManager->static_fields->
                                            _PresetName_k__BackingField,5,(MethodInfo *)0x0);
                  if (bVar8) {
                    pSVar12 = (pSVar2->fields).CustomSet;
                    if (pSVar12 != (Settings_IntSetting_o *)0x0) goto label_1823507a6;
                    goto label_1823507ee;
                  }
                  iVar13 = iVar13 + 1;
                } while (iVar13 < iVar9);
              }
              iVar13 = 0;
              if (0 < iVar10) {
                do {
                  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
                  if ((((pSVar4 == (Settings_HumanCustomSettings_o *)0x0) ||
                       (pSVar5 = (pSVar4->fields).CustomSets,
                       pSVar5 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) ||
                      (pSVar6 = (pSVar5->fields).Sets, pSVar6 == (Settings_ListSetting_T__o *)0x0)) ||
                     (pSVar11 = Settings_ListSetting_object___GetItemAt
                                          (pSVar6,iVar13,
                                           (MethodInfo_182B120 *)
                                           MethodInfo_Settings_ListSetting_HumanCustomSet_GetItemAt),
                     pSVar11 == (Settings_BaseSetting_o *)0x0)) goto label_1823507ee;
                  bVar1 = (TypeInfo_Settings_BaseSetSetting->_2).typeHierarchyDepth;
                  if (((pSVar11->klass->_2).typeHierarchyDepth < bVar1) ||
                     ((pSVar11->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                      (Il2CppClass *)TypeInfo_Settings_BaseSetSetting)) {
                    il2cpp_codegen_raise_invalid_cast_exception(pSVar11,TypeInfo_Settings_BaseSetSetting);
                  }
                  if ((*(uint64_t *)((char *)pSVar11 + 0x30)) == (Settings_BaseSetting_c *)0x0) goto label_1823507ee;
                  pSVar7 = (((*(Il2CppClass **)((char *)pSVar11 + 0x30)))->_1).byval_arg.data;
                  if (Il2CppMethodInitialized_1843479dd == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
                    Il2CppMethodInitialized_1843479dd = '\x01';
                  }
                  bVar8 = System_String__Equals_196c550
                                    (pSVar7,TypeInfo_ApplicationManagers_HeadlessManager->static_fields->
                                            _PresetName_k__BackingField,5,(MethodInfo *)0x0);
                  if (bVar8) {
                    pSVar12 = (pSVar2->fields).CustomSet;
                    if (pSVar12 == (Settings_IntSetting_o *)0x0) goto label_1823507ee;
                    iVar13 = iVar13 + iVar9;
                    goto label_1823507a6;
                  }
                  iVar13 = iVar13 + 1;
                } while (iVar13 < iVar10);
              }
              if (0 < iVar10 + iVar9) {
                pSVar12 = (pSVar2->fields).CustomSet;
                iVar13 = UnityEngine_Random__RandomRangeInt(0,iVar10 + iVar9,(MethodInfo *)0x0);
                if (pSVar12 == (Settings_IntSetting_o *)0x0) goto label_1823507ee;
label_1823507a6:
                Settings_TypedSetting_int___set_Value
                          ((Settings_TypedSetting_int__o *)pSVar12,iVar13,
                           (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
              }
              return;
            }
          }
        }
      }
    }
  }
label_1823507ee:
  ThrowNullReferenceException();
}


// ApplicationManagers.HeadlessManager$$TryApplyPreset
// il2cpp: bool ApplicationManagers_HeadlessManager__TryApplyPreset (System_String_o* presetName, const MethodInfo* method);
// 0x182350810
// eh: try 0x182350930..0x182350a8c -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182350a3b: mov rdx, qword ptr [rip + 0x1d25a96]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose
// asm:   0x182350a42: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182350a47: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182350a4c: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182350a51: test rcx, rcx
// asm:   0x182350a54: jne 0x182350a8c
// asm:   0x182350a8c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

bool ApplicationManagers_HeadlessManager__TryApplyPreset(System_String_o *presetName,MethodInfo *method)

{
  byte bVar1;
  Settings_InGameSettings_o *pSVar2;
  Settings_SetSettingsContainer_InGameSet__o *pSVar3;
  Settings_ListSetting_T__o *__this;
  Settings_InGameSet_o *pSVar4;
  Il2CppObject *pIVar5;
  bool bVar6;
  System_Collections_Generic_List_BaseSetting__o *__this_00;
  undefined1 local_40 [16];
  Settings_BaseSetting_o *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_18434798b == '\0') {
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
    Il2CppMethodInitialized_18434798b = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameSettings;
  if (((pSVar2 != (Settings_InGameSettings_o *)0x0) &&
      (pSVar3 = (pSVar2->fields).InGameSets, pSVar3 != (Settings_SetSettingsContainer_InGameSet__o *)0x0)) &&
     (__this = (pSVar3->fields).Sets, __this != (Settings_ListSetting_T__o *)0x0)) {
    __this_00 = Settings_ListSetting_object___GetItems
                          (__this,(MethodInfo_182B160 *)MethodInfo_Settings_ListSetting_InGameSet_GetItems);
    if (__this_00 != (System_Collections_Generic_List_BaseSetting__o *)0x0) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
                 (System_Collections_Generic_List_T__o *)__this_00,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
      local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
      local_28.fields._index = local_40._8_4_;
      local_28.fields._version = local_40._12_4_;
      local_28.fields._current = (Il2CppObject *)local_30;
      local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_40._8_8_ = &local_28;
      do {
        bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&local_28,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext);
        pIVar5 = local_28.fields._current;
        if (!bVar6) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                     MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
          return false;
        }
        if ((Settings_BaseSetting_o *)local_28.fields._current == (Settings_BaseSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar1 = (TypeInfo_Settings_InGameSet->_2).typeHierarchyDepth;
        if (((((Settings_BaseSetting_c *)(local_28.fields._current)->klass)->_2).typeHierarchyDepth < bVar1)
           || ((((Settings_BaseSetting_c *)(local_28.fields._current)->klass)->_2).typeHierarchy
               [(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_InGameSet)) {
          il2cpp_codegen_raise_invalid_cast_exception(local_28.fields._current);
        }
        if (((Settings_BaseSetting_o *)((longlong)local_28.fields._current + 0x30))->klass ==
            (Settings_BaseSetting_c *)0x0) {
          ThrowNullReferenceException();
        }
        bVar6 = System_String__Equals_196c550
                          ((((Settings_BaseSetting_o *)((longlong)local_28.fields._current + 0x30))->klass->_1
                           ).byval_arg.data,presetName,5,(MethodInfo *)0x0);
      } while (!bVar6);
      pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
      if (pSVar4 == (Settings_InGameSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(pSVar4->klass->vtable)._10_Copy.methodPtr)
                (pSVar4,(Settings_BaseSetting_o *)pIVar5,(pSVar4->klass->vtable)._10_Copy.method);
      pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
      if (pSVar4 != (Settings_InGameSet_o *)0x0) {
        (*(pSVar4->klass->vtable)._10_Copy.methodPtr)
                  (pSVar4,(Settings_BaseSetting_o *)pIVar5,(pSVar4->klass->vtable)._10_Copy.method);
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
        return true;
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.HeadlessManager$$TryParseArgs
// il2cpp: bool ApplicationManagers_HeadlessManager__TryParseArgs (int32_t* mode, int32_t* region, System_String_o** roomName, int32_t* maxPlayers, System_String_o** preset, const MethodInfo* method);
// 0x182350b10

bool ApplicationManagers_HeadlessManager__TryParseArgs
               (int32_t *mode,int32_t *region,System_String_o **roomName,int32_t *maxPlayers,
               System_String_o **preset,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_String_array *pSVar3;
  System_String_o *pSVar4;
  uint uVar5;
  
  if (Il2CppMethodInitialized_18434798c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&"-headless-host");
    il2cpp_codegen_initialize_runtime_metadata(&"-headless-join");
    il2cpp_codegen_initialize_runtime_metadata(&"[Headless] Unknown region \"");
    il2cpp_codegen_initialize_runtime_metadata(&"\" \xe2\x80\x93 defaulting to 10.");
    il2cpp_codegen_initialize_runtime_metadata(&"\" \xe2\x80\x93 defaulting to EU.");
    il2cpp_codegen_initialize_runtime_metadata(&"[Headless] Invalid maxplayers \"");
    Il2CppMethodInitialized_18434798c = '\x01';
  }
  *mode = 0;
  *region = 0;
  pSVar4 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  *roomName = pSVar4;
  Il2CppCodeGenWriteBarrier(roomName,pSVar4);
  *maxPlayers = 10;
  pSVar4 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  *preset = pSVar4;
  Il2CppCodeGenWriteBarrier(preset,pSVar4);
  pSVar3 = System_Environment__GetCommandLineArgs((MethodInfo *)0x0);
  if (pSVar3 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  uVar5 = 0;
  while( true ) {
    if ((int)pSVar3->max_length <= (int)uVar5) {
      return false;
    }
    if ((uint)pSVar3->max_length <= uVar5) break;
    bVar1 = System_String__op_Equality(pSVar3->m_Items[(int)uVar5],"-headless-host",(MethodInfo *)0x0);
    if ((uint)pSVar3->max_length <= uVar5) break;
    bVar2 = System_String__op_Equality(pSVar3->m_Items[(int)uVar5],"-headless-join",(MethodInfo *)0x0);
    if ((bVar2 || bVar1) && ((int)(uVar5 + 4) < (int)pSVar3->max_length)) {
      if (uVar5 + 1 < (uint)pSVar3->max_length) {
        bVar2 = ApplicationManagers_HeadlessManager__TryParseRegion
                          (pSVar3->m_Items[(longlong)(int)uVar5 + 1],region,(MethodInfo *)0x0);
        if (!bVar2) {
          if ((uint)pSVar3->max_length <= uVar5 + 1) break;
          pSVar4 = System_String__Concat_1969b70
                             ("[Headless] Unknown region \"",pSVar3->m_Items[(longlong)(int)uVar5 + 1],
                              "\" \xe2\x80\x93 defaulting to EU.",(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
          }
          UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
        }
        if (uVar5 + 2 < (uint)pSVar3->max_length) {
          pSVar4 = pSVar3->m_Items[(longlong)(int)uVar5 + 2];
          *roomName = pSVar4;
          Il2CppCodeGenWriteBarrier(roomName,pSVar4);
          if (uVar5 + 3 < (uint)pSVar3->max_length) {
            bVar2 = System_Int32__TryParse
                              (pSVar3->m_Items[(longlong)(int)uVar5 + 3],maxPlayers,(MethodInfo *)0x0);
            if ((!bVar2) || (*maxPlayers < 0)) {
              if ((uint)pSVar3->max_length <= uVar5 + 3) break;
              pSVar4 = System_String__Concat_1969b70
                                 ("[Headless] Invalid maxplayers \"",pSVar3->m_Items[(longlong)(int)uVar5 + 3],
                                  "\" \xe2\x80\x93 defaulting to 10.",(MethodInfo *)0x0);
              if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
              }
              UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
              *maxPlayers = 10;
            }
            if (uVar5 + 4 < (uint)pSVar3->max_length) {
              pSVar4 = pSVar3->m_Items[(longlong)(int)uVar5 + 4];
              *preset = pSVar4;
              Il2CppCodeGenWriteBarrier(preset,pSVar4);
              *mode = bVar1 ^ 1;
              return true;
            }
          }
        }
      }
      break;
    }
    uVar5 = uVar5 + 1;
  }
  ThrowIndexOutOfRangeException();
}


// ApplicationManagers.HeadlessManager$$TryParseRegion
// il2cpp: bool ApplicationManagers_HeadlessManager__TryParseRegion (System_String_o* value, int32_t* region, const MethodInfo* method);
// 0x182350dd0

bool ApplicationManagers_HeadlessManager__TryParseRegion
               (System_String_o *value,int32_t *region,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_18434798d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_TryParse_MultiplayerRegion);
    Il2CppMethodInitialized_18434798d = '\x01';
  }
  if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354e58);
  }
  bVar1 = System_Enum__TryParse_Int32Enum__6b1ce0
                    (value,true,region,(MethodInfo_6B1CE0 *)MethodInfo_System_Enum_TryParse_MultiplayerRegion)
  ;
  return bVar1;
}


// ApplicationManagers.HeadlessManager$$.ctor
// il2cpp: void ApplicationManagers_HeadlessManager___ctor (ApplicationManagers_HeadlessManager_o* __this, const MethodInfo* method);
// 0x180528540

void
ApplicationManagers_HeadlessManager___ctor(ApplicationManagers_HeadlessManager_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


