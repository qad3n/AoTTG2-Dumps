// Type: UI.CharacterInfoHandler
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/CharacterInfoHandler.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterInfoHandler.cs
// --------------------------------

// UI.CharacterInfoHandler.<>c$$.cctor
// il2cpp: void UI_CharacterInfoHandler___c___cctor (const MethodInfo* method);
// 0x18223a400

void UI_CharacterInfoHandler___c___cctor(MethodInfo *method)

{
  UI_CharacterInfoHandler___c_o *__this;
  
  if (Il2CppMethodInitialized_184347198 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterInfoHandler_c);
    Il2CppMethodInitialized_184347198 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_CharacterInfoHandler_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_UI_CharacterInfoHandler_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_CharacterInfoHandler_c->static_fields->__9,__this);
  return;
}


// UI.CharacterInfoHandler.<>c$$.ctor
// il2cpp: void UI_CharacterInfoHandler___c___ctor (UI_CharacterInfoHandler___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_CharacterInfoHandler___c___ctor(UI_CharacterInfoHandler___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterInfoHandler.<>c$$<RefreshDict>b__14_0
// il2cpp: bool UI_CharacterInfoHandler___c___RefreshDict_b__14_0 (UI_CharacterInfoHandler___c_o* __this, Assets_Scripts_Utility_SetItem_BaseCharacter__CharacterInfoPopup__o* e, const MethodInfo* method);
// 0x182239a10

bool UI_CharacterInfoHandler___c___RefreshDict_b__14_0
               (UI_CharacterInfoHandler___c_o *__this,
               Assets_Scripts_Utility_SetItem_BaseCharacter__CharacterInfoPopup__o *e,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  UI_CharacterInfoPopup_o *__this_00;
  bool bVar2;
  UnityEngine_Object_o *obj;
  
  if (Il2CppMethodInitialized_184347199 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Assets_Scripts_Utility_SetItem_BaseCharacter_CharacterInfoPopup_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Assets_Scripts_Utility_SetItem_BaseCharacter_CharacterInfoPopup_get_Value);
    Il2CppMethodInitialized_184347199 = '\x01';
  }
  if (e != (Assets_Scripts_Utility_SetItem_BaseCharacter__CharacterInfoPopup__o *)0x0) {
    pCVar1 = (e->fields)._Key_k__BackingField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pCVar1,(MethodInfo *)0x0);
    if (bVar2) {
      pCVar1 = (e->fields)._Key_k__BackingField;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_182239ad8;
      if ((pCVar1->fields).Dead == false) {
        return false;
      }
    }
    __this_00 = (e->fields)._Value_k__BackingField;
    if (__this_00 != (UI_CharacterInfoPopup_o *)0x0) {
      obj = (UnityEngine_Object_o *)
            UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
      return true;
    }
  }
label_182239ad8:
  ThrowNullReferenceException();
}


// UI.CharacterInfoHandler$$Awake
// il2cpp: void UI_CharacterInfoHandler__Awake (UI_CharacterInfoHandler_o* __this, const MethodInfo* method);
// 0x182220910

void UI_CharacterInfoHandler__Awake(UI_CharacterInfoHandler_o *__this,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *value;
  
  if (Il2CppMethodInitialized_184347193 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184347193 = '\x01';
  }
  value = (GameManagers_InGameManager_o *)
          TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (value == (GameManagers_InGameManager_o *)0x0) {
    (__this->fields)._inGameManager = (GameManagers_InGameManager_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._inGameManager,(void *)0x0);
    return;
  }
  bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
  if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
     ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
    il2cpp_codegen_raise_invalid_cast_exception(value);
  }
  (__this->fields)._inGameManager = value;
  bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
  if ((bVar1 <= (value->klass->_2).typeHierarchyDepth) &&
     ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
      (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
    Il2CppCodeGenWriteBarrier(&(__this->fields)._inGameManager,value);
    return;
  }
  il2cpp_codegen_raise_invalid_cast_exception(value);
}


// UI.CharacterInfoHandler$$LateUpdate
// il2cpp: void UI_CharacterInfoHandler__LateUpdate (UI_CharacterInfoHandler_o* __this, const MethodInfo* method);
// 0x182220f80
// eh: try 0x1822212a9..0x182221b5a -> pad 0x18333f630 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822210d1: mov qword ptr [rsp + 0x40], r14
// asm:   0x1822210d6: jmp 0x18222110b
// asm:   0x1822212b8: mov r12d, 1
// asm:   0x1822212be: mov r15d, dword ptr [rsp + 0x2b8]
// asm:   0x1822212c6: nop word ptr [rax + rax]
// asm:   0x1822212d0: mov r14d, dword ptr [rsp + 0x2b0]
// asm:   0x182221530: movzx eax, r14b
// asm:   0x182221835: mov r14, qword ptr [rsp + 0x40]
// asm:   0x182221a5a: mov rdx, qword ptr [rip + 0x1e4f917]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_SetItem_BaseCharacter_CharacterInfoPopup_Dispose
// asm:   0x182221a61: mov rcx, qword ptr [rsp + 0x98]
// asm:   0x182221a69: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182221a6e: mov rcx, qword ptr [rsp + 0x90]
// asm:   0x182221a76: test rcx, rcx
// asm:   0x182221a79: jne 0x182221b5a
// asm:   0x182221b5a: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333f630: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333f635: push rbp
// asm:   0x18333f636: sub rsp, 0x30
// asm:   0x18333f63a: mov rbp, rdx
// asm:   0x18333f63d: mov rax, qword ptr [rbp + 0x150]
// asm:   0x18333f644: mov rcx, qword ptr [rax]
// asm:   0x18333f647: mov qword ptr [rbp + 0x90], rcx
// asm:   0x18333f64e: movabs rax, 0
// asm:   0x18333f658: add rsp, 0x30
// asm:   0x18333f65c: pop rbp
// asm:   0x18333f65d: ret 

void UI_CharacterInfoHandler__LateUpdate(UI_CharacterInfoHandler_o *__this,MethodInfo *method)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  Cameras_InGameCamera_o *__this_00;
  GameManagers_BaseGameManager_o *pGVar13;
  Settings_UISettings_o *pSVar14;
  Settings_IntSetting_o *pSVar15;
  Settings_IntSetting_o *pSVar16;
  Settings_IntSetting_o *pSVar17;
  System_Collections_Generic_HashSet_Vector2Int__o *__this_01;
  Il2CppClass *__this_02;
  UI_CharacterInfoPopup_o *__this_03;
  Characters_BaseCharacter_c *pCVar18;
  GameManagers_InGameManager_o *pGVar19;
  Settings_InGameSet_o *pSVar20;
  Settings_InGameMiscSettings_o *pSVar21;
  Settings_BoolSetting_o *pSVar22;
  Utility_BaseComponentCache_o *pUVar23;
  UnityEngine_Camera_o *pUVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  UnityEngine_LayerMask_o layerMask;
  Il2CppClass *pIVar31;
  UnityEngine_Vector3_o *pUVar32;
  UnityEngine_Transform_o *pUVar33;
  UnityEngine_GameObject_o *__this_04;
  bool bVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float local_248;
  float local_244;
  float local_240;
  UnityEngine_Vector3_o local_238;
  UnityEngine_Vector3_o local_228;
  UnityEngine_Vector3_o local_218;
  undefined8 local_208;
  System_Collections_Generic_HashSet_Enumerator_T__o *local_200;
  System_Collections_Generic_HashSet_Enumerator_T__o local_1f8;
  undefined8 local_1d8;
  float local_1d0;
  UnityEngine_Vector3_Fields local_1c8;
  undefined8 local_1b8;
  float local_1b0;
  UnityEngine_Vector3_Fields local_1a8;
  UnityEngine_Vector3_Fields local_198;
  UnityEngine_Vector3_Fields local_188;
  UnityEngine_Vector3_Fields local_178;
  undefined1 local_168 [8];
  float fStack_160;
  float fStack_15c;
  Il2CppObject *local_158;
  UnityEngine_Vector3_o local_140;
  UnityEngine_Vector3_o local_130;
  UnityEngine_Vector3_o local_120;
  UnityEngine_Vector3_o local_110;
  UnityEngine_Vector3_o local_100;
  UnityEngine_Vector3_o local_f0;
  UnityEngine_Vector3_o local_e0;
  UnityEngine_Vector3_o local_d0 [12];
  
  if (Il2CppMethodInitialized_184347194 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_SetItem_BaseCharacter_CharacterInfoPopup_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_SetItem_BaseCharacter_CharacterInfoPopup_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_SetItem_BaseCharacter_CharacterInfoPopup_get_Curre
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_HashSet_SetItem_BaseCharacter_CharacterInfoPopup_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Assets_Scripts_Utility_SetItem_BaseCharacter_CharacterInfoPopup_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Assets_Scripts_Utility_SetItem_BaseCharacter_CharacterInfoPopup_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184347194 = '\x01';
  }
  local_1f8.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_1f8.fields._index = 0;
  local_1f8.fields._version = 0;
  local_1f8.fields._current = (Il2CppObject *)0x0;
  UI_CharacterInfoHandler__RefreshDict(__this,(MethodInfo *)0x0);
  __this_00 = (Cameras_InGameCamera_o *)TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera
  ;
  if (__this_00 != (Cameras_InGameCamera_o *)0x0) {
    bVar5 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar5) ||
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar5 - 1] !=
        (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00);
    }
  }
  bVar26 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
  if (bVar26) {
label_1822211d5:
    cVar6 = '\x01';
  }
  else {
    pGVar13 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar13 == (GameManagers_BaseGameManager_o *)0x0) goto label_182221b60;
    bVar5 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((pGVar13->klass->_2).typeHierarchyDepth < bVar5) ||
       ((pGVar13->klass->_2).typeHierarchy[(ulonglong)bVar5 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(pGVar13);
    }
    if (*(int *)&(*(uint64_t *)((char *)pGVar13 + 0x70)) == 0) goto label_1822211d5;
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    }
    if (Il2CppMethodInitialized_184347205 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
      Il2CppMethodInitialized_184347205 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    }
    cVar6 = TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->_forceHideCharacterNames;
  }
  pSVar14 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((((pSVar14 != (Settings_UISettings_o *)0x0) &&
       (pSVar15 = (pSVar14->fields).ShowNames, pSVar15 != (Settings_IntSetting_o *)0x0)) &&
      (pSVar16 = (pSVar14->fields).ShowHealthbars, pSVar16 != (Settings_IntSetting_o *)0x0)) &&
     ((pSVar17 = (pSVar14->fields).NameOverrideTarget, pSVar17 != (Settings_IntSetting_o *)0x0 &&
      (__this_01 = (System_Collections_Generic_HashSet_Vector2Int__o *)(__this->fields)._characterInfoPopups,
      __this_01 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0)))) {
    iVar7 = (pSVar15->fields)._value;
    iVar8 = (pSVar16->fields)._value;
    iVar9 = (pSVar17->fields)._value;
    System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_168,__this_01,
               (MethodInfo_175C200 *)
               MethodInfo_System_Collections_Generic_HashSet_SetItem_BaseCharacter_CharacterInfoPopup_GetEnumerator
              );
    local_1f8.fields._current = local_158;
    local_208 = 0;
    local_200 = &local_1f8;
label_1822212d8:
    do {
      bVar26 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                         (&local_1f8,
                          (MethodInfo_15381F0 *)
                          MethodInfo_System_Collections_Generic_HashSet_Enumerator_SetItem_BaseCharacter_CharacterInfoPopup_MoveNext
                         );
      if (!bVar26) {
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_1f8,
                   MethodInfo_System_Collections_Generic_HashSet_Enumerator_SetItem_BaseCharacter_CharacterInfoPopup_Dispose
                  );
        return;
      }
      if (local_1f8.fields._current == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      __this_02 = local_1f8.fields._current[1].klass;
      __this_03 = local_1f8.fields._current[1].monitor;
      if (iVar7 == 0) {
label_18222132f:
        bVar26 = true;
      }
      else {
        if (iVar7 == 1) {
          if (__this_02 == (Il2CppClass *)0x0) {
            ThrowNullReferenceException();
          }
          bVar26 = Characters_BaseCharacter__IsMainCharacter
                             ((Characters_BaseCharacter_o *)__this_02,(MethodInfo *)0x0);
          if (bVar26) goto label_18222132f;
        }
        else if (iVar7 == 2) {
          if (__this_02 == (Il2CppClass *)0x0) {
            ThrowNullReferenceException();
          }
          bVar26 = Characters_BaseCharacter__IsMainCharacter
                             ((Characters_BaseCharacter_o *)__this_02,(MethodInfo *)0x0);
          bVar26 = !bVar26;
          goto label_182221332;
        }
        bVar26 = false;
      }
label_182221332:
      if (iVar8 == 0) {
label_182221354:
        bVar27 = true;
label_182221357:
        if (__this_02 == (Il2CppClass *)0x0) {
          ThrowNullReferenceException();
        }
      }
      else {
        if (iVar8 == 1) {
          if (__this_02 == (Il2CppClass *)0x0) {
            ThrowNullReferenceException();
          }
          bVar27 = Characters_BaseCharacter__IsMainCharacter
                             ((Characters_BaseCharacter_o *)__this_02,(MethodInfo *)0x0);
          if (bVar27) goto label_182221354;
label_1822213b2:
          bVar27 = false;
          goto label_182221357;
        }
        if (iVar8 != 2) goto label_1822213b2;
        if (__this_02 == (Il2CppClass *)0x0) {
          ThrowNullReferenceException();
        }
        bVar27 = Characters_BaseCharacter__IsMainCharacter
                           ((Characters_BaseCharacter_o *)__this_02,(MethodInfo *)0x0);
        bVar27 = !bVar27;
      }
      if ((*(bool *)&(__this_02->_1).fields == false) || (*(bool *)&(__this_02->_1).declaringType == false)) {
        bVar28 = false;
      }
      else {
        bVar28 = System_String__IsNullOrWhiteSpace
                           ((System_String_o *)(__this_02->_1).castClass,(MethodInfo *)0x0);
        bVar28 = !bVar28;
      }
      if (*(bool *)&(__this_02->_1).fields == false) {
        pCVar18 = (__this_02->_1).image;
        bVar5 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
        if (((pCVar18->_2).typeHierarchyDepth < bVar5) ||
           ((pCVar18->_2).typeHierarchy[(ulonglong)bVar5 - 1] != (Il2CppClass *)TypeInfo_Characters_BasicTitan
           )) {
          bVar34 = false;
        }
        else {
          bVar34 = true;
        }
        pIVar31 = (Il2CppClass *)0x0;
        if (bVar34) {
          pIVar31 = __this_02;
        }
        bVar34 = pIVar31 == (Il2CppClass *)0x0;
      }
      else {
        bVar34 = false;
      }
      if ((bVar27) && (1 < *(int32_t *)((longlong)&(__this_02->_1).fields + 4))) {
        iVar10 = *(int *)&(__this_02->_1).events;
        iVar11 = *(int32_t *)((longlong)&(__this_02->_1).fields + 4);
        bVar27 = iVar10 < iVar11;
        bVar25 = iVar11 <= iVar10;
      }
      else {
        bVar27 = false;
        bVar25 = true;
      }
      if (iVar9 == 0) {
label_18222148d:
        bVar29 = true;
      }
      else {
        if (iVar9 == 1) {
          pCVar18 = (__this_02->_1).image;
          bVar29 = (*(pCVar18->vtable)._74_IsMine.methodPtr)(__this_02,(pCVar18->vtable)._74_IsMine.method);
          if (bVar29) goto label_18222148d;
        }
        else if (iVar9 == 2) {
          pCVar18 = (__this_02->_1).image;
          bVar29 = (*(pCVar18->vtable)._74_IsMine.methodPtr)(__this_02,(pCVar18->vtable)._74_IsMine.method);
          bVar29 = !bVar29;
          goto label_182221495;
        }
        bVar29 = false;
      }
label_182221495:
      pGVar19 = (__this->fields)._inGameManager;
      if (pGVar19 == (GameManagers_InGameManager_o *)0x0) {
        ThrowNullReferenceException();
      }
      if ((pGVar19->fields).Restarting == false) {
        pSVar20 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
        if (pSVar20 == (Settings_InGameSet_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar21 = (pSVar20->fields).Misc;
        if (pSVar21 == (Settings_InGameMiscSettings_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar22 = (pSVar21->fields).RealismMode;
        if (pSVar22 == (Settings_BoolSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        if ((pSVar22->fields)._value != false) goto label_182221525;
        bVar30 = Characters_BaseCharacter__IsMainCharacter
                           ((Characters_BaseCharacter_o *)__this_02,(MethodInfo *)0x0);
        if (bVar30) {
          if (__this_00 == (Cameras_InGameCamera_o *)0x0) {
            ThrowNullReferenceException();
          }
          fVar35 = Cameras_InGameCamera__GetCameraDistance(__this_00,(MethodInfo *)0x0);
          if (fVar35 <= 0.0) goto label_182221525;
        }
        bVar26 = (bool)(bVar26 & (bVar34 | bVar28));
        if (bVar26) {
          bVar25 = false;
        }
      }
      else {
label_182221525:
        bVar27 = false;
        bVar26 = false;
        bVar25 = true;
      }
      if (cVar6 != '\0') {
        bVar25 = true;
      }
      if (!bVar25) {
        pIVar31 = (__this_02->_1).klass;
        if (pIVar31 == (Il2CppClass *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar33 = ((Utility_BaseComponentCache_Fields *)&(pIVar31->_1).name)->Transform;
        if (pUVar33 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar32 = UnityEngine_Transform__get_position(&local_140,pUVar33,(MethodInfo *)0x0);
        if (__this_03 == (UI_CharacterInfoPopup_o *)0x0) {
          ThrowNullReferenceException();
        }
        if (__this_00 == (Cameras_InGameCamera_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar23 = (__this_00->fields).Cache;
        if (pUVar23 == (Utility_BaseComponentCache_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar33 = (pUVar23->fields).Transform;
        if (pUVar33 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        fVar37 = (__this_03->fields).Offset.fields.x + (pUVar32->fields).x;
        fVar38 = (__this_03->fields).Offset.fields.y + (pUVar32->fields).y;
        fVar39 = (__this_03->fields).Offset.fields.z + (pUVar32->fields).z;
        pUVar32 = UnityEngine_Transform__get_position(&local_130,pUVar33,(MethodInfo *)0x0);
        local_1d8._0_4_ = (pUVar32->fields).x;
        local_1d8._4_4_ = (pUVar32->fields).y;
        local_1d0 = (pUVar32->fields).z;
        local_248 = fVar37;
        local_244 = fVar38;
        local_240 = fVar39;
        fVar35 = (float)il2cpp_runtime_helper_180562c80(&local_1d8,&local_248);
        pfVar1 = &(__this_03->fields).Range;
        if (fVar35 < *pfVar1 || fVar35 == *pfVar1) {
          pUVar23 = (__this_00->fields).Cache;
          if (pUVar23 == (Utility_BaseComponentCache_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar33 = (pUVar23->fields).Transform;
          if (pUVar33 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar32 = UnityEngine_Transform__get_position(&local_120,pUVar33,(MethodInfo *)0x0);
          local_238.fields.x = fVar37 - (pUVar32->fields).x;
          local_238.fields.y = fVar38 - (pUVar32->fields).y;
          local_238.fields.z = fVar39 - (pUVar32->fields).z;
          pUVar32 = UnityEngine_Vector3__get_normalized(&local_110,&local_238,(MethodInfo *)0x0);
          pUVar23 = (__this_00->fields).Cache;
          if (pUVar23 == (Utility_BaseComponentCache_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar33 = (pUVar23->fields).Transform;
          if (pUVar33 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          uVar2._0_4_ = (pUVar32->fields).x;
          uVar2._4_4_ = (pUVar32->fields).y;
          fVar12 = (pUVar32->fields).z;
          pUVar32 = UnityEngine_Transform__get_forward(&local_100,pUVar33,(MethodInfo *)0x0);
          local_1b8._0_4_ = (pUVar32->fields).x;
          local_1b8._4_4_ = (pUVar32->fields).y;
          local_1b0 = (pUVar32->fields).z;
          local_1c8._0_8_ = uVar2;
          local_1c8.z = fVar12;
          fVar36 = (float)il2cpp_runtime_helper_181d9e200(&local_1b8);
          if (90.0 < fVar36) {
label_1822217d5:
            (*(__this_03->klass->vtable)._58_HideImmediate.methodPtr)
                      (__this_03,(__this_03->klass->vtable)._58_HideImmediate.method);
          }
          else {
            bVar28 = Characters_BaseCharacter__IsMainCharacter
                               ((Characters_BaseCharacter_o *)__this_02,(MethodInfo *)0x0);
            if (!bVar28) {
              pUVar23 = (__this_00->fields).Cache;
              if (pUVar23 == (Utility_BaseComponentCache_o *)0x0) {
                ThrowNullReferenceException();
              }
              pUVar33 = (pUVar23->fields).Transform;
              if (pUVar33 == (UnityEngine_Transform_o *)0x0) {
                ThrowNullReferenceException();
              }
              pUVar32 = UnityEngine_Transform__get_position(&local_f0,pUVar33,(MethodInfo *)0x0);
              uVar3._0_4_ = (pUVar32->fields).x;
              uVar3._4_4_ = (pUVar32->fields).y;
              fVar36 = (pUVar32->fields).z;
              layerMask = UnityEngine_LayerMask__op_Implicit
                                    ((__this->fields).CullMask.fields.m_Mask,(MethodInfo *)0x0);
              if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
              }
              local_1a8._0_8_ = uVar2;
              local_1a8.z = fVar12;
              local_198._0_8_ = uVar3;
              local_198.z = fVar36;
              bVar28 = UnityEngine_Physics__Raycast_2fe4eb0
                                 ((UnityEngine_Vector3_o *)&local_198,(UnityEngine_Vector3_o *)&local_1a8,
                                  fVar35,(int32_t)layerMask.fields.m_Mask,(MethodInfo *)0x0);
              if (bVar28) goto label_1822217d5;
            }
            if (bVar27) {
              UI_CharacterInfoPopup__ToggleHealthbar(__this_03,true,(MethodInfo *)0x0);
              bVar27 = Characters_BaseCharacter__IsMainCharacter
                                 ((Characters_BaseCharacter_o *)__this_02,(MethodInfo *)0x0);
              if (bVar27) {
                local_168._0_4_ = (__this->fields).GreenColor.fields.r;
                local_168._4_4_ = (__this->fields).GreenColor.fields.g;
                fStack_160 = (__this->fields).GreenColor.fields.b;
                fStack_15c = (__this->fields).GreenColor.fields.a;
              }
              else {
                local_168._0_4_ = (__this->fields).RedColor.fields.r;
                local_168._4_4_ = (__this->fields).RedColor.fields.g;
                fStack_160 = (__this->fields).RedColor.fields.b;
                fStack_15c = (__this->fields).RedColor.fields.a;
              }
              UI_CharacterInfoPopup__SetHealthbar
                        (__this_03,*(int32_t *)&(__this_02->_1).events,
                         *(int32_t *)((longlong)&(__this_02->_1).fields + 4),(UnityEngine_Color_o *)local_168,
                         (MethodInfo *)0x0);
            }
            else {
              UI_CharacterInfoPopup__ToggleHealthbar(__this_03,false,(MethodInfo *)0x0);
            }
            if (bVar26) {
              UI_CharacterInfoPopup__ToggleName(__this_03,true,(MethodInfo *)0x0);
            }
            else {
              UI_CharacterInfoPopup__ToggleName(__this_03,false,(MethodInfo *)0x0);
            }
            pUVar24 = (__this_00->fields).Camera;
            if (pUVar24 == (UnityEngine_Camera_o *)0x0) {
              ThrowNullReferenceException();
            }
            local_228.fields.x = fVar37;
            local_228.fields.y = fVar38;
            local_228.fields.z = fVar39;
            pUVar32 = UnityEngine_Camera__WorldToScreenPoint_2ebe670
                                (&local_e0,pUVar24,&local_228,(MethodInfo *)0x0);
            uVar4._0_4_ = (pUVar32->fields).x;
            uVar4._4_4_ = (pUVar32->fields).y;
            fVar35 = (pUVar32->fields).z;
            pUVar33 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
            if (pUVar33 == (UnityEngine_Transform_o *)0x0) {
              ThrowNullReferenceException();
            }
            local_188._0_8_ = uVar4;
            local_188.z = fVar35;
            UnityEngine_Transform__set_position(pUVar33,(UnityEngine_Vector3_o *)&local_188,(MethodInfo *)0x0)
            ;
            if (bVar29) {
              UI_BasePopup__ShowImmediate((UI_BasePopup_o *)__this_03,(MethodInfo *)0x0);
            }
            else {
              (*(__this_03->klass->vtable)._21_Show.methodPtr)
                        (__this_03,(__this_03->klass->vtable)._21_Show.method);
            }
          }
        }
        else {
          (*(__this_03->klass->vtable)._22_Hide.methodPtr)
                    (__this_03,(__this_03->klass->vtable)._22_Hide.method);
          __this_04 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
          if (__this_04 == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar26 = UnityEngine_GameObject__get_activeSelf(__this_04,(MethodInfo *)0x0);
          if (bVar26) {
            pUVar33 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
            pUVar24 = (__this_00->fields).Camera;
            if (pUVar24 == (UnityEngine_Camera_o *)0x0) {
              ThrowNullReferenceException();
            }
            local_218.fields.x = fVar37;
            local_218.fields.y = fVar38;
            local_218.fields.z = fVar39;
            pUVar32 = UnityEngine_Camera__WorldToScreenPoint_2ebe670
                                (local_d0,pUVar24,&local_218,(MethodInfo *)0x0);
            if (pUVar33 == (UnityEngine_Transform_o *)0x0) {
              ThrowNullReferenceException();
            }
            local_178.x = (pUVar32->fields).x;
            local_178.y = (pUVar32->fields).y;
            local_178.z = (pUVar32->fields).z;
            UnityEngine_Transform__set_position(pUVar33,(UnityEngine_Vector3_o *)&local_178,(MethodInfo *)0x0)
            ;
          }
        }
        goto label_1822212d8;
      }
      if (__this_03 == (UI_CharacterInfoPopup_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(__this_03->klass->vtable)._58_HideImmediate.methodPtr)
                (__this_03,(__this_03->klass->vtable)._58_HideImmediate.method);
    } while( true );
  }
label_182221b60:
  ThrowNullReferenceException();
}


// UI.CharacterInfoHandler$$CreateInfoPopup
// il2cpp: UI_CharacterInfoPopup_o* UI_CharacterInfoHandler__CreateInfoPopup (UI_CharacterInfoHandler_o* __this, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x1822209f0

UI_CharacterInfoPopup_o *
UI_CharacterInfoHandler__CreateInfoPopup
          (UI_CharacterInfoHandler_o *__this,Characters_BaseCharacter_o *character,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_c *pCVar2;
  Settings_UISettings_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  UnityEngine_Vector3_StaticFields *pUVar5;
  Characters_BaseCharacter_o *pCVar6;
  System_String_o *value;
  bool bVar7;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *__this_00;
  UI_CharacterInfoPopup_o *__this_01;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (Il2CppMethodInitialized_184347195 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_CharacterInfoPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_CharacterInfoPopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/InGame/CharacterInfoPopup");
    Il2CppMethodInitialized_184347195 = '\x01';
  }
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  if (character == (Characters_BaseCharacter_o *)0x0) {
label_182220d30:
    pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar11 = (pUVar5->zeroVector).fields.z;
    fVar10 = (pUVar5->zeroVector).fields.y;
    fVar9 = (pUVar5->zeroVector).fields.x;
label_182220d4d:
    fVar12 = 250.0;
  }
  else {
    pCVar2 = character->klass;
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if (((pCVar2->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
      bVar1 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
      if (((pCVar2->_2).typeHierarchyDepth < bVar1) ||
         ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_BasicTitan))
      {
        bVar1 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
        if (((pCVar2->_2).typeHierarchyDepth < bVar1) ||
           ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseShifter
           )) goto label_182220d30;
        if (Il2CppMethodInitialized_18433de5c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5c = '\x01';
        }
        bVar1 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
        if (((character->klass->_2).typeHierarchyDepth < bVar1) ||
           ((character->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Characters_BaseShifter)) {
          il2cpp_codegen_raise_invalid_cast_exception(character);
        }
        fVar11 = *(float *)&character[1].fields.field_0x1c;
        pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar9 = (pUVar5->upVector).fields.x * 57.0 * fVar11;
        fVar10 = (pUVar5->upVector).fields.y * 57.0 * fVar11;
        fVar11 = (pUVar5->upVector).fields.z * 57.0 * fVar11;
      }
      else {
        bVar1 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
        if (((pCVar2->_2).typeHierarchyDepth < bVar1) ||
           ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_BasicTitan)
           ) {
          il2cpp_codegen_raise_invalid_cast_exception(character);
        }
        if ((*(uint8_t *)((char *)character + 0x298)) == false) {
          if (Il2CppMethodInitialized_18433de5c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433de5c = '\x01';
          }
          fVar12 = 20.0;
        }
        else {
          if (Il2CppMethodInitialized_18433de5c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433de5c = '\x01';
          }
          fVar12 = 5.0;
        }
        fVar9 = *(float *)&character[1].fields.field_0x1c;
        pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar11 = (pUVar5->upVector).fields.z * fVar12 * fVar9;
        fVar10 = (pUVar5->upVector).fields.y * fVar12 * fVar9;
        fVar9 = (pUVar5->upVector).fields.x * fVar12 * fVar9;
      }
      goto label_182220d4d;
    }
    if (Il2CppMethodInitialized_18433de5c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5c = '\x01';
    }
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if ((pSVar3 == (Settings_UISettings_o *)0x0) ||
       (pSVar4 = (pSVar3->fields).HumanNameDistance, pSVar4 == (Settings_IntSetting_o *)0x0))
    goto label_182220f65;
    fVar12 = (float)(pSVar4->fields)._value;
    pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar9 = (pUVar5->upVector).fields.x * 1.75;
    fVar10 = (pUVar5->upVector).fields.y * 1.75;
    fVar11 = (pUVar5->upVector).fields.z * 1.75;
  }
  parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_00 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                        (parent,"Prefabs/InGame/CharacterInfoPopup",false,
                         (MethodInfo_6ABD60 *)
                         MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_CharacterInfoPopup);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = UnityEngine_GameObject__GetComponent_object_
                          (__this_00,
                           (MethodInfo_6F5650 *)
                           MethodInfo_UnityEngine_GameObject_GetComponent_CharacterInfoPopup);
    if (__this_01 != (UI_CharacterInfoPopup_o *)0x0) {
      if (Il2CppMethodInitialized_18434719f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_Hashtable);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_UI_CharacterInfoPopup_Character_OnPlayerPropertiesChanged);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_18434719f = '\x01';
      }
      pCVar6 = (__this_01->fields).Character;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar7) {
        pCVar6 = (__this_01->fields).Character;
        if (pCVar6 == (Characters_BaseCharacter_o *)0x0) goto label_182220f65;
        if ((pCVar6->fields).AI == false) {
          pUVar8 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                   il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Hashtable);
          System_Action_object____ctor
                    (pUVar8,(Il2CppObject *)__this_01,
                     (intptr_t)MethodInfo_UI_CharacterInfoPopup_Character_OnPlayerPropertiesChanged,
                     (MethodInfo *)0x0);
          Characters_BaseCharacter__remove_OnPlayerPropertiesChanged
                    (pCVar6,(System_Action_Hashtable__o *)pUVar8,(MethodInfo *)0x0);
        }
      }
      (__this_01->fields).Character = character;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).Character,character);
      (__this_01->fields).Offset.fields.x = fVar9;
      (__this_01->fields).Offset.fields.y = fVar10;
      (__this_01->fields).Offset.fields.z = fVar11;
      (__this_01->fields).Range = fVar12;
      if (character != (Characters_BaseCharacter_o *)0x0) {
        value = (character->fields).RichTextName;
        (__this_01->fields)._name = value;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields)._name,value);
        (__this_01->fields)._lastTeam = (System_String_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields)._lastTeam,(void *)0x0);
        (__this_01->fields)._lastGuild = (System_String_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields)._lastGuild,(void *)0x0);
        (__this_01->fields)._lastName = (System_String_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields)._lastName,(void *)0x0);
        pCVar6 = (__this_01->fields).Character;
        if (pCVar6 != (Characters_BaseCharacter_o *)0x0) {
          if ((pCVar6->fields).AI == false) {
            pUVar8 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                     il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Hashtable);
            System_Action_object____ctor
                      (pUVar8,(Il2CppObject *)__this_01,
                       (intptr_t)MethodInfo_UI_CharacterInfoPopup_Character_OnPlayerPropertiesChanged,
                       (MethodInfo *)0x0);
            Characters_BaseCharacter__add_OnPlayerPropertiesChanged
                      (pCVar6,(System_Action_Hashtable__o *)pUVar8,(MethodInfo *)0x0);
          }
          UI_CharacterInfoPopup__SettingsManager_OnSettingsChanged(__this_01,(MethodInfo *)0x0);
          return __this_01;
        }
      }
    }
  }
label_182220f65:
  ThrowNullReferenceException();
}


// UI.CharacterInfoHandler$$RefreshDict
// il2cpp: void UI_CharacterInfoHandler__RefreshDict (UI_CharacterInfoHandler_o* __this, const MethodInfo* method);
// 0x182221b70
// eh: try 0x182221d50..0x182221f5d -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182221d4e: nop 
// asm:   0x182221f09: mov r8, qword ptr [rsp + 0x30]
// asm:   0x182221f0e: cmp qword ptr [r8], 0
// asm:   0x182221f12: je 0x182221f25
// asm:   0x182221f14: xor ecx, ecx
// asm:   0x182221f16: mov r8, qword ptr [r8]
// asm:   0x182221f19: mov rdx, qword ptr [rip + 0x1e773e0]  ; TypeInfo_System_IDisposable
// asm:   0x182221f20: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x182221f25: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182221f2a: test rcx, rcx
// asm:   0x182221f2d: jne 0x182221f5d
// asm:   0x182221f5d: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void UI_CharacterInfoHandler__RefreshDict(UI_CharacterInfoHandler_o *__this,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  GameManagers_InGameManager_o *__this_00;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  bool bVar5;
  ushort uVar6;
  System_Predicate_T__o *match;
  Il2CppObject *pIVar7;
  void *pvVar8;
  VirtualInvokeData *pVVar9;
  Characters_BaseCharacter_o *character;
  UI_CharacterInfoPopup_o *_language;
  Assets_Scripts_Utility_SetItem_BaseCharacter__CharacterInfoPopup__o *pAVar10;
  
  if (Il2CppMethodInitialized_184347196 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_SetItem_BaseCharacter_CharacterInfoPopup_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_HashSet_SetItem_BaseCharacter_CharacterInfoPopup_Contains
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_HashSet_SetItem_BaseCharacter_CharacterInfoPopup_RemoveWhere
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_BaseCharacter)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_BaseCharacter)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Predicate_SetItem_BaseCharacter_CharacterInfoPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Assets_Scripts_Utility_SetItem_BaseCharacter_CharacterInfoPopup_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Assets_Scripts_Utility_SetItem_BaseCharacter_CharacterInfoPopup_set_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Assets_Scripts_Utility_SetItem_BaseCharacter_CharacterInfoPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterInfoHandler_c_RefreshDict_b__14_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterInfoHandler_c);
    Il2CppMethodInitialized_184347196 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._characterInfoPopups;
  if ((TypeInfo_UI_CharacterInfoHandler_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CharacterInfoHandler_c);
  }
  match = (System_Predicate_T__o *)TypeInfo_UI_CharacterInfoHandler_c->static_fields->__9__14_0;
  if (match == (System_Predicate_T__o *)0x0) {
    if ((TypeInfo_UI_CharacterInfoHandler_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CharacterInfoHandler_c);
    }
    pIVar7 = (Il2CppObject *)TypeInfo_UI_CharacterInfoHandler_c->static_fields->__9;
    match = (System_Predicate_T__o *)
            il2cpp_codegen_object_new
                      ((Il2CppClass *)TypeInfo_System_Predicate_SetItem_BaseCharacter_CharacterInfoPopup);
    System_Predicate_object____ctor
              ((System_Predicate_object__o *)match,pIVar7,
               (intptr_t)MethodInfo_UI_CharacterInfoHandler_c_RefreshDict_b__14_0,(MethodInfo_B61EB0 *)0x0);
    TypeInfo_UI_CharacterInfoHandler_c->static_fields->__9__14_0 =
         (System_Predicate_SetItem_BaseCharacter__CharacterInfoPopup___o *)match;
    Il2CppCodeGenWriteBarrier(&TypeInfo_UI_CharacterInfoHandler_c->static_fields->__9__14_0,match);
  }
  if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___RemoveWhere
              (pSVar2,match,
               (MethodInfo_1766120 *)
               MethodInfo_System_Collections_Generic_HashSet_SetItem_BaseCharacter_CharacterInfoPopup_RemoveWhere
              );
    __this_00 = (__this->fields)._inGameManager;
    if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
      pIVar7 = (Il2CppObject *)
               GameManagers_InGameManager__GetAllCharactersEnumerable(__this_00,(MethodInfo *)0x0);
      if (pIVar7 != (Il2CppObject *)0x0) {
        pIVar7 = InterfaceInvoker0_Invoke
                           (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_BaseCharacter,
                            pIVar7);
        do {
          if (pIVar7 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pvVar8 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,pIVar7);
          if ((char)pvVar8 == '\0') {
            if (pIVar7 != (Il2CppObject *)0x0) {
              InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar7);
            }
            return;
          }
          if (pIVar7 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar3 = pIVar7->klass;
          uVar1 = (pIVar3->_2).interface_offsets_count;
          uVar6 = 0;
          if (uVar1 != 0) {
            pIVar4 = (pIVar3->_1).interfaceOffsets;
            do {
              if (pIVar4[uVar6].interfaceType ==
                  (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_BaseCharacter) {
                pVVar9 = pIVar3->vtable + pIVar4[uVar6].offset;
                goto label_182221dd6;
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar1);
          }
          pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                             (pIVar7,(Il2CppClass *)
                                     TypeInfo_System_Collections_Generic_IEnumerator_BaseCharacter,0);
label_182221dd6:
          character = (Characters_BaseCharacter_o *)(*pVVar9->methodPtr)(pIVar7,pVVar9->method);
          if (character == (Characters_BaseCharacter_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar5 = (*(character->klass->vtable)._73_ValidTarget.methodPtr)
                            (character,(character->klass->vtable)._73_ValidTarget.method);
          if (bVar5) {
            pAVar10 = (__this->fields).mockEntry;
            if (pAVar10 == (Assets_Scripts_Utility_SetItem_BaseCharacter__CharacterInfoPopup__o *)0x0) {
              ThrowNullReferenceException();
            }
            (pAVar10->fields)._Key_k__BackingField = character;
            Il2CppCodeGenWriteBarrier(&(pAVar10->fields)._Key_k__BackingField,character);
            pSVar2 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._characterInfoPopups;
            if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar5 = System_Collections_Generic_HashSet_object___Contains
                              (pSVar2,(Il2CppObject *)(__this->fields).mockEntry,
                               (MethodInfo_1759E40 *)
                               MethodInfo_System_Collections_Generic_HashSet_SetItem_BaseCharacter_CharacterInfoPopup_Contains
                              );
            if (!bVar5) {
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)character,(MethodInfo *)0x0);
              if ((bVar5) && ((character->fields).Dead == false)) {
                _language = UI_CharacterInfoHandler__CreateInfoPopup(__this,character,(MethodInfo *)0x0);
                pSVar2 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._characterInfoPopups
                ;
                pAVar10 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)
                                     TypeInfo_Assets_Scripts_Utility_SetItem_BaseCharacter_CharacterInfoPopup)
                ;
                Assets_Scripts_Utility_SetItem_object__object____ctor
                          ((UnityEngine_Android_AndroidLocale_o *)pAVar10,(System_String_o *)character,
                           (System_String_o *)_language,
                           MethodInfo_Assets_Scripts_Utility_SetItem_BaseCharacter_CharacterInfoPopup_ctor);
                if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                System_Collections_Generic_HashSet_object___Add
                          (pSVar2,(Il2CppObject *)pAVar10,
                           (MethodInfo_1757CE0 *)
                           MethodInfo_System_Collections_Generic_HashSet_SetItem_BaseCharacter_CharacterInfoPopup_Add
                          );
              }
            }
          }
        } while( true );
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterInfoHandler$$.ctor
// il2cpp: void UI_CharacterInfoHandler___ctor (UI_CharacterInfoHandler_o* __this, const MethodInfo* method);
// 0x182221f70

void UI_CharacterInfoHandler___ctor(UI_CharacterInfoHandler_o *__this,MethodInfo *method)

{
  UnityEngine_LayerMask_o UVar1;
  System_Collections_Generic_HashSet_SetItem_BaseCharacter__CharacterInfoPopup___o *__this_00;
  System_Int32_array *layers;
  Assets_Scripts_Utility_SetItem_BaseCharacter__CharacterInfoPopup__o *__this_01;
  
  if (Il2CppMethodInitialized_184347197 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_SetItem_BaseCharacter_CharacterInfoPopup_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_HashSet_SetItem_BaseCharacter_CharacterInfoPopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Assets_Scripts_Utility_SetItem_BaseCharacter_CharacterInfoPopup_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Assets_Scripts_Utility_SetItem_BaseCharacter_CharacterInfoPopup);
    Il2CppMethodInitialized_184347197 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_HashSet_SetItem_BaseCharacter_CharacterInfoPopup)
  ;
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (MethodInfo_176CE80 *)
             MethodInfo_System_Collections_Generic_HashSet_SetItem_BaseCharacter_CharacterInfoPopup_ctor);
  (__this->fields)._characterInfoPopups = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._characterInfoPopups,__this_00);
  (__this->fields).RedColor.fields.r = 0.455;
  (__this->fields).RedColor.fields.g = 0.094;
  (__this->fields).RedColor.fields.b = 0.094;
  (__this->fields).RedColor.fields.a = 1.0;
  (__this->fields).GreenColor.fields.r = 0.106;
  (__this->fields).GreenColor.fields.g = 0.368;
  (__this->fields).GreenColor.fields.b = 0.086;
  (__this->fields).GreenColor.fields.a = 1.0;
  layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,3);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (layers != (System_Int32_array *)0x0) {
    if ((((int)layers->max_length != 0) &&
        (layers->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectAll,
        1 < (uint)layers->max_length)) &&
       (layers->m_Items[1] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectEntities,
       2 < (uint)layers->max_length)) {
      layers->m_Items[2] = TypeInfo_Utility_PhysicsLayer->static_fields->TitanMovebox;
      UVar1 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      (__this->fields).CullMask.fields.m_Mask = (int32_t)UVar1.fields.m_Mask;
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_Assets_Scripts_Utility_SetItem_BaseCharacter_CharacterInfoPopup);
      Assets_Scripts_Utility_SetItem_object__object____ctor
                ((UnityEngine_Android_AndroidLocale_o *)__this_01,(System_String_o *)0x0,
                 (System_String_o *)0x0,
                 MethodInfo_Assets_Scripts_Utility_SetItem_BaseCharacter_CharacterInfoPopup_ctor);
      (__this->fields).mockEntry = __this_01;
      Il2CppCodeGenWriteBarrier(&(__this->fields).mockEntry,__this_01);
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
      return;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


