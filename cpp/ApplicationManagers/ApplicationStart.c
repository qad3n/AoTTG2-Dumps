// Type: ApplicationManagers.ApplicationStart
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers/ApplicationStart.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/ApplicationManagers/ApplicationStart.cs  [CHANGED since prior version]
// --------------------------------

// ApplicationManagers.ApplicationStart$$Awake
// il2cpp: void ApplicationManagers_ApplicationStart__Awake (ApplicationManagers_ApplicationStart_o* __this, const MethodInfo* method);
// 0x4193d60

void ApplicationManagers_ApplicationStart__Awake
               (ApplicationManagers_ApplicationStart_o *__this,MethodInfo *method)

{
  char cVar1;
  Il2CppMethodPointer pIVar2;
  long lVar3;
  int iVar4;
  System_Globalization_CultureInfo_o *pSVar5;
  System_Threading_Thread_o *pSVar6;
  MethodInfo *pMVar7;
  
  if (DAT_05704c1f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplicationStart);
    DAT_05704c1f = '\x01';
    iVar4 = *(int *)((long)&TypeInfo_ApplicationStart[2].parameters + 4);
  }
  else {
    iVar4 = *(int *)((long)&TypeInfo_ApplicationStart[2].parameters + 4);
  }
  if (iVar4 == 0) {
    il2cpp_init_class();
    pIVar2 = TypeInfo_ApplicationStart[2].virtualMethodPointer;
    cVar1 = (char)*pIVar2;
  }
  else {
    pIVar2 = TypeInfo_ApplicationStart[2].virtualMethodPointer;
    cVar1 = (char)*pIVar2;
  }
  if (cVar1 != '\0') {
    if (*(int *)((long)&TypeInfo_ApplicationStart[2].parameters + 4) == 0) {
      il2cpp_init_class();
      *TypeInfo_ApplicationStart[2].virtualMethodPointer = (Il2CppMethodPointer)0x0;
    }
    else {
      *pIVar2 = (Il2CppMethodPointer)0x0;
    }
    if (DAT_05704c20 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_AccountManager);
      il2cpp_init_method_metadata(&TypeInfo_AnticheatManager);
      il2cpp_init_method_metadata(&TypeInfo_ApplicationConfig);
      il2cpp_init_method_metadata(&TypeInfo_ApplicationStart);
      il2cpp_init_method_metadata(&TypeInfo_Application);
      il2cpp_init_method_metadata(&TypeInfo_AssetBundleManager);
      il2cpp_init_method_metadata(&TypeInfo_BasicTitanSetup);
      il2cpp_init_method_metadata(&TypeInfo_CharacterData);
      il2cpp_init_method_metadata(&TypeInfo_ChatFilter);
      il2cpp_init_method_metadata(&TypeInfo_ChatManager);
      il2cpp_init_method_metadata(&TypeInfo_CultureInfo);
      il2cpp_init_method_metadata(&TypeInfo_CursorManager);
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
      il2cpp_init_method_metadata(&TypeInfo_DebugConsole);
      il2cpp_init_method_metadata(&TypeInfo_DiscordManager);
      il2cpp_init_method_metadata(&TypeInfo_FullscreenHandler);
      il2cpp_init_method_metadata(&TypeInfo_GameProgressManager);
      il2cpp_init_method_metadata(&TypeInfo_HumanSetup);
      il2cpp_init_method_metadata(&TypeInfo_MapManager);
      il2cpp_init_method_metadata(&TypeInfo_MaterialCache);
      il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
      il2cpp_init_method_metadata(&TypeInfo_PastebinLoader);
      il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
      il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
      il2cpp_init_method_metadata(&TypeInfo_SnapshotManager);
      il2cpp_init_method_metadata(&TypeInfo_UIManager);
      il2cpp_init_method_metadata(&TypeInfo_VoiceChatManager);
      il2cpp_init_method_metadata(&TypeInfo_WeatherManager);
      DAT_05704c20 = '\x01';
    }
    if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar5 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    System_Globalization_CultureInfo__set_DefaultThreadCurrentCulture(pSVar5,(MethodInfo *)0x0);
    pSVar5 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    System_Globalization_CultureInfo__set_DefaultThreadCurrentUICulture(pSVar5,(MethodInfo *)0x0);
    pSVar6 = System_Threading_Thread__get_CurrentThread((MethodInfo *)0x0);
    pSVar5 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    if (pSVar6 != (System_Threading_Thread_o *)0x0) {
      System_Threading_Thread__set_CurrentCulture(pSVar6,pSVar5,(MethodInfo *)0x0);
      pSVar6 = System_Threading_Thread__get_CurrentThread((MethodInfo *)0x0);
      pSVar5 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      if (pSVar6 != (System_Threading_Thread_o *)0x0) {
        System_Threading_Thread__set_CurrentUICulture(pSVar6,pSVar5,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar3 = *(long *)(TypeInfo_PhotonNetwork + 0xb8);
        *(undefined4 *)(lVar3 + 0x68) = 0;
        *(undefined1 *)(lVar3 + 0xd8) = 1;
        pMVar7 = TypeInfo_ApplicationConfig;
        if (*(int *)((long)&TypeInfo_ApplicationConfig[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        ApplicationManagers_ApplicationConfig__Init(pMVar7);
        if (*(int *)(TypeInfo_AnticheatManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Anticheat_AnticheatManager__Init((MethodInfo *)0x0);
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Anticheat_ModeratorManager__Init((MethodInfo *)0x0);
        if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Anticheat_ChatFilter__Init((MethodInfo *)0x0);
        pMVar7 = TypeInfo_PhysicsLayer;
        if (*(int *)((long)&TypeInfo_PhysicsLayer[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        Utility_PhysicsLayer__Init(pMVar7);
        if (*(int *)(TypeInfo_MaterialCache + 0xe4) == 0) {
          il2cpp_init_class();
        }
        CustomSkins_MaterialCache__Init((MethodInfo *)0x0);
        Events_EventManager__Init((MethodInfo *)0x0);
        if (*(int *)(TypeInfo_HumanSetup + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Characters_HumanSetup__Init((MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
          il2cpp_init_class();
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
          il2cpp_init_class();
        }
        ApplicationManagers_FullscreenHandler__Init((MethodInfo *)0x0);
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UI_UIManager__Init((MethodInfo *)0x0);
        pMVar7 = TypeInfo_ApplicationStart;
        if (*(int *)((long)&TypeInfo_ApplicationStart[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        ApplicationManagers_ApplicationStart__PrewarmTextMeshPro(pMVar7);
        if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        ApplicationManagers_SnapshotManager__Init((MethodInfo *)0x0);
        if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UI_CursorManager__Init((MethodInfo *)0x0);
        if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Weather_WeatherManager__Init((MethodInfo *)0x0);
        if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        GameProgress_GameProgressManager__Init((MethodInfo *)0x0);
        if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Map_MapManager__Init((MethodInfo *)0x0);
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        CustomLogic_CustomLogicManager__Init((MethodInfo *)0x0);
        if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        GameManagers_ChatManager__Init((MethodInfo *)0x0);
        if (*(int *)(TypeInfo_PastebinLoader + 0xe4) == 0) {
          il2cpp_init_class();
        }
        ApplicationManagers_PastebinLoader__Init((MethodInfo *)0x0);
        pMVar7 = TypeInfo_AssetBundleManager;
        if (*(int *)((long)&TypeInfo_AssetBundleManager[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        ApplicationManagers_AssetBundleManager__Init(pMVar7);
        ApplicationManagers_MusicManager__Init((MethodInfo *)0x0);
        if (*(int *)(TypeInfo_VoiceChatManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        ApplicationManagers_VoiceChatManager__Init((MethodInfo *)0x0);
        Photon_CustomSerialization__Init((MethodInfo *)0x0);
        pMVar7 = TypeInfo_AccountManager;
        if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        ApplicationManagers_AccountManager__Init(pMVar7);
        ApplicationManagers_Credits_AottgCreditsService__Init((MethodInfo *)0x0);
        ApplicationManagers_PublicProfiles_AottgPublicProfileService__Init((MethodInfo *)0x0);
        ApplicationManagers_HeadlessManager__Init((MethodInfo *)0x0);
        pMVar7 = TypeInfo_DebugConsole;
        if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        ApplicationManagers_DebugConsole__Init(pMVar7);
        Assets_Scripts_ApplicationManagers_DebugLagSim__Init((MethodInfo *)0x0);
        Utility_CustomDebug__Init((MethodInfo *)0x0);
        if (*(int *)((long)&TypeInfo_ApplicationConfig[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        if (TypeInfo_ApplicationConfig[2].virtualMethodPointer[8] != (Il2CppMethodPointer)0x0) {
          ApplicationManagers_DebugTesting__Init((MethodInfo *)0x0);
          ApplicationManagers_DebugTesting__RunTests((MethodInfo *)0x0);
        }
        if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Characters_BasicTitanSetup__Init((MethodInfo *)0x0);
        if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Characters_CharacterData__Init((MethodInfo *)0x0);
        ApplicationManagers_MiscInfo__Init((MethodInfo *)0x0);
        if (*(int *)(TypeInfo_PastebinLoader + 0xe4) == 0) {
          il2cpp_init_class();
        }
        ApplicationManagers_PastebinLoader__LoadPastebin((MethodInfo *)0x0);
        ApplicationManagers_SceneLoader__Init((MethodInfo *)0x0);
        Events_EventManager__InvokeFinishInit((MethodInfo *)0x0);
        if (*(int *)((long)&TypeInfo_ApplicationConfig[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        if (TypeInfo_ApplicationConfig[2].virtualMethodPointer[8] != (Il2CppMethodPointer)0x0) {
          ApplicationManagers_DebugTesting__RunLateTests((MethodInfo *)0x0);
        }
        if (*(int *)(TypeInfo_DiscordManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        ApplicationManagers_DiscordManager__Init((MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// ApplicationManagers.ApplicationStart$$Init
// il2cpp: void ApplicationManagers_ApplicationStart__Init (const MethodInfo* method);
// 0x4193df0

void ApplicationManagers_ApplicationStart__Init(MethodInfo *method)

{
  long lVar1;
  int iVar2;
  System_Globalization_CultureInfo_o *pSVar3;
  System_Threading_Thread_o *pSVar4;
  MethodInfo *pMVar5;
  
  if (DAT_05704c20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_AnticheatManager);
    il2cpp_init_method_metadata(&TypeInfo_ApplicationConfig);
    il2cpp_init_method_metadata(&TypeInfo_ApplicationStart);
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_AssetBundleManager);
    il2cpp_init_method_metadata(&TypeInfo_BasicTitanSetup);
    il2cpp_init_method_metadata(&TypeInfo_CharacterData);
    il2cpp_init_method_metadata(&TypeInfo_ChatFilter);
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_CultureInfo);
    il2cpp_init_method_metadata(&TypeInfo_CursorManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_DebugConsole);
    il2cpp_init_method_metadata(&TypeInfo_DiscordManager);
    il2cpp_init_method_metadata(&TypeInfo_FullscreenHandler);
    il2cpp_init_method_metadata(&TypeInfo_GameProgressManager);
    il2cpp_init_method_metadata(&TypeInfo_HumanSetup);
    il2cpp_init_method_metadata(&TypeInfo_MapManager);
    il2cpp_init_method_metadata(&TypeInfo_MaterialCache);
    il2cpp_init_method_metadata(&TypeInfo_ModeratorManager);
    il2cpp_init_method_metadata(&TypeInfo_PastebinLoader);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    il2cpp_init_method_metadata(&TypeInfo_SnapshotManager);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_VoiceChatManager);
    il2cpp_init_method_metadata(&TypeInfo_WeatherManager);
    DAT_05704c20 = '\x01';
  }
  if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  System_Globalization_CultureInfo__set_DefaultThreadCurrentCulture(pSVar3,(MethodInfo *)0x0);
  pSVar3 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  System_Globalization_CultureInfo__set_DefaultThreadCurrentUICulture(pSVar3,(MethodInfo *)0x0);
  pSVar4 = System_Threading_Thread__get_CurrentThread((MethodInfo *)0x0);
  pSVar3 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  if (pSVar4 != (System_Threading_Thread_o *)0x0) {
    System_Threading_Thread__set_CurrentCulture(pSVar4,pSVar3,(MethodInfo *)0x0);
    pSVar4 = System_Threading_Thread__get_CurrentThread((MethodInfo *)0x0);
    pSVar3 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    if (pSVar4 != (System_Threading_Thread_o *)0x0) {
      System_Threading_Thread__set_CurrentUICulture(pSVar4,pSVar3,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar1 = *(long *)(TypeInfo_PhotonNetwork + 0xb8);
      *(undefined4 *)(lVar1 + 0x68) = 0;
      *(undefined1 *)(lVar1 + 0xd8) = 1;
      pMVar5 = TypeInfo_ApplicationConfig;
      if (*(int *)((long)&TypeInfo_ApplicationConfig[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      ApplicationManagers_ApplicationConfig__Init(pMVar5);
      if (*(int *)(TypeInfo_AnticheatManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Anticheat_AnticheatManager__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Anticheat_ModeratorManager__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Anticheat_ChatFilter__Init((MethodInfo *)0x0);
      pMVar5 = TypeInfo_PhysicsLayer;
      if (*(int *)((long)&TypeInfo_PhysicsLayer[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      Utility_PhysicsLayer__Init(pMVar5);
      if (*(int *)(TypeInfo_MaterialCache + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomSkins_MaterialCache__Init((MethodInfo *)0x0);
      Events_EventManager__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_HumanSetup + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Characters_HumanSetup__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
        il2cpp_init_class();
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
        il2cpp_init_class();
      }
      ApplicationManagers_FullscreenHandler__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UI_UIManager__Init((MethodInfo *)0x0);
      pMVar5 = TypeInfo_ApplicationStart;
      if (*(int *)((long)&TypeInfo_ApplicationStart[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      ApplicationManagers_ApplicationStart__PrewarmTextMeshPro(pMVar5);
      if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      ApplicationManagers_SnapshotManager__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UI_CursorManager__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Weather_WeatherManager__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      GameProgress_GameProgressManager__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Map_MapManager__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_CustomLogicManager__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      GameManagers_ChatManager__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_PastebinLoader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      ApplicationManagers_PastebinLoader__Init((MethodInfo *)0x0);
      pMVar5 = TypeInfo_AssetBundleManager;
      if (*(int *)((long)&TypeInfo_AssetBundleManager[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      ApplicationManagers_AssetBundleManager__Init(pMVar5);
      ApplicationManagers_MusicManager__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_VoiceChatManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      ApplicationManagers_VoiceChatManager__Init((MethodInfo *)0x0);
      Photon_CustomSerialization__Init((MethodInfo *)0x0);
      pMVar5 = TypeInfo_AccountManager;
      if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      ApplicationManagers_AccountManager__Init(pMVar5);
      ApplicationManagers_Credits_AottgCreditsService__Init((MethodInfo *)0x0);
      ApplicationManagers_PublicProfiles_AottgPublicProfileService__Init((MethodInfo *)0x0);
      ApplicationManagers_HeadlessManager__Init((MethodInfo *)0x0);
      pMVar5 = TypeInfo_DebugConsole;
      if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      ApplicationManagers_DebugConsole__Init(pMVar5);
      Assets_Scripts_ApplicationManagers_DebugLagSim__Init((MethodInfo *)0x0);
      Utility_CustomDebug__Init((MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_ApplicationConfig[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      if (TypeInfo_ApplicationConfig[2].virtualMethodPointer[8] != (Il2CppMethodPointer)0x0) {
        ApplicationManagers_DebugTesting__Init((MethodInfo *)0x0);
        ApplicationManagers_DebugTesting__RunTests((MethodInfo *)0x0);
      }
      if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Characters_BasicTitanSetup__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Characters_CharacterData__Init((MethodInfo *)0x0);
      ApplicationManagers_MiscInfo__Init((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_PastebinLoader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      ApplicationManagers_PastebinLoader__LoadPastebin((MethodInfo *)0x0);
      ApplicationManagers_SceneLoader__Init((MethodInfo *)0x0);
      Events_EventManager__InvokeFinishInit((MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_ApplicationConfig[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      if (TypeInfo_ApplicationConfig[2].virtualMethodPointer[8] != (Il2CppMethodPointer)0x0) {
        ApplicationManagers_DebugTesting__RunLateTests((MethodInfo *)0x0);
      }
      if (*(int *)(TypeInfo_DiscordManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      ApplicationManagers_DiscordManager__Init((MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.ApplicationStart$$PrewarmTextMeshPro
// il2cpp: void ApplicationManagers_ApplicationStart__PrewarmTextMeshPro (const MethodInfo* method);
// 0x4194420

void ApplicationManagers_ApplicationStart__PrewarmTextMeshPro(MethodInfo *method)

{
  UnityEngine_Object_o *obj;
  
  if (DAT_05704c21 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TextMeshProUGUI_AddComponent_TextMeshProUGUI);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"TMP_Prewarm");
    DAT_05704c21 = '\x01';
  }
  obj = (UnityEngine_Object_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)obj,"TMP_Prewarm",(MethodInfo *)0x0);
  if (obj != (UnityEngine_Object_o *)0x0) {
    UnityEngine_GameObject__AddComponent<object>((UnityEngine_GameObject_o *)obj,MethodInfo_TextMeshProUGUI_AddComponent_TextMeshProUGUI);
    if (*(int *)(TypeInfo_Object + 0xe4) != 0) {
      UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
      return;
    }
    il2cpp_init_class();
    UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.ApplicationStart$$.ctor
// il2cpp: void ApplicationManagers_ApplicationStart___ctor (ApplicationManagers_ApplicationStart_o* __this, const MethodInfo* method);
// 0x4194770

void ApplicationManagers_ApplicationStart___ctor
               (ApplicationManagers_ApplicationStart_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.ApplicationStart$$.cctor
// il2cpp: void ApplicationManagers_ApplicationStart___cctor (const MethodInfo* method);
// 0x4194780

void ApplicationManagers_ApplicationStart___cctor(MethodInfo *method)

{
  if (DAT_05704c22 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplicationStart);
    DAT_05704c22 = '\x01';
  }
  **(undefined1 **)(TypeInfo_ApplicationStart + 0xb8) = 1;
  return;
}


