// Type: ApplicationManagers.DebugTesting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/DebugTesting.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/DebugTesting.cs
// --------------------------------

// ApplicationManagers.DebugTesting$$Init
// il2cpp: void ApplicationManagers_DebugTesting__Init (const MethodInfo* method);
// 0x44b5060

void ApplicationManagers_DebugTesting__Init(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Events_OnLoadScene_o *value;
  
  if (g_data_057aea2f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnLoadScene);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugTesting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OnLoadScene);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DebugTesting_CreateSingleton_DebugTesting);
    g_data_057aea2f = '\x01';
  }
  pIVar1 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_DebugTesting + 0xb8),MethodInfo_DebugTesting_CreateSingleton_DebugTesting);
  **(undefined8 **)(TypeInfo_DebugTesting + 0xb8) = pIVar1;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_DebugTesting + 0xb8));
  value = (Events_OnLoadScene_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnLoadScene);
  Events_OnLoadScene___ctor();
  Events_EventManager__add_OnLoadScene(value,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DebugTesting$$RunTests
// il2cpp: void ApplicationManagers_DebugTesting__RunTests (const MethodInfo* method);
// 0x44b5120

void ApplicationManagers_DebugTesting__RunTests(MethodInfo *method)

{
  if (g_data_057aea30 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplicationConfig);
    g_data_057aea30 = '\x01';
  }
  if (*(int *)(TypeInfo_ApplicationConfig + 0xe4) != 0) {
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  return;
}


// ApplicationManagers.DebugTesting$$RunLateTests
// il2cpp: void ApplicationManagers_DebugTesting__RunLateTests (const MethodInfo* method);
// 0x44b5160

void ApplicationManagers_DebugTesting__RunLateTests(MethodInfo *method)

{
  if (g_data_057aea31 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplicationConfig);
    g_data_057aea31 = '\x01';
  }
  if (*(int *)(TypeInfo_ApplicationConfig + 0xe4) != 0) {
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  return;
}


// ApplicationManagers.DebugTesting$$OnLoadScene
// il2cpp: void ApplicationManagers_DebugTesting__OnLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x44b51a0

void ApplicationManagers_DebugTesting__OnLoadScene(int32_t sceneName,MethodInfo *method)

{
  return;
}


// ApplicationManagers.DebugTesting$$Log
// il2cpp: void ApplicationManagers_DebugTesting__Log (Il2CppObject* message, const MethodInfo* method);
// 0x44b51b0

void ApplicationManagers_DebugTesting__Log(Il2CppObject *message,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057aea32 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    g_data_057aea32 = '\x01';
    iVar1 = *(int *)(TypeInfo_Debug + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Debug + 0xe4);
  }
  if (iVar1 != 0) {
    UnityEngine_Debug__Log(message,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  UnityEngine_Debug__Log(message,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DebugTesting$$Update
// il2cpp: void ApplicationManagers_DebugTesting__Update (ApplicationManagers_DebugTesting_o* __this, const MethodInfo* method);
// 0x44b5220

void ApplicationManagers_DebugTesting__Update(ApplicationManagers_DebugTesting_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.DebugTesting$$RunDebugCommand
// il2cpp: void ApplicationManagers_DebugTesting__RunDebugCommand (System_String_o* command, const MethodInfo* method);
// 0x44b5230

void ApplicationManagers_DebugTesting__RunDebugCommand(System_String_o *command,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_MonoBehaviour_c *pUVar2;
  bool_conflict bVar3;
  System_String_array *pSVar4;
  System_String_o *pSVar5;
  undefined8 *puVar6;
  Il2CppObject *pIVar7;
  Il2CppClass *pIVar8;
  undefined4 uVar9;
  long lVar10;
  Il2CppClass *pIVar11;
  Il2CppObject *pIVar12;
  
  if (g_data_057aea33 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplicationConfig);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DebugAttackKeyframes_AddComponent_DebugAttackKeyframes);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugTesting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&"generate_char_previews");
    il2cpp_runtime_helper_023445d0(&"Debug colliders enabled: ");
    il2cpp_runtime_helper_023445d0(&"Debug commands are not available in release mode.");
    il2cpp_runtime_helper_023445d0(&"Invalid debug command.");
    il2cpp_runtime_helper_023445d0(&"colliders");
    il2cpp_runtime_helper_023445d0(&"generate_titan_keyframes");
    g_data_057aea33 = '\x01';
    if (*(int *)&(TypeInfo_ApplicationConfig->_2).field_0x1c != 0) goto label_044b525b;
label_044b53f0:
    il2cpp_runtime_helper_02337ed0();
    if (*(char *)((long)TypeInfo_ApplicationConfig->static_fields + 8) != '\0') goto label_044b526c;
label_044b5409:
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    puVar6 = &"Debug commands are not available in release mode.";
label_044b5428:
    pSVar5 = (System_String_o *)*puVar6;
label_044b542b:
    UnityEngine_Debug__Log((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
    return;
  }
  if (*(int *)&(TypeInfo_ApplicationConfig->_2).field_0x1c == 0) goto label_044b53f0;
label_044b525b:
  if (*(char *)((long)TypeInfo_ApplicationConfig->static_fields + 8) == '\0') goto label_044b5409;
label_044b526c:
  pIVar11 = TypeInfo_ApplicationConfig;
  if ((command == (System_String_o *)0x0) ||
     (pSVar4 = System_String__Split(command,0x20,0,(MethodInfo *)0x0), pIVar11 = (Il2CppClass *)command,
     pSVar4 == (System_String_array *)0x0)) goto label_044b5549;
  if ((int)pSVar4->max_length != 0) {
    pSVar5 = pSVar4->m_Items[0];
    bVar3 = System_String__op_Equality(pSVar5,"colliders",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      lVar10 = *(long *)(TypeInfo_DebugTesting + 0xb8);
      *(byte *)(lVar10 + 8) = *(byte *)(lVar10 + 8) ^ 1;
      if (*(int *)(g_data_057b9b98 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(g_data_057b9b98);
        lVar10 = *(long *)(TypeInfo_DebugTesting + 0xb8);
      }
      pSVar5 = System_Boolean__ToString((int)lVar10 + 8,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat_3ae5ba0("Debug colliders enabled: ",pSVar5,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      goto label_044b542b;
    }
    bVar3 = System_String__op_Equality(pSVar5,"generate_char_previews",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      bVar3 = System_String__op_Equality(pSVar5,"generate_titan_keyframes",(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        puVar6 = &"Invalid debug command.";
        goto label_044b5428;
      }
      pIVar11 = *(Il2CppClass **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
      if (pIVar11 != (Il2CppClass *)0x0) {
        pUVar2 = (pIVar11->_1).image;
        bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
        if ((bVar1 <= (pUVar2->_2).naturalAligment) &&
           ((pUVar2->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) {
          Unity_VisualScripting_ComponentHolderProtocol__AddComponent_object_
                    ((pIVar11->_1).interopData,MethodInfo_DebugAttackKeyframes_AddComponent_DebugAttackKeyframes);
          return;
        }
        goto label_044b5553;
      }
    }
    else {
      pIVar11 = *(Il2CppClass **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
      if (pIVar11 != (Il2CppClass *)0x0) {
        pUVar2 = (pIVar11->_1).image;
        bVar1 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
        if (((pUVar2->_2).naturalAligment < bVar1) ||
           ((pUVar2->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CharacterEditorGameManager)) goto label_044b5553;
        if (g_data_057aef47 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
          g_data_057aef47 = '\x01';
        }
        if (*(int *)&(TypeInfo_CharacterEditorGameManager->_2).field_0x1c == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar3 = System_IO_Directory__Exists
                          (*(System_String_o **)((long)TypeInfo_CharacterEditorGameManager->static_fields + 8),(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          if (*(int *)&(TypeInfo_CharacterEditorGameManager->_2).field_0x1c == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          System_IO_Directory__CreateDirectory
                    (*(System_String_o **)((long)TypeInfo_CharacterEditorGameManager->static_fields + 8),(MethodInfo *)0x0);
        }
        pIVar8 = (pIVar11->_1).element_class;
        pIVar12 = (Il2CppObject *)0x0;
        if (pIVar8 == (Il2CppClass *)0x0) goto label_04543639;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pIVar8,0,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo_CharacterEditorGameManager->_2).field_0x1c == 0) {
          il2cpp_runtime_helper_02337ed0();
          if (*(char *)TypeInfo_CharacterEditorGameManager->static_fields != '\0') goto label_04543598;
label_045435d1:
          if (g_data_057aef49 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_GenerateTitanPreviewsCoroutine_d__10);
            g_data_057aef49 = '\x01';
          }
          puVar6 = &TypeInfo_GenerateTitanPreviewsCoroutine_d__10;
        }
        else {
          if (*(char *)TypeInfo_CharacterEditorGameManager->static_fields == '\0') goto label_045435d1;
label_04543598:
          if (g_data_057aef48 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_GenerateHumanPreviewsCoroutine_d__9);
            g_data_057aef48 = '\x01';
          }
          puVar6 = &TypeInfo_GenerateHumanPreviewsCoroutine_d__9;
        }
        pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(*puVar6);
        pIVar12 = pIVar7;
        System_Object___ctor(pIVar7,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar7[1].klass = 0;
        if (pIVar7 != (Il2CppObject *)0x0) {
          pIVar7[2].klass = pIVar11;
          il2cpp_runtime_helper_022b4080(pIVar7 + 2,pIVar11);
          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                    ((UnityEngine_MonoBehaviour_o *)pIVar11,(System_Collections_IEnumerator_o *)pIVar7,
                     (MethodInfo *)0x0);
          return;
        }
label_04543639:
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aef48 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GenerateHumanPreviewsCoroutine_d__9);
          g_data_057aef48 = '\x01';
        }
        pIVar8 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_GenerateHumanPreviewsCoroutine_d__9);
        pIVar11 = pIVar8;
        System_Object___ctor((Il2CppObject *)pIVar8,(MethodInfo *)0x0);
        *(undefined4 *)&(pIVar8->_1).name = 0;
        if (pIVar8 == (Il2CppClass *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057aef49 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_GenerateTitanPreviewsCoroutine_d__10);
            g_data_057aef49 = '\x01';
          }
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GenerateTitanPreviewsCoroutine_d__10);
          uVar9 = 0;
          pIVar12 = pIVar7;
          System_Object___ctor(pIVar7,(MethodInfo *)0x0);
          *(undefined4 *)&pIVar7[1].klass = 0;
          if (pIVar7 == (Il2CppObject *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            System_Object___ctor(pIVar12,(MethodInfo *)0x0);
            *(undefined4 *)&pIVar12[1].klass = uVar9;
            return;
          }
          pIVar7[2].klass = pIVar11;
          il2cpp_runtime_helper_022b4080(pIVar7 + 2,pIVar11);
          return;
        }
        (pIVar8->_1).byval_arg.data = pIVar12;
        il2cpp_runtime_helper_022b4080(&(pIVar8->_1).byval_arg,pIVar12);
        return;
      }
    }
label_044b5549:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2ca0();
label_044b5553:
  il2cpp_runtime_helper_022b2fd0();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pIVar11,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DebugTesting$$.ctor
// il2cpp: void ApplicationManagers_DebugTesting___ctor (ApplicationManagers_DebugTesting_o* __this, const MethodInfo* method);
// 0x44b5560

void ApplicationManagers_DebugTesting___ctor(ApplicationManagers_DebugTesting_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


