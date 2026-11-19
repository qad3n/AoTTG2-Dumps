// Type: CustomLogic.CustomLogicManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicManager.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicManager.cs
// --------------------------------

// CustomLogic.CustomLogicManager.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicManager___c___cctor (const MethodInfo* method);
// 0x5b7be10

void CustomLogic_CustomLogicManager___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_0754738d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager_c);
    Il2CppMethodInitialized_0754738d = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager_c)
  ;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicManager_c->static_fields->__9 =
       (CustomLogic_CustomLogicManager___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicManager_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicManager.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicManager___c___ctor (CustomLogic_CustomLogicManager___c_o* __this, const MethodInfo* method);
// 0x5b7be80

void CustomLogic_CustomLogicManager___c___ctor
               (CustomLogic_CustomLogicManager___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicManager.<>c$$<StartLogic>b__49_0
// il2cpp: System_String_o* CustomLogic_CustomLogicManager___c___StartLogic_b__49_0 (CustomLogic_CustomLogicManager___c_o* __this, Settings_StringSetting_o* x, const MethodInfo* method);
// 0x5b7be90

System_String_o *
CustomLogic_CustomLogicManager___c___StartLogic_b__49_0
          (CustomLogic_CustomLogicManager___c_o *__this,Settings_StringSetting_o *x,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754738e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_0754738e = '\x01';
  }
  if (x == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (x->fields)._value;
}


// CustomLogic.CustomLogicManager$$get_IsWaitingForRestart
// il2cpp: bool CustomLogic_CustomLogicManager__get_IsWaitingForRestart (const MethodInfo* method);
// 0x5b75bb0

bool CustomLogic_CustomLogicManager__get_IsWaitingForRestart(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07547373 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07547373 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    return TypeInfo_CustomLogic_CustomLogicManager->static_fields->_hasRestarted;
  }
  return (bool)*(undefined1 *)
                ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 0xb8);
}


// CustomLogic.CustomLogicManager$$WaitForRestart
// il2cpp: void CustomLogic_CustomLogicManager__WaitForRestart (const MethodInfo* method);
// 0x5b75c20

void CustomLogic_CustomLogicManager__WaitForRestart(MethodInfo *method)

{
  CustomLogic_CustomLogicManager_StaticFields *pCVar1;
  
  if (Il2CppMethodInitialized_07547374 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07547374 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
  pCVar1->_hasRestarted = false;
  pCVar1->Evaluator = (CustomLogic_CustomLogicEvaluator_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pCVar1->Evaluator);
  return;
}


// CustomLogic.CustomLogicManager$$OnJoinedRoom
// il2cpp: void CustomLogic_CustomLogicManager__OnJoinedRoom (CustomLogic_CustomLogicManager_o* __this, const MethodInfo* method);
// 0x5b75c80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b75cb3: jmp 0x5b75d4d

void CustomLogic_CustomLogicManager__OnJoinedRoom(CustomLogic_CustomLogicManager_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  CustomLogic_CustomLogicManager_StaticFields *pCVar3;
  
  if (Il2CppMethodInitialized_07547375 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Clear);
    Il2CppMethodInitialized_07547375 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_CustomLogic_CustomLogicManager->static_fields->RoomData;
  }
  else {
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 0x98);
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Clear
              (pSVar2,(MethodInfo_4AAD690 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_object_Clear);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_CustomLogic_CustomLogicManager->static_fields->PersistentData;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Clear
                (pSVar2,(MethodInfo_4AAD690 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_object_Clear);
      pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
      pCVar3->CameraLocked = false;
      pCVar3->CursorVisible = false;
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicManager$$Init
// il2cpp: void CustomLogic_CustomLogicManager__Init (const MethodInfo* method);
// 0x5b75d60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b76041: jmp 0x5b7620f

void CustomLogic_CustomLogicManager__Init(MethodInfo *method)

{
  CustomLogic_CustomLogicManager_StaticFields *pCVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  bool bVar2;
  uint uVar3;
  CustomLogic_CustomLogicManager_o *pCVar4;
  Events_OnLoadScene_o *__this_00;
  Events_OnPreLoadScene_o *__this_01;
  System_String_o *pSVar5;
  System_String_array *pSVar6;
  uint uVar7;
  long lVar8;
  CustomLogic_CustomLogicSymbols_c *method_00;
  
  if (Il2CppMethodInitialized_07547376 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicAddonTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicManager_OnLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicManager_OnPreLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSymbols);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnPreLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&"# general");
    il2cpp_codegen_initialize_runtime_metadata(&"component ");
    il2cpp_codegen_initialize_runtime_metadata(&"component");
    il2cpp_codegen_initialize_runtime_metadata(&"# internal");
    il2cpp_codegen_initialize_runtime_metadata(&"BaseLogic");
    Il2CppMethodInitialized_07547376 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar4 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance,
                      (MethodInfo_3680650 *)
                      MethodInfo_Utility_SingletonFactory_CreateSingleton_CustomLogicManager);
  TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance = pCVar4;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance);
  method_00 = TypeInfo_CustomLogic_CustomLogicSymbols;
  if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
  }
  CustomLogic_CustomLogicSymbols__Init((MethodInfo *)method_00);
  if ((TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
  }
  Map_CustomLogicTransfer__Init((MethodInfo *)0x0);
  if ((TypeInfo_Map_CustomLogicAddonTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer);
  }
  Map_CustomLogicAddonTransfer__Init((MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_OnLoadScene);
  Events_OnLoadScene___ctor
            (__this_00,(Il2CppObject *)0x0,(intptr_t)MethodInfo_CustomLogic_CustomLogicManager_OnLoadScene,
             (MethodInfo *)0x0);
  Events_EventManager__add_OnLoadScene(__this_00,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_OnPreLoadScene);
  Events_OnPreLoadScene___ctor
            (__this_01,(Il2CppObject *)0x0,(intptr_t)MethodInfo_CustomLogic_CustomLogicManager_OnPreLoadScene,
             (MethodInfo *)0x0);
  Events_EventManager__add_OnPreLoadScene(__this_01,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar5 = TypeInfo_Utility_ResourcePaths->static_fields->Modes;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pSVar5 = ApplicationManagers_ResourceManager__TryLoadText(pSVar5,"BaseLogic",(MethodInfo *)0x0);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
  pCVar1->BaseLogic = pSVar5;
  Il2CppCodeGenWriteBarrier(&pCVar1->BaseLogic);
  pSVar5 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->BaseLogic;
  if ((pSVar5 == (System_String_o *)0x0) ||
     (pSVar6 = System_String__Split(pSVar5,10,0,(MethodInfo *)0x0), pSVar6 == (System_String_array *)0x0)) {
label_05b7620f:
    ThrowNullReferenceException();
  }
  uVar3 = (uint)pSVar6->max_length;
  if (0 < (int)uVar3) {
    lVar8 = 0;
    do {
      uVar7 = (uint)lVar8;
      if (uVar3 <= uVar7) goto label_05b76214;
      if (pSVar6->m_Items[(int)uVar7] == (System_String_o *)0x0) goto label_05b7620f;
      bVar2 = System_String__StartsWith(pSVar6->m_Items[(int)uVar7],"# general",(MethodInfo *)0x0);
      if (bVar2) {
label_05b760ba:
        uVar3 = (uint)pSVar6->max_length;
        if ((int)uVar7 < (int)(uVar3 - 1)) {
          if (uVar3 <= uVar7 + 1) goto label_05b76214;
          if (pSVar6->m_Items[lVar8 + 1] == (System_String_o *)0x0) goto label_05b7620f;
          bVar2 = System_String__StartsWith
                            (pSVar6->m_Items[lVar8 + 1],"component",(MethodInfo *)0x0);
          if (bVar2) {
            if ((uint)pSVar6->max_length <= uVar7 + 1) {
label_05b76214:
              ThrowIndexOutOfRangeException();
            }
            if ((("component " == (System_String_o *)0x0) ||
                (pSVar6->m_Items[lVar8 + 1] == (System_String_o *)0x0)) ||
               (pSVar5 = System_String__Substring
                                   (pSVar6->m_Items[lVar8 + 1],("component "->fields)._stringLength,
                                    (MethodInfo *)0x0), pSVar5 == (System_String_o *)0x0)) goto label_05b7620f;
            pSVar5 = System_String__Trim(pSVar5,(MethodInfo *)0x0);
            if ((uint)pSVar6->max_length <= uVar7) goto label_05b76214;
            if (pSVar6->m_Items[(int)uVar7] == (System_String_o *)0x0) goto label_05b7620f;
            bVar2 = System_String__StartsWith
                              (pSVar6->m_Items[(int)uVar7],"# general",(MethodInfo *)0x0);
            if (bVar2) {
              if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
              }
              __this = (System_Collections_Generic_HashSet_object__o *)
                       TypeInfo_CustomLogic_CustomLogicManager->static_fields->GeneralComponents;
            }
            else {
              if ((uint)pSVar6->max_length <= uVar7) goto label_05b76214;
              if (pSVar6->m_Items[(int)uVar7] == (System_String_o *)0x0) goto label_05b7620f;
              bVar2 = System_String__StartsWith
                                (pSVar6->m_Items[(int)uVar7],"# internal",(MethodInfo *)0x0);
              if (!bVar2) goto label_05b761f0;
              if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
              }
              __this = (System_Collections_Generic_HashSet_object__o *)
                       TypeInfo_CustomLogic_CustomLogicManager->static_fields->InternalComponents;
            }
            if (__this == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05b7620f;
            System_Collections_Generic_HashSet_object___Add
                      (__this,(Il2CppObject *)pSVar5,
                       (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
          }
        }
      }
      else {
        if ((uint)pSVar6->max_length <= uVar7) goto label_05b76214;
        if (pSVar6->m_Items[(int)uVar7] == (System_String_o *)0x0) goto label_05b7620f;
        bVar2 = System_String__StartsWith(pSVar6->m_Items[(int)uVar7],"# internal",(MethodInfo *)0x0)
        ;
        if (bVar2) goto label_05b760ba;
      }
label_05b761f0:
      uVar3 = (uint)pSVar6->max_length;
      lVar8 = lVar8 + 1;
    } while ((int)lVar8 < (int)uVar3);
  }
  return;
}


// CustomLogic.CustomLogicManager$$OnPreLoadScene
// il2cpp: void CustomLogic_CustomLogicManager__OnPreLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x5b76220
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b7624f: jmp 0x5b76465

void CustomLogic_CustomLogicManager__OnPreLoadScene(int32_t sceneName,MethodInfo *method)

{
  float fVar1;
  uint32_t uVar2;
  CustomLogic_CustomLogicManager_o *__this;
  UnityEngine_Vector3_StaticFields *pUVar3;
  System_Collections_Generic_HashSet_object__o *pSVar4;
  float fVar5;
  UnityEngine_Vector3_c *pUVar6;
  CustomLogic_CustomLogicManager_c *pCVar7;
  CustomLogic_CustomLogicManager_StaticFields *pCVar8;
  
  if (Il2CppMethodInitialized_07547377 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Clear);
    Il2CppMethodInitialized_07547377 = '\x01';
    uVar2 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    __this = TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance;
  }
  else {
    __this = *(CustomLogic_CustomLogicManager_o **)
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields;
  }
  if (__this != (CustomLogic_CustomLogicManager_o *)0x0) {
    UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    pCVar8 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
    pCVar8->_hasRestarted = true;
    pCVar8->Evaluator = (CustomLogic_CustomLogicEvaluator_o *)0x0;
    Il2CppCodeGenWriteBarrier(&pCVar8->Evaluator);
    pCVar8 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
    pCVar8->Compiler = (CustomLogic_CustomLogicCompiler_o *)0x0;
    Il2CppCodeGenWriteBarrier(&pCVar8->Compiler);
    pCVar7 = TypeInfo_CustomLogic_CustomLogicManager;
    pCVar8 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
    pCVar8->LogicLoaded = false;
    pCVar8->AddonsLoaded = false;
    pCVar8->LogicWasLocallyLoaded = false;
    pCVar8->Cutscene = false;
    pCVar8->ManualCamera = false;
    pCVar8->SkipCutscene = false;
    if (Il2CppMethodInitialized_0753e4b6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b6 = '\x01';
      pCVar8 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
      pCVar7 = TypeInfo_CustomLogic_CustomLogicManager;
    }
    pUVar6 = TypeInfo_UnityEngine_Vector3;
    pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar5 = (pUVar3->zeroVector).fields.y;
    fVar1 = (pUVar3->zeroVector).fields.z;
    (pCVar8->CameraPosition).fields.x = (pUVar3->zeroVector).fields.x;
    (pCVar8->CameraPosition).fields.y = fVar5;
    (pCVar8->CameraPosition).fields.z = fVar1;
    pUVar3 = pUVar6->static_fields;
    fVar5 = (pUVar3->zeroVector).fields.y;
    fVar1 = (pUVar3->zeroVector).fields.z;
    pCVar8 = pCVar7->static_fields;
    (pCVar8->CameraRotation).fields.x = (pUVar3->zeroVector).fields.x;
    (pCVar8->CameraRotation).fields.y = fVar5;
    (pCVar8->CameraRotation).fields.z = fVar1;
    pUVar3 = pUVar6->static_fields;
    fVar5 = (pUVar3->zeroVector).fields.y;
    fVar1 = (pUVar3->zeroVector).fields.z;
    pCVar8 = pCVar7->static_fields;
    (pCVar8->CameraVelocity).fields.x = (pUVar3->zeroVector).fields.x;
    (pCVar8->CameraVelocity).fields.y = fVar5;
    (pCVar8->CameraVelocity).fields.z = fVar1;
    (pCVar7->static_fields->CameraMode).fields = (System_Nullable_CameraInputMode__Fields)0x0;
    pCVar8 = pCVar7->static_fields;
    pCVar8->CameraFOV = 0.0;
    pSVar4 = (System_Collections_Generic_HashSet_object__o *)pCVar8->KeybindDefaultDisabled;
    if (pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___Clear
                (pSVar4,(MethodInfo_4FB36D0 *)
                        MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Clear);
      pSVar4 = (System_Collections_Generic_HashSet_object__o *)
               TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindHold;
      if (pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Clear
                  (pSVar4,(MethodInfo_4FB36D0 *)
                          MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Clear);
        if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
        }
        CustomLogic_CustomLogicUIBuiltin__ClearLabels((MethodInfo *)0x0);
        CustomLogic_CustomLogicCommandsBuiltin__ClearCommands((MethodInfo *)0x0);
        if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
        }
        CustomLogic_CustomLogicMapBuiltin__ResetRuntimeNetworkedSpawnLimits((MethodInfo *)0x0);
        pCVar8 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
        pCVar8->CameraLocked = false;
        pCVar8->CursorVisible = false;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicManager$$ToggleCutscene
// il2cpp: void CustomLogic_CustomLogicManager__ToggleCutscene (bool cutscene, const MethodInfo* method);
// 0x5b76470
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b7649e: jmp 0x5b765c8

void CustomLogic_CustomLogicManager__ToggleCutscene(bool cutscene,MethodInfo *method)

{
  char cVar1;
  byte bVar2;
  CustomLogic_CustomLogicManager_StaticFields *pCVar3;
  Settings_InGameCharacterSettings_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  bool enabled;
  UI_InGameMenu_o *__this;
  
  if (Il2CppMethodInitialized_07547378 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547378 = '\x01';
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) goto label_05b764f9;
label_05b76492:
    pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
    cVar1 = pCVar3->Cutscene;
  }
  else {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor != 0) goto label_05b76492;
label_05b764f9:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
    cVar1 = pCVar3->Cutscene;
  }
  if ((bool)cVar1 == cutscene) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    TypeInfo_CustomLogic_CustomLogicManager->static_fields->Cutscene = cutscene;
  }
  else {
    pCVar3->Cutscene = cutscene;
  }
  if (cutscene) {
    if ((((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    __this = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (__this != (UI_InGameMenu_o *)0x0) {
      bVar2 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
      if (((((UI_BaseMenu_c *)__this->klass)->_2).typeHierarchyDepth < bVar2) ||
         ((((UI_BaseMenu_c *)__this->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] !=
          (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
label_05b7663d:
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      enabled = false;
label_05b7662a:
      UI_InGameMenu__SetCharacterMenu(__this,enabled,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
    if ((pSVar4 != (Settings_InGameCharacterSettings_o *)0x0) &&
       (pSVar5 = (pSVar4->fields).ChooseStatus, pSVar5 != (Settings_IntSetting_o *)0x0)) {
      if ((pSVar5->fields)._value != 0) {
        return;
      }
      if ((((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      __this = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (__this != (UI_InGameMenu_o *)0x0) {
        bVar2 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
        if (((((UI_BaseMenu_c *)__this->klass)->_2).typeHierarchyDepth < bVar2) ||
           ((((UI_BaseMenu_c *)__this->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_UI_InGameMenu)) goto label_05b7663d;
        enabled = true;
        goto label_05b7662a;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicManager$$OnLoadScene
// il2cpp: void CustomLogic_CustomLogicManager__OnLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x5b76650

void CustomLogic_CustomLogicManager__OnLoadScene(int32_t sceneName,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicManager_StaticFields *pCVar2;
  CustomLogic_CustomLogicManager_c *method_00;
  
  if (Il2CppMethodInitialized_07547379 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07547379 = '\x01';
  }
  uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  if (sceneName == 2) {
    if (uVar1 == 0) {
      method_00 = TypeInfo_CustomLogic_CustomLogicManager;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      CustomLogic_CustomLogicManager__StartInGame((MethodInfo *)method_00);
      return;
    }
    CustomLogic_CustomLogicManager__StartInGame((MethodInfo *)TypeInfo_CustomLogic_CustomLogicManager);
    return;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
  pCVar2->LogicLoaded = true;
  pCVar2->AddonsLoaded = true;
  return;
}


// CustomLogic.CustomLogicManager$$StartInGame
// il2cpp: void CustomLogic_CustomLogicManager__StartInGame (const MethodInfo* method);
// 0x5b766d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b7670a: jmp 0x5b76a83

void CustomLogic_CustomLogicManager__StartInGame(MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameGeneralSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  Photon_Pun_PhotonView_o *__this;
  CustomLogic_CustomLogicManager_StaticFields *pCVar4;
  bool bVar5;
  System_Object_array *parameters;
  Il2CppObject *pIVar6;
  System_String_o *pSVar7;
  CustomLogic_CustomLogicManager_c *method_00;
  Photon_Pun_PhotonMessageInfo_o PStack_38;
  
  if (Il2CppMethodInitialized_0754737a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicAddonTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"LoadBuiltinLogicRPC");
    Il2CppMethodInitialized_0754737a = '\x01';
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) goto label_05b767b1;
label_05b766fb:
    bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor != 0) goto label_05b766fb;
label_05b767b1:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  if (bVar5) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    TypeInfo_CustomLogic_CustomLogicManager->static_fields->LogicWasLocallyLoaded = true;
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
    if (((pSVar1 == (Settings_InGameSet_o *)0x0) ||
        (pSVar2 = (pSVar1->fields).General, pSVar2 == (Settings_InGameGeneralSettings_o *)0x0)) ||
       (pSVar3 = (pSVar2->fields).GameMode, pSVar3 == (Settings_StringSetting_o *)0x0)) goto label_05b76a8f;
    pSVar7 = (pSVar3->fields)._value;
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    bVar5 = Map_BuiltinLevels__IsLogicBuiltin(pSVar7,(MethodInfo *)0x0);
    pSVar3 = (pSVar2->fields).GameMode;
    if (bVar5) {
      if (pSVar3 == (Settings_StringSetting_o *)0x0) {
label_05b76a8f:
        ThrowNullReferenceException();
      }
      pSVar7 = (pSVar3->fields)._value;
      if ((TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
      }
      Map_CustomLogicTransfer__UseBuiltin(pSVar7,(MethodInfo *)0x0);
      TypeInfo_Map_CustomLogicTransfer->static_fields->LogicTransferReady = true;
      __this = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
      parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      pSVar3 = (pSVar2->fields).GameMode;
      if ((pSVar3 == (Settings_StringSetting_o *)0x0) || (parameters == (System_Object_array *)0x0))
      goto label_05b76a8f;
      pSVar7 = (pSVar3->fields)._value;
      if ((pSVar7 != (System_String_o *)0x0) &&
         (pIVar6 = il2cpp_vm_Object_IsInst
                             ((Il2CppObject *)pSVar7,(((parameters->obj).klass)->_1).element_class),
         pIVar6 == (Il2CppObject *)0x0)) {
        pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
      }
      if ((int)parameters->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      parameters->m_Items[0] = (Il2CppObject *)pSVar7;
      Il2CppCodeGenWriteBarrier(parameters->m_Items);
      if (__this == (Photon_Pun_PhotonView_o *)0x0) goto label_05b76a8f;
      Photon_Pun_PhotonView__RPC(__this,"LoadBuiltinLogicRPC",0,parameters,(MethodInfo *)0x0);
    }
    else {
      if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_05b76a8f;
      pSVar7 = (pSVar3->fields)._value;
      if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
      }
      pSVar7 = Map_BuiltinLevels__LoadLogic(pSVar7,(MethodInfo *)0x0);
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pCVar4 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
      pCVar4->Logic = pSVar7;
      Il2CppCodeGenWriteBarrier(&pCVar4->Logic);
      pSVar7 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Logic;
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      pSVar7 = Utility_Util__CreateMD5(pSVar7,(MethodInfo *)0x0);
      pCVar4 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
      pCVar4->LogicHash = pSVar7;
      Il2CppCodeGenWriteBarrier(&pCVar4->LogicHash);
      pSVar3 = (pSVar2->fields).GameMode;
      if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_05b76a8f;
      pSVar7 = (pSVar3->fields)._value;
      if ((TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
      }
      Map_CustomLogicTransfer__Start(pSVar7,(MethodInfo *)0x0);
      Utility_Util__CreateLocalPhotonInfo(&PStack_38,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_0754737c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
        Il2CppMethodInitialized_0754737c = '\x01';
      }
      if ((PStack_38.fields.Sender == (Photon_Realtime_Player_o *)0x0) ||
         (bVar5 = Photon_Realtime_Player__get_IsMasterClient(PStack_38.fields.Sender,(MethodInfo *)0x0), bVar5
         )) {
        method_00 = TypeInfo_CustomLogic_CustomLogicManager;
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        CustomLogic_CustomLogicManager__FinishLoadLogic((MethodInfo *)method_00);
      }
    }
    if ((TypeInfo_Map_CustomLogicAddonTransfer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer);
    }
    Map_CustomLogicAddonTransfer__Start((MethodInfo *)0x0);
  }
  return;
}


// CustomLogic.CustomLogicManager$$OnLoadBuiltinLogicRPC
// il2cpp: void CustomLogic_CustomLogicManager__OnLoadBuiltinLogicRPC (System_String_o* name, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5b76b10

void CustomLogic_CustomLogicManager__OnLoadBuiltinLogicRPC
               (System_String_o *name,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  CustomLogic_CustomLogicManager_StaticFields *pCVar1;
  Map_CustomLogicTransfer_StaticFields *pMVar2;
  bool bVar3;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754737b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_0754737b = '\x01';
  }
  if (info.fields.Sender == (Photon_Realtime_Player_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar3 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    pSVar4 = Map_BuiltinLevels__LoadLogic(name,(MethodInfo *)0x0);
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
    pCVar1->Logic = pSVar4;
    Il2CppCodeGenWriteBarrier(&pCVar1->Logic);
    pSVar4 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Logic;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    pSVar4 = Utility_Util__CreateMD5(pSVar4,(MethodInfo *)0x0);
    pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
    pCVar1->LogicHash = pSVar4;
    Il2CppCodeGenWriteBarrier(&pCVar1->LogicHash);
    pSVar4 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    if ((TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
    }
    pMVar2 = TypeInfo_Map_CustomLogicTransfer->static_fields;
    pMVar2->LogicHash = pSVar4;
    method_00 = (MethodInfo *)&pMVar2->LogicHash;
    Il2CppCodeGenWriteBarrier((void **)method_00);
    CustomLogic_CustomLogicManager__FinishLoadLogic(method_00);
    return;
  }
  return;
}


// CustomLogic.CustomLogicManager$$OnLoadCachedLogicRPC
// il2cpp: void CustomLogic_CustomLogicManager__OnLoadCachedLogicRPC (Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5b76ab0

void CustomLogic_CustomLogicManager__OnLoadCachedLogicRPC
               (Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CustomLogicManager_c *method_00;
  
  if (Il2CppMethodInitialized_0754737c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_0754737c = '\x01';
  }
  if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
    bVar1 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    method_00 = TypeInfo_CustomLogic_CustomLogicManager;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    CustomLogic_CustomLogicManager__FinishLoadLogic((MethodInfo *)method_00);
    return;
  }
  CustomLogic_CustomLogicManager__FinishLoadLogic((MethodInfo *)TypeInfo_CustomLogic_CustomLogicManager);
  return;
}


// CustomLogic.CustomLogicManager$$FinishLoadLogic
// il2cpp: void CustomLogic_CustomLogicManager__FinishLoadLogic (const MethodInfo* method);
// 0x5b76c80

void CustomLogic_CustomLogicManager__FinishLoadLogic(MethodInfo *method)

{
  System_String_o *key;
  Photon_Realtime_Player_o *player;
  
  if (Il2CppMethodInitialized_0754737d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_0754737d = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  key = TypeInfo_GameManagers_PlayerProperty->static_fields->CustomLogicHash;
  if ((TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
  }
  PhotonExtensions__SetCustomProperty
            (player,key,(Il2CppObject *)TypeInfo_Map_CustomLogicTransfer->static_fields->LogicHash,
             (MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  TypeInfo_CustomLogic_CustomLogicManager->static_fields->LogicLoaded = true;
  return;
}


// CustomLogic.CustomLogicManager$$ApplyAddonBundle
// il2cpp: void CustomLogic_CustomLogicManager__ApplyAddonBundle (System_String_o* bundleJson, const MethodInfo* method);
// 0x5b76d70
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b76ebc: mov r14, rsp
// asm:   0x5b76ebf: lea rbp, [rip + 0x1714eda]  ; MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
// asm:   0x5b76ec6: nop word ptr cs:[rax + rax]

void CustomLogic_CustomLogicManager__ApplyAddonBundle(System_String_o *bundleJson,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *__this;
  System_String_o *key;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  System_String_o *value;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_118;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_c8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_0754737e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    Il2CppMethodInitialized_0754737e = '\x01';
  }
  local_118.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_118.m_Array.fields._index = 0;
  local_118.m_Array.fields._version = 0;
  local_118.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_118.m_Object.fields._getEnumeratorRetType = 0;
  local_118.m_Object.fields._36_4_ = 0;
  local_118.m_Object.fields._version = 0;
  local_118.m_Object.fields._index = 0;
  local_118.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_118.type = 0;
  local_118._4_4_ = 0;
  local_118.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_118.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_CustomLogic_CustomLogicManager->static_fields->CustomAddonSources;
  if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_05b76f67:
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___Clear
            (pSVar1,(MethodInfo_4AAD690 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear
            );
  bVar2 = System_String__IsNullOrEmpty(bundleJson,(MethodInfo *)0x0);
  if (!bVar2) {
    __this = SimpleJSONFixed_JSON__Parse(bundleJson,(MethodInfo *)0x0);
    if (__this == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05b76f67;
    SimpleJSONFixed_JSONNode__get_Keys
              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_78,__this,(MethodInfo *)0x0);
    local_c8.m_Array.fields._current = local_78.m_Array.fields._current;
    local_c8.m_Array.fields._list = local_78.m_Array.fields._list;
    local_c8.m_Array.fields._index = local_78.m_Array.fields._index;
    local_c8.m_Array.fields._version = local_78.m_Array.fields._version;
    local_c8.m_Object.fields._current.fields.value = local_78.m_Object.fields._current.fields.value;
    local_c8.m_Object.fields._getEnumeratorRetType = local_78.m_Object.fields._getEnumeratorRetType;
    local_c8.m_Object.fields._36_4_ = local_78.m_Object.fields._36_4_;
    local_c8.m_Object.fields._version = local_78.m_Object.fields._version;
    local_c8.m_Object.fields._index = local_78.m_Object.fields._index;
    local_c8.m_Object.fields._current.fields.key = local_78.m_Object.fields._current.fields.key;
    local_c8.type = local_78.type;
    local_c8._4_4_ = local_78._4_4_;
    local_c8.m_Object.fields._dictionary = local_78.m_Object.fields._dictionary;
    SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_118,
               (SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c8,(MethodInfo *)0x0);
    bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                      ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_118,(MethodInfo *)0x0);
    if (bVar2) {
      do {
        key = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_118,(MethodInfo *)0x0);
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_CustomLogic_CustomLogicManager->static_fields->CustomAddonSources;
        pSVar3 = (*(__this->klass->vtable)._7_get_Item.methodPtr)
                           (__this,key,(__this->klass->vtable)._7_get_Item.method);
        if ((pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
           (value = (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                              (pSVar3,(pSVar3->klass->vtable)._9_get_Value.method),
           pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto label_05b76f67;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar1,(Il2CppObject *)key,(Il2CppObject *)value,
                   (MethodInfo_4AAD4C0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
        bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_118,(MethodInfo *)0x0);
      } while (bVar2);
    }
  }
  return;
}


// CustomLogic.CustomLogicManager$$FinishLoadAddons
// il2cpp: void CustomLogic_CustomLogicManager__FinishLoadAddons (const MethodInfo* method);
// 0x5b76f70

void CustomLogic_CustomLogicManager__FinishLoadAddons(MethodInfo *method)

{
  System_String_o *key;
  Photon_Realtime_Player_o *player;
  
  if (Il2CppMethodInitialized_0754737f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicAddonTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_0754737f = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  key = TypeInfo_GameManagers_PlayerProperty->static_fields->CustomAddonHash;
  if ((TypeInfo_Map_CustomLogicAddonTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer);
  }
  PhotonExtensions__SetCustomProperty
            (player,key,(Il2CppObject *)TypeInfo_Map_CustomLogicAddonTransfer->static_fields->AddonBundleHash,
             (MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  TypeInfo_CustomLogic_CustomLogicManager->static_fields->AddonsLoaded = true;
  return;
}


// CustomLogic.CustomLogicManager$$OnPlayerEnteredRoom
// il2cpp: void CustomLogic_CustomLogicManager__OnPlayerEnteredRoom (CustomLogic_CustomLogicManager_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x5b77060
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b7709e: jmp 0x5b7728b
// asm:   0x5b77161: jmp 0x5b7728b
// asm:   0x5b772a3: jmp 0x5b77339

void CustomLogic_CustomLogicManager__OnPlayerEnteredRoom
               (CustomLogic_CustomLogicManager_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  Settings_InGameSet_o *pSVar3;
  Settings_InGameGeneralSettings_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  System_String_o *pSVar6;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar7;
  System_Object_array *parameters;
  Il2CppObject *pIVar8;
  
  if (Il2CppMethodInitialized_07547380 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicAddonTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"LoadBuiltinLogicRPC");
    Il2CppMethodInitialized_07547380 = '\x01';
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor != 0) goto label_05b7708f;
label_05b7712e:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar7 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if (bVar7) {
label_05b77142:
      if ((TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
        cVar1 = TypeInfo_Map_CustomLogicTransfer->static_fields->LogicTransferReady;
      }
      else {
        cVar1 = TypeInfo_Map_CustomLogicTransfer->static_fields->LogicTransferReady;
      }
      if (cVar1 != '\0') {
        pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
        if (((pSVar3 == (Settings_InGameSet_o *)0x0) ||
            (pSVar4 = (pSVar3->fields).General, pSVar4 == (Settings_InGameGeneralSettings_o *)0x0)) ||
           (pSVar5 = (pSVar4->fields).GameMode, pSVar5 == (Settings_StringSetting_o *)0x0)) goto label_05b77348;
        pSVar6 = (pSVar5->fields)._value;
        if ((((Il2CppClass *)TypeInfo_Map_BuiltinLevels)->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
        }
        bVar7 = Map_BuiltinLevels__IsLogicBuiltin(pSVar6,(MethodInfo *)0x0);
        if (!bVar7) {
          if ((TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
          }
          Map_CustomLogicTransfer__Transfer(player,(MethodInfo *)0x0);
          uVar2 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
          goto joined_r0x05b772ce;
        }
        __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
        parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
        pSVar5 = (pSVar4->fields).GameMode;
        if ((pSVar5 == (Settings_StringSetting_o *)0x0) || (parameters == (System_Object_array *)0x0)) {
label_05b77348:
          ThrowNullReferenceException();
        }
        pSVar6 = (pSVar5->fields)._value;
        if ((pSVar6 != (System_String_o *)0x0) &&
           (pIVar8 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)pSVar6,(((parameters->obj).klass)->_1).element_class),
           pIVar8 == (Il2CppObject *)0x0)) {
          pIVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar8,(MethodInfo *)0x0);
        }
        if ((int)parameters->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[0] = (Il2CppObject *)pSVar6;
        Il2CppCodeGenWriteBarrier(parameters->m_Items);
        if (__this_00 == (Photon_Pun_PhotonView_o *)0x0) goto label_05b77348;
        Photon_Pun_PhotonView__RPC_56e5850
                  (__this_00,"LoadBuiltinLogicRPC",player,parameters,(MethodInfo *)0x0);
      }
    }
  }
  else {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) goto label_05b7712e;
label_05b7708f:
    bVar7 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if (bVar7) goto label_05b77142;
  }
  uVar2 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
joined_r0x05b772ce:
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar7 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  else {
    bVar7 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  if (bVar7) {
    if ((((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer);
      cVar1 = TypeInfo_Map_CustomLogicAddonTransfer->static_fields->AddonTransferReady;
    }
    else {
      cVar1 = *(char *)((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer)->static_fields;
    }
    if (cVar1 != '\0') {
      if ((((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer);
      }
      Map_CustomLogicAddonTransfer__Transfer(player,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicManager$$GetModeSettings
// il2cpp: System_Collections_Generic_Dictionary_string__BaseSetting__o* CustomLogic_CustomLogicManager__GetModeSettings (System_String_o* source, const MethodInfo* method);
// 0x5b77370

System_Collections_Generic_Dictionary_string__BaseSetting__o *
CustomLogic_CustomLogicManager__GetModeSettings(System_String_o *source,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSVar1;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547381 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07547381 = '\x01';
    in_RDX = extraout_RDX;
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    in_RDX = extraout_RDX_00;
  }
  method_00 = (MethodInfo *)0x0;
  __this = CustomLogic_CustomLogicManager__GetEditorEvaluator(source,false,in_RDX);
  if (__this == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = CustomLogic_CustomLogicEvaluator__GetModeSettings(__this,method_00);
  return pSVar1;
}


// CustomLogic.CustomLogicManager$$GetAddonSettings
// il2cpp: System_Collections_Generic_Dictionary_string__BaseSetting__o* CustomLogic_CustomLogicManager__GetAddonSettings (System_String_o* addonName, System_String_o* source, const MethodInfo* method);
// 0x5b77ae0
// eh: try 0x5b77dde..0x5b77e01 -> pad 0x5b77e67 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b77e7f..0x5b77e84 -> pad 0x5b77ea3 cleanup
// eh: try 0x5b77ea6..0x5b77eb0 -> pad 0x5b77eb8 catch (...) [compiler noexcept guard]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b77e65: jmp 0x5b77e67
// asm:   0x5b77e67: mov rbx, rax
// asm:   0x5b77e6a: cmp edx, 1
// asm:   0x5b77e6d: jne 0x5b77ea6
// asm:   0x5b77e6f: mov rdi, rbx
// asm:   0x5b77e72: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b77e77: mov rbx, qword ptr [rax]
// asm:   0x5b77e7a: mov qword ptr [rsp + 0x28], rbx
// asm:   0x5b77e7f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b77e84: lea rax, [rip + 0x1717e55]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_BaseSett
// asm:   0x5b77e8b: mov rsi, qword ptr [rax]
// asm:   0x5b77e8e: mov rdi, rsp
// asm:   0x5b77e91: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x5b77e96: test rbx, rbx
// asm:   0x5b77e99: je 0x5b77e2a
// asm:   0x5b77e9b: mov rdi, rbx
// asm:   0x5b77e9e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b77ea3: mov rbx, rax
// asm:   0x5b77ea6: lea rdi, [rsp + 0x28]
// asm:   0x5b77eab: call 0x2fd75a0  ; il2cpp_runtime_helper_02fd75a0()
// asm:   0x5b77eb0: mov rdi, rbx
// asm:   0x5b77eb3: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b77eb8: mov rdi, rax
// asm:   0x5b77ebb: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_Dictionary_string__BaseSetting__o *
CustomLogic_CustomLogicManager__GetAddonSettings
          (System_String_o *addonName,System_String_o *source,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  CustomLogic_CustomLogicCompiler_o *__this;
  CustomLogic_CustomLogicSourceFile_o *file;
  System_String_o *pSVar3;
  MethodInfo *pMVar4;
  CustomLogic_CustomLogicLexer_o *__this_00;
  CustomLogic_CustomLogicParser_o *__this_01;
  CustomLogic_CustomLogicEvaluator_o *__this_02;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *__this_03;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_04;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *__this_05;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o SStack_68;
  System_String_o *pSStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  pMVar4 = (MethodInfo *)source;
  pSStack_48 = addonName;
  if (Il2CppMethodInitialized_07547382 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCompiler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLexer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicParser);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSourceFile);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Keys
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_BaseSett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_BaseSett_718fce8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_BaseSett_718fcf0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_Dictionary_string_BaseSetting_GetEnum
              );
    il2cpp_codegen_initialize_runtime_metadata(&".cl");
    il2cpp_codegen_initialize_runtime_metadata(&"BaseLogic.cl");
    Il2CppMethodInitialized_07547382 = '\x01';
  }
  SStack_68.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  SStack_68.fields._index = 0;
  SStack_68.fields._version = 0;
  SStack_68.fields._currentKey = (Il2CppObject *)0x0;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCompiler);
  CustomLogic_CustomLogicCompiler___ctor(__this,pMVar4);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pSVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->BaseLogic;
  file = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSourceFile);
  pSVar1 = "BaseLogic.cl";
  System_Object___ctor((Il2CppObject *)file,(MethodInfo *)0x0);
  (file->fields)._Name_k__BackingField = pSVar1;
  Il2CppCodeGenWriteBarrier(&(file->fields)._Name_k__BackingField);
  (file->fields)._Content_k__BackingField = pSVar3;
  Il2CppCodeGenWriteBarrier(&(file->fields)._Content_k__BackingField);
  (file->fields)._Type_k__BackingField = 1;
  (file->fields)._StartLine_k__BackingField = 0;
  (file->fields)._EndLine_k__BackingField = 0;
  (file->fields)._MapLogicOffset_k__BackingField = 0;
  if (__this != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    CustomLogic_CustomLogicCompiler__AddSourceFile(__this,file,method_00);
    pSVar3 = System_String__Concat_52f0320(pSStack_48,".cl",(MethodInfo *)0x0);
    pMVar4 = (MethodInfo *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSourceFile);
    System_Object___ctor((Il2CppObject *)pMVar4,(MethodInfo *)0x0);
    ((CustomLogic_CustomLogicSourceFile_Fields *)&pMVar4->invoker_method)->_Name_k__BackingField = pSVar3;
    Il2CppCodeGenWriteBarrier((void **)&pMVar4->invoker_method);
    pMVar4->name = (char *)source;
    Il2CppCodeGenWriteBarrier(&pMVar4->name);
    pMVar4->klass = (Il2CppClass *)0x2;
    pMVar4->return_type = (Il2CppType *)0x0;
    CustomLogic_CustomLogicCompiler__AddSourceFile
              (__this,(CustomLogic_CustomLogicSourceFile_o *)pMVar4,method_01);
    pMVar4 = (MethodInfo *)CustomLogic_CustomLogicCompiler__Compile(__this,pMVar4);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLexer);
    CustomLogic_CustomLogicLexer___ctor(__this_00,(System_String_o *)pMVar4,__this,in_RCX);
    if (__this_00 != (CustomLogic_CustomLogicLexer_o *)0x0) {
      pMVar4 = (MethodInfo *)CustomLogic_CustomLogicLexer__GetTokens(__this_00,pMVar4);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicParser);
      CustomLogic_CustomLogicParser___ctor
                (__this_01,(System_Collections_Generic_List_CustomLogicToken__o *)pMVar4,__this,in_RCX);
      if (__this_01 != (CustomLogic_CustomLogicParser_o *)0x0) {
        pMVar4 = (MethodInfo *)CustomLogic_CustomLogicParser__GetStartAst(__this_01,pMVar4);
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        CustomLogic_CustomLogicEvaluator___ctor
                  (__this_02,(CustomLogic_CustomLogicStartAst_o *)pMVar4,__this,in_RCX);
        if (__this_02 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          __this_03 = CustomLogic_CustomLogicEvaluator__GetAddonSettings(__this_02,pMVar4);
          if (__this_03 !=
              (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)0x0) {
            __this_04 = System_Collections_Generic_Dictionary_object__object___get_Keys
                                  ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                                   (MethodInfo_4AAD0F0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Keys
                                  );
            if (__this_04 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
              System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                        (&SStack_68,__this_04,
                         (MethodInfo_511A520 *)
                         MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_Dictionary_string_BaseSetting_GetEnum
                        );
              uStack_40 = 0;
              puStack_38 = (undefined1 *)&SStack_68;
              bVar2 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                                (&SStack_68,
                                 (MethodInfo_4CE7080 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_BaseSett_718fce8
                                );
              if (bVar2) {
                __this_05 = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)
                            System_Collections_Generic_Dictionary_object__object___get_Item
                                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                                       SStack_68.fields._currentKey,
                                       (MethodInfo_4AAD450 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Item
                                      );
                System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                          (&SStack_68,
                           (MethodInfo_4CE7070 *)
                           MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_BaseSett
                          );
              }
              else {
                System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                          (&SStack_68,
                           (MethodInfo_4CE7070 *)
                           MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_BaseSett
                          );
                __this_05 = il2cpp_codegen_object_new
                                      ((Il2CppClass *)
                                       TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
                System_Collections_Generic_Dictionary_object__object____ctor
                          ((System_Collections_Generic_Dictionary_object__object__o *)__this_05,
                           (MethodInfo_4AAC8D0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor);
              }
              return __this_05;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicManager$$GetAddonSettingsGrouped
// il2cpp: System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o* CustomLogic_CustomLogicManager__GetAddonSettingsGrouped (System_String_o* addonName, System_String_o* source, const MethodInfo* method);
// 0x5b78f50

System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *
CustomLogic_CustomLogicManager__GetAddonSettingsGrouped
          (System_String_o *addonName,System_String_o *source,MethodInfo *method)

{
  System_String_o *pSVar1;
  CustomLogic_CustomLogicCompiler_o *__this;
  CustomLogic_CustomLogicSourceFile_o *file;
  System_String_o *pSVar2;
  MethodInfo *pMVar3;
  CustomLogic_CustomLogicLexer_o *__this_00;
  CustomLogic_CustomLogicParser_o *__this_01;
  CustomLogic_CustomLogicEvaluator_o *__this_02;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *pSVar4;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  pMVar3 = (MethodInfo *)source;
  if (Il2CppMethodInitialized_07547383 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCompiler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLexer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicParser);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSourceFile);
    il2cpp_codegen_initialize_runtime_metadata(&".cl");
    il2cpp_codegen_initialize_runtime_metadata(&"BaseLogic.cl");
    Il2CppMethodInitialized_07547383 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCompiler);
  CustomLogic_CustomLogicCompiler___ctor(__this,pMVar3);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pSVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->BaseLogic;
  file = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSourceFile);
  pSVar1 = "BaseLogic.cl";
  System_Object___ctor((Il2CppObject *)file,(MethodInfo *)0x0);
  (file->fields)._Name_k__BackingField = pSVar1;
  Il2CppCodeGenWriteBarrier(&(file->fields)._Name_k__BackingField);
  (file->fields)._Content_k__BackingField = pSVar2;
  Il2CppCodeGenWriteBarrier(&(file->fields)._Content_k__BackingField);
  (file->fields)._Type_k__BackingField = 1;
  (file->fields)._StartLine_k__BackingField = 0;
  (file->fields)._EndLine_k__BackingField = 0;
  (file->fields)._MapLogicOffset_k__BackingField = 0;
  if (__this != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    CustomLogic_CustomLogicCompiler__AddSourceFile(__this,file,method_00);
    pSVar2 = System_String__Concat_52f0320(addonName,".cl",(MethodInfo *)0x0);
    pMVar3 = (MethodInfo *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSourceFile);
    System_Object___ctor((Il2CppObject *)pMVar3,(MethodInfo *)0x0);
    ((CustomLogic_CustomLogicSourceFile_Fields *)&pMVar3->invoker_method)->_Name_k__BackingField = pSVar2;
    Il2CppCodeGenWriteBarrier((void **)&pMVar3->invoker_method);
    pMVar3->name = (char *)source;
    Il2CppCodeGenWriteBarrier(&pMVar3->name);
    pMVar3->klass = (Il2CppClass *)0x2;
    pMVar3->return_type = (Il2CppType *)0x0;
    CustomLogic_CustomLogicCompiler__AddSourceFile
              (__this,(CustomLogic_CustomLogicSourceFile_o *)pMVar3,method_01);
    pMVar3 = (MethodInfo *)CustomLogic_CustomLogicCompiler__Compile(__this,pMVar3);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLexer);
    CustomLogic_CustomLogicLexer___ctor(__this_00,(System_String_o *)pMVar3,__this,in_RCX);
    if (__this_00 != (CustomLogic_CustomLogicLexer_o *)0x0) {
      pMVar3 = (MethodInfo *)CustomLogic_CustomLogicLexer__GetTokens(__this_00,pMVar3);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicParser);
      CustomLogic_CustomLogicParser___ctor
                (__this_01,(System_Collections_Generic_List_CustomLogicToken__o *)pMVar3,__this,in_RCX);
      if (__this_01 != (CustomLogic_CustomLogicParser_o *)0x0) {
        pMVar3 = (MethodInfo *)CustomLogic_CustomLogicParser__GetStartAst(__this_01,pMVar3);
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        CustomLogic_CustomLogicEvaluator___ctor
                  (__this_02,(CustomLogic_CustomLogicStartAst_o *)pMVar3,__this,in_RCX);
        if (__this_02 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pSVar4 = CustomLogic_CustomLogicEvaluator__GetAddonSettings(__this_02,pMVar3);
          return pSVar4;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicManager$$GetSelectedAddonSettings
// il2cpp: System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o* CustomLogic_CustomLogicManager__GetSelectedAddonSettings (System_Collections_Generic_List_string__o* addonNames, const MethodInfo* method);
// 0x5b79190
// eh: try 0x5b7930a..0x5b79484 -> pad 0x5b794ad (+14 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b7948f..0x5b79499 -> pad 0x5b79501 catch (...) [compiler noexcept guard]
// eh: try 0x5b794c8..0x5b794cd -> pad 0x5b794ec cleanup
// eh: try 0x5b794ef..0x5b794f9 -> pad 0x5b79501 catch (...) [compiler noexcept guard]
// asm: 55 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b793c6: nop word ptr cs:[rax + rax]
// asm:   0x5b79422: jmp 0x5b79477
// asm:   0x5b7942b: jmp 0x5b79431
// asm:   0x5b7942d: jmp 0x5b79431
// asm:   0x5b7942f: jmp 0x5b79431
// asm:   0x5b79431: mov rbp, rdx
// asm:   0x5b79434: mov rbx, rax
// asm:   0x5b79437: cmp ebp, 1
// asm:   0x5b7943a: jne 0x5b7948f
// asm:   0x5b7943c: mov rdi, rbx
// asm:   0x5b7943f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b79444: mov rbx, qword ptr [rax]
// asm:   0x5b79447: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5b7944c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b79451: jmp 0x5b79407
// asm:   0x5b79477: mov rdi, rbx
// asm:   0x5b7947a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b79489: mov rbp, rdx
// asm:   0x5b7948c: mov rbx, rax
// asm:   0x5b7948f: lea rdi, [rsp + 0x18]
// asm:   0x5b79494: call 0x2fd75d0  ; il2cpp_runtime_helper_02fd75d0()
// asm:   0x5b79499: jmp 0x5b794b3
// asm:   0x5b7949b: jmp 0x5b794ad
// asm:   0x5b7949d: jmp 0x5b794ad
// asm:   0x5b7949f: jmp 0x5b794ad
// asm:   0x5b794a1: jmp 0x5b794ad
// asm:   0x5b794a3: jmp 0x5b794ad
// asm:   0x5b794a5: jmp 0x5b794ad
// asm:   0x5b794a7: jmp 0x5b794ad
// asm:   0x5b794a9: jmp 0x5b794ad
// asm:   0x5b794ab: jmp 0x5b794ad
// asm:   0x5b794ad: mov rbp, rdx
// asm:   0x5b794b0: mov rbx, rax
// asm:   0x5b794b3: cmp ebp, 1
// asm:   0x5b794b6: jne 0x5b794ef
// asm:   0x5b794b8: mov rdi, rbx
// asm:   0x5b794bb: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b794c0: mov rbx, qword ptr [rax]
// asm:   0x5b794c3: mov qword ptr [rsp + 0x40], rbx
// asm:   0x5b794c8: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b794cd: lea rax, [rip + 0x1715624]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5b794d4: mov rsi, qword ptr [rax]
// asm:   0x5b794d7: mov rdi, rsp
// asm:   0x5b794da: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b794df: test rbx, rbx
// asm:   0x5b794e2: je 0x5b79465
// asm:   0x5b794e4: mov rdi, rbx
// asm:   0x5b794e7: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b794ec: mov rbx, rax
// asm:   0x5b794ef: lea rdi, [rsp + 0x40]
// asm:   0x5b794f4: call 0x2fd7600  ; il2cpp_runtime_helper_02fd7600()
// asm:   0x5b794f9: mov rdi, rbx
// asm:   0x5b794fc: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b79501: mov rdi, rax
// asm:   0x5b79504: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *
CustomLogic_CustomLogicManager__GetSelectedAddonSettings
          (System_Collections_Generic_List_string__o *addonNames,MethodInfo *method)

{
  System_String_o *name;
  bool bVar1;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *__this;
  System_String_o *value;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  undefined1 auStack_a8 [16];
  System_String_o *pSStack_98;
  undefined1 auStack_90 [16];
  System_String_o *pSStack_80;
  Il2CppObject *pIStack_78;
  int32_t iStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined1 auStack_58 [8];
  System_Collections_Generic_Dictionary_Enumerator_object__object__o *pSStack_50;
  System_String_o *pSStack_48;
  Il2CppObject *pIStack_40;
  undefined8 uStack_38;
  
  if (Il2CppMethodInitialized_07547384 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Dictionary_string_BaseSetting_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Dictionary_string_BaseSetting_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Dictionary_string_BaseSetting_get_Curren
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_KeyValuePair_string_Dictionary_string_BaseSetting_get_Key
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_KeyValuePair_string_Dictionary_string_BaseSetting_get_Value
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    Il2CppMethodInitialized_07547384 = '\x01';
  }
  pSStack_48 = (System_String_o *)0x0;
  pIStack_40 = (Il2CppObject *)0x0;
  auStack_58 = (undefined1  [8])0x0;
  pSStack_50 = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)0x0;
  uStack_38._0_4_ = 0;
  uStack_38._4_4_ = 0;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_ctor);
  if (addonNames == (System_Collections_Generic_List_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_90,
             (System_Collections_Generic_List_object__o *)addonNames,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
  puStack_60 = auStack_a8;
  pSStack_98 = pSStack_80;
  auStack_a8._0_8_ = auStack_90._0_8_;
  auStack_a8._8_8_ = auStack_90._8_8_;
  uStack_68 = 0;
  while( true ) {
    do {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)auStack_a8,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
      name = pSStack_98;
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o *)auStack_a8,
                   (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose)
        ;
        return __this;
      }
      if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
      }
      value = Map_BuiltinLevels__LoadAddon(name,(MethodInfo *)0x0);
      bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    } while (bVar1);
    method_00 = extraout_RDX;
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      method_00 = extraout_RDX_00;
    }
    __this_00 = CustomLogic_CustomLogicManager__GetAddonSettingsGrouped(name,value,method_00);
    if (__this_00 == (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)0x0)
    break;
    System_Collections_Generic_Dictionary_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_90,
               (System_Collections_Generic_Dictionary_object__object__o *)__this_00,
               (MethodInfo_4AAD970 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_GetEnumerator
              );
    uStack_38._0_4_ = iStack_70;
    uStack_38._4_4_ = uStack_6c;
    pSStack_48 = pSStack_80;
    pIStack_40 = pIStack_78;
    auStack_58 = (undefined1  [8])auStack_90._0_8_;
    pSStack_50 = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)auStack_90._8_8_;
    auStack_90._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    auStack_90._8_8_ = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)auStack_58;
    if (__this == (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)0x0) {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)auStack_58,
                         (MethodInfo_4CE66D0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Dictionary_string_BaseSetting_MoveNext
                        );
      if (bVar1) {
        ThrowNullReferenceException();
      }
    }
    else {
      while (bVar1 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                               ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)
                                auStack_58,
                                (MethodInfo_4CE66D0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Dictionary_string_BaseSetting_MoveNext
                               ), bVar1) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                   (Il2CppObject *)pSStack_48,pIStack_40,
                   (MethodInfo_4AAD4C0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_set_Item
                  );
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)auStack_58,
               (MethodInfo_4CE67F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Dictionary_string_BaseSetting_Dispose
              );
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicManager$$GetModeDescription
// il2cpp: System_String_o* CustomLogic_CustomLogicManager__GetModeDescription (System_Collections_Generic_Dictionary_string__BaseSetting__o* settings, const MethodInfo* method);
// 0x5b79510

System_String_o *
CustomLogic_CustomLogicManager__GetModeDescription
          (System_Collections_Generic_Dictionary_string__BaseSetting__o *settings,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Settings_BaseSetting_o *pSVar3;
  System_String_o **ppSVar4;
  
  if (Il2CppMethodInitialized_07547385 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Description");
    Il2CppMethodInitialized_07547385 = '\x01';
  }
  if (settings == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
label_05b7963a:
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    ((System_Collections_Generic_Dictionary_object__object__o *)settings,
                     (Il2CppObject *)"Description",
                     (MethodInfo_4AAD6F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ContainsKey);
  ppSVar4 = &"";
  if (bVar2) {
    pSVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)settings,
                        (Il2CppObject *)"Description",
                        (MethodInfo_4AAD450 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item);
    if (pSVar3 != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
      if ((bVar1 <= (pSVar3->klass->_2).typeHierarchyDepth) &&
         ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
        pSVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                           ((System_Collections_Generic_Dictionary_object__object__o *)settings,
                            (Il2CppObject *)"Description",
                            (MethodInfo_4AAD450 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item);
        if (pSVar3 == (Settings_BaseSetting_o *)0x0) goto label_05b7963a;
        bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
        if (((pSVar3->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
          il2cpp_codegen_raise_invalid_cast_exception(pSVar3);
        }
        ppSVar4 = &(*(uint64_t *)((char *)pSVar3 + 0x20));
      }
    }
  }
  return *ppSVar4;
}


// CustomLogic.CustomLogicManager$$GetEditorEvaluator
// il2cpp: CustomLogic_CustomLogicEvaluator_o* CustomLogic_CustomLogicManager__GetEditorEvaluator (System_String_o* source, bool loadBaseLogic, const MethodInfo* method);
// 0x5b773d0

CustomLogic_CustomLogicEvaluator_o *
CustomLogic_CustomLogicManager__GetEditorEvaluator
          (System_String_o *source,bool loadBaseLogic,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  CustomLogic_CustomLogicCompiler_o *__this;
  CustomLogic_CustomLogicSourceFile_o *file;
  MethodInfo *pMVar3;
  CustomLogic_CustomLogicLexer_o *__this_00;
  CustomLogic_CustomLogicParser_o *__this_01;
  CustomLogic_CustomLogicStartAst_o *start;
  CustomLogic_CustomLogicEvaluator_o *__this_02;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined7 in_register_00000031;
  
  pMVar3 = (MethodInfo *)CONCAT71(in_register_00000031,loadBaseLogic);
  if (Il2CppMethodInitialized_07547386 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCompiler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLexer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicParser);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSourceFile);
    il2cpp_codegen_initialize_runtime_metadata(&"UserSource.cl");
    il2cpp_codegen_initialize_runtime_metadata(&"BaseLogic.cl");
    Il2CppMethodInitialized_07547386 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCompiler);
  CustomLogic_CustomLogicCompiler___ctor(__this,pMVar3);
  if (loadBaseLogic) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pSVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->BaseLogic;
    file = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSourceFile);
    pSVar2 = "BaseLogic.cl";
    System_Object___ctor((Il2CppObject *)file,(MethodInfo *)0x0);
    (file->fields)._Name_k__BackingField = pSVar2;
    Il2CppCodeGenWriteBarrier(&(file->fields)._Name_k__BackingField);
    (file->fields)._Content_k__BackingField = pSVar1;
    Il2CppCodeGenWriteBarrier(&(file->fields)._Content_k__BackingField);
    (file->fields)._Type_k__BackingField = 1;
    (file->fields)._StartLine_k__BackingField = 0;
    (file->fields)._EndLine_k__BackingField = 0;
    (file->fields)._MapLogicOffset_k__BackingField = 0;
    if (__this == (CustomLogic_CustomLogicCompiler_o *)0x0) goto label_05b77600;
    CustomLogic_CustomLogicCompiler__AddSourceFile(__this,file,method_00);
  }
  pMVar3 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSourceFile);
  pSVar1 = "UserSource.cl";
  System_Object___ctor((Il2CppObject *)pMVar3,(MethodInfo *)0x0);
  ((CustomLogic_CustomLogicSourceFile_Fields *)&pMVar3->invoker_method)->_Name_k__BackingField = pSVar1;
  Il2CppCodeGenWriteBarrier((void **)&pMVar3->invoker_method);
  pMVar3->name = (char *)source;
  Il2CppCodeGenWriteBarrier(&pMVar3->name);
  pMVar3->klass = (Il2CppClass *)0x4;
  pMVar3->return_type = (Il2CppType *)0x0;
  if (__this != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    CustomLogic_CustomLogicCompiler__AddSourceFile
              (__this,(CustomLogic_CustomLogicSourceFile_o *)pMVar3,method_01);
    pMVar3 = (MethodInfo *)CustomLogic_CustomLogicCompiler__Compile(__this,pMVar3);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLexer);
    CustomLogic_CustomLogicLexer___ctor(__this_00,(System_String_o *)pMVar3,__this,in_RCX);
    if (__this_00 != (CustomLogic_CustomLogicLexer_o *)0x0) {
      pMVar3 = (MethodInfo *)CustomLogic_CustomLogicLexer__GetTokens(__this_00,pMVar3);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicParser);
      CustomLogic_CustomLogicParser___ctor
                (__this_01,(System_Collections_Generic_List_CustomLogicToken__o *)pMVar3,__this,in_RCX);
      if (__this_01 != (CustomLogic_CustomLogicParser_o *)0x0) {
        start = CustomLogic_CustomLogicParser__GetStartAst(__this_01,pMVar3);
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        CustomLogic_CustomLogicEvaluator___ctor(__this_02,start,__this,in_RCX);
        return __this_02;
      }
    }
  }
label_05b77600:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicManager$$TryParseLogic
// il2cpp: System_String_o* CustomLogic_CustomLogicManager__TryParseLogic (System_String_o* source, const MethodInfo* method);
// 0x5b79650

System_String_o * CustomLogic_CustomLogicManager__TryParseLogic(System_String_o *source,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  bool bVar3;
  CustomLogic_CustomLogicCompiler_o *__this;
  CustomLogic_CustomLogicSourceFile_o *file;
  MethodInfo *pMVar4;
  CustomLogic_CustomLogicLexer_o *__this_00;
  System_Collections_Generic_List_CustomLogicToken__o *tokens;
  CustomLogic_CustomLogicParser_o *__this_01;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_o **ppSVar5;
  
  if (Il2CppMethodInitialized_07547387 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCompiler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLexer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicParser);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSourceFile);
    il2cpp_codegen_initialize_runtime_metadata(&"UserSource.cl");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"BaseLogic.cl");
    Il2CppMethodInitialized_07547387 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCompiler);
  CustomLogic_CustomLogicCompiler___ctor(__this,method);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pSVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->BaseLogic;
  file = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSourceFile);
  pSVar2 = "BaseLogic.cl";
  System_Object___ctor((Il2CppObject *)file,(MethodInfo *)0x0);
  (file->fields)._Name_k__BackingField = pSVar2;
  Il2CppCodeGenWriteBarrier(&(file->fields)._Name_k__BackingField);
  (file->fields)._Content_k__BackingField = pSVar1;
  Il2CppCodeGenWriteBarrier(&(file->fields)._Content_k__BackingField);
  (file->fields)._Type_k__BackingField = 1;
  (file->fields)._StartLine_k__BackingField = 0;
  (file->fields)._EndLine_k__BackingField = 0;
  (file->fields)._MapLogicOffset_k__BackingField = 0;
  if (__this != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    CustomLogic_CustomLogicCompiler__AddSourceFile(__this,file,method_00);
    pMVar4 = (MethodInfo *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSourceFile);
    pSVar1 = "UserSource.cl";
    System_Object___ctor((Il2CppObject *)pMVar4,(MethodInfo *)0x0);
    ((CustomLogic_CustomLogicSourceFile_Fields *)&pMVar4->invoker_method)->_Name_k__BackingField = pSVar1;
    Il2CppCodeGenWriteBarrier((void **)&pMVar4->invoker_method);
    pMVar4->name = (char *)source;
    Il2CppCodeGenWriteBarrier(&pMVar4->name);
    pMVar4->klass = (Il2CppClass *)0x4;
    pMVar4->return_type = (Il2CppType *)0x0;
    CustomLogic_CustomLogicCompiler__AddSourceFile
              (__this,(CustomLogic_CustomLogicSourceFile_o *)pMVar4,method_01);
    pMVar4 = (MethodInfo *)CustomLogic_CustomLogicCompiler__Compile(__this,pMVar4);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLexer);
    CustomLogic_CustomLogicLexer___ctor(__this_00,(System_String_o *)pMVar4,__this,in_RCX);
    if (__this_00 != (CustomLogic_CustomLogicLexer_o *)0x0) {
      tokens = CustomLogic_CustomLogicLexer__GetTokens(__this_00,pMVar4);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicParser);
      CustomLogic_CustomLogicParser___ctor(__this_01,tokens,__this,in_RCX);
      pMVar4 = (MethodInfo *)**(undefined8 **)(g_data_07556758 + 0xb8);
      bVar3 = System_String__op_Inequality
                        ((__this_00->fields).Error,(System_String_o *)pMVar4,(MethodInfo *)0x0);
      if (bVar3) {
        ppSVar5 = &(__this_00->fields).Error;
      }
      else {
        if (__this_01 == (CustomLogic_CustomLogicParser_o *)0x0) goto label_05b798a5;
        CustomLogic_CustomLogicParser__GetStartAst(__this_01,pMVar4);
        bVar3 = System_String__op_Inequality
                          ((__this_01->fields).Error,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8)
                           ,(MethodInfo *)0x0);
        if (bVar3) {
          ppSVar5 = &(__this_01->fields).Error;
        }
        else {
          ppSVar5 = &"";
        }
      }
      return *ppSVar5;
    }
  }
label_05b798a5:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicManager$$StartLogic
// il2cpp: void CustomLogic_CustomLogicManager__StartLogic (System_Collections_Generic_Dictionary_string__BaseSetting__o* modeSettings, System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o* addonSettings, const MethodInfo* method);
// 0x5b798b0
// eh: try 0x5b79c54..0x5b7a21f -> pad 0x5b7a238 (+12 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b7a259..0x5b7a25e -> pad 0x5b7a283 cleanup
// eh: try 0x5b7a286..0x5b7a290 -> pad 0x5b7a298 catch (...) [compiler noexcept guard]
// asm: 37 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b79b50: jmp 0x5b79b6a
// asm:   0x5b79e7b: jmp 0x5b79fb9
// asm:   0x5b7a224: jmp 0x5b7a23a
// asm:   0x5b7a226: jmp 0x5b7a23a
// asm:   0x5b7a228: jmp 0x5b7a23a
// asm:   0x5b7a22a: jmp 0x5b7a23a
// asm:   0x5b7a22c: jmp 0x5b7a23a
// asm:   0x5b7a22e: jmp 0x5b7a23a
// asm:   0x5b7a230: jmp 0x5b7a23a
// asm:   0x5b7a232: jmp 0x5b7a23a
// asm:   0x5b7a234: jmp 0x5b7a23a
// asm:   0x5b7a236: jmp 0x5b7a23a
// asm:   0x5b7a238: jmp 0x5b7a23a
// asm:   0x5b7a23a: mov rbx, rax
// asm:   0x5b7a23d: lea rbp, [rip + 0x16fbf6c]  ; TypeInfo_Map_BuiltinLevels
// asm:   0x5b7a244: cmp edx, 1
// asm:   0x5b7a247: jne 0x5b7a286
// asm:   0x5b7a249: mov rdi, rbx
// asm:   0x5b7a24c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b7a251: mov rbx, qword ptr [rax]
// asm:   0x5b7a254: mov qword ptr [rsp + 0x28], rbx
// asm:   0x5b7a259: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b7a25e: lea rax, [rip + 0x1714893]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5b7a265: mov rsi, qword ptr [rax]
// asm:   0x5b7a268: lea rdi, [rsp + 0x10]
// asm:   0x5b7a26d: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b7a272: test rbx, rbx
// asm:   0x5b7a275: je 0x5b79de7
// asm:   0x5b7a27b: mov rdi, rbx
// asm:   0x5b7a27e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b7a283: mov rbx, rax
// asm:   0x5b7a286: lea rdi, [rsp + 0x28]
// asm:   0x5b7a28b: call 0x2fd7630  ; il2cpp_runtime_helper_02fd7630()
// asm:   0x5b7a290: mov rdi, rbx
// asm:   0x5b7a293: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b7a298: mov rdi, rax
// asm:   0x5b7a29b: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicManager__StartLogic
               (System_Collections_Generic_Dictionary_string__BaseSetting__o *modeSettings,
               System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *addonSettings
               ,MethodInfo *method)

{
  int32_t iVar1;
  CustomLogic_CustomLogicManager_StaticFields *pCVar2;
  System_String_o *pSVar3;
  Settings_InGameSet_o *pSVar4;
  Settings_InGameGeneralSettings_o *pSVar5;
  Settings_ListSetting_StringSetting__o *pSVar6;
  System_Collections_Generic_List_T__o *source;
  Il2CppObject *object;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Settings_StringSetting_o *pSVar7;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *addonSettings_00;
  bool bVar8;
  CustomLogic_CustomLogicCompiler_o *pCVar9;
  CustomLogic_CustomLogicSourceFile_o *pCVar10;
  CustomLogic_CustomLogicManager___c_StaticFields *pCVar11;
  System_Func_StringSetting__string__o *__this_00;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Collections_Generic_List_TSource__o *__this_01;
  System_String_o *pSVar12;
  Map_MapScript_o *pMVar13;
  MethodInfo *pMVar14;
  CustomLogic_CustomLogicLexer_o *__this_02;
  CustomLogic_CustomLogicParser_o *__this_03;
  CustomLogic_CustomLogicStartAst_o *start;
  CustomLogic_CustomLogicEvaluator_o *pCVar15;
  MethodInfo **method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  System_String_o *local_78;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *local_70;
  undefined1 local_68 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_60;
  System_String_o *local_58;
  undefined1 local_50 [16];
  System_String_o *local_40;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *local_38;
  
  pMVar14 = (MethodInfo *)addonSettings;
  local_38 = modeSettings;
  if (Il2CppMethodInitialized_07547388 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCompiler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLexer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicParser);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSourceFile);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_StringSetting_string)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_StringSetting_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicManager_c_StartLogic_b__49_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager_c);
    il2cpp_codegen_initialize_runtime_metadata(&"MapLogic");
    il2cpp_codegen_initialize_runtime_metadata(&".txt");
    il2cpp_codegen_initialize_runtime_metadata(&".cl");
    il2cpp_codegen_initialize_runtime_metadata(&"BaseLogic.cl");
    il2cpp_codegen_initialize_runtime_metadata(&".addon");
    Il2CppMethodInitialized_07547388 = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_58 = (System_String_o *)0x0;
  local_78 = (System_String_o *)0x0;
  pCVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCompiler);
  CustomLogic_CustomLogicCompiler___ctor(pCVar9,pMVar14);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
  pCVar2->Compiler = pCVar9;
  Il2CppCodeGenWriteBarrier(&pCVar2->Compiler);
  pSVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->BaseLogic;
  pCVar9 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Compiler;
  pCVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSourceFile);
  pSVar12 = "BaseLogic.cl";
  System_Object___ctor((Il2CppObject *)pCVar10,(MethodInfo *)0x0);
  (pCVar10->fields)._Name_k__BackingField = pSVar12;
  Il2CppCodeGenWriteBarrier(&(pCVar10->fields)._Name_k__BackingField);
  (pCVar10->fields)._Content_k__BackingField = pSVar3;
  Il2CppCodeGenWriteBarrier(&(pCVar10->fields)._Content_k__BackingField);
  (pCVar10->fields)._Type_k__BackingField = 1;
  (pCVar10->fields)._StartLine_k__BackingField = 0;
  (pCVar10->fields)._EndLine_k__BackingField = 0;
  (pCVar10->fields)._MapLogicOffset_k__BackingField = 0;
  if (pCVar9 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    CustomLogic_CustomLogicCompiler__AddSourceFile(pCVar9,pCVar10,method_01);
    pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
    if (((pSVar4 != (Settings_InGameSet_o *)0x0) &&
        (pSVar5 = (pSVar4->fields).General, pSVar5 != (Settings_InGameGeneralSettings_o *)0x0)) &&
       (pSVar6 = (pSVar5->fields).Addons, pSVar6 != (Settings_ListSetting_StringSetting__o *)0x0)) {
      source = (pSVar6->fields)._value;
      if ((TypeInfo_CustomLogic_CustomLogicManager_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager_c);
        pCVar11 = TypeInfo_CustomLogic_CustomLogicManager_c->static_fields;
        __this_00 = pCVar11->__9__49_0;
      }
      else {
        pCVar11 = TypeInfo_CustomLogic_CustomLogicManager_c->static_fields;
        __this_00 = pCVar11->__9__49_0;
      }
      if (__this_00 == (System_Func_StringSetting__string__o *)0x0) {
        if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager_c)->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager_c);
          pCVar11 = TypeInfo_CustomLogic_CustomLogicManager_c->static_fields;
        }
        object = (Il2CppObject *)pCVar11->__9;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_StringSetting_string);
        System_Func_object__object____ctor
                  ((System_Func_object__object__o *)__this_00,object,
                   (intptr_t)MethodInfo_CustomLogic_CustomLogicManager_c_StartLogic_b__49_0,
                   (MethodInfo_4F19B50 *)0x0);
        pCVar11 = TypeInfo_CustomLogic_CustomLogicManager_c->static_fields;
        pCVar11->__9__49_0 = __this_00;
        Il2CppCodeGenWriteBarrier(&pCVar11->__9__49_0);
      }
      local_70 = addonSettings;
      source_00 = System_Linq_Enumerable__Select_object__object_
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                             (System_Func_TSource__TResult__o *)__this_00,
                             (MethodInfo_34F60F0 *)
                             MethodInfo_System_Linq_Enumerable_Select_StringSetting_string);
      __this_01 = System_Linq_Enumerable__ToList_object_
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                             (MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_string);
      if (__this_01 != (System_Collections_Generic_List_TSource__o *)0x0) {
        method_00 = &MethodInfo_System_Collections_Generic_List_string_GetEnumerator;
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_50,
                   (System_Collections_Generic_List_object__o *)__this_01,
                   (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
        local_58 = local_40;
        local_68 = (undefined1  [8])local_50._0_8_;
        pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)local_50._8_8_;
        local_50._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_50._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_68;
        while( true ) {
          bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                             (MethodInfo_4C45C50 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
          pSVar3 = local_58;
          if (!bVar8) break;
          if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
          }
          bVar8 = Map_BuiltinLevels__IsAddonBuiltin(pSVar3,(MethodInfo *)0x0);
          if (bVar8) {
            if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
            }
            local_78 = Map_BuiltinLevels__LoadAddon(pSVar3,(MethodInfo *)0x0);
          }
          else {
            if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
            }
            __this = (System_Collections_Generic_Dictionary_object__object__o *)
                     TypeInfo_CustomLogic_CustomLogicManager->static_fields->CustomAddonSources;
            if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            method_00 = (MethodInfo **)
                        MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue;
            System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this,(Il2CppObject *)pSVar3,(Il2CppObject **)&local_78,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
          }
          bVar8 = System_String__IsNullOrEmpty(local_78,(MethodInfo *)0x0);
          if (!bVar8) {
            if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
            }
            pCVar9 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Compiler;
            pSVar12 = System_String__Concat_52f0320(pSVar3,".addon",(MethodInfo *)0x0);
            pSVar3 = local_78;
            pCVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSourceFile);
            System_Object___ctor((Il2CppObject *)pCVar10,(MethodInfo *)0x0);
            (pCVar10->fields)._Name_k__BackingField = pSVar12;
            Il2CppCodeGenWriteBarrier(&(pCVar10->fields)._Name_k__BackingField);
            (pCVar10->fields)._Content_k__BackingField = pSVar3;
            Il2CppCodeGenWriteBarrier(&(pCVar10->fields)._Content_k__BackingField);
            (pCVar10->fields)._Type_k__BackingField = 2;
            (pCVar10->fields)._StartLine_k__BackingField = 0;
            (pCVar10->fields)._EndLine_k__BackingField = 0;
            (pCVar10->fields)._MapLogicOffset_k__BackingField = 0;
            if (pCVar9 == (CustomLogic_CustomLogicCompiler_o *)0x0) {
              ThrowNullReferenceException();
            }
            CustomLogic_CustomLogicCompiler__AddSourceFile(pCVar9,pCVar10,method_02);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                   (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose)
        ;
        pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
        if (((pSVar4 != (Settings_InGameSet_o *)0x0) &&
            (pSVar5 = (pSVar4->fields).General, pSVar5 != (Settings_InGameGeneralSettings_o *)0x0)) &&
           (pSVar7 = (pSVar5->fields).GameMode, pSVar7 != (Settings_StringSetting_o *)0x0)) {
          pSVar3 = (pSVar7->fields)._value;
          if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
          }
          bVar8 = System_String__op_Equality
                            (pSVar3,TypeInfo_Map_BuiltinLevels->static_fields->UseMapLogic,(MethodInfo *)0x0);
          if (bVar8) {
            if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
              pMVar13 = TypeInfo_Map_MapManager->static_fields->MapScript;
            }
            else {
              pMVar13 = TypeInfo_Map_MapManager->static_fields->MapScript;
            }
            if (pMVar13 != (Map_MapScript_o *)0x0) {
              if ((((Il2CppClass *)TypeInfo_Map_MapManager)->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
                pMVar13 = TypeInfo_Map_MapManager->static_fields->MapScript;
                if (pMVar13 == (Map_MapScript_o *)0x0) goto label_05b7a21f;
              }
              pSVar3 = (pMVar13->fields).Logic;
              bVar8 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
              if (!bVar8) {
                pSVar7 = (pSVar5->fields).MapName;
                if (pSVar7 == (Settings_StringSetting_o *)0x0) goto label_05b7a21f;
                pSVar12 = (pSVar7->fields)._value;
                if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                }
                pCVar9 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Compiler;
                pSVar12 = System_String__Concat_52f0320(pSVar12,".txt",(MethodInfo *)0x0);
                if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
                }
                pMVar13 = TypeInfo_Map_MapManager->static_fields->MapScript;
                if (pMVar13 == (Map_MapScript_o *)0x0) goto label_05b7a21f;
                iVar1 = (pMVar13->fields).LogicStart;
                pCVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSourceFile)
                ;
                System_Object___ctor((Il2CppObject *)pCVar10,(MethodInfo *)0x0);
                (pCVar10->fields)._Name_k__BackingField = pSVar12;
                Il2CppCodeGenWriteBarrier(&(pCVar10->fields)._Name_k__BackingField);
                (pCVar10->fields)._Content_k__BackingField = pSVar3;
                Il2CppCodeGenWriteBarrier(&(pCVar10->fields)._Content_k__BackingField);
                (pCVar10->fields)._Type_k__BackingField = 3;
                (pCVar10->fields)._StartLine_k__BackingField = 0;
                (pCVar10->fields)._EndLine_k__BackingField = 0;
                (pCVar10->fields)._MapLogicOffset_k__BackingField = iVar1;
                if (pCVar9 == (CustomLogic_CustomLogicCompiler_o *)0x0) goto label_05b7a21f;
                CustomLogic_CustomLogicCompiler__AddSourceFile(pCVar9,pCVar10,method_03);
              }
            }
          }
          if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          }
          pMVar14 = (MethodInfo *)0x0;
          bVar8 = System_String__IsNullOrEmpty
                            (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Logic,(MethodInfo *)0x0);
          if (!bVar8) {
            pSVar7 = (pSVar5->fields).GameMode;
            if (pSVar7 == (Settings_StringSetting_o *)0x0) goto label_05b7a21f;
            pSVar3 = (pSVar7->fields)._value;
            if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
            }
            pMVar14 = (MethodInfo *)TypeInfo_Map_BuiltinLevels->static_fields->UseMapLogic;
            bVar8 = System_String__op_Equality(pSVar3,(System_String_o *)pMVar14,(MethodInfo *)0x0);
            if (!bVar8) {
              if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
              }
              pCVar9 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Compiler;
              pSVar12 = System_String__Concat_52f0320(pSVar3,".cl",(MethodInfo *)0x0);
              pSVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Logic;
              pMVar14 = (MethodInfo *)
                        il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSourceFile);
              System_Object___ctor((Il2CppObject *)pMVar14,(MethodInfo *)0x0);
              ((CustomLogic_CustomLogicSourceFile_Fields *)&pMVar14->invoker_method)->_Name_k__BackingField =
                   pSVar12;
              Il2CppCodeGenWriteBarrier((void **)&pMVar14->invoker_method);
              pMVar14->name = (char *)pSVar3;
              Il2CppCodeGenWriteBarrier(&pMVar14->name);
              pMVar14->klass = (Il2CppClass *)0x4;
              pMVar14->return_type = (Il2CppType *)0x0;
              if (pCVar9 == (CustomLogic_CustomLogicCompiler_o *)0x0) goto label_05b7a21f;
              CustomLogic_CustomLogicCompiler__AddSourceFile
                        (pCVar9,(CustomLogic_CustomLogicSourceFile_o *)pMVar14,method_04);
            }
          }
          if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          }
          addonSettings_00 = local_70;
          pCVar9 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Compiler;
          if (pCVar9 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
            pMVar14 = (MethodInfo *)CustomLogic_CustomLogicCompiler__Compile(pCVar9,pMVar14);
            pCVar9 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Compiler;
            __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLexer);
            CustomLogic_CustomLogicLexer___ctor
                      (__this_02,(System_String_o *)pMVar14,pCVar9,(MethodInfo *)method_00);
            if (__this_02 != (CustomLogic_CustomLogicLexer_o *)0x0) {
              pMVar14 = (MethodInfo *)CustomLogic_CustomLogicLexer__GetTokens(__this_02,pMVar14);
              pCVar9 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Compiler;
              __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicParser);
              CustomLogic_CustomLogicParser___ctor
                        (__this_03,(System_Collections_Generic_List_CustomLogicToken__o *)pMVar14,pCVar9,
                         (MethodInfo *)method_00);
              if (__this_03 != (CustomLogic_CustomLogicParser_o *)0x0) {
                start = CustomLogic_CustomLogicParser__GetStartAst(__this_03,pMVar14);
                pCVar9 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Compiler;
                pCVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
                CustomLogic_CustomLogicEvaluator___ctor(pCVar15,start,pCVar9,(MethodInfo *)method_00);
                pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
                pCVar2->Evaluator = pCVar15;
                Il2CppCodeGenWriteBarrier(&pCVar2->Evaluator);
                pCVar15 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
                if (pCVar15 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                  CustomLogic_CustomLogicEvaluator__Start
                            (pCVar15,local_38,addonSettings_00,(MethodInfo *)method_00);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_05b7a21f:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicManager$$FixedUpdate
// il2cpp: void CustomLogic_CustomLogicManager__FixedUpdate (CustomLogic_CustomLogicManager_o* __this, const MethodInfo* method);
// 0x5b7b590

void CustomLogic_CustomLogicManager__FixedUpdate(CustomLogic_CustomLogicManager_o *__this,MethodInfo *method)

{
  float fVar1;
  uint32_t uVar2;
  MethodInfo *in_RCX;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  float fVar3;
  
  if (Il2CppMethodInitialized_07547389 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07547389 = '\x01';
    uVar2 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  else {
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)
                 ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
  }
  if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      ThrowNullReferenceException();
    }
  }
  if (Il2CppMethodInitialized_075473a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"OnTick");
    Il2CppMethodInitialized_075473a9 = '\x01';
  }
  CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
            (__this_00,"OnTick",(System_Object_array *)0x0,in_RCX);
  fVar1 = (__this_00->fields).CurrentTime;
  fVar3 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  (__this_00->fields).CurrentTime = fVar3 + fVar1;
  return;
}


// CustomLogic.CustomLogicManager$$Update
// il2cpp: void CustomLogic_CustomLogicManager__Update (CustomLogic_CustomLogicManager_o* __this, const MethodInfo* method);
// 0x5b7b6f0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b7b723: jmp 0x5b7b88a
// asm:   0x5b7b900: jmp 0x5b7b91e
// asm:   0x5b7ba0a: jmp 0x5b7b970

void CustomLogic_CustomLogicManager__Update(CustomLogic_CustomLogicManager_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  uint32_t uVar8;
  Settings_GeneralSettings_o *pSVar9;
  Settings_BoolSetting_o *pSVar10;
  Settings_InputSettings_o *pSVar11;
  Settings_GeneralInputSettings_o *pSVar12;
  Settings_KeybindSetting_o *__this_00;
  bool bVar13;
  CustomLogic_CustomLogicManager_StaticFields *pCVar14;
  MethodInfo *in_RCX;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  Il2CppClass *klass;
  float fVar15;
  float fStack_38;
  float fStack_34;
  float fStack_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_0754738a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_0754738a = '\x01';
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor != 0) goto label_05b7b713;
label_05b7b772:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    __this_01 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    klass = (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager;
  }
  else {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) goto label_05b7b772;
label_05b7b713:
    __this_01 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    klass = (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager;
  }
  TypeInfo_CustomLogic_CustomLogicManager = (CustomLogic_CustomLogicManager_c *)klass;
  if (__this_01 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    if ((klass->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(klass);
      __this_01 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if (__this_01 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_05b7ba0f;
    }
    if (Il2CppMethodInitialized_075473aa == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"OnFrame");
      Il2CppMethodInitialized_075473aa = '\x01';
    }
    CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
              (__this_01,"OnFrame",(System_Object_array *)0x0,in_RCX);
    pCVar14 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
    if (pCVar14->Cutscene == false) {
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        pCVar14 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
      }
      klass = (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager;
      if (pCVar14->ManualCamera == false) goto label_05b7b88a;
    }
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar14 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
    uVar3 = (pCVar14->CameraPosition).fields.x;
    uVar5 = (pCVar14->CameraPosition).fields.y;
    fVar1 = (pCVar14->CameraPosition).fields.z;
    uVar4 = (pCVar14->CameraVelocity).fields.x;
    uVar6 = (pCVar14->CameraVelocity).fields.y;
    fVar2 = (pCVar14->CameraVelocity).fields.z;
    fVar15 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    klass = (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager;
    pCVar14 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
    (pCVar14->CameraPosition).fields.x = fVar15 * (float)uVar4 + (float)uVar3;
    (pCVar14->CameraPosition).fields.y = fVar15 * (float)uVar6 + (float)uVar5;
    (pCVar14->CameraPosition).fields.z = fVar2 * fVar15 + fVar1;
  }
label_05b7b88a:
  if ((klass->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    klass = (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager;
  }
  pCVar14 = klass->static_fields;
  if (pCVar14->SkipCutscene == false) {
label_05b7b8b7:
    uVar8 = (klass->_2).cctor_finished_or_no_cctor;
joined_r0x05b7b8be:
    if (uVar8 == 0) goto label_05b7b91e;
label_05b7b8c0:
    cVar7 = *(char *)((long)klass->static_fields + 0x48);
  }
  else {
    if ((klass->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(klass);
      pCVar14 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
      cVar7 = pCVar14->Cutscene;
      klass = (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager;
    }
    else {
      cVar7 = pCVar14->Cutscene;
    }
    if (cVar7 != '\0') goto label_05b7b8b7;
    if ((klass->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(klass);
      klass = (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager;
      TypeInfo_CustomLogic_CustomLogicManager->static_fields->SkipCutscene = false;
      uVar8 = (((CustomLogic_CustomLogicManager_c *)klass)->_2).cctor_finished_or_no_cctor;
      goto joined_r0x05b7b8be;
    }
    pCVar14->SkipCutscene = false;
    if ((klass->_2).cctor_finished_or_no_cctor != 0) goto label_05b7b8c0;
label_05b7b91e:
    il2cpp_codegen_runtime_class_init(klass);
    cVar7 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Cutscene;
    klass = (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager;
  }
  if (cVar7 != '\0') {
    pSVar9 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
    if ((pSVar9 == (Settings_GeneralSettings_o *)0x0) ||
       (pSVar10 = (pSVar9->fields).SkipCutscenes, pSVar10 == (Settings_BoolSetting_o *)0x0)) {
label_05b7ba0f:
      ThrowNullReferenceException();
    }
    if ((pSVar10->fields)._value != false) {
      uVar8 = (klass->_2).cctor_finished_or_no_cctor;
joined_r0x05b7ba04:
      if (uVar8 == 0) {
        il2cpp_codegen_runtime_class_init(klass);
        klass = (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager;
      }
      *(undefined1 *)((long)klass->static_fields + 0x50) = 1;
      return;
    }
    if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    bVar13 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
    if ((!bVar13) && (bVar13 = UI_InGameMenu__InMenu((MethodInfo *)0x0), !bVar13)) {
      pSVar11 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
      if ((pSVar11 == (Settings_InputSettings_o *)0x0) ||
         ((pSVar12 = (pSVar11->fields).General, pSVar12 == (Settings_GeneralInputSettings_o *)0x0 ||
          (__this_00 = (pSVar12->fields).SkipCutscene, __this_00 == (Settings_KeybindSetting_o *)0x0))))
      goto label_05b7ba0f;
      bVar13 = Settings_KeybindSetting__GetKeyDown(__this_00,false,(MethodInfo *)0x0);
      if (bVar13) {
        uVar8 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
        klass = (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager;
        goto joined_r0x05b7ba04;
      }
    }
  }
  return;
}


// CustomLogic.CustomLogicManager$$LateUpdate
// il2cpp: void CustomLogic_CustomLogicManager__LateUpdate (CustomLogic_CustomLogicManager_o* __this, const MethodInfo* method);
// 0x5b7ba60

void CustomLogic_CustomLogicManager__LateUpdate(CustomLogic_CustomLogicManager_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  MethodInfo *in_RCX;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  
  if (Il2CppMethodInitialized_0754738b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_0754738b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  else {
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)
                 ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
  }
  if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      ThrowNullReferenceException();
    }
  }
  if (Il2CppMethodInitialized_075473ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"OnLateFrame");
    Il2CppMethodInitialized_075473ab = '\x01';
  }
  CustomLogic_CustomLogicEvaluator__EvaluateMethodForCallbacks
            (__this_00,"OnLateFrame",(System_Object_array *)0x0,in_RCX);
  return;
}


// CustomLogic.CustomLogicManager$$.ctor
// il2cpp: void CustomLogic_CustomLogicManager___ctor (CustomLogic_CustomLogicManager_o* __this, const MethodInfo* method);
// 0x5b7bb90

void CustomLogic_CustomLogicManager___ctor(CustomLogic_CustomLogicManager_o *__this,MethodInfo *method)

{
  Photon_Pun_MonoBehaviourPunCallbacks___ctor
            ((Photon_Pun_MonoBehaviourPunCallbacks_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicManager$$.cctor
// il2cpp: void CustomLogic_CustomLogicManager___cctor (const MethodInfo* method);
// 0x5b7bba0

void CustomLogic_CustomLogicManager___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicManager_StaticFields *pCVar1;
  System_Collections_Generic_Dictionary_string__string__o *__this;
  System_Collections_Generic_HashSet_KeybindSetting__o *pSVar2;
  System_Collections_Generic_Dictionary_string__object__o *pSVar3;
  System_Collections_Generic_HashSet_string__o *pSVar4;
  
  if (Il2CppMethodInitialized_0754738c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    Il2CppMethodInitialized_0754738c = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
  pCVar1->CustomAddonSources = __this;
  Il2CppCodeGenWriteBarrier(&pCVar1->CustomAddonSources);
  (TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraMode).fields =
       (System_Nullable_CameraInputMode__Fields)0x0;
  pSVar2 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_KeybindSetting);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pSVar2,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_ctor);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
  pCVar1->KeybindDefaultDisabled = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->KeybindDefaultDisabled);
  pSVar2 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_KeybindSetting);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pSVar2,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_ctor);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
  pCVar1->KeybindHold = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->KeybindHold);
  pSVar3 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)pSVar3,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
  pCVar1->RoomData = pSVar3;
  Il2CppCodeGenWriteBarrier(&pCVar1->RoomData);
  pSVar3 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)pSVar3,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
  pCVar1->PersistentData = pSVar3;
  Il2CppCodeGenWriteBarrier(&pCVar1->PersistentData);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pSVar4,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
  pCVar1->GeneralComponents = pSVar4;
  Il2CppCodeGenWriteBarrier(&pCVar1->GeneralComponents);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pSVar4,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
  pCVar1->InternalComponents = pSVar4;
  Il2CppCodeGenWriteBarrier(&pCVar1->InternalComponents);
  TypeInfo_CustomLogic_CustomLogicManager->static_fields->_hasRestarted = false;
  return;
}


