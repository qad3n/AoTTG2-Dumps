// Type: ApplicationManagers.SceneLoader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/ApplicationManagers/SceneLoader.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/SceneLoader.cs
// --------------------------------

// ApplicationManagers.SceneLoader$$Init
// il2cpp: void ApplicationManagers_SceneLoader__Init (const MethodInfo* method);
// 0x5e09e90

void ApplicationManagers_SceneLoader__Init(MethodInfo *method)

{
  ApplicationManagers_SceneLoader_o *pAVar1;
  UnityEngine_Events_UnityAction_T0__T1__o *__this;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754847b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_ApplicationManagers_SceneLoader_OnSceneWasLoaded);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SceneManagement_SceneManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_Scene_LoadSceneMode);
    Il2CppMethodInitialized_0754847b = '\x01';
  }
  pAVar1 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)TypeInfo_ApplicationManagers_SceneLoader->static_fields->_instance,
                      (MethodInfo_3680650 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_SceneLoader);
  TypeInfo_ApplicationManagers_SceneLoader->static_fields->_instance = pAVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_SceneLoader->static_fields->_instance);
  pAVar1 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->_instance;
  __this = (UnityEngine_Events_UnityAction_T0__T1__o *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_Scene_LoadSceneMode);
  UnityEngine_Events_UnityAction_Scene__Int32Enum____ctor
            (__this,(Il2CppObject *)pAVar1,
             (intptr_t)MethodInfo_ApplicationManagers_SceneLoader_OnSceneWasLoaded,(MethodInfo_4311E90 *)0x0);
  if ((TypeInfo_UnityEngine_SceneManagement_SceneManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_SceneManagement_SceneManager);
  }
  method_00 = (MethodInfo *)0x0;
  UnityEngine_SceneManagement_SceneManager__add_sceneLoaded
            ((UnityEngine_Events_UnityAction_Scene__LoadSceneMode__o *)__this,(MethodInfo *)0x0);
  ApplicationManagers_SceneLoader__LoadScene(1,method_00);
  return;
}


// ApplicationManagers.SceneLoader$$LoadScene
// il2cpp: void ApplicationManagers_SceneLoader__LoadScene (int32_t sceneName, const MethodInfo* method);
// 0x5e1d070
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e1d177: cmp byte ptr [rip + 0x172b2ec], 0
// asm:   0x5e1d17e: je 0x5e1d22a
// asm:   0x5e1d213: jmp 0x5e1d2cb

void ApplicationManagers_SceneLoader__LoadScene(int32_t sceneName,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  ApplicationManagers_AssetBundleManager_c *method_00;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_0754847c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AssetBundleManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ClothFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_FullscreenHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SceneManagement_SceneManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_SkyboxCustomSkinLoader);
    Il2CppMethodInitialized_0754847c = '\x01';
  }
  TypeInfo_CustomSkins_SkyboxCustomSkinLoader->static_fields->SkyboxMaterial = (UnityEngine_Material_o *)0x0;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomSkins_SkyboxCustomSkinLoader->static_fields->SkyboxMaterial);
  UnityEngine_Time__set_timeScale(1.0,(MethodInfo *)0x0);
  Events_EventManager__InvokePreLoadScene(sceneName,(MethodInfo *)0x0);
  TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName = sceneName;
  if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
  }
  ClothFactory__DisposeAllObjects((MethodInfo *)0x0);
  ClothFactory__ClearClothCache((MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  if (Il2CppMethodInitialized_0754846a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Object_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    Il2CppMethodInitialized_0754846a = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_ApplicationManagers_ResourceManager->static_fields->_cache;
  }
  else {
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              ((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager)->static_fields;
  }
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___Clear
            (__this,(MethodInfo_4AAD690 *)MethodInfo_System_Collections_Generic_Dictionary_string_Object_Clear
            );
  if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
    method_00 = TypeInfo_ApplicationManagers_AssetBundleManager;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
    ApplicationManagers_AssetBundleManager__Clear((MethodInfo *)method_00);
  }
  else {
    ApplicationManagers_AssetBundleManager__Clear
              ((MethodInfo *)TypeInfo_ApplicationManagers_AssetBundleManager);
  }
  if (sceneName == 2) {
    if ((((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    Photon_Pun_PhotonNetwork__LoadLevel(0,(MethodInfo *)0x0);
    uVar1 = (TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler;
  }
  else {
    if ((((Il2CppClass *)TypeInfo_UnityEngine_SceneManagement_SceneManager)->_2).cctor_finished_or_no_cctor ==
        0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_SceneManagement_SceneManager);
    }
    UnityEngine_SceneManagement_SceneManager__LoadScene(0,(MethodInfo *)0x0);
    uVar1 = (TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler;
  }
  TypeInfo_ApplicationManagers_FullscreenHandler = (ApplicationManagers_FullscreenHandler_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    ApplicationManagers_FullscreenHandler__UpdateFPS((MethodInfo *)klass);
    return;
  }
  ApplicationManagers_FullscreenHandler__UpdateFPS((MethodInfo *)klass);
  return;
}


// ApplicationManagers.SceneLoader$$CreateGameManager
// il2cpp: void ApplicationManagers_SceneLoader__CreateGameManager (const MethodInfo* method);
// 0x5e1d2e0

void ApplicationManagers_SceneLoader__CreateGameManager(MethodInfo *method)

{
  ApplicationManagers_SceneLoader_StaticFields *pAVar1;
  bool bVar2;
  MethodInfo **ppMVar3;
  GameManagers_BaseGameManager_o *pGVar4;
  
  if (Il2CppMethodInitialized_0754847d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_CreateObj_BaseGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_CreateObj_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_CreateObj_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_CreateObj_MainMenuGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_CreateObj_MapEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"Warning: game manager already exists.");
    Il2CppMethodInitialized_0754847d = '\x01';
  }
  pGVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
    }
    UnityEngine_Debug__Log((Il2CppObject *)"Warning: game manager already exists.",(MethodInfo *)0x0);
  }
  switch(TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName) {
  case 1:
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    ppMVar3 = &MethodInfo_Utility_Util_CreateObj_MainMenuGameManager;
    break;
  case 2:
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    ppMVar3 = &MethodInfo_Utility_Util_CreateObj_InGameManager;
    break;
  case 3:
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    ppMVar3 = &MethodInfo_Utility_Util_CreateObj_MapEditorGameManager;
    break;
  case 4:
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    ppMVar3 = &MethodInfo_Utility_Util_CreateObj_CharacterEditorGameManager;
    break;
  case 5:
  case 6:
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    ppMVar3 = &MethodInfo_Utility_Util_CreateObj_BaseGameManager;
    break;
  default:
    return;
  }
  pGVar4 = (GameManagers_BaseGameManager_o *)Utility_Util__CreateObj_object_((MethodInfo_377BED0 *)*ppMVar3);
  pAVar1 = TypeInfo_ApplicationManagers_SceneLoader->static_fields;
  pAVar1->CurrentGameManager = pGVar4;
  Il2CppCodeGenWriteBarrier(&pAVar1->CurrentGameManager);
  return;
}


// ApplicationManagers.SceneLoader$$CreateCamera
// il2cpp: void ApplicationManagers_SceneLoader__CreateCamera (const MethodInfo* method);
// 0x5e1d4d0

void ApplicationManagers_SceneLoader__CreateCamera(MethodInfo *method)

{
  ApplicationManagers_SceneLoader_StaticFields *pAVar1;
  UnityEngine_Camera_o *__this;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  Cameras_InGameCamera_o *pCVar3;
  Cameras_MinimapCamera_o *pCVar4;
  Cameras_StaticCamera_o *pCVar5;
  Cameras_BaseCamera_o *pCVar6;
  MethodInfo **ppMVar7;
  Cameras_MinimapCamera_o **targetAddress;
  
  if (Il2CppMethodInitialized_0754847e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_StaticCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_CharacterEditorCamera);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_MapEditorCamera);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_StaticCamera);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_TestCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_CreateObj_MinimapCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"Warning: Camera already exists.");
    il2cpp_codegen_initialize_runtime_metadata(&"Game/MainCamera");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_0754847e = '\x01';
  }
  pCVar6 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
    }
    UnityEngine_Debug__Log((Il2CppObject *)"Warning: Camera already exists.",(MethodInfo *)0x0);
  }
  if (TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName == 0) {
    return;
  }
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this_00 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        ("","Game/MainCamera",false,false,
                         (MethodInfo_3665790 *)
                         MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
  switch(TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName) {
  case 2:
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_05e1d836;
    pCVar3 = UnityEngine_GameObject__AddComponent_object_
                       (__this_00,
                        (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_InGameCamera);
    pAVar1 = TypeInfo_ApplicationManagers_SceneLoader->static_fields;
    pAVar1->CurrentCamera = (Cameras_BaseCamera_o *)pCVar3;
    Il2CppCodeGenWriteBarrier(&pAVar1->CurrentCamera);
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    pCVar4 = Utility_Util__CreateObj_object_
                       ((MethodInfo_377BED0 *)MethodInfo_Utility_Util_CreateObj_MinimapCamera);
    pAVar1 = TypeInfo_ApplicationManagers_SceneLoader->static_fields;
    pAVar1->MinimapCamera = pCVar4;
    targetAddress = &pAVar1->MinimapCamera;
    goto label_05e1d7fb;
  case 3:
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_05e1d836;
    ppMVar7 = &MethodInfo_UnityEngine_GameObject_AddComponent_MapEditorCamera;
    break;
  case 4:
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_05e1d836;
    ppMVar7 = &MethodInfo_UnityEngine_GameObject_AddComponent_CharacterEditorCamera;
    break;
  default:
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      pCVar5 = UnityEngine_GameObject__AddComponent_object_
                         (__this_00,
                          (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_StaticCamera);
      pAVar1 = TypeInfo_ApplicationManagers_SceneLoader->static_fields;
      pAVar1->CurrentCamera = (Cameras_BaseCamera_o *)pCVar5;
      Il2CppCodeGenWriteBarrier(&pAVar1->CurrentCamera);
      pCVar6 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
      if ((pCVar6 != (Cameras_BaseCamera_o *)0x0) &&
         (__this = (pCVar6->fields).Camera, __this != (UnityEngine_Camera_o *)0x0)) {
        UnityEngine_Camera__set_nearClipPlane(__this,0.3,(MethodInfo *)0x0);
        pCVar6 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
        if (TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName == 5) {
          if ((pCVar6 != (Cameras_BaseCamera_o *)0x0) &&
             (pCVar5 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)pCVar6,
                                  (MethodInfo_34B0830 *)
                                  MethodInfo_UnityEngine_Component_GetComponent_StaticCamera),
             pCVar5 != (Cameras_StaticCamera_o *)0x0)) {
            bVar2 = true;
label_05e1d828:
            Cameras_StaticCamera__SetSkybox(pCVar5,bVar2,(MethodInfo *)0x0);
            return;
          }
        }
        else if ((pCVar6 != (Cameras_BaseCamera_o *)0x0) &&
                (pCVar5 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pCVar6,
                                     (MethodInfo_34B0830 *)
                                     MethodInfo_UnityEngine_Component_GetComponent_StaticCamera),
                pCVar5 != (Cameras_StaticCamera_o *)0x0)) {
          bVar2 = false;
          goto label_05e1d828;
        }
      }
    }
label_05e1d836:
    ThrowNullReferenceException();
  case 7:
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_05e1d836;
    ppMVar7 = &MethodInfo_UnityEngine_GameObject_AddComponent_TestCamera;
  }
  pCVar6 = (Cameras_BaseCamera_o *)
           UnityEngine_GameObject__AddComponent_object_(__this_00,(MethodInfo_353B6A0 *)*ppMVar7);
  pAVar1 = TypeInfo_ApplicationManagers_SceneLoader->static_fields;
  pAVar1->CurrentCamera = pCVar6;
  targetAddress = (Cameras_MinimapCamera_o **)&pAVar1->CurrentCamera;
label_05e1d7fb:
  Il2CppCodeGenWriteBarrier(targetAddress);
  return;
}


// ApplicationManagers.SceneLoader$$OnSceneWasLoaded
// il2cpp: void ApplicationManagers_SceneLoader__OnSceneWasLoaded (ApplicationManagers_SceneLoader_o* __this, UnityEngine_SceneManagement_Scene_o scene, int32_t mode, const MethodInfo* method);
// 0x5e1d840

void ApplicationManagers_SceneLoader__OnSceneWasLoaded
               (ApplicationManagers_SceneLoader_o *__this,UnityEngine_SceneManagement_Scene_o scene,
               int32_t mode,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754847f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Outline);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_0754847f = '\x01';
  }
  if ((TypeInfo_Outline->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Outline);
  }
  method_00 = (MethodInfo *)0x0;
  Outline__ResetQueueBlocks((MethodInfo *)0x0);
  ApplicationManagers_SceneLoader__CreateGameManager(method_00);
  ApplicationManagers_SceneLoader__CreateCamera(method_00);
  Events_EventManager__InvokeLoadScene
            (TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.SceneLoader$$.ctor
// il2cpp: void ApplicationManagers_SceneLoader___ctor (ApplicationManagers_SceneLoader_o* __this, const MethodInfo* method);
// 0x5e1d8b0

void ApplicationManagers_SceneLoader___ctor(ApplicationManagers_SceneLoader_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


