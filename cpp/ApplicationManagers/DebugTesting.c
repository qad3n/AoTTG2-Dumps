// Type: ApplicationManagers.DebugTesting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/DebugTesting.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/DebugTesting.cs
// --------------------------------

// ApplicationManagers.DebugTesting$$Init
// il2cpp: void ApplicationManagers_DebugTesting__Init (const MethodInfo* method);
// 0x5e09c20

void ApplicationManagers_DebugTesting__Init(MethodInfo *method)

{
  ApplicationManagers_DebugTesting_o *pAVar1;
  Events_OnLoadScene_o *__this;
  
  if (Il2CppMethodInitialized_0754841c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_ApplicationManagers_DebugTesting_OnLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugTesting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnLoadScene);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_DebugTesting);
    Il2CppMethodInitialized_0754841c = '\x01';
  }
  pAVar1 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)TypeInfo_ApplicationManagers_DebugTesting->static_fields->_instance,
                      (MethodInfo_3680650 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_DebugTesting);
  TypeInfo_ApplicationManagers_DebugTesting->static_fields->_instance = pAVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_DebugTesting->static_fields->_instance);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_OnLoadScene);
  Events_OnLoadScene___ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)MethodInfo_ApplicationManagers_DebugTesting_OnLoadScene,
             (MethodInfo *)0x0);
  Events_EventManager__add_OnLoadScene(__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DebugTesting$$RunTests
// il2cpp: void ApplicationManagers_DebugTesting__RunTests (const MethodInfo* method);
// 0x5e09ce0

void ApplicationManagers_DebugTesting__RunTests(MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754841d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationConfig);
    Il2CppMethodInitialized_0754841d = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_ApplicationConfig->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationConfig);
    return;
  }
  return;
}


// ApplicationManagers.DebugTesting$$RunLateTests
// il2cpp: void ApplicationManagers_DebugTesting__RunLateTests (const MethodInfo* method);
// 0x5e09f90

void ApplicationManagers_DebugTesting__RunLateTests(MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754841e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationConfig);
    Il2CppMethodInitialized_0754841e = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_ApplicationConfig->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationConfig);
    return;
  }
  return;
}


// ApplicationManagers.DebugTesting$$OnLoadScene
// il2cpp: void ApplicationManagers_DebugTesting__OnLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x5e14040

void ApplicationManagers_DebugTesting__OnLoadScene(int32_t sceneName,MethodInfo *method)

{
  return;
}


// ApplicationManagers.DebugTesting$$Log
// il2cpp: void ApplicationManagers_DebugTesting__Log (Il2CppObject* message, const MethodInfo* method);
// 0x5e14050

void ApplicationManagers_DebugTesting__Log(Il2CppObject *message,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754841f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    Il2CppMethodInitialized_0754841f = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
    UnityEngine_Debug__Log(message,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_Debug__Log(message,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DebugTesting$$Update
// il2cpp: void ApplicationManagers_DebugTesting__Update (ApplicationManagers_DebugTesting_o* __this, const MethodInfo* method);
// 0x5e140c0

void ApplicationManagers_DebugTesting__Update(ApplicationManagers_DebugTesting_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.DebugTesting$$RunDebugCommand
// il2cpp: void ApplicationManagers_DebugTesting__RunDebugCommand (System_String_o* command, const MethodInfo* method);
// 0x5e13190
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e1328e: mov rdi, rbx
// asm:   0x5e13291: jmp 0x5e1338b

void ApplicationManagers_DebugTesting__RunDebugCommand(System_String_o *command,MethodInfo *method)

{
  byte bVar1;
  GameManagers_CharacterEditorGameManager_o *__this;
  GameManagers_BaseGameManager_o *pGVar2;
  bool bVar3;
  System_String_array *pSVar4;
  System_String_o *pSVar5;
  System_String_o **ppSVar6;
  ApplicationManagers_DebugTesting_StaticFields *pAVar7;
  
  if (Il2CppMethodInitialized_07548420 == '\0') {
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
    Il2CppMethodInitialized_07548420 = '\x01';
    if ((TypeInfo_ApplicationManagers_ApplicationConfig->_2).cctor_finished_or_no_cctor != 0)
    goto label_05e131bb;
label_05e13350:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationConfig);
    if (TypeInfo_ApplicationManagers_ApplicationConfig->static_fields->DevelopmentMode != false)
    goto label_05e131cc;
label_05e13369:
    if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
    }
    ppSVar6 = &"Debug commands are not available in release mode.";
  }
  else {
    if ((TypeInfo_ApplicationManagers_ApplicationConfig->_2).cctor_finished_or_no_cctor == 0)
    goto label_05e13350;
label_05e131bb:
    if (TypeInfo_ApplicationManagers_ApplicationConfig->static_fields->DevelopmentMode == false)
    goto label_05e13369;
label_05e131cc:
    if ((command == (System_String_o *)0x0) ||
       (pSVar4 = System_String__Split(command,0x20,0,(MethodInfo *)0x0), pSVar4 == (System_String_array *)0x0)
       ) {
label_05e134ac:
      ThrowNullReferenceException();
    }
    if ((int)pSVar4->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pSVar5 = pSVar4->m_Items[0];
    bVar3 = System_String__op_Equality(pSVar5,"colliders",(MethodInfo *)0x0);
    if (bVar3) {
      pAVar7 = TypeInfo_ApplicationManagers_DebugTesting->static_fields;
      pAVar7->DebugColliders = (bool)(pAVar7->DebugColliders ^ 1);
      if ((g_data_075566f0->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_075566f0);
        pAVar7 = TypeInfo_ApplicationManagers_DebugTesting->static_fields;
      }
      pSVar5 = System_Boolean__ToString(&pAVar7->DebugColliders,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat_52f0320("Debug colliders enabled: ",pSVar5,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
      }
      goto label_05e1338b;
    }
    bVar3 = System_String__op_Equality(pSVar5,"generate_char_previews",(MethodInfo *)0x0);
    if (bVar3) {
      __this = (GameManagers_CharacterEditorGameManager_o *)
               TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
      if (__this == (GameManagers_CharacterEditorGameManager_o *)0x0) goto label_05e134ac;
      bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
      if ((bVar1 <= (__this->klass->_2).typeHierarchyDepth) &&
         ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
        GameManagers_CharacterEditorGameManager__GeneratePreviews(__this,(MethodInfo *)0x0);
        return;
      }
label_05e134b6:
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    bVar3 = System_String__op_Equality(pSVar5,"generate_titan_keyframes",(MethodInfo *)0x0);
    if (bVar3) {
      pGVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
      if (pGVar2 == (GameManagers_BaseGameManager_o *)0x0) goto label_05e134ac;
      bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
      if ((bVar1 <= (pGVar2->klass->_2).typeHierarchyDepth) &&
         ((pGVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
        Unity_VisualScripting_ComponentHolderProtocol__AddComponent_object_
                  ((*(uint64_t *)((char *)pGVar2 + 0x80)),
                   (MethodInfo_34B1730 *)
                   MethodInfo_Unity_VisualScripting_ComponentHolderProtocol_AddComponent_DebugAttackKeyframes)
        ;
        return;
      }
      goto label_05e134b6;
    }
    if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
    }
    ppSVar6 = &"Invalid debug command.";
  }
  pSVar5 = *ppSVar6;
label_05e1338b:
  UnityEngine_Debug__Log((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DebugTesting$$.ctor
// il2cpp: void ApplicationManagers_DebugTesting___ctor (ApplicationManagers_DebugTesting_o* __this, const MethodInfo* method);
// 0x5e140d0

void ApplicationManagers_DebugTesting___ctor(ApplicationManagers_DebugTesting_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


