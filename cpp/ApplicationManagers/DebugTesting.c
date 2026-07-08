// Type: ApplicationManagers.DebugTesting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers/DebugTesting.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/ApplicationManagers/DebugTesting.cs  [CHANGED since prior version]
// --------------------------------

// ApplicationManagers.DebugTesting$$Init
// il2cpp: void ApplicationManagers_DebugTesting__Init (const MethodInfo* method);
// 0x419bee0

void ApplicationManagers_DebugTesting__Init(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Events_OnLoadScene_o *value;
  
  if (DAT_05704c61 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_OnLoadScene);
    il2cpp_init_method_metadata(&TypeInfo_DebugTesting);
    il2cpp_init_method_metadata(&TypeInfo_OnLoadScene);
    il2cpp_init_method_metadata(&MethodInfo_DebugTesting_CreateSingleton_DebugTesting);
    DAT_05704c61 = '\x01';
  }
  pIVar1 = Utility_SingletonFactory__CreateSingleton<object>
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_DebugTesting + 0xb8),MethodInfo_DebugTesting_CreateSingleton_DebugTesting);
  **(undefined8 **)(TypeInfo_DebugTesting + 0xb8) = pIVar1;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_DebugTesting + 0xb8));
  value = (Events_OnLoadScene_o *)il2cpp_runtime_glue(TypeInfo_OnLoadScene);
  Events_OnLoadScene___ctor();
  Events_EventManager__add_OnLoadScene(value,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DebugTesting$$RunTests
// il2cpp: void ApplicationManagers_DebugTesting__RunTests (const MethodInfo* method);
// 0x419bfa0

void ApplicationManagers_DebugTesting__RunTests(MethodInfo *method)

{
  if (DAT_05704c62 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplicationConfig);
    DAT_05704c62 = '\x01';
  }
  if (*(int *)(TypeInfo_ApplicationConfig + 0xe4) != 0) {
    return;
  }
  il2cpp_init_class();
  return;
}


// ApplicationManagers.DebugTesting$$RunLateTests
// il2cpp: void ApplicationManagers_DebugTesting__RunLateTests (const MethodInfo* method);
// 0x419bfe0

void ApplicationManagers_DebugTesting__RunLateTests(MethodInfo *method)

{
  if (DAT_05704c63 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplicationConfig);
    DAT_05704c63 = '\x01';
  }
  if (*(int *)(TypeInfo_ApplicationConfig + 0xe4) != 0) {
    return;
  }
  il2cpp_init_class();
  return;
}


// ApplicationManagers.DebugTesting$$OnLoadScene
// il2cpp: void ApplicationManagers_DebugTesting__OnLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x419c020

void ApplicationManagers_DebugTesting__OnLoadScene(int32_t sceneName,MethodInfo *method)

{
  return;
}


// ApplicationManagers.DebugTesting$$Log
// il2cpp: void ApplicationManagers_DebugTesting__Log (Il2CppObject* message, const MethodInfo* method);
// 0x419c030

void ApplicationManagers_DebugTesting__Log(Il2CppObject *message,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05704c64 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    DAT_05704c64 = '\x01';
    iVar1 = *(int *)(TypeInfo_Debug + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Debug + 0xe4);
  }
  if (iVar1 != 0) {
    UnityEngine_Debug__Log(message,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  UnityEngine_Debug__Log(message,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DebugTesting$$Update
// il2cpp: void ApplicationManagers_DebugTesting__Update (ApplicationManagers_DebugTesting_o* __this, const MethodInfo* method);
// 0x419c0a0

void ApplicationManagers_DebugTesting__Update
               (ApplicationManagers_DebugTesting_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.DebugTesting$$RunDebugCommand
// il2cpp: void ApplicationManagers_DebugTesting__RunDebugCommand (System_String_o* command, const MethodInfo* method);
// 0x419c0b0

void ApplicationManagers_DebugTesting__RunDebugCommand(System_String_o *command,MethodInfo *method)

{
  byte bVar1;
  GameManagers_CharacterEditorGameManager_o *__this;
  long *plVar2;
  bool_conflict bVar3;
  System_String_array *pSVar4;
  System_String_o *pSVar5;
  undefined8 *puVar6;
  long lVar7;
  
  if (DAT_05704c65 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplicationConfig);
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorGameManager);
    il2cpp_init_method_metadata(&MethodInfo_DebugAttackKeyframes_AddComponent_DebugAttackKey);
    il2cpp_init_method_metadata(&TypeInfo_DebugTesting);
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&"generate_char_previews");
    il2cpp_init_method_metadata(&"Debug colliders enabled: ");
    il2cpp_init_method_metadata(&"Debug commands are not available in release mode.");
    il2cpp_init_method_metadata(&"Invalid debug command.");
    il2cpp_init_method_metadata(&"colliders");
    il2cpp_init_method_metadata(&"generate_titan_keyframes");
    DAT_05704c65 = '\x01';
    if (*(int *)(TypeInfo_ApplicationConfig + 0xe4) != 0) goto LAB_0419c0db;
LAB_0419c270:
    il2cpp_init_class();
    if (*(char *)(*(long *)(TypeInfo_ApplicationConfig + 0xb8) + 8) != '\0') goto LAB_0419c0ec;
LAB_0419c289:
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_init_class();
    }
    puVar6 = &"Debug commands are not available in release mode.";
  }
  else {
    if (*(int *)(TypeInfo_ApplicationConfig + 0xe4) == 0) goto LAB_0419c270;
LAB_0419c0db:
    if (*(char *)(*(long *)(TypeInfo_ApplicationConfig + 0xb8) + 8) == '\0') goto LAB_0419c289;
LAB_0419c0ec:
    if ((command == (System_String_o *)0x0) ||
       (pSVar4 = System_String__Split(command,0x20,0,(MethodInfo *)0x0),
       pSVar4 == (System_String_array *)0x0)) {
LAB_0419c3c9:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((int)pSVar4->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar5 = pSVar4->m_Items[0];
    bVar3 = System_String__op_Equality(pSVar5,"colliders",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      lVar7 = *(long *)(TypeInfo_DebugTesting + 0xb8);
      *(byte *)(lVar7 + 8) = *(byte *)(lVar7 + 8) ^ 1;
      if (*(int *)(DAT_05711048 + 0xe4) == 0) {
        il2cpp_init_class(DAT_05711048);
        lVar7 = *(long *)(TypeInfo_DebugTesting + 0xb8);
      }
      pSVar5 = System_Boolean__ToString((int)lVar7 + 8,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat("Debug colliders enabled: ",pSVar5,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_init_class();
      }
      goto LAB_0419c2ab;
    }
    bVar3 = System_String__op_Equality(pSVar5,"generate_char_previews",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      __this = *(GameManagers_CharacterEditorGameManager_o **)
                (*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
      if (__this == (GameManagers_CharacterEditorGameManager_o *)0x0) goto LAB_0419c3c9;
      bVar1 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
      if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
         ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorGameManager)) {
        GameManagers_CharacterEditorGameManager__GeneratePreviews(__this,(MethodInfo *)0x0);
        return;
      }
LAB_0419c3d3:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    bVar3 = System_String__op_Equality(pSVar5,"generate_titan_keyframes",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      plVar2 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
      if (plVar2 == (long *)0x0) goto LAB_0419c3c9;
      if ((*(byte *)(TypeInfo_InGameManager + 0x130) <= *(byte *)(*plVar2 + 0x130)) &&
         (*(long *)(*(long *)(*plVar2 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) ==
          TypeInfo_InGameManager)) {
        Unity_VisualScripting_ComponentHolderProtocol__AddComponent<object>
                  ((UnityEngine_Object_o *)plVar2[0xe],MethodInfo_DebugAttackKeyframes_AddComponent_DebugAttackKey);
        return;
      }
      goto LAB_0419c3d3;
    }
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_init_class();
    }
    puVar6 = &"Invalid debug command.";
  }
  pSVar5 = (System_String_o *)*puVar6;
LAB_0419c2ab:
  UnityEngine_Debug__Log((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DebugTesting$$.ctor
// il2cpp: void ApplicationManagers_DebugTesting___ctor (ApplicationManagers_DebugTesting_o* __this, const MethodInfo* method);
// 0x419c3e0

void ApplicationManagers_DebugTesting___ctor
               (ApplicationManagers_DebugTesting_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


