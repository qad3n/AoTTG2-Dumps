// Type: ApplicationManagers.ApplicationStart
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/ApplicationManagers/ApplicationStart.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/ApplicationStart.cs
// --------------------------------

// ApplicationManagers.ApplicationStart$$Awake
// il2cpp: void ApplicationManagers_ApplicationStart__Awake (ApplicationManagers_ApplicationStart_o* __this, const MethodInfo* method);
// 0x5e08210

void ApplicationManagers_ApplicationStart__Awake
               (ApplicationManagers_ApplicationStart_o *__this,MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  ApplicationManagers_ApplicationStart_StaticFields *pAVar3;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_075483e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationStart);
    Il2CppMethodInitialized_075483e1 = '\x01';
    uVar2 = (TypeInfo_ApplicationManagers_ApplicationStart->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_ApplicationManagers_ApplicationStart->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationStart);
    pAVar3 = TypeInfo_ApplicationManagers_ApplicationStart->static_fields;
    cVar1 = pAVar3->_firstLaunch;
    klass = (Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationStart;
  }
  else {
    pAVar3 = ((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationStart)->static_fields;
    cVar1 = pAVar3->_firstLaunch;
    klass = (Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationStart;
  }
  if (cVar1 == '\0') {
    TypeInfo_ApplicationManagers_ApplicationStart = (ApplicationManagers_ApplicationStart_c *)klass;
    return;
  }
  TypeInfo_ApplicationManagers_ApplicationStart = (ApplicationManagers_ApplicationStart_c *)klass;
  if ((klass->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    TypeInfo_ApplicationManagers_ApplicationStart->static_fields->_firstLaunch = false;
    ApplicationManagers_ApplicationStart__Init((MethodInfo *)klass);
    return;
  }
  pAVar3->_firstLaunch = false;
  ApplicationManagers_ApplicationStart__Init((MethodInfo *)klass);
  return;
}


// ApplicationManagers.ApplicationStart$$InitMobile
// il2cpp: void ApplicationManagers_ApplicationStart__InitMobile (const MethodInfo* method);
// 0x5e089d0

void ApplicationManagers_ApplicationStart__InitMobile(MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_Rendering_DebugManager_o *__this;
  
  if (Il2CppMethodInitialized_075483e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rendering_DebugManager);
    Il2CppMethodInitialized_075483e2 = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Rendering_DebugManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UnityEngine_Rendering_DebugManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rendering_DebugManager);
    __this = UnityEngine_Rendering_DebugManager__get_instance((MethodInfo *)0x0);
  }
  else {
    __this = UnityEngine_Rendering_DebugManager__get_instance((MethodInfo *)0x0);
  }
  if (__this == (UnityEngine_Rendering_DebugManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Rendering_DebugManager__set_enableRuntimeUI(__this,false,(MethodInfo *)0x0);
  UnityEngine_Screen__set_autorotateToPortrait(false,(MethodInfo *)0x0);
  UnityEngine_Screen__set_autorotateToPortraitUpsideDown(false,(MethodInfo *)0x0);
  UnityEngine_Screen__set_autorotateToLandscapeLeft(true,(MethodInfo *)0x0);
  UnityEngine_Screen__set_autorotateToLandscapeRight(true,(MethodInfo *)0x0);
  UnityEngine_Screen__set_orientation(3,(MethodInfo *)0x0);
  Utility_MobileBuiltinAssets__Prepare((MethodInfo *)0x0);
  return;
}


// ApplicationManagers.ApplicationStart$$Init
// il2cpp: void ApplicationManagers_ApplicationStart__Init (const MethodInfo* method);
// 0x5e082a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e0898f: jmp 0x5e0887d

void ApplicationManagers_ApplicationStart__Init(MethodInfo *method)

{
  uint32_t uVar1;
  Photon_Pun_PhotonNetwork_StaticFields *pPVar2;
  bool bVar3;
  System_Globalization_CultureInfo_o *pSVar4;
  System_Threading_Thread_o *pSVar5;
  ApplicationManagers_FullscreenHandler_o *pAVar6;
  ApplicationManagers_DebugConsole_c *method_00;
  ApplicationManagers_ApplicationStart_c *pAVar7;
  ApplicationManagers_ApplicationConfig_c *method_01;
  ApplicationManagers_SnapshotManager_c *method_02;
  ApplicationManagers_AssetBundleManager_c *method_03;
  ApplicationManagers_VoiceChatManager_c *method_04;
  MethodInfo *pMVar8;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_075483e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_AnticheatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationConfig);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationStart);
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
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_FullscreenHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_MaterialCache);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_VoiceChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    Il2CppMethodInitialized_075483e3 = '\x01';
  }
  method_00 = TypeInfo_ApplicationManagers_DebugConsole;
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  ApplicationManagers_DebugConsole__Init((MethodInfo *)method_00);
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  pSVar4 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  System_Globalization_CultureInfo__set_DefaultThreadCurrentCulture(pSVar4,(MethodInfo *)0x0);
  pSVar4 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  System_Globalization_CultureInfo__set_DefaultThreadCurrentUICulture(pSVar4,(MethodInfo *)0x0);
  pSVar5 = System_Threading_Thread__get_CurrentThread((MethodInfo *)0x0);
  pSVar4 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  if (pSVar5 == (System_Threading_Thread_o *)0x0) {
label_05e089c1:
    ThrowNullReferenceException();
  }
  System_Threading_Thread__set_CurrentCulture(pSVar5,pSVar4,(MethodInfo *)0x0);
  pSVar5 = System_Threading_Thread__get_CurrentThread((MethodInfo *)0x0);
  pSVar4 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  if (pSVar5 == (System_Threading_Thread_o *)0x0) goto label_05e089c1;
  System_Threading_Thread__set_CurrentUICulture(pSVar5,pSVar4,(MethodInfo *)0x0);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar2 = TypeInfo_Photon_Pun_PhotonNetwork->static_fields;
  pPVar2->MinimalTimeScaleToDispatchInFixedUpdate = 0.0;
  pPVar2->UseRpcMonoBehaviourCache = true;
  bVar3 = Utility_MobilePlatformUtility__IsMobileRuntime((MethodInfo *)0x0);
  if (bVar3) {
    pAVar7 = TypeInfo_ApplicationManagers_ApplicationStart;
    if ((TypeInfo_ApplicationManagers_ApplicationStart->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationStart);
    }
    ApplicationManagers_ApplicationStart__InitMobile((MethodInfo *)pAVar7);
  }
  method_01 = TypeInfo_ApplicationManagers_ApplicationConfig;
  if ((TypeInfo_ApplicationManagers_ApplicationConfig->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationConfig);
  }
  ApplicationManagers_ApplicationConfig__Init((MethodInfo *)method_01);
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
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  Utility_FolderPaths__CheckDocumentsWritable((MethodInfo *)0x0);
  Settings_SettingsManager__Init((MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
    if (g_data_07548426 != '\0') goto label_05e0862d;
label_05e08937:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_FullscreenHandler);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_FullscreenHandler);
    g_data_07548426 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (g_data_07548426 == '\0') goto label_05e08937;
label_05e0862d:
    uVar1 = (TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
  }
  pAVar6 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)TypeInfo_ApplicationManagers_FullscreenHandler->static_fields->_instance
                      ,(MethodInfo_3680650 *)
                       MethodInfo_Utility_SingletonFactory_CreateSingleton_FullscreenHandler);
  TypeInfo_ApplicationManagers_FullscreenHandler->static_fields->_instance = pAVar6;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_FullscreenHandler->static_fields->_instance);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  UI_UIManager__Init((MethodInfo *)0x0);
  pAVar7 = TypeInfo_ApplicationManagers_ApplicationStart;
  if ((TypeInfo_ApplicationManagers_ApplicationStart->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationStart);
  }
  ApplicationManagers_ApplicationStart__PrewarmTextMeshPro((MethodInfo *)pAVar7);
  method_02 = TypeInfo_ApplicationManagers_SnapshotManager;
  if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
  }
  ApplicationManagers_SnapshotManager__Init((MethodInfo *)method_02);
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
  method_03 = TypeInfo_ApplicationManagers_AssetBundleManager;
  if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
  }
  ApplicationManagers_AssetBundleManager__Init((MethodInfo *)method_03);
  ApplicationManagers_MusicManager__Init((MethodInfo *)method_03);
  method_04 = TypeInfo_ApplicationManagers_VoiceChatManager;
  if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager);
  }
  ApplicationManagers_VoiceChatManager__Init((MethodInfo *)method_04);
  Photon_CustomSerialization__Init((MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  ApplicationManagers_AccountManager__Init((MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_Changelog_AottgChangelogService->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_AottgChangelogService);
  }
  pMVar8 = (MethodInfo *)0x0;
  ApplicationManagers_Changelog_AottgChangelogService__Init((MethodInfo *)0x0);
  ApplicationManagers_Credits_AottgCreditsService__Init(pMVar8);
  ApplicationManagers_PublicProfiles_AottgPublicProfileService__Init(pMVar8);
  ApplicationManagers_HeadlessManager__Init(pMVar8);
  Assets_Scripts_ApplicationManagers_DebugLagSim__Init((MethodInfo *)0x0);
  pMVar8 = (MethodInfo *)0x0;
  Utility_CustomDebug__Init((MethodInfo *)0x0);
  if (TypeInfo_ApplicationManagers_ApplicationConfig->static_fields->DevelopmentMode == false) {
label_05e0886a:
    uVar1 = (TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor;
  }
  else {
    ApplicationManagers_DebugTesting__Init(pMVar8);
    if (Il2CppMethodInitialized_0754841d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationConfig);
      Il2CppMethodInitialized_0754841d = '\x01';
    }
    if ((TypeInfo_ApplicationManagers_ApplicationConfig->_2).cctor_finished_or_no_cctor != 0)
    goto label_05e0886a;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationConfig);
    uVar1 = (TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
  }
  Characters_BasicTitanSetup__Init((MethodInfo *)0x0);
  if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
  }
  pMVar8 = (MethodInfo *)0x0;
  Characters_CharacterData__Init((MethodInfo *)0x0);
  ApplicationManagers_MiscInfo__Init(pMVar8);
  ApplicationManagers_SceneLoader__Init(pMVar8);
  Events_EventManager__InvokeFinishInit((MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_ApplicationConfig->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationConfig);
  }
  if (TypeInfo_ApplicationManagers_ApplicationConfig->static_fields->DevelopmentMode != false) {
    if (Il2CppMethodInitialized_0754841e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationConfig);
      Il2CppMethodInitialized_0754841e = '\x01';
    }
    if ((TypeInfo_ApplicationManagers_ApplicationConfig->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationConfig);
      uVar1 = (TypeInfo_ApplicationManagers_DiscordManager->_2).cctor_finished_or_no_cctor;
      klass = (Il2CppClass *)TypeInfo_ApplicationManagers_DiscordManager;
      goto joined_r0x05e089aa;
    }
  }
  uVar1 = (TypeInfo_ApplicationManagers_DiscordManager->_2).cctor_finished_or_no_cctor;
  klass = (Il2CppClass *)TypeInfo_ApplicationManagers_DiscordManager;
joined_r0x05e089aa:
  TypeInfo_ApplicationManagers_DiscordManager = (ApplicationManagers_DiscordManager_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    ApplicationManagers_DiscordManager__Init((MethodInfo *)klass);
    return;
  }
  ApplicationManagers_DiscordManager__Init((MethodInfo *)klass);
  return;
}


// ApplicationManagers.ApplicationStart$$PrewarmTextMeshPro
// il2cpp: void ApplicationManagers_ApplicationStart__PrewarmTextMeshPro (const MethodInfo* method);
// 0x5e08d10

void ApplicationManagers_ApplicationStart__PrewarmTextMeshPro(MethodInfo *method)

{
  UnityEngine_Object_o *obj;
  
  if (Il2CppMethodInitialized_075483e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"TMP_Prewarm");
    Il2CppMethodInitialized_075483e4 = '\x01';
  }
  obj = (UnityEngine_Object_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)obj,"TMP_Prewarm",(MethodInfo *)0x0);
  if (obj == (UnityEngine_Object_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_GameObject__AddComponent_object_
            ((UnityEngine_GameObject_o *)obj,
             (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.ApplicationStart$$.ctor
// il2cpp: void ApplicationManagers_ApplicationStart___ctor (ApplicationManagers_ApplicationStart_o* __this, const MethodInfo* method);
// 0x5e0a240

void ApplicationManagers_ApplicationStart___ctor
               (ApplicationManagers_ApplicationStart_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.ApplicationStart$$.cctor
// il2cpp: void ApplicationManagers_ApplicationStart___cctor (const MethodInfo* method);
// 0x5e0a250

void ApplicationManagers_ApplicationStart___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_075483e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationStart);
    Il2CppMethodInitialized_075483e5 = '\x01';
  }
  TypeInfo_ApplicationManagers_ApplicationStart->static_fields->_firstLaunch = true;
  return;
}


