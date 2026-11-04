// Type: ApplicationManagers.VoiceChatManager
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/VoiceChatManager.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/VoiceChatManager.cs
// --------------------------------

// ApplicationManagers.VoiceChatManager$$get_MicrophoneDevices
// il2cpp: System_String_array* ApplicationManagers_VoiceChatManager__get_MicrophoneDevices (const MethodInfo* method);
// 0x182377760

System_String_array * ApplicationManagers_VoiceChatManager__get_MicrophoneDevices(MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_o *element;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  
  if (Il2CppMethodInitialized_1843479de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Append_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Common");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843479de = '\x01';
  }
  pSVar1 = UnityEngine_Microphone__get_devices((MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  element = UI_UIManager__GetLocale
                      ("Common","None","",""
                       ,"",(MethodInfo *)0x0);
  source = System_Linq_Enumerable__Append_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar1,(Il2CppObject *)element,
                      (MethodInfo_6B7010 *)MethodInfo_System_Linq_Enumerable_Append_string);
  pSVar1 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     (source,(MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  return pSVar1;
}


// ApplicationManagers.VoiceChatManager$$get_DefaultDevice
// il2cpp: System_String_o* ApplicationManagers_VoiceChatManager__get_DefaultDevice (const MethodInfo* method);
// 0x182377690

System_String_o * ApplicationManagers_VoiceChatManager__get_DefaultDevice(MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843479df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Common");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843479df = '\x01';
  }
  pSVar1 = UnityEngine_Microphone__get_devices((MethodInfo *)0x0);
  if (pSVar1 != (System_String_array *)0x0) {
    if (pSVar1->max_length == 0) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar2 = UI_UIManager__GetLocale
                         ("Common","None","",
                          "","",(MethodInfo *)0x0);
      return pSVar2;
    }
    pSVar1 = UnityEngine_Microphone__get_devices((MethodInfo *)0x0);
    if (pSVar1 != (System_String_array *)0x0) {
      if ((int)pSVar1->max_length != 0) {
        return pSVar1->m_Items[0];
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.VoiceChatManager$$Init
// il2cpp: void ApplicationManagers_VoiceChatManager__Init (const MethodInfo* method);
// 0x182377520

void ApplicationManagers_VoiceChatManager__Init(MethodInfo *method)

{
  ApplicationManagers_VoiceChatManager_o *value;
  Photon_Voice_PUN_PunVoiceClient_o *pPVar1;
  Photon_Voice_Unity_VoiceLogger_o *pPVar2;
  
  if (Il2CppMethodInitialized_1843479e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Unity_VisualScripting_ComponentHolderProtocol_AddComponent_PunVoiceClient);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_VoiceChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_VoiceChatManager);
    Il2CppMethodInitialized_1843479e0 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager);
  }
  value = Utility_SingletonFactory__CreateSingleton_object_
                    ((Il2CppObject *)TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->_instance,
                     (MethodInfo_798ED0 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_VoiceChatManager
                    );
  TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->_instance = value;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->_instance,value);
  pPVar1 = (Photon_Voice_PUN_PunVoiceClient_o *)
           Unity_VisualScripting_ComponentHolderProtocol__AddComponent_object_
                     ((UnityEngine_Object_o *)
                      TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->_instance,
                      (MethodInfo_663E50 *)
                      MethodInfo_Unity_VisualScripting_ComponentHolderProtocol_AddComponent_PunVoiceClient);
  TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->Client = pPVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->Client,pPVar1);
  pPVar1 = TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->Client;
  if (pPVar1 != (Photon_Voice_PUN_PunVoiceClient_o *)0x0) {
    pPVar2 = Photon_Voice_Unity_VoiceConnection__get_VoiceLogger
                       ((Photon_Voice_Unity_VoiceConnection_o *)pPVar1,(MethodInfo *)0x0);
    if (pPVar2 != (Photon_Voice_Unity_VoiceLogger_o *)0x0) {
      (pPVar2->fields).LogLevel = '\x01';
      pPVar1 = TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->Client;
      if (pPVar1 != (Photon_Voice_PUN_PunVoiceClient_o *)0x0) {
        (pPVar1->fields).AutoConnectAndJoin = false;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.VoiceChatManager$$ApplySoundSettings
// il2cpp: void ApplicationManagers_VoiceChatManager__ApplySoundSettings (const MethodInfo* method);
// 0x182377020
// eh: try 0x1823771b0..0x18237723e -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182377212: mov rdx, qword ptr [rip + 0x1d1940f]  ; MethodInfo_System_Collections_Generic_List_Enumerator_PhotonVoiceSync_Dispose
// asm:   0x182377219: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18237721e: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182377223: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182377228: test rcx, rcx
// asm:   0x18237722b: jne 0x18237723e
// asm:   0x18237723e: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void ApplicationManagers_VoiceChatManager__ApplySoundSettings(MethodInfo *method)

{
  byte bVar1;
  GameManagers_BaseGameManager_o *pGVar2;
  GameManagers_BaseGameManager_c *pGVar3;
  System_Collections_Generic_List_T__o *__this;
  Il2CppObject *__this_00;
  bool bVar4;
  undefined1 local_40 [16];
  GameManagers_PhotonVoiceSync_o *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_1843479e1 == '\0') {
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
    Il2CppMethodInitialized_1843479e1 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  pGVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    pGVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar2 != (GameManagers_BaseGameManager_o *)0x0) {
      pGVar3 = pGVar2->klass;
      bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
      if ((bVar1 <= (pGVar3->_2).typeHierarchyDepth) &&
         ((pGVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
        pGVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
        bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
        if (((pGVar2->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pGVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
          il2cpp_codegen_raise_invalid_cast_exception(pGVar2);
        }
        __this = (System_Collections_Generic_List_T__o *)(*(uint64_t *)((char *)pGVar2 + 0x60));
        if (__this == (System_Collections_Generic_List_T__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_40,__this,
                   (MethodInfo_91F180 *)
                   MethodInfo_System_Collections_Generic_List_PhotonVoiceSync_GetEnumerator);
        local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
        local_28.fields._index = local_40._8_4_;
        local_28.fields._version = local_40._12_4_;
        local_28.fields._current = (Il2CppObject *)local_30;
        local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_40._8_8_ = &local_28;
        while( true ) {
          bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (&local_28,
                             (MethodInfo_153A2A0 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_PhotonVoiceSync_MoveNext);
          __this_00 = local_28.fields._current;
          if (!bVar4) break;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar4) {
            if ((GameManagers_PhotonVoiceSync_o *)__this_00 == (GameManagers_PhotonVoiceSync_o *)0x0) {
              ThrowNullReferenceException();
            }
            GameManagers_PhotonVoiceSync__Apply((GameManagers_PhotonVoiceSync_o *)__this_00,(MethodInfo *)0x0)
            ;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_PhotonVoiceSync_Dispose);
      }
    }
  }
  return;
}


// ApplicationManagers.VoiceChatManager$$GetInputVolume
// il2cpp: float ApplicationManagers_VoiceChatManager__GetInputVolume (const MethodInfo* method);
// 0x182377260

float ApplicationManagers_VoiceChatManager__GetInputVolume(MethodInfo *method)

{
  float fVar1;
  Settings_SoundSettings_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  Settings_FloatSetting_o *pSVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_1843479e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_1843479e2 = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
  if ((pSVar2 != (Settings_SoundSettings_o *)0x0) &&
     (pSVar3 = (pSVar2->fields).VoiceChatInput, pSVar3 != (Settings_IntSetting_o *)0x0)) {
    if ((pSVar3->fields)._value == 2) {
      return 0.0;
    }
    pSVar4 = (TypeInfo_Settings_SettingsManager->static_fields->SoundSettings->fields).VoiceChatMicVolume;
    if (pSVar4 != (Settings_FloatSetting_o *)0x0) {
      fVar1 = (pSVar4->fields)._value;
      fVar5 = 0.0;
      if ((0.0 <= fVar1) && (fVar5 = 1.0, fVar1 <= 1.0)) {
        fVar5 = fVar1;
      }
      return fVar5 * 4.0;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.VoiceChatManager$$GetOuputVolume
// il2cpp: float ApplicationManagers_VoiceChatManager__GetOuputVolume (Photon_Pun_PhotonView_o* view, const MethodInfo* method);
// 0x182377320

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
  
  if (Il2CppMethodInitialized_1843479e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_float_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_float_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_1843479e3 = '\x01';
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
      bVar5 = System_Collections_Generic_HashSet_Int32Enum___Contains
                        ((System_Collections_Generic_HashSet_T__o *)__this,item,
                         (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
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
                           (MethodInfo_14070E0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_float_ContainsKey);
        fVar7 = 1.0;
        if (bVar5) {
          if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
          }
          pSVar3 = TypeInfo_GameManagers_InGameManager->static_fields->VoiceChatVolumeMultiplier;
          if (pSVar3 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) goto label_182377513;
          fVar6 = System_Collections_Generic_Dictionary_int__float___get_Item
                            (pSVar3,item,
                             (MethodInfo_1423460 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_float_get_Item);
        }
        else {
          fVar6 = 1.0;
        }
        pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
        if ((pSVar1 != (Settings_SoundSettings_o *)0x0) &&
           (pSVar4 = (pSVar1->fields).VoiceChatAudioVolume, pSVar4 != (Settings_FloatSetting_o *)0x0)) {
          fVar6 = fVar6 * (pSVar4->fields)._value;
          if (fVar6 < 0.0) {
            fVar7 = 0.0;
          }
          else if (fVar6 <= 1.0) {
            return fVar6;
          }
          return fVar7;
        }
      }
    }
  }
label_182377513:
  ThrowNullReferenceException();
}


// ApplicationManagers.VoiceChatManager$$.ctor
// il2cpp: void ApplicationManagers_VoiceChatManager___ctor (ApplicationManagers_VoiceChatManager_o* __this, const MethodInfo* method);
// 0x180528540

void
ApplicationManagers_VoiceChatManager___ctor(ApplicationManagers_VoiceChatManager_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.VoiceChatManager$$.cctor
// il2cpp: void ApplicationManagers_VoiceChatManager___cctor (const MethodInfo* method);
// 0x182377650

void ApplicationManagers_VoiceChatManager___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843479e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_VoiceChatManager);
    Il2CppMethodInitialized_1843479e4 = '\x01';
  }
  TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->ProximitySpatialBlend = 1.0;
  return;
}


