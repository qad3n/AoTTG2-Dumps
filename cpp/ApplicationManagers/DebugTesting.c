// Type: ApplicationManagers.DebugTesting
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/DebugTesting.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/DebugTesting.cs
// --------------------------------

// ApplicationManagers.DebugTesting$$Init
// il2cpp: void ApplicationManagers_DebugTesting__Init (const MethodInfo* method);
// 0x18234d530

void ApplicationManagers_DebugTesting__Init(MethodInfo *method)

{
  ApplicationManagers_DebugTesting_o *value;
  Events_OnLoadScene_o *value_00;
  
  if (Il2CppMethodInitialized_184347962 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_ApplicationManagers_DebugTesting_OnLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugTesting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnLoadScene);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_DebugTesting);
    Il2CppMethodInitialized_184347962 = '\x01';
  }
  value = Utility_SingletonFactory__CreateSingleton_object_
                    ((Il2CppObject *)TypeInfo_ApplicationManagers_DebugTesting->static_fields->_instance,
                     (MethodInfo_798ED0 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_DebugTesting);
  TypeInfo_ApplicationManagers_DebugTesting->static_fields->_instance = value;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_DebugTesting->static_fields->_instance,value);
  value_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_OnLoadScene);
  Events_OnLoadScene___ctor
            ((UnityEngine_AudioClip_PCMSetPositionCallback_o *)value_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_ApplicationManagers_DebugTesting_OnLoadScene,(MethodInfo *)0x0);
  Events_EventManager__add_OnLoadScene(value_00,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DebugTesting$$RunTests
// il2cpp: void ApplicationManagers_DebugTesting__RunTests (const MethodInfo* method);
// 0x18234d990

void ApplicationManagers_DebugTesting__RunTests(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347963 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationConfig);
    Il2CppMethodInitialized_184347963 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_ApplicationConfig->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationConfig);
    return;
  }
  return;
}


// ApplicationManagers.DebugTesting$$RunLateTests
// il2cpp: void ApplicationManagers_DebugTesting__RunLateTests (const MethodInfo* method);
// 0x18234d950

void ApplicationManagers_DebugTesting__RunLateTests(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347964 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationConfig);
    Il2CppMethodInitialized_184347964 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_ApplicationConfig->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationConfig);
    return;
  }
  return;
}


// ApplicationManagers.DebugTesting$$OnLoadScene
// il2cpp: void ApplicationManagers_DebugTesting__OnLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x180547020

void
ApplicationManagers_DebugTesting__OnLoadScene(int32_t sceneName, MethodInfo* method)

{
  return;
}


// ApplicationManagers.DebugTesting$$Log
// il2cpp: void ApplicationManagers_DebugTesting__Log (Il2CppObject* message, const MethodInfo* method);
// 0x18234d5f0

void ApplicationManagers_DebugTesting__Log(Il2CppObject *message,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347965 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    Il2CppMethodInitialized_184347965 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
  }
  UnityEngine_Debug__Log(message,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DebugTesting$$Update
// il2cpp: void ApplicationManagers_DebugTesting__Update (ApplicationManagers_DebugTesting_o* __this, const MethodInfo* method);
// 0x180547020

void
ApplicationManagers_DebugTesting__Update(ApplicationManagers_DebugTesting_o* __this, MethodInfo* method)

{
  return;
}


// ApplicationManagers.DebugTesting$$RunDebugCommand
// il2cpp: void ApplicationManagers_DebugTesting__RunDebugCommand (System_String_o* command, const MethodInfo* method);
// 0x18234d640

void ApplicationManagers_DebugTesting__RunDebugCommand(System_String_o *command,MethodInfo *method)

{
  byte bVar1;
  GameManagers_CharacterEditorGameManager_o *__this;
  GameManagers_BaseGameManager_o *pGVar2;
  bool bVar3;
  System_String_array *pSVar4;
  System_String_o *pSVar5;
  
  if (Il2CppMethodInitialized_184347966 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationConfig);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Unity_VisualScripting_ComponentHolderProtocol_AddComponent_DebugAttackKeyframes);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugTesting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&"generate_char_previews");
    il2cpp_codegen_initialize_runtime_metadata(&"Debug colliders enabled: ");
    il2cpp_codegen_initialize_runtime_metadata(&"Debug commands are not available in release mode.");
    il2cpp_codegen_initialize_runtime_metadata(&"Invalid debug command.");
    il2cpp_codegen_initialize_runtime_metadata(&"colliders");
    il2cpp_codegen_initialize_runtime_metadata(&"generate_titan_keyframes");
    Il2CppMethodInitialized_184347966 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_ApplicationConfig->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationConfig);
  }
  if (TypeInfo_ApplicationManagers_ApplicationConfig->static_fields->DevelopmentMode == false) {
    if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
    }
    UnityEngine_Debug__Log((Il2CppObject *)"Debug commands are not available in release mode.",(MethodInfo *)0x0);
    return;
  }
  if (command != (System_String_o *)0x0) {
    pSVar4 = System_String__Split(command,0x20,0,(MethodInfo *)0x0);
    if (pSVar4 != (System_String_array *)0x0) {
      if ((int)pSVar4->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      pSVar5 = pSVar4->m_Items[0];
      bVar3 = System_String__op_Equality(pSVar5,"colliders",(MethodInfo *)0x0);
      if (bVar3) {
        TypeInfo_ApplicationManagers_DebugTesting->static_fields->DebugColliders =
             TypeInfo_ApplicationManagers_DebugTesting->static_fields->DebugColliders == false;
        if ((g_data_184354de8->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354de8);
        }
        pSVar5 = System_Boolean__ToString
                           (&TypeInfo_ApplicationManagers_DebugTesting->static_fields->DebugColliders,
                            (MethodInfo *)0x0);
        pSVar5 = System_String__Concat_1969e50("Debug colliders enabled: ",pSVar5,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
        }
        UnityEngine_Debug__Log((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
        return;
      }
      bVar3 = System_String__op_Equality(pSVar5,"generate_char_previews",(MethodInfo *)0x0);
      if (bVar3) {
        __this = (GameManagers_CharacterEditorGameManager_o *)
                 TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
        if (__this != (GameManagers_CharacterEditorGameManager_o *)0x0) {
          bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
          if ((bVar1 <= (__this->klass->_2).typeHierarchyDepth) &&
             ((__this->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
              (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
            GameManagers_CharacterEditorGameManager__GeneratePreviews(__this,(MethodInfo *)0x0);
            return;
          }
          il2cpp_codegen_raise_invalid_cast_exception(__this,TypeInfo_GameManagers_CharacterEditorGameManager)
          ;
        }
      }
      else {
        bVar3 = System_String__op_Equality(pSVar5,"generate_titan_keyframes",(MethodInfo *)0x0);
        if (!bVar3) {
          if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
          }
          UnityEngine_Debug__Log((Il2CppObject *)"Invalid debug command.",(MethodInfo *)0x0);
          return;
        }
        pGVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
        if (pGVar2 != (GameManagers_BaseGameManager_o *)0x0) {
          bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
          if ((bVar1 <= (pGVar2->klass->_2).typeHierarchyDepth) &&
             ((pGVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
              (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
            Unity_VisualScripting_ComponentHolderProtocol__AddComponent_object_
                      ((UnityEngine_Object_o *)(*(uint64_t *)((char *)pGVar2 + 0x78)),
                       (MethodInfo_663E50 *)
                       MethodInfo_Unity_VisualScripting_ComponentHolderProtocol_AddComponent_DebugAttackKeyframes
                      );
            return;
          }
          il2cpp_codegen_raise_invalid_cast_exception(pGVar2,TypeInfo_GameManagers_InGameManager);
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.DebugTesting$$.ctor
// il2cpp: void ApplicationManagers_DebugTesting___ctor (ApplicationManagers_DebugTesting_o* __this, const MethodInfo* method);
// 0x180528540

void
ApplicationManagers_DebugTesting___ctor(ApplicationManagers_DebugTesting_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


