// Type: GameManagers.CharacterEditorGameManager
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/GameManagers/CharacterEditorGameManager.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/CharacterEditorGameManager.cs
// --------------------------------

// GameManagers.CharacterEditorGameManager.<GenerateHumanPreviewsCoroutine>d__10$$.ctor
// il2cpp: void GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10___ctor (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10___ctor(GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.CharacterEditorGameManager.<GenerateHumanPreviewsCoroutine>d__10$$System.IDisposable.Dispose
// il2cpp: void GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10__System_IDisposable_Dispose (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x181e3c160
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e3c1c7: lea rcx, [rsp + 0x30]
// asm:   0x181e3c1cc: call 0x181e27a90  ; il2cpp_runtime_helper_181e27a90()
// asm:   0x181e3c1d1: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e3c1d6: test rcx, rcx
// asm:   0x181e3c1d9: jne 0x181e3c1e1
// asm:   0x181e3c1e1: call 0x1804171b0  ; il2cpp_codegen_rethrow()

void GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10__System_IDisposable_Dispose
               (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10_o *__this,
               MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == -3) || (iVar1 - 0xdU < 2)) {
    if (Il2CppMethodInitialized_184344df2 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
      Il2CppMethodInitialized_184344df2 = '\x01';
    }
    (__this->fields).__1__state = -1;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap3,
               MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
  }
  return;
}


// GameManagers.CharacterEditorGameManager.<GenerateHumanPreviewsCoroutine>d__10$$MoveNext
// il2cpp: bool GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10__MoveNext (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x181e3a380
// eh: try 0x181e3a557..0x181e3c0c7 -> pad 0x18333c8d0 (+15 call sites) catch Il2CppExceptionWrapper
// eh: try 0x181e3c0dc..0x181e3c118 -> pad 0x180354a90 cleanup
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e3be2d: mov rbx, qword ptr [rsp + 0x60]
// asm:   0x181e3be32: test rbx, rbx
// asm:   0x181e3be35: jne 0x181e3c0c7
// asm:   0x181e3be3b: movzx eax, byte ptr [rsp + 0xc0]
// asm:   0x181e3c0c7: lea rcx, [rsp + 0x68]
// asm:   0x181e3c0cc: call 0x181e27b30  ; il2cpp_runtime_helper_181e27b30()
// asm:   0x181e3c0d1: mov rcx, rbx
// asm:   0x181e3c0d4: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333c8d0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333c8d5: push rbp
// asm:   0x18333c8d6: sub rsp, 0x40
// asm:   0x18333c8da: mov rbp, rdx
// asm:   0x18333c8dd: mov rax, qword ptr [rbp + 0x40]
// asm:   0x18333c8e1: mov rcx, qword ptr [rax]
// asm:   0x18333c8e4: mov qword ptr [rbp + 0x60], rcx
// asm:   0x18333c8e8: movabs rax, 0
// asm:   0x18333c8f2: add rsp, 0x40
// asm:   0x18333c8f6: pop rbp
// asm:   0x18333c8f7: ret 

bool GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10__MoveNext
               (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10_o *__this,
               MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  GameManagers_CharacterEditorGameManager_o *__this_00;
  UnityEngine_Quaternion_StaticFields *pUVar6;
  Settings_IntSetting_o *pSVar7;
  Settings_HumanCustomSettings_o *pSVar8;
  Settings_SetSettingsContainer_HumanCustomSet__o *pSVar9;
  Settings_ListSetting_T__o *obj;
  Il2CppClass *pIVar10;
  Il2CppRuntimeInterfaceOffsetPair *pIVar11;
  Settings_StringSetting_o *pSVar12;
  Characters_DummyHuman_o *pCVar13;
  Characters_HumanSetup_o *pCVar14;
  bool bVar15;
  Settings_HumanCustomSet_o *pSVar16;
  UnityEngine_Quaternion_o *pUVar17;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *__this_01;
  UnityEngine_Transform_o *pUVar18;
  VirtualInvokeData *pVVar19;
  System_Collections_Generic_List_T__o *__this_02;
  System_String_o *pSVar20;
  Il2CppObject *pIVar21;
  ushort uVar22;
  GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10_o *local_res8;
  UnityEngine_Quaternion_Fields local_58;
  undefined8 local_48;
  GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10_o **local_40;
  System_Collections_Generic_List_Enumerator_T__o local_38 [2];
  
  local_res8 = __this;
  if (Il2CppMethodInitialized_184344df1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IListSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSets);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    il2cpp_codegen_initialize_runtime_metadata(&"BackNone");
    il2cpp_codegen_initialize_runtime_metadata(&"CostumeM");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"CostumeF");
    il2cpp_codegen_initialize_runtime_metadata(&"PresetNone");
    il2cpp_codegen_initialize_runtime_metadata(&"HatNone");
    il2cpp_codegen_initialize_runtime_metadata(&"Face");
    il2cpp_codegen_initialize_runtime_metadata(&"HairM8");
    il2cpp_codegen_initialize_runtime_metadata(&"Head");
    il2cpp_codegen_initialize_runtime_metadata(&"Glass");
    il2cpp_codegen_initialize_runtime_metadata(&"HairF");
    il2cpp_codegen_initialize_runtime_metadata(&"HeadNone");
    il2cpp_codegen_initialize_runtime_metadata(&"HairF7");
    il2cpp_codegen_initialize_runtime_metadata(&"GlassNone");
    il2cpp_codegen_initialize_runtime_metadata(&"Eye");
    il2cpp_codegen_initialize_runtime_metadata(&"FaceNone");
    il2cpp_codegen_initialize_runtime_metadata(&"Preset");
    il2cpp_codegen_initialize_runtime_metadata(&"HairM10");
    il2cpp_codegen_initialize_runtime_metadata(&"Hat");
    il2cpp_codegen_initialize_runtime_metadata(&"HairM");
    Il2CppMethodInitialized_184344df1 = '\x01';
  }
  local_48 = 0;
  local_40 = &local_res8;
  uVar4 = (local_res8->fields).__1__state;
  if (0xe < uVar4) {
    return false;
  }
  __this_00 = (local_res8->fields).__4__this;
  switch(uVar4) {
  case 0:
    (local_res8->fields).__1__state = -1;
    pSVar16 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_HumanCustomSet);
    Settings_HumanCustomSet___ctor(pSVar16,(MethodInfo *)0x0);
    (local_res8->fields)._set_5__2 = pSVar16;
    Il2CppCodeGenWriteBarrier(&(local_res8->fields)._set_5__2,pSVar16);
    pSVar16 = (local_res8->fields)._set_5__2;
    if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar12 = (pSVar16->fields).Hair;
    if (pSVar12 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar12,(Il2CppObject *)"HairM8",
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    pSVar16 = (local_res8->fields)._set_5__2;
    if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar7 = (pSVar16->fields).Costume;
    if (pSVar7 == (Settings_IntSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)pSVar7,1,
               (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    (local_res8->fields)._i_5__3 = 0;
    goto label_181e3a6a9;
  case 1:
    (local_res8->fields).__1__state = -1;
    pSVar20 = System_Int32__ToString(&(local_res8->fields)._i_5__3,(MethodInfo *)0x0);
    pSVar20 = System_String__Concat_1969e50("Eye",pSVar20,(MethodInfo *)0x0);
    if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    GameManagers_CharacterEditorGameManager__Screenshot
              (__this_00,870.0,500.0,172.0,172.0,pSVar20,(MethodInfo *)0x0);
    piVar1 = &(local_res8->fields)._i_5__3;
    *piVar1 = *piVar1 + 1;
label_181e3a6a9:
    iVar5 = (local_res8->fields)._i_5__3;
    if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
    }
    pSVar16 = (local_res8->fields)._set_5__2;
    if (iVar5 < TypeInfo_Characters_HumanSetup->static_fields->EyeCount) {
      if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar7 = (pSVar16->fields).Eye;
      if (pSVar7 == (Settings_IntSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar7,(local_res8->fields)._i_5__3,
                 (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
        ThrowNullReferenceException();
      }
      pCVar13 = (__this_00->fields).Human;
      if (pCVar13 == (Characters_DummyHuman_o *)0x0) {
        ThrowNullReferenceException();
      }
      pCVar14 = (pCVar13->fields).Setup;
      if (pCVar14 == (Characters_HumanSetup_o *)0x0) {
        ThrowNullReferenceException();
      }
      Characters_HumanSetup__Load(pCVar14,(local_res8->fields)._set_5__2,0,false,(MethodInfo *)0x0);
      pIVar21 = (Il2CppObject *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar21,(MethodInfo *)0x0);
      (local_res8->fields).__2__current = pIVar21;
      Il2CppCodeGenWriteBarrier(&(local_res8->fields).__2__current,pIVar21);
      (local_res8->fields).__1__state = 1;
      bVar15 = true;
    }
    else {
      if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar7 = (pSVar16->fields).Eye;
      if (pSVar7 == (Settings_IntSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar7,0,
                 (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      (local_res8->fields)._i_5__3 = -1;
label_181e3a852:
      iVar5 = (local_res8->fields)._i_5__3;
      if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
      }
      pSVar16 = (local_res8->fields)._set_5__2;
      if (iVar5 < TypeInfo_Characters_HumanSetup->static_fields->FaceCount) {
        if ((local_res8->fields)._i_5__3 == -1) {
          if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar12 = (pSVar16->fields).Face;
          if (pSVar12 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar12,(Il2CppObject *)"FaceNone",
                     (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        }
        else {
          if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar12 = (pSVar16->fields).Face;
          pSVar20 = System_Int32__ToString(&(local_res8->fields)._i_5__3,(MethodInfo *)0x0);
          pSVar20 = System_String__Concat_1969e50("Face",pSVar20,(MethodInfo *)0x0);
          if (pSVar12 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar12,(Il2CppObject *)pSVar20,
                     (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        }
        if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
          ThrowNullReferenceException();
        }
        pCVar13 = (__this_00->fields).Human;
        if (pCVar13 == (Characters_DummyHuman_o *)0x0) {
          ThrowNullReferenceException();
        }
        pCVar14 = (pCVar13->fields).Setup;
        if (pCVar14 == (Characters_HumanSetup_o *)0x0) {
          ThrowNullReferenceException();
        }
        Characters_HumanSetup__Load(pCVar14,(local_res8->fields)._set_5__2,0,false,(MethodInfo *)0x0);
        pIVar21 = (Il2CppObject *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
        UnityEngine_WaitForEndOfFrame___ctor
                  ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar21,(MethodInfo *)0x0);
        (local_res8->fields).__2__current = pIVar21;
        Il2CppCodeGenWriteBarrier(&(local_res8->fields).__2__current,pIVar21);
        (local_res8->fields).__1__state = 2;
        bVar15 = true;
      }
      else {
        if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar12 = (pSVar16->fields).Face;
        if (pSVar12 == (Settings_StringSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar12,(Il2CppObject *)"FaceNone",
                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        (local_res8->fields)._i_5__3 = -1;
label_181e3aa4e:
        iVar5 = (local_res8->fields)._i_5__3;
        if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
        }
        pSVar16 = (local_res8->fields)._set_5__2;
        if (iVar5 < TypeInfo_Characters_HumanSetup->static_fields->GlassCount) {
          if ((local_res8->fields)._i_5__3 == -1) {
            if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar12 = (pSVar16->fields).Glass;
            if (pSVar12 == (Settings_StringSetting_o *)0x0) {
              ThrowNullReferenceException();
            }
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)pSVar12,(Il2CppObject *)"GlassNone",
                       (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          }
          else {
            if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar12 = (pSVar16->fields).Glass;
            pSVar20 = System_Int32__ToString(&(local_res8->fields)._i_5__3,(MethodInfo *)0x0);
            pSVar20 = System_String__Concat_1969e50("Glass",pSVar20,(MethodInfo *)0x0);
            if (pSVar12 == (Settings_StringSetting_o *)0x0) {
              ThrowNullReferenceException();
            }
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)pSVar12,(Il2CppObject *)pSVar20,
                       (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          }
          if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
            ThrowNullReferenceException();
          }
          pCVar13 = (__this_00->fields).Human;
          if (pCVar13 == (Characters_DummyHuman_o *)0x0) {
            ThrowNullReferenceException();
          }
          pCVar14 = (pCVar13->fields).Setup;
          if (pCVar14 == (Characters_HumanSetup_o *)0x0) {
            ThrowNullReferenceException();
          }
          Characters_HumanSetup__Load(pCVar14,(local_res8->fields)._set_5__2,0,false,(MethodInfo *)0x0);
          pIVar21 = (Il2CppObject *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
          UnityEngine_WaitForEndOfFrame___ctor
                    ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar21,(MethodInfo *)0x0);
          (local_res8->fields).__2__current = pIVar21;
          Il2CppCodeGenWriteBarrier(&(local_res8->fields).__2__current,pIVar21);
          (local_res8->fields).__1__state = 3;
          bVar15 = true;
        }
        else {
          if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar12 = (pSVar16->fields).Glass;
          if (pSVar12 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar12,(Il2CppObject *)"GlassNone",
                     (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          (local_res8->fields)._i_5__3 = 0;
label_181e3ac46:
          iVar5 = (local_res8->fields)._i_5__3;
          if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
          }
          if (iVar5 < TypeInfo_Characters_HumanSetup->static_fields->HairMCount) {
            pSVar16 = (local_res8->fields)._set_5__2;
            if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar12 = (pSVar16->fields).Hair;
            pSVar20 = System_Int32__ToString(&(local_res8->fields)._i_5__3,(MethodInfo *)0x0);
            pSVar20 = System_String__Concat_1969e50("HairM",pSVar20,(MethodInfo *)0x0);
            if (pSVar12 == (Settings_StringSetting_o *)0x0) {
              ThrowNullReferenceException();
            }
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)pSVar12,(Il2CppObject *)pSVar20,
                       (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
            if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
              ThrowNullReferenceException();
            }
            pCVar13 = (__this_00->fields).Human;
            if (pCVar13 == (Characters_DummyHuman_o *)0x0) {
              ThrowNullReferenceException();
            }
            pCVar14 = (pCVar13->fields).Setup;
            if (pCVar14 == (Characters_HumanSetup_o *)0x0) {
              ThrowNullReferenceException();
            }
            Characters_HumanSetup__Load(pCVar14,(local_res8->fields)._set_5__2,0,false,(MethodInfo *)0x0);
            pIVar21 = (Il2CppObject *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
            UnityEngine_WaitForEndOfFrame___ctor
                      ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar21,(MethodInfo *)0x0);
            (local_res8->fields).__2__current = pIVar21;
            Il2CppCodeGenWriteBarrier(&(local_res8->fields).__2__current,pIVar21);
            (local_res8->fields).__1__state = 4;
            bVar15 = true;
          }
          else {
            (local_res8->fields)._i_5__3 = 0;
label_181e3ae3c:
            iVar5 = (local_res8->fields)._i_5__3;
            if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
            }
            pSVar16 = (local_res8->fields)._set_5__2;
            if (iVar5 < TypeInfo_Characters_HumanSetup->static_fields->HairFCount) {
              if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar12 = (pSVar16->fields).Hair;
              pSVar20 = System_Int32__ToString(&(local_res8->fields)._i_5__3,(MethodInfo *)0x0);
              pSVar20 = System_String__Concat_1969e50("HairF",pSVar20,(MethodInfo *)0x0);
              if (pSVar12 == (Settings_StringSetting_o *)0x0) {
                ThrowNullReferenceException();
              }
              Settings_TypedSetting_object___set_Value
                        ((Settings_TypedSetting_T__o *)pSVar12,(Il2CppObject *)pSVar20,
                         (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
              if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
                ThrowNullReferenceException();
              }
              pCVar13 = (__this_00->fields).Human;
              if (pCVar13 == (Characters_DummyHuman_o *)0x0) {
                ThrowNullReferenceException();
              }
              pCVar14 = (pCVar13->fields).Setup;
              if (pCVar14 == (Characters_HumanSetup_o *)0x0) {
                ThrowNullReferenceException();
              }
              Characters_HumanSetup__Load(pCVar14,(local_res8->fields)._set_5__2,0,false,(MethodInfo *)0x0);
              pIVar21 = (Il2CppObject *)
                        il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
              UnityEngine_WaitForEndOfFrame___ctor
                        ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar21,(MethodInfo *)0x0);
              (local_res8->fields).__2__current = pIVar21;
              Il2CppCodeGenWriteBarrier(&(local_res8->fields).__2__current,pIVar21);
              (local_res8->fields).__1__state = 5;
              bVar15 = true;
            }
            else {
              if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar12 = (pSVar16->fields).Hair;
              if (pSVar12 == (Settings_StringSetting_o *)0x0) {
                ThrowNullReferenceException();
              }
              Settings_TypedSetting_object___set_Value
                        ((Settings_TypedSetting_T__o *)pSVar12,(Il2CppObject *)"HairM10",
                         (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
              (local_res8->fields)._i_5__3 = -1;
label_181e3b00a:
              iVar5 = (local_res8->fields)._i_5__3;
              if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
              }
              pSVar16 = (local_res8->fields)._set_5__2;
              if (iVar5 < TypeInfo_Characters_HumanSetup->static_fields->HatCount) {
                if ((local_res8->fields)._i_5__3 == -1) {
                  if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pSVar12 = (pSVar16->fields).Hat;
                  if (pSVar12 == (Settings_StringSetting_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  Settings_TypedSetting_object___set_Value
                            ((Settings_TypedSetting_T__o *)pSVar12,(Il2CppObject *)"HatNone",
                             (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                }
                else {
                  if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pSVar12 = (pSVar16->fields).Hat;
                  pSVar20 = System_Int32__ToString(&(local_res8->fields)._i_5__3,(MethodInfo *)0x0);
                  pSVar20 = System_String__Concat_1969e50("Hat",pSVar20,(MethodInfo *)0x0);
                  if (pSVar12 == (Settings_StringSetting_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  Settings_TypedSetting_object___set_Value
                            ((Settings_TypedSetting_T__o *)pSVar12,(Il2CppObject *)pSVar20,
                             (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                }
                if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pCVar13 = (__this_00->fields).Human;
                if (pCVar13 == (Characters_DummyHuman_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pCVar14 = (pCVar13->fields).Setup;
                if (pCVar14 == (Characters_HumanSetup_o *)0x0) {
                  ThrowNullReferenceException();
                }
                Characters_HumanSetup__Load(pCVar14,(local_res8->fields)._set_5__2,0,false,(MethodInfo *)0x0);
                pIVar21 = (Il2CppObject *)
                          il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
                UnityEngine_WaitForEndOfFrame___ctor
                          ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar21,(MethodInfo *)0x0);
                (local_res8->fields).__2__current = pIVar21;
                Il2CppCodeGenWriteBarrier(&(local_res8->fields).__2__current,pIVar21);
                (local_res8->fields).__1__state = 7;
                bVar15 = true;
              }
              else {
                if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pSVar12 = (pSVar16->fields).Hat;
                if (pSVar12 == (Settings_StringSetting_o *)0x0) {
                  ThrowNullReferenceException();
                }
                Settings_TypedSetting_object___set_Value
                          ((Settings_TypedSetting_T__o *)pSVar12,(Il2CppObject *)"HatNone",
                           (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pCVar13 = (__this_00->fields).Human;
                if (pCVar13 == (Characters_DummyHuman_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pUVar18 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)pCVar13,(MethodInfo *)0x0);
                local_58.x = 0.0;
                local_58.y = -3.1415927;
                local_58._8_8_ = (ulonglong)(uint)local_58.w << 0x20;
                pUVar17 = UnityEngine_Quaternion__Internal_FromEulerRad
                                    ((UnityEngine_Quaternion_o *)local_38,(UnityEngine_Vector3_o *)&local_58,
                                     (MethodInfo *)0x0);
                if (pUVar18 == (UnityEngine_Transform_o *)0x0) {
                  ThrowNullReferenceException();
                }
                local_58.x = (pUVar17->fields).x;
                local_58.y = (pUVar17->fields).y;
                local_58.z = (pUVar17->fields).z;
                local_58.w = (pUVar17->fields).w;
                UnityEngine_Transform__set_rotation
                          (pUVar18,(UnityEngine_Quaternion_o *)&local_58,(MethodInfo *)0x0);
                (local_res8->fields)._i_5__3 = -1;
label_181e3b2e8:
                iVar5 = (local_res8->fields)._i_5__3;
                if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
                }
                pSVar16 = (local_res8->fields)._set_5__2;
                if (iVar5 < TypeInfo_Characters_HumanSetup->static_fields->BackCount) {
                  if ((local_res8->fields)._i_5__3 == -1) {
                    if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pSVar12 = (pSVar16->fields).Back;
                    if (pSVar12 == (Settings_StringSetting_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    Settings_TypedSetting_object___set_Value
                              ((Settings_TypedSetting_T__o *)pSVar12,(Il2CppObject *)"BackNone",
                               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                  }
                  else {
                    if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pSVar12 = (pSVar16->fields).Back;
                    pSVar20 = System_Int32__ToString(&(local_res8->fields)._i_5__3,(MethodInfo *)0x0);
                    pSVar20 = System_String__Concat_1969e50("Back",pSVar20,(MethodInfo *)0x0);
                    if (pSVar12 == (Settings_StringSetting_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    Settings_TypedSetting_object___set_Value
                              ((Settings_TypedSetting_T__o *)pSVar12,(Il2CppObject *)pSVar20,
                               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                  }
                  pCVar13 = (__this_00->fields).Human;
                  if (pCVar13 == (Characters_DummyHuman_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pCVar14 = (pCVar13->fields).Setup;
                  if (pCVar14 == (Characters_HumanSetup_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  Characters_HumanSetup__Load
                            (pCVar14,(local_res8->fields)._set_5__2,0,false,(MethodInfo *)0x0);
                  __this_01 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
                  UnityEngine_WaitForSeconds___ctor(__this_01,1.0,(MethodInfo *)0x0);
                  (local_res8->fields).__2__current = (Il2CppObject *)__this_01;
                  Il2CppCodeGenWriteBarrier(&(local_res8->fields).__2__current,__this_01);
                  (local_res8->fields).__1__state = 8;
                  bVar15 = true;
                }
                else {
                  if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pSVar12 = (pSVar16->fields).Back;
                  if (pSVar12 == (Settings_StringSetting_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  Settings_TypedSetting_object___set_Value
                            ((Settings_TypedSetting_T__o *)pSVar12,(Il2CppObject *)"BackNone",
                             (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                  pCVar13 = (__this_00->fields).Human;
                  if (pCVar13 == (Characters_DummyHuman_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pUVar18 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)pCVar13,(MethodInfo *)0x0);
                  if (Il2CppMethodInitialized_18433de5b == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
                    Il2CppMethodInitialized_18433de5b = '\x01';
                  }
                  if (pUVar18 == (UnityEngine_Transform_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pUVar6 = TypeInfo_UnityEngine_Quaternion->static_fields;
                  local_58.x = (pUVar6->identityQuaternion).fields.x;
                  local_58.y = (pUVar6->identityQuaternion).fields.y;
                  local_58.z = (pUVar6->identityQuaternion).fields.z;
                  local_58.w = (pUVar6->identityQuaternion).fields.w;
                  UnityEngine_Transform__set_rotation
                            (pUVar18,(UnityEngine_Quaternion_o *)&local_58,(MethodInfo *)0x0);
                  (local_res8->fields)._i_5__3 = -1;
label_181e3b55a:
                  iVar5 = (local_res8->fields)._i_5__3;
                  if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
                  }
                  pSVar16 = (local_res8->fields)._set_5__2;
                  if (iVar5 < TypeInfo_Characters_HumanSetup->static_fields->HeadCount) {
                    if ((local_res8->fields)._i_5__3 == -1) {
                      if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pSVar12 = (pSVar16->fields).Head;
                      if (pSVar12 == (Settings_StringSetting_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      Settings_TypedSetting_object___set_Value
                                ((Settings_TypedSetting_T__o *)pSVar12,(Il2CppObject *)"HeadNone",
                                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                    }
                    else {
                      if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pSVar12 = (pSVar16->fields).Head;
                      pSVar20 = System_Int32__ToString(&(local_res8->fields)._i_5__3,(MethodInfo *)0x0);
                      pSVar20 = System_String__Concat_1969e50("Head",pSVar20,(MethodInfo *)0x0)
                      ;
                      if (pSVar12 == (Settings_StringSetting_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      Settings_TypedSetting_object___set_Value
                                ((Settings_TypedSetting_T__o *)pSVar12,(Il2CppObject *)pSVar20,
                                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                    }
                    pCVar13 = (__this_00->fields).Human;
                    if (pCVar13 == (Characters_DummyHuman_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pCVar14 = (pCVar13->fields).Setup;
                    if (pCVar14 == (Characters_HumanSetup_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    Characters_HumanSetup__Load
                              (pCVar14,(local_res8->fields)._set_5__2,0,false,(MethodInfo *)0x0);
                    pIVar21 = (Il2CppObject *)
                              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame)
                    ;
                    UnityEngine_WaitForEndOfFrame___ctor
                              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar21,(MethodInfo *)0x0);
                    (local_res8->fields).__2__current = pIVar21;
                    Il2CppCodeGenWriteBarrier(&(local_res8->fields).__2__current,pIVar21);
                    (local_res8->fields).__1__state = 10;
                    bVar15 = true;
                  }
                  else {
                    if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pSVar12 = (pSVar16->fields).Head;
                    if (pSVar12 == (Settings_StringSetting_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    Settings_TypedSetting_object___set_Value
                              ((Settings_TypedSetting_T__o *)pSVar12,(Il2CppObject *)"HeadNone",
                               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                    pSVar16 = (local_res8->fields)._set_5__2;
                    if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pSVar12 = (pSVar16->fields).Hair;
                    if (pSVar12 == (Settings_StringSetting_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    Settings_TypedSetting_object___set_Value
                              ((Settings_TypedSetting_T__o *)pSVar12,(Il2CppObject *)"HairM8",
                               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                    (local_res8->fields)._i_5__3 = 0;
label_181e3b78e:
                    iVar5 = (local_res8->fields)._i_5__3;
                    if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
                    }
                    pSVar16 = (local_res8->fields)._set_5__2;
                    if (iVar5 < TypeInfo_Characters_HumanSetup->static_fields->CostumeMCount) {
                      if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pSVar7 = (pSVar16->fields).Costume;
                      if (pSVar7 == (Settings_IntSetting_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      Settings_TypedSetting_int___set_Value
                                ((Settings_TypedSetting_int__o *)pSVar7,(local_res8->fields)._i_5__3,
                                 (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                      pCVar13 = (__this_00->fields).Human;
                      if (pCVar13 == (Characters_DummyHuman_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pCVar14 = (pCVar13->fields).Setup;
                      if (pCVar14 == (Characters_HumanSetup_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      Characters_HumanSetup__Load
                                (pCVar14,(local_res8->fields)._set_5__2,0,false,(MethodInfo *)0x0);
                      pIVar21 = (Il2CppObject *)
                                il2cpp_codegen_object_new
                                          ((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
                      UnityEngine_WaitForEndOfFrame___ctor
                                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar21,(MethodInfo *)0x0
                                );
                      (local_res8->fields).__2__current = pIVar21;
                      Il2CppCodeGenWriteBarrier(&(local_res8->fields).__2__current,pIVar21);
                      (local_res8->fields).__1__state = 0xb;
                      bVar15 = true;
                    }
                    else {
                      if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pSVar7 = (pSVar16->fields).Sex;
                      if (pSVar7 == (Settings_IntSetting_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      Settings_TypedSetting_int___set_Value
                                ((Settings_TypedSetting_int__o *)pSVar7,1,
                                 (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                      pSVar16 = (local_res8->fields)._set_5__2;
                      if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pSVar12 = (pSVar16->fields).Hair;
                      if (pSVar12 == (Settings_StringSetting_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      Settings_TypedSetting_object___set_Value
                                ((Settings_TypedSetting_T__o *)pSVar12,(Il2CppObject *)"HairF7",
                                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                      (local_res8->fields)._i_5__3 = 0;
label_181e3b969:
                      iVar5 = (local_res8->fields)._i_5__3;
                      if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
                      }
                      if (iVar5 < TypeInfo_Characters_HumanSetup->static_fields->CostumeFCount) {
                        pSVar16 = (local_res8->fields)._set_5__2;
                        if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        pSVar7 = (pSVar16->fields).Costume;
                        if (pSVar7 == (Settings_IntSetting_o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        Settings_TypedSetting_int___set_Value
                                  ((Settings_TypedSetting_int__o *)pSVar7,(local_res8->fields)._i_5__3,
                                   (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                        pCVar13 = (__this_00->fields).Human;
                        if (pCVar13 == (Characters_DummyHuman_o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        pCVar14 = (pCVar13->fields).Setup;
                        if (pCVar14 == (Characters_HumanSetup_o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        Characters_HumanSetup__Load
                                  (pCVar14,(local_res8->fields)._set_5__2,0,false,(MethodInfo *)0x0);
                        pIVar21 = (Il2CppObject *)
                                  il2cpp_codegen_object_new
                                            ((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
                        UnityEngine_WaitForEndOfFrame___ctor
                                  ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar21,
                                   (MethodInfo *)0x0);
                        (local_res8->fields).__2__current = pIVar21;
                        Il2CppCodeGenWriteBarrier(&(local_res8->fields).__2__current,pIVar21);
                        (local_res8->fields).__1__state = 0xc;
                        bVar15 = true;
                      }
                      else {
                        pSVar8 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
                        if (pSVar8 == (Settings_HumanCustomSettings_o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        pSVar9 = (pSVar8->fields).Costume1Sets;
                        if (pSVar9 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        obj = (pSVar9->fields).Sets;
                        if (obj == (Settings_ListSetting_T__o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        pIVar10 = (Il2CppClass *)obj->klass;
                        uVar3 = (pIVar10->_2).interface_offsets_count;
                        if (uVar3 != 0) {
                          pIVar11 = (pIVar10->_1).interfaceOffsets;
                          pSVar16 = (Settings_HumanCustomSet_o *)0x0;
                          do {
                            if (pIVar11[(longlong)pSVar16].interfaceType ==
                                (Il2CppClass *)TypeInfo_Settings_IListSetting) {
                              pVVar19 = pIVar10->vtable + (pIVar11[(longlong)pSVar16].offset + 2);
                              goto label_181e3bae9;
                            }
                            uVar22 = (short)pSVar16 + 1;
                            pSVar16 = (Settings_HumanCustomSet_o *)(ulonglong)uVar22;
                          } while (uVar22 < uVar3);
                        }
                        pVVar19 = GetInterfaceInvokeDataFromVTableSlowPath
                                            ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_Settings_IListSetting
                                             ,2);
label_181e3bae9:
                        __this_02 = (System_Collections_Generic_List_T__o *)
                                    (*pVVar19->methodPtr)((Il2CppObject *)obj,pVVar19->method);
                        if (__this_02 == (System_Collections_Generic_List_T__o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                                  (local_38,__this_02,
                                   (MethodInfo_91F180 *)
                                   MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
                        (local_res8->fields).__7__wrap3.fields._list = local_38[0].fields._list;
                        (local_res8->fields).__7__wrap3.fields._index = local_38[0].fields._index;
                        (local_res8->fields).__7__wrap3.fields._version = local_38[0].fields._version;
                        (local_res8->fields).__7__wrap3.fields._current =
                             (Settings_BaseSetting_o *)local_38[0].fields._current;
                        Il2CppCodeGenWriteBarrier((void **)&(local_res8->fields).__7__wrap3,(void *)0x0);
                        (local_res8->fields).__1__state = -3;
label_181e3bc6b:
                        bVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                           ((System_Collections_Generic_List_Enumerator_object__o *)
                                            &(local_res8->fields).__7__wrap3,
                                            (MethodInfo_153A2A0 *)
                                            MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext
                                           );
                        if (bVar15) {
                          pSVar16 = (Settings_HumanCustomSet_o *)
                                    (local_res8->fields).__7__wrap3.fields._current;
                          if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
                            (local_res8->fields)._preset_5__5 = (Settings_HumanCustomSet_o *)0x0;
                            pSVar16 = (Settings_HumanCustomSet_o *)0x0;
                          }
                          else {
                            bVar2 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
                            if (((pSVar16->klass->_2).typeHierarchyDepth < bVar2) ||
                               ((pSVar16->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                                (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
                              il2cpp_codegen_raise_invalid_cast_exception(pSVar16);
                            }
                            (local_res8->fields)._preset_5__5 = pSVar16;
                            bVar2 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
                            if (((pSVar16->klass->_2).typeHierarchyDepth < bVar2) ||
                               ((pSVar16->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                                (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
                              il2cpp_codegen_raise_invalid_cast_exception(pSVar16);
                            }
                          }
                          Il2CppCodeGenWriteBarrier(&(local_res8->fields)._preset_5__5,pSVar16);
                          if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
                            ThrowNullReferenceException();
                          }
                          pCVar13 = (__this_00->fields).Human;
                          if (pCVar13 == (Characters_DummyHuman_o *)0x0) {
                            ThrowNullReferenceException();
                          }
                          pCVar14 = (pCVar13->fields).Setup;
                          if (pCVar14 == (Characters_HumanSetup_o *)0x0) {
                            ThrowNullReferenceException();
                          }
                          Characters_HumanSetup__Load
                                    (pCVar14,(local_res8->fields)._preset_5__5,0,false,(MethodInfo *)0x0);
                          pIVar21 = (Il2CppObject *)
                                    il2cpp_codegen_object_new
                                              ((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
                          UnityEngine_WaitForEndOfFrame___ctor
                                    ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar21,
                                     (MethodInfo *)0x0);
                          (local_res8->fields).__2__current = pIVar21;
                          Il2CppCodeGenWriteBarrier(&(local_res8->fields).__2__current,pIVar21);
                          (local_res8->fields).__1__state = 0xd;
                          bVar15 = true;
                        }
                        else {
                          GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10____m__Finally1
                                    (local_res8,(MethodInfo *)0x0);
                          (local_res8->fields).__7__wrap3.fields._list =
                               (System_Collections_Generic_List_T__o *)0x0;
                          (local_res8->fields).__7__wrap3.fields._index = 0;
                          (local_res8->fields).__7__wrap3.fields._version = 0;
                          (local_res8->fields).__7__wrap3.fields._current = (Settings_BaseSetting_o *)0x0;
                          if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
                            ThrowNullReferenceException();
                          }
                          GameManagers_CharacterEditorGameManager__Screenshot
                                    (__this_00,450.0,360.0,128.0,128.0,"PresetNone",(MethodInfo *)0x0
                                    );
                          bVar15 = false;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    break;
  case 2:
    (local_res8->fields).__1__state = -1;
    pSVar16 = (local_res8->fields)._set_5__2;
    if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar12 = (pSVar16->fields).Face;
    if (pSVar12 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    GameManagers_CharacterEditorGameManager__Screenshot
              (__this_00,870.0,470.0,172.0,172.0,(pSVar12->fields)._value,(MethodInfo *)0x0);
    piVar1 = &(local_res8->fields)._i_5__3;
    *piVar1 = *piVar1 + 1;
    goto label_181e3a852;
  case 3:
    (local_res8->fields).__1__state = -1;
    pSVar16 = (local_res8->fields)._set_5__2;
    if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar12 = (pSVar16->fields).Glass;
    if (pSVar12 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    GameManagers_CharacterEditorGameManager__Screenshot
              (__this_00,870.0,500.0,172.0,172.0,(pSVar12->fields)._value,(MethodInfo *)0x0);
    piVar1 = &(local_res8->fields)._i_5__3;
    *piVar1 = *piVar1 + 1;
    goto label_181e3aa4e;
  case 4:
    (local_res8->fields).__1__state = -1;
    pSVar16 = (local_res8->fields)._set_5__2;
    if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar12 = (pSVar16->fields).Hair;
    if (pSVar12 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    GameManagers_CharacterEditorGameManager__Screenshot
              (__this_00,816.0,510.0,280.0,280.0,(pSVar12->fields)._value,(MethodInfo *)0x0);
    piVar1 = &(local_res8->fields)._i_5__3;
    *piVar1 = *piVar1 + 1;
    goto label_181e3ac46;
  case 5:
    (local_res8->fields).__1__state = -1;
    pIVar21 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame)
    ;
    UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar21,(MethodInfo *)0x0);
    (local_res8->fields).__2__current = pIVar21;
    Il2CppCodeGenWriteBarrier(&(local_res8->fields).__2__current,pIVar21);
    (local_res8->fields).__1__state = 6;
    bVar15 = true;
    break;
  case 6:
    (local_res8->fields).__1__state = -1;
    pSVar16 = (local_res8->fields)._set_5__2;
    if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar12 = (pSVar16->fields).Hair;
    if (pSVar12 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    GameManagers_CharacterEditorGameManager__Screenshot
              (__this_00,816.0,510.0,280.0,280.0,(pSVar12->fields)._value,(MethodInfo *)0x0);
    piVar1 = &(local_res8->fields)._i_5__3;
    *piVar1 = *piVar1 + 1;
    goto label_181e3ae3c;
  case 7:
    (local_res8->fields).__1__state = -1;
    pSVar16 = (local_res8->fields)._set_5__2;
    if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar12 = (pSVar16->fields).Hat;
    if (pSVar12 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    GameManagers_CharacterEditorGameManager__Screenshot
              (__this_00,796.0,570.0,320.0,320.0,(pSVar12->fields)._value,(MethodInfo *)0x0);
    piVar1 = &(local_res8->fields)._i_5__3;
    *piVar1 = *piVar1 + 1;
    goto label_181e3b00a;
  case 8:
    (local_res8->fields).__1__state = -1;
    pIVar21 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame)
    ;
    UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar21,(MethodInfo *)0x0);
    (local_res8->fields).__2__current = pIVar21;
    Il2CppCodeGenWriteBarrier(&(local_res8->fields).__2__current,pIVar21);
    (local_res8->fields).__1__state = 9;
    bVar15 = true;
    break;
  case 9:
    (local_res8->fields).__1__state = -1;
    pSVar16 = (local_res8->fields)._set_5__2;
    if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar12 = (pSVar16->fields).Back;
    if (pSVar12 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    GameManagers_CharacterEditorGameManager__Screenshot
              (__this_00,776.0,300.0,360.0,360.0,(pSVar12->fields)._value,(MethodInfo *)0x0);
    piVar1 = &(local_res8->fields)._i_5__3;
    *piVar1 = *piVar1 + 1;
    goto label_181e3b2e8;
  case 10:
    (local_res8->fields).__1__state = -1;
    pSVar16 = (local_res8->fields)._set_5__2;
    if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar12 = (pSVar16->fields).Head;
    if (pSVar12 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    GameManagers_CharacterEditorGameManager__Screenshot
              (__this_00,801.0,470.0,310.0,310.0,(pSVar12->fields)._value,(MethodInfo *)0x0);
    piVar1 = &(local_res8->fields)._i_5__3;
    *piVar1 = *piVar1 + 1;
    goto label_181e3b55a;
  case 0xb:
    (local_res8->fields).__1__state = -1;
    pSVar20 = System_Int32__ToString(&(local_res8->fields)._i_5__3,(MethodInfo *)0x0);
    pSVar20 = System_String__Concat_1969e50("CostumeM",pSVar20,(MethodInfo *)0x0);
    if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    GameManagers_CharacterEditorGameManager__Screenshot
              (__this_00,826.0,250.0,260.0,260.0,pSVar20,(MethodInfo *)0x0);
    piVar1 = &(local_res8->fields)._i_5__3;
    *piVar1 = *piVar1 + 1;
    goto label_181e3b78e;
  case 0xc:
    (local_res8->fields).__1__state = -1;
    pSVar20 = System_Int32__ToString(&(local_res8->fields)._i_5__3,(MethodInfo *)0x0);
    pSVar20 = System_String__Concat_1969e50("CostumeF",pSVar20,(MethodInfo *)0x0);
    if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    GameManagers_CharacterEditorGameManager__Screenshot
              (__this_00,826.0,250.0,260.0,260.0,pSVar20,(MethodInfo *)0x0);
    piVar1 = &(local_res8->fields)._i_5__3;
    *piVar1 = *piVar1 + 1;
    goto label_181e3b969;
  case 0xd:
    (local_res8->fields).__1__state = -3;
    pIVar21 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame)
    ;
    UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar21,(MethodInfo *)0x0);
    (local_res8->fields).__2__current = pIVar21;
    Il2CppCodeGenWriteBarrier(&(local_res8->fields).__2__current,pIVar21);
    (local_res8->fields).__1__state = 0xe;
    bVar15 = true;
    break;
  case 0xe:
    (local_res8->fields).__1__state = -3;
    pSVar16 = (local_res8->fields)._preset_5__5;
    if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar12 = (pSVar16->fields).Name;
    if (pSVar12 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar20 = System_String__Concat_1969e50("Preset",(pSVar12->fields)._value,(MethodInfo *)0x0);
    if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    GameManagers_CharacterEditorGameManager__Screenshot
              (__this_00,746.0,360.0,420.0,420.0,pSVar20,(MethodInfo *)0x0);
    (local_res8->fields)._preset_5__5 = (Settings_HumanCustomSet_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(local_res8->fields)._preset_5__5,(void *)0x0);
    goto label_181e3bc6b;
  }
  return bVar15;
}


// GameManagers.CharacterEditorGameManager.<GenerateHumanPreviewsCoroutine>d__10$$<>m__Finally1
// il2cpp: void GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10____m__Finally1 (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x181e3c1f0

void GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10____m__Finally1
               (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10_o *__this,
               MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344df2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
    Il2CppMethodInitialized_184344df2 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap3,
             MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
  return;
}


// GameManagers.CharacterEditorGameManager.<GenerateHumanPreviewsCoroutine>d__10$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current(GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// GameManagers.CharacterEditorGameManager.<GenerateHumanPreviewsCoroutine>d__10$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10__System_Collections_IEnumerator_Reset (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x181e3c120

void GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10__System_Collections_IEnumerator_Reset
               (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10_o *__this,
               MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_GameManagers_CharacterEditorGameManager_GenerateHumanPreviewsCoroutine_d__10_System_Collections
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// GameManagers.CharacterEditorGameManager.<GenerateHumanPreviewsCoroutine>d__10$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10__System_Collections_IEnumerator_get_Current (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10__System_Collections_IEnumerator_get_Current(GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// GameManagers.CharacterEditorGameManager.<GenerateTitanPreviewsCoroutine>d__11$$.ctor
// il2cpp: void GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11___ctor (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11___ctor(GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.CharacterEditorGameManager.<GenerateTitanPreviewsCoroutine>d__11$$System.IDisposable.Dispose
// il2cpp: void GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11__System_IDisposable_Dispose (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11_o* __this, const MethodInfo* method);
// 0x181e61310
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e61374: lea rcx, [rsp + 0x30]
// asm:   0x181e61379: call 0x181e41ef0  ; il2cpp_runtime_helper_181e41ef0()
// asm:   0x181e6137e: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e61383: test rcx, rcx
// asm:   0x181e61386: jne 0x181e6138e
// asm:   0x181e6138e: call 0x1804171b0  ; il2cpp_codegen_rethrow()

void GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11__System_IDisposable_Dispose
               (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11_o *__this,
               MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == -3) || (iVar1 == 3)) {
    if (Il2CppMethodInitialized_184344df4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
      Il2CppMethodInitialized_184344df4 = '\x01';
    }
    (__this->fields).__1__state = -1;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap3,
               MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
  }
  return;
}


// GameManagers.CharacterEditorGameManager.<GenerateTitanPreviewsCoroutine>d__11$$MoveNext
// il2cpp: bool GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11__MoveNext (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11_o* __this, const MethodInfo* method);
// 0x181e60890
// eh: try 0x181e6097c..0x181e612ba -> pad 0x183328840 (+4 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e611ef: mov rbx, qword ptr [rsp + 0x48]
// asm:   0x181e611f4: test rbx, rbx
// asm:   0x181e611f7: jne 0x181e612ba
// asm:   0x181e611fd: movzx eax, byte ptr [rsp + 0x90]
// asm:   0x181e612ba: lea rcx, [rsp + 0x50]
// asm:   0x181e612bf: call 0x181e41ee0  ; il2cpp_runtime_helper_181e41ee0()
// asm:   0x181e612c4: mov rcx, rbx
// asm:   0x181e612c7: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183328840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183328845: push rbp
// asm:   0x183328846: sub rsp, 0x40
// asm:   0x18332884a: mov rbp, rdx
// asm:   0x18332884d: mov rax, qword ptr [rbp + 0x40]
// asm:   0x183328851: mov rcx, qword ptr [rax]
// asm:   0x183328854: mov qword ptr [rbp + 0x48], rcx
// asm:   0x183328858: movabs rax, 0
// asm:   0x183328862: add rsp, 0x40
// asm:   0x183328866: pop rbp
// asm:   0x183328867: ret 

bool GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11__MoveNext
               (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11_o *__this,
               MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  GameManagers_CharacterEditorGameManager_o *__this_00;
  Settings_TitanCustomSettings_o *pSVar4;
  Settings_SetSettingsContainer_TitanCustomSet__o *__this_01;
  System_Collections_Generic_List_string__o *__this_02;
  Settings_StringSetting_o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  bool bVar7;
  System_String_o *pSVar8;
  Settings_TitanCustomSet_o *pSVar9;
  Il2CppObject *pIVar10;
  System_Collections_Generic_List_Enumerator_T__o local_20;
  
  if (Il2CppMethodInitialized_184344df3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanSetup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    il2cpp_codegen_initialize_runtime_metadata(&"Body");
    il2cpp_codegen_initialize_runtime_metadata(&"Head");
    il2cpp_codegen_initialize_runtime_metadata(&"Eye");
    il2cpp_codegen_initialize_runtime_metadata(&"HairM1");
    Il2CppMethodInitialized_184344df3 = '\x01';
  }
  __this_00 = (__this->fields).__4__this;
  iVar3 = (__this->fields).__1__state;
  if (iVar3 == 0) {
    (__this->fields).__1__state = -1;
    pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
    if (pSVar4 == (Settings_TitanCustomSettings_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_01 = (pSVar4->fields).TitanCustomSets;
    if (__this_01 == (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar9 = (Settings_TitanCustomSet_o *)
             Settings_SetSettingsContainer_object___GetSelectedSet
                       ((Settings_SetSettingsContainer_T__o *)__this_01,
                        (MethodInfo_C8EAF0 *)
                        MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet);
    if (pSVar9 == (Settings_TitanCustomSet_o *)0x0) {
      (__this->fields)._set_5__2 = (Settings_TitanCustomSet_o *)0x0;
      pSVar9 = (Settings_TitanCustomSet_o *)0x0;
    }
    else {
      bVar2 = (TypeInfo_Settings_TitanCustomSet->_2).typeHierarchyDepth;
      if (((((Settings_BaseSetSetting_c *)pSVar9->klass)->_2).typeHierarchyDepth < bVar2) ||
         ((((Settings_BaseSetSetting_c *)pSVar9->klass)->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_TitanCustomSet)) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar9);
      }
      (__this->fields)._set_5__2 = pSVar9;
      bVar2 = (TypeInfo_Settings_TitanCustomSet->_2).typeHierarchyDepth;
      if (((((Settings_BaseSetSetting_c *)pSVar9->klass)->_2).typeHierarchyDepth < bVar2) ||
         ((((Settings_BaseSetSetting_c *)pSVar9->klass)->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_TitanCustomSet)) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar9);
      }
    }
    Il2CppCodeGenWriteBarrier(&(__this->fields)._set_5__2,pSVar9);
    pSVar9 = (__this->fields)._set_5__2;
    if (pSVar9 == (Settings_TitanCustomSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pSVar9->klass->vtable)._4_SetDefault.methodPtr)(pSVar9,(pSVar9->klass->vtable)._4_SetDefault.method);
    pSVar9 = (__this->fields)._set_5__2;
    if (pSVar9 == (Settings_TitanCustomSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar5 = (pSVar9->fields).Hair;
    if (pSVar5 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)"HairM1",
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    (__this->fields)._i_5__3 = 0;
label_181e60ccf:
    iVar3 = (__this->fields)._i_5__3;
    if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
    }
    if (iVar3 < TypeInfo_Characters_BasicTitanSetup->static_fields->EyeCount) {
      pSVar9 = (__this->fields)._set_5__2;
      if (pSVar9 == (Settings_TitanCustomSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar6 = (pSVar9->fields).Eye;
      if (pSVar6 != (Settings_IntSetting_o *)0x0) {
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)pSVar6,(__this->fields)._i_5__3,
                   (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        if (__this_00 != (GameManagers_CharacterEditorGameManager_o *)0x0) {
          GameManagers_CharacterEditorGameManager__ReinstantiateCharacter(__this_00,false,(MethodInfo *)0x0);
          pIVar10 = (Il2CppObject *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
          UnityEngine_WaitForEndOfFrame___ctor
                    ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar10,(MethodInfo *)0x0);
          (__this->fields).__2__current = pIVar10;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar10);
          (__this->fields).__1__state = 1;
          return true;
        }
        ThrowNullReferenceException();
      }
      ThrowNullReferenceException();
    }
    pSVar9 = (__this->fields)._set_5__2;
    if (pSVar9 == (Settings_TitanCustomSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pSVar9->klass->vtable)._4_SetDefault.methodPtr)(pSVar9,(pSVar9->klass->vtable)._4_SetDefault.method);
    pSVar9 = (__this->fields)._set_5__2;
    if (pSVar9 == (Settings_TitanCustomSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar5 = (pSVar9->fields).Hair;
    if (pSVar5 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)"HairM1",
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    (__this->fields)._i_5__3 = 0;
label_181e60e06:
    iVar3 = (__this->fields)._i_5__3;
    if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
    }
    if (iVar3 < TypeInfo_Characters_BasicTitanSetup->static_fields->HeadCount) {
      pSVar9 = (__this->fields)._set_5__2;
      if (pSVar9 == (Settings_TitanCustomSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar6 = (pSVar9->fields).Head;
      if (pSVar6 != (Settings_IntSetting_o *)0x0) {
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)pSVar6,(__this->fields)._i_5__3,
                   (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        if (__this_00 != (GameManagers_CharacterEditorGameManager_o *)0x0) {
          GameManagers_CharacterEditorGameManager__ReinstantiateCharacter(__this_00,false,(MethodInfo *)0x0);
          pIVar10 = (Il2CppObject *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
          UnityEngine_WaitForEndOfFrame___ctor
                    ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar10,(MethodInfo *)0x0);
          (__this->fields).__2__current = pIVar10;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar10);
          (__this->fields).__1__state = 2;
          return true;
        }
        ThrowNullReferenceException();
      }
      ThrowNullReferenceException();
    }
    pSVar9 = (__this->fields)._set_5__2;
    if (pSVar9 == (Settings_TitanCustomSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pSVar9->klass->vtable)._4_SetDefault.methodPtr)(pSVar9,(pSVar9->klass->vtable)._4_SetDefault.method);
    if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
    }
    __this_02 = TypeInfo_Characters_BasicTitanSetup->static_fields->AllHairs;
    if (__this_02 == (System_Collections_Generic_List_string__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              (&local_20,(System_Collections_Generic_List_T__o *)__this_02,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    (__this->fields).__7__wrap3.fields._list = local_20.fields._list;
    (__this->fields).__7__wrap3.fields._index = local_20.fields._index;
    (__this->fields).__7__wrap3.fields._version = local_20.fields._version;
    (__this->fields).__7__wrap3.fields._current = (System_String_o *)local_20.fields._current;
    Il2CppCodeGenWriteBarrier((void **)&(__this->fields).__7__wrap3,(void *)0x0);
    (__this->fields).__1__state = -3;
  }
  else {
    if (iVar3 == 1) {
      (__this->fields).__1__state = -1;
      pSVar8 = System_Int32__ToString(&(__this->fields)._i_5__3,(MethodInfo *)0x0);
      pSVar8 = System_String__Concat_1969e50("Eye",pSVar8,(MethodInfo *)0x0);
      if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
        ThrowNullReferenceException();
      }
      GameManagers_CharacterEditorGameManager__Screenshot
                (__this_00,876.0,570.0,172.0,172.0,pSVar8,(MethodInfo *)0x0);
      piVar1 = &(__this->fields)._i_5__3;
      *piVar1 = *piVar1 + 1;
      goto label_181e60ccf;
    }
    if (iVar3 == 2) {
      (__this->fields).__1__state = -1;
      pSVar8 = System_Int32__ToString(&(__this->fields)._i_5__3,(MethodInfo *)0x0);
      pSVar8 = System_String__Concat_1969e50("Head",pSVar8,(MethodInfo *)0x0);
      if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
        ThrowNullReferenceException();
      }
      GameManagers_CharacterEditorGameManager__Screenshot
                (__this_00,852.0,580.0,220.0,220.0,pSVar8,(MethodInfo *)0x0);
      piVar1 = &(__this->fields)._i_5__3;
      *piVar1 = *piVar1 + 1;
      goto label_181e60e06;
    }
    if (iVar3 != 3) {
      if (iVar3 != 4) {
        return false;
      }
      (__this->fields).__1__state = -1;
      pSVar8 = System_Int32__ToString(&(__this->fields)._i_5__3,(MethodInfo *)0x0);
      pSVar8 = System_String__Concat_1969e50("Body",pSVar8,(MethodInfo *)0x0);
      if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
        ThrowNullReferenceException();
      }
      GameManagers_CharacterEditorGameManager__Screenshot
                (__this_00,766.0,220.0,380.0,380.0,pSVar8,(MethodInfo *)0x0);
      piVar1 = &(__this->fields)._i_5__3;
      *piVar1 = *piVar1 + 1;
      goto label_181e61110;
    }
    (__this->fields).__1__state = -3;
    if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    GameManagers_CharacterEditorGameManager__Screenshot
              (__this_00,820.0,560.0,280.0,280.0,(__this->fields)._hair_5__5,(MethodInfo *)0x0);
    (__this->fields)._hair_5__5 = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._hair_5__5,(void *)0x0);
  }
  bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                    ((System_Collections_Generic_List_Enumerator_object__o *)&(__this->fields).__7__wrap3,
                     (MethodInfo_153A2A0 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
  if (bVar7) {
    pSVar8 = (__this->fields).__7__wrap3.fields._current;
    (__this->fields)._hair_5__5 = pSVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._hair_5__5,pSVar8);
    pSVar9 = (__this->fields)._set_5__2;
    if (pSVar9 == (Settings_TitanCustomSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar5 = (pSVar9->fields).Hair;
    if (pSVar5 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)(__this->fields)._hair_5__5,
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      if (__this_00 != (GameManagers_CharacterEditorGameManager_o *)0x0) {
        GameManagers_CharacterEditorGameManager__ReinstantiateCharacter(__this_00,false,(MethodInfo *)0x0);
        pIVar10 = (Il2CppObject *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
        UnityEngine_WaitForEndOfFrame___ctor
                  ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar10,(MethodInfo *)0x0);
        (__this->fields).__2__current = pIVar10;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar10);
        (__this->fields).__1__state = 3;
        return true;
      }
      ThrowNullReferenceException();
    }
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_184344df4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    Il2CppMethodInitialized_184344df4 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap3,
             MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
  (__this->fields).__7__wrap3.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  (__this->fields).__7__wrap3.fields._index = 0;
  (__this->fields).__7__wrap3.fields._version = 0;
  (__this->fields).__7__wrap3.fields._current = (System_String_o *)0x0;
  pSVar9 = (__this->fields)._set_5__2;
  if (pSVar9 == (Settings_TitanCustomSet_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pSVar9->klass->vtable)._4_SetDefault.methodPtr)(pSVar9,(pSVar9->klass->vtable)._4_SetDefault.method);
  pSVar9 = (__this->fields)._set_5__2;
  if (pSVar9 == (Settings_TitanCustomSet_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar5 = (pSVar9->fields).Hair;
  if (pSVar5 == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)"HairM1",
             (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  (__this->fields)._i_5__3 = 0;
label_181e61110:
  iVar3 = (__this->fields)._i_5__3;
  if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
  }
  if (iVar3 < TypeInfo_Characters_BasicTitanSetup->static_fields->BodyCount) {
    pSVar9 = (__this->fields)._set_5__2;
    if (pSVar9 == (Settings_TitanCustomSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar6 = (pSVar9->fields).Body;
    if (pSVar6 == (Settings_IntSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)pSVar6,(__this->fields)._i_5__3,
               (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    GameManagers_CharacterEditorGameManager__ReinstantiateCharacter(__this_00,false,(MethodInfo *)0x0);
    pIVar10 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame)
    ;
    UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar10,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar10;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar10);
    (__this->fields).__1__state = 4;
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  return bVar7;
}


// GameManagers.CharacterEditorGameManager.<GenerateTitanPreviewsCoroutine>d__11$$<>m__Finally1
// il2cpp: void GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11____m__Finally1 (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11_o* __this, const MethodInfo* method);
// 0x181e613a0

void GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11____m__Finally1
               (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11_o *__this,
               MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344df4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    Il2CppMethodInitialized_184344df4 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap3,
             MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
  return;
}


// GameManagers.CharacterEditorGameManager.<GenerateTitanPreviewsCoroutine>d__11$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current(GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// GameManagers.CharacterEditorGameManager.<GenerateTitanPreviewsCoroutine>d__11$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11__System_Collections_IEnumerator_Reset (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11_o* __this, const MethodInfo* method);
// 0x181e612d0

void GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11__System_Collections_IEnumerator_Reset
               (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11_o *__this,
               MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_GameManagers_CharacterEditorGameManager_GenerateTitanPreviewsCoroutine_d__11_System_Collections
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// GameManagers.CharacterEditorGameManager.<GenerateTitanPreviewsCoroutine>d__11$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11__System_Collections_IEnumerator_get_Current (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11__System_Collections_IEnumerator_get_Current(GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// GameManagers.CharacterEditorGameManager$$Awake
// il2cpp: void GameManagers_CharacterEditorGameManager__Awake (GameManagers_CharacterEditorGameManager_o* __this, const MethodInfo* method);
// 0x181e32310

void GameManagers_CharacterEditorGameManager__Awake
               (GameManagers_CharacterEditorGameManager_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  System_String_o *path;
  UnityEngine_Vector3_StaticFields *pUVar5;
  UnityEngine_Quaternion_StaticFields *pUVar6;
  Settings_HumanCustomSettings_o *pSVar7;
  Settings_SetSettingsContainer_HumanCustomSet__o *pSVar8;
  Settings_IntSetting_o *pSVar9;
  Settings_TitanCustomSettings_o *pSVar10;
  Settings_SetSettingsContainer_TitanCustomSet__o *pSVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  UnityEngine_GameObject_o *pUVar14;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Renderer_o *pUVar15;
  UnityEngine_Material_o *pUVar16;
  UnityEngine_Vector3_Fields local_58;
  UnityEngine_Color_Fields local_48 [4];
  
  if (Il2CppMethodInitialized_184344dea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject_40ddf10);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Geometry/Prefabs/Cuboid");
    il2cpp_codegen_initialize_runtime_metadata(&"Materials/TransparentMaterial");
    Il2CppMethodInitialized_184344dea = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->Map;
  if (Il2CppMethodInitialized_18434494b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18434494b = '\x01';
  }
  pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar1 = (pUVar5->downVector).fields.z;
  uVar2 = (pUVar5->downVector).fields.x;
  uVar3 = (pUVar5->downVector).fields.y;
  if (Il2CppMethodInitialized_18433de5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_18433de5b = '\x01';
  }
  pUVar6 = TypeInfo_UnityEngine_Quaternion->static_fields;
  uVar12._0_4_ = (pUVar6->identityQuaternion).fields.x;
  uVar12._4_4_ = (pUVar6->identityQuaternion).fields.y;
  uVar13._0_4_ = (pUVar6->identityQuaternion).fields.z;
  uVar13._4_4_ = (pUVar6->identityQuaternion).fields.w;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  local_58.y = (float)uVar3 * 0.05;
  local_58.x = (float)uVar2 * 0.05;
  local_58.z = fVar1 * 0.05;
  local_48[0]._0_8_ = uVar12;
  local_48[0]._8_8_ = uVar13;
  pUVar14 = ApplicationManagers_ResourceManager__InstantiateAsset_object__795df0
                      (path,"Geometry/Prefabs/Cuboid",(UnityEngine_Vector3_o *)&local_58,
                       (UnityEngine_Quaternion_o *)local_48,false,
                       (MethodInfo_795DF0 *)
                       MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject_40ddf10);
  (__this->fields).platform = pUVar14;
  Il2CppCodeGenWriteBarrier(&(__this->fields).platform,pUVar14);
  pUVar14 = (__this->fields).platform;
  if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__get_transform(pUVar14,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      local_58.x = 2.0;
      local_58.y = 0.1;
      local_58.z = 2.0;
      UnityEngine_Transform__set_localScale(__this_00,(UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
      pUVar14 = (__this->fields).platform;
      if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
        pUVar15 = UnityEngine_GameObject__GetComponent_object_
                            (pUVar14,(MethodInfo_6F5650 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
        pUVar16 = (UnityEngine_Material_o *)
                  ApplicationManagers_ResourceManager__LoadAsset
                            (TypeInfo_Utility_ResourcePaths->static_fields->Map,"Materials/TransparentMaterial",false,
                             (MethodInfo *)0x0);
        if (pUVar15 != (UnityEngine_Renderer_o *)0x0) {
          if (pUVar16 != (UnityEngine_Material_o *)0x0) {
            bVar4 = (TypeInfo_UnityEngine_Material->_2).typeHierarchyDepth;
            if (((pUVar16->klass->_2).typeHierarchyDepth < bVar4) ||
               ((pUVar16->klass->_2).typeHierarchy[(ulonglong)bVar4 - 1] !=
                (Il2CppClass *)TypeInfo_UnityEngine_Material)) {
              il2cpp_codegen_raise_invalid_cast_exception(pUVar16);
            }
          }
          UnityEngine_Renderer__set_sharedMaterial(pUVar15,pUVar16,(MethodInfo *)0x0);
          pUVar14 = (__this->fields).platform;
          if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
            pUVar15 = UnityEngine_GameObject__GetComponent_object_
                                (pUVar14,(MethodInfo_6F5650 *)
                                         MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
            if (pUVar15 != (UnityEngine_Renderer_o *)0x0) {
              pUVar16 = UnityEngine_Renderer__get_material(pUVar15,(MethodInfo *)0x0);
              if (pUVar16 != (UnityEngine_Material_o *)0x0) {
                local_48[0].r = 1.0;
                local_48[0].g = 1.0;
                local_48[0].b = 1.0;
                local_48[0].a = 0.2;
                UnityEngine_Material__set_color(pUVar16,(UnityEngine_Color_o *)local_48,(MethodInfo *)0x0);
                pSVar7 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
                if (((pSVar7 != (Settings_HumanCustomSettings_o *)0x0) &&
                    (pSVar8 = (pSVar7->fields).CustomSets,
                    pSVar8 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) &&
                   (pSVar9 = (pSVar8->fields).SelectedSetIndex, pSVar9 != (Settings_IntSetting_o *)0x0)) {
                  Settings_TypedSetting_int___set_Value
                            ((Settings_TypedSetting_int__o *)pSVar9,0,
                             (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                  pSVar10 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
                  if (((pSVar10 != (Settings_TitanCustomSettings_o *)0x0) &&
                      (pSVar11 = (pSVar10->fields).TitanCustomSets,
                      pSVar11 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) &&
                     (pSVar9 = (pSVar11->fields).SelectedSetIndex, pSVar9 != (Settings_IntSetting_o *)0x0)) {
                    Settings_TypedSetting_int___set_Value
                              ((Settings_TypedSetting_int__o *)pSVar9,0,
                               (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                    if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
                    }
                    Utility_CharacterPreviewGenerator__InitializePreviewSystem((MethodInfo *)0x0);
                    UI_CharacterEditorTitanSkinsPanel__ResetPreview((MethodInfo *)0x0);
                    GameManagers_CharacterEditorGameManager__ReinstantiateCharacter
                              (__this,true,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.CharacterEditorGameManager$$ReinstantiateCharacter
// il2cpp: void GameManagers_CharacterEditorGameManager__ReinstantiateCharacter (GameManagers_CharacterEditorGameManager_o* __this, bool applySkins, const MethodInfo* method);
// 0x181e32920
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e32ee8: mov rcx, rbp
// asm:   0x181e32eeb: jmp 0x181e32f19

void GameManagers_CharacterEditorGameManager__ReinstantiateCharacter
               (GameManagers_CharacterEditorGameManager_o *__this,bool applySkins,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  float fVar4;
  Characters_DummyCharacter_o *pCVar5;
  Settings_TitanCustomSettings_o *pSVar6;
  Settings_SetSettingsContainer_TitanCustomSet__o *__this_00;
  System_String_o *pSVar7;
  UnityEngine_Vector3_StaticFields *pUVar8;
  UnityEngine_Quaternion_StaticFields *pUVar9;
  Settings_HumanCustomSettings_o *pSVar10;
  Settings_SetSettingsContainer_HumanCustomSet__o *__this_01;
  Characters_HumanSetup_o *__this_02;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  UnityEngine_Object_o *obj;
  Settings_TitanCustomSet_o *__this_03;
  System_String_o *str1;
  System_String_o *pSVar16;
  UnityEngine_GameObject_o *pUVar17;
  Characters_DummyTitan_o *pCVar18;
  Characters_BasicTitan_o *__this_04;
  Characters_BasicTitanMovementSync_o *__this_05;
  Characters_DummyHuman_o *pCVar19;
  Characters_Human_o *__this_06;
  Characters_HumanMovementSync_o *__this_07;
  Settings_HumanCustomSet_o *pSVar20;
  Settings_HumanCustomSet_o *customSet;
  int32_t local_res8 [2];
  UnityEngine_Vector3_Fields local_58;
  UnityEngine_Quaternion_Fields local_48 [3];
  
  if (Il2CppMethodInitialized_184344deb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_DummyHuman);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_DummyTitan);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_BasicTitanMovementSync);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_HumanMovementSync);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject_40ddf10);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Prefabs/HumanPlayer");
    Il2CppMethodInitialized_184344deb = '\x01';
  }
  customSet = (Settings_HumanCustomSet_o *)0x0;
  pCVar5 = (__this->fields).Character;
  local_res8[0] = 0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar15 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pCVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar15) {
    pCVar5 = (__this->fields).Character;
    if (pCVar5 == (Characters_DummyCharacter_o *)0x0) goto label_181e32f48;
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pCVar5,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
  }
  if ((TypeInfo_GameManagers_CharacterEditorGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager);
  }
  if (TypeInfo_GameManagers_CharacterEditorGameManager->static_fields->HumanMode == false) {
    pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
    if (((pSVar6 != (Settings_TitanCustomSettings_o *)0x0) &&
        (__this_00 = (pSVar6->fields).TitanCustomSets,
        __this_00 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) &&
       (__this_03 = (Settings_TitanCustomSet_o *)
                    Settings_SetSettingsContainer_object___GetSelectedSet
                              ((Settings_SetSettingsContainer_T__o *)__this_00,
                               (MethodInfo_C8EAF0 *)
                               MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet),
       __this_03 != (Settings_TitanCustomSet_o *)0x0)) {
      bVar3 = (TypeInfo_Settings_TitanCustomSet->_2).typeHierarchyDepth;
      if (((__this_03->klass->_2).typeHierarchyDepth < bVar3) ||
         ((__this_03->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_TitanCustomSet)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_03,TypeInfo_Settings_TitanCustomSet);
      }
      local_res8[0] = Settings_TitanCustomSet__GetBody(__this_03,(MethodInfo *)0x0);
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar7 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
      if ((TypeInfo_Characters_CharacterPrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterPrefabs);
      }
      pSVar16 = TypeInfo_Characters_CharacterPrefabs->static_fields->BasicTitanPrefix;
      str1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
      pSVar16 = System_String__Concat_1969e50(pSVar16,str1,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_18433dbea == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433dbea = '\x01';
      }
      pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar1._0_4_ = (pUVar8->zeroVector).fields.x;
      uVar1._4_4_ = (pUVar8->zeroVector).fields.y;
      fVar4 = (pUVar8->zeroVector).fields.z;
      if (Il2CppMethodInitialized_18433de5b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
        Il2CppMethodInitialized_18433de5b = '\x01';
      }
      pUVar9 = TypeInfo_UnityEngine_Quaternion->static_fields;
      uVar11._0_4_ = (pUVar9->identityQuaternion).fields.x;
      uVar11._4_4_ = (pUVar9->identityQuaternion).fields.y;
      uVar12._0_4_ = (pUVar9->identityQuaternion).fields.z;
      uVar12._4_4_ = (pUVar9->identityQuaternion).fields.w;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      local_58._0_8_ = uVar1;
      local_58.z = fVar4;
      local_48[0]._0_8_ = uVar11;
      local_48[0]._8_8_ = uVar12;
      pUVar17 = ApplicationManagers_ResourceManager__InstantiateAsset_object__795df0
                          (pSVar7,pSVar16,(UnityEngine_Vector3_o *)&local_58,
                           (UnityEngine_Quaternion_o *)local_48,false,
                           (MethodInfo_795DF0 *)
                           MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject_40ddf10)
      ;
      if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
        pCVar18 = UnityEngine_GameObject__AddComponent_object_
                            (pUVar17,(MethodInfo_6F4D60 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_DummyTitan);
        (__this->fields).Titan = pCVar18;
        Il2CppCodeGenWriteBarrier(&(__this->fields).Titan,pCVar18);
        __this_04 = UnityEngine_GameObject__GetComponent_object_
                              (pUVar17,(MethodInfo_6F5650 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_BasicTitan);
        if (__this_04 != (Characters_BasicTitan_o *)0x0) {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_04,false,(MethodInfo *)0x0);
          __this_05 = UnityEngine_GameObject__GetComponent_object_
                                (pUVar17,(MethodInfo_6F5650 *)
                                         MethodInfo_UnityEngine_GameObject_GetComponent_BasicTitanMovementSync
                                );
          if (__this_05 != (Characters_BasicTitanMovementSync_o *)0x0) {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_05,false,(MethodInfo *)0x0);
            pCVar18 = (__this->fields).Titan;
            if (pCVar18 != (Characters_DummyTitan_o *)0x0) {
              Characters_DummyTitan__LoadSet(pCVar18,__this_03,applySkins,(MethodInfo *)0x0);
              pCVar18 = (__this->fields).Titan;
              if (pCVar18 != (Characters_DummyTitan_o *)0x0) {
                Characters_DummyCharacter__Idle((Characters_DummyCharacter_o *)pCVar18,(MethodInfo *)0x0);
                pCVar18 = (__this->fields).Titan;
label_181e32d20:
                (__this->fields).Character = (Characters_DummyCharacter_o *)pCVar18;
                Il2CppCodeGenWriteBarrier(&(__this->fields).Character,pCVar18);
                return;
              }
            }
          }
        }
      }
    }
  }
  else {
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar7 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
    if (Il2CppMethodInitialized_18433dbea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbea = '\x01';
    }
    pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar2._0_4_ = (pUVar8->zeroVector).fields.x;
    uVar2._4_4_ = (pUVar8->zeroVector).fields.y;
    fVar4 = (pUVar8->zeroVector).fields.z;
    if (Il2CppMethodInitialized_18433de5b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
      Il2CppMethodInitialized_18433de5b = '\x01';
    }
    pUVar9 = TypeInfo_UnityEngine_Quaternion->static_fields;
    uVar13._0_4_ = (pUVar9->identityQuaternion).fields.x;
    uVar13._4_4_ = (pUVar9->identityQuaternion).fields.y;
    uVar14._0_4_ = (pUVar9->identityQuaternion).fields.z;
    uVar14._4_4_ = (pUVar9->identityQuaternion).fields.w;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    local_58._0_8_ = uVar2;
    local_58.z = fVar4;
    local_48[0]._0_8_ = uVar13;
    local_48[0]._8_8_ = uVar14;
    pUVar17 = ApplicationManagers_ResourceManager__InstantiateAsset_object__795df0
                        (pSVar7,"Human/Prefabs/HumanPlayer",(UnityEngine_Vector3_o *)&local_58,
                         (UnityEngine_Quaternion_o *)local_48,false,
                         (MethodInfo_795DF0 *)
                         MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject_40ddf10);
    if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
      pCVar19 = UnityEngine_GameObject__AddComponent_object_
                          (pUVar17,(MethodInfo_6F4D60 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_DummyHuman);
      (__this->fields).Human = pCVar19;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Human,pCVar19);
      __this_06 = UnityEngine_GameObject__GetComponent_object_
                            (pUVar17,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Human
                            );
      if (__this_06 != (Characters_Human_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_06,false,(MethodInfo *)0x0);
        __this_07 = UnityEngine_GameObject__GetComponent_object_
                              (pUVar17,(MethodInfo_6F5650 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_HumanMovementSync);
        if (__this_07 != (Characters_HumanMovementSync_o *)0x0) {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_07,false,(MethodInfo *)0x0);
          pCVar19 = (__this->fields).Human;
          if (((pCVar19 != (Characters_DummyHuman_o *)0x0) &&
              (pSVar10 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings,
              pSVar10 != (Settings_HumanCustomSettings_o *)0x0)) &&
             (__this_01 = (pSVar10->fields).CustomSets,
             __this_01 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) {
            __this_02 = (pCVar19->fields).Setup;
            pSVar20 = (Settings_HumanCustomSet_o *)
                      Settings_SetSettingsContainer_object___GetSelectedSet
                                ((Settings_SetSettingsContainer_T__o *)__this_01,
                                 (MethodInfo_C8EAF0 *)
                                 MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
            if (__this_02 != (Characters_HumanSetup_o *)0x0) {
              if (pSVar20 != (Settings_HumanCustomSet_o *)0x0) {
                bVar3 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
                if (((((Settings_BaseSetSetting_c *)pSVar20->klass)->_2).typeHierarchyDepth < bVar3) ||
                   (customSet = pSVar20,
                   (((Settings_BaseSetSetting_c *)pSVar20->klass)->_2).typeHierarchy[(ulonglong)bVar3 - 1] !=
                   (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
                  il2cpp_codegen_raise_invalid_cast_exception();
                }
              }
              Characters_HumanSetup__Load(__this_02,customSet,0,false,(MethodInfo *)0x0);
              pCVar19 = (__this->fields).Human;
              if (pCVar19 != (Characters_DummyHuman_o *)0x0) {
                Characters_DummyCharacter__Idle((Characters_DummyCharacter_o *)pCVar19,(MethodInfo *)0x0);
                pCVar18 = (Characters_DummyTitan_o *)(__this->fields).Human;
                goto label_181e32d20;
              }
            }
          }
        }
      }
    }
  }
label_181e32f48:
  ThrowNullReferenceException();
}


// GameManagers.CharacterEditorGameManager$$GeneratePreviews
// il2cpp: void GameManagers_CharacterEditorGameManager__GeneratePreviews (GameManagers_CharacterEditorGameManager_o* __this, const MethodInfo* method);
// 0x181e32730
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e32839: jmp 0x181e32877

void GameManagers_CharacterEditorGameManager__GeneratePreviews
               (GameManagers_CharacterEditorGameManager_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11_o *__this_01;
  
  if (Il2CppMethodInitialized_184344dec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    Il2CppMethodInitialized_184344dec = '\x01';
  }
  if ((TypeInfo_GameManagers_CharacterEditorGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager);
  }
  bVar1 = System_IO_Directory__Exists
                    (TypeInfo_GameManagers_CharacterEditorGameManager->static_fields->PreviewFolderPath,
                     (MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_GameManagers_CharacterEditorGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager);
    }
    System_IO_Directory__CreateDirectory
              (TypeInfo_GameManagers_CharacterEditorGameManager->static_fields->PreviewFolderPath,
               (MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).platform;
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
label_181e3289f:
    ThrowNullReferenceException();
  }
  UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_CharacterEditorGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager);
  }
  if (TypeInfo_GameManagers_CharacterEditorGameManager->static_fields->HumanMode == false) {
    if (Il2CppMethodInitialized_184344dee == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_GameManagers_CharacterEditorGameManager_GenerateTitanPreviewsCoroutine_d__11);
      Il2CppMethodInitialized_184344dee = '\x01';
    }
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_GameManagers_CharacterEditorGameManager_GenerateTitanPreviewsCoroutine_d__11
                          );
    GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10___ctor
              ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this_01,0,(MethodInfo *)0x0);
    if (__this_01 == (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11_o *)0x0)
    goto label_181e3289f;
  }
  else {
    if (Il2CppMethodInitialized_184344ded == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_GameManagers_CharacterEditorGameManager_GenerateHumanPreviewsCoroutine_d__10);
      Il2CppMethodInitialized_184344ded = '\x01';
    }
    __this_01 = (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_GameManagers_CharacterEditorGameManager_GenerateHumanPreviewsCoroutine_d__10
                          );
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_01,(MethodInfo *)0x0);
    (__this_01->fields).__1__state = 0;
  }
  (__this_01->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this,__this);
  UnityEngine_MonoBehaviour__StartCoroutine_Auto
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_01,
             (MethodInfo *)0x0);
  return;
}


// GameManagers.CharacterEditorGameManager$$GenerateHumanPreviewsCoroutine
// il2cpp: System_Collections_IEnumerator_o* GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine (GameManagers_CharacterEditorGameManager_o* __this, const MethodInfo* method);
// 0x181e326c0

System_Collections_IEnumerator_o *
GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine
          (GameManagers_CharacterEditorGameManager_o *__this,MethodInfo *method)

{
  GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10_o *__this_00;
  
  if (Il2CppMethodInitialized_184344ded == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_GameManagers_CharacterEditorGameManager_GenerateHumanPreviewsCoroutine_d__10);
    Il2CppMethodInitialized_184344ded = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_GameManagers_CharacterEditorGameManager_GenerateHumanPreviewsCoroutine_d__10
                        );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// GameManagers.CharacterEditorGameManager$$GenerateTitanPreviewsCoroutine
// il2cpp: System_Collections_IEnumerator_o* GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine (GameManagers_CharacterEditorGameManager_o* __this, const MethodInfo* method);
// 0x181e328b0

System_Collections_IEnumerator_o *
GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine
          (GameManagers_CharacterEditorGameManager_o *__this,MethodInfo *method)

{
  GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11_o *__this_00;
  
  if (Il2CppMethodInitialized_184344dee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_GameManagers_CharacterEditorGameManager_GenerateTitanPreviewsCoroutine_d__11);
    Il2CppMethodInitialized_184344dee = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_GameManagers_CharacterEditorGameManager_GenerateTitanPreviewsCoroutine_d__11
                        );
  GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11___ctor
            ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// GameManagers.CharacterEditorGameManager$$Screenshot
// il2cpp: void GameManagers_CharacterEditorGameManager__Screenshot (GameManagers_CharacterEditorGameManager_o* __this, float x, float y, float w, float h, System_String_o* file, const MethodInfo* method);
// 0x181e32f60
// eh: try 0x181e33007..0x181e33172 -> pad 0x1833318f0 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 45 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e33069: lea rcx, [rip + 0x224b4f0]  ; TypeInfo_UnityEngine_Texture2D
// asm:   0x181e33070: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181e33075: mov rcx, rax
// asm:   0x181e33078: call 0x1804170d0  ; il2cpp_runtime_helper_1804170d0()
// asm:   0x181e3307d: mov rdi, rax
// asm:   0x181e33080: xor r9d, r9d
// asm:   0x181e33083: mov edx, 1
// asm:   0x181e33088: mov r8d, edx
// asm:   0x181e3308b: mov rcx, rax
// asm:   0x181e3308e: call 0x182efbf30  ; UnityEngine_Texture2D___ctor()
// asm:   0x181e33093: test rdi, rdi
// asm:   0x181e33096: je 0x181e33165
// asm:   0x181e3309c: movdqa xmm0, xmmword ptr [rip + 0x152682c]
// asm:   0x181e330a4: movaps xmmword ptr [rsp + 0x40], xmm0
// asm:   0x181e330a9: xor ebx, ebx
// asm:   0x181e330ab: mov qword ptr [rsp + 0x20], rbx
// asm:   0x181e330b0: lea r9, [rsp + 0x40]
// asm:   0x181e330b5: xor r8d, r8d
// asm:   0x181e330b8: xor edx, edx
// asm:   0x181e330ba: mov rcx, rdi
// asm:   0x181e330bd: call 0x182efb610  ; UnityEngine_Texture2D__SetPixel()
// asm:   0x181e33165: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x1833318f0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833318f5: push rbx
// asm:   0x1833318f6: push rbp
// asm:   0x1833318f7: sub rsp, 0x38
// asm:   0x1833318fb: mov rbp, rdx
// asm:   0x1833318fe: mov rbx, qword ptr [rbp + 0x38]
// asm:   0x183331902: mov rdx, qword ptr [rbx]
// asm:   0x183331905: mov rdx, qword ptr [rdx]
// asm:   0x183331908: mov rcx, qword ptr [rip + 0x10234c1]
// asm:   0x18333190f: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183331914: test al, al
// asm:   0x183331916: je 0x183331924
// asm:   0x183331918: movabs rax, 0
// asm:   0x183331922: jmp 0x18333193c
// asm:   0x183331924: mov rax, qword ptr [rbx]
// asm:   0x183331927: mov qword ptr [rbp + 0x30], rax
// asm:   0x18333192b: lea rdx, [rip + 0xcaa656]
// asm:   0x183331932: lea rcx, [rbp + 0x30]
// asm:   0x183331936: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18333193c: add rsp, 0x38
// asm:   0x183331940: pop rbp
// asm:   0x183331941: pop rbx
// asm:   0x183331942: ret 

void GameManagers_CharacterEditorGameManager__Screenshot
               (GameManagers_CharacterEditorGameManager_o *__this,float x,float y,float w,float h,
               System_String_o *file,MethodInfo *method)

{
  UnityEngine_Texture2D_o *__this_00;
  System_String_o *path;
  System_Byte_array *bytes;
  UnityEngine_Rect_Fields local_58 [5];
  
  if (Il2CppMethodInitialized_184344def == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&".png");
    Il2CppMethodInitialized_184344def = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
  UnityEngine_Texture2D___ctor_2efc630(__this_00,(int)w,(int)h,3,false,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Texture2D_o *)0x0) {
    local_58[0].m_XMin = 1.0;
    local_58[0].m_YMin = 1.0;
    local_58[0].m_Width = 1.0;
    local_58[0].m_Height = 1.0;
    UnityEngine_Texture2D__SetPixel(__this_00,0,0,(UnityEngine_Color_o *)local_58,(MethodInfo *)0x0);
    local_58[0].m_YMin = y;
    local_58[0].m_XMin = x;
    local_58[0].m_Height = h;
    local_58[0].m_Width = w;
    UnityEngine_Texture2D__ReadPixels_2efaf30(__this_00,(UnityEngine_Rect_o *)local_58,0,0,(MethodInfo *)0x0);
    UnityEngine_Texture2D__Apply_2ef9fd0(__this_00,(MethodInfo *)0x0);
    TextureScaler__ScaleBlocking(__this_00,0x80,0x80,(MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_CharacterEditorGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager);
    }
    path = System_String__Concat_1969590
                     (TypeInfo_GameManagers_CharacterEditorGameManager->static_fields->PreviewFolderPath,
                      "/",file,".png",(MethodInfo *)0x0);
    bytes = UnityEngine_ImageConversion__EncodeToPNG(__this_00,(MethodInfo *)0x0);
    System_IO_File__WriteAllBytes(path,bytes,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// GameManagers.CharacterEditorGameManager$$.ctor
// il2cpp: void GameManagers_CharacterEditorGameManager___ctor (GameManagers_CharacterEditorGameManager_o* __this, const MethodInfo* method);
// 0x18190eda0

void
GameManagers_CharacterEditorGameManager___ctor(GameManagers_CharacterEditorGameManager_o* __this, MethodInfo* method)

{
  Photon_Pun_MonoBehaviourPunCallbacks___ctor((GetParentPosition_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.CharacterEditorGameManager$$.cctor
// il2cpp: void GameManagers_CharacterEditorGameManager___cctor (const MethodInfo* method);
// 0x181e33180

void GameManagers_CharacterEditorGameManager___cctor(MethodInfo *method)

{
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184344df0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&"/CharacterPreviews");
    Il2CppMethodInitialized_184344df0 = '\x01';
  }
  TypeInfo_GameManagers_CharacterEditorGameManager->static_fields->HumanMode = true;
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  value = System_String__Concat_1969e50
                    (TypeInfo_Utility_FolderPaths->static_fields->Documents,"/CharacterPreviews",
                     (MethodInfo *)0x0);
  TypeInfo_GameManagers_CharacterEditorGameManager->static_fields->PreviewFolderPath = value;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_CharacterEditorGameManager->static_fields->PreviewFolderPath,value);
  return;
}


