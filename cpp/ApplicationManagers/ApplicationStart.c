// Type: ApplicationManagers.ApplicationStart
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/ApplicationStart.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/ApplicationStart.cs
// --------------------------------

// ApplicationManagers.ApplicationStart$$Awake
// il2cpp: void ApplicationManagers_ApplicationStart__Awake (ApplicationManagers_ApplicationStart_o* __this, const MethodInfo* method);
// 0x44abdb0

void ApplicationManagers_ApplicationStart__Awake
               (ApplicationManagers_ApplicationStart_o *__this,MethodInfo *method)

{
  char cVar1;
  Il2CppMethodPointer pIVar2;
  long lVar3;
  int iVar4;
  bool_conflict bVar5;
  System_Globalization_CultureInfo_o *pSVar6;
  System_Threading_Thread_o *pSVar7;
  UnityEngine_Object_o *obj;
  Il2CppObject *pIVar8;
  MethodInfo *pMVar9;
  
  if (g_data_057ae9eb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplicationStart);
    g_data_057ae9eb = '\x01';
    iVar4 = *(int *)((long)&TypeInfo_ApplicationStart[2].parameters + 4);
  }
  else {
    iVar4 = *(int *)((long)&TypeInfo_ApplicationStart[2].parameters + 4);
  }
  if (iVar4 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pIVar2 = TypeInfo_ApplicationStart[2].virtualMethodPointer;
    cVar1 = (char)*pIVar2;
  }
  else {
    pIVar2 = TypeInfo_ApplicationStart[2].virtualMethodPointer;
    cVar1 = (char)*pIVar2;
  }
  if (cVar1 == '\0') {
    return;
  }
  if (*(int *)((long)&TypeInfo_ApplicationStart[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    *TypeInfo_ApplicationStart[2].virtualMethodPointer = (Il2CppMethodPointer)0x0;
  }
  else {
    *pIVar2 = (Il2CppMethodPointer)0x0;
  }
  if (g_data_057ae9ec == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnticheatManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogService);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplicationConfig);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplicationStart);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AssetBundleManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BasicTitanSetup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatFilter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DiscordManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FullscreenHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MaterialCache);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PastebinLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_VoiceChatManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    g_data_057ae9ec = '\x01';
  }
  if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  System_Globalization_CultureInfo__set_DefaultThreadCurrentCulture(pSVar6,(MethodInfo *)0x0);
  pSVar6 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  System_Globalization_CultureInfo__set_DefaultThreadCurrentUICulture(pSVar6,(MethodInfo *)0x0);
  pSVar7 = System_Threading_Thread__get_CurrentThread((MethodInfo *)0x0);
  pSVar6 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  if (pSVar7 != (System_Threading_Thread_o *)0x0) {
    System_Threading_Thread__set_CurrentCulture(pSVar7,pSVar6,(MethodInfo *)0x0);
    pSVar7 = System_Threading_Thread__get_CurrentThread((MethodInfo *)0x0);
    pSVar6 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    if (pSVar7 != (System_Threading_Thread_o *)0x0) {
      System_Threading_Thread__set_CurrentUICulture(pSVar7,pSVar6,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar3 = *(long *)(TypeInfo_PhotonNetwork + 0xb8);
      *(undefined4 *)(lVar3 + 0x68) = 0;
      *(undefined1 *)(lVar3 + 0xd8) = 1;
      pMVar9 = TypeInfo_ApplicationConfig;
      if (*(int *)((long)&TypeInfo_ApplicationConfig[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_ApplicationConfig__Init(pMVar9);
      if (*(int *)(TypeInfo_AnticheatManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Anticheat_AnticheatManager__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Anticheat_ModeratorManager__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Anticheat_ChatFilter__Init((MethodInfo *)0x0);
      pMVar9 = TypeInfo_PhysicsLayer;
      if (*(int *)((long)&TypeInfo_PhysicsLayer[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Utility_PhysicsLayer__Init(pMVar9);
      if (*(int *)(TypeInfo_MaterialCache + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      CustomSkins_MaterialCache__Init((MethodInfo *)0x0);
      Events_EventManager__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_HumanSetup + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Characters_HumanSetup__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        iVar4 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
      }
      else {
        iVar4 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
      }
      if (iVar4 == 0xd) {
        Utility_DataMigrator__MigrateLinuxSaves((MethodInfo *)0x0);
      }
      Settings_SettingsManager__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_FullscreenHandler + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_FullscreenHandler__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UI_UIManager__Init((MethodInfo *)0x0);
      pMVar9 = TypeInfo_ApplicationStart;
      if (*(int *)((long)&TypeInfo_ApplicationStart[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_ApplicationStart__PrewarmTextMeshPro(pMVar9);
      if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_SnapshotManager__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UI_CursorManager__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Weather_WeatherManager__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      GameProgress_GameProgressManager__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Map_MapManager__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      CustomLogic_CustomLogicManager__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      GameManagers_ChatManager__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_PastebinLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_PastebinLoader__Init((MethodInfo *)0x0);
      pMVar9 = TypeInfo_AssetBundleManager;
      if (*(int *)((long)&TypeInfo_AssetBundleManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_AssetBundleManager__Init(pMVar9);
      ApplicationManagers_MusicManager__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_VoiceChatManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_VoiceChatManager__Init((MethodInfo *)0x0);
      Photon_CustomSerialization__Init((MethodInfo *)0x0);
      pMVar9 = TypeInfo_AccountManager;
      if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_AccountManager__Init(pMVar9);
      if (*(int *)(TypeInfo_AottgChangelogService + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_Changelog_AottgChangelogService__Init((MethodInfo *)0x0);
      ApplicationManagers_Credits_AottgCreditsService__Init((MethodInfo *)0x0);
      ApplicationManagers_PublicProfiles_AottgPublicProfileService__Init((MethodInfo *)0x0);
      ApplicationManagers_HeadlessManager__Init((MethodInfo *)0x0);
      pMVar9 = TypeInfo_DebugConsole;
      if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_DebugConsole__Init(pMVar9);
      Assets_Scripts_ApplicationManagers_DebugLagSim__Init((MethodInfo *)0x0);
      Utility_CustomDebug__Init((MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_ApplicationConfig[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (TypeInfo_ApplicationConfig[2].virtualMethodPointer[8] != (Il2CppMethodPointer)0x0) {
        ApplicationManagers_DebugTesting__Init((MethodInfo *)0x0);
        ApplicationManagers_DebugTesting__RunTests((MethodInfo *)0x0);
      }
      if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Characters_BasicTitanSetup__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Characters_CharacterData__Init((MethodInfo *)0x0);
      ApplicationManagers_MiscInfo__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_PastebinLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_PastebinLoader__LoadPastebin((MethodInfo *)0x0);
      ApplicationManagers_SceneLoader__Init((MethodInfo *)0x0);
      Events_EventManager__InvokeFinishInit((MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_ApplicationConfig[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (TypeInfo_ApplicationConfig[2].virtualMethodPointer[8] != (Il2CppMethodPointer)0x0) {
        ApplicationManagers_DebugTesting__RunLateTests((MethodInfo *)0x0);
      }
      if (*(int *)(TypeInfo_DiscordManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_DiscordManager__Init((MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae9ed == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_AddComponent_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"TMP_Prewarm");
    g_data_057ae9ed = '\x01';
  }
  obj = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)obj,"TMP_Prewarm",(MethodInfo *)0x0);
  if (obj != (UnityEngine_Object_o *)0x0) {
    UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)obj,MethodInfo_TextMeshProUGUI_AddComponent_TextMeshProUGUI);
    if (*(int *)(TypeInfo_Object + 0xe4) != 0) {
      UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_02337ed0();
    UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae9f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AssetBundleManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AssetBundleManager_CreateSingleton_AssetBundleManager);
    g_data_057ae9f5 = '\x01';
  }
  if (*(int *)((long)&TypeInfo_AssetBundleManager[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar8 = Utility_SingletonFactory__CreateSingleton_object_
                     (*(Il2CppObject **)TypeInfo_AssetBundleManager[2].virtualMethodPointer,MethodInfo_AssetBundleManager_CreateSingleton_AssetBundleManager);
  *(Il2CppObject **)TypeInfo_AssetBundleManager[2].virtualMethodPointer = pIVar8;
  pMVar9 = (MethodInfo *)TypeInfo_AssetBundleManager[2].virtualMethodPointer;
  il2cpp_runtime_helper_022b4080();
  ApplicationManagers_AssetBundleManager__ClearTemp(pMVar9);
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = System_IO_Directory__Exists
                    (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x70),(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    System_IO_Directory__CreateDirectory
              (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x70),(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = System_IO_Directory__Exists
                    (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x78),(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_IO_Directory__CreateDirectory
            (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x78),(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.ApplicationStart$$Init
// il2cpp: void ApplicationManagers_ApplicationStart__Init (const MethodInfo* method);
// 0x44abe40

void ApplicationManagers_ApplicationStart__Init(MethodInfo *method)

{
  long lVar1;
  int iVar2;
  bool_conflict bVar3;
  System_Globalization_CultureInfo_o *pSVar4;
  System_Threading_Thread_o *pSVar5;
  UnityEngine_Object_o *obj;
  Il2CppObject *pIVar6;
  MethodInfo *pMVar7;
  
  if (g_data_057ae9ec == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnticheatManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogService);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplicationConfig);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplicationStart);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AssetBundleManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BasicTitanSetup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatFilter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DiscordManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FullscreenHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MaterialCache);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PastebinLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_VoiceChatManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    g_data_057ae9ec = '\x01';
  }
  if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  System_Globalization_CultureInfo__set_DefaultThreadCurrentCulture(pSVar4,(MethodInfo *)0x0);
  pSVar4 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  System_Globalization_CultureInfo__set_DefaultThreadCurrentUICulture(pSVar4,(MethodInfo *)0x0);
  pSVar5 = System_Threading_Thread__get_CurrentThread((MethodInfo *)0x0);
  pSVar4 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  if (pSVar5 != (System_Threading_Thread_o *)0x0) {
    System_Threading_Thread__set_CurrentCulture(pSVar5,pSVar4,(MethodInfo *)0x0);
    pSVar5 = System_Threading_Thread__get_CurrentThread((MethodInfo *)0x0);
    pSVar4 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    if (pSVar5 != (System_Threading_Thread_o *)0x0) {
      System_Threading_Thread__set_CurrentUICulture(pSVar5,pSVar4,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar1 = *(long *)(TypeInfo_PhotonNetwork + 0xb8);
      *(undefined4 *)(lVar1 + 0x68) = 0;
      *(undefined1 *)(lVar1 + 0xd8) = 1;
      pMVar7 = TypeInfo_ApplicationConfig;
      if (*(int *)((long)&TypeInfo_ApplicationConfig[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_ApplicationConfig__Init(pMVar7);
      if (*(int *)(TypeInfo_AnticheatManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Anticheat_AnticheatManager__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Anticheat_ModeratorManager__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Anticheat_ChatFilter__Init((MethodInfo *)0x0);
      pMVar7 = TypeInfo_PhysicsLayer;
      if (*(int *)((long)&TypeInfo_PhysicsLayer[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Utility_PhysicsLayer__Init(pMVar7);
      if (*(int *)(TypeInfo_MaterialCache + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      CustomSkins_MaterialCache__Init((MethodInfo *)0x0);
      Events_EventManager__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_HumanSetup + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Characters_HumanSetup__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
      }
      else {
        iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
      }
      if (iVar2 == 0xd) {
        Utility_DataMigrator__MigrateLinuxSaves((MethodInfo *)0x0);
      }
      Settings_SettingsManager__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_FullscreenHandler + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_FullscreenHandler__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UI_UIManager__Init((MethodInfo *)0x0);
      pMVar7 = TypeInfo_ApplicationStart;
      if (*(int *)((long)&TypeInfo_ApplicationStart[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_ApplicationStart__PrewarmTextMeshPro(pMVar7);
      if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_SnapshotManager__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UI_CursorManager__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Weather_WeatherManager__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      GameProgress_GameProgressManager__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Map_MapManager__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      CustomLogic_CustomLogicManager__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      GameManagers_ChatManager__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_PastebinLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_PastebinLoader__Init((MethodInfo *)0x0);
      pMVar7 = TypeInfo_AssetBundleManager;
      if (*(int *)((long)&TypeInfo_AssetBundleManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_AssetBundleManager__Init(pMVar7);
      ApplicationManagers_MusicManager__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_VoiceChatManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_VoiceChatManager__Init((MethodInfo *)0x0);
      Photon_CustomSerialization__Init((MethodInfo *)0x0);
      pMVar7 = TypeInfo_AccountManager;
      if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_AccountManager__Init(pMVar7);
      if (*(int *)(TypeInfo_AottgChangelogService + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_Changelog_AottgChangelogService__Init((MethodInfo *)0x0);
      ApplicationManagers_Credits_AottgCreditsService__Init((MethodInfo *)0x0);
      ApplicationManagers_PublicProfiles_AottgPublicProfileService__Init((MethodInfo *)0x0);
      ApplicationManagers_HeadlessManager__Init((MethodInfo *)0x0);
      pMVar7 = TypeInfo_DebugConsole;
      if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_DebugConsole__Init(pMVar7);
      Assets_Scripts_ApplicationManagers_DebugLagSim__Init((MethodInfo *)0x0);
      Utility_CustomDebug__Init((MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_ApplicationConfig[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (TypeInfo_ApplicationConfig[2].virtualMethodPointer[8] != (Il2CppMethodPointer)0x0) {
        ApplicationManagers_DebugTesting__Init((MethodInfo *)0x0);
        ApplicationManagers_DebugTesting__RunTests((MethodInfo *)0x0);
      }
      if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Characters_BasicTitanSetup__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Characters_CharacterData__Init((MethodInfo *)0x0);
      ApplicationManagers_MiscInfo__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_PastebinLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_PastebinLoader__LoadPastebin((MethodInfo *)0x0);
      ApplicationManagers_SceneLoader__Init((MethodInfo *)0x0);
      Events_EventManager__InvokeFinishInit((MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_ApplicationConfig[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (TypeInfo_ApplicationConfig[2].virtualMethodPointer[8] != (Il2CppMethodPointer)0x0) {
        ApplicationManagers_DebugTesting__RunLateTests((MethodInfo *)0x0);
      }
      if (*(int *)(TypeInfo_DiscordManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_DiscordManager__Init((MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae9ed == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_AddComponent_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"TMP_Prewarm");
    g_data_057ae9ed = '\x01';
  }
  obj = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)obj,"TMP_Prewarm",(MethodInfo *)0x0);
  if (obj == (UnityEngine_Object_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae9f5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AssetBundleManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
      il2cpp_runtime_helper_023445d0(&MethodInfo_AssetBundleManager_CreateSingleton_AssetBundleManager);
      g_data_057ae9f5 = '\x01';
    }
    if (*(int *)((long)&TypeInfo_AssetBundleManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar6 = Utility_SingletonFactory__CreateSingleton_object_
                       (*(Il2CppObject **)TypeInfo_AssetBundleManager[2].virtualMethodPointer,MethodInfo_AssetBundleManager_CreateSingleton_AssetBundleManager);
    *(Il2CppObject **)TypeInfo_AssetBundleManager[2].virtualMethodPointer = pIVar6;
    pMVar7 = (MethodInfo *)TypeInfo_AssetBundleManager[2].virtualMethodPointer;
    il2cpp_runtime_helper_022b4080();
    ApplicationManagers_AssetBundleManager__ClearTemp(pMVar7);
    if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = System_IO_Directory__Exists
                      (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x70),(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      System_IO_Directory__CreateDirectory
                (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x70),(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = System_IO_Directory__Exists
                      (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x78),(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return;
    }
    if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    System_IO_Directory__CreateDirectory
              (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x78),(MethodInfo *)0x0);
    return;
  }
  UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)obj,MethodInfo_TextMeshProUGUI_AddComponent_TextMeshProUGUI);
  if (*(int *)(TypeInfo_Object + 0xe4) != 0) {
    UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.ApplicationStart$$PrewarmTextMeshPro
// il2cpp: void ApplicationManagers_ApplicationStart__PrewarmTextMeshPro (const MethodInfo* method);
// 0x44ac4a0

void ApplicationManagers_ApplicationStart__PrewarmTextMeshPro(MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Object_o *obj;
  Il2CppObject *pIVar2;
  MethodInfo *method_00;
  
  if (g_data_057ae9ed == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_AddComponent_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"TMP_Prewarm");
    g_data_057ae9ed = '\x01';
  }
  obj = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)obj,"TMP_Prewarm",(MethodInfo *)0x0);
  if (obj != (UnityEngine_Object_o *)0x0) {
    UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)obj,MethodInfo_TextMeshProUGUI_AddComponent_TextMeshProUGUI);
    if (*(int *)(TypeInfo_Object + 0xe4) != 0) {
      UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_02337ed0();
    UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae9f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AssetBundleManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AssetBundleManager_CreateSingleton_AssetBundleManager);
    g_data_057ae9f5 = '\x01';
  }
  if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar2 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_AssetBundleManager + 0xb8),MethodInfo_AssetBundleManager_CreateSingleton_AssetBundleManager);
  **(undefined8 **)(TypeInfo_AssetBundleManager + 0xb8) = pIVar2;
  method_00 = *(MethodInfo **)(TypeInfo_AssetBundleManager + 0xb8);
  il2cpp_runtime_helper_022b4080();
  ApplicationManagers_AssetBundleManager__ClearTemp(method_00);
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = System_IO_Directory__Exists
                    (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x70),(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    System_IO_Directory__CreateDirectory
              (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x70),(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = System_IO_Directory__Exists
                    (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x78),(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_IO_Directory__CreateDirectory
            (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x78),(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.ApplicationStart$$.ctor
// il2cpp: void ApplicationManagers_ApplicationStart___ctor (ApplicationManagers_ApplicationStart_o* __this, const MethodInfo* method);
// 0x44ac7f0

void ApplicationManagers_ApplicationStart___ctor
               (ApplicationManagers_ApplicationStart_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.ApplicationStart$$.cctor
// il2cpp: void ApplicationManagers_ApplicationStart___cctor (const MethodInfo* method);
// 0x44ac800

void ApplicationManagers_ApplicationStart___cctor(MethodInfo *method)

{
  if (g_data_057ae9ee == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplicationStart);
    g_data_057ae9ee = '\x01';
  }
  **(undefined1 **)(TypeInfo_ApplicationStart + 0xb8) = 1;
  return;
}


