// Type: ApplicationManagers.SceneLoader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers/SceneLoader.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/ApplicationManagers/SceneLoader.cs  [CHANGED since prior version]
// --------------------------------

// ApplicationManagers.SceneLoader$$Init
// il2cpp: void ApplicationManagers_SceneLoader__Init (const MethodInfo* method);
// 0x41a6f70

void ApplicationManagers_SceneLoader__Init(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  UnityEngine_Events_UnityAction_Scene__LoadSceneMode__o *value;
  MethodInfo *method_00;
  
  if (DAT_05704cbf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_OnSceneWasLoaded);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SceneManager);
    il2cpp_init_method_metadata(&MethodInfo_SceneLoader_CreateSingleton_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction_Scene__LoadSceneMode);
    DAT_05704cbf = '\x01';
  }
  pIVar1 = Utility_SingletonFactory__CreateSingleton<object>
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_SceneLoader + 0xb8),MethodInfo_SceneLoader_CreateSingleton_SceneLoader);
  **(undefined8 **)(TypeInfo_SceneLoader + 0xb8) = pIVar1;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_SceneLoader + 0xb8),pIVar1);
  value = (UnityEngine_Events_UnityAction_Scene__LoadSceneMode__o *)il2cpp_runtime_glue(TypeInfo_UnityAction_Scene__LoadSceneMode)
  ;
  UnityEngine_Events_UnityAction<Scene__Int32Enum>___ctor();
  if (*(int *)(TypeInfo_SceneManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  UnityEngine_SceneManagement_SceneManager__add_sceneLoaded(value,(MethodInfo *)0x0);
  ApplicationManagers_SceneLoader__LoadScene(1,method_00);
  return;
}


// ApplicationManagers.SceneLoader$$LoadScene
// il2cpp: void ApplicationManagers_SceneLoader__LoadScene (int32_t sceneName, const MethodInfo* method);
// 0x41a7070

void ApplicationManagers_SceneLoader__LoadScene(int32_t sceneName,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  MethodInfo *method_00;
  
  if (DAT_05704cc0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AssetBundleManager);
    il2cpp_init_method_metadata(&TypeInfo_ClothFactory);
    il2cpp_init_method_metadata(&TypeInfo_FullscreenHandler);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SceneManager);
    il2cpp_init_method_metadata(&TypeInfo_SkyboxCustomSkinLoader);
    DAT_05704cc0 = '\x01';
  }
  **(undefined8 **)(TypeInfo_SkyboxCustomSkinLoader + 0xb8) = 0;
  il2cpp_runtime_glue();
  UnityEngine_Time__set_timeScale(1.0,(MethodInfo *)0x0);
  Events_EventManager__InvokePreLoadScene(sceneName,(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) = sceneName;
  if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ClothFactory__DisposeAllObjects((MethodInfo *)0x0);
  ClothFactory__ClearClothCache((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704cb2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    DAT_05704cb2 = '\x01';
    iVar1 = *(int *)(TypeInfo_ResourceManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ResourceManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             **(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
  }
  else {
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             **(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
  }
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_Dictionary<object__object>__Clear(__this,MethodInfo_Void_Clear);
  if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
    il2cpp_init_class();
    ApplicationManagers_AssetBundleManager__Clear((MethodInfo *)0x0);
  }
  else {
    ApplicationManagers_AssetBundleManager__Clear((MethodInfo *)0x0);
  }
  if (sceneName == 2) {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Photon_Pun_PhotonNetwork__LoadLevel(0,(MethodInfo *)0x0);
    iVar1 = *(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4);
    method_00 = TypeInfo_FullscreenHandler;
  }
  else {
    if (*(int *)(TypeInfo_SceneManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_SceneManagement_SceneManager__LoadScene(0,(MethodInfo *)0x0);
    iVar1 = *(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4);
    method_00 = TypeInfo_FullscreenHandler;
  }
  TypeInfo_FullscreenHandler = method_00;
  if (iVar1 != 0) {
    ApplicationManagers_FullscreenHandler__UpdateFPS(method_00);
    return;
  }
  il2cpp_init_class();
  ApplicationManagers_FullscreenHandler__UpdateFPS(method_00);
  return;
}


// ApplicationManagers.SceneLoader$$CreateGameManager
// il2cpp: void ApplicationManagers_SceneLoader__CreateGameManager (const MethodInfo* method);
// 0x41a72e0

void ApplicationManagers_SceneLoader__CreateGameManager(MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *x;
  long lVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  undefined8 *puVar5;
  
  if (DAT_05704cc1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&MethodInfo_BaseGameManager_CreateObj_BaseGameManager);
    il2cpp_init_method_metadata(&MethodInfo_CharacterEditorGameManager_CreateObj_CharacterEd);
    il2cpp_init_method_metadata(&MethodInfo_InGameManager_CreateObj_InGameManager);
    il2cpp_init_method_metadata(&MethodInfo_MainMenuGameManager_CreateObj_MainMenuGameManage);
    il2cpp_init_method_metadata(&MethodInfo_MapEditorGameManager_CreateObj_MapEditorGameMana);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"Warning: game manager already exists.");
    DAT_05704cc1 = '\x01';
  }
  x = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Debug__Log("Warning: game manager already exists.",(MethodInfo *)0x0);
  }
  switch(*(undefined4 *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8)) {
  case 1:
    puVar5 = &MethodInfo_MainMenuGameManager_CreateObj_MainMenuGameManage;
    iVar1 = *(int *)(TypeInfo_Util + 0xe4);
    break;
  case 2:
    puVar5 = &MethodInfo_InGameManager_CreateObj_InGameManager;
    iVar1 = *(int *)(TypeInfo_Util + 0xe4);
    goto joined_r0x041a7497;
  case 3:
    puVar5 = &MethodInfo_MapEditorGameManager_CreateObj_MapEditorGameMana;
    iVar1 = *(int *)(TypeInfo_Util + 0xe4);
joined_r0x041a7497:
    if (iVar1 != 0) goto LAB_041a7416;
    goto LAB_041a7411;
  case 4:
    puVar5 = &MethodInfo_CharacterEditorGameManager_CreateObj_CharacterEd;
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
LAB_041a7411:
    il2cpp_init_class();
  }
LAB_041a7416:
  pIVar4 = Utility_Util__CreateObj<object>((MethodInfo_260BC70 *)*puVar5);
  lVar2 = *(long *)(TypeInfo_SceneLoader + 0xb8);
  *(Il2CppObject **)(lVar2 + 0x10) = pIVar4;
  il2cpp_runtime_glue(lVar2 + 0x10,pIVar4);
  return;
}


// ApplicationManagers.SceneLoader$$CreateCamera
// il2cpp: void ApplicationManagers_SceneLoader__CreateCamera (const MethodInfo* method);
// 0x41a74d0

void ApplicationManagers_SceneLoader__CreateCamera(MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Camera_o *__this;
  UnityEngine_Component_o *__this_00;
  bool_conflict bVar2;
  UnityEngine_GameObject_o *__this_01;
  Il2CppObject *pIVar3;
  Cameras_StaticCamera_o *__this_02;
  undefined8 *puVar4;
  long lVar5;
  
  if (DAT_05704cc2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_StaticCamera_GetComponent_StaticCamera);
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&MethodInfo_CharacterEditorCamera_AddComponent_CharacterEdit);
    il2cpp_init_method_metadata(&MethodInfo_InGameCamera_AddComponent_InGameCamera);
    il2cpp_init_method_metadata(&MethodInfo_MapEditorCamera_AddComponent_MapEditorCamera);
    il2cpp_init_method_metadata(&MethodInfo_StaticCamera_AddComponent_StaticCamera);
    il2cpp_init_method_metadata(&MethodInfo_TestCamera_AddComponent_TestCamera);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&MethodInfo_MinimapCamera_CreateObj_MinimapCamera);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"Warning: Camera already exists.");
    il2cpp_init_method_metadata(&"Game/MainCamera");
    il2cpp_init_method_metadata(&"");
    DAT_05704cc2 = '\x01';
  }
  x = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Debug__Log("Warning: Camera already exists.",(MethodInfo *)0x0);
  }
  if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) == 0) {
    return;
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_01 = (UnityEngine_GameObject_o *)
              ApplicationManagers_ResourceManager__InstantiateAsset<object>
                        ("","Game/MainCamera",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  iVar1 = *(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8);
  if (iVar1 == 4) {
    if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto LAB_041a7804;
    puVar4 = &MethodInfo_CharacterEditorCamera_AddComponent_CharacterEdit;
  }
  else if (iVar1 == 3) {
    if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto LAB_041a7804;
    puVar4 = &MethodInfo_MapEditorCamera_AddComponent_MapEditorCamera;
  }
  else {
    if (iVar1 == 2) {
      if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto LAB_041a7804;
      pIVar3 = UnityEngine_GameObject__AddComponent<object>(__this_01,MethodInfo_InGameCamera_AddComponent_InGameCamera);
      lVar5 = *(long *)(TypeInfo_SceneLoader + 0xb8);
      *(Il2CppObject **)(lVar5 + 0x18) = pIVar3;
      il2cpp_runtime_glue(lVar5 + 0x18,pIVar3);
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pIVar3 = Utility_Util__CreateObj<object>(MethodInfo_MinimapCamera_CreateObj_MinimapCamera);
      lVar5 = *(long *)(TypeInfo_SceneLoader + 0xb8);
      *(Il2CppObject **)(lVar5 + 0x20) = pIVar3;
      lVar5 = lVar5 + 0x20;
      goto LAB_041a7755;
    }
    if (__this_01 == (UnityEngine_GameObject_o *)0x0) {
LAB_041a7804:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (iVar1 != 8) {
      pIVar3 = UnityEngine_GameObject__AddComponent<object>(__this_01,MethodInfo_StaticCamera_AddComponent_StaticCamera);
      lVar5 = *(long *)(TypeInfo_SceneLoader + 0xb8);
      *(Il2CppObject **)(lVar5 + 0x18) = pIVar3;
      il2cpp_runtime_glue(lVar5 + 0x18);
      lVar5 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if ((lVar5 != 0) &&
         (__this = *(UnityEngine_Camera_o **)(lVar5 + 0x20), __this != (UnityEngine_Camera_o *)0x0))
      {
        UnityEngine_Camera__set_nearClipPlane(__this,0.3,(MethodInfo *)0x0);
        __this_00 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
        if (__this_00 != (UnityEngine_Component_o *)0x0) {
          iVar1 = *(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8);
          __this_02 = (Cameras_StaticCamera_o *)
                      UnityEngine_Component__GetComponent<object>(__this_00,MethodInfo_StaticCamera_GetComponent_StaticCamera);
          if (__this_02 != (Cameras_StaticCamera_o *)0x0) {
            Cameras_StaticCamera__SetSkybox(__this_02,(uint)(iVar1 == 5),(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto LAB_041a7804;
    }
    puVar4 = &MethodInfo_TestCamera_AddComponent_TestCamera;
  }
  pIVar3 = UnityEngine_GameObject__AddComponent<object>(__this_01,(MethodInfo_24F0EB0 *)*puVar4);
  lVar5 = *(long *)(TypeInfo_SceneLoader + 0xb8);
  *(Il2CppObject **)(lVar5 + 0x18) = pIVar3;
  lVar5 = lVar5 + 0x18;
LAB_041a7755:
  il2cpp_runtime_glue(lVar5,pIVar3);
  return;
}


// ApplicationManagers.SceneLoader$$OnSceneWasLoaded
// il2cpp: void ApplicationManagers_SceneLoader__OnSceneWasLoaded (ApplicationManagers_SceneLoader_o* __this, UnityEngine_SceneManagement_Scene_o scene, int32_t mode, const MethodInfo* method);
// 0x41a7810

void ApplicationManagers_SceneLoader__OnSceneWasLoaded
               (ApplicationManagers_SceneLoader_o *__this,UnityEngine_SceneManagement_Scene_o scene,
               int32_t mode,MethodInfo *method)

{
  if (DAT_05704cc3 == '\0') {
    __this = (ApplicationManagers_SceneLoader_o *)&TypeInfo_SceneLoader;
    il2cpp_init_method_metadata();
    DAT_05704cc3 = '\x01';
  }
  ApplicationManagers_SceneLoader__CreateGameManager((MethodInfo *)__this);
  ApplicationManagers_SceneLoader__CreateCamera((MethodInfo *)__this);
  Events_EventManager__InvokeLoadScene
            (*(int32_t *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8),(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.SceneLoader$$.ctor
// il2cpp: void ApplicationManagers_SceneLoader___ctor (ApplicationManagers_SceneLoader_o* __this, const MethodInfo* method);
// 0x41a7860

void ApplicationManagers_SceneLoader___ctor
               (ApplicationManagers_SceneLoader_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


