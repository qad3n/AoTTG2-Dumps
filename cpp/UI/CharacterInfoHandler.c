// Type: UI.CharacterInfoHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/CharacterInfoHandler.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterInfoHandler.cs
// --------------------------------

// UI.CharacterInfoHandler.<>c$$.cctor
// il2cpp: void UI_CharacterInfoHandler___c___cctor (const MethodInfo* method);
// 0x5d02160

void UI_CharacterInfoHandler___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07547d07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterInfoHandler_c);
    Il2CppMethodInitialized_07547d07 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_CharacterInfoHandler_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_UI_CharacterInfoHandler_c->static_fields->__9 = (UI_CharacterInfoHandler___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_CharacterInfoHandler_c->static_fields->__9);
  return;
}


// UI.CharacterInfoHandler.<>c$$.ctor
// il2cpp: void UI_CharacterInfoHandler___c___ctor (UI_CharacterInfoHandler___c_o* __this, const MethodInfo* method);
// 0x5d021d0

void UI_CharacterInfoHandler___c___ctor(UI_CharacterInfoHandler___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterInfoHandler.<>c$$<RefreshDict>b__14_0
// il2cpp: bool UI_CharacterInfoHandler___c___RefreshDict_b__14_0 (UI_CharacterInfoHandler___c_o* __this, Assets_Scripts_Utility_SetItem_BaseCharacter__CharacterInfoPopup__o* e, const MethodInfo* method);
// 0x5d021e0

bool UI_CharacterInfoHandler___c___RefreshDict_b__14_0
               (UI_CharacterInfoHandler___c_o *__this,
               Assets_Scripts_Utility_SetItem_BaseCharacter__CharacterInfoPopup__o *e,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  UI_CharacterInfoPopup_o *__this_00;
  bool bVar2;
  UnityEngine_Object_o *obj;
  
  if (Il2CppMethodInitialized_07547d08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Assets_Scripts_Utility_SetItem_BaseCharacter_CharacterInfoPopup_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Assets_Scripts_Utility_SetItem_BaseCharacter_CharacterInfoPopup_get_Value);
    Il2CppMethodInitialized_07547d08 = '\x01';
  }
  if (e != (Assets_Scripts_Utility_SetItem_BaseCharacter__CharacterInfoPopup__o *)0x0) {
    pCVar1 = (e->fields)._Key_k__BackingField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pCVar1,(MethodInfo *)0x0);
    if (bVar2) {
      pCVar1 = (e->fields)._Key_k__BackingField;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_05d02298;
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
      UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
      return true;
    }
  }
label_05d02298:
  ThrowNullReferenceException();
}


// UI.CharacterInfoHandler$$Awake
// il2cpp: void UI_CharacterInfoHandler__Awake (UI_CharacterInfoHandler_o* __this, const MethodInfo* method);
// 0x5d00300

void UI_CharacterInfoHandler__Awake(UI_CharacterInfoHandler_o *__this,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *pGVar2;
  GameManagers_InGameManager_c *pGVar3;
  
  if (Il2CppMethodInitialized_07547d02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07547d02 = '\x01';
  }
  pGVar3 = TypeInfo_GameManagers_InGameManager;
  pGVar2 = (GameManagers_InGameManager_o *)
           TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar2 == (GameManagers_InGameManager_o *)0x0) {
    (__this->fields)._inGameManager = (GameManagers_InGameManager_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._inGameManager);
    return;
  }
  bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
  if ((bVar1 <= (pGVar2->klass->_2).typeHierarchyDepth) &&
     ((pGVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
      (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
    (__this->fields)._inGameManager = pGVar2;
    if ((bVar1 <= (pGVar2->klass->_2).typeHierarchyDepth) &&
       ((pGVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)pGVar3)) {
      Il2CppCodeGenWriteBarrier(&(__this->fields)._inGameManager);
      return;
    }
  }
  il2cpp_codegen_raise_invalid_cast_exception(pGVar2,pGVar3);
}


// UI.CharacterInfoHandler$$LateUpdate
// il2cpp: void UI_CharacterInfoHandler__LateUpdate (UI_CharacterInfoHandler_o* __this, const MethodInfo* method);
// 0x5d003c0
// eh: try 0x5d0068b..0x5d0116f -> pad 0x5d01186 (+70 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d0122b..0x5d01230 -> pad 0x5d01258 cleanup
// eh: try 0x5d0125b..0x5d01268 -> pad 0x5d01270 catch (...) [compiler noexcept guard]
// asm: 98 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d007b4: jmp 0x5d007ed
// asm:   0x5d0085f: jmp 0x5d008c9
// asm:   0x5d00a3a: jmp 0x5d00ac9
// asm:   0x5d00b97: jmp 0x5d00c83
// asm:   0x5d00d81: jmp 0x5d00da9
// asm:   0x5d00e12: jmp 0x5d00ec2
// asm:   0x5d01177: jmp 0x5d01210
// asm:   0x5d0117c: jmp 0x5d01210
// asm:   0x5d01181: jmp 0x5d01210
// asm:   0x5d01186: jmp 0x5d01210
// asm:   0x5d0118b: jmp 0x5d01210
// asm:   0x5d01190: jmp 0x5d01210
// asm:   0x5d01192: jmp 0x5d01210
// asm:   0x5d01194: jmp 0x5d01210
// asm:   0x5d01196: jmp 0x5d01210
// asm:   0x5d01198: jmp 0x5d01210
// asm:   0x5d0119a: jmp 0x5d01210
// asm:   0x5d0119c: jmp 0x5d01210
// asm:   0x5d0119e: jmp 0x5d01210
// asm:   0x5d011a0: jmp 0x5d01210
// asm:   0x5d011a2: jmp 0x5d01210
// asm:   0x5d011a4: jmp 0x5d01210
// asm:   0x5d011a6: jmp 0x5d01210
// asm:   0x5d011a8: jmp 0x5d01210
// asm:   0x5d011aa: jmp 0x5d01210
// asm:   0x5d011ac: jmp 0x5d01210
// asm:   0x5d011ae: jmp 0x5d01210
// asm:   0x5d011b0: jmp 0x5d01210
// asm:   0x5d011b2: jmp 0x5d01210
// asm:   0x5d011b4: jmp 0x5d01210
// asm:   0x5d011b6: jmp 0x5d01210
// asm:   0x5d011b8: jmp 0x5d01210
// asm:   0x5d011ba: jmp 0x5d01210
// asm:   0x5d011bc: jmp 0x5d01210
// asm:   0x5d011be: jmp 0x5d01210
// asm:   0x5d011c0: jmp 0x5d01210
// asm:   0x5d011c2: jmp 0x5d01210
// asm:   0x5d011c4: jmp 0x5d01210
// asm:   0x5d011c6: jmp 0x5d01210
// asm:   0x5d011c8: jmp 0x5d01210
// asm:   0x5d011ca: jmp 0x5d01210
// asm:   0x5d011cc: jmp 0x5d01210
// asm:   0x5d011ce: jmp 0x5d01210
// asm:   0x5d011d0: jmp 0x5d01210
// asm:   0x5d011d2: jmp 0x5d01210
// asm:   0x5d011d4: jmp 0x5d01210
// asm:   0x5d011d6: jmp 0x5d01210
// asm:   0x5d011d8: jmp 0x5d01210
// asm:   0x5d011da: jmp 0x5d01210
// asm:   0x5d011dc: jmp 0x5d01210
// asm:   0x5d011de: jmp 0x5d01210
// asm:   0x5d011e0: jmp 0x5d01210
// asm:   0x5d011e2: jmp 0x5d01210
// asm:   0x5d011e4: jmp 0x5d01210
// asm:   0x5d011e6: jmp 0x5d01210
// asm:   0x5d011e8: jmp 0x5d01210
// asm:   0x5d011ea: jmp 0x5d01210
// asm:   0x5d011ec: jmp 0x5d01210
// asm:   0x5d011ee: jmp 0x5d01210
// asm:   0x5d011f0: jmp 0x5d01210
// asm:   0x5d011f2: jmp 0x5d01210
// asm:   0x5d011f4: jmp 0x5d01210
// asm:   0x5d011f6: jmp 0x5d01210
// asm:   0x5d011f8: jmp 0x5d01210
// asm:   0x5d011fa: jmp 0x5d01210
// asm:   0x5d011fc: jmp 0x5d01210
// asm:   0x5d011fe: jmp 0x5d01210
// asm:   0x5d01200: jmp 0x5d01210
// asm:   0x5d01202: jmp 0x5d01210
// asm:   0x5d01204: jmp 0x5d01210
// asm:   0x5d01206: jmp 0x5d01210
// asm:   0x5d01208: jmp 0x5d01210
// asm:   0x5d0120a: jmp 0x5d01210
// asm:   0x5d0120c: jmp 0x5d01210
// asm:   0x5d0120e: jmp 0x5d01210
// asm:   0x5d01210: mov rbx, rax
// asm:   0x5d01213: cmp edx, 1
// asm:   0x5d01216: jne 0x5d0125b
// asm:   0x5d01218: mov rdi, rbx
// asm:   0x5d0121b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d01220: mov rbx, qword ptr [rax]
// asm:   0x5d01223: mov qword ptr [rsp + 0xc0], rbx
// asm:   0x5d0122b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d01230: lea rax, [rip + 0x158c271]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_SetItem_BaseCharacter_CharacterInfoPopup_Dispose
// asm:   0x5d01237: mov rsi, qword ptr [rax]
// asm:   0x5d0123a: lea rdi, [rsp + 0x80]
// asm:   0x5d01242: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5d01247: test rbx, rbx
// asm:   0x5d0124a: je 0x5d01083
// asm:   0x5d01250: mov rdi, rbx
// asm:   0x5d01253: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d01258: mov rbx, rax
// asm:   0x5d0125b: lea rdi, [rsp + 0xc0]
// asm:   0x5d01263: call 0x2fdba80  ; il2cpp_runtime_helper_02fdba80()
// asm:   0x5d01268: mov rdi, rbx
// asm:   0x5d0126b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d01270: mov rdi, rax
// asm:   0x5d01273: call 0x2ab61e0  ; __clang_call_terminate()

void UI_CharacterInfoHandler__LateUpdate(UI_CharacterInfoHandler_o *__this,MethodInfo *method)

{
  float *pfVar1;
  UnityEngine_Color_o *pUVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte bVar11;
  char cVar12;
  uint32_t uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  Cameras_InGameCamera_o *__this_00;
  Settings_UISettings_o *pSVar18;
  Settings_IntSetting_o *pSVar19;
  Settings_IntSetting_o *pSVar20;
  Settings_IntSetting_o *pSVar21;
  System_Collections_Generic_HashSet_object__o *__this_01;
  Il2CppClass *__this_02;
  UI_CharacterInfoPopup_o *pUVar22;
  Characters_BaseCharacter_c *pCVar23;
  GameManagers_InGameManager_o *pGVar24;
  Settings_InGameSet_o *pSVar25;
  Settings_InGameMiscSettings_o *pSVar26;
  Settings_BoolSetting_o *pSVar27;
  Utility_BaseComponentCache_o *pUVar28;
  UnityEngine_Camera_o *pUVar29;
  undefined1 auVar30 [16];
  double dVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  bool bVar38;
  int32_t layerMask;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_Vector3_StaticFields *pUVar39;
  UnityEngine_Transform_o *pUVar40;
  Il2CppClass *pIVar41;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar42;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  Cameras_InGameCamera_o *pCVar43;
  bool bVar44;
  float fVar45;
  float fVar46;
  float extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float in_XMM1_Db;
  float fVar47;
  float fVar48;
  undefined1 auVar49 [16];
  UnityEngine_Color_o color;
  UnityEngine_Vector3_o UVar50;
  UnityEngine_Vector3_o UVar51;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_o position;
  float fStack_e8;
  float fStack_e4;
  float fStack_c8;
  float fStack_c4;
  float fStack_b4;
  float fStack_a8;
  float fStack_a4;
  undefined8 uStack_98;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_88;
  UI_CharacterInfoPopup_o *pUStack_68;
  undefined1 auStack_60 [12];
  float fStack_54;
  undefined1 auStack_48 [16];
  Il2CppObject *pIStack_38;
  
  if (Il2CppMethodInitialized_07547d03 == '\0') {
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
    Il2CppMethodInitialized_07547d03 = '\x01';
  }
  SStack_88.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  SStack_88.fields._index = 0;
  SStack_88.fields._version = 0;
  SStack_88.fields._current = (Il2CppObject *)0x0;
  UI_CharacterInfoHandler__RefreshDict(__this,method);
  __this_00 = (Cameras_InGameCamera_o *)TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera
  ;
  if (__this_00 != (Cameras_InGameCamera_o *)0x0) {
    bVar11 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar11) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar11 - 1] !=
        (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
      pCVar43 = __this_00;
      goto label_05d01172;
    }
  }
  bVar33 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
  cVar12 = '\x01';
  if (!bVar33) {
    pCVar43 = (Cameras_InGameCamera_o *)
              TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pCVar43 == (Cameras_InGameCamera_o *)0x0) goto label_05d01147;
    bVar11 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((pCVar43->klass->_2).typeHierarchyDepth < bVar11) ||
       ((pCVar43->klass->_2).typeHierarchy[(ulong)bVar11 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
label_05d01172:
      il2cpp_codegen_raise_invalid_cast_exception(pCVar43);
    }
    if ((pCVar43->fields)._heightDistance == 0.0) goto label_05d005b9;
    if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
      if (g_data_07547d1b == '\0') goto label_05d010a7;
label_05d00599:
      uVar13 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
    }
    else {
      if (g_data_07547d1b != '\0') goto label_05d00599;
label_05d010a7:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
      g_data_07547d1b = '\x01';
      uVar13 = (TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor;
    }
    if (uVar13 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    }
    cVar12 = TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->_forceHideCharacterNames;
  }
label_05d005b9:
  pSVar18 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((((pSVar18 != (Settings_UISettings_o *)0x0) &&
       (pSVar19 = (pSVar18->fields).ShowNames, pSVar19 != (Settings_IntSetting_o *)0x0)) &&
      (pSVar20 = (pSVar18->fields).ShowHealthbars, pSVar20 != (Settings_IntSetting_o *)0x0)) &&
     ((pSVar21 = (pSVar18->fields).NameOverrideTarget, pSVar21 != (Settings_IntSetting_o *)0x0 &&
      (__this_01 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._characterInfoPopups,
      __this_01 != (System_Collections_Generic_HashSet_object__o *)0x0)))) {
    iVar14 = (pSVar19->fields)._value;
    iVar15 = (pSVar20->fields)._value;
    iVar16 = (pSVar21->fields)._value;
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_48,__this_01,
               (MethodInfo_4FB3DA0 *)
               MethodInfo_System_Collections_Generic_HashSet_SetItem_BaseCharacter_CharacterInfoPopup_GetEnumerator
              );
    SStack_88.fields._current = pIStack_38;
    SStack_88.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_48._0_8_;
    SStack_88.fields._index = auStack_48._8_4_;
    SStack_88.fields._version = auStack_48._12_4_;
    auStack_48._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    auStack_48._8_8_ = &SStack_88;
label_05d006a0:
    do {
      bVar33 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                         (&SStack_88,
                          (MethodInfo_4C456D0 *)
                          MethodInfo_System_Collections_Generic_HashSet_Enumerator_SetItem_BaseCharacter_CharacterInfoPopup_MoveNext
                         );
      if (!bVar33) {
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (&SStack_88,
                   (MethodInfo_4C456C0 *)
                   MethodInfo_System_Collections_Generic_HashSet_Enumerator_SetItem_BaseCharacter_CharacterInfoPopup_Dispose
                  );
        return;
      }
      if (SStack_88.fields._current == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      __this_02 = SStack_88.fields._current[1].klass;
      pUVar22 = SStack_88.fields._current[1].monitor;
      bVar35 = true;
      bVar33 = true;
      if (iVar14 != 0) {
        if (iVar14 == 1) {
          if (__this_02 == (Il2CppClass *)0x0) {
            ThrowNullReferenceException();
          }
          bVar34 = Characters_BaseCharacter__IsMainCharacter
                             ((Characters_BaseCharacter_o *)__this_02,(MethodInfo *)0x0);
          bVar33 = true;
          if (!bVar34) goto label_05d0073c;
        }
        else if (iVar14 == 2) {
          if (__this_02 == (Il2CppClass *)0x0) {
            ThrowNullReferenceException();
          }
          bVar33 = Characters_BaseCharacter__IsMainCharacter
                             ((Characters_BaseCharacter_o *)__this_02,(MethodInfo *)0x0);
          bVar33 = !bVar33;
        }
        else {
label_05d0073c:
          bVar33 = false;
        }
      }
      if (iVar15 == 0) {
label_05d00772:
        if (__this_02 == (Il2CppClass *)0x0) {
          ThrowNullReferenceException();
        }
label_05d0077b:
        if (*(bool *)&(__this_02->_1).events != false) goto label_05d0078d;
label_05d007eb:
        bVar34 = false;
        pUStack_68 = pUVar22;
label_05d007ed:
        pCVar23 = (__this_02->_1).image;
        bVar11 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
        if ((pCVar23->_2).typeHierarchyDepth < bVar11) {
          pIVar41 = (Il2CppClass *)0x0;
        }
        else {
          pIVar41 = (Il2CppClass *)0x0;
          if ((pCVar23->_2).typeHierarchy[(ulong)bVar11 - 1] == (Il2CppClass *)TypeInfo_Characters_BasicTitan)
          {
            pIVar41 = __this_02;
          }
        }
        bVar44 = pIVar41 == (Il2CppClass *)0x0;
        fVar47 = in_XMM1_Db;
      }
      else {
        if (iVar15 != 2) {
          if (iVar15 != 1) {
label_05d0076f:
            bVar35 = false;
            goto label_05d00772;
          }
          if (__this_02 == (Il2CppClass *)0x0) {
            ThrowNullReferenceException();
          }
          bVar34 = Characters_BaseCharacter__IsMainCharacter
                             ((Characters_BaseCharacter_o *)__this_02,(MethodInfo *)0x0);
          bVar35 = true;
          if (!bVar34) goto label_05d0076f;
          goto label_05d0077b;
        }
        if (__this_02 == (Il2CppClass *)0x0) {
          ThrowNullReferenceException();
        }
        bVar35 = Characters_BaseCharacter__IsMainCharacter
                           ((Characters_BaseCharacter_o *)__this_02,(MethodInfo *)0x0);
        bVar35 = !bVar35;
        if (*(bool *)&(__this_02->_1).events == false) goto label_05d007eb;
label_05d0078d:
        bVar44 = false;
        if (*(bool *)&(__this_02->_1).parent == false) {
          bVar34 = false;
          fVar47 = in_XMM1_Db;
          pUStack_68 = pUVar22;
        }
        else {
          pUStack_68 = pUVar22;
          bVar34 = System_String__IsNullOrWhiteSpace
                             ((System_String_o *)(__this_02->_1).declaringType,(MethodInfo *)0x0);
          bVar34 = !bVar34;
          fVar47 = in_XMM1_Db;
          if (*(bool *)&(__this_02->_1).events == false) goto label_05d007ed;
        }
      }
      if ((bVar35) && (iVar17 = *(int32_t *)((long)&(__this_02->_1).events + 4), 1 < iVar17)) {
        bVar35 = *(int *)&(__this_02->_1).properties < iVar17;
      }
      else {
        bVar35 = false;
      }
      bVar37 = true;
      if (iVar16 != 0) {
        bVar37 = true;
        if (iVar16 == 2) {
          pCVar23 = (__this_02->_1).image;
          bVar37 = (*(pCVar23->vtable)._74_IsMine.methodPtr)(__this_02,(pCVar23->vtable)._74_IsMine.method);
          bVar37 = !bVar37;
        }
        else if ((iVar16 != 1) ||
                (pCVar23 = (__this_02->_1).image,
                bVar36 = (*(pCVar23->vtable)._74_IsMine.methodPtr)
                                   (__this_02,(pCVar23->vtable)._74_IsMine.method), !bVar36)) {
          bVar37 = false;
        }
      }
      pGVar24 = (__this->fields)._inGameManager;
      if (pGVar24 == (GameManagers_InGameManager_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar36 = true;
      if ((pGVar24->fields).Restarting == false) {
        pSVar25 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
        if (pSVar25 == (Settings_InGameSet_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar26 = (pSVar25->fields).Misc;
        if (pSVar26 == (Settings_InGameMiscSettings_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar27 = (pSVar26->fields).RealismMode;
        if (pSVar27 == (Settings_BoolSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        if ((pSVar27->fields)._value != false) goto label_05d00942;
        bVar38 = Characters_BaseCharacter__IsMainCharacter
                           ((Characters_BaseCharacter_o *)__this_02,(MethodInfo *)0x0);
        if (bVar38) {
          if (__this_00 == (Cameras_InGameCamera_o *)0x0) {
            ThrowNullReferenceException();
          }
          fVar45 = Cameras_InGameCamera__GetCameraDistance(__this_00,(MethodInfo *)0x0);
          fVar47 = 0.0;
          bVar38 = false;
          bVar32 = false;
          if (0.0 < fVar45) goto label_05d00a7c;
        }
        else {
label_05d00a7c:
          bVar38 = bVar33 && (bVar34 || bVar44);
          bVar36 = (bool)(bVar35 ^ 1);
          if (bVar38) {
            bVar36 = false;
          }
          bVar32 = bVar35;
        }
      }
      else {
label_05d00942:
        bVar38 = false;
        bVar32 = false;
      }
      pUVar22 = pUStack_68;
      if (bVar36 || cVar12 != '\0') {
        if (pUStack_68 == (UI_CharacterInfoPopup_o *)0x0) {
          ThrowNullReferenceException();
        }
        (*(pUStack_68->klass->vtable)._58_HideImmediate.methodPtr)
                  (pUStack_68,(pUStack_68->klass->vtable)._58_HideImmediate.method);
        in_XMM1_Db = fVar47;
        goto label_05d006a0;
      }
      pUVar28 = (__this_02->_1).fields;
      if (pUVar28 == (Utility_BaseComponentCache_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar40 = (pUVar28->fields).Transform;
      if (pUVar40 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      UVar50 = UnityEngine_Transform__get_position(pUVar40,(MethodInfo *)0x0);
      if (pUVar22 == (UI_CharacterInfoPopup_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (__this_00 == (Cameras_InGameCamera_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar28 = (__this_00->fields).Cache;
      if (pUVar28 == (Utility_BaseComponentCache_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar40 = (pUVar28->fields).Transform;
      if (pUVar40 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      uVar3 = (pUVar22->fields).Offset.fields.x;
      uVar7 = (pUVar22->fields).Offset.fields.y;
      fVar45 = UVar50.fields.z + (pUVar22->fields).Offset.fields.z;
      UVar51 = UnityEngine_Transform__get_position(pUVar40,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_0753e7b7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e7b7 = '\x01';
        uVar13 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar13 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      if (uVar13 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      uStack_98._0_4_ = UVar50.fields.x;
      uStack_98._4_4_ = UVar50.fields.y;
      uStack_98._0_4_ = (float)uStack_98 + (float)uVar3;
      uStack_98._4_4_ = uStack_98._4_4_ + (float)uVar7;
      fStack_e8 = UVar51.fields.x;
      fStack_e4 = UVar51.fields.y;
      fVar48 = UVar51.fields.z - fVar45;
      fStack_b4 = (fStack_e4 - uStack_98._4_4_) * (fStack_e4 - uStack_98._4_4_) +
                  (fStack_e8 - (float)uStack_98) * (fStack_e8 - (float)uStack_98) + fVar48 * fVar48;
      in_XMM1_Db = uStack_98._4_4_;
      if (fStack_b4 < 0.0) {
        fStack_b4 = sqrtf(fStack_b4);
        pfVar1 = &(pUVar22->fields).Range;
        if (*pfVar1 <= fStack_b4 && fStack_b4 != *pfVar1) goto label_05d00bb4;
label_05d00b2d:
        pUVar28 = (__this_00->fields).Cache;
        if (pUVar28 == (Utility_BaseComponentCache_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar40 = (pUVar28->fields).Transform;
        if (pUVar40 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        UVar50 = UnityEngine_Transform__get_position(pUVar40,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_0753e72d == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e72d = '\x01';
          auStack_60._0_4_ = 0.0;
          auStack_60._4_4_ = 0.0;
          if (g_data_0753e729 == '\0') goto label_05d00c5d;
label_05d00b80:
          auStack_60._0_4_ = 0.0;
          auStack_60._4_4_ = 0.0;
          uVar13 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
        }
        else {
          auStack_60._0_4_ = 0.0;
          auStack_60._4_4_ = 0.0;
          if (g_data_0753e729 != '\0') goto label_05d00b80;
label_05d00c5d:
          auStack_60._0_4_ = 0.0;
          auStack_60._4_4_ = 0.0;
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          g_data_0753e729 = '\x01';
          uVar13 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
        }
        if (uVar13 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        fStack_c8 = UVar50.fields.x;
        fStack_c4 = UVar50.fields.y;
        auVar49._0_4_ = (float)uStack_98 - fStack_c8;
        auVar49._4_4_ = uStack_98._4_4_ - fStack_c4;
        auVar49._8_4_ = (extraout_XMM0_Dc + 0.0) - extraout_XMM0_Dc_00;
        auVar49._12_4_ = (extraout_XMM0_Dd + 0.0) - extraout_XMM0_Dd_00;
        fVar48 = fVar45 - UVar50.fields.z;
        fVar46 = fVar48 * fVar48 + auVar49._4_4_ * auVar49._4_4_ + auVar49._0_4_ * auVar49._0_4_;
        if (fVar46 < 0.0) {
          fVar46 = sqrtf(fVar46);
          fVar47 = extraout_XMM0_Db;
          if (1e-05 < fVar46) goto label_05d00d09;
label_05d00cd4:
          pUVar39 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar48 = (pUVar39->zeroVector).fields.z;
        }
        else {
          fVar46 = SQRT(fVar46);
          if (fVar46 <= 1e-05) goto label_05d00cd4;
label_05d00d09:
          fVar48 = fVar48 / fVar46;
          auVar30._4_4_ = fVar46;
          auVar30._0_4_ = fVar46;
          auVar30._8_4_ = fVar47;
          auVar30._12_4_ = fVar47;
          auVar49 = divps(auVar49,auVar30);
          auStack_60._0_4_ = auVar49._0_4_;
          auStack_60._4_4_ = auVar49._4_4_;
          pUVar39 = (UnityEngine_Vector3_StaticFields *)auStack_60;
        }
        pUVar28 = (__this_00->fields).Cache;
        if (pUVar28 == (Utility_BaseComponentCache_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar40 = (pUVar28->fields).Transform;
        if (pUVar40 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        uVar4 = (pUVar39->zeroVector).fields.x;
        uVar8 = (pUVar39->zeroVector).fields.y;
        UVar51.fields.y = (float)uVar8;
        UVar51.fields.x = (float)uVar4;
        UVar50 = UnityEngine_Transform__get_forward(pUVar40,(MethodInfo *)0x0);
        fVar47 = UVar50.fields.z;
        unique0x10000534 = extraout_XMM0_Dc_01;
        unique0x1000052c = UVar50.fields._0_8_;
        unique0x10000538 = extraout_XMM0_Dd_01;
        if (Il2CppMethodInitialized_075450a4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_075450a4 = '\x01';
          uVar13 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
        }
        else {
          uVar13 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
        }
        if (uVar13 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        fVar46 = (fVar48 * fVar48 + (float)uVar8 * (float)uVar8 + (float)uVar4 * (float)uVar4) *
                 (fVar47 * fVar47 + fStack_54 * fStack_54 + (float)auStack_60._8_4_ * (float)auStack_60._8_4_)
        ;
        if (fVar46 < 0.0) {
          fVar46 = sqrtf(fVar46);
          pIVar41 = (Il2CppClass *)TypeInfo_System_Math;
        }
        else {
          fVar46 = SQRT(fVar46);
          pIVar41 = (Il2CppClass *)TypeInfo_System_Math;
        }
        TypeInfo_System_Math = (System_Math_c *)pIVar41;
        if (1e-15 <= fVar46) {
          if ((pIVar41->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(pIVar41);
          }
          fVar46 = (fVar47 * fVar48 + fStack_54 * (float)uVar8 + (float)auStack_60._8_4_ * (float)uVar4) /
                   fVar46;
          fVar47 = 1.0;
          if (fVar46 <= 1.0) {
            fVar47 = fVar46;
          }
          in_XMM1_Db = 0.0;
          dVar31 = acos((double)(float)(~-(uint)(-1.0 <= fVar46) & 0xbf800000 |
                                       (uint)fVar47 & -(uint)(-1.0 <= fVar46)),(MethodInfo *)pIVar41);
          if (90.0 < (float)dVar31 * 57.29578) {
            (*(pUVar22->klass->vtable)._58_HideImmediate.methodPtr)
                      (pUVar22,(pUVar22->klass->vtable)._58_HideImmediate.method);
            goto label_05d006a0;
          }
        }
        bVar33 = Characters_BaseCharacter__IsMainCharacter
                           ((Characters_BaseCharacter_o *)__this_02,(MethodInfo *)0x0);
        pMVar42 = extraout_RDX;
        if (!bVar33) {
          pUVar28 = (__this_00->fields).Cache;
          if (pUVar28 == (Utility_BaseComponentCache_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar40 = (pUVar28->fields).Transform;
          if (pUVar40 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          UVar50 = UnityEngine_Transform__get_position(pUVar40,(MethodInfo *)0x0);
          auStack_60._8_4_ = UVar50.fields.z;
          layerMask = UnityEngine_LayerMask__op_Implicit
                                ((UnityEngine_LayerMask_o)(__this->fields).CullMask.fields.m_Mask,
                                 (MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
          }
          in_XMM1_Db = 0.0;
          origin.fields.z = (float)auStack_60._8_4_;
          origin.fields.x = UVar50.fields.x;
          origin.fields.y = UVar50.fields.y;
          UVar51.fields.z = fVar48;
          bVar33 = UnityEngine_Physics__Raycast_69d96f0(origin,UVar51,fStack_b4,layerMask,(MethodInfo *)0x0);
          pMVar42 = extraout_RDX_00;
          if (bVar33) {
            (*(pUVar22->klass->vtable)._58_HideImmediate.methodPtr)
                      (pUVar22,(pUVar22->klass->vtable)._58_HideImmediate.method);
            goto label_05d006a0;
          }
        }
        if (bVar32) {
          UI_CharacterInfoPopup__ToggleHealthbar(pUVar22,true,pMVar42);
          bVar33 = Characters_BaseCharacter__IsMainCharacter
                             ((Characters_BaseCharacter_o *)__this_02,(MethodInfo *)0x0);
          pUVar2 = &(__this->fields).RedColor + bVar33;
          uVar5 = (pUVar2->fields).r;
          uVar9 = (pUVar2->fields).g;
          color.fields.g = (float)uVar9;
          color.fields.r = (float)uVar5;
          pUVar2 = &(__this->fields).RedColor + bVar33;
          uVar6 = (pUVar2->fields).b;
          uVar10 = (pUVar2->fields).a;
          color.fields.a = (float)uVar10;
          color.fields.b = (float)uVar6;
          UI_CharacterInfoPopup__SetHealthbar
                    (pUVar22,*(int32_t *)&(__this_02->_1).properties,
                     *(int32_t *)((long)&(__this_02->_1).events + 4),color,(MethodInfo *)__this);
          pMVar42 = extraout_RDX_01;
        }
        else {
          UI_CharacterInfoPopup__ToggleHealthbar(pUVar22,false,pMVar42);
          pMVar42 = extraout_RDX_02;
        }
        if (bVar38) {
          UI_CharacterInfoPopup__ToggleName(pUVar22,true,pMVar42);
        }
        else {
          UI_CharacterInfoPopup__ToggleName(pUVar22,false,pMVar42);
        }
        pUVar29 = (__this_00->fields).Camera;
        if (pUVar29 == (UnityEngine_Camera_o *)0x0) {
          ThrowNullReferenceException();
        }
        position.fields.z = fVar45;
        position.fields.x = (float)uStack_98;
        position.fields.y = uStack_98._4_4_;
        UVar50 = UnityEngine_Camera__WorldToScreenPoint_68c0c30(pUVar29,position,(MethodInfo *)0x0);
        pUVar40 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar22,(MethodInfo *)0x0);
        if (pUVar40 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        in_XMM1_Db = 0.0;
        UnityEngine_Transform__set_position(pUVar40,UVar50,(MethodInfo *)0x0);
        if (bVar37) {
          UI_BasePopup__ShowImmediate((UI_BasePopup_o *)pUVar22,(MethodInfo *)0x0);
        }
        else {
          (*(pUVar22->klass->vtable)._21_Show.methodPtr)(pUVar22,(pUVar22->klass->vtable)._21_Show.method);
        }
        goto label_05d006a0;
      }
      fStack_b4 = SQRT(fStack_b4);
      pfVar1 = &(pUVar22->fields).Range;
      if (fStack_b4 < *pfVar1 || fStack_b4 == *pfVar1) goto label_05d00b2d;
label_05d00bb4:
      (*(pUVar22->klass->vtable)._22_Hide.methodPtr)(pUVar22,(pUVar22->klass->vtable)._22_Hide.method);
      __this_03 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar22,(MethodInfo *)0x0);
      if (__this_03 == (UnityEngine_GameObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar33 = UnityEngine_GameObject__get_activeSelf(__this_03,(MethodInfo *)0x0);
      if (bVar33) {
        pUVar40 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar22,(MethodInfo *)0x0);
        pUVar29 = (__this_00->fields).Camera;
        if (pUVar29 == (UnityEngine_Camera_o *)0x0) {
          ThrowNullReferenceException();
        }
        UVar50.fields.z = fVar45;
        UVar50.fields.x = (float)uStack_98;
        UVar50.fields.y = uStack_98._4_4_;
        UVar50 = UnityEngine_Camera__WorldToScreenPoint_68c0c30(pUVar29,UVar50,(MethodInfo *)0x0);
        if (pUVar40 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_Transform__set_position(pUVar40,UVar50,(MethodInfo *)0x0);
        in_XMM1_Db = fVar47;
      }
    } while( true );
  }
label_05d01147:
  ThrowNullReferenceException();
}


// UI.CharacterInfoHandler$$CreateInfoPopup
// il2cpp: UI_CharacterInfoPopup_o* UI_CharacterInfoHandler__CreateInfoPopup (UI_CharacterInfoHandler_o* __this, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x5d01a40
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d01b97: movaps xmmword ptr [rsp + 0x10], xmm2
// asm:   0x5d01b9c: movss dword ptr [rsp + 8], xmm1
// asm:   0x5d01ba2: jmp 0x5d01d7b

UI_CharacterInfoPopup_o *
UI_CharacterInfoHandler__CreateInfoPopup
          (UI_CharacterInfoHandler_o *__this,Characters_BaseCharacter_o *character,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte bVar10;
  Settings_UISettings_o *pSVar11;
  Settings_IntSetting_o *pSVar12;
  UnityEngine_Vector3_StaticFields *pUVar13;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *__this_00;
  UI_CharacterInfoPopup_o *__this_01;
  Characters_BaseCharacter_c *pCVar14;
  MethodInfo *method_00;
  byte bVar15;
  float fVar16;
  float fVar17;
  UnityEngine_Vector3_o offset;
  float local_40;
  float local_3c;
  undefined8 local_38;
  
  if (Il2CppMethodInitialized_07547d04 == '\0') {
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
    Il2CppMethodInitialized_07547d04 = '\x01';
  }
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
  local_38._0_4_ = (pUVar13->zeroVector).fields.x;
  local_38._4_4_ = (pUVar13->zeroVector).fields.y;
  local_40 = (pUVar13->zeroVector).fields.z;
  if (character == (Characters_BaseCharacter_o *)0x0) {
    local_3c = 250.0;
  }
  else {
    pCVar14 = character->klass;
    bVar10 = (pCVar14->_2).typeHierarchyDepth;
    bVar15 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if ((bVar10 < bVar15) ||
       ((pCVar14->_2).typeHierarchy[(ulong)bVar15 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
      bVar15 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
      local_3c = 250.0;
      if ((bVar10 < bVar15) ||
         ((pCVar14->_2).typeHierarchy[(ulong)bVar15 - 1] != (Il2CppClass *)TypeInfo_Characters_BasicTitan)) {
        bVar15 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
        if ((bVar15 <= bVar10) &&
           ((pCVar14->_2).typeHierarchy[(ulong)bVar15 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseShifter))
        {
          if (Il2CppMethodInitialized_0753e72c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_0753e72c = '\x01';
            pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
            pCVar14 = character->klass;
            bVar10 = (pCVar14->_2).typeHierarchyDepth;
            bVar15 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
          }
          if ((bVar10 < bVar15) ||
             ((pCVar14->_2).typeHierarchy[(ulong)bVar15 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseShifter
             )) {
            il2cpp_codegen_raise_invalid_cast_exception(character);
          }
          uVar4 = (pUVar13->upVector).fields.x;
          uVar8 = (pUVar13->upVector).fields.y;
          fVar16 = *(float *)((long)&(*(uint64_t *)((char *)character + 0x138)) + 4);
          local_40 = (pUVar13->upVector).fields.z * 57.0 * fVar16;
          local_38 = CONCAT44(fVar16 * (float)uVar8 * 57.0,fVar16 * (float)uVar4 * 57.0);
        }
      }
      else {
        if ((*(uint8_t *)((char *)character + 0x2b0)) == false) {
          if (Il2CppMethodInitialized_0753e72c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_0753e72c = '\x01';
            pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
          }
          uVar5 = (pUVar13->upVector).fields.x;
          uVar9 = (pUVar13->upVector).fields.y;
          local_40 = (pUVar13->upVector).fields.z * 20.0;
          fVar16 = (float)uVar5 * 20.0;
          fVar17 = (float)uVar9 * 20.0;
        }
        else {
          if (Il2CppMethodInitialized_0753e72c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_0753e72c = '\x01';
            pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
          }
          uVar3 = (pUVar13->upVector).fields.x;
          uVar7 = (pUVar13->upVector).fields.y;
          local_40 = (pUVar13->upVector).fields.z * 5.0;
          fVar16 = (float)uVar3 * 5.0;
          fVar17 = (float)uVar7 * 5.0;
        }
        fVar1 = *(float *)((long)&(*(uint64_t *)((char *)character + 0x138)) + 4);
        local_40 = local_40 * fVar1;
        local_38 = CONCAT44(fVar1 * fVar17,fVar1 * fVar16);
      }
    }
    else {
      if (Il2CppMethodInitialized_0753e72c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e72c = '\x01';
        pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
      }
      pSVar11 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
      if ((pSVar11 == (Settings_UISettings_o *)0x0) ||
         (pSVar12 = (pSVar11->fields).HumanNameDistance, pSVar12 == (Settings_IntSetting_o *)0x0))
      goto label_05d01def;
      uVar2 = (pUVar13->upVector).fields.x;
      uVar6 = (pUVar13->upVector).fields.y;
      local_38 = CONCAT44((float)uVar6 * 1.75,(float)uVar2 * 1.75);
      local_40 = (pUVar13->upVector).fields.z * 1.75;
      local_3c = (float)(pSVar12->fields)._value;
    }
  }
  parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_00 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                        (parent,"Prefabs/InGame/CharacterInfoPopup",false,
                         (MethodInfo_34D7620 *)
                         MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_CharacterInfoPopup);
  if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
     (__this_01 = UnityEngine_GameObject__GetComponent_object_
                            (__this_00,
                             (MethodInfo_353B730 *)
                             MethodInfo_UnityEngine_GameObject_GetComponent_CharacterInfoPopup),
     __this_01 != (UI_CharacterInfoPopup_o *)0x0)) {
    offset.fields.z = local_40;
    offset.fields.x = (float)(undefined4)local_38;
    offset.fields.y = (float)local_38._4_4_;
    UI_CharacterInfoPopup__Load(__this_01,character,offset,local_3c,method_00);
    return __this_01;
  }
label_05d01def:
  ThrowNullReferenceException();
}


// UI.CharacterInfoHandler$$RefreshDict
// il2cpp: void UI_CharacterInfoHandler__RefreshDict (UI_CharacterInfoHandler_o* __this, const MethodInfo* method);
// 0x5d01280
// eh: try 0x5d0152f..0x5d0177d -> pad 0x5d017a3 (+15 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5d017bb..0x5d017c0 -> pad 0x5d017c5 cleanup
// eh: try 0x5d017c8..0x5d017d2 -> pad 0x5d017da catch (...) [compiler noexcept guard]
// asm: 45 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d0137d: test r14, r14
// asm:   0x5d01380: jne 0x5d0140d
// asm:   0x5d01386: jmp 0x5d01773
// asm:   0x5d014cb: lea rbp, [rip + 0x1577f26]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x5d014d2: lea r14, [rip + 0x156fa27]  ; TypeInfo_System_Collections_Generic_IEnumerator_BaseCharacter
// asm:   0x5d014d9: lea r12, [rip + 0x158fa38]  ; MethodInfo_System_Collections_Generic_HashSet_SetItem_BaseCharacter_CharacterInfoPopup_Contains
// asm:   0x5d014e0: lea r13, [rip + 0x1579f09]  ; TypeInfo_UnityEngine_Object
// asm:   0x5d014e7: jmp 0x5d014fd
// asm:   0x5d014f0: mov rbx, qword ptr [rsp]
// asm:   0x5d014f4: test rbx, rbx
// asm:   0x5d014f7: je 0x5d0175a
// asm:   0x5d0151d: nop dword ptr [rax]
// asm:   0x5d0177d: mov rdi, rbp
// asm:   0x5d01780: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d01785: jmp 0x5d017a3
// asm:   0x5d01787: jmp 0x5d017a3
// asm:   0x5d01789: jmp 0x5d017a3
// asm:   0x5d0178b: jmp 0x5d017a3
// asm:   0x5d0178d: jmp 0x5d017a3
// asm:   0x5d0178f: jmp 0x5d017a3
// asm:   0x5d01791: jmp 0x5d017a3
// asm:   0x5d01793: jmp 0x5d017a3
// asm:   0x5d01795: jmp 0x5d017a3
// asm:   0x5d01797: jmp 0x5d017a3
// asm:   0x5d01799: jmp 0x5d017a3
// asm:   0x5d0179b: jmp 0x5d017a3
// asm:   0x5d0179d: jmp 0x5d017a3
// asm:   0x5d0179f: jmp 0x5d017a3
// asm:   0x5d017a1: jmp 0x5d017a3
// asm:   0x5d017a3: mov rbx, rax
// asm:   0x5d017a6: cmp edx, 1
// asm:   0x5d017a9: jne 0x5d017c8
// asm:   0x5d017ab: mov rdi, rbx
// asm:   0x5d017ae: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d017b3: mov rbp, qword ptr [rax]
// asm:   0x5d017b6: mov qword ptr [rsp + 8], rbp
// asm:   0x5d017bb: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d017c0: jmp 0x5d016d6
// asm:   0x5d017c5: mov rbx, rax
// asm:   0x5d017c8: lea rdi, [rsp + 8]
// asm:   0x5d017cd: call 0x2fdbab0  ; il2cpp_runtime_helper_02fdbab0()
// asm:   0x5d017d2: mov rdi, rbx
// asm:   0x5d017d5: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d017da: mov rdi, rax
// asm:   0x5d017dd: call 0x2ab61e0  ; __clang_call_terminate()

void UI_CharacterInfoHandler__RefreshDict(UI_CharacterInfoHandler_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  GameManagers_InGameManager_o *__this_00;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  char cVar4;
  bool bVar5;
  UI_CharacterInfoHandler___c_StaticFields *pUVar6;
  System_Predicate_T__o *match;
  Il2CppObject *pIVar7;
  VirtualInvokeData *pVVar8;
  Characters_BaseCharacter_o *character;
  UI_CharacterInfoPopup_o *value;
  Assets_Scripts_Utility_SetItem_BaseCharacter__CharacterInfoPopup__o *pAVar9;
  ulong uVar10;
  MethodInfo *method_00;
  long lVar11;
  Il2CppObject *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_07547d05 == '\0') {
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
    Il2CppMethodInitialized_07547d05 = '\x01';
  }
  local_48 = (Il2CppObject *)0x0;
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._characterInfoPopups;
  if ((TypeInfo_UI_CharacterInfoHandler_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CharacterInfoHandler_c);
    pUVar6 = TypeInfo_UI_CharacterInfoHandler_c->static_fields;
    match = (System_Predicate_T__o *)pUVar6->__9__14_0;
  }
  else {
    pUVar6 = TypeInfo_UI_CharacterInfoHandler_c->static_fields;
    match = (System_Predicate_T__o *)pUVar6->__9__14_0;
  }
  if (match == (System_Predicate_T__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_UI_CharacterInfoHandler_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CharacterInfoHandler_c);
      pUVar6 = TypeInfo_UI_CharacterInfoHandler_c->static_fields;
    }
    pIVar7 = (Il2CppObject *)pUVar6->__9;
    match = (System_Predicate_T__o *)
            il2cpp_codegen_object_new
                      ((Il2CppClass *)TypeInfo_System_Predicate_SetItem_BaseCharacter_CharacterInfoPopup);
    System_Predicate_object____ctor
              ((System_Predicate_object__o *)match,pIVar7,
               (intptr_t)MethodInfo_UI_CharacterInfoHandler_c_RefreshDict_b__14_0,(MethodInfo_3DC95B0 *)0x0);
    pUVar6 = TypeInfo_UI_CharacterInfoHandler_c->static_fields;
    pUVar6->__9__14_0 = (System_Predicate_SetItem_BaseCharacter__CharacterInfoPopup___o *)match;
    Il2CppCodeGenWriteBarrier(&pUVar6->__9__14_0);
  }
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___RemoveWhere
              (pSVar1,match,
               (MethodInfo_4FB6160 *)
               MethodInfo_System_Collections_Generic_HashSet_SetItem_BaseCharacter_CharacterInfoPopup_RemoveWhere
              );
    __this_00 = (__this->fields)._inGameManager;
    if ((__this_00 != (GameManagers_InGameManager_o *)0x0) &&
       (pIVar7 = (Il2CppObject *)
                 GameManagers_InGameManager__GetAllCharactersEnumerable(__this_00,(MethodInfo *)0x0),
       pIVar7 != (Il2CppObject *)0x0)) {
      pIVar2 = pIVar7->klass;
      uVar10 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar10 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar11 = 0;
        do {
          if (*(System_Collections_Generic_IEnumerable_BaseCharacter__c **)
               ((long)&pIVar3->interfaceType + lVar11) ==
              TypeInfo_System_Collections_Generic_IEnumerable_BaseCharacter) {
            pVVar8 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar11);
            goto label_05d014a1;
          }
          lVar11 = lVar11 + 0x10;
        } while (uVar10 * 0x10 != lVar11);
      }
      pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar7,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_BaseCharacter,
                          0);
label_05d014a1:
      pIVar7 = (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
      local_38 = (undefined1 *)&local_48;
      local_40 = 0;
      do {
        local_48 = pIVar7;
        if (pIVar7 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = pIVar7->klass;
        uVar10 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar10 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar11 = 0;
          do {
            if (*(Il2CppClass **)((long)&pIVar3->interfaceType + lVar11) ==
                (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
              pVVar8 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar11);
              goto label_05d01553;
            }
            lVar11 = lVar11 + 0x10;
          } while (uVar10 * 0x10 != lVar11);
        }
        pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar7,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05d01553:
        cVar4 = (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
        pIVar7 = local_48;
        if (cVar4 == '\0') {
          if (local_48 == (Il2CppObject *)0x0) {
            return;
          }
          pIVar2 = local_48->klass;
          uVar10 = (ulong)(pIVar2->_2).interface_offsets_count;
          if (uVar10 == 0) goto label_05d0171f;
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar11 = 0;
          goto label_05d01710;
        }
        if (local_48 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = local_48->klass;
        uVar10 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar10 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar11 = 0;
          do {
            if (*(System_Collections_Generic_IEnumerator_BaseCharacter__c **)
                 ((long)&pIVar3->interfaceType + lVar11) ==
                TypeInfo_System_Collections_Generic_IEnumerator_BaseCharacter) {
              pVVar8 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar11);
              goto label_05d015c3;
            }
            lVar11 = lVar11 + 0x10;
          } while (uVar10 * 0x10 != lVar11);
        }
        pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                           (local_48,(Il2CppClass *)
                                     TypeInfo_System_Collections_Generic_IEnumerator_BaseCharacter,0);
label_05d015c3:
        character = (Characters_BaseCharacter_o *)(*pVVar8->methodPtr)(pIVar7,pVVar8->method);
        if (character == (Characters_BaseCharacter_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar5 = (*(character->klass->vtable)._73_ValidTarget.methodPtr)
                          (character,(character->klass->vtable)._73_ValidTarget.method);
        pIVar7 = local_48;
        if (bVar5) {
          pAVar9 = (__this->fields).mockEntry;
          if (pAVar9 == (Assets_Scripts_Utility_SetItem_BaseCharacter__CharacterInfoPopup__o *)0x0) {
            ThrowNullReferenceException();
          }
          (pAVar9->fields)._Key_k__BackingField = character;
          Il2CppCodeGenWriteBarrier(&(pAVar9->fields)._Key_k__BackingField);
          pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._characterInfoPopups;
          if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar5 = System_Collections_Generic_HashSet_object___Contains
                            (pSVar1,(Il2CppObject *)(__this->fields).mockEntry,
                             (MethodInfo_4FB3720 *)
                             MethodInfo_System_Collections_Generic_HashSet_SetItem_BaseCharacter_CharacterInfoPopup_Contains
                            );
          pIVar7 = local_48;
          if (!bVar5) {
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)character,(MethodInfo *)0x0);
            pIVar7 = local_48;
            if ((bVar5) && ((character->fields).Dead == false)) {
              value = UI_CharacterInfoHandler__CreateInfoPopup(__this,character,method_00);
              pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._characterInfoPopups;
              pAVar9 = il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_Assets_Scripts_Utility_SetItem_BaseCharacter_CharacterInfoPopup);
              Assets_Scripts_Utility_SetItem_object__object____ctor
                        ((Assets_Scripts_Utility_SetItem_TKey__TValue__o *)pAVar9,(Il2CppObject *)character,
                         (Il2CppObject *)value,
                         (MethodInfo_40464C0 *)
                         MethodInfo_Assets_Scripts_Utility_SetItem_BaseCharacter_CharacterInfoPopup_ctor);
              if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                ThrowNullReferenceException();
              }
              System_Collections_Generic_HashSet_object___Add
                        (pSVar1,(Il2CppObject *)pAVar9,
                         (MethodInfo_4FB4450 *)
                         MethodInfo_System_Collections_Generic_HashSet_SetItem_BaseCharacter_CharacterInfoPopup_Add
                        );
              pIVar7 = local_48;
            }
          }
        }
      } while( true );
    }
  }
  ThrowNullReferenceException();
  while (lVar11 = lVar11 + 0x10, uVar10 * 0x10 != lVar11) {
label_05d01710:
    if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar11) == TypeInfo_System_IDisposable) {
      pVVar8 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar11);
      goto label_05d0173d;
    }
  }
label_05d0171f:
  pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath(local_48,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05d0173d:
  (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
  return;
}


// UI.CharacterInfoHandler$$.ctor
// il2cpp: void UI_CharacterInfoHandler___ctor (UI_CharacterInfoHandler_o* __this, const MethodInfo* method);
// 0x5d01ff0

void UI_CharacterInfoHandler___ctor(UI_CharacterInfoHandler_o *__this,MethodInfo *method)

{
  uint uVar1;
  Utility_PhysicsLayer_StaticFields *pUVar2;
  UnityEngine_LayerMask_o UVar3;
  System_Collections_Generic_HashSet_SetItem_BaseCharacter__CharacterInfoPopup___o *__this_00;
  System_Int32_array *layers;
  Assets_Scripts_Utility_SetItem_BaseCharacter__CharacterInfoPopup__o *__this_01;
  
  if (Il2CppMethodInitialized_07547d06 == '\0') {
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
    Il2CppMethodInitialized_07547d06 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_HashSet_SetItem_BaseCharacter_CharacterInfoPopup)
  ;
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (MethodInfo_4FB2EA0 *)
             MethodInfo_System_Collections_Generic_HashSet_SetItem_BaseCharacter_CharacterInfoPopup_ctor);
  (__this->fields)._characterInfoPopups = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._characterInfoPopups);
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
  if (layers == (System_Int32_array *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = (uint)layers->max_length;
  if (uVar1 != 0) {
    pUVar2 = TypeInfo_Utility_PhysicsLayer->static_fields;
    layers->m_Items[0] = pUVar2->MapObjectAll;
    if ((uVar1 != 1) && (layers->m_Items[1] = pUVar2->MapObjectEntities, 2 < uVar1)) {
      layers->m_Items[2] = pUVar2->TitanMovebox;
      UVar3 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      (__this->fields).CullMask.fields.m_Mask = (int32_t)UVar3.fields.m_Mask;
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_Assets_Scripts_Utility_SetItem_BaseCharacter_CharacterInfoPopup);
      Assets_Scripts_Utility_SetItem_object__object____ctor
                ((Assets_Scripts_Utility_SetItem_TKey__TValue__o *)__this_01,(Il2CppObject *)0x0,
                 (Il2CppObject *)0x0,
                 (MethodInfo_40464C0 *)
                 MethodInfo_Assets_Scripts_Utility_SetItem_BaseCharacter_CharacterInfoPopup_ctor);
      (__this->fields).mockEntry = __this_01;
      Il2CppCodeGenWriteBarrier(&(__this->fields).mockEntry);
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowIndexOutOfRangeException();
}


