// Type: ApplicationManagers.SceneLoader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/SceneLoader.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/SceneLoader.cs
// --------------------------------

// ApplicationManagers.SceneLoader$$Init
// il2cpp: void ApplicationManagers_SceneLoader__Init (const MethodInfo* method);
// 0x44bff30

void ApplicationManagers_SceneLoader__Init(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  UnityEngine_Events_UnityAction_Scene__LoadSceneMode__o *value;
  MethodInfo *method_00;
  
  if (g_data_057aea8d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnSceneWasLoaded);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SceneLoader_CreateSingleton_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_Scene_LoadSceneMode);
    g_data_057aea8d = '\x01';
  }
  pIVar1 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_SceneLoader + 0xb8),MethodInfo_SceneLoader_CreateSingleton_SceneLoader);
  **(undefined8 **)(TypeInfo_SceneLoader + 0xb8) = pIVar1;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_SceneLoader + 0xb8),pIVar1);
  value = (UnityEngine_Events_UnityAction_Scene__LoadSceneMode__o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_Scene_LoadSceneMode);
  UnityEngine_Events_UnityAction_Scene__Int32Enum____ctor();
  if (*(int *)(TypeInfo_SceneManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo *)0x0;
  UnityEngine_SceneManagement_SceneManager__add_sceneLoaded(value,(MethodInfo *)0x0);
  ApplicationManagers_SceneLoader__LoadScene(1,method_00);
  return;
}


// ApplicationManagers.SceneLoader$$LoadScene
// il2cpp: void ApplicationManagers_SceneLoader__LoadScene (int32_t sceneName, const MethodInfo* method);
// 0x44c0030

void ApplicationManagers_SceneLoader__LoadScene(int32_t sceneName,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  MethodInfo *method_00;
  
  if (g_data_057aea8e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AssetBundleManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClothFactory);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FullscreenHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SkyboxCustomSkinLoader);
    g_data_057aea8e = '\x01';
  }
  **(undefined8 **)(TypeInfo_SkyboxCustomSkinLoader + 0xb8) = 0;
  il2cpp_runtime_helper_022b4080();
  UnityEngine_Time__set_timeScale(1.0,(MethodInfo *)0x0);
  Events_EventManager__InvokePreLoadScene(sceneName,(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) = sceneName;
  if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ClothFactory__DisposeAllObjects((MethodInfo *)0x0);
  ClothFactory__ClearClothCache((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aea80 != '\0') goto label_044c0144;
label_044c01ec:
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    g_data_057aea80 = '\x01';
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) != 0) goto label_044c0154;
label_044c021b:
    il2cpp_runtime_helper_02337ed0();
    __this = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_ResourceManager + 0xb8);
    if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044c0167;
label_044c0236:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (g_data_057aea80 == '\0') goto label_044c01ec;
label_044c0144:
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) goto label_044c021b;
label_044c0154:
    __this = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_ResourceManager + 0xb8);
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044c0236;
label_044c0167:
    System_Collections_Generic_Dictionary_object__object___Clear(__this,MethodInfo_Void_Clear);
    if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) != 0) {
      ApplicationManagers_AssetBundleManager__Clear((MethodInfo *)0x0);
      goto joined_r0x044c024a;
    }
  }
  il2cpp_runtime_helper_02337ed0();
  ApplicationManagers_AssetBundleManager__Clear((MethodInfo *)0x0);
joined_r0x044c024a:
  if (sceneName == 2) {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Photon_Pun_PhotonNetwork__LoadLevel(0,(MethodInfo *)0x0);
    iVar1 = *(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4);
    method_00 = TypeInfo_FullscreenHandler;
  }
  else {
    if (*(int *)(TypeInfo_SceneManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_SceneManagement_SceneManager__LoadScene(0,(MethodInfo *)0x0);
    iVar1 = *(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4);
    method_00 = TypeInfo_FullscreenHandler;
  }
  TypeInfo_FullscreenHandler = method_00;
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    ApplicationManagers_FullscreenHandler__UpdateFPS(method_00);
    return;
  }
  ApplicationManagers_FullscreenHandler__UpdateFPS(method_00);
  return;
}


// ApplicationManagers.SceneLoader$$CreateGameManager
// il2cpp: void ApplicationManagers_SceneLoader__CreateGameManager (const MethodInfo* method);
// 0x44c02a0

void ApplicationManagers_SceneLoader__CreateGameManager(MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *x;
  long lVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  undefined8 *puVar5;
  
  if (g_data_057aea8f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseGameManager_CreateObj_BaseGameManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorGameManager_CreateObj_CharacterEditorGame);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InGameManager_CreateObj_InGameManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MainMenuGameManager_CreateObj_MainMenuGameManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorGameManager_CreateObj_MapEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"Warning: game manager already exists.");
    g_data_057aea8f = '\x01';
  }
  x = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Debug__Log("Warning: game manager already exists.",(MethodInfo *)0x0);
  }
  switch(*(undefined4 *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8)) {
  case 1:
    puVar5 = &MethodInfo_MainMenuGameManager_CreateObj_MainMenuGameManager;
    iVar1 = *(int *)(TypeInfo_Util + 0xe4);
    break;
  case 2:
    puVar5 = &MethodInfo_InGameManager_CreateObj_InGameManager;
    iVar1 = *(int *)(TypeInfo_Util + 0xe4);
    goto joined_r0x044c0457;
  case 3:
    puVar5 = &MethodInfo_MapEditorGameManager_CreateObj_MapEditorGameManager;
    iVar1 = *(int *)(TypeInfo_Util + 0xe4);
joined_r0x044c0457:
    if (iVar1 != 0) goto label_044c03d6;
    goto label_044c03d1;
  case 4:
    puVar5 = &MethodInfo_CharacterEditorGameManager_CreateObj_CharacterEditorGame;
    iVar1 = *(int *)(TypeInfo_Util + 0xe4);
    break;
  case 5:
  case 6:
  case 7:
    puVar5 = &MethodInfo_BaseGameManager_CreateObj_BaseGameManager;
    iVar1 = *(int *)(TypeInfo_Util + 0xe4);
    break;
  default:
    return;
  }
  if (iVar1 == 0) {
label_044c03d1:
    il2cpp_runtime_helper_02337ed0();
  }
label_044c03d6:
  pIVar4 = Utility_Util__CreateObj_object_((MethodInfo_264FDC0 *)*puVar5);
  lVar2 = *(long *)(TypeInfo_SceneLoader + 0xb8);
  *(Il2CppObject **)(lVar2 + 0x10) = pIVar4;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pIVar4);
  return;
}


// ApplicationManagers.SceneLoader$$CreateCamera
// il2cpp: void ApplicationManagers_SceneLoader__CreateCamera (const MethodInfo* method);
// 0x44c0490

void ApplicationManagers_SceneLoader__CreateCamera(MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Camera_o *__this;
  bool_conflict bVar2;
  UnityEngine_GameObject_o *__this_00;
  Il2CppObject *pIVar3;
  undefined8 *puVar4;
  Il2CppClass *__this_01;
  long lVar5;
  MethodInfo *method_00;
  
  if (g_data_057aea90 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_StaticCamera_GetComponent_StaticCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorCamera_AddComponent_CharacterEditorCamera);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InGameCamera_AddComponent_InGameCamera);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorCamera_AddComponent_MapEditorCamera);
    il2cpp_runtime_helper_023445d0(&MethodInfo_StaticCamera_AddComponent_StaticCamera);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TestCamera_AddComponent_TestCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MinimapCamera_CreateObj_MinimapCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"Warning: Camera already exists.");
    il2cpp_runtime_helper_023445d0(&"Game/MainCamera");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aea90 = '\x01';
  }
  x = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Debug__Log("Warning: Camera already exists.",(MethodInfo *)0x0);
  }
  if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) == 0) {
    return;
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = "";
  __this_00 = (UnityEngine_GameObject_o *)
              ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        ((System_String_o *)"","Game/MainCamera",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  iVar1 = *(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8);
  if (iVar1 == 4) {
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_044c07c4;
    puVar4 = &MethodInfo_CharacterEditorCamera_AddComponent_CharacterEditorCamera;
  }
  else if (iVar1 == 3) {
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_044c07c4;
    puVar4 = &MethodInfo_MapEditorCamera_AddComponent_MapEditorCamera;
  }
  else {
    if (iVar1 == 2) {
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_044c07c4;
      pIVar3 = UnityEngine_GameObject__AddComponent_object_(__this_00,MethodInfo_InGameCamera_AddComponent_InGameCamera);
      lVar5 = *(long *)(TypeInfo_SceneLoader + 0xb8);
      *(Il2CppObject **)(lVar5 + 0x18) = pIVar3;
      il2cpp_runtime_helper_022b4080(lVar5 + 0x18,pIVar3);
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar3 = Utility_Util__CreateObj_object_(MethodInfo_MinimapCamera_CreateObj_MinimapCamera);
      lVar5 = *(long *)(TypeInfo_SceneLoader + 0xb8);
      *(Il2CppObject **)(lVar5 + 0x20) = pIVar3;
      lVar5 = lVar5 + 0x20;
      goto label_044c0715;
    }
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
label_044c07c4:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aea91 == '\0') {
        method_00 = (MethodInfo *)&TypeInfo_SceneLoader;
        il2cpp_runtime_helper_023445d0();
        g_data_057aea91 = '\x01';
      }
      ApplicationManagers_SceneLoader__CreateGameManager(method_00);
      ApplicationManagers_SceneLoader__CreateCamera(method_00);
      Events_EventManager__InvokeLoadScene(*(int32_t *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8),(MethodInfo *)0x0)
      ;
      return;
    }
    if (iVar1 != 8) {
      pIVar3 = UnityEngine_GameObject__AddComponent_object_(__this_00,MethodInfo_StaticCamera_AddComponent_StaticCamera);
      lVar5 = *(long *)(TypeInfo_SceneLoader + 0xb8);
      *(Il2CppObject **)(lVar5 + 0x18) = pIVar3;
      method_00 = (MethodInfo *)(lVar5 + 0x18);
      il2cpp_runtime_helper_022b4080();
      lVar5 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (lVar5 != 0) {
        __this = *(UnityEngine_Camera_o **)(lVar5 + 0x20);
        method_00 = (MethodInfo *)0x0;
        if (__this != (UnityEngine_Camera_o *)0x0) {
          UnityEngine_Camera__set_nearClipPlane(__this,0.3,(MethodInfo *)0x0);
          method_00 = *(MethodInfo **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
          if (method_00 != (MethodInfo *)0x0) {
            iVar1 = *(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8);
            pIVar3 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)method_00,MethodInfo_StaticCamera_GetComponent_StaticCamera);
            if (pIVar3 != (Il2CppObject *)0x0) {
              __this_01 = pIVar3[2].klass;
              if (__this_01 != (Il2CppClass *)0x0) {
                UnityEngine_Camera__set_clearFlags
                          ((UnityEngine_Camera_o *)__this_01,2 - (uint)(iVar1 == 5),(MethodInfo *)0x0);
                return;
              }
              il2cpp_runtime_helper_022b2c90();
              UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_01,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto label_044c07c4;
    }
    puVar4 = &MethodInfo_TestCamera_AddComponent_TestCamera;
  }
  pIVar3 = UnityEngine_GameObject__AddComponent_object_(__this_00,(MethodInfo_255A020 *)*puVar4);
  lVar5 = *(long *)(TypeInfo_SceneLoader + 0xb8);
  *(Il2CppObject **)(lVar5 + 0x18) = pIVar3;
  lVar5 = lVar5 + 0x18;
label_044c0715:
  il2cpp_runtime_helper_022b4080(lVar5,pIVar3);
  return;
}


// ApplicationManagers.SceneLoader$$OnSceneWasLoaded
// il2cpp: void ApplicationManagers_SceneLoader__OnSceneWasLoaded (ApplicationManagers_SceneLoader_o* __this, UnityEngine_SceneManagement_Scene_o scene, int32_t mode, const MethodInfo* method);
// 0x44c07d0

void ApplicationManagers_SceneLoader__OnSceneWasLoaded
               (ApplicationManagers_SceneLoader_o *__this,UnityEngine_SceneManagement_Scene_o scene,
               int32_t mode,MethodInfo *method)

{
  if (g_data_057aea91 == '\0') {
    __this = (ApplicationManagers_SceneLoader_o *)&TypeInfo_SceneLoader;
    il2cpp_runtime_helper_023445d0();
    g_data_057aea91 = '\x01';
  }
  ApplicationManagers_SceneLoader__CreateGameManager((MethodInfo *)__this);
  ApplicationManagers_SceneLoader__CreateCamera((MethodInfo *)__this);
  Events_EventManager__InvokeLoadScene(*(int32_t *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8),(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.SceneLoader$$.ctor
// il2cpp: void ApplicationManagers_SceneLoader___ctor (ApplicationManagers_SceneLoader_o* __this, const MethodInfo* method);
// 0x44c0820

void ApplicationManagers_SceneLoader___ctor(ApplicationManagers_SceneLoader_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


