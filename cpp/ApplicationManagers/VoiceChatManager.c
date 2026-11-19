// Type: ApplicationManagers.VoiceChatManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/ApplicationManagers/VoiceChatManager.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/VoiceChatManager.cs
// --------------------------------

// ApplicationManagers.VoiceChatManager$$get_MicrophoneDevices
// il2cpp: System_String_array* ApplicationManagers_VoiceChatManager__get_MicrophoneDevices (const MethodInfo* method);
// 0x5e1e660

System_String_array * ApplicationManagers_VoiceChatManager__get_MicrophoneDevices(MethodInfo *method)

{
  System_String_array *pSVar1;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  
  if (Il2CppMethodInitialized_0754848c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Prepend_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_0754848c = '\x01';
  }
  pSVar1 = UnityEngine_Microphone__get_devices((MethodInfo *)0x0);
  source = System_Linq_Enumerable__Prepend_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar1,
                      (Il2CppObject *)"",
                      (MethodInfo_34F2380 *)MethodInfo_System_Linq_Enumerable_Prepend_string);
  pSVar1 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     (source,(MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  return pSVar1;
}


// ApplicationManagers.VoiceChatManager$$GetDeviceLabel
// il2cpp: System_String_o* ApplicationManagers_VoiceChatManager__GetDeviceLabel (System_String_o* device, const MethodInfo* method);
// 0x5e1e6d0

System_String_o *
ApplicationManagers_VoiceChatManager__GetDeviceLabel(System_String_o *device,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_0754848d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"Sound");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"VoiceChatDeviceDefault");
    Il2CppMethodInitialized_0754848d = '\x01';
  }
  bVar1 = System_String__op_Equality(device,"",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar2 = UI_UIManager__GetLocale
                       ("SettingsPopup","Sound","VoiceChatDeviceDefault",
                        "","",(MethodInfo *)0x0);
    return pSVar2;
  }
  return device;
}


// ApplicationManagers.VoiceChatManager$$GetRecorderDevice
// il2cpp: Photon_Voice_DeviceInfo_o ApplicationManagers_VoiceChatManager__GetRecorderDevice (System_String_array* devices, const MethodInfo* method);
// 0x5e1e7a0

Photon_Voice_DeviceInfo_o *
ApplicationManagers_VoiceChatManager__GetRecorderDevice
          (Photon_Voice_DeviceInfo_o *__return_storage_ptr__,System_String_array *devices,MethodInfo *method)

{
  Settings_SoundSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  System_String_o *pSVar3;
  Photon_Voice_DeviceInfo_StaticFields *pPVar4;
  Photon_Voice_DeviceFeatures_o *pPVar5;
  undefined7 uVar6;
  bool bVar7;
  undefined3 uVar8;
  int32_t iVar9;
  
  if (Il2CppMethodInitialized_0754848e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Voice_DeviceInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_0754848e = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
  if ((pSVar1 == (Settings_SoundSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).VoiceChatDevice, pSVar2 == (Settings_StringSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pSVar3 = (pSVar2->fields)._value;
  iVar9 = System_Array__IndexOf_object_
                    ((System_Object_array *)devices,(Il2CppObject *)pSVar3,
                     (MethodInfo_3602AE0 *)MethodInfo_System_Array_IndexOf_string);
  if (iVar9 < 0) {
    if ((TypeInfo_Photon_Voice_DeviceInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Voice_DeviceInfo);
    }
    pPVar4 = TypeInfo_Photon_Voice_DeviceInfo->static_fields;
    uVar6 = *(undefined7 *)&(pPVar4->Default).fields.field_0x21;
    (__return_storage_ptr__->fields).useStringID = (pPVar4->Default).fields.useStringID;
    *(undefined7 *)&(__return_storage_ptr__->fields).field_0x21 = uVar6;
    bVar7 = (pPVar4->Default).fields._IsDefault_k__BackingField;
    uVar8 = *(undefined3 *)&(pPVar4->Default).fields.field_0x1;
    iVar9 = (pPVar4->Default).fields._IDInt_k__BackingField;
    pSVar3 = (pPVar4->Default).fields._IDString_k__BackingField;
    pPVar5 = (pPVar4->Default).fields.features;
    (__return_storage_ptr__->fields)._Name_k__BackingField = (pPVar4->Default).fields._Name_k__BackingField;
    (__return_storage_ptr__->fields).features = pPVar5;
    (__return_storage_ptr__->fields)._IsDefault_k__BackingField = bVar7;
    *(undefined3 *)&(__return_storage_ptr__->fields).field_0x1 = uVar8;
    (__return_storage_ptr__->fields)._IDInt_k__BackingField = iVar9;
    (__return_storage_ptr__->fields)._IDString_k__BackingField = pSVar3;
  }
  else {
    (__return_storage_ptr__->fields)._Name_k__BackingField = (System_String_o *)0x0;
    (__return_storage_ptr__->fields).features = (Photon_Voice_DeviceFeatures_o *)0x0;
    (__return_storage_ptr__->fields)._IsDefault_k__BackingField = false;
    *(undefined3 *)&(__return_storage_ptr__->fields).field_0x1 = 0;
    (__return_storage_ptr__->fields)._IDInt_k__BackingField = 0;
    (__return_storage_ptr__->fields)._IDString_k__BackingField = (System_String_o *)0x0;
    *(undefined8 *)&(__return_storage_ptr__->fields).useStringID = 0;
    Photon_Voice_DeviceInfo___ctor_5704140
              (__return_storage_ptr__,pSVar3,(Photon_Voice_DeviceFeatures_o *)0x0,(MethodInfo *)0x0);
  }
  return __return_storage_ptr__;
}


// ApplicationManagers.VoiceChatManager$$HasMicrophonePermission
// il2cpp: bool ApplicationManagers_VoiceChatManager__HasMicrophonePermission (const MethodInfo* method);
// 0x5e1e8b0

bool ApplicationManagers_VoiceChatManager__HasMicrophonePermission(MethodInfo *method)

{
  return true;
}


// ApplicationManagers.VoiceChatManager$$RequestMicrophonePermission
// il2cpp: void ApplicationManagers_VoiceChatManager__RequestMicrophonePermission (const MethodInfo* method);
// 0x5e1e8c0

void ApplicationManagers_VoiceChatManager__RequestMicrophonePermission(MethodInfo *method)

{
  return;
}


// ApplicationManagers.VoiceChatManager$$Init
// il2cpp: void ApplicationManagers_VoiceChatManager__Init (const MethodInfo* method);
// 0x5e09230

void ApplicationManagers_VoiceChatManager__Init(MethodInfo *method)

{
  ApplicationManagers_VoiceChatManager_StaticFields *pAVar1;
  ApplicationManagers_VoiceChatManager_o *pAVar2;
  Photon_Voice_PUN_PunVoiceClient_o *pPVar3;
  Photon_Voice_Unity_VoiceLogger_o *pPVar4;
  
  if (Il2CppMethodInitialized_0754848f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Unity_VisualScripting_ComponentHolderProtocol_AddComponent_PunVoiceClient);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_VoiceChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_VoiceChatManager);
    Il2CppMethodInitialized_0754848f = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager);
  }
  pAVar2 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->_instance,
                      (MethodInfo_3680650 *)
                      MethodInfo_Utility_SingletonFactory_CreateSingleton_VoiceChatManager);
  TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->_instance = pAVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->_instance);
  pPVar3 = (Photon_Voice_PUN_PunVoiceClient_o *)
           Unity_VisualScripting_ComponentHolderProtocol__AddComponent_object_
                     ((UnityEngine_Object_o *)
                      TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->_instance,
                      (MethodInfo_34B1730 *)
                      MethodInfo_Unity_VisualScripting_ComponentHolderProtocol_AddComponent_PunVoiceClient);
  pAVar1 = TypeInfo_ApplicationManagers_VoiceChatManager->static_fields;
  pAVar1->Client = pPVar3;
  Il2CppCodeGenWriteBarrier(&pAVar1->Client);
  pPVar3 = TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->Client;
  if (pPVar3 != (Photon_Voice_PUN_PunVoiceClient_o *)0x0) {
    pPVar4 = Photon_Voice_Unity_VoiceConnection__get_VoiceLogger
                       ((Photon_Voice_Unity_VoiceConnection_o *)pPVar3,(MethodInfo *)0x0);
    if (pPVar4 != (Photon_Voice_Unity_VoiceLogger_o *)0x0) {
      (pPVar4->fields).LogLevel = 1;
      pPVar3 = TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->Client;
      if (pPVar3 != (Photon_Voice_PUN_PunVoiceClient_o *)0x0) {
        (pPVar3->fields).AutoConnectAndJoin = false;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.VoiceChatManager$$ApplySoundSettings
// il2cpp: void ApplicationManagers_VoiceChatManager__ApplySoundSettings (const MethodInfo* method);
// 0x5e16380
// eh: try 0x5e164d4..0x5e1653a -> pad 0x5e16547 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5e1655f..0x5e16564 -> pad 0x5e16583 cleanup
// eh: try 0x5e16586..0x5e16590 -> pad 0x5e16598 catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e1653f: jmp 0x5e16547
// asm:   0x5e16541: jmp 0x5e16547
// asm:   0x5e16543: jmp 0x5e16547
// asm:   0x5e16545: jmp 0x5e16547
// asm:   0x5e16547: mov rbx, rax
// asm:   0x5e1654a: cmp edx, 1
// asm:   0x5e1654d: jne 0x5e16586
// asm:   0x5e1654f: mov rdi, rbx
// asm:   0x5e16552: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e16557: mov rbx, qword ptr [rax]
// asm:   0x5e1655a: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5e1655f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e16564: lea rax, [rip + 0x1478185]  ; MethodInfo_System_Collections_Generic_List_Enumerator_PhotonVoiceSync_Dispose
// asm:   0x5e1656b: mov rsi, qword ptr [rax]
// asm:   0x5e1656e: mov rdi, rsp
// asm:   0x5e16571: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5e16576: test rbx, rbx
// asm:   0x5e16579: je 0x5e16529
// asm:   0x5e1657b: mov rdi, rbx
// asm:   0x5e1657e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5e16583: mov rbx, rax
// asm:   0x5e16586: lea rdi, [rsp + 0x18]
// asm:   0x5e1658b: call 0x2fe05c0  ; il2cpp_runtime_helper_02fe05c0()
// asm:   0x5e16590: mov rdi, rbx
// asm:   0x5e16593: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e16598: mov rdi, rax
// asm:   0x5e1659b: call 0x2ab61e0  ; __clang_call_terminate()

void ApplicationManagers_VoiceChatManager__ApplySoundSettings(MethodInfo *method)

{
  byte bVar1;
  GameManagers_BaseGameManager_o *pGVar2;
  System_Threading_CancellationTokenSource_o *__this;
  Il2CppObject *__this_00;
  bool bVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  undefined8 local_30;
  undefined1 *local_28;
  
  if (Il2CppMethodInitialized_07548490 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_PhotonVoiceSync_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_PhotonVoiceSync_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_PhotonVoiceSync_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_PhotonVoiceSync_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07548490 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pGVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((!bVar3) &&
     (pGVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager,
     pGVar2 != (GameManagers_BaseGameManager_o *)0x0)) {
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if ((bVar1 <= (pGVar2->klass->_2).typeHierarchyDepth) &&
       ((pGVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      __this = (*(uint64_t *)((char *)pGVar2 + 0x68));
      if (__this == (System_Threading_CancellationTokenSource_o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_List_object___GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)__this,
                 (MethodInfo_395E050 *)
                 MethodInfo_System_Collections_Generic_List_PhotonVoiceSync_GetEnumerator);
      local_30 = 0;
      local_28 = (undefined1 *)&local_48;
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_PhotonVoiceSync_MoveNext);
        __this_00 = local_48.fields._current;
        if (!bVar3) break;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          if ((GameManagers_PhotonVoiceSync_o *)__this_00 == (GameManagers_PhotonVoiceSync_o *)0x0) {
            ThrowNullReferenceException();
          }
          GameManagers_PhotonVoiceSync__Apply((GameManagers_PhotonVoiceSync_o *)__this_00,(MethodInfo *)0x0);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_PhotonVoiceSync_Dispose);
    }
  }
  return;
}


// ApplicationManagers.VoiceChatManager$$GetInputVolume
// il2cpp: float ApplicationManagers_VoiceChatManager__GetInputVolume (const MethodInfo* method);
// 0x5e1e8d0

float ApplicationManagers_VoiceChatManager__GetInputVolume(MethodInfo *method)

{
  Settings_SoundSettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_FloatSetting_o *pSVar3;
  float fVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_07548491 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07548491 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
  if ((pSVar1 == (Settings_SoundSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).VoiceChatInput, pSVar2 == (Settings_IntSetting_o *)0x0)) {
label_05e1e969:
    ThrowNullReferenceException();
  }
  fVar4 = 0.0;
  if ((pSVar2->fields)._value != 2) {
    pSVar3 = (pSVar1->fields).VoiceChatMicVolume;
    if (pSVar3 == (Settings_FloatSetting_o *)0x0) goto label_05e1e969;
    fVar4 = (pSVar3->fields)._value;
    fVar5 = 1.0;
    if (fVar4 <= 1.0) {
      fVar5 = fVar4;
    }
    fVar4 = (float)(-(uint)(0.0 <= fVar4) & (uint)(fVar5 * 4.0));
  }
  return fVar4;
}


// ApplicationManagers.VoiceChatManager$$GetOuputVolume
// il2cpp: float ApplicationManagers_VoiceChatManager__GetOuputVolume (Photon_Pun_PhotonView_o* view, const MethodInfo* method);
// 0x5e1e970

float ApplicationManagers_VoiceChatManager__GetOuputVolume(Photon_Pun_PhotonView_o *view,MethodInfo *method)

{
  int32_t item;
  Settings_SoundSettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  System_Collections_Generic_HashSet_int__o *__this;
  System_Collections_Generic_Dictionary_int__float__o *pSVar3;
  Settings_FloatSetting_o *pSVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  
  if (Il2CppMethodInitialized_07548492 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_float_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_float_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07548492 = '\x01';
  }
  if (((view != (Photon_Pun_PhotonView_o *)0x0) &&
      (pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings,
      pSVar1 != (Settings_SoundSettings_o *)0x0)) &&
     (pSVar2 = (pSVar1->fields).VoiceChatInput, pSVar2 != (Settings_IntSetting_o *)0x0)) {
    if ((pSVar2->fields)._value == 2) {
      return 0.0;
    }
    item = (view->fields).ownerActorNr;
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    __this = TypeInfo_GameManagers_InGameManager->static_fields->MuteVoiceChat;
    if (__this != (System_Collections_Generic_HashSet_int__o *)0x0) {
      bVar5 = System_Collections_Generic_HashSet_int___Contains
                        (__this,item,
                         (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
      if (bVar5) {
        return 0.0;
      }
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      pSVar3 = TypeInfo_GameManagers_InGameManager->static_fields->VoiceChatVolumeMultiplier;
      if (pSVar3 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
        bVar5 = System_Collections_Generic_Dictionary_int__float___ContainsKey
                          (pSVar3,item,
                           (MethodInfo_4A176B0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_float_ContainsKey);
        if (bVar5) {
          if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
          }
          pSVar3 = TypeInfo_GameManagers_InGameManager->static_fields->VoiceChatVolumeMultiplier;
          if (pSVar3 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) goto label_05e1eb34;
          fVar6 = System_Collections_Generic_Dictionary_int__float___get_Item
                            (pSVar3,item,
                             (MethodInfo_4A173E0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_float_get_Item);
        }
        else {
          fVar6 = 1.0;
        }
        pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
        if ((pSVar1 != (Settings_SoundSettings_o *)0x0) &&
           (pSVar4 = (pSVar1->fields).VoiceChatAudioVolume, pSVar4 != (Settings_FloatSetting_o *)0x0)) {
          fVar6 = fVar6 * (pSVar4->fields)._value;
          fVar7 = 1.0;
          if (fVar6 <= 1.0) {
            fVar7 = fVar6;
          }
          return (float)(-(uint)(0.0 <= fVar6) & (uint)fVar7);
        }
      }
    }
  }
label_05e1eb34:
  ThrowNullReferenceException();
}


// ApplicationManagers.VoiceChatManager$$.ctor
// il2cpp: void ApplicationManagers_VoiceChatManager___ctor (ApplicationManagers_VoiceChatManager_o* __this, const MethodInfo* method);
// 0x5e1eb40

void ApplicationManagers_VoiceChatManager___ctor
               (ApplicationManagers_VoiceChatManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.VoiceChatManager$$.cctor
// il2cpp: void ApplicationManagers_VoiceChatManager___cctor (const MethodInfo* method);
// 0x5e1eb50

void ApplicationManagers_VoiceChatManager___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07548493 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_VoiceChatManager);
    Il2CppMethodInitialized_07548493 = '\x01';
  }
  TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->ProximitySpatialBlend = 1.0;
  return;
}


