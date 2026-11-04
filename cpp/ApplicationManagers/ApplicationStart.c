// Type: ApplicationManagers.ApplicationStart
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/ApplicationStart.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/ApplicationStart.cs
// --------------------------------

// ApplicationManagers.ApplicationStart$$Awake
// il2cpp: void ApplicationManagers_ApplicationStart__Awake (ApplicationManagers_ApplicationStart_o* __this, const MethodInfo* method);
// 0x1823444b0

void ApplicationManagers_ApplicationStart__Awake
               (ApplicationManagers_ApplicationStart_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347928 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationStart);
    Il2CppMethodInitialized_184347928 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_ApplicationStart->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationStart);
  }
  if (TypeInfo_ApplicationManagers_ApplicationStart->static_fields->_firstLaunch != false) {
    if ((TypeInfo_ApplicationManagers_ApplicationStart->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationStart);
    }
    TypeInfo_ApplicationManagers_ApplicationStart->static_fields->_firstLaunch = false;
    ApplicationManagers_ApplicationStart__Init((MethodInfo *)0x0);
    return;
  }
  return;
}


// ApplicationManagers.ApplicationStart$$Init
// il2cpp: void ApplicationManagers_ApplicationStart__Init (const MethodInfo* method);
// 0x182344530

void ApplicationManagers_ApplicationStart__Init(MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Globalization_CultureInfo_o *pSVar3;
  System_Threading_Thread_o *pSVar4;
  ApplicationManagers_FullscreenHandler_o *value;
  UnityEngine_Object_o *obj;
  ApplicationManagers_SnapshotManager_o *value_00;
  ApplicationManagers_PastebinLoader_o *pAVar5;
  ApplicationManagers_AssetBundleManager_o *value_01;
  ApplicationManagers_DebugConsole_o *value_02;
  UnityEngine_Application_LogCallback_o *__this;
  ApplicationManagers_DebugTesting_o *value_03;
  Events_OnLoadScene_o *value_04;
  System_String_o *pSVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__7_o *routine;
  ApplicationManagers_SceneLoader_o *pAVar8;
  UnityEngine_Events_UnityAction_T0__T1__o *__this_00;
  
  if (Il2CppMethodInitialized_184347929 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_AnticheatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationConfig);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationStart);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AssetBundleManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DiscordManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_FullscreenHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_MaterialCache);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_PastebinLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_VoiceChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    Il2CppMethodInitialized_184347929 = '\x01';
  }
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  pSVar3 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  System_Globalization_CultureInfo__set_DefaultThreadCurrentCulture(pSVar3,(MethodInfo *)0x0);
  pSVar3 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  System_Globalization_CultureInfo__set_DefaultThreadCurrentUICulture(pSVar3,(MethodInfo *)0x0);
  pSVar4 = System_Threading_Thread__get_CurrentThread((MethodInfo *)0x0);
  pSVar3 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  if (pSVar4 == (System_Threading_Thread_o *)0x0) goto label_1823454af;
  System_Threading_Thread__set_CurrentCulture(pSVar4,pSVar3,(MethodInfo *)0x0);
  pSVar4 = System_Threading_Thread__get_CurrentThread((MethodInfo *)0x0);
  pSVar3 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  if (pSVar4 == (System_Threading_Thread_o *)0x0) goto label_1823454af;
  System_Threading_Thread__set_CurrentUICulture(pSVar4,pSVar3,(MethodInfo *)0x0);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  TypeInfo_Photon_Pun_PhotonNetwork->static_fields->MinimalTimeScaleToDispatchInFixedUpdate = 0.0;
  TypeInfo_Photon_Pun_PhotonNetwork->static_fields->UseRpcMonoBehaviourCache = true;
  if ((TypeInfo_ApplicationManagers_ApplicationConfig->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationConfig);
  }
  if (Il2CppMethodInitialized_184347926 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationConfig);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    Il2CppMethodInitialized_184347926 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_ApplicationConfig->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationConfig);
  }
  bVar1 = System_IO_File__Exists
                    (TypeInfo_ApplicationManagers_ApplicationConfig->static_fields->DevelopmentConfigPath,
                     (MethodInfo *)0x0);
  if (bVar1) {
label_1823447fe:
    if ((TypeInfo_ApplicationManagers_ApplicationConfig->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationConfig);
    }
    TypeInfo_ApplicationManagers_ApplicationConfig->static_fields->DevelopmentMode = true;
  }
  else {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
    if (iVar2 == 7) goto label_1823447fe;
  }
  if ((TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager);
  }
  Anticheat_AnticheatManager__Init((MethodInfo *)0x0);
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  Anticheat_ModeratorManager__Init((MethodInfo *)0x0);
  if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
  }
  Anticheat_ChatFilter__Init((MethodInfo *)0x0);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  Utility_PhysicsLayer__Init((MethodInfo *)0x0);
  if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
  }
  CustomSkins_MaterialCache__Init((MethodInfo *)0x0);
  Events_EventManager__Init((MethodInfo *)0x0);
  if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
  }
  Characters_HumanSetup__Init((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  if (iVar2 == 0xd) {
    Utility_DataMigrator__MigrateLinuxSaves((MethodInfo *)0x0);
  }
  Settings_SettingsManager__Init((MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
  }
  if (Il2CppMethodInitialized_18434796c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_FullscreenHandler);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_FullscreenHandler);
    Il2CppMethodInitialized_18434796c = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
  }
  value = Utility_SingletonFactory__CreateSingleton_object_
                    ((Il2CppObject *)TypeInfo_ApplicationManagers_FullscreenHandler->static_fields->_instance,
                     (MethodInfo_798ED0 *)
                     MethodInfo_Utility_SingletonFactory_CreateSingleton_FullscreenHandler);
  TypeInfo_ApplicationManagers_FullscreenHandler->static_fields->_instance = value;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_FullscreenHandler->static_fields->_instance,value);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  UI_UIManager__Init((MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_ApplicationStart->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationStart);
  }
  if (Il2CppMethodInitialized_18434792a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"TMP_Prewarm");
    Il2CppMethodInitialized_18434792a = '\x01';
  }
  obj = (UnityEngine_Object_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)obj,"TMP_Prewarm",(MethodInfo *)0x0);
  if (obj != (UnityEngine_Object_o *)0x0) {
    UnityEngine_GameObject__AddComponent_object_
              ((UnityEngine_GameObject_o *)obj,
               (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
    }
    if (Il2CppMethodInitialized_1843479c7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_Utility_SingletonFactory_CreateSingleton_SnapshotManager);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
      Il2CppMethodInitialized_1843479c7 = '\x01';
    }
    if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
    }
    value_00 = Utility_SingletonFactory__CreateSingleton_object_
                         ((Il2CppObject *)
                          TypeInfo_ApplicationManagers_SnapshotManager->static_fields->_instance,
                          (MethodInfo_798ED0 *)
                          MethodInfo_Utility_SingletonFactory_CreateSingleton_SnapshotManager);
    TypeInfo_ApplicationManagers_SnapshotManager->static_fields->_instance = value_00;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_ApplicationManagers_SnapshotManager->static_fields->_instance,value_00);
    ApplicationManagers_SnapshotManager__ClearTemp((MethodInfo *)0x0);
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    UI_CursorManager__Init((MethodInfo *)0x0);
    if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
    }
    Weather_WeatherManager__Init((MethodInfo *)0x0);
    if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
    }
    GameProgress_GameProgressManager__Init((MethodInfo *)0x0);
    if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
    }
    Map_MapManager__Init((MethodInfo *)0x0);
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    CustomLogic_CustomLogicManager__Init((MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    GameManagers_ChatManager__Init((MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_PastebinLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_PastebinLoader);
    }
    if (Il2CppMethodInitialized_1843479af == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_PastebinLoader);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_Utility_SingletonFactory_CreateSingleton_PastebinLoader);
      Il2CppMethodInitialized_1843479af = '\x01';
    }
    if ((TypeInfo_ApplicationManagers_PastebinLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_PastebinLoader);
    }
    pAVar5 = Utility_SingletonFactory__CreateSingleton_object_
                       ((Il2CppObject *)TypeInfo_ApplicationManagers_PastebinLoader->static_fields->_instance,
                        (MethodInfo_798ED0 *)
                        MethodInfo_Utility_SingletonFactory_CreateSingleton_PastebinLoader);
    TypeInfo_ApplicationManagers_PastebinLoader->static_fields->_instance = pAVar5;
    Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_PastebinLoader->static_fields->_instance,pAVar5);
    if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
    }
    if (Il2CppMethodInitialized_184347932 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AssetBundleManager);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_Utility_SingletonFactory_CreateSingleton_AssetBundleManager);
      Il2CppMethodInitialized_184347932 = '\x01';
    }
    if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
    }
    value_01 = Utility_SingletonFactory__CreateSingleton_object_
                         ((Il2CppObject *)
                          TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_instance,
                          (MethodInfo_798ED0 *)
                          MethodInfo_Utility_SingletonFactory_CreateSingleton_AssetBundleManager);
    TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_instance = value_01;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_ApplicationManagers_AssetBundleManager->static_fields->_instance,value_01);
    ApplicationManagers_AssetBundleManager__ClearTemp((MethodInfo *)0x0);
    if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
    }
    bVar1 = System_IO_Directory__Exists
                      (TypeInfo_Utility_FolderPaths->static_fields->CustomAssetsLocal,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
      }
      System_IO_Directory__CreateDirectory
                (TypeInfo_Utility_FolderPaths->static_fields->CustomAssetsLocal,(MethodInfo *)0x0);
    }
    if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
    }
    bVar1 = System_IO_Directory__Exists
                      (TypeInfo_Utility_FolderPaths->static_fields->CustomAssetsWeb,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
      }
      System_IO_Directory__CreateDirectory
                (TypeInfo_Utility_FolderPaths->static_fields->CustomAssetsWeb,(MethodInfo *)0x0);
    }
    ApplicationManagers_MusicManager__Init((MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager);
    }
    ApplicationManagers_VoiceChatManager__Init((MethodInfo *)0x0);
    Photon_CustomSerialization__Register((MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    ApplicationManagers_AccountManager__Init((MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    }
    ApplicationManagers_Changelog_AottgChangelogService__Init((MethodInfo *)0x0);
    ApplicationManagers_Credits_AottgCreditsService__Init((MethodInfo *)0x0);
    ApplicationManagers_PublicProfiles_AottgPublicProfileService__Init((MethodInfo *)0x0);
    ApplicationManagers_HeadlessManager__Init((MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    if (Il2CppMethodInitialized_184347949 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_ApplicationManagers_DebugConsole_OnUnityDebugLog)
      ;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application_LogCallback);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_Utility_SingletonFactory_CreateSingleton_DebugConsole);
      Il2CppMethodInitialized_184347949 = '\x01';
    }
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    value_02 = Utility_SingletonFactory__CreateSingleton_object_
                         ((Il2CppObject *)TypeInfo_ApplicationManagers_DebugConsole->static_fields->_instance,
                          (MethodInfo_798ED0 *)
                          MethodInfo_Utility_SingletonFactory_CreateSingleton_DebugConsole);
    TypeInfo_ApplicationManagers_DebugConsole->static_fields->_instance = value_02;
    Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_DebugConsole->static_fields->_instance,value_02);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Application_LogCallback);
    UnityEngine_Application_LogCallback___ctor
              (__this,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_ApplicationManagers_DebugConsole_OnUnityDebugLog,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    UnityEngine_Application__add_logMessageReceived(__this,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
    }
    bVar1 = UnityEngine_Debug__get_isDebugBuild((MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    TypeInfo_ApplicationManagers_DebugConsole->static_fields->_currentTab = (uint)!bVar1 * 4;
    TypeInfo_ApplicationManagers_DebugConsole->static_fields->_lastFilterTab =
         TypeInfo_ApplicationManagers_DebugConsole->static_fields->_currentTab;
    Assets_Scripts_ApplicationManagers_DebugLagSim__Init((MethodInfo *)0x0);
    Utility_CustomDebug__Init((MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_ApplicationConfig->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationConfig);
    }
    if (TypeInfo_ApplicationManagers_ApplicationConfig->static_fields->DevelopmentMode != false) {
      if (Il2CppMethodInitialized_184347962 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_ApplicationManagers_DebugTesting_OnLoadScene);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugTesting);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnLoadScene);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_Utility_SingletonFactory_CreateSingleton_DebugTesting);
        Il2CppMethodInitialized_184347962 = '\x01';
      }
      value_03 = Utility_SingletonFactory__CreateSingleton_object_
                           ((Il2CppObject *)
                            TypeInfo_ApplicationManagers_DebugTesting->static_fields->_instance,
                            (MethodInfo_798ED0 *)
                            MethodInfo_Utility_SingletonFactory_CreateSingleton_DebugTesting);
      TypeInfo_ApplicationManagers_DebugTesting->static_fields->_instance = value_03;
      Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_DebugTesting->static_fields->_instance,value_03)
      ;
      value_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_OnLoadScene);
      Events_OnLoadScene___ctor
                ((UnityEngine_AudioClip_PCMSetPositionCallback_o *)value_04,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_ApplicationManagers_DebugTesting_OnLoadScene,(MethodInfo *)0x0);
      Events_EventManager__add_OnLoadScene(value_04,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_184347963 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationConfig);
        Il2CppMethodInitialized_184347963 = '\x01';
      }
      if ((TypeInfo_ApplicationManagers_ApplicationConfig->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationConfig);
      }
    }
    if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
    }
    Characters_BasicTitanSetup__Init((MethodInfo *)0x0);
    if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
    }
    Characters_CharacterData__Init((MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184347990 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MiscInfo);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
      il2cpp_codegen_initialize_runtime_metadata(&"HelpInfo");
      il2cpp_codegen_initialize_runtime_metadata(&"CreditsInfo");
      il2cpp_codegen_initialize_runtime_metadata(&"SocialInfo");
      Il2CppMethodInitialized_184347990 = '\x01';
    }
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar6 = TypeInfo_Utility_ResourcePaths->static_fields->Info;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pSVar6 = ApplicationManagers_ResourceManager__TryLoadText(pSVar6,"SocialInfo",(MethodInfo *)0x0);
    pSVar7 = SimpleJSONFixed_JSON__Parse(pSVar6,(MethodInfo *)0x0);
    TypeInfo_ApplicationManagers_MiscInfo->static_fields->Social = pSVar7;
    Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_MiscInfo->static_fields->Social,pSVar7);
    pSVar6 = ApplicationManagers_ResourceManager__TryLoadText
                       (TypeInfo_Utility_ResourcePaths->static_fields->Info,"HelpInfo",
                        (MethodInfo *)0x0);
    pSVar7 = SimpleJSONFixed_JSON__Parse(pSVar6,(MethodInfo *)0x0);
    TypeInfo_ApplicationManagers_MiscInfo->static_fields->Help = pSVar7;
    Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_MiscInfo->static_fields->Help,pSVar7);
    pSVar6 = ApplicationManagers_ResourceManager__TryLoadText
                       (TypeInfo_Utility_ResourcePaths->static_fields->Info,"CreditsInfo",
                        (MethodInfo *)0x0);
    pSVar7 = SimpleJSONFixed_JSON__Parse(pSVar6,(MethodInfo *)0x0);
    TypeInfo_ApplicationManagers_MiscInfo->static_fields->Credits = pSVar7;
    Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_MiscInfo->static_fields->Credits,pSVar7);
    if ((TypeInfo_ApplicationManagers_PastebinLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_PastebinLoader);
    }
    if (Il2CppMethodInitialized_1843479b0 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_PastebinLoader);
      Il2CppMethodInitialized_1843479b0 = '\x01';
    }
    if ((TypeInfo_ApplicationManagers_PastebinLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_PastebinLoader);
    }
    if (TypeInfo_ApplicationManagers_PastebinLoader->static_fields->_instance !=
        (ApplicationManagers_PastebinLoader_o *)0x0) {
      pAVar5 = TypeInfo_ApplicationManagers_PastebinLoader->static_fields->_instance;
      if (Il2CppMethodInitialized_1843479b1 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_ApplicationManagers_PastebinLoader_LoadPastebinCoroutine_d__7);
        Il2CppMethodInitialized_1843479b1 = '\x01';
      }
      routine = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_ApplicationManagers_PastebinLoader_LoadPastebinCoroutine_d__7);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
      (routine->fields).__1__state = 0;
      UnityEngine_MonoBehaviour__StartCoroutine_Auto
                ((UnityEngine_MonoBehaviour_o *)pAVar5,(System_Collections_IEnumerator_o *)routine,
                 (MethodInfo *)0x0);
      if (Il2CppMethodInitialized_1843479c2 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_ApplicationManagers_SceneLoader_OnSceneWasLoaded);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SceneManagement_SceneManager);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_Utility_SingletonFactory_CreateSingleton_SceneLoader);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_UnityEngine_Events_UnityAction_Scene_LoadSceneMode);
        Il2CppMethodInitialized_1843479c2 = '\x01';
      }
      pAVar8 = Utility_SingletonFactory__CreateSingleton_object_
                         ((Il2CppObject *)TypeInfo_ApplicationManagers_SceneLoader->static_fields->_instance,
                          (MethodInfo_798ED0 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_SceneLoader
                         );
      TypeInfo_ApplicationManagers_SceneLoader->static_fields->_instance = pAVar8;
      Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_SceneLoader->static_fields->_instance,pAVar8);
      pAVar8 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->_instance;
      __this_00 = (UnityEngine_Events_UnityAction_T0__T1__o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_Scene_LoadSceneMode);
      UnityEngine_Events_UnityAction_Scene__Int32Enum____ctor
                (__this_00,(Il2CppObject *)pAVar8,
                 (intptr_t)MethodInfo_ApplicationManagers_SceneLoader_OnSceneWasLoaded,
                 (MethodInfo_EB70D0 *)0x0);
      if ((TypeInfo_UnityEngine_SceneManagement_SceneManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_SceneManagement_SceneManager);
      }
      UnityEngine_SceneManagement_SceneManager__add_sceneLoaded
                ((UnityEngine_Events_UnityAction_Scene__LoadSceneMode__o *)__this_00,(MethodInfo *)0x0);
      ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
      Events_EventManager__InvokeFinishInit((MethodInfo *)0x0);
      if ((TypeInfo_ApplicationManagers_ApplicationConfig->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationConfig);
      }
      if (TypeInfo_ApplicationManagers_ApplicationConfig->static_fields->DevelopmentMode != false) {
        if (Il2CppMethodInitialized_184347964 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationConfig);
          Il2CppMethodInitialized_184347964 = '\x01';
        }
        if ((TypeInfo_ApplicationManagers_ApplicationConfig->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationConfig);
        }
      }
      if ((TypeInfo_ApplicationManagers_DiscordManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DiscordManager);
      }
      ApplicationManagers_DiscordManager__Init((MethodInfo *)0x0);
      return;
    }
  }
label_1823454af:
  ThrowNullReferenceException();
}


// ApplicationManagers.ApplicationStart$$PrewarmTextMeshPro
// il2cpp: void ApplicationManagers_ApplicationStart__PrewarmTextMeshPro (const MethodInfo* method);
// 0x1823454c0

void ApplicationManagers_ApplicationStart__PrewarmTextMeshPro(MethodInfo *method)

{
  UnityEngine_Object_o *obj;
  
  if (Il2CppMethodInitialized_18434792a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"TMP_Prewarm");
    Il2CppMethodInitialized_18434792a = '\x01';
  }
  obj = (UnityEngine_Object_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)obj,"TMP_Prewarm",(MethodInfo *)0x0);
  if (obj != (UnityEngine_Object_o *)0x0) {
    UnityEngine_GameObject__AddComponent_object_
              ((UnityEngine_GameObject_o *)obj,
               (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.ApplicationStart$$.ctor
// il2cpp: void ApplicationManagers_ApplicationStart___ctor (ApplicationManagers_ApplicationStart_o* __this, const MethodInfo* method);
// 0x180528540

void
ApplicationManagers_ApplicationStart___ctor(ApplicationManagers_ApplicationStart_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.ApplicationStart$$.cctor
// il2cpp: void ApplicationManagers_ApplicationStart___cctor (const MethodInfo* method);
// 0x182345570

void ApplicationManagers_ApplicationStart___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434792b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationStart);
    Il2CppMethodInitialized_18434792b = '\x01';
  }
  TypeInfo_ApplicationManagers_ApplicationStart->static_fields->_firstLaunch = true;
  return;
}


