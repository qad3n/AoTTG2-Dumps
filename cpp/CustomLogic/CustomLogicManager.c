// Type: CustomLogic.CustomLogicManager
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicManager.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicManager.cs
// --------------------------------

// CustomLogic.CustomLogicManager.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicManager___c___cctor (const MethodInfo* method);
// 0x1820ef670

void CustomLogic_CustomLogicManager___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicManager___c_o *__this;
  
  if (Il2CppMethodInitialized_1843469c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager_c);
    Il2CppMethodInitialized_1843469c2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicManager_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicManager_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicManager.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicManager___c___ctor (CustomLogic_CustomLogicManager___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicManager___c___ctor(CustomLogic_CustomLogicManager___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicManager.<>c$$<StartLogic>b__49_0
// il2cpp: System_String_o* CustomLogic_CustomLogicManager___c___StartLogic_b__49_0 (CustomLogic_CustomLogicManager___c_o* __this, Settings_StringSetting_o* x, const MethodInfo* method);
// 0x1820ef480

System_String_o *
CustomLogic_CustomLogicManager___c___StartLogic_b__49_0
          (CustomLogic_CustomLogicManager___c_o *__this,Settings_StringSetting_o *x,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843469c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_1843469c3 = '\x01';
  }
  if (x != (Settings_StringSetting_o *)0x0) {
    return (x->fields)._value;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicManager$$get_IsWaitingForRestart
// il2cpp: bool CustomLogic_CustomLogicManager__get_IsWaitingForRestart (const MethodInfo* method);
// 0x1820a67b0

bool CustomLogic_CustomLogicManager__get_IsWaitingForRestart(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843468fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_1843468fd = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  return TypeInfo_CustomLogic_CustomLogicManager->static_fields->_hasRestarted;
}


// CustomLogic.CustomLogicManager$$WaitForRestart
// il2cpp: void CustomLogic_CustomLogicManager__WaitForRestart (const MethodInfo* method);
// 0x1820a6450

void CustomLogic_CustomLogicManager__WaitForRestart(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843468fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_1843468fe = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  TypeInfo_CustomLogic_CustomLogicManager->static_fields->_hasRestarted = false;
  TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator =
       (CustomLogic_CustomLogicEvaluator_o *)0x0;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator,(void *)0x0);
  return;
}


// CustomLogic.CustomLogicManager$$OnJoinedRoom
// il2cpp: void CustomLogic_CustomLogicManager__OnJoinedRoom (CustomLogic_CustomLogicManager_o* __this, const MethodInfo* method);
// 0x1820a46c0

void CustomLogic_CustomLogicManager__OnJoinedRoom(CustomLogic_CustomLogicManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__object__o *pSVar1;
  
  if (Il2CppMethodInitialized_1843468ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Clear);
    Il2CppMethodInitialized_1843468ff = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pSVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->RoomData;
  if (pSVar1 != (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
               (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Clear);
    pSVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->PersistentData;
    if (pSVar1 != (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
      System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                 (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Clear);
      TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraLocked = false;
      TypeInfo_CustomLogic_CustomLogicManager->static_fields->CursorVisible = false;
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicManager$$Init
// il2cpp: void CustomLogic_CustomLogicManager__Init (const MethodInfo* method);
// 0x1820a4190
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820a443f: nop 

void CustomLogic_CustomLogicManager__Init(MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CustomLogicManager_o *value;
  Events_OnLoadScene_o *value_00;
  Events_OnPreLoadScene_o *value_01;
  System_String_o *pSVar2;
  System_String_array *pSVar3;
  System_Collections_Generic_HashSet_string__o *__this;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184346900 == '\0') {
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
    Il2CppMethodInitialized_184346900 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  value = Utility_SingletonFactory__CreateSingleton_object_
                    ((Il2CppObject *)TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance,
                     (MethodInfo_798ED0 *)
                     MethodInfo_Utility_SingletonFactory_CreateSingleton_CustomLogicManager);
  TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance = value;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance,value);
  if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
  }
  CustomLogic_CustomLogicSymbols__Init((MethodInfo *)0x0);
  if ((TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
  }
  Map_CustomLogicTransfer__Init((MethodInfo *)0x0);
  if ((TypeInfo_Map_CustomLogicAddonTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer);
  }
  Map_CustomLogicAddonTransfer__Init((MethodInfo *)0x0);
  value_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_OnLoadScene);
  Events_OnLoadScene___ctor
            ((UnityEngine_AudioClip_PCMSetPositionCallback_o *)value_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_CustomLogic_CustomLogicManager_OnLoadScene,(MethodInfo *)0x0);
  Events_EventManager__add_OnLoadScene(value_00,(MethodInfo *)0x0);
  value_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_OnPreLoadScene);
  Events_OnPreLoadScene___ctor
            ((UnityEngine_AudioClip_PCMSetPositionCallback_o *)value_01,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_CustomLogic_CustomLogicManager_OnPreLoadScene,(MethodInfo *)0x0);
  Events_EventManager__add_OnPreLoadScene(value_01,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar2 = TypeInfo_Utility_ResourcePaths->static_fields->Modes;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pSVar2 = ApplicationManagers_ResourceManager__TryLoadText(pSVar2,"BaseLogic",(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicManager->static_fields->BaseLogic = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicManager->static_fields->BaseLogic,pSVar2);
  pSVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->BaseLogic;
  if (pSVar2 != (System_String_o *)0x0) {
    pSVar3 = System_String__Split(pSVar2,10,0,(MethodInfo *)0x0);
    if (pSVar3 != (System_String_array *)0x0) {
      uVar4 = 0;
      do {
        if ((int)pSVar3->max_length <= (int)uVar4) {
          return;
        }
        if ((uint)pSVar3->max_length <= uVar4) goto label_1820a4619;
        if (pSVar3->m_Items[(int)uVar4] == (System_String_o *)0x0) break;
        bVar1 = System_String__StartsWith(pSVar3->m_Items[(int)uVar4],"# general",(MethodInfo *)0x0)
        ;
        if (bVar1) {
label_1820a44a7:
          if ((int)uVar4 < (int)pSVar3->max_length + -1) {
            if ((uint)pSVar3->max_length <= uVar4 + 1) goto label_1820a4619;
            if (pSVar3->m_Items[(longlong)(int)uVar4 + 1] == (System_String_o *)0x0) break;
            bVar1 = System_String__StartsWith
                              (pSVar3->m_Items[(longlong)(int)uVar4 + 1],"component",
                               (MethodInfo *)0x0);
            if (bVar1) {
              if ((uint)pSVar3->max_length <= uVar4 + 1) {
label_1820a4619:
                ThrowIndexOutOfRangeException();
              }
              if (("component " == (System_String_o *)0x0) ||
                 (pSVar3->m_Items[(longlong)(int)uVar4 + 1] == (System_String_o *)0x0)) break;
              pSVar2 = System_String__Substring
                                 (pSVar3->m_Items[(longlong)(int)uVar4 + 1],
                                  ("component "->fields)._stringLength,(MethodInfo *)0x0);
              if (pSVar2 == (System_String_o *)0x0) break;
              pSVar2 = System_String__Trim(pSVar2,(MethodInfo *)0x0);
              if ((uint)pSVar3->max_length <= uVar4) goto label_1820a4619;
              if (pSVar3->m_Items[(int)uVar4] == (System_String_o *)0x0) break;
              bVar1 = System_String__StartsWith
                                (pSVar3->m_Items[(int)uVar4],"# general",(MethodInfo *)0x0);
              if (bVar1) {
                if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                }
                __this = TypeInfo_CustomLogic_CustomLogicManager->static_fields->GeneralComponents;
              }
              else {
                if ((uint)pSVar3->max_length <= uVar4) goto label_1820a4619;
                if (pSVar3->m_Items[(int)uVar4] == (System_String_o *)0x0) break;
                bVar1 = System_String__StartsWith
                                  (pSVar3->m_Items[(int)uVar4],"# internal",(MethodInfo *)0x0);
                if (!bVar1) goto label_1820a4600;
                if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                }
                __this = TypeInfo_CustomLogic_CustomLogicManager->static_fields->InternalComponents;
              }
              if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) break;
              System_Collections_Generic_HashSet_object___Add
                        ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)pSVar2,
                         (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
            }
          }
        }
        else {
          if ((uint)pSVar3->max_length <= uVar4) goto label_1820a4619;
          if (pSVar3->m_Items[(int)uVar4] == (System_String_o *)0x0) break;
          bVar1 = System_String__StartsWith
                            (pSVar3->m_Items[(int)uVar4],"# internal",(MethodInfo *)0x0);
          if (bVar1) goto label_1820a44a7;
        }
label_1820a4600:
        uVar4 = uVar4 + 1;
      } while( true );
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicManager$$OnPreLoadScene
// il2cpp: void CustomLogic_CustomLogicManager__OnPreLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x1820a4cc0

void CustomLogic_CustomLogicManager__OnPreLoadScene(int32_t sceneName,MethodInfo *method)

{
  float fVar1;
  CustomLogic_CustomLogicManager_o *__this;
  UnityEngine_Vector3_StaticFields *pUVar2;
  CustomLogic_CustomLogicManager_StaticFields *pCVar3;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *pSVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_184346901 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Clear);
    Il2CppMethodInitialized_184346901 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this = TypeInfo_CustomLogic_CustomLogicManager->static_fields->_instance;
  if (__this != (CustomLogic_CustomLogicManager_o *)0x0) {
    UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicManager->static_fields->_hasRestarted = true;
    TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator =
         (CustomLogic_CustomLogicEvaluator_o *)0x0;
    Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator,(void *)0x0);
    TypeInfo_CustomLogic_CustomLogicManager->static_fields->Compiler =
         (CustomLogic_CustomLogicCompiler_o *)0x0;
    Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicManager->static_fields->Compiler,(void *)0x0);
    TypeInfo_CustomLogic_CustomLogicManager->static_fields->LogicLoaded = false;
    TypeInfo_CustomLogic_CustomLogicManager->static_fields->AddonsLoaded = false;
    TypeInfo_CustomLogic_CustomLogicManager->static_fields->LogicWasLocallyLoaded = false;
    TypeInfo_CustomLogic_CustomLogicManager->static_fields->Cutscene = false;
    TypeInfo_CustomLogic_CustomLogicManager->static_fields->SkipCutscene = false;
    TypeInfo_CustomLogic_CustomLogicManager->static_fields->ManualCamera = false;
    if (Il2CppMethodInitialized_18433dbea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbea = '\x01';
    }
    pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar5 = (pUVar2->zeroVector).fields.y;
    pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
    fVar1 = (pUVar2->zeroVector).fields.z;
    (pCVar3->CameraPosition).fields.x = (pUVar2->zeroVector).fields.x;
    (pCVar3->CameraPosition).fields.y = fVar5;
    (pCVar3->CameraPosition).fields.z = fVar1;
    if (Il2CppMethodInitialized_18433dbea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbea = '\x01';
    }
    pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar5 = (pUVar2->zeroVector).fields.y;
    pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
    fVar1 = (pUVar2->zeroVector).fields.z;
    (pCVar3->CameraRotation).fields.x = (pUVar2->zeroVector).fields.x;
    (pCVar3->CameraRotation).fields.y = fVar5;
    (pCVar3->CameraRotation).fields.z = fVar1;
    if (Il2CppMethodInitialized_18433dbea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbea = '\x01';
    }
    pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar5 = (pUVar2->zeroVector).fields.y;
    pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
    fVar1 = (pUVar2->zeroVector).fields.z;
    (pCVar3->CameraVelocity).fields.x = (pUVar2->zeroVector).fields.x;
    (pCVar3->CameraVelocity).fields.y = fVar5;
    (pCVar3->CameraVelocity).fields.z = fVar1;
    (TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraMode).fields =
         (System_Nullable_CameraInputMode__Fields)0x0;
    TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraFOV = 0.0;
    pSVar4 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
             TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindDefaultDisabled;
    if (pSVar4 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
      System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                (pSVar4,(MethodInfo_17592A0 *)
                        MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Clear);
      pSVar4 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
               TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindHold;
      if (pSVar4 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
        System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                  (pSVar4,(MethodInfo_17592A0 *)
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
        TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraLocked = false;
        TypeInfo_CustomLogic_CustomLogicManager->static_fields->CursorVisible = false;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicManager$$ToggleCutscene
// il2cpp: void CustomLogic_CustomLogicManager__ToggleCutscene (bool cutscene, const MethodInfo* method);
// 0x1820a5d00

void CustomLogic_CustomLogicManager__ToggleCutscene(bool cutscene,MethodInfo *method)

{
  byte bVar1;
  Settings_InGameCharacterSettings_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  UI_InGameMenu_o *pUVar4;
  
  if (Il2CppMethodInitialized_184346902 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184346902 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  if (cutscene == TypeInfo_CustomLogic_CustomLogicManager->static_fields->Cutscene) {
    return;
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  TypeInfo_CustomLogic_CustomLogicManager->static_fields->Cutscene = cutscene;
  if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Cutscene == false) {
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
    if ((pSVar2 != (Settings_InGameCharacterSettings_o *)0x0) &&
       (pSVar3 = (pSVar2->fields).ChooseStatus, pSVar3 != (Settings_IntSetting_o *)0x0)) {
      if ((pSVar3->fields)._value != 0) {
        return;
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar4 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar4 != (UI_InGameMenu_o *)0x0) {
        bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
        if ((bVar1 <= (pUVar4->klass->_2).typeHierarchyDepth) &&
           ((pUVar4->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_InGameMenu))
        {
          UI_InGameMenu__SetCharacterMenu(pUVar4,true,(MethodInfo *)0x0);
          return;
        }
        il2cpp_codegen_raise_invalid_cast_exception(pUVar4,TypeInfo_UI_InGameMenu);
      }
    }
  }
  else {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar4 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar4 != (UI_InGameMenu_o *)0x0) {
      bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
      if ((bVar1 <= (pUVar4->klass->_2).typeHierarchyDepth) &&
         ((pUVar4->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
        UI_InGameMenu__SetCharacterMenu(pUVar4,false,(MethodInfo *)0x0);
        return;
      }
      il2cpp_codegen_raise_invalid_cast_exception(pUVar4,TypeInfo_UI_InGameMenu);
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicManager$$OnLoadScene
// il2cpp: void CustomLogic_CustomLogicManager__OnLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x1820a49a0

void CustomLogic_CustomLogicManager__OnLoadScene(int32_t sceneName,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346903 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_184346903 = '\x01';
  }
  if (sceneName != 2) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    TypeInfo_CustomLogic_CustomLogicManager->static_fields->LogicLoaded = true;
    TypeInfo_CustomLogic_CustomLogicManager->static_fields->AddonsLoaded = true;
    return;
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  CustomLogic_CustomLogicManager__StartInGame((MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicManager$$StartInGame
// il2cpp: void CustomLogic_CustomLogicManager__StartInGame (const MethodInfo* method);
// 0x1820a4ff0

void CustomLogic_CustomLogicManager__StartInGame(MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameGeneralSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  Photon_Realtime_Player_o *__this;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar4;
  System_String_o *pSVar5;
  Photon_Pun_PhotonMessageInfo_o *pPVar6;
  System_Object_array *parameters;
  Il2CppObject *pIVar7;
  Photon_Pun_PhotonMessageInfo_o local_28;
  
  if (Il2CppMethodInitialized_184346904 == '\0') {
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
    Il2CppMethodInitialized_184346904 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar4) {
    return;
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  TypeInfo_CustomLogic_CustomLogicManager->static_fields->LogicWasLocallyLoaded = true;
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).General, pSVar2 != (Settings_InGameGeneralSettings_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).GameMode, pSVar3 != (Settings_StringSetting_o *)0x0)) {
    pSVar5 = (pSVar3->fields)._value;
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    bVar4 = Map_BuiltinLevels__IsLogicBuiltin(pSVar5,(MethodInfo *)0x0);
    pSVar3 = (pSVar2->fields).GameMode;
    if (pSVar3 != (Settings_StringSetting_o *)0x0) {
      pSVar5 = (pSVar3->fields)._value;
      if (bVar4) {
        if ((TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
        }
        Map_CustomLogicTransfer__UseBuiltin(pSVar5,(MethodInfo *)0x0);
        TypeInfo_Map_CustomLogicTransfer->static_fields->LogicTransferReady = true;
        __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
        parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
        pSVar3 = (pSVar2->fields).GameMode;
        if ((pSVar3 != (Settings_StringSetting_o *)0x0) && (parameters != (System_Object_array *)0x0)) {
          pSVar5 = (pSVar3->fields)._value;
          if ((pSVar5 != (System_String_o *)0x0) &&
             (pIVar7 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)pSVar5,(((parameters->obj).klass)->_1).element_class),
             pIVar7 == (Il2CppObject *)0x0)) {
            pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
          }
          if ((int)parameters->max_length == 0) {
            ThrowIndexOutOfRangeException();
          }
          parameters->m_Items[0] = (Il2CppObject *)pSVar5;
          Il2CppCodeGenWriteBarrier(parameters->m_Items,pSVar5);
          if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(__this_00,"LoadBuiltinLogicRPC",0,parameters,(MethodInfo *)0x0);
            goto label_1820a536f;
          }
        }
      }
      else {
        if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
        }
        pSVar5 = Map_BuiltinLevels__LoadLogic(pSVar5,(MethodInfo *)0x0);
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        TypeInfo_CustomLogic_CustomLogicManager->static_fields->Logic = pSVar5;
        Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicManager->static_fields->Logic,pSVar5);
        pSVar5 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Logic;
        if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
        }
        pSVar5 = Utility_Util__CreateMD5(pSVar5,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicManager->static_fields->LogicHash = pSVar5;
        Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicManager->static_fields->LogicHash,pSVar5);
        pSVar3 = (pSVar2->fields).GameMode;
        if (pSVar3 != (Settings_StringSetting_o *)0x0) {
          pSVar5 = (pSVar3->fields)._value;
          if ((TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
          }
          Map_CustomLogicTransfer__Start(pSVar5,(MethodInfo *)0x0);
          pPVar6 = Utility_Util__CreateLocalPhotonInfo(&local_28,(MethodInfo *)0x0);
          __this = (pPVar6->fields).Sender;
          if (Il2CppMethodInitialized_184346906 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
            Il2CppMethodInitialized_184346906 = '\x01';
          }
          if ((__this == (Photon_Realtime_Player_o *)0x0) ||
             (bVar4 = Photon_Realtime_Player__get_IsMasterClient(__this,(MethodInfo *)0x0), bVar4)) {
            if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
            }
            CustomLogic_CustomLogicManager__FinishLoadLogic((MethodInfo *)0x0);
          }
label_1820a536f:
          if ((TypeInfo_Map_CustomLogicAddonTransfer->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer);
          }
          Map_CustomLogicAddonTransfer__Start((MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicManager$$OnLoadBuiltinLogicRPC
// il2cpp: void CustomLogic_CustomLogicManager__OnLoadBuiltinLogicRPC (System_String_o* name, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x1820a4790

void CustomLogic_CustomLogicManager__OnLoadBuiltinLogicRPC
               (System_String_o *name,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Photon_Realtime_Player_o *__this;
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184346905 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184346905 = '\x01';
  }
  __this = (info->fields).Sender;
  if (__this != (Photon_Realtime_Player_o *)0x0) {
    bVar1 = Photon_Realtime_Player__get_IsMasterClient(__this,(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
      }
      pSVar2 = Map_BuiltinLevels__LoadLogic(name,(MethodInfo *)0x0);
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      TypeInfo_CustomLogic_CustomLogicManager->static_fields->Logic = pSVar2;
      Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicManager->static_fields->Logic,pSVar2);
      pSVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Logic;
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      pSVar2 = Utility_Util__CreateMD5(pSVar2,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicManager->static_fields->LogicHash = pSVar2;
      Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicManager->static_fields->LogicHash,pSVar2);
      pSVar2 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      if ((TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
      }
      TypeInfo_Map_CustomLogicTransfer->static_fields->LogicHash = pSVar2;
      Il2CppCodeGenWriteBarrier(&TypeInfo_Map_CustomLogicTransfer->static_fields->LogicHash,pSVar2);
      CustomLogic_CustomLogicManager__FinishLoadLogic((MethodInfo *)0x0);
    }
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicManager$$OnLoadCachedLogicRPC
// il2cpp: void CustomLogic_CustomLogicManager__OnLoadCachedLogicRPC (Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x1820a4930

void CustomLogic_CustomLogicManager__OnLoadCachedLogicRPC
               (Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346906 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_184346906 = '\x01';
  }
  if ((info->fields).Sender != (Photon_Realtime_Player_o *)0x0) {
    bVar1 = Photon_Realtime_Player__get_IsMasterClient((info->fields).Sender,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  CustomLogic_CustomLogicManager__FinishLoadLogic((MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicManager$$FinishLoadLogic
// il2cpp: void CustomLogic_CustomLogicManager__FinishLoadLogic (const MethodInfo* method);
// 0x1820a3330

void CustomLogic_CustomLogicManager__FinishLoadLogic(MethodInfo *method)

{
  System_String_o *key;
  Photon_Realtime_Player_o *player;
  
  if (Il2CppMethodInitialized_184346907 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_184346907 = '\x01';
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
    TypeInfo_CustomLogic_CustomLogicManager->static_fields->LogicLoaded = true;
    return;
  }
  TypeInfo_CustomLogic_CustomLogicManager->static_fields->LogicLoaded = true;
  return;
}


// CustomLogic.CustomLogicManager$$ApplyAddonBundle
// il2cpp: void CustomLogic_CustomLogicManager__ApplyAddonBundle (System_String_o* bundleJson, const MethodInfo* method);
// 0x1820a2fd0

void CustomLogic_CustomLogicManager__ApplyAddonBundle(System_String_o *bundleJson,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__string__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Xml_Schema_XmlSchema_c *pSVar1;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar2;
  bool bVar3;
  SimpleJSONFixed_JSONNode_o *__this_01;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o *pSVar4;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o *pSVar5;
  MethodInfo *key;
  System_Xml_Schema_XmlSchema_o *pSVar6;
  Il2CppObject *value;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_f8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_a8;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o local_58;
  
  if (Il2CppMethodInitialized_184346908 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    Il2CppMethodInitialized_184346908 = '\x01';
  }
  local_f8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_a8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_f8.type = 0;
  local_f8._4_4_ = 0;
  local_f8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_f8.m_Object.fields._version = 0;
  local_f8.m_Object.fields._index = 0;
  local_f8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_f8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_f8.m_Object.fields._getEnumeratorRetType = 0;
  local_f8.m_Object.fields._36_4_ = 0;
  local_f8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_f8.m_Array.fields._index = 0;
  local_f8.m_Array.fields._version = 0;
  local_a8.type = 0;
  local_a8._4_4_ = 0;
  local_a8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_a8.m_Object.fields._version = 0;
  local_a8.m_Object.fields._index = 0;
  local_a8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_a8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_a8.m_Object.fields._getEnumeratorRetType = 0;
  local_a8.m_Object.fields._36_4_ = 0;
  local_a8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a8.m_Array.fields._index = 0;
  local_a8.m_Array.fields._version = 0;
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this = TypeInfo_CustomLogic_CustomLogicManager->static_fields->CustomAddonSources;
  if (__this != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
               (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear);
    bVar3 = System_String__IsNullOrEmpty(bundleJson,(MethodInfo *)0x0);
    if (!bVar3) {
      __this_01 = SimpleJSONFixed_JSON__Parse(bundleJson,(MethodInfo *)0x0);
      if (__this_01 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_1820a3207;
      pSVar4 = SimpleJSONFixed_JSONNode__get_Values(&local_58,__this_01,(MethodInfo *)0x0);
      local_a8.type = (pSVar4->fields).m_Enumerator.fields.type;
      local_a8._4_4_ = *(undefined4 *)&(pSVar4->fields).m_Enumerator.fields.field_0x4;
      local_a8.m_Object.fields._dictionary = (pSVar4->fields).m_Enumerator.fields.m_Object.fields._dictionary;
      pSVar2 = &(pSVar4->fields).m_Enumerator;
      local_a8.m_Object.fields._version = (pSVar2->fields).m_Object.fields._version;
      local_a8.m_Object.fields._index = (pSVar2->fields).m_Object.fields._index;
      local_a8.m_Object.fields._current.fields.key =
           (pSVar4->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
      local_a8.m_Object.fields._current.fields.value =
           (pSVar4->fields).m_Enumerator.fields.m_Object.fields._current.fields.value;
      pSVar2 = &(pSVar4->fields).m_Enumerator;
      local_a8.m_Object.fields._getEnumeratorRetType = (pSVar2->fields).m_Object.fields._getEnumeratorRetType;
      local_a8.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar2->fields).m_Object.fields.field_0x24;
      local_a8.m_Array.fields._list = (pSVar4->fields).m_Enumerator.fields.m_Array.fields._list;
      pSVar2 = &(pSVar4->fields).m_Enumerator;
      local_a8.m_Array.fields._index = (pSVar2->fields).m_Array.fields._index;
      local_a8.m_Array.fields._version = (pSVar2->fields).m_Array.fields._version;
      local_a8.m_Array.fields._current = (pSVar4->fields).m_Enumerator.fields.m_Array.fields._current;
      pSVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                         ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_58,
                          (SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_a8,(MethodInfo *)0x0);
      local_f8.type = (pSVar5->fields).m_Enumerator.fields.type;
      local_f8._4_4_ = *(undefined4 *)&(pSVar5->fields).m_Enumerator.fields.field_0x4;
      local_f8.m_Object.fields._dictionary = (pSVar5->fields).m_Enumerator.fields.m_Object.fields._dictionary;
      pSVar2 = &(pSVar5->fields).m_Enumerator;
      local_f8.m_Object.fields._version = (pSVar2->fields).m_Object.fields._version;
      local_f8.m_Object.fields._index = (pSVar2->fields).m_Object.fields._index;
      local_f8.m_Object.fields._current.fields.key =
           (pSVar5->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
      local_f8.m_Object.fields._current.fields.value =
           (pSVar5->fields).m_Enumerator.fields.m_Object.fields._current.fields.value;
      pSVar2 = &(pSVar5->fields).m_Enumerator;
      local_f8.m_Object.fields._getEnumeratorRetType = (pSVar2->fields).m_Object.fields._getEnumeratorRetType;
      local_f8.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar2->fields).m_Object.fields.field_0x24;
      local_f8.m_Array.fields._list = (pSVar5->fields).m_Enumerator.fields.m_Array.fields._list;
      pSVar2 = &(pSVar5->fields).m_Enumerator;
      local_f8.m_Array.fields._index = (pSVar2->fields).m_Array.fields._index;
      local_f8.m_Array.fields._version = (pSVar2->fields).m_Array.fields._version;
      local_f8.m_Array.fields._current = (pSVar5->fields).m_Enumerator.fields.m_Array.fields._current;
      bVar3 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_f8,(MethodInfo *)0x0);
      if (bVar3) {
        do {
          key = (MethodInfo *)
                SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_f8,(MethodInfo *)0x0);
          if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          }
          __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                      TypeInfo_CustomLogic_CustomLogicManager->static_fields->CustomAddonSources;
          pSVar6 = (*(__this_01->klass->vtable)._7_get_Item.methodPtr)(__this_01,key);
          if (pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_1820a3207;
          pSVar1 = pSVar6->klass;
          value = (Il2CppObject *)
                  (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                            (pSVar6,(UnityEngine_GameObject_o *)
                                    (pSVar1->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar1);
          if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_1820a3207;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (__this_00,(Il2CppObject *)key,value,
                     (MethodInfo_147A7F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
          bVar3 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_f8,(MethodInfo *)0x0);
        } while (bVar3);
      }
    }
    return;
  }
label_1820a3207:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicManager$$FinishLoadAddons
// il2cpp: void CustomLogic_CustomLogicManager__FinishLoadAddons (const MethodInfo* method);
// 0x1820a3210

void CustomLogic_CustomLogicManager__FinishLoadAddons(MethodInfo *method)

{
  System_String_o *key;
  Photon_Realtime_Player_o *player;
  
  if (Il2CppMethodInitialized_184346909 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicAddonTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_184346909 = '\x01';
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
    TypeInfo_CustomLogic_CustomLogicManager->static_fields->AddonsLoaded = true;
    return;
  }
  TypeInfo_CustomLogic_CustomLogicManager->static_fields->AddonsLoaded = true;
  return;
}


// CustomLogic.CustomLogicManager$$OnPlayerEnteredRoom
// il2cpp: void CustomLogic_CustomLogicManager__OnPlayerEnteredRoom (CustomLogic_CustomLogicManager_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x1820a4a30

void CustomLogic_CustomLogicManager__OnPlayerEnteredRoom
               (CustomLogic_CustomLogicManager_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameGeneralSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  System_String_o *pSVar4;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar5;
  System_Object_array *parameters;
  Il2CppObject *pIVar6;
  
  if (Il2CppMethodInitialized_18434690a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicAddonTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"LoadBuiltinLogicRPC");
    Il2CppMethodInitialized_18434690a = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (bVar5) {
    if ((TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
    }
    if (TypeInfo_Map_CustomLogicTransfer->static_fields->LogicTransferReady != false) {
      pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
      if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
          (pSVar2 = (pSVar1->fields).General, pSVar2 != (Settings_InGameGeneralSettings_o *)0x0)) &&
         (pSVar3 = (pSVar2->fields).GameMode, pSVar3 != (Settings_StringSetting_o *)0x0)) {
        pSVar4 = (pSVar3->fields)._value;
        if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
        }
        bVar5 = Map_BuiltinLevels__IsLogicBuiltin(pSVar4,(MethodInfo *)0x0);
        if (!bVar5) {
          if ((TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
          }
          Map_CustomLogicTransfer__Transfer(player,(MethodInfo *)0x0);
          goto label_1820a4b92;
        }
        __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
        parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
        pSVar3 = (pSVar2->fields).GameMode;
        if ((pSVar3 != (Settings_StringSetting_o *)0x0) && (parameters != (System_Object_array *)0x0)) {
          pSVar4 = (pSVar3->fields)._value;
          if (pSVar4 != (System_String_o *)0x0) {
            pIVar6 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)pSVar4,(((parameters->obj).klass)->_1).element_class);
            if (pIVar6 == (Il2CppObject *)0x0) {
              pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
            }
          }
          if ((int)parameters->max_length == 0) {
            ThrowIndexOutOfRangeException();
          }
          parameters->m_Items[0] = (Il2CppObject *)pSVar4;
          Il2CppCodeGenWriteBarrier(parameters->m_Items,pSVar4);
          if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC_1d4d8d0
                      (__this_00,"LoadBuiltinLogicRPC",player,parameters,(MethodInfo *)0x0);
            goto label_1820a4b92;
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
label_1820a4b92:
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (bVar5) {
    if ((TypeInfo_Map_CustomLogicAddonTransfer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer);
    }
    if (TypeInfo_Map_CustomLogicAddonTransfer->static_fields->AddonTransferReady != false) {
      if ((TypeInfo_Map_CustomLogicAddonTransfer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer);
      }
      Map_CustomLogicAddonTransfer__Transfer(player,(MethodInfo *)0x0);
    }
  }
  return;
}


// CustomLogic.CustomLogicManager$$GetModeSettings
// il2cpp: System_Collections_Generic_Dictionary_string__BaseSetting__o* CustomLogic_CustomLogicManager__GetModeSettings (System_String_o* source, const MethodInfo* method);
// 0x1820a3e00

System_Collections_Generic_Dictionary_string__BaseSetting__o *
CustomLogic_CustomLogicManager__GetModeSettings(System_String_o *source,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSVar1;
  
  if (Il2CppMethodInitialized_18434690b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_18434690b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this = CustomLogic_CustomLogicManager__GetEditorEvaluator(source,false,(MethodInfo *)0x0);
  if (__this != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    pSVar1 = CustomLogic_CustomLogicEvaluator__GetModeSettings(__this,(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicManager$$GetAddonSettings
// il2cpp: System_Collections_Generic_Dictionary_string__BaseSetting__o* CustomLogic_CustomLogicManager__GetAddonSettings (System_String_o* addonName, System_String_o* source, const MethodInfo* method);
// 0x1820a36f0
// eh: try 0x1820a39c8..0x1820a39f4 -> pad 0x183315a20 catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820a3a1a: mov rdx, qword ptr [rip + 0x2012d1f]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_BaseSett
// asm:   0x1820a3a21: lea rcx, [rsp + 0x50]
// asm:   0x1820a3a26: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820a3a2b: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1820a3a30: test rcx, rcx
// asm:   0x1820a3a33: jne 0x1820a3a68
// asm:   0x1820a3a68: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315a20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315a25: push rbp
// asm:   0x183315a26: sub rsp, 0x30
// asm:   0x183315a2a: mov rbp, rdx
// asm:   0x183315a2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183315a31: mov rcx, qword ptr [rax]
// asm:   0x183315a34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183315a38: movabs rax, 0
// asm:   0x183315a42: add rsp, 0x30
// asm:   0x183315a46: pop rbp
// asm:   0x183315a47: ret 

System_Collections_Generic_Dictionary_string__BaseSetting__o *
CustomLogic_CustomLogicManager__GetAddonSettings
          (System_String_o *addonName,System_String_o *source,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CustomLogicCompiler_o *__this;
  CustomLogic_CustomLogicSourceFile_o *pCVar2;
  System_String_o *pSVar3;
  CustomLogic_CustomLogicLexer_o *__this_00;
  System_Collections_Generic_List_CustomLogicToken__o *tokens;
  CustomLogic_CustomLogicParser_o *__this_01;
  CustomLogic_CustomLogicStartAst_o *start;
  CustomLogic_CustomLogicEvaluator_o *__this_02;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *__this_03;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_04;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *__this_05;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_48;
  
  if (Il2CppMethodInitialized_18434690c == '\0') {
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
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_BaseSett_40b6820
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_BaseSett_40b6900
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_Dictionary_string_BaseSetting_GetEnum
              );
    il2cpp_codegen_initialize_runtime_metadata(&".cl");
    il2cpp_codegen_initialize_runtime_metadata(&"BaseLogic.cl");
    Il2CppMethodInitialized_18434690c = '\x01';
  }
  local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._currentKey = (Il2CppObject *)0x0;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCompiler);
  CustomLogic_CustomLogicCompiler___ctor(__this,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pSVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->BaseLogic;
  pCVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSourceFile);
  CustomLogic_CustomLogicSourceFile___ctor(pCVar2,"BaseLogic.cl",pSVar3,1,(MethodInfo *)0x0);
  if (__this != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    CustomLogic_CustomLogicCompiler__AddSourceFile(__this,pCVar2,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat_1969e50(addonName,".cl",(MethodInfo *)0x0);
    pCVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSourceFile);
    CustomLogic_CustomLogicSourceFile___ctor(pCVar2,pSVar3,source,2,(MethodInfo *)0x0);
    CustomLogic_CustomLogicCompiler__AddSourceFile(__this,pCVar2,(MethodInfo *)0x0);
    pSVar3 = CustomLogic_CustomLogicCompiler__Compile(__this,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLexer);
    CustomLogic_CustomLogicLexer___ctor(__this_00,pSVar3,__this,(MethodInfo *)0x0);
    if (__this_00 != (CustomLogic_CustomLogicLexer_o *)0x0) {
      tokens = CustomLogic_CustomLogicLexer__GetTokens(__this_00,(MethodInfo *)0x0);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicParser);
      CustomLogic_CustomLogicParser___ctor(__this_01,tokens,__this,(MethodInfo *)0x0);
      if (__this_01 != (CustomLogic_CustomLogicParser_o *)0x0) {
        start = CustomLogic_CustomLogicParser__GetStartAst(__this_01,(MethodInfo *)0x0);
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        CustomLogic_CustomLogicEvaluator___ctor(__this_02,start,__this,(MethodInfo *)0x0);
        if (__this_02 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          __this_03 = CustomLogic_CustomLogicEvaluator__GetAddonSettings(__this_02,(MethodInfo *)0x0);
          if (__this_03 !=
              (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)0x0) {
            __this_04 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                        System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,
                                   (MethodInfo_13C6500 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Keys
                                  );
            if (__this_04 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
              System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                        ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                         local_60,__this_04,
                         (MethodInfo_F1E4D0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_Dictionary_string_BaseSetting_GetEnum
                        );
              local_48.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_60._0_8_;
              local_48.fields._index = local_60._8_4_;
              local_48.fields._version = local_60._12_4_;
              local_48.fields._currentKey = local_50;
              local_60._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
              local_60._8_8_ = &local_48;
              bVar1 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                                (&local_48,
                                 (MethodInfo_156BDD0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_BaseSett_40b6820
                                );
              if (bVar1) {
                __this_05 = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)
                            System_Collections_Generic_Dictionary_object__object___get_Item
                                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                                       local_48.fields._currentKey,
                                       (MethodInfo_147A5B0 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Item
                                      );
                System_Configuration_ConfigurationCollectionAttribute___ctor
                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                           MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_BaseSett
                          );
              }
              else {
                System_Configuration_ConfigurationCollectionAttribute___ctor
                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                           MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_BaseSett
                          );
                __this_05 = il2cpp_codegen_object_new
                                      ((Il2CppClass *)
                                       TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
                System_Collections_Generic_Dictionary_object__object____ctor
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_05,
                           (MethodInfo_1454140 *)
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
// 0x1820a34e0

System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *
CustomLogic_CustomLogicManager__GetAddonSettingsGrouped
          (System_String_o *addonName,System_String_o *source,MethodInfo *method)

{
  CustomLogic_CustomLogicCompiler_o *__this;
  CustomLogic_CustomLogicSourceFile_o *pCVar1;
  System_String_o *pSVar2;
  CustomLogic_CustomLogicLexer_o *__this_00;
  System_Collections_Generic_List_CustomLogicToken__o *tokens;
  CustomLogic_CustomLogicParser_o *__this_01;
  CustomLogic_CustomLogicStartAst_o *start;
  CustomLogic_CustomLogicEvaluator_o *__this_02;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *pSVar3;
  
  if (Il2CppMethodInitialized_18434690d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCompiler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLexer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicParser);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSourceFile);
    il2cpp_codegen_initialize_runtime_metadata(&".cl");
    il2cpp_codegen_initialize_runtime_metadata(&"BaseLogic.cl");
    Il2CppMethodInitialized_18434690d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCompiler);
  CustomLogic_CustomLogicCompiler___ctor(__this,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pSVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->BaseLogic;
  pCVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSourceFile);
  CustomLogic_CustomLogicSourceFile___ctor(pCVar1,"BaseLogic.cl",pSVar2,1,(MethodInfo *)0x0);
  if (__this != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    CustomLogic_CustomLogicCompiler__AddSourceFile(__this,pCVar1,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat_1969e50(addonName,".cl",(MethodInfo *)0x0);
    pCVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSourceFile);
    CustomLogic_CustomLogicSourceFile___ctor(pCVar1,pSVar2,source,2,(MethodInfo *)0x0);
    CustomLogic_CustomLogicCompiler__AddSourceFile(__this,pCVar1,(MethodInfo *)0x0);
    pSVar2 = CustomLogic_CustomLogicCompiler__Compile(__this,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLexer);
    CustomLogic_CustomLogicLexer___ctor(__this_00,pSVar2,__this,(MethodInfo *)0x0);
    if (__this_00 != (CustomLogic_CustomLogicLexer_o *)0x0) {
      tokens = CustomLogic_CustomLogicLexer__GetTokens(__this_00,(MethodInfo *)0x0);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicParser);
      CustomLogic_CustomLogicParser___ctor(__this_01,tokens,__this,(MethodInfo *)0x0);
      if (__this_01 != (CustomLogic_CustomLogicParser_o *)0x0) {
        start = CustomLogic_CustomLogicParser__GetStartAst(__this_01,(MethodInfo *)0x0);
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        CustomLogic_CustomLogicEvaluator___ctor(__this_02,start,__this,(MethodInfo *)0x0);
        if (__this_02 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pSVar3 = CustomLogic_CustomLogicEvaluator__GetAddonSettings(__this_02,(MethodInfo *)0x0);
          return pSVar3;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicManager$$GetSelectedAddonSettings
// il2cpp: System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o* CustomLogic_CustomLogicManager__GetSelectedAddonSettings (System_Collections_Generic_List_string__o* addonNames, const MethodInfo* method);
// 0x1820a3e70
// eh: try 0x1820a3fe0..0x1820a4185 -> pad 0x183324460 (+4 call sites) catch Il2CppExceptionWrapper
// asm: 41 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820a40ac: nop dword ptr [rax]
// asm:   0x1820a40fd: mov rdx, qword ptr [rip + 0x201239c]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Dictionary_string_BaseSetting_Dispose
// asm:   0x1820a4104: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1820a4109: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820a410e: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1820a4113: test rcx, rcx
// asm:   0x1820a4116: jne 0x1820a417a
// asm:   0x1820a4118: xor r14d, r14d
// asm:   0x1820a411b: mov rdi, qword ptr [rsp + 0xf0]
// asm:   0x1820a4123: jmp 0x1820a3fe0
// asm:   0x1820a413b: mov rdx, qword ptr [rip + 0x1ff37d6]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x1820a4142: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1820a4147: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820a414c: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x1820a4151: test rcx, rcx
// asm:   0x1820a4154: jne 0x1820a4185
// asm:   0x1820a4156: mov rdi, qword ptr [rsp + 0xf0]
// asm:   0x1820a417a: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1820a4185: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183324460: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183324465: push rbp
// asm:   0x183324466: sub rsp, 0x20
// asm:   0x18332446a: mov rbp, rdx
// asm:   0x18332446d: mov rax, qword ptr [rbp + 0x90]
// asm:   0x183324474: mov rcx, qword ptr [rax]
// asm:   0x183324477: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18332447b: movabs rax, 0
// asm:   0x183324485: add rsp, 0x20
// asm:   0x183324489: pop rbp
// asm:   0x18332448a: ret 
// asm:   0x18332a840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18332a845: push rbp
// asm:   0x18332a846: sub rsp, 0x20
// asm:   0x18332a84a: mov rbp, rdx
// asm:   0x18332a84d: mov rax, qword ptr [rbp + 0x88]
// asm:   0x18332a854: mov rcx, qword ptr [rax]
// asm:   0x18332a857: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18332a85b: movabs rax, 0
// asm:   0x18332a865: add rsp, 0x20
// asm:   0x18332a869: pop rbp
// asm:   0x18332a86a: ret 

System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *
CustomLogic_CustomLogicManager__GetSelectedAddonSettings
          (System_Collections_Generic_List_string__o *addonNames,MethodInfo *method)

{
  System_String_o *name;
  bool bVar1;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *__this;
  System_String_o *value;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *__this_00;
  undefined1 local_b8 [16];
  System_String_o *local_a8;
  undefined1 local_a0 [8];
  uint64_t uStack_98;
  System_String_o *local_90;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o local_88;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_50;
  
  if (Il2CppMethodInitialized_18434690e == '\0') {
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
    Il2CppMethodInitialized_18434690e = '\x01';
  }
  local_a0 = (undefined1  [8])0x0;
  uStack_98 = 0;
  local_90 = (System_String_o *)0x0;
  local_88.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_88.fields._version = 0;
  local_88.fields._index = 0;
  local_88.fields._current.fields.key = (Il2CppObject *)0x0;
  local_88.fields._current.fields.value = (Il2CppObject *)0x0;
  local_88.fields._getEnumeratorRetType = 0;
  local_88.fields._36_4_ = 0;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_ctor);
  if (addonNames != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_b8,
               (System_Collections_Generic_List_T__o *)addonNames,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    local_a0 = (undefined1  [8])local_b8._0_8_;
    uStack_98 = local_b8._8_8_;
    local_90 = local_a8;
    while( true ) {
      do {
        bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_a0,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
        name = local_90;
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a0,
                     MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
          return __this;
        }
        if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
        }
        value = Map_BuiltinLevels__LoadAddon(name,(MethodInfo *)0x0);
        bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      } while (bVar1);
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      __this_00 = CustomLogic_CustomLogicManager__GetAddonSettingsGrouped(name,value,(MethodInfo *)0x0);
      if (__this_00 == (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)0x0
         ) break;
      System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
                (&local_50,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                 (MethodInfo_13C1150 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_GetEnumerator
                );
      local_88.fields._dictionary = local_50.fields._dictionary;
      local_88.fields._version = local_50.fields._version;
      local_88.fields._index = local_50.fields._index;
      local_88.fields._current.fields.key = local_50.fields._current.fields.key;
      local_88.fields._current.fields.value = local_50.fields._current.fields.value;
      local_88.fields._getEnumeratorRetType = local_50.fields._getEnumeratorRetType;
      local_88.fields._36_4_ = local_50.fields._36_4_;
      local_b8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_b8._8_8_ = &local_88;
      while( true ) {
        bVar1 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                          (&local_88,
                           (MethodInfo_1585360 *)
                           MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Dictionary_string_BaseSetting_MoveNext
                          );
        if (!bVar1) break;
        if (__this == (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)0x0)
        {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                   local_88.fields._current.fields.key,local_88.fields._current.fields.value,
                   (MethodInfo_147A7F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_set_Item
                  );
      }
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_88,
                 MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Dictionary_string_BaseSetting_Dispose
                );
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicManager$$GetModeDescription
// il2cpp: System_String_o* CustomLogic_CustomLogicManager__GetModeDescription (System_Collections_Generic_Dictionary_string__BaseSetting__o* settings, const MethodInfo* method);
// 0x1820a3cc0

System_String_o *
CustomLogic_CustomLogicManager__GetModeDescription
          (System_Collections_Generic_Dictionary_string__BaseSetting__o *settings,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Settings_BaseSetting_o *pSVar3;
  
  if (Il2CppMethodInitialized_18434690f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Description");
    Il2CppMethodInitialized_18434690f = '\x01';
  }
  if (settings != (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)settings,
                       (Il2CppObject *)"Description",
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ContainsKey);
    if (bVar2) {
      pSVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)settings,
                          (Il2CppObject *)"Description",
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item);
      if (pSVar3 != (Settings_BaseSetting_o *)0x0) {
        bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
        if ((bVar1 <= (pSVar3->klass->_2).typeHierarchyDepth) &&
           ((pSVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
          pSVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                             ((System_Collections_Generic_Dictionary_object__object__o *)settings,
                              (Il2CppObject *)"Description",
                              (MethodInfo_147A5B0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item);
          if (pSVar3 != (Settings_BaseSetting_o *)0x0) {
            bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
            if ((bVar1 <= (pSVar3->klass->_2).typeHierarchyDepth) &&
               ((pSVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
              return (*(uint64_t *)((char *)pSVar3 + 0x20));
            }
            il2cpp_codegen_raise_invalid_cast_exception(pSVar3,TypeInfo_Settings_StringSetting);
          }
          goto label_1820a3dec;
        }
      }
    }
    return "";
  }
label_1820a3dec:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicManager$$GetEditorEvaluator
// il2cpp: CustomLogic_CustomLogicEvaluator_o* CustomLogic_CustomLogicManager__GetEditorEvaluator (System_String_o* source, bool loadBaseLogic, const MethodInfo* method);
// 0x1820a3a70

CustomLogic_CustomLogicEvaluator_o *
CustomLogic_CustomLogicManager__GetEditorEvaluator
          (System_String_o *source,bool loadBaseLogic,MethodInfo *method)

{
  CustomLogic_CustomLogicCompiler_o *__this;
  CustomLogic_CustomLogicSourceFile_o *pCVar1;
  System_String_o *pSVar2;
  CustomLogic_CustomLogicLexer_o *__this_00;
  System_Collections_Generic_List_CustomLogicToken__o *tokens;
  CustomLogic_CustomLogicParser_o *__this_01;
  CustomLogic_CustomLogicStartAst_o *start;
  CustomLogic_CustomLogicEvaluator_o *__this_02;
  
  if (Il2CppMethodInitialized_184346910 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCompiler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLexer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicParser);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSourceFile);
    il2cpp_codegen_initialize_runtime_metadata(&"UserSource.cl");
    il2cpp_codegen_initialize_runtime_metadata(&"BaseLogic.cl");
    Il2CppMethodInitialized_184346910 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCompiler);
  CustomLogic_CustomLogicCompiler___ctor(__this,(MethodInfo *)0x0);
  if (loadBaseLogic) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pSVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->BaseLogic;
    pCVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSourceFile);
    CustomLogic_CustomLogicSourceFile___ctor(pCVar1,"BaseLogic.cl",pSVar2,1,(MethodInfo *)0x0);
    if (__this == (CustomLogic_CustomLogicCompiler_o *)0x0) goto label_1820a3cb0;
    CustomLogic_CustomLogicCompiler__AddSourceFile(__this,pCVar1,(MethodInfo *)0x0);
    pCVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSourceFile);
    CustomLogic_CustomLogicSourceFile___ctor(pCVar1,"UserSource.cl",source,4,(MethodInfo *)0x0);
  }
  else {
    pCVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSourceFile);
    CustomLogic_CustomLogicSourceFile___ctor(pCVar1,"UserSource.cl",source,4,(MethodInfo *)0x0);
    if (__this == (CustomLogic_CustomLogicCompiler_o *)0x0) goto label_1820a3cb0;
  }
  CustomLogic_CustomLogicCompiler__AddSourceFile(__this,pCVar1,(MethodInfo *)0x0);
  pSVar2 = CustomLogic_CustomLogicCompiler__Compile(__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLexer);
  CustomLogic_CustomLogicLexer___ctor(__this_00,pSVar2,__this,(MethodInfo *)0x0);
  if (__this_00 != (CustomLogic_CustomLogicLexer_o *)0x0) {
    tokens = CustomLogic_CustomLogicLexer__GetTokens(__this_00,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicParser);
    CustomLogic_CustomLogicParser___ctor(__this_01,tokens,__this,(MethodInfo *)0x0);
    if (__this_01 != (CustomLogic_CustomLogicParser_o *)0x0) {
      start = CustomLogic_CustomLogicParser__GetStartAst(__this_01,(MethodInfo *)0x0);
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      CustomLogic_CustomLogicEvaluator___ctor(__this_02,start,__this,(MethodInfo *)0x0);
      return __this_02;
    }
  }
label_1820a3cb0:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicManager$$TryParseLogic
// il2cpp: System_String_o* CustomLogic_CustomLogicManager__TryParseLogic (System_String_o* source, const MethodInfo* method);
// 0x1820a5ef0

System_String_o * CustomLogic_CustomLogicManager__TryParseLogic(System_String_o *source,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CustomLogicCompiler_o *__this;
  CustomLogic_CustomLogicSourceFile_o *pCVar2;
  System_String_o *pSVar3;
  CustomLogic_CustomLogicLexer_o *__this_00;
  System_Collections_Generic_List_CustomLogicToken__o *tokens;
  CustomLogic_CustomLogicParser_o *__this_01;
  
  if (Il2CppMethodInitialized_184346911 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCompiler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLexer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicParser);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSourceFile);
    il2cpp_codegen_initialize_runtime_metadata(&"UserSource.cl");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"BaseLogic.cl");
    Il2CppMethodInitialized_184346911 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCompiler);
  CustomLogic_CustomLogicCompiler___ctor(__this,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pSVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->BaseLogic;
  pCVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSourceFile);
  CustomLogic_CustomLogicSourceFile___ctor(pCVar2,"BaseLogic.cl",pSVar3,1,(MethodInfo *)0x0);
  if (__this != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    CustomLogic_CustomLogicCompiler__AddSourceFile(__this,pCVar2,(MethodInfo *)0x0);
    pCVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSourceFile);
    CustomLogic_CustomLogicSourceFile___ctor(pCVar2,"UserSource.cl",source,4,(MethodInfo *)0x0);
    CustomLogic_CustomLogicCompiler__AddSourceFile(__this,pCVar2,(MethodInfo *)0x0);
    pSVar3 = CustomLogic_CustomLogicCompiler__Compile(__this,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLexer);
    CustomLogic_CustomLogicLexer___ctor(__this_00,pSVar3,__this,(MethodInfo *)0x0);
    if (__this_00 != (CustomLogic_CustomLogicLexer_o *)0x0) {
      tokens = CustomLogic_CustomLogicLexer__GetTokens(__this_00,(MethodInfo *)0x0);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicParser);
      CustomLogic_CustomLogicParser___ctor(__this_01,tokens,__this,(MethodInfo *)0x0);
      bVar1 = System_String__op_Inequality
                        ((__this_00->fields).Error,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                         (MethodInfo *)0x0);
      if (bVar1) {
        return (__this_00->fields).Error;
      }
      if (__this_01 != (CustomLogic_CustomLogicParser_o *)0x0) {
        CustomLogic_CustomLogicParser__GetStartAst(__this_01,(MethodInfo *)0x0);
        bVar1 = System_String__op_Inequality
                          ((__this_01->fields).Error,
                           (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
        if (!bVar1) {
          return "";
        }
        return (__this_01->fields).Error;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicManager$$StartLogic
// il2cpp: void CustomLogic_CustomLogicManager__StartLogic (System_Collections_Generic_Dictionary_string__BaseSetting__o* modeSettings, System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o* addonSettings, const MethodInfo* method);
// 0x1820a53c0
// eh: try 0x1820a5730..0x1820a5cf5 -> pad 0x183315a20 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820a5729: nop dword ptr [rax]
// asm:   0x1820a589a: mov rdx, qword ptr [rip + 0x1ff2077]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x1820a58a1: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1820a58a6: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820a58ab: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1820a58b0: test rcx, rcx
// asm:   0x1820a58b3: jne 0x1820a5cf5
// asm:   0x1820a58b9: xor r12d, r12d
// asm:   0x1820a5cf5: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315a20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315a25: push rbp
// asm:   0x183315a26: sub rsp, 0x30
// asm:   0x183315a2a: mov rbp, rdx
// asm:   0x183315a2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183315a31: mov rcx, qword ptr [rax]
// asm:   0x183315a34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183315a38: movabs rax, 0
// asm:   0x183315a42: add rsp, 0x30
// asm:   0x183315a46: pop rbp
// asm:   0x183315a47: ret 

void CustomLogic_CustomLogicManager__StartLogic
               (System_Collections_Generic_Dictionary_string__BaseSetting__o *modeSettings,
               System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *addonSettings
               ,MethodInfo *method)

{
  int32_t mapLogicOffset;
  Settings_InGameSet_o *pSVar1;
  Settings_InGameGeneralSettings_o *pSVar2;
  Settings_ListSetting_StringSetting__o *pSVar3;
  System_Collections_Generic_List_T__o *source;
  Il2CppObject *object;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Settings_StringSetting_o *pSVar4;
  Map_MapScript_o *pMVar5;
  bool bVar6;
  CustomLogic_CustomLogicCompiler_o *pCVar7;
  CustomLogic_CustomLogicSourceFile_o *pCVar8;
  System_Func_StringSetting__string__o *__this_00;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Collections_Generic_List_TSource__o *__this_01;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  CustomLogic_CustomLogicLexer_o *__this_02;
  System_Collections_Generic_List_CustomLogicToken__o *tokens;
  CustomLogic_CustomLogicParser_o *__this_03;
  CustomLogic_CustomLogicStartAst_o *start;
  CustomLogic_CustomLogicEvaluator_o *pCVar11;
  System_String_o *local_res20;
  undefined1 local_70 [16];
  System_String_o *local_60;
  undefined1 local_58 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_50;
  System_String_o *local_48;
  
  if (Il2CppMethodInitialized_184346912 == '\0') {
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
    Il2CppMethodInitialized_184346912 = '\x01';
  }
  local_58 = (undefined1  [8])0x0;
  pUStack_50 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_48 = (System_String_o *)0x0;
  local_res20 = (System_String_o *)0x0;
  pCVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCompiler);
  CustomLogic_CustomLogicCompiler___ctor(pCVar7,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  TypeInfo_CustomLogic_CustomLogicManager->static_fields->Compiler = pCVar7;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicManager->static_fields->Compiler,pCVar7);
  pCVar7 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Compiler;
  pSVar10 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->BaseLogic;
  pCVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSourceFile);
  CustomLogic_CustomLogicSourceFile___ctor(pCVar8,"BaseLogic.cl",pSVar10,1,(MethodInfo *)0x0);
  if (pCVar7 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    CustomLogic_CustomLogicCompiler__AddSourceFile(pCVar7,pCVar8,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
    if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
        (pSVar2 = (pSVar1->fields).General, pSVar2 != (Settings_InGameGeneralSettings_o *)0x0)) &&
       (pSVar3 = (pSVar2->fields).Addons, pSVar3 != (Settings_ListSetting_StringSetting__o *)0x0)) {
      source = (pSVar3->fields)._value;
      if ((TypeInfo_CustomLogic_CustomLogicManager_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager_c);
      }
      __this_00 = TypeInfo_CustomLogic_CustomLogicManager_c->static_fields->__9__49_0;
      if (__this_00 == (System_Func_StringSetting__string__o *)0x0) {
        if ((TypeInfo_CustomLogic_CustomLogicManager_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager_c);
        }
        object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicManager_c->static_fields->__9;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_StringSetting_string);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_00,object,
                   (intptr_t)MethodInfo_CustomLogic_CustomLogicManager_c_StartLogic_b__49_0,
                   (MethodInfo_16E67D0 *)0x0);
        TypeInfo_CustomLogic_CustomLogicManager_c->static_fields->__9__49_0 = __this_00;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_CustomLogic_CustomLogicManager_c->static_fields->__9__49_0,__this_00);
      }
      source_00 = System_Linq_Enumerable__Select_Vector3__object_
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                             (System_Func_TSource__TResult__o *)__this_00,
                             (MethodInfo_6C2170 *)
                             MethodInfo_System_Linq_Enumerable_Select_StringSetting_string);
      __this_01 = System_Linq_Enumerable__ToList_object_
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                             (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_string);
      if (__this_01 != (System_Collections_Generic_List_TSource__o *)0x0) {
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_70,
                   (System_Collections_Generic_List_T__o *)__this_01,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
        local_58 = (undefined1  [8])local_70._0_8_;
        pUStack_50 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_70._8_8_;
        local_48 = local_60;
        local_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_70._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58;
        while( true ) {
          bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
                             (MethodInfo_153A2A0 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
          pSVar10 = local_48;
          if (!bVar6) break;
          if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
          }
          bVar6 = Map_BuiltinLevels__IsAddonBuiltin(pSVar10,(MethodInfo *)0x0);
          if (bVar6) {
            if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
            }
            local_res20 = Map_BuiltinLevels__LoadAddon(pSVar10,(MethodInfo *)0x0);
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
            System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this,(Il2CppObject *)pSVar10,(Il2CppObject **)&local_res20,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
          }
          bVar6 = System_String__IsNullOrEmpty(local_res20,(MethodInfo *)0x0);
          if (!bVar6) {
            if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
            }
            pCVar7 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Compiler;
            pSVar9 = System_String__Concat_1969e50(pSVar10,".addon",(MethodInfo *)0x0);
            pSVar10 = local_res20;
            pCVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSourceFile);
            CustomLogic_CustomLogicSourceFile___ctor(pCVar8,pSVar9,pSVar10,2,(MethodInfo *)0x0);
            if (pCVar7 == (CustomLogic_CustomLogicCompiler_o *)0x0) {
              ThrowNullReferenceException();
            }
            CustomLogic_CustomLogicCompiler__AddSourceFile(pCVar7,pCVar8,(MethodInfo *)0x0);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58,
                   MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
        pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
        if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
            (pSVar2 = (pSVar1->fields).General, pSVar2 != (Settings_InGameGeneralSettings_o *)0x0)) &&
           (pSVar4 = (pSVar2->fields).GameMode, pSVar4 != (Settings_StringSetting_o *)0x0)) {
          pSVar10 = (pSVar4->fields)._value;
          if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
          }
          bVar6 = System_String__op_Equality
                            (pSVar10,TypeInfo_Map_BuiltinLevels->static_fields->UseMapLogic,(MethodInfo *)0x0)
          ;
          if (bVar6) {
            if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
            }
            if (TypeInfo_Map_MapManager->static_fields->MapScript != (Map_MapScript_o *)0x0) {
              if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
              }
              pMVar5 = TypeInfo_Map_MapManager->static_fields->MapScript;
              if (pMVar5 == (Map_MapScript_o *)0x0) goto label_1820a5ce3;
              pSVar10 = (pMVar5->fields).Logic;
              bVar6 = System_String__IsNullOrEmpty(pSVar10,(MethodInfo *)0x0);
              if (!bVar6) {
                pSVar4 = (pSVar2->fields).MapName;
                if (pSVar4 == (Settings_StringSetting_o *)0x0) goto label_1820a5ce3;
                pSVar9 = (pSVar4->fields)._value;
                if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                }
                pCVar7 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Compiler;
                pSVar9 = System_String__Concat_1969e50(pSVar9,".txt",(MethodInfo *)0x0);
                if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
                }
                pMVar5 = TypeInfo_Map_MapManager->static_fields->MapScript;
                if (pMVar5 == (Map_MapScript_o *)0x0) goto label_1820a5ce3;
                mapLogicOffset = (pMVar5->fields).LogicStart;
                pCVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSourceFile);
                CustomLogic_CustomLogicSourceFile___ctor_20e84d0
                          (pCVar8,pSVar9,pSVar10,3,mapLogicOffset,(MethodInfo *)0x0);
                if (pCVar7 == (CustomLogic_CustomLogicCompiler_o *)0x0) goto label_1820a5ce3;
                CustomLogic_CustomLogicCompiler__AddSourceFile(pCVar7,pCVar8,(MethodInfo *)0x0);
              }
            }
          }
          if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          }
          bVar6 = System_String__IsNullOrEmpty
                            (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Logic,(MethodInfo *)0x0);
          if (!bVar6) {
            pSVar4 = (pSVar2->fields).GameMode;
            if (pSVar4 == (Settings_StringSetting_o *)0x0) goto label_1820a5ce3;
            pSVar10 = (pSVar4->fields)._value;
            if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
            }
            bVar6 = System_String__op_Equality
                              (pSVar10,TypeInfo_Map_BuiltinLevels->static_fields->UseMapLogic,
                               (MethodInfo *)0x0);
            if (!bVar6) {
              if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
              }
              pCVar7 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Compiler;
              pSVar9 = System_String__Concat_1969e50(pSVar10,".cl",(MethodInfo *)0x0);
              pSVar10 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Logic;
              pCVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSourceFile);
              CustomLogic_CustomLogicSourceFile___ctor(pCVar8,pSVar9,pSVar10,4,(MethodInfo *)0x0);
              if (pCVar7 == (CustomLogic_CustomLogicCompiler_o *)0x0) goto label_1820a5ce3;
              CustomLogic_CustomLogicCompiler__AddSourceFile(pCVar7,pCVar8,(MethodInfo *)0x0);
            }
          }
          if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          }
          pCVar7 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Compiler;
          if (pCVar7 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
            pSVar10 = CustomLogic_CustomLogicCompiler__Compile(pCVar7,(MethodInfo *)0x0);
            pCVar7 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Compiler;
            __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLexer);
            CustomLogic_CustomLogicLexer___ctor(__this_02,pSVar10,pCVar7,(MethodInfo *)0x0);
            if (__this_02 != (CustomLogic_CustomLogicLexer_o *)0x0) {
              tokens = CustomLogic_CustomLogicLexer__GetTokens(__this_02,(MethodInfo *)0x0);
              pCVar7 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Compiler;
              __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicParser);
              CustomLogic_CustomLogicParser___ctor(__this_03,tokens,pCVar7,(MethodInfo *)0x0);
              if (__this_03 != (CustomLogic_CustomLogicParser_o *)0x0) {
                start = CustomLogic_CustomLogicParser__GetStartAst(__this_03,(MethodInfo *)0x0);
                pCVar7 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Compiler;
                pCVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
                CustomLogic_CustomLogicEvaluator___ctor(pCVar11,start,pCVar7,(MethodInfo *)0x0);
                TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator = pCVar11;
                Il2CppCodeGenWriteBarrier
                          (&TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator,pCVar11);
                pCVar11 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
                if (pCVar11 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                  CustomLogic_CustomLogicEvaluator__Start
                            (pCVar11,modeSettings,addonSettings,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_1820a5ce3:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicManager$$FixedUpdate
// il2cpp: void CustomLogic_CustomLogicManager__FixedUpdate (CustomLogic_CustomLogicManager_o* __this, const MethodInfo* method);
// 0x1820a3450

void CustomLogic_CustomLogicManager__FixedUpdate(CustomLogic_CustomLogicManager_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  
  if (Il2CppMethodInitialized_184346913 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_184346913 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator !=
      (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      CustomLogic_CustomLogicEvaluator__OnTick(__this_00,(MethodInfo *)0x0);
      return;
    }
    ThrowNullReferenceException();
  }
  return;
}


// CustomLogic.CustomLogicManager$$Update
// il2cpp: void CustomLogic_CustomLogicManager__Update (CustomLogic_CustomLogicManager_o* __this, const MethodInfo* method);
// 0x1820a6120
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820a6409: mov rdx, qword ptr [rip + 0x20489b0]  ; TypeInfo_CustomLogic_CustomLogicManager

void CustomLogic_CustomLogicManager__Update(CustomLogic_CustomLogicManager_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_CustomLogicManager_StaticFields *pCVar7;
  Settings_GeneralSettings_o *pSVar8;
  Settings_BoolSetting_o *pSVar9;
  Settings_InputSettings_o *pSVar10;
  Settings_GeneralInputSettings_o *pSVar11;
  Settings_KeybindSetting_o *__this_01;
  bool bVar12;
  float fVar13;
  
  if (Il2CppMethodInitialized_184346914 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184346914 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator !=
      (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_1820a643b;
    CustomLogic_CustomLogicEvaluator__OnFrame(__this_00,(MethodInfo *)0x0);
    if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Cutscene == false) {
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->ManualCamera == false) goto label_1820a62d6;
    }
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar7 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
    fVar1 = (pCVar7->CameraPosition).fields.x;
    fVar2 = (pCVar7->CameraPosition).fields.y;
    fVar3 = (pCVar7->CameraPosition).fields.z;
    fVar4 = (pCVar7->CameraVelocity).fields.x;
    fVar5 = (pCVar7->CameraVelocity).fields.y;
    fVar6 = (pCVar7->CameraVelocity).fields.z;
    fVar13 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    pCVar7 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
    (pCVar7->CameraPosition).fields.x = fVar4 * fVar13 + fVar1;
    (pCVar7->CameraPosition).fields.y = fVar5 * fVar13 + fVar2;
    (pCVar7->CameraPosition).fields.z = fVar6 * fVar13 + fVar3;
  }
label_1820a62d6:
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->SkipCutscene != false) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Cutscene == false) {
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      TypeInfo_CustomLogic_CustomLogicManager->static_fields->SkipCutscene = false;
    }
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Cutscene == false) {
    return;
  }
  pSVar8 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
  if ((pSVar8 != (Settings_GeneralSettings_o *)0x0) &&
     (pSVar9 = (pSVar8->fields).SkipCutscenes, pSVar9 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar9->fields)._value == false) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      bVar12 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
      if (bVar12) {
        return;
      }
      bVar12 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
      if (bVar12) {
        return;
      }
      pSVar10 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
      if (((pSVar10 == (Settings_InputSettings_o *)0x0) ||
          (pSVar11 = (pSVar10->fields).General, pSVar11 == (Settings_GeneralInputSettings_o *)0x0)) ||
         (__this_01 = (pSVar11->fields).SkipCutscene, __this_01 == (Settings_KeybindSetting_o *)0x0))
      goto label_1820a643b;
      bVar12 = Settings_KeybindSetting__GetKeyDown(__this_01,false,(MethodInfo *)0x0);
      if (!bVar12) {
        return;
      }
    }
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    TypeInfo_CustomLogic_CustomLogicManager->static_fields->SkipCutscene = true;
    return;
  }
label_1820a643b:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicManager$$LateUpdate
// il2cpp: void CustomLogic_CustomLogicManager__LateUpdate (CustomLogic_CustomLogicManager_o* __this, const MethodInfo* method);
// 0x1820a4630

void CustomLogic_CustomLogicManager__LateUpdate(CustomLogic_CustomLogicManager_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  
  if (Il2CppMethodInitialized_184346915 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_184346915 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator !=
      (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      CustomLogic_CustomLogicEvaluator__OnLateFrame(__this_00,(MethodInfo *)0x0);
      return;
    }
    ThrowNullReferenceException();
  }
  return;
}


// CustomLogic.CustomLogicManager$$.ctor
// il2cpp: void CustomLogic_CustomLogicManager___ctor (CustomLogic_CustomLogicManager_o* __this, const MethodInfo* method);
// 0x18190eda0

void
CustomLogic_CustomLogicManager___ctor(CustomLogic_CustomLogicManager_o* __this, MethodInfo* method)

{
  Photon_Pun_MonoBehaviourPunCallbacks___ctor((GetParentPosition_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicManager$$.cctor
// il2cpp: void CustomLogic_CustomLogicManager___cctor (const MethodInfo* method);
// 0x1820a64d0

void CustomLogic_CustomLogicManager___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__string__o *__this;
  System_Collections_Generic_HashSet_KeybindSetting__o *pSVar1;
  System_Collections_Generic_Dictionary_string__object__o *pSVar2;
  System_Collections_Generic_HashSet_string__o *pSVar3;
  
  if (Il2CppMethodInitialized_184346916 == '\0') {
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
    Il2CppMethodInitialized_184346916 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  TypeInfo_CustomLogic_CustomLogicManager->static_fields->CustomAddonSources = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicManager->static_fields->CustomAddonSources,__this);
  (TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraMode).fields =
       (System_Nullable_CameraInputMode__Fields)0x0;
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_KeybindSetting);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pSVar1,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_ctor);
  TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindDefaultDisabled = pSVar1;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindDefaultDisabled,pSVar1);
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_KeybindSetting);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pSVar1,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_ctor);
  TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindHold = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindHold,pSVar1);
  pSVar2 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
  TypeInfo_CustomLogic_CustomLogicManager->static_fields->RoomData = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicManager->static_fields->RoomData,pSVar2);
  pSVar2 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
  TypeInfo_CustomLogic_CustomLogicManager->static_fields->PersistentData = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicManager->static_fields->PersistentData,pSVar2);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pSVar3,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  TypeInfo_CustomLogic_CustomLogicManager->static_fields->GeneralComponents = pSVar3;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicManager->static_fields->GeneralComponents,pSVar3)
  ;
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pSVar3,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  TypeInfo_CustomLogic_CustomLogicManager->static_fields->InternalComponents = pSVar3;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicManager->static_fields->InternalComponents,pSVar3);
  TypeInfo_CustomLogic_CustomLogicManager->static_fields->_hasRestarted = false;
  return;
}


