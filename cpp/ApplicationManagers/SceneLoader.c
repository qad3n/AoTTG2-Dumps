// Type: ApplicationManagers.SceneLoader
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/SceneLoader.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/SceneLoader.cs
// --------------------------------

// ApplicationManagers.SceneLoader$$Init
// il2cpp: void ApplicationManagers_SceneLoader__Init (const MethodInfo* method);
// 0x182356e80

void ApplicationManagers_SceneLoader__Init(MethodInfo *method)

{
  ApplicationManagers_SceneLoader_o *pAVar1;
  UnityEngine_Events_UnityAction_T0__T1__o *__this;
  
  if (Il2CppMethodInitialized_1843479c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_ApplicationManagers_SceneLoader_OnSceneWasLoaded);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SceneManagement_SceneManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_Scene_LoadSceneMode);
    Il2CppMethodInitialized_1843479c2 = '\x01';
  }
  pAVar1 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)TypeInfo_ApplicationManagers_SceneLoader->static_fields->_instance,
                      (MethodInfo_798ED0 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_SceneLoader);
  TypeInfo_ApplicationManagers_SceneLoader->static_fields->_instance = pAVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_SceneLoader->static_fields->_instance,pAVar1);
  pAVar1 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->_instance;
  __this = (UnityEngine_Events_UnityAction_T0__T1__o *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_Scene_LoadSceneMode);
  UnityEngine_Events_UnityAction_Scene__Int32Enum____ctor
            (__this,(Il2CppObject *)pAVar1,
             (intptr_t)MethodInfo_ApplicationManagers_SceneLoader_OnSceneWasLoaded,(MethodInfo_EB70D0 *)0x0);
  if ((TypeInfo_UnityEngine_SceneManagement_SceneManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_SceneManagement_SceneManager);
  }
  UnityEngine_SceneManagement_SceneManager__add_sceneLoaded
            ((UnityEngine_Events_UnityAction_Scene__LoadSceneMode__o *)__this,(MethodInfo *)0x0);
  ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.SceneLoader$$LoadScene
// il2cpp: void ApplicationManagers_SceneLoader__LoadScene (int32_t sceneName, const MethodInfo* method);
// 0x182356f90

void ApplicationManagers_SceneLoader__LoadScene(int32_t sceneName,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Object__o *__this;
  
  if (Il2CppMethodInitialized_1843479c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AssetBundleManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ClothFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_FullscreenHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SceneManagement_SceneManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_SkyboxCustomSkinLoader);
    Il2CppMethodInitialized_1843479c3 = '\x01';
  }
  TypeInfo_CustomSkins_SkyboxCustomSkinLoader->static_fields->SkyboxMaterial = (UnityEngine_Material_o *)0x0;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomSkins_SkyboxCustomSkinLoader->static_fields->SkyboxMaterial,(void *)0x0);
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
  if (Il2CppMethodInitialized_1843479b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Object_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    Il2CppMethodInitialized_1843479b5 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this = TypeInfo_ApplicationManagers_ResourceManager->static_fields->_cache;
  if (__this != (System_Collections_Generic_Dictionary_string__Object__o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
               (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Object_Clear);
    if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
    }
    ApplicationManagers_AssetBundleManager__Clear((MethodInfo *)0x0);
    if (sceneName == 2) {
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      Photon_Pun_PhotonNetwork__LoadLevel(0,(MethodInfo *)0x0);
    }
    else {
      if ((TypeInfo_UnityEngine_SceneManagement_SceneManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_SceneManagement_SceneManager);
      }
      UnityEngine_SceneManagement_SceneManager__LoadScene(0,(MethodInfo *)0x0);
    }
    if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
    }
    ApplicationManagers_FullscreenHandler__UpdateFPS((MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.SceneLoader$$CreateGameManager
// il2cpp: void ApplicationManagers_SceneLoader__CreateGameManager (const MethodInfo* method);
// 0x182356c80
// asm: 9 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182356dbe: mov rcx, qword ptr [rip + 0x1d6f78b]  ; MethodInfo_Utility_Util_CreateObj_BaseGameManager
// asm:   0x182356dc5: jmp 0x182356e3d
// asm:   0x182356ddc: mov rcx, qword ptr [rip + 0x1d6faed]  ; MethodInfo_Utility_Util_CreateObj_MapEditorGameManager
// asm:   0x182356de3: jmp 0x182356e3d
// asm:   0x182356dfa: mov rcx, qword ptr [rip + 0x1d6f82f]  ; MethodInfo_Utility_Util_CreateObj_CharacterEditorGameManager
// asm:   0x182356e01: jmp 0x182356e3d
// asm:   0x182356e18: mov rcx, qword ptr [rip + 0x1d6f8f1]  ; MethodInfo_Utility_Util_CreateObj_InGameManager
// asm:   0x182356e1f: jmp 0x182356e3d
// asm:   0x182356e36: mov rcx, qword ptr [rip + 0x1d6f9b3]  ; MethodInfo_Utility_Util_CreateObj_MainMenuGameManager

void ApplicationManagers_SceneLoader__CreateGameManager(MethodInfo *method)

{
  ApplicationManagers_SceneLoader_StaticFields *pAVar1;
  bool bVar2;
  GameManagers_BaseGameManager_o *pGVar3;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_1843479c4 == '\0') {
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
    Il2CppMethodInitialized_1843479c4 = '\x01';
  }
  pGVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
    }
    UnityEngine_Debug__Log((Il2CppObject *)"Warning: game manager already exists.",(MethodInfo *)0x0);
  }
  pAVar1 = TypeInfo_ApplicationManagers_SceneLoader->static_fields;
  if (pAVar1->SceneName == 1) {
    method_00 = MethodInfo_Utility_Util_CreateObj_MainMenuGameManager;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      method_00 = MethodInfo_Utility_Util_CreateObj_MainMenuGameManager;
    }
  }
  else if (pAVar1->SceneName == 2) {
    method_00 = MethodInfo_Utility_Util_CreateObj_InGameManager;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      method_00 = MethodInfo_Utility_Util_CreateObj_InGameManager;
    }
  }
  else if (pAVar1->SceneName == 4) {
    method_00 = MethodInfo_Utility_Util_CreateObj_CharacterEditorGameManager;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      method_00 = MethodInfo_Utility_Util_CreateObj_CharacterEditorGameManager;
    }
  }
  else if (pAVar1->SceneName == 3) {
    method_00 = MethodInfo_Utility_Util_CreateObj_MapEditorGameManager;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      method_00 = MethodInfo_Utility_Util_CreateObj_MapEditorGameManager;
    }
  }
  else {
    if (((pAVar1->SceneName != 5) && (pAVar1->SceneName != 6)) && (pAVar1->SceneName != 7)) {
      return;
    }
    method_00 = MethodInfo_Utility_Util_CreateObj_BaseGameManager;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      method_00 = MethodInfo_Utility_Util_CreateObj_BaseGameManager;
    }
  }
  pGVar3 = (GameManagers_BaseGameManager_o *)Utility_Util__CreateObj_object_((MethodInfo_869350 *)method_00);
  TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager = pGVar3;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager,pGVar3);
  return;
}


// ApplicationManagers.SceneLoader$$CreateCamera
// il2cpp: void ApplicationManagers_SceneLoader__CreateCamera (const MethodInfo* method);
// 0x1823568c0
// asm: 9 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182356b72: mov rdx, qword ptr [rip + 0x1d5e3e7]  ; MethodInfo_UnityEngine_GameObject_AddComponent_TestCamera
// asm:   0x182356b79: jmp 0x182356ba0
// asm:   0x182356b7b: test r8, r8
// asm:   0x182356b7e: je 0x182356c6c
// asm:   0x182356b84: mov rdx, qword ptr [rip + 0x1d54825]  ; MethodInfo_UnityEngine_GameObject_AddComponent_CharacterEditorCamera
// asm:   0x182356b8b: jmp 0x182356b9d
// asm:   0x182356b8d: test r8, r8
// asm:   0x182356b96: mov rdx, qword ptr [rip + 0x1d5a76b]  ; MethodInfo_UnityEngine_GameObject_AddComponent_MapEditorCamera
// asm:   0x182356b9d: mov rcx, r8

void ApplicationManagers_SceneLoader__CreateCamera(MethodInfo *method)

{
  ApplicationManagers_SceneLoader_StaticFields *pAVar1;
  UnityEngine_Camera_o *__this;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  Cameras_StaticCamera_o *pCVar3;
  Cameras_BaseCamera_o *pCVar4;
  Cameras_InGameCamera_o *value;
  Cameras_MinimapCamera_o *value_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_1843479c5 == '\0') {
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
    Il2CppMethodInitialized_1843479c5 = '\x01';
  }
  pCVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
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
                        ("","Game/MainCamera",false,
                         (MethodInfo_795F00 *)
                         MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
  pAVar1 = TypeInfo_ApplicationManagers_SceneLoader->static_fields;
  if (pAVar1->SceneName == 2) {
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      value = UnityEngine_GameObject__AddComponent_object_
                        (__this_00,
                         (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_InGameCamera);
      TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera = (Cameras_BaseCamera_o *)value;
      Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera,value)
      ;
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      value_00 = Utility_Util__CreateObj_object_
                           ((MethodInfo_869350 *)MethodInfo_Utility_Util_CreateObj_MinimapCamera);
      TypeInfo_ApplicationManagers_SceneLoader->static_fields->MinimapCamera = value_00;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_ApplicationManagers_SceneLoader->static_fields->MinimapCamera,value_00);
      return;
    }
  }
  else {
    method_00 = MethodInfo_UnityEngine_GameObject_AddComponent_MapEditorCamera;
    if ((pAVar1->SceneName == 3) ||
       (method_00 = MethodInfo_UnityEngine_GameObject_AddComponent_CharacterEditorCamera,
       pAVar1->SceneName == 4)) {
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
label_182356ba0:
        pCVar4 = (Cameras_BaseCamera_o *)
                 UnityEngine_GameObject__AddComponent_object_(__this_00,(MethodInfo_6F4D60 *)method_00);
        TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera = pCVar4;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera,pCVar4);
        return;
      }
    }
    else if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      method_00 = MethodInfo_UnityEngine_GameObject_AddComponent_TestCamera;
      if (pAVar1->SceneName == 8) goto label_182356ba0;
      pCVar3 = UnityEngine_GameObject__AddComponent_object_
                         (__this_00,
                          (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_StaticCamera);
      TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera = (Cameras_BaseCamera_o *)pCVar3;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera,pCVar3);
      pCVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
      if ((pCVar4 != (Cameras_BaseCamera_o *)0x0) &&
         (__this = (pCVar4->fields).Camera, __this != (UnityEngine_Camera_o *)0x0)) {
        UnityEngine_Camera__set_nearClipPlane(__this,0.3,(MethodInfo *)0x0);
        pCVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
        if (TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName == 5) {
          if ((pCVar4 != (Cameras_BaseCamera_o *)0x0) &&
             (pCVar3 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)pCVar4,
                                  (MethodInfo_6651A0 *)
                                  MethodInfo_UnityEngine_Component_GetComponent_StaticCamera),
             pCVar3 != (Cameras_StaticCamera_o *)0x0)) {
            Cameras_StaticCamera__SetSkybox(pCVar3,true,(MethodInfo *)0x0);
            return;
          }
        }
        else if ((pCVar4 != (Cameras_BaseCamera_o *)0x0) &&
                (pCVar3 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pCVar4,
                                     (MethodInfo_6651A0 *)
                                     MethodInfo_UnityEngine_Component_GetComponent_StaticCamera),
                pCVar3 != (Cameras_StaticCamera_o *)0x0)) {
          Cameras_StaticCamera__SetSkybox(pCVar3,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.SceneLoader$$OnSceneWasLoaded
// il2cpp: void ApplicationManagers_SceneLoader__OnSceneWasLoaded (ApplicationManagers_SceneLoader_o* __this, UnityEngine_SceneManagement_Scene_o scene, int32_t mode, const MethodInfo* method);
// 0x182357180

void ApplicationManagers_SceneLoader__OnSceneWasLoaded
               (ApplicationManagers_SceneLoader_o *__this,UnityEngine_SceneManagement_Scene_o scene,
               int32_t mode,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843479c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Outline);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_1843479c6 = '\x01';
  }
  if ((TypeInfo_Outline->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Outline);
  }
  Outline__ResetQueueBlocks((MethodInfo *)0x0);
  ApplicationManagers_SceneLoader__CreateGameManager((MethodInfo *)0x0);
  ApplicationManagers_SceneLoader__CreateCamera((MethodInfo *)0x0);
  Events_EventManager__InvokeLoadScene
            (TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.SceneLoader$$.ctor
// il2cpp: void ApplicationManagers_SceneLoader___ctor (ApplicationManagers_SceneLoader_o* __this, const MethodInfo* method);
// 0x180528540

void
ApplicationManagers_SceneLoader___ctor(ApplicationManagers_SceneLoader_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


