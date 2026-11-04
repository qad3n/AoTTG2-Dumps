// Type: GameManagers.InGameManager
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/GameManagers/InGameManager.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/InGameManager.cs
// --------------------------------

// GameManagers.InGameManager.<>c$$.cctor
// il2cpp: void GameManagers_InGameManager___c___cctor (const MethodInfo* method);
// 0x181e7bc10

void GameManagers_InGameManager___c___cctor(MethodInfo *method)

{
  GameManagers_InGameManager___c_o *__this;
  
  if (Il2CppMethodInitialized_184344ec4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager_c);
    Il2CppMethodInitialized_184344ec4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameManagers_InGameManager_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_GameManagers_InGameManager_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_InGameManager_c->static_fields->__9,__this);
  return;
}


// GameManagers.InGameManager.<>c$$.ctor
// il2cpp: void GameManagers_InGameManager___c___ctor (GameManagers_InGameManager___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
GameManagers_InGameManager___c___ctor(GameManagers_InGameManager___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.InGameManager.<>c$$<GetAllNonAICharacters>b__40_0
// il2cpp: bool GameManagers_InGameManager___c___GetAllNonAICharacters_b__40_0 (GameManagers_InGameManager___c_o* __this, Characters_BaseCharacter_o* x, const MethodInfo* method);
// 0x181e7b740

bool GameManagers_InGameManager___c___GetAllNonAICharacters_b__40_0
               (GameManagers_InGameManager___c_o *__this,Characters_BaseCharacter_o *x,MethodInfo *method)

{
  if (x != (Characters_BaseCharacter_o *)0x0) {
    return (x->fields).AI == false;
  }
  ThrowNullReferenceException();
}


// GameManagers.InGameManager.<>c$$<GetTitanSpawnPositions>b__81_0
// il2cpp: System_ValueTuple_Vector3__Quaternion__o GameManagers_InGameManager___c___GetTitanSpawnPositions_b__81_0 (GameManagers_InGameManager___c_o* __this, UnityEngine_Transform_o* xform, const MethodInfo* method);
// 0x181e7b7e0

System_ValueTuple_Vector3__Quaternion__o *
GameManagers_InGameManager___c___GetTitanSpawnPositions_b__81_0
          (System_ValueTuple_Vector3__Quaternion__o *__return_storage_ptr__,
          GameManagers_InGameManager___c_o *__this,UnityEngine_Transform_o *xform,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  UnityEngine_Vector3_o *pUVar3;
  UnityEngine_Quaternion_o *pUVar4;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Quaternion_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184344ec5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_ValueTuple_Vector3_Quaternion_ctor);
    Il2CppMethodInitialized_184344ec5 = '\x01';
  }
  if (xform != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)&local_38,xform,(MethodInfo *)0x0);
    uVar1._0_4_ = (pUVar3->fields).x;
    uVar1._4_4_ = (pUVar3->fields).y;
    fVar2 = (pUVar3->fields).z;
    pUVar4 = UnityEngine_Transform__get_rotation((UnityEngine_Quaternion_o *)local_28,xform,(MethodInfo *)0x0)
    ;
    local_28[0].x = (pUVar4->fields).x;
    local_28[0].y = (pUVar4->fields).y;
    local_28[0].z = (pUVar4->fields).z;
    local_28[0].w = (pUVar4->fields).w;
    (__return_storage_ptr__->fields).Item1.fields.x = 0.0;
    (__return_storage_ptr__->fields).Item1.fields.y = 0.0;
    *(undefined8 *)&(__return_storage_ptr__->fields).Item1.fields.z = 0;
    (__return_storage_ptr__->fields).Item2.fields.x = 0.0;
    (__return_storage_ptr__->fields).Item2.fields.y = 0.0;
    (__return_storage_ptr__->fields).Item2.fields.z = 0.0;
    (__return_storage_ptr__->fields).Item2.fields.w = 0.0;
    local_38._0_8_ = uVar1;
    local_38.z = fVar2;
    System_ValueTuple_Vector3__Quaternion____ctor
              (__return_storage_ptr__,(UnityEngine_Vector3_o *)&local_38,(UnityEngine_Quaternion_o *)local_28,
               (MethodInfo_1028B10 *)MethodInfo_System_ValueTuple_Vector3_Quaternion_ctor);
    return __return_storage_ptr__;
  }
  ThrowNullReferenceException();
}


// GameManagers.InGameManager.<>c__DisplayClass76_0$$.ctor
// il2cpp: void GameManagers_InGameManager___c__DisplayClass76_0___ctor (GameManagers_InGameManager___c__DisplayClass76_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
GameManagers_InGameManager___c__DisplayClass76_0___ctor(GameManagers_InGameManager___c__DisplayClass76_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.InGameManager.<>c__DisplayClass76_0$$<SpawnAITitans>b__0
// il2cpp: Characters_BasicTitan_o* GameManagers_InGameManager___c__DisplayClass76_0___SpawnAITitans_b__0 (GameManagers_InGameManager___c__DisplayClass76_0_o* __this, System_ValueTuple_Vector3__Quaternion__o p, const MethodInfo* method);
// 0x181e7bb50

Characters_BasicTitan_o *
GameManagers_InGameManager___c__DisplayClass76_0___SpawnAITitans_b__0
          (GameManagers_InGameManager___c__DisplayClass76_0_o *__this,
          System_ValueTuple_Vector3__Quaternion__o *p,MethodInfo *method)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  float fVar4;
  GameManagers_InGameManager_o *__this_00;
  System_String_o *type;
  UnityEngine_Vector3_o *pUVar5;
  Characters_BasicTitan_o *pCVar6;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_o local_28 [2];
  
  __this_00 = (__this->fields).__4__this;
  type = (__this->fields).type;
  fVar4 = (p->fields).Item1.fields.z;
  uVar2._0_4_ = (p->fields).Item1.fields.x;
  uVar2._4_4_ = (p->fields).Item1.fields.y;
  pUVar5 = UnityEngine_Quaternion__Internal_ToEulerRad(local_28,&(p->fields).Item2,(MethodInfo *)0x0);
  uVar1 = (pUVar5->fields).x;
  uVar3 = (pUVar5->fields).y;
  local_38.x = (float)uVar1 * 57.29578;
  local_38.y = (float)uVar3 * 57.29578;
  local_38.z = (pUVar5->fields).z * 57.29578;
  pUVar5 = UnityEngine_Quaternion__Internal_MakePositive
                     (local_28,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
  if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
    local_38._0_8_ = uVar2;
    local_38.z = fVar4;
    pCVar6 = GameManagers_InGameManager__SpawnAITitanAt
                       (__this_00,type,(UnityEngine_Vector3_o *)&local_38,(pUVar5->fields).y,(MethodInfo *)0x0
                       );
    return pCVar6;
  }
  ThrowNullReferenceException();
}


// GameManagers.InGameManager.<FinishRestartGame>d__49$$.ctor
// il2cpp: void GameManagers_InGameManager__FinishRestartGame_d__49___ctor (GameManagers_InGameManager__FinishRestartGame_d__49_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
GameManagers_InGameManager__FinishRestartGame_d__49___ctor(GameManagers_InGameManager__FinishRestartGame_d__49_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.InGameManager.<FinishRestartGame>d__49$$System.IDisposable.Dispose
// il2cpp: void GameManagers_InGameManager__FinishRestartGame_d__49__System_IDisposable_Dispose (GameManagers_InGameManager__FinishRestartGame_d__49_o* __this, const MethodInfo* method);
// 0x180547020

void
GameManagers_InGameManager__FinishRestartGame_d__49__System_IDisposable_Dispose(GameManagers_InGameManager__FinishRestartGame_d__49_o* __this, MethodInfo* method)

{
  return;
}


// GameManagers.InGameManager.<FinishRestartGame>d__49$$MoveNext
// il2cpp: bool GameManagers_InGameManager__FinishRestartGame_d__49__MoveNext (GameManagers_InGameManager__FinishRestartGame_d__49_o* __this, const MethodInfo* method);
// 0x181e77c30

bool GameManagers_InGameManager__FinishRestartGame_d__49__MoveNext
               (GameManagers_InGameManager__FinishRestartGame_d__49_o *__this,MethodInfo *method)

{
  int iVar1;
  Photon_Pun_PhotonView_o *__this_00;
  Settings_UISettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  System_Object_array *parameters;
  Il2CppObject *__this_01;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *__this_02;
  
  if (Il2CppMethodInitialized_184344ec6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    il2cpp_codegen_initialize_runtime_metadata(&"RestartGameRPC");
    Il2CppMethodInitialized_184344ec6 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 0) {
    if ((iVar1 == 1) || (iVar1 == 2)) {
      (__this->fields).__1__state = -1;
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      Photon_Pun_PhotonNetwork__DestroyAll((MethodInfo *)0x0);
      __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
      parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
      if (__this_00 == (Photon_Pun_PhotonView_o *)0x0) goto label_181e77e03;
      Photon_Pun_PhotonView__RPC(__this_00,"RestartGameRPC",0,parameters,(MethodInfo *)0x0);
    }
    return false;
  }
  (__this->fields).__1__state = -1;
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar2 != (Settings_UISettings_o *)0x0) &&
     (pSVar3 = (pSVar2->fields).FadeLoadscreen, pSVar3 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar3->fields)._value == false) {
      __this_01 = (Il2CppObject *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_01,(MethodInfo *)0x0);
      (__this->fields).__2__current = __this_01;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_01);
      (__this->fields).__1__state = 2;
      return true;
    }
    __this_02 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_02,0.2,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_02;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_02);
    (__this->fields).__1__state = 1;
    return true;
  }
label_181e77e03:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager.<FinishRestartGame>d__49$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__FinishRestartGame_d__49__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_InGameManager__FinishRestartGame_d__49_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
GameManagers_InGameManager__FinishRestartGame_d__49__System_Collections_Generic_IEnumerator_System_Object__get_Current(GameManagers_InGameManager__FinishRestartGame_d__49_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<FinishRestartGame>d__49$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_InGameManager__FinishRestartGame_d__49__System_Collections_IEnumerator_Reset (GameManagers_InGameManager__FinishRestartGame_d__49_o* __this, const MethodInfo* method);
// 0x181e77e10

void GameManagers_InGameManager__FinishRestartGame_d__49__System_Collections_IEnumerator_Reset
               (GameManagers_InGameManager__FinishRestartGame_d__49_o *__this,MethodInfo *method)

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
                  MethodInfo_GameManagers_InGameManager_FinishRestartGame_d__49_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// GameManagers.InGameManager.<FinishRestartGame>d__49$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__FinishRestartGame_d__49__System_Collections_IEnumerator_get_Current (GameManagers_InGameManager__FinishRestartGame_d__49_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
GameManagers_InGameManager__FinishRestartGame_d__49__System_Collections_IEnumerator_get_Current(GameManagers_InGameManager__FinishRestartGame_d__49_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<GetAllCharactersEnumerable>d__39$$.ctor
// il2cpp: void GameManagers_InGameManager__GetAllCharactersEnumerable_d__39___ctor (GameManagers_InGameManager__GetAllCharactersEnumerable_d__39_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x1808e2870

void
GameManagers_InGameManager__GetAllCharactersEnumerable_d__39___ctor(GameManagers_InGameManager__GetAllCharactersEnumerable_d__39_o* __this, int32_t __1__state, MethodInfo* method)

{
  int32_t iVar1;
  
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// GameManagers.InGameManager.<GetAllCharactersEnumerable>d__39$$System.IDisposable.Dispose
// il2cpp: void GameManagers_InGameManager__GetAllCharactersEnumerable_d__39__System_IDisposable_Dispose (GameManagers_InGameManager__GetAllCharactersEnumerable_d__39_o* __this, const MethodInfo* method);
// 0x181e785c0
// eh: try 0x181e787a4..0x181e787d0 -> pad 0x180355f00 cleanup
// asm: 66 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e78642: lea rcx, [rsp + 0x48]
// asm:   0x181e78647: call 0x181e620f0  ; il2cpp_runtime_helper_181e620f0()
// asm:   0x181e7864c: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x181e78651: test rcx, rcx
// asm:   0x181e78654: jne 0x181e7878a
// asm:   0x181e7865a: mov qword ptr [rsp + 0x40], 0
// asm:   0x181e78663: lea rax, [rsp + 0x60]
// asm:   0x181e78668: mov qword ptr [rsp + 0x48], rax
// asm:   0x181e7866d: mov rbx, qword ptr [rsp + 0x60]
// asm:   0x181e78672: cmp byte ptr [rip + 0x24cc850], 0
// asm:   0x181e78679: jne 0x181e7868e
// asm:   0x181e7867b: lea rcx, [rip + 0x21fe8ce]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose
// asm:   0x181e78682: call 0x180416e80  ; il2cpp_codegen_initialize_runtime_metadata()
// asm:   0x181e78687: mov byte ptr [rip + 0x24cc83b], 1
// asm:   0x181e7868e: mov dword ptr [rbx + 0x10], 0xffffffff
// asm:   0x181e78695: lea rcx, [rbx + 0x48]
// asm:   0x181e78699: mov rdx, qword ptr [rip + 0x21fe8b0]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose
// asm:   0x181e786a0: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e786a5: jmp 0x181e78784
// asm:   0x181e786aa: lea rcx, [rsp + 0x48]
// asm:   0x181e786af: call 0x181e62150  ; il2cpp_runtime_helper_181e62150()
// asm:   0x181e786b4: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x181e786b9: test rcx, rcx
// asm:   0x181e786bc: jne 0x181e78790
// asm:   0x181e786c2: mov qword ptr [rsp + 0x40], 0
// asm:   0x181e786cb: lea rax, [rsp + 0x60]
// asm:   0x181e786d0: mov qword ptr [rsp + 0x48], rax
// asm:   0x181e786d5: mov rbx, qword ptr [rsp + 0x60]
// asm:   0x181e786da: cmp byte ptr [rip + 0x24cc7e9], 0
// asm:   0x181e786e1: jne 0x181e786f6
// asm:   0x181e786e3: lea rcx, [rip + 0x21fe326]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose
// asm:   0x181e786ea: call 0x180416e80  ; il2cpp_codegen_initialize_runtime_metadata()
// asm:   0x181e786ef: mov byte ptr [rip + 0x24cc7d4], 1
// asm:   0x181e786f6: mov dword ptr [rbx + 0x10], 0xffffffff
// asm:   0x181e786fd: lea rcx, [rbx + 0x60]
// asm:   0x181e78701: mov rdx, qword ptr [rip + 0x21fe308]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose
// asm:   0x181e78708: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e7870d: jmp 0x181e78784
// asm:   0x181e7870f: lea rcx, [rsp + 0x48]
// asm:   0x181e78714: call 0x181e62290  ; il2cpp_runtime_helper_181e62290()
// asm:   0x181e78719: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x181e7871e: test rcx, rcx
// asm:   0x181e78721: jne 0x181e78796
// asm:   0x181e78723: mov qword ptr [rsp + 0x40], 0
// asm:   0x181e7872c: lea rax, [rsp + 0x60]
// asm:   0x181e78731: mov qword ptr [rsp + 0x48], rax
// asm:   0x181e78736: mov rbx, qword ptr [rsp + 0x60]
// asm:   0x181e7873b: cmp byte ptr [rip + 0x24cc789], 0
// asm:   0x181e78742: jne 0x181e78757
// asm:   0x181e78744: lea rcx, [rip + 0x220953d]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_Dispose
// asm:   0x181e7874b: call 0x180416e80  ; il2cpp_codegen_initialize_runtime_metadata()
// asm:   0x181e78750: mov byte ptr [rip + 0x24cc774], 1
// asm:   0x181e78757: mov dword ptr [rbx + 0x10], 0xffffffff
// asm:   0x181e7875e: lea rcx, [rbx + 0x78]
// asm:   0x181e78762: mov rdx, qword ptr [rip + 0x220951f]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_Dispose
// asm:   0x181e78769: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e7876e: jmp 0x181e78784
// asm:   0x181e78770: lea rcx, [rsp + 0x48]
// asm:   0x181e78775: call 0x181e621a0  ; il2cpp_runtime_helper_181e621a0()
// asm:   0x181e7877a: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x181e7877f: test rcx, rcx
// asm:   0x181e78782: jne 0x181e7879c
// asm:   0x181e7878a: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e78790: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e78796: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e7879c: call 0x1804171b0  ; il2cpp_codegen_rethrow()

void GameManagers_InGameManager__GetAllCharactersEnumerable_d__39__System_IDisposable_Dispose
               (GameManagers_InGameManager__GetAllCharactersEnumerable_d__39_o *__this,MethodInfo *method)

{
  switch((__this->fields).__1__state) {
  case -6:
  case 4:
    if (Il2CppMethodInitialized_184344ecb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_Dispose);
      Il2CppMethodInitialized_184344ecb = '\x01';
    }
    (__this->fields).__1__state = -1;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap4,
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_Dispose);
    break;
  case -5:
  case 3:
    if (Il2CppMethodInitialized_184344eca == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose);
      Il2CppMethodInitialized_184344eca = '\x01';
    }
    (__this->fields).__1__state = -1;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap3,
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose);
    break;
  case -4:
  case 2:
    if (Il2CppMethodInitialized_184344ec9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose);
      Il2CppMethodInitialized_184344ec9 = '\x01';
    }
    (__this->fields).__1__state = -1;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap2,
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose);
    break;
  case -3:
  case 1:
    if (Il2CppMethodInitialized_184344ec8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
      Il2CppMethodInitialized_184344ec8 = '\x01';
    }
    (__this->fields).__1__state = -1;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap1,
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
  }
  return;
}


// GameManagers.InGameManager.<GetAllCharactersEnumerable>d__39$$MoveNext
// il2cpp: bool GameManagers_InGameManager__GetAllCharactersEnumerable_d__39__MoveNext (GameManagers_InGameManager__GetAllCharactersEnumerable_d__39_o* __this, const MethodInfo* method);
// 0x181e77e50
// eh: try 0x181e77f27..0x181e784c5 -> pad 0x183315930 (+5 call sites) catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e7811e: nop 
// asm:   0x181e7824e: nop 
// asm:   0x181e7846d: mov rbx, qword ptr [rsp + 0x28]
// asm:   0x181e78472: test rbx, rbx
// asm:   0x181e78475: jne 0x181e784c5
// asm:   0x181e78477: movzx eax, byte ptr [rsp + 0x70]
// asm:   0x181e784c5: lea rcx, [rsp + 0x30]
// asm:   0x181e784ca: call 0x181e62140  ; il2cpp_runtime_helper_181e62140()
// asm:   0x181e784cf: mov rcx, rbx
// asm:   0x181e784d2: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

bool GameManagers_InGameManager__GetAllCharactersEnumerable_d__39__MoveNext
               (GameManagers_InGameManager__GetAllCharactersEnumerable_d__39_o *__this,MethodInfo *method)

{
  int iVar1;
  GameManagers_InGameManager_o *pGVar2;
  Characters_Human_o *x;
  Characters_BasicTitan_o *x_00;
  Characters_BaseShifter_o *x_01;
  System_Collections_Generic_HashSet_Vector2Int__o *pSVar3;
  Characters_Horse_o *x_02;
  bool bVar4;
  System_Collections_Generic_HashSet_Enumerator_T__o local_20;
  
  if (Il2CppMethodInitialized_184344ec7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BasicTitan_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Horse_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseShifter_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344ec7 = '\x01';
  }
  pGVar2 = (__this->fields).__4__this;
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (pGVar2 == (GameManagers_InGameManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar3 = (System_Collections_Generic_HashSet_Vector2Int__o *)(pGVar2->fields).Humans;
    if (pSVar3 == (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
              (&local_20,pSVar3,
               (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
    (__this->fields).__7__wrap1.fields._set = local_20.fields._set;
    (__this->fields).__7__wrap1.fields._index = local_20.fields._index;
    (__this->fields).__7__wrap1.fields._version = local_20.fields._version;
    (__this->fields).__7__wrap1.fields._current = (Characters_Human_o *)local_20.fields._current;
    Il2CppCodeGenWriteBarrier((void **)&(__this->fields).__7__wrap1,(void *)0x0);
    (__this->fields).__1__state = -3;
label_181e77ff0:
    while (bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                             ((System_Collections_Generic_HashSet_Enumerator_T__o *)
                              &(__this->fields).__7__wrap1,
                              (MethodInfo_15381F0 *)
                              MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext), bVar4)
    {
      x = (__this->fields).__7__wrap1.fields._current;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        if (x == (Characters_Human_o *)0x0) {
          ThrowNullReferenceException();
        }
        if ((x->fields).Dead == false) {
          (__this->fields).__2__current = (Characters_BaseCharacter_o *)x;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,x);
          (__this->fields).__1__state = 1;
          return true;
        }
      }
    }
    if (Il2CppMethodInitialized_184344ec8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
      Il2CppMethodInitialized_184344ec8 = '\x01';
    }
    (__this->fields).__1__state = -1;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap1,
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
    (__this->fields).__7__wrap1.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
    (__this->fields).__7__wrap1.fields._index = 0;
    (__this->fields).__7__wrap1.fields._version = 0;
    (__this->fields).__7__wrap1.fields._current = (Characters_Human_o *)0x0;
    if (pGVar2 == (GameManagers_InGameManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar3 = (System_Collections_Generic_HashSet_Vector2Int__o *)(pGVar2->fields).Titans;
    if (pSVar3 == (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
              (&local_20,pSVar3,
               (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_BasicTitan_GetEnumerator);
    (__this->fields).__7__wrap2.fields._set = local_20.fields._set;
    (__this->fields).__7__wrap2.fields._index = local_20.fields._index;
    (__this->fields).__7__wrap2.fields._version = local_20.fields._version;
    (__this->fields).__7__wrap2.fields._current = (Characters_BasicTitan_o *)local_20.fields._current;
    Il2CppCodeGenWriteBarrier((void **)&(__this->fields).__7__wrap2,(void *)0x0);
    (__this->fields).__1__state = -4;
label_181e78120:
    while (bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                             ((System_Collections_Generic_HashSet_Enumerator_T__o *)
                              &(__this->fields).__7__wrap2,
                              (MethodInfo_15381F0 *)
                              MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_MoveNext),
          bVar4) {
      x_00 = (__this->fields).__7__wrap2.fields._current;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        if (x_00 == (Characters_BasicTitan_o *)0x0) {
          ThrowNullReferenceException();
        }
        if ((x_00->fields).Dead == false) {
          (__this->fields).__2__current = (Characters_BaseCharacter_o *)x_00;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,x_00);
          (__this->fields).__1__state = 2;
          return true;
        }
      }
    }
    if (Il2CppMethodInitialized_184344ec9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose);
      Il2CppMethodInitialized_184344ec9 = '\x01';
    }
    (__this->fields).__1__state = -1;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap2,
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose);
    (__this->fields).__7__wrap2.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
    (__this->fields).__7__wrap2.fields._index = 0;
    (__this->fields).__7__wrap2.fields._version = 0;
    (__this->fields).__7__wrap2.fields._current = (Characters_BasicTitan_o *)0x0;
    if (pGVar2 == (GameManagers_InGameManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar3 = (System_Collections_Generic_HashSet_Vector2Int__o *)(pGVar2->fields).Shifters;
    if (pSVar3 == (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
              (&local_20,pSVar3,
               (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_BaseShifter_GetEnumerator);
    (__this->fields).__7__wrap3.fields._set = local_20.fields._set;
    (__this->fields).__7__wrap3.fields._index = local_20.fields._index;
    (__this->fields).__7__wrap3.fields._version = local_20.fields._version;
    (__this->fields).__7__wrap3.fields._current = (Characters_BaseShifter_o *)local_20.fields._current;
    Il2CppCodeGenWriteBarrier((void **)&(__this->fields).__7__wrap3,(void *)0x0);
    (__this->fields).__1__state = -5;
  }
  else {
    if (iVar1 == 1) {
      (__this->fields).__1__state = -3;
      goto label_181e77ff0;
    }
    if (iVar1 == 2) {
      (__this->fields).__1__state = -4;
      goto label_181e78120;
    }
    if (iVar1 != 3) {
      if (iVar1 != 4) {
        return false;
      }
      (__this->fields).__1__state = -6;
      goto label_181e78390;
    }
    (__this->fields).__1__state = -5;
  }
  while (bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                           ((System_Collections_Generic_HashSet_Enumerator_T__o *)&(__this->fields).__7__wrap3
                            ,(MethodInfo_15381F0 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_MoveNext),
        bVar4) {
    x_01 = (__this->fields).__7__wrap3.fields._current;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      if (x_01 == (Characters_BaseShifter_o *)0x0) {
        ThrowNullReferenceException();
      }
      if ((x_01->fields).Dead == false) {
        (__this->fields).__2__current = (Characters_BaseCharacter_o *)x_01;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,x_01);
        (__this->fields).__1__state = 3;
        return true;
      }
    }
  }
  if (Il2CppMethodInitialized_184344eca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose);
    Il2CppMethodInitialized_184344eca = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap3,
             MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose);
  (__this->fields).__7__wrap3.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  (__this->fields).__7__wrap3.fields._index = 0;
  (__this->fields).__7__wrap3.fields._version = 0;
  (__this->fields).__7__wrap3.fields._current = (Characters_BaseShifter_o *)0x0;
  if (pGVar2 == (GameManagers_InGameManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar3 = (System_Collections_Generic_HashSet_Vector2Int__o *)(pGVar2->fields).Horses;
  if (pSVar3 == (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
            (&local_20,pSVar3,
             (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_Horse_GetEnumerator);
  (__this->fields).__7__wrap4.fields._set = local_20.fields._set;
  (__this->fields).__7__wrap4.fields._index = local_20.fields._index;
  (__this->fields).__7__wrap4.fields._version = local_20.fields._version;
  (__this->fields).__7__wrap4.fields._current = (Characters_Horse_o *)local_20.fields._current;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields).__7__wrap4,(void *)0x0);
  (__this->fields).__1__state = -6;
label_181e78390:
  while( true ) {
    do {
      bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        ((System_Collections_Generic_HashSet_Enumerator_T__o *)&(__this->fields).__7__wrap4,
                         (MethodInfo_15381F0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_MoveNext);
      if (!bVar4) {
        if (Il2CppMethodInitialized_184344ecb == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_Dispose);
          Il2CppMethodInitialized_184344ecb = '\x01';
        }
        (__this->fields).__1__state = -1;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap4,
                   MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_Dispose);
        (__this->fields).__7__wrap4.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
        (__this->fields).__7__wrap4.fields._index = 0;
        (__this->fields).__7__wrap4.fields._version = 0;
        (__this->fields).__7__wrap4.fields._current = (Characters_Horse_o *)0x0;
        return false;
      }
      x_02 = (__this->fields).__7__wrap4.fields._current;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    } while (!bVar4);
    if (x_02 == (Characters_Horse_o *)0x0) break;
    if ((x_02->fields).Dead == false) {
      (__this->fields).__2__current = (Characters_BaseCharacter_o *)x_02;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,x_02);
      (__this->fields).__1__state = 4;
      return true;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.InGameManager.<GetAllCharactersEnumerable>d__39$$<>m__Finally1
// il2cpp: void GameManagers_InGameManager__GetAllCharactersEnumerable_d__39____m__Finally1 (GameManagers_InGameManager__GetAllCharactersEnumerable_d__39_o* __this, const MethodInfo* method);
// 0x181e787d0

void GameManagers_InGameManager__GetAllCharactersEnumerable_d__39____m__Finally1
               (GameManagers_InGameManager__GetAllCharactersEnumerable_d__39_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344ec8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
    Il2CppMethodInitialized_184344ec8 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap1,
             MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
  return;
}


// GameManagers.InGameManager.<GetAllCharactersEnumerable>d__39$$<>m__Finally2
// il2cpp: void GameManagers_InGameManager__GetAllCharactersEnumerable_d__39____m__Finally2 (GameManagers_InGameManager__GetAllCharactersEnumerable_d__39_o* __this, const MethodInfo* method);
// 0x181e78820

void GameManagers_InGameManager__GetAllCharactersEnumerable_d__39____m__Finally2
               (GameManagers_InGameManager__GetAllCharactersEnumerable_d__39_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344ec9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose);
    Il2CppMethodInitialized_184344ec9 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap2,
             MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose);
  return;
}


// GameManagers.InGameManager.<GetAllCharactersEnumerable>d__39$$<>m__Finally3
// il2cpp: void GameManagers_InGameManager__GetAllCharactersEnumerable_d__39____m__Finally3 (GameManagers_InGameManager__GetAllCharactersEnumerable_d__39_o* __this, const MethodInfo* method);
// 0x181e78870

void GameManagers_InGameManager__GetAllCharactersEnumerable_d__39____m__Finally3
               (GameManagers_InGameManager__GetAllCharactersEnumerable_d__39_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344eca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose);
    Il2CppMethodInitialized_184344eca = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap3,
             MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose);
  return;
}


// GameManagers.InGameManager.<GetAllCharactersEnumerable>d__39$$<>m__Finally4
// il2cpp: void GameManagers_InGameManager__GetAllCharactersEnumerable_d__39____m__Finally4 (GameManagers_InGameManager__GetAllCharactersEnumerable_d__39_o* __this, const MethodInfo* method);
// 0x181e788c0

void GameManagers_InGameManager__GetAllCharactersEnumerable_d__39____m__Finally4
               (GameManagers_InGameManager__GetAllCharactersEnumerable_d__39_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344ecb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_Dispose);
    Il2CppMethodInitialized_184344ecb = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap4,
             MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_Dispose);
  return;
}


// GameManagers.InGameManager.<GetAllCharactersEnumerable>d__39$$System.Collections.Generic.IEnumerator<Characters.BaseCharacter>.get_Current
// il2cpp: Characters_BaseCharacter_o* GameManagers_InGameManager__GetAllCharactersEnumerable_d__39__System_Collections_Generic_IEnumerator_Characters_BaseCharacter__get_Current (GameManagers_InGameManager__GetAllCharactersEnumerable_d__39_o* __this, const MethodInfo* method);
// 0x180573e90

Characters_BaseCharacter_o*
GameManagers_InGameManager__GetAllCharactersEnumerable_d__39__System_Collections_Generic_IEnumerator_Characters_BaseCharacter__get_Current(GameManagers_InGameManager__GetAllCharactersEnumerable_d__39_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<GetAllCharactersEnumerable>d__39$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_InGameManager__GetAllCharactersEnumerable_d__39__System_Collections_IEnumerator_Reset (GameManagers_InGameManager__GetAllCharactersEnumerable_d__39_o* __this, const MethodInfo* method);
// 0x181e78580

void GameManagers_InGameManager__GetAllCharactersEnumerable_d__39__System_Collections_IEnumerator_Reset
               (GameManagers_InGameManager__GetAllCharactersEnumerable_d__39_o *__this,MethodInfo *method)

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
                  MethodInfo_GameManagers_InGameManager_GetAllCharactersEnumerable_d__39_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// GameManagers.InGameManager.<GetAllCharactersEnumerable>d__39$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__GetAllCharactersEnumerable_d__39__System_Collections_IEnumerator_get_Current (GameManagers_InGameManager__GetAllCharactersEnumerable_d__39_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
GameManagers_InGameManager__GetAllCharactersEnumerable_d__39__System_Collections_IEnumerator_get_Current(GameManagers_InGameManager__GetAllCharactersEnumerable_d__39_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<GetAllCharactersEnumerable>d__39$$System.Collections.Generic.IEnumerable<Characters.BaseCharacter>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_BaseCharacter__o* GameManagers_InGameManager__GetAllCharactersEnumerable_d__39__System_Collections_Generic_IEnumerable_Characters_BaseCharacter__GetEnumerator (GameManagers_InGameManager__GetAllCharactersEnumerable_d__39_o* __this, const MethodInfo* method);
// 0x181e784e0

System_Collections_Generic_IEnumerator_BaseCharacter__o*
GameManagers_InGameManager__GetAllCharactersEnumerable_d__39__System_Collections_Generic_IEnumerable_Characters_BaseCharacter__GetEnumerator(GameManagers_InGameManager__GetAllCharactersEnumerable_d__39_o* __this, MethodInfo* method)

{
  int iVar1;
  GameManagers_InGameManager_o *value;
  int32_t iVar2;
  GameManagers_InGameManager__GetAllCharactersEnumerable_d__39_o *__this_00;
  
  if (Il2CppMethodInitialized_184344ecc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_GameManagers_InGameManager_GetAllCharactersEnumerable_d__39);
    Il2CppMethodInitialized_184344ecc = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      return (System_Collections_IEnumerator_o *)__this;
    }
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameManagers_InGameManager_GetAllCharactersEnumerable_d__39);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  value = (__this->fields).__4__this;
  (__this_00->fields).__4__this = value;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,value);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// GameManagers.InGameManager.<GetAllCharactersEnumerable>d__39$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* GameManagers_InGameManager__GetAllCharactersEnumerable_d__39__System_Collections_IEnumerable_GetEnumerator (GameManagers_InGameManager__GetAllCharactersEnumerable_d__39_o* __this, const MethodInfo* method);
// 0x181e784e0

System_Collections_IEnumerator_o *
GameManagers_InGameManager__GetAllCharactersEnumerable_d__39__System_Collections_IEnumerable_GetEnumerator
          (GameManagers_InGameManager__GetAllCharactersEnumerable_d__39_o *__this,MethodInfo *method)

{
  int iVar1;
  GameManagers_InGameManager_o *value;
  int32_t iVar2;
  GameManagers_InGameManager__GetAllCharactersEnumerable_d__39_o *__this_00;
  
  if (Il2CppMethodInitialized_184344ecc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_GameManagers_InGameManager_GetAllCharactersEnumerable_d__39);
    Il2CppMethodInitialized_184344ecc = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      return (System_Collections_IEnumerator_o *)__this;
    }
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameManagers_InGameManager_GetAllCharactersEnumerable_d__39);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  value = (__this->fields).__4__this;
  (__this_00->fields).__4__this = value;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,value);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// GameManagers.InGameManager.<OnLoadLevelSkinRPC>d__114$$.ctor
// il2cpp: void GameManagers_InGameManager__OnLoadLevelSkinRPC_d__114___ctor (GameManagers_InGameManager__OnLoadLevelSkinRPC_d__114_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
GameManagers_InGameManager__OnLoadLevelSkinRPC_d__114___ctor(GameManagers_InGameManager__OnLoadLevelSkinRPC_d__114_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.InGameManager.<OnLoadLevelSkinRPC>d__114$$System.IDisposable.Dispose
// il2cpp: void GameManagers_InGameManager__OnLoadLevelSkinRPC_d__114__System_IDisposable_Dispose (GameManagers_InGameManager__OnLoadLevelSkinRPC_d__114_o* __this, const MethodInfo* method);
// 0x180547020

void
GameManagers_InGameManager__OnLoadLevelSkinRPC_d__114__System_IDisposable_Dispose(GameManagers_InGameManager__OnLoadLevelSkinRPC_d__114_o* __this, MethodInfo* method)

{
  return;
}


// GameManagers.InGameManager.<OnLoadLevelSkinRPC>d__114$$MoveNext
// il2cpp: bool GameManagers_InGameManager__OnLoadLevelSkinRPC_d__114__MoveNext (GameManagers_InGameManager__OnLoadLevelSkinRPC_d__114_o* __this, const MethodInfo* method);
// 0x1818be990

bool
GameManagers_InGameManager__OnLoadLevelSkinRPC_d__114__MoveNext(GameManagers_InGameManager__OnLoadLevelSkinRPC_d__114_o* __this, MethodInfo* method)

{
  if ((__this->fields).__1__state == 0) {
    (__this->fields).__1__state = -1;
  }
  return false;
}


// GameManagers.InGameManager.<OnLoadLevelSkinRPC>d__114$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__OnLoadLevelSkinRPC_d__114__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_InGameManager__OnLoadLevelSkinRPC_d__114_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
GameManagers_InGameManager__OnLoadLevelSkinRPC_d__114__System_Collections_Generic_IEnumerator_System_Object__get_Current(GameManagers_InGameManager__OnLoadLevelSkinRPC_d__114_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<OnLoadLevelSkinRPC>d__114$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_InGameManager__OnLoadLevelSkinRPC_d__114__System_Collections_IEnumerator_Reset (GameManagers_InGameManager__OnLoadLevelSkinRPC_d__114_o* __this, const MethodInfo* method);
// 0x181e7a780

void GameManagers_InGameManager__OnLoadLevelSkinRPC_d__114__System_Collections_IEnumerator_Reset
               (GameManagers_InGameManager__OnLoadLevelSkinRPC_d__114_o *__this,MethodInfo *method)

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
                  MethodInfo_GameManagers_InGameManager_OnLoadLevelSkinRPC_d__114_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// GameManagers.InGameManager.<OnLoadLevelSkinRPC>d__114$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__OnLoadLevelSkinRPC_d__114__System_Collections_IEnumerator_get_Current (GameManagers_InGameManager__OnLoadLevelSkinRPC_d__114_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
GameManagers_InGameManager__OnLoadLevelSkinRPC_d__114__System_Collections_IEnumerator_get_Current(GameManagers_InGameManager__OnLoadLevelSkinRPC_d__114_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<OnLoadSkyboxRPC>d__112$$.ctor
// il2cpp: void GameManagers_InGameManager__OnLoadSkyboxRPC_d__112___ctor (GameManagers_InGameManager__OnLoadSkyboxRPC_d__112_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
GameManagers_InGameManager__OnLoadSkyboxRPC_d__112___ctor(GameManagers_InGameManager__OnLoadSkyboxRPC_d__112_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.InGameManager.<OnLoadSkyboxRPC>d__112$$System.IDisposable.Dispose
// il2cpp: void GameManagers_InGameManager__OnLoadSkyboxRPC_d__112__System_IDisposable_Dispose (GameManagers_InGameManager__OnLoadSkyboxRPC_d__112_o* __this, const MethodInfo* method);
// 0x180547020

void
GameManagers_InGameManager__OnLoadSkyboxRPC_d__112__System_IDisposable_Dispose(GameManagers_InGameManager__OnLoadSkyboxRPC_d__112_o* __this, MethodInfo* method)

{
  return;
}


// GameManagers.InGameManager.<OnLoadSkyboxRPC>d__112$$MoveNext
// il2cpp: bool GameManagers_InGameManager__OnLoadSkyboxRPC_d__112__MoveNext (GameManagers_InGameManager__OnLoadSkyboxRPC_d__112_o* __this, const MethodInfo* method);
// 0x181e7a7c0
// asm: 14 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e7ab4a: mov rax, qword ptr [rcx]
// asm:   0x181e7ab4d: mov rdx, rbx
// asm:   0x181e7ab50: mov r8, qword ptr [rax + 0x1b0]
// asm:   0x181e7ab57: call qword ptr [rax + 0x1a8]  ; vtable slot 7
// asm:   0x181e7ab5d: xor r8d, r8d
// asm:   0x181e7ab60: mov rcx, rdi
// asm:   0x181e7ab63: mov rdx, rax
// asm:   0x181e7ab66: call 0x182f1cef0  ; UnityEngine_MonoBehaviour__StartCoroutine()
// asm:   0x181e7ab6b: lea rcx, [rsi + 0x18]
// asm:   0x181e7ab6f: mov qword ptr [rsi + 0x18], rax
// asm:   0x181e7ab73: mov rdx, rax
// asm:   0x181e7ab76: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x181e7ab7b: mov dword ptr [rsi + 0x10], 2
// asm:   0x181e7ab82: jmp 0x181e7a961

bool GameManagers_InGameManager__OnLoadSkyboxRPC_d__112__MoveNext
               (GameManagers_InGameManager__OnLoadSkyboxRPC_d__112_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  GameManagers_InGameManager_o *__this_00;
  Settings_CustomSkinSettings_o *pSVar3;
  Settings_BaseCustomSkinSettings_SkyboxCustomSkinSet__o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  CustomSkins_SkyboxCustomSkinLoader_o *pCVar6;
  System_String_o *pSVar7;
  Settings_InspectorSettingMetadata_o *pSVar8;
  System_Collections_Specialized_OrderedDictionary_o *pSVar9;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSVar10;
  System_Collections_Generic_HashSet_string__o *pSVar11;
  bool bVar12;
  System_Collections_IEnumerator_o *pSVar13;
  UnityEngine_Coroutine_o *pUVar14;
  Settings_BaseSetSetting_o *pSVar15;
  System_String_array *urls;
  
  if (Il2CppMethodInitialized_184344ecd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_SkyboxCustomSkinSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SkyboxCustomSkinSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184344ecd = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar2 != 0) {
    if ((iVar2 != 1) && (iVar2 != 2)) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
      pSVar13 = GameManagers_InGameManager__ReloadSkybox(__this_00,(MethodInfo *)0x0);
      UnityEngine_MonoBehaviour__StartCoroutine_Auto
                ((UnityEngine_MonoBehaviour_o *)__this_00,pSVar13,(MethodInfo *)0x0);
      return false;
    }
    goto label_181e7aba1;
  }
  (__this->fields).__1__state = -1;
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
  if (((pSVar3 == (Settings_CustomSkinSettings_o *)0x0) ||
      (pSVar4 = (pSVar3->fields).Skybox,
      pSVar4 == (Settings_BaseCustomSkinSettings_SkyboxCustomSkinSet__o *)0x0)) ||
     (pSVar5 = (pSVar4->fields).SkinsEnabled, pSVar5 == (Settings_BoolSetting_o *)0x0)) goto label_181e7aba1;
  if ((pSVar5->fields)._value != false) {
    pSVar5 = (pSVar4->fields).SkinsLocal;
    if (pSVar5 == (Settings_BoolSetting_o *)0x0) goto label_181e7aba1;
    if ((pSVar5->fields)._value != false) {
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      bVar12 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      if (!bVar12) goto label_181e7a97f;
    }
    if (__this_00 == (GameManagers_InGameManager_o *)0x0) goto label_181e7aba1;
    bVar12 = GameManagers_InGameManager__IsValidSkybox(__this_00,(__this->fields).urls,(MethodInfo *)0x0);
    if (bVar12) {
      pCVar6 = (__this_00->fields)._skyboxCustomSkinLoader;
      if (pCVar6 != (CustomSkins_SkyboxCustomSkinLoader_o *)0x0) {
        pSVar13 = (*(pCVar6->klass->vtable)._7_LoadSkinsFromRPC.methodPtr)
                            (pCVar6,(System_Object_array *)(__this->fields).urls,
                             (pCVar6->klass->vtable)._7_LoadSkinsFromRPC.method);
        pUVar14 = UnityEngine_MonoBehaviour__StartCoroutine_Auto
                            ((UnityEngine_MonoBehaviour_o *)__this_00,pSVar13,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)pUVar14;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pUVar14);
        (__this->fields).__1__state = 1;
        return true;
      }
      goto label_181e7aba1;
    }
  }
label_181e7a97f:
  pSVar5 = (pSVar4->fields).SkinsEnabled;
  if (pSVar5 != (Settings_BoolSetting_o *)0x0) {
    if ((pSVar5->fields)._value == false) {
      return false;
    }
    pSVar5 = (pSVar4->fields).SkinsLocal;
    if (pSVar5 != (Settings_BoolSetting_o *)0x0) {
      if ((pSVar5->fields)._value == false) {
        return false;
      }
      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
      if ((pSVar3 != (Settings_CustomSkinSettings_o *)0x0) &&
         (pSVar4 = (pSVar3->fields).Skybox,
         pSVar4 != (Settings_BaseCustomSkinSettings_SkyboxCustomSkinSet__o *)0x0)) {
        pSVar15 = Settings_SetSettingsContainer_object___GetSelectedSet
                            ((Settings_SetSettingsContainer_T__o *)pSVar4,
                             (MethodInfo_C8EAF0 *)
                             MethodInfo_Settings_SetSettingsContainer_SkyboxCustomSkinSet_GetSelectedSet);
        if (pSVar15 == (Settings_BaseSetSetting_o *)0x0) {
          SZArrayNew(TypeInfo_string_array,6);
        }
        else {
          bVar1 = (TypeInfo_Settings_SkyboxCustomSkinSet->_2).typeHierarchyDepth;
          if (((pSVar15->klass->_2).typeHierarchyDepth < bVar1) ||
             ((pSVar15->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_SkyboxCustomSkinSet)) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar15);
          }
          urls = (System_String_array *)SZArrayNew(TypeInfo_string_array,6);
          if (((*(uint64_t *)((char *)pSVar15 + 0x48)) != (Settings_BaseSetSetting_c *)0x0) && (urls != (System_String_array *)0x0))
          {
            if ((int)urls->max_length == 0) {
label_181e7aba7:
              ThrowIndexOutOfRangeException();
            }
            pSVar7 = (((*(Il2CppClass **)((char *)pSVar15 + 0x48)))->_1).byval_arg.data;
            urls->m_Items[0] = pSVar7;
            Il2CppCodeGenWriteBarrier(urls->m_Items,pSVar7);
            if ((*(uint64_t *)((char *)pSVar15 + 0x50)) != (void *)0x0) {
              if ((uint)urls->max_length < 2) goto label_181e7aba7;
              pSVar7 = *(System_String_o **)((longlong)(*(uint64_t *)((char *)pSVar15 + 0x50)) + 0x20);
              urls->m_Items[1] = pSVar7;
              Il2CppCodeGenWriteBarrier(urls->m_Items + 1,pSVar7);
              pSVar8 = (*(uint64_t *)((char *)pSVar15 + 0x58));
              if (pSVar8 != (Settings_InspectorSettingMetadata_o *)0x0) {
                if ((uint)urls->max_length < 3) goto label_181e7aba7;
                pSVar7 = (pSVar8->fields).Header;
                urls->m_Items[2] = pSVar7;
                Il2CppCodeGenWriteBarrier(urls->m_Items + 2,pSVar7);
                pSVar9 = (*(uint64_t *)((char *)pSVar15 + 0x60));
                if (pSVar9 != (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
                  if ((uint)urls->max_length < 4) goto label_181e7aba7;
                  pSVar7 = *(System_String_o **)&(pSVar9->fields)._initialCapacity;
                  urls->m_Items[3] = pSVar7;
                  Il2CppCodeGenWriteBarrier(urls->m_Items + 3,pSVar7);
                  pSVar10 = (*(uint64_t *)((char *)pSVar15 + 0x68));
                  if (pSVar10 != (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
                    if ((uint)urls->max_length < 5) goto label_181e7aba7;
                    pSVar7 = *(System_String_o **)&(pSVar10->fields)._count;
                    urls->m_Items[4] = pSVar7;
                    Il2CppCodeGenWriteBarrier(urls->m_Items + 4,pSVar7);
                    pSVar11 = (*(uint64_t *)((char *)pSVar15 + 0x70));
                    if (pSVar11 != (System_Collections_Generic_HashSet_string__o *)0x0) {
                      if ((uint)urls->max_length < 6) goto label_181e7aba7;
                      pSVar7 = *(System_String_o **)&(pSVar11->fields)._count;
                      urls->m_Items[5] = pSVar7;
                      Il2CppCodeGenWriteBarrier(urls->m_Items + 5,pSVar7);
                      if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
                        bVar12 = GameManagers_InGameManager__IsValidSkybox(__this_00,urls,(MethodInfo *)0x0);
                        if (!bVar12) {
                          return false;
                        }
                        pCVar6 = (__this_00->fields)._skyboxCustomSkinLoader;
                        if (pCVar6 != (CustomSkins_SkyboxCustomSkinLoader_o *)0x0) {
                          pSVar13 = (*(pCVar6->klass->vtable)._7_LoadSkinsFromRPC.methodPtr)
                                              (pCVar6,(System_Object_array *)urls,
                                               (pCVar6->klass->vtable)._7_LoadSkinsFromRPC.method);
                          pUVar14 = UnityEngine_MonoBehaviour__StartCoroutine_Auto
                                              ((UnityEngine_MonoBehaviour_o *)__this_00,pSVar13,
                                               (MethodInfo *)0x0);
                          (__this->fields).__2__current = (Il2CppObject *)pUVar14;
                          Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pUVar14);
                          (__this->fields).__1__state = 2;
                          return true;
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
  }
label_181e7aba1:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager.<OnLoadSkyboxRPC>d__112$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__OnLoadSkyboxRPC_d__112__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_InGameManager__OnLoadSkyboxRPC_d__112_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
GameManagers_InGameManager__OnLoadSkyboxRPC_d__112__System_Collections_Generic_IEnumerator_System_Object__get_Current(GameManagers_InGameManager__OnLoadSkyboxRPC_d__112_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<OnLoadSkyboxRPC>d__112$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_InGameManager__OnLoadSkyboxRPC_d__112__System_Collections_IEnumerator_Reset (GameManagers_InGameManager__OnLoadSkyboxRPC_d__112_o* __this, const MethodInfo* method);
// 0x181e7abb0

void GameManagers_InGameManager__OnLoadSkyboxRPC_d__112__System_Collections_IEnumerator_Reset
               (GameManagers_InGameManager__OnLoadSkyboxRPC_d__112_o *__this,MethodInfo *method)

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
                  MethodInfo_GameManagers_InGameManager_OnLoadSkyboxRPC_d__112_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// GameManagers.InGameManager.<OnLoadSkyboxRPC>d__112$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__OnLoadSkyboxRPC_d__112__System_Collections_IEnumerator_get_Current (GameManagers_InGameManager__OnLoadSkyboxRPC_d__112_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
GameManagers_InGameManager__OnLoadSkyboxRPC_d__112__System_Collections_IEnumerator_get_Current(GameManagers_InGameManager__OnLoadSkyboxRPC_d__112_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<ReloadSkybox>d__113$$.ctor
// il2cpp: void GameManagers_InGameManager__ReloadSkybox_d__113___ctor (GameManagers_InGameManager__ReloadSkybox_d__113_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
GameManagers_InGameManager__ReloadSkybox_d__113___ctor(GameManagers_InGameManager__ReloadSkybox_d__113_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.InGameManager.<ReloadSkybox>d__113$$System.IDisposable.Dispose
// il2cpp: void GameManagers_InGameManager__ReloadSkybox_d__113__System_IDisposable_Dispose (GameManagers_InGameManager__ReloadSkybox_d__113_o* __this, const MethodInfo* method);
// 0x180547020

void
GameManagers_InGameManager__ReloadSkybox_d__113__System_IDisposable_Dispose(GameManagers_InGameManager__ReloadSkybox_d__113_o* __this, MethodInfo* method)

{
  return;
}


// GameManagers.InGameManager.<ReloadSkybox>d__113$$MoveNext
// il2cpp: bool GameManagers_InGameManager__ReloadSkybox_d__113__MoveNext (GameManagers_InGameManager__ReloadSkybox_d__113_o* __this, const MethodInfo* method);
// 0x181e7abf0

bool GameManagers_InGameManager__ReloadSkybox_d__113__MoveNext
               (GameManagers_InGameManager__ReloadSkybox_d__113_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Cameras_BaseCamera_o *pCVar3;
  UnityEngine_Material_o *value;
  UnityEngine_Skybox_o *pUVar4;
  bool bVar5;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *__this_00;
  UnityEngine_Material_o *x;
  
  if (Il2CppMethodInitialized_184344ece == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_SkyboxCustomSkinLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_184344ece = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    __this_00 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_00,0.5,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_00);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    pCVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
    if (pCVar3 != (Cameras_BaseCamera_o *)0x0) {
      bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
      if (((pCVar3->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
        il2cpp_codegen_raise_invalid_cast_exception(pCVar3);
      }
    }
    value = TypeInfo_CustomSkins_SkyboxCustomSkinLoader->static_fields->SkyboxMaterial;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      if ((pCVar3 == (Cameras_BaseCamera_o *)0x0) ||
         (pUVar4 = (pCVar3->fields).Skybox, pUVar4 == (UnityEngine_Skybox_o *)0x0)) {
label_181e7ada2:
        ThrowNullReferenceException();
      }
      x = UnityEngine_Skybox__get_material(pUVar4,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)value,(MethodInfo *)0x0);
      if (bVar5) {
        pUVar4 = (pCVar3->fields).Skybox;
        if (pUVar4 == (UnityEngine_Skybox_o *)0x0) goto label_181e7ada2;
        UnityEngine_Skybox__set_material(pUVar4,value,(MethodInfo *)0x0);
      }
    }
  }
  return false;
}


// GameManagers.InGameManager.<ReloadSkybox>d__113$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__ReloadSkybox_d__113__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_InGameManager__ReloadSkybox_d__113_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
GameManagers_InGameManager__ReloadSkybox_d__113__System_Collections_Generic_IEnumerator_System_Object__get_Current(GameManagers_InGameManager__ReloadSkybox_d__113_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<ReloadSkybox>d__113$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_InGameManager__ReloadSkybox_d__113__System_Collections_IEnumerator_Reset (GameManagers_InGameManager__ReloadSkybox_d__113_o* __this, const MethodInfo* method);
// 0x181e7adb0

void GameManagers_InGameManager__ReloadSkybox_d__113__System_Collections_IEnumerator_Reset
               (GameManagers_InGameManager__ReloadSkybox_d__113_o *__this,MethodInfo *method)

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
                  MethodInfo_GameManagers_InGameManager_ReloadSkybox_d__113_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// GameManagers.InGameManager.<ReloadSkybox>d__113$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__ReloadSkybox_d__113__System_Collections_IEnumerator_get_Current (GameManagers_InGameManager__ReloadSkybox_d__113_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
GameManagers_InGameManager__ReloadSkybox_d__113__System_Collections_IEnumerator_get_Current(GameManagers_InGameManager__ReloadSkybox_d__113_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<RespawnForever>d__67$$.ctor
// il2cpp: void GameManagers_InGameManager__RespawnForever_d__67___ctor (GameManagers_InGameManager__RespawnForever_d__67_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
GameManagers_InGameManager__RespawnForever_d__67___ctor(GameManagers_InGameManager__RespawnForever_d__67_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.InGameManager.<RespawnForever>d__67$$System.IDisposable.Dispose
// il2cpp: void GameManagers_InGameManager__RespawnForever_d__67__System_IDisposable_Dispose (GameManagers_InGameManager__RespawnForever_d__67_o* __this, const MethodInfo* method);
// 0x180547020

void
GameManagers_InGameManager__RespawnForever_d__67__System_IDisposable_Dispose(GameManagers_InGameManager__RespawnForever_d__67_o* __this, MethodInfo* method)

{
  return;
}


// GameManagers.InGameManager.<RespawnForever>d__67$$MoveNext
// il2cpp: bool GameManagers_InGameManager__RespawnForever_d__67__MoveNext (GameManagers_InGameManager__RespawnForever_d__67_o* __this, const MethodInfo* method);
// 0x181e7adf0

bool GameManagers_InGameManager__RespawnForever_d__67__MoveNext
               (GameManagers_InGameManager__RespawnForever_d__67_o *__this,MethodInfo *method)

{
  GameManagers_InGameManager_o *__this_00;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *__this_01;
  float fVar1;
  
  if (Il2CppMethodInitialized_184344ecf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_184344ecf = '\x01';
  }
  if ((uint)(__this->fields).__1__state < 2) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
      fVar1 = (__this_00->fields).RespawnTimeLeft - 1.0;
      (__this_00->fields).RespawnTimeLeft = fVar1;
      if (fVar1 <= 0.0) {
        GameManagers_InGameManager__SpawnPlayer(__this_00,false,(MethodInfo *)0x0);
        (__this_00->fields).RespawnTimeLeft = (__this->fields).delay;
      }
      __this_01 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor(__this_01,1.0,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)__this_01;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_01);
      (__this->fields).__1__state = 1;
      return true;
    }
    ThrowNullReferenceException();
  }
  return false;
}


// GameManagers.InGameManager.<RespawnForever>d__67$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__RespawnForever_d__67__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_InGameManager__RespawnForever_d__67_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
GameManagers_InGameManager__RespawnForever_d__67__System_Collections_Generic_IEnumerator_System_Object__get_Current(GameManagers_InGameManager__RespawnForever_d__67_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<RespawnForever>d__67$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_InGameManager__RespawnForever_d__67__System_Collections_IEnumerator_Reset (GameManagers_InGameManager__RespawnForever_d__67_o* __this, const MethodInfo* method);
// 0x181e7aed0

void GameManagers_InGameManager__RespawnForever_d__67__System_Collections_IEnumerator_Reset
               (GameManagers_InGameManager__RespawnForever_d__67_o *__this,MethodInfo *method)

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
                  MethodInfo_GameManagers_InGameManager_RespawnForever_d__67_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// GameManagers.InGameManager.<RespawnForever>d__67$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__RespawnForever_d__67__System_Collections_IEnumerator_get_Current (GameManagers_InGameManager__RespawnForever_d__67_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
GameManagers_InGameManager__RespawnForever_d__67__System_Collections_IEnumerator_get_Current(GameManagers_InGameManager__RespawnForever_d__67_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<SpawnAITitansAtCoroutine>d__80$$.ctor
// il2cpp: void GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__80___ctor (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__80_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__80___ctor(GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__80_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.InGameManager.<SpawnAITitansAtCoroutine>d__80$$System.IDisposable.Dispose
// il2cpp: void GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__80__System_IDisposable_Dispose (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__80_o* __this, const MethodInfo* method);
// 0x180547020

void
GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__80__System_IDisposable_Dispose(GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__80_o* __this, MethodInfo* method)

{
  return;
}


// GameManagers.InGameManager.<SpawnAITitansAtCoroutine>d__80$$MoveNext
// il2cpp: bool GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__80__MoveNext (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__80_o* __this, const MethodInfo* method);
// 0x181e7af10

bool GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__80__MoveNext
               (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__80_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  GameManagers_InGameManager_o *__this_00;
  Il2CppObject *pIVar3;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_184344ed0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    Il2CppMethodInitialized_184344ed0 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 0) {
    (__this->fields)._i_5__2 = 0;
  }
  else {
    if (iVar2 == 1) {
      (__this->fields).__1__state = -1;
      pIVar3 = (Il2CppObject *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar3,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar3);
      (__this->fields).__1__state = 2;
      return true;
    }
    if (iVar2 != 2) {
      return false;
    }
    piVar1 = &(__this->fields)._i_5__2;
    *piVar1 = *piVar1 + 1;
  }
  (__this->fields).__1__state = -1;
  if ((__this->fields).count <= (__this->fields)._i_5__2) {
    return false;
  }
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  local_18.x = (__this->fields).position.fields.x;
  local_18.y = (__this->fields).position.fields.y;
  local_18.z = (__this->fields).position.fields.z;
  GameManagers_InGameManager__SpawnAITitanAt
            (__this_00,(__this->fields).type,(UnityEngine_Vector3_o *)&local_18,(__this->fields).rotationY,
             (MethodInfo *)0x0);
  pIVar3 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
  UnityEngine_WaitForEndOfFrame___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar3,(MethodInfo *)0x0);
  (__this->fields).__2__current = pIVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar3);
  (__this->fields).__1__state = 1;
  return true;
}


// GameManagers.InGameManager.<SpawnAITitansAtCoroutine>d__80$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__80__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__80_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__80__System_Collections_Generic_IEnumerator_System_Object__get_Current(GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__80_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<SpawnAITitansAtCoroutine>d__80$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__80__System_Collections_IEnumerator_Reset (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__80_o* __this, const MethodInfo* method);
// 0x181e7b030

void GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__80__System_Collections_IEnumerator_Reset
               (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__80_o *__this,MethodInfo *method)

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
                  MethodInfo_GameManagers_InGameManager_SpawnAITitansAtCoroutine_d__80_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// GameManagers.InGameManager.<SpawnAITitansAtCoroutine>d__80$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__80__System_Collections_IEnumerator_get_Current (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__80_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__80__System_Collections_IEnumerator_get_Current(GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__80_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<SpawnAITitansCoroutine>d__78$$.ctor
// il2cpp: void GameManagers_InGameManager__SpawnAITitansCoroutine_d__78___ctor (GameManagers_InGameManager__SpawnAITitansCoroutine_d__78_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
GameManagers_InGameManager__SpawnAITitansCoroutine_d__78___ctor(GameManagers_InGameManager__SpawnAITitansCoroutine_d__78_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.InGameManager.<SpawnAITitansCoroutine>d__78$$System.IDisposable.Dispose
// il2cpp: void GameManagers_InGameManager__SpawnAITitansCoroutine_d__78__System_IDisposable_Dispose (GameManagers_InGameManager__SpawnAITitansCoroutine_d__78_o* __this, const MethodInfo* method);
// 0x181e7b580
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e7b5a1: xor edx, edx
// asm:   0x181e7b5a3: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181e7b5a8: call 0x181e7b5d0  ; GameManagers_InGameManager__SpawnAITitansCoroutine_d__78____m__Finally1()
// asm:   0x181e7b5ad: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e7b5b2: test rcx, rcx
// asm:   0x181e7b5b5: jne 0x181e7b5bc
// asm:   0x181e7b5bc: call 0x1804171b0  ; il2cpp_codegen_rethrow()

void GameManagers_InGameManager__SpawnAITitansCoroutine_d__78__System_IDisposable_Dispose
               (GameManagers_InGameManager__SpawnAITitansCoroutine_d__78_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == -3) || (iVar1 - 1U < 2)) {
    GameManagers_InGameManager__SpawnAITitansCoroutine_d__78____m__Finally1(__this,(MethodInfo *)0x0);
  }
  return;
}


// GameManagers.InGameManager.<SpawnAITitansCoroutine>d__78$$MoveNext
// il2cpp: bool GameManagers_InGameManager__SpawnAITitansCoroutine_d__78__MoveNext (GameManagers_InGameManager__SpawnAITitansCoroutine_d__78_o* __this, const MethodInfo* method);
// 0x181e7b070
// eh: try 0x181e7b0eb..0x181e7b51e -> pad 0x1833286e0 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e7b2ee: nop 
// asm:   0x181e7b4e0: mov rbx, qword ptr [rsp + 0x40]
// asm:   0x181e7b4e5: test rbx, rbx
// asm:   0x181e7b4e8: jne 0x181e7b51e
// asm:   0x181e7b4ea: movzx eax, byte ptr [rsp + 0xf0]
// asm:   0x181e7b51e: lea rcx, [rsp + 0x48]
// asm:   0x181e7b523: call 0x181e62030  ; il2cpp_runtime_helper_181e62030()
// asm:   0x181e7b528: mov rcx, rbx
// asm:   0x181e7b52b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1833286e0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833286e5: push rbp
// asm:   0x1833286e6: sub rsp, 0x30
// asm:   0x1833286ea: mov rbp, rdx
// asm:   0x1833286ed: mov rax, qword ptr [rbp + 0x80]
// asm:   0x1833286f4: mov rcx, qword ptr [rax]
// asm:   0x1833286f7: mov qword ptr [rbp + 0x40], rcx
// asm:   0x1833286fb: movabs rax, 0
// asm:   0x183328705: add rsp, 0x30
// asm:   0x183328709: pop rbp
// asm:   0x18332870a: ret 

bool GameManagers_InGameManager__SpawnAITitansCoroutine_d__78__MoveNext
               (GameManagers_InGameManager__SpawnAITitansCoroutine_d__78_o *__this,MethodInfo *method)

{
  ushort uVar1;
  int iVar2;
  GameManagers_InGameManager_o *__this_00;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  System_String_o *type;
  bool bVar5;
  VirtualInvokeData *pVVar6;
  undefined8 *puVar7;
  UnityEngine_Vector3_o *pUVar8;
  Il2CppObject *pIVar9;
  ushort uVar10;
  GameManagers_InGameManager__SpawnAITitansCoroutine_d__78_o *local_res8;
  UnityEngine_Vector3_o local_a8;
  undefined8 local_98;
  GameManagers_InGameManager__SpawnAITitansCoroutine_d__78_o **local_90;
  undefined8 local_88;
  undefined4 uStack_80;
  UnityEngine_Quaternion_o UStack_7c;
  UnityEngine_Vector3_o local_68 [2];
  undefined8 local_50;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  undefined1 local_30 [40];
  
  local_res8 = __this;
  if (Il2CppMethodInitialized_184344ed1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerable_ValueTuple_Vector3_Quaternion);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerator_ValueTuple_Vector3_Quaternion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    Il2CppMethodInitialized_184344ed1 = '\x01';
  }
  local_88 = 0;
  uStack_80 = 0;
  UStack_7c.fields.x = 0.0;
  UStack_7c.fields.y = 0.0;
  UStack_7c.fields.z = 0.0;
  UStack_7c.fields.w = 0.0;
  local_98 = 0;
  local_90 = &local_res8;
  __this_00 = (local_res8->fields).__4__this;
  iVar2 = (local_res8->fields).__1__state;
  if (iVar2 == 0) {
    (local_res8->fields).__1__state = -1;
    if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar9 = (Il2CppObject *)
             GameManagers_InGameManager__GetTitanSpawnPositions
                       (__this_00,(local_res8->fields).count,(MethodInfo *)0x0);
    if (pIVar9 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar3 = pIVar9->klass;
    uVar1 = (pIVar3->_2).interface_offsets_count;
    if (uVar1 != 0) {
      uVar10 = 0;
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      do {
        if (pIVar4[uVar10].interfaceType ==
            (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_ValueTuple_Vector3_Quaternion) {
          pVVar6 = pIVar3->vtable + pIVar4[uVar10].offset;
          goto label_181e7b206;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar1);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar9,(Il2CppClass *)
                               TypeInfo_System_Collections_Generic_IEnumerable_ValueTuple_Vector3_Quaternion,0
                       );
label_181e7b206:
    pIVar9 = (*pVVar6->methodPtr)(pIVar9,pVVar6->method);
    (local_res8->fields).__7__wrap1 =
         (System_Collections_Generic_IEnumerator_ValueTuple_Vector3__Quaternion___o *)pIVar9;
    Il2CppCodeGenWriteBarrier(&(local_res8->fields).__7__wrap1,pIVar9);
    (local_res8->fields).__1__state = -3;
  }
  else {
    if (iVar2 == 1) {
      (local_res8->fields).__1__state = -3;
      pIVar9 = (Il2CppObject *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar9,(MethodInfo *)0x0);
      (local_res8->fields).__2__current = pIVar9;
      Il2CppCodeGenWriteBarrier(&(local_res8->fields).__2__current,pIVar9);
      (local_res8->fields).__1__state = 2;
      return true;
    }
    if (iVar2 != 2) {
      return false;
    }
    (local_res8->fields).__1__state = -3;
  }
  pIVar9 = (Il2CppObject *)(local_res8->fields).__7__wrap1;
  if (pIVar9 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar3 = pIVar9->klass;
  uVar1 = (pIVar3->_2).interface_offsets_count;
  if (uVar1 != 0) {
    uVar10 = 0;
    pIVar4 = (pIVar3->_1).interfaceOffsets;
    do {
      if (pIVar4[uVar10].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
        pVVar6 = pIVar3->vtable + pIVar4[uVar10].offset;
        goto label_181e7b2a6;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar1);
  }
  pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                     (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_181e7b2a6:
  bVar5 = (*pVVar6->methodPtr)(pIVar9,pVVar6->method);
  if (bVar5) {
    pIVar9 = (Il2CppObject *)(local_res8->fields).__7__wrap1;
    if (pIVar9 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar3 = pIVar9->klass;
    uVar1 = (pIVar3->_2).interface_offsets_count;
    if (uVar1 != 0) {
      uVar10 = 0;
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      do {
        if (pIVar4[uVar10].interfaceType ==
            (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_ValueTuple_Vector3_Quaternion) {
          pVVar6 = pIVar3->vtable + pIVar4[uVar10].offset;
          goto label_181e7b316;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar1);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar9,(Il2CppClass *)
                               TypeInfo_System_Collections_Generic_IEnumerator_ValueTuple_Vector3_Quaternion,0
                       );
label_181e7b316:
    puVar7 = (undefined8 *)(*pVVar6->methodPtr)(local_30,pIVar9);
    local_88 = *puVar7;
    uStack_80 = (undefined4)puVar7[1];
    UStack_7c.fields._8_8_ = *(undefined8 *)((longlong)puVar7 + 0x14);
    UStack_7c.fields.x = (float)*(undefined8 *)((longlong)puVar7 + 0xc);
    UStack_7c.fields.y = (float)((ulonglong)*(undefined8 *)((longlong)puVar7 + 0xc) >> 0x20);
    type = (local_res8->fields).type;
    local_50 = *puVar7;
    fStack_48 = (float)puVar7[1];
    uStack_3c = *(undefined8 *)((longlong)puVar7 + 0x14);
    uStack_44 = (undefined4)*(undefined8 *)((longlong)puVar7 + 0xc);
    uStack_40 = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar7 + 0xc) >> 0x20);
    pUVar8 = UnityEngine_Quaternion__Internal_ToEulerRad(local_68,&UStack_7c,(MethodInfo *)0x0);
    local_a8.fields.x = (pUVar8->fields).x * 57.29578;
    local_a8.fields.y = (pUVar8->fields).y * 57.29578;
    local_a8.fields.z = (pUVar8->fields).z * 57.29578;
    pUVar8 = UnityEngine_Quaternion__Internal_MakePositive(local_68,&local_a8,(MethodInfo *)0x0);
    if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_a8.fields.x = (float)local_50;
    local_a8.fields.y = local_50._4_4_;
    local_a8.fields.z = fStack_48;
    GameManagers_InGameManager__SpawnAITitanAt(__this_00,type,&local_a8,(pUVar8->fields).y,(MethodInfo *)0x0);
    pIVar9 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar9,(MethodInfo *)0x0);
    (local_res8->fields).__2__current = pIVar9;
    Il2CppCodeGenWriteBarrier(&(local_res8->fields).__2__current,pIVar9);
    (local_res8->fields).__1__state = 1;
    bVar5 = true;
  }
  else {
    GameManagers_InGameManager__SpawnAITitansCoroutine_d__78____m__Finally1(local_res8,(MethodInfo *)0x0);
    (local_res8->fields).__7__wrap1 =
         (System_Collections_Generic_IEnumerator_ValueTuple_Vector3__Quaternion___o *)0x0;
    Il2CppCodeGenWriteBarrier(&(local_res8->fields).__7__wrap1,(void *)0x0);
    bVar5 = false;
  }
  return bVar5;
}


// GameManagers.InGameManager.<SpawnAITitansCoroutine>d__78$$<>m__Finally1
// il2cpp: void GameManagers_InGameManager__SpawnAITitansCoroutine_d__78____m__Finally1 (GameManagers_InGameManager__SpawnAITitansCoroutine_d__78_o* __this, const MethodInfo* method);
// 0x181e7b5d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e7b629: nop dword ptr [rax]

void GameManagers_InGameManager__SpawnAITitansCoroutine_d__78____m__Finally1
               (GameManagers_InGameManager__SpawnAITitansCoroutine_d__78_o *__this,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *obj;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  VirtualInvokeData *pVVar4;
  ushort uVar5;
  
  if (Il2CppMethodInitialized_184344ed2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_184344ed2 = '\x01';
  }
  (__this->fields).__1__state = -1;
  if ((__this->fields).__7__wrap1 !=
      (System_Collections_Generic_IEnumerator_ValueTuple_Vector3__Quaternion___o *)0x0) {
    obj = (Il2CppObject *)(__this->fields).__7__wrap1;
    pIVar2 = obj->klass;
    uVar1 = (pIVar2->_2).interface_offsets_count;
    if (uVar1 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      uVar5 = 0;
      do {
        if (pIVar3[uVar5].interfaceType == (Il2CppClass *)TypeInfo_System_IDisposable) {
          (*pIVar2->vtable[pIVar3[uVar5].offset].methodPtr)(obj,pIVar2->vtable[pIVar3[uVar5].offset].method);
          return;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar1);
    }
    pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(obj,(Il2CppClass *)TypeInfo_System_IDisposable,0);
    (*pVVar4->methodPtr)(obj,pVVar4->method);
    return;
  }
  return;
}


// GameManagers.InGameManager.<SpawnAITitansCoroutine>d__78$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__SpawnAITitansCoroutine_d__78__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_InGameManager__SpawnAITitansCoroutine_d__78_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
GameManagers_InGameManager__SpawnAITitansCoroutine_d__78__System_Collections_Generic_IEnumerator_System_Object__get_Current(GameManagers_InGameManager__SpawnAITitansCoroutine_d__78_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<SpawnAITitansCoroutine>d__78$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_InGameManager__SpawnAITitansCoroutine_d__78__System_Collections_IEnumerator_Reset (GameManagers_InGameManager__SpawnAITitansCoroutine_d__78_o* __this, const MethodInfo* method);
// 0x181e7b540

void GameManagers_InGameManager__SpawnAITitansCoroutine_d__78__System_Collections_IEnumerator_Reset
               (GameManagers_InGameManager__SpawnAITitansCoroutine_d__78_o *__this,MethodInfo *method)

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
                  MethodInfo_GameManagers_InGameManager_SpawnAITitansCoroutine_d__78_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// GameManagers.InGameManager.<SpawnAITitansCoroutine>d__78$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__SpawnAITitansCoroutine_d__78__System_Collections_IEnumerator_get_Current (GameManagers_InGameManager__SpawnAITitansCoroutine_d__78_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
GameManagers_InGameManager__SpawnAITitansCoroutine_d__78__System_Collections_IEnumerator_get_Current(GameManagers_InGameManager__SpawnAITitansCoroutine_d__78_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<WaitAndEndGame>d__91$$.ctor
// il2cpp: void GameManagers_InGameManager__WaitAndEndGame_d__91___ctor (GameManagers_InGameManager__WaitAndEndGame_d__91_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
GameManagers_InGameManager__WaitAndEndGame_d__91___ctor(GameManagers_InGameManager__WaitAndEndGame_d__91_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.InGameManager.<WaitAndEndGame>d__91$$System.IDisposable.Dispose
// il2cpp: void GameManagers_InGameManager__WaitAndEndGame_d__91__System_IDisposable_Dispose (GameManagers_InGameManager__WaitAndEndGame_d__91_o* __this, const MethodInfo* method);
// 0x180547020

void
GameManagers_InGameManager__WaitAndEndGame_d__91__System_IDisposable_Dispose(GameManagers_InGameManager__WaitAndEndGame_d__91_o* __this, MethodInfo* method)

{
  return;
}


// GameManagers.InGameManager.<WaitAndEndGame>d__91$$MoveNext
// il2cpp: bool GameManagers_InGameManager__WaitAndEndGame_d__91__MoveNext (GameManagers_InGameManager__WaitAndEndGame_d__91_o* __this, const MethodInfo* method);
// 0x181e7be60

bool GameManagers_InGameManager__WaitAndEndGame_d__91__MoveNext
               (GameManagers_InGameManager__WaitAndEndGame_d__91_o *__this,MethodInfo *method)

{
  float amplificationFactor;
  int iVar1;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *__this_00;
  
  if (Il2CppMethodInitialized_184344ed3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_184344ed3 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    amplificationFactor = (__this->fields).time;
    (__this->fields).__1__state = -1;
    __this_00 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor
              (__this_00,amplificationFactor,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_00);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    GameManagers_InGameManager__RestartGame((MethodInfo *)0x0);
  }
  return false;
}


// GameManagers.InGameManager.<WaitAndEndGame>d__91$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__WaitAndEndGame_d__91__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_InGameManager__WaitAndEndGame_d__91_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
GameManagers_InGameManager__WaitAndEndGame_d__91__System_Collections_Generic_IEnumerator_System_Object__get_Current(GameManagers_InGameManager__WaitAndEndGame_d__91_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<WaitAndEndGame>d__91$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_InGameManager__WaitAndEndGame_d__91__System_Collections_IEnumerator_Reset (GameManagers_InGameManager__WaitAndEndGame_d__91_o* __this, const MethodInfo* method);
// 0x181e7bf30

void GameManagers_InGameManager__WaitAndEndGame_d__91__System_Collections_IEnumerator_Reset
               (GameManagers_InGameManager__WaitAndEndGame_d__91_o *__this,MethodInfo *method)

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
                  MethodInfo_GameManagers_InGameManager_WaitAndEndGame_d__91_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// GameManagers.InGameManager.<WaitAndEndGame>d__91$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__WaitAndEndGame_d__91__System_Collections_IEnumerator_get_Current (GameManagers_InGameManager__WaitAndEndGame_d__91_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
GameManagers_InGameManager__WaitAndEndGame_d__91__System_Collections_IEnumerator_get_Current(GameManagers_InGameManager__WaitAndEndGame_d__91_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<WaitAndUnpauseGame>d__47$$.ctor
// il2cpp: void GameManagers_InGameManager__WaitAndUnpauseGame_d__47___ctor (GameManagers_InGameManager__WaitAndUnpauseGame_d__47_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
GameManagers_InGameManager__WaitAndUnpauseGame_d__47___ctor(GameManagers_InGameManager__WaitAndUnpauseGame_d__47_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.InGameManager.<WaitAndUnpauseGame>d__47$$System.IDisposable.Dispose
// il2cpp: void GameManagers_InGameManager__WaitAndUnpauseGame_d__47__System_IDisposable_Dispose (GameManagers_InGameManager__WaitAndUnpauseGame_d__47_o* __this, const MethodInfo* method);
// 0x180547020

void
GameManagers_InGameManager__WaitAndUnpauseGame_d__47__System_IDisposable_Dispose(GameManagers_InGameManager__WaitAndUnpauseGame_d__47_o* __this, MethodInfo* method)

{
  return;
}


// GameManagers.InGameManager.<WaitAndUnpauseGame>d__47$$MoveNext
// il2cpp: bool GameManagers_InGameManager__WaitAndUnpauseGame_d__47__MoveNext (GameManagers_InGameManager__WaitAndUnpauseGame_d__47_o* __this, const MethodInfo* method);
// 0x181e7bf70

bool GameManagers_InGameManager__WaitAndUnpauseGame_d__47__MoveNext
               (GameManagers_InGameManager__WaitAndUnpauseGame_d__47_o *__this,MethodInfo *method)

{
  int iVar1;
  GameManagers_InGameManager_o *__this_00;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_184344ed4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_184344ed4 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    fVar3 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
    if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
label_181e7c086:
      ThrowNullReferenceException();
    }
    (__this->fields)._endTime_5__2 = fVar3 + (__this_00->fields).PauseTimeLeft;
  }
  else {
    if (iVar1 != 1) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 == (GameManagers_InGameManager_o *)0x0) goto label_181e7c086;
  }
  if ((__this_00->fields).PauseTimeLeft <= 0.0) {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if (bVar2) {
      GameManagers_InGameManager__UnpauseGame(__this_00,(MethodInfo *)0x0);
    }
    return false;
  }
  fVar3 = (__this->fields)._endTime_5__2;
  fVar4 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  fVar3 = fVar3 - fVar4;
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  (__this_00->fields).PauseTimeLeft = fVar3;
  (__this->fields).__2__current = (Il2CppObject *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
  (__this->fields).__1__state = 1;
  return true;
}


// GameManagers.InGameManager.<WaitAndUnpauseGame>d__47$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__WaitAndUnpauseGame_d__47__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_InGameManager__WaitAndUnpauseGame_d__47_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
GameManagers_InGameManager__WaitAndUnpauseGame_d__47__System_Collections_Generic_IEnumerator_System_Object__get_Current(GameManagers_InGameManager__WaitAndUnpauseGame_d__47_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<WaitAndUnpauseGame>d__47$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_InGameManager__WaitAndUnpauseGame_d__47__System_Collections_IEnumerator_Reset (GameManagers_InGameManager__WaitAndUnpauseGame_d__47_o* __this, const MethodInfo* method);
// 0x181e7c090

void GameManagers_InGameManager__WaitAndUnpauseGame_d__47__System_Collections_IEnumerator_Reset
               (GameManagers_InGameManager__WaitAndUnpauseGame_d__47_o *__this,MethodInfo *method)

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
                  MethodInfo_GameManagers_InGameManager_WaitAndUnpauseGame_d__47_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// GameManagers.InGameManager.<WaitAndUnpauseGame>d__47$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__WaitAndUnpauseGame_d__47__System_Collections_IEnumerator_get_Current (GameManagers_InGameManager__WaitAndUnpauseGame_d__47_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
GameManagers_InGameManager__WaitAndUnpauseGame_d__47__System_Collections_IEnumerator_get_Current(GameManagers_InGameManager__WaitAndUnpauseGame_d__47_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager$$StartMapEditorPlaytest
// il2cpp: void GameManagers_InGameManager__StartMapEditorPlaytest (const MethodInfo* method);
// 0x181e5d6a0

void GameManagers_InGameManager__StartMapEditorPlaytest(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344e79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_184344e79 = '\x01';
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  TypeInfo_GameManagers_InGameManager->static_fields->_returnToMapEditorOnLeave = true;
  return;
}


// GameManagers.InGameManager$$add_PlayerInfoUpdated
// il2cpp: void GameManagers_InGameManager__add_PlayerInfoUpdated (System_Action_int__o* value, const MethodInfo* method);
// 0x181e60100
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e6016f: nop 

void GameManagers_InGameManager__add_PlayerInfoUpdated(System_Action_int__o *value,MethodInfo *method)

{
  System_Action_int__c *pSVar1;
  System_Delegate_o *obj;
  Il2CppObject *pIVar2;
  System_Action_int__o *pSVar3;
  System_Action_int__o *a;
  bool bVar4;
  
  if (Il2CppMethodInitialized_184344e7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_184344e7a = '\x01';
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  a = TypeInfo_GameManagers_InGameManager->static_fields->PlayerInfoUpdated;
  do {
    obj = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_int;
    if (obj == (System_Delegate_o *)0x0) {
      pIVar2 = (Il2CppObject *)0x0;
    }
    else {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_int);
      if (pIVar2 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    pSVar3 = (System_Action_int__o *)
             il2cpp_runtime_helper_1804174a0(&TypeInfo_GameManagers_InGameManager->static_fields->PlayerInfoUpdated,pIVar2);
    bVar4 = pSVar3 != a;
    a = pSVar3;
  } while (bVar4);
  return;
}


// GameManagers.InGameManager$$remove_PlayerInfoUpdated
// il2cpp: void GameManagers_InGameManager__remove_PlayerInfoUpdated (System_Action_int__o* value, const MethodInfo* method);
// 0x181e60210
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e6027f: nop 

void GameManagers_InGameManager__remove_PlayerInfoUpdated(System_Action_int__o *value,MethodInfo *method)

{
  System_Action_int__c *pSVar1;
  System_Delegate_o *obj;
  Il2CppObject *pIVar2;
  System_Action_int__o *pSVar3;
  System_Action_int__o *source;
  bool bVar4;
  
  if (Il2CppMethodInitialized_184344e7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_184344e7b = '\x01';
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  source = TypeInfo_GameManagers_InGameManager->static_fields->PlayerInfoUpdated;
  do {
    obj = System_Delegate__Remove((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_int;
    if (obj == (System_Delegate_o *)0x0) {
      pIVar2 = (Il2CppObject *)0x0;
    }
    else {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_int);
      if (pIVar2 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    pSVar3 = (System_Action_int__o *)
             il2cpp_runtime_helper_1804174a0(&TypeInfo_GameManagers_InGameManager->static_fields->PlayerInfoUpdated,pIVar2);
    bVar4 = pSVar3 != source;
    source = pSVar3;
  } while (bVar4);
  return;
}


// GameManagers.InGameManager$$RegisterCharacter
// il2cpp: void GameManagers_InGameManager__RegisterCharacter (GameManagers_InGameManager_o* __this, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x181e585c0
// eh: try 0x181e58750..0x181e58938 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e586f4: mov r8, qword ptr [rip + 0x22827e5]  ; MethodInfo_System_Collections_Generic_HashSet_Human_Add
// asm:   0x181e5874d: nop dword ptr [rax]
// asm:   0x181e587e5: mov r8, qword ptr [rip + 0x227ec34]  ; MethodInfo_System_Collections_Generic_HashSet_BasicTitan_Add
// asm:   0x181e587ec: jmp 0x181e586fb
// asm:   0x181e58852: mov r8, qword ptr [rip + 0x227e847]  ; MethodInfo_System_Collections_Generic_HashSet_BaseShifter_Add
// asm:   0x181e58859: jmp 0x181e586fb
// asm:   0x181e588bf: mov r8, qword ptr [rip + 0x228238a]  ; MethodInfo_System_Collections_Generic_HashSet_Horse_Add
// asm:   0x181e588c6: jmp 0x181e586fb
// asm:   0x181e588dc: mov rdx, qword ptr [rip + 0x221cc35]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseDetection_Dispose
// asm:   0x181e588e3: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e588e8: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e588ed: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e588f2: test rcx, rcx
// asm:   0x181e588f5: jne 0x181e58938
// asm:   0x181e58938: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void GameManagers_InGameManager__RegisterCharacter
               (GameManagers_InGameManager_o *__this,Characters_BaseCharacter_o *character,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_c *pCVar2;
  System_Collections_Generic_HashSet_Vector2Int__o *__this_00;
  bool bVar3;
  System_Collections_Generic_HashSet_Horse__o *__this_01;
  MethodInfo *method_00;
  undefined1 local_40 [16];
  Characters_BaseDetection_o *local_30;
  System_Collections_Generic_HashSet_Enumerator_T__o local_28;
  
  if (Il2CppMethodInitialized_184344e7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseDetection_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseDetection_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseDetection_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_BaseShifter_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Human_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_BasicTitan_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Horse_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseDetection_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Horse);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_184344e7c = '\x01';
  }
  local_28.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  if (character != (Characters_BaseCharacter_o *)0x0) {
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
           )) {
          bVar1 = (TypeInfo_Characters_Horse->_2).typeHierarchyDepth;
          if (((pCVar2->_2).typeHierarchyDepth < bVar1) ||
             ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Horse))
          goto label_181e58703;
          __this_01 = (__this->fields).Horses;
          if (__this_01 == (System_Collections_Generic_HashSet_Horse__o *)0x0) goto label_181e5893e;
          bVar1 = (TypeInfo_Characters_Horse->_2).typeHierarchyDepth;
          if (((pCVar2->_2).typeHierarchyDepth < bVar1) ||
             (method_00 = MethodInfo_System_Collections_Generic_HashSet_Horse_Add,
             (pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Horse)) {
            il2cpp_codegen_raise_invalid_cast_exception(character,TypeInfo_Characters_Horse);
          }
        }
        else {
          __this_01 = (System_Collections_Generic_HashSet_Horse__o *)(__this->fields).Shifters;
          if (__this_01 == (System_Collections_Generic_HashSet_Horse__o *)0x0) goto label_181e5893e;
          bVar1 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
          if (((pCVar2->_2).typeHierarchyDepth < bVar1) ||
             (method_00 = MethodInfo_System_Collections_Generic_HashSet_BaseShifter_Add,
             (pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
             (Il2CppClass *)TypeInfo_Characters_BaseShifter)) {
            il2cpp_codegen_raise_invalid_cast_exception(character,TypeInfo_Characters_BaseShifter);
          }
        }
      }
      else {
        __this_01 = (System_Collections_Generic_HashSet_Horse__o *)(__this->fields).Titans;
        if (__this_01 == (System_Collections_Generic_HashSet_Horse__o *)0x0) goto label_181e5893e;
        bVar1 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
        if (((pCVar2->_2).typeHierarchyDepth < bVar1) ||
           (method_00 = MethodInfo_System_Collections_Generic_HashSet_BasicTitan_Add,
           (pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_BasicTitan))
        {
          il2cpp_codegen_raise_invalid_cast_exception(character,TypeInfo_Characters_BasicTitan);
        }
      }
    }
    else {
      __this_01 = (System_Collections_Generic_HashSet_Horse__o *)(__this->fields).Humans;
      if (__this_01 == (System_Collections_Generic_HashSet_Horse__o *)0x0) goto label_181e5893e;
      bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
      if (((pCVar2->_2).typeHierarchyDepth < bVar1) ||
         (method_00 = MethodInfo_System_Collections_Generic_HashSet_Human_Add,
         (pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
        il2cpp_codegen_raise_invalid_cast_exception(character,TypeInfo_Characters_Human);
      }
    }
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_01,(Il2CppObject *)character,
               (MethodInfo_1757CE0 *)method_00);
  }
label_181e58703:
  __this_00 = (System_Collections_Generic_HashSet_Vector2Int__o *)(__this->fields).Detections;
  if (__this_00 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
    System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_40,__this_00,
               (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_BaseDetection_GetEnumerator
              );
    local_28.fields._set = (System_Collections_Generic_HashSet_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = (Il2CppObject *)local_30;
    local_40._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_40._8_8_ = &local_28;
    while( true ) {
      bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_15381F0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseDetection_MoveNext);
      if (!bVar3) {
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseDetection_Dispose);
        return;
      }
      if ((Characters_BaseDetection_o *)local_28.fields._current == (Characters_BaseDetection_o *)0x0) break;
      Characters_BaseDetection__OnCharacterSpawned
                ((Characters_BaseDetection_o *)local_28.fields._current,character,(MethodInfo *)0x0);
    }
    ThrowNullReferenceException();
  }
label_181e5893e:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$GetAllCharacters
// il2cpp: System_Collections_Generic_HashSet_BaseCharacter__o* GameManagers_InGameManager__GetAllCharacters (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x181e53f50
// eh: try 0x181e54110..0x181e54502 -> pad 0x1833245a0 (+7 call sites) catch Il2CppExceptionWrapper
// asm: 81 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e5410f: nop 
// asm:   0x181e5418d: mov rdx, qword ptr [rip + 0x222dd94]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose
// asm:   0x181e54194: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e54199: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e5419e: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181e541a3: test rcx, rcx
// asm:   0x181e541a6: jne 0x181e544cf
// asm:   0x181e541ac: mov r14, qword ptr [rsp + 0xe0]
// asm:   0x181e541b4: mov rdi, qword ptr [rsp + 0xf0]
// asm:   0x181e54280: mov rdx, qword ptr [rip + 0x2222cc9]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose
// asm:   0x181e54287: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e5428c: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e54291: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181e54296: test rcx, rcx
// asm:   0x181e54299: jne 0x181e544e0
// asm:   0x181e5429f: mov r14, qword ptr [rsp + 0xe0]
// asm:   0x181e542a7: mov rdi, qword ptr [rsp + 0xf0]
// asm:   0x181e5437d: mov rdx, qword ptr [rip + 0x222268c]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose
// asm:   0x181e54384: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e54389: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e5438e: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181e54393: test rcx, rcx
// asm:   0x181e54396: jne 0x181e544f1
// asm:   0x181e5439c: mov r14, qword ptr [rsp + 0xe0]
// asm:   0x181e543a4: mov rdi, qword ptr [rsp + 0xf0]
// asm:   0x181e543fc: nop dword ptr [rax]
// asm:   0x181e54483: mov rdx, qword ptr [rip + 0x222d7fe]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_Dispose
// asm:   0x181e5448a: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e5448f: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e54494: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181e54499: test rcx, rcx
// asm:   0x181e5449c: jne 0x181e54502
// asm:   0x181e5449e: mov rdi, qword ptr [rsp + 0xf0]
// asm:   0x181e544cf: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e544e0: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e544f1: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e54502: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1833245a0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833245a5: push rbp
// asm:   0x1833245a6: sub rsp, 0x20
// asm:   0x1833245aa: mov rbp, rdx
// asm:   0x1833245ad: mov rax, qword ptr [rbp + 0x98]
// asm:   0x1833245b4: mov rcx, qword ptr [rax]
// asm:   0x1833245b7: mov qword ptr [rbp + 0x20], rcx
// asm:   0x1833245bb: movabs rax, 0
// asm:   0x1833245c5: add rsp, 0x20
// asm:   0x1833245c9: pop rbp
// asm:   0x1833245ca: ret 
// asm:   0x1833245d0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833245d5: push rbp
// asm:   0x1833245d6: sub rsp, 0x20
// asm:   0x1833245da: mov rbp, rdx
// asm:   0x1833245dd: mov rax, qword ptr [rbp + 0xb0]
// asm:   0x1833245e4: mov rcx, qword ptr [rax]
// asm:   0x1833245e7: mov qword ptr [rbp + 0x20], rcx
// asm:   0x1833245eb: movabs rax, 0
// asm:   0x1833245f5: add rsp, 0x20
// asm:   0x1833245f9: pop rbp
// asm:   0x1833245fa: ret 
// asm:   0x1833316f0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833316f5: push rbp
// asm:   0x1833316f6: sub rsp, 0x20
// asm:   0x1833316fa: mov rbp, rdx
// asm:   0x1833316fd: mov rax, qword ptr [rbp + 0xa8]
// asm:   0x183331704: mov rcx, qword ptr [rax]
// asm:   0x183331707: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18333170b: movabs rax, 0
// asm:   0x183331715: add rsp, 0x20
// asm:   0x183331719: pop rbp
// asm:   0x18333171a: ret 
// asm:   0x18333bd70: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333bd75: push rbp
// asm:   0x18333bd76: sub rsp, 0x20
// asm:   0x18333bd7a: mov rbp, rdx
// asm:   0x18333bd7d: mov rax, qword ptr [rbp + 0xa0]
// asm:   0x18333bd84: mov rcx, qword ptr [rax]
// asm:   0x18333bd87: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18333bd8b: movabs rax, 0
// asm:   0x18333bd95: add rsp, 0x20
// asm:   0x18333bd99: pop rbp
// asm:   0x18333bd9a: ret 

System_Collections_Generic_HashSet_BaseCharacter__o *
GameManagers_InGameManager__GetAllCharacters(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_Vector2Int__o *pSVar1;
  UnityEngine_Object_o *pUVar2;
  bool bVar3;
  System_Collections_Generic_HashSet_BaseCharacter__o *__this_00;
  undefined1 local_b8 [16];
  UnityEngine_Object_o *local_a8;
  undefined1 local_a0 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_98;
  UnityEngine_Object_o *local_90;
  undefined1 local_88 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_80;
  UnityEngine_Object_o *local_78;
  undefined1 local_70 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_68;
  UnityEngine_Object_o *local_60;
  undefined1 local_58 [8];
  uint64_t uStack_50;
  UnityEngine_Object_o *local_48;
  
  if (Il2CppMethodInitialized_184344e7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BasicTitan_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Horse_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseShifter_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344e7d = '\x01';
  }
  local_a0 = (undefined1  [8])0x0;
  pUStack_98 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_90 = (UnityEngine_Object_o *)0x0;
  local_88 = (undefined1  [8])0x0;
  pUStack_80 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_78 = (UnityEngine_Object_o *)0x0;
  local_70 = (undefined1  [8])0x0;
  pUStack_68 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_60 = (UnityEngine_Object_o *)0x0;
  local_58 = (undefined1  [8])0x0;
  uStack_50 = 0;
  local_48 = (UnityEngine_Object_o *)0x0;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_BaseCharacter);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_ctor);
  pSVar1 = (System_Collections_Generic_HashSet_Vector2Int__o *)(__this->fields).Humans;
  if (pSVar1 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
    System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_b8,pSVar1,
               (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
    local_a0 = (undefined1  [8])local_b8._0_8_;
    pUStack_98 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_b8._8_8_;
    local_90 = local_a8;
    local_b8._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_b8._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a0;
    while( true ) {
      bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_a0,
                         (MethodInfo_15381F0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
      pUVar2 = local_90;
      if (!bVar3) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if (pUVar2 == (UnityEngine_Object_o *)0x0) {
          ThrowNullReferenceException();
        }
        if ((char)(*(uint64_t *)((char *)pUVar2 + 0x70)) == '\0') {
          if (__this_00 == (System_Collections_Generic_HashSet_BaseCharacter__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_HashSet_object___Add
                    ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)pUVar2,
                     (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add);
        }
      }
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a0,
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
    pSVar1 = (System_Collections_Generic_HashSet_Vector2Int__o *)(__this->fields).Titans;
    if (pSVar1 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
      System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_b8,pSVar1,
                 (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_BasicTitan_GetEnumerator)
      ;
      local_88 = (undefined1  [8])local_b8._0_8_;
      pUStack_80 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_b8._8_8_;
      local_78 = local_a8;
      local_b8._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_b8._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_88;
      while( true ) {
        bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_88,
                           (MethodInfo_15381F0 *)
                           MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_MoveNext);
        pUVar2 = local_78;
        if (!bVar3) break;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          if (pUVar2 == (UnityEngine_Object_o *)0x0) {
            ThrowNullReferenceException();
          }
          if ((char)(*(uint64_t *)((char *)pUVar2 + 0x70)) == '\0') {
            if (__this_00 == (System_Collections_Generic_HashSet_BaseCharacter__o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Collections_Generic_HashSet_object___Add
                      ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)pUVar2,
                       (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add);
          }
        }
      }
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_88,
                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose);
      pSVar1 = (System_Collections_Generic_HashSet_Vector2Int__o *)(__this->fields).Shifters;
      if (pSVar1 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
        System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_b8,pSVar1,
                   (MethodInfo_175C200 *)
                   MethodInfo_System_Collections_Generic_HashSet_BaseShifter_GetEnumerator);
        local_70 = (undefined1  [8])local_b8._0_8_;
        pUStack_68 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_b8._8_8_;
        local_60 = local_a8;
        local_b8._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
        local_b8._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_70;
        while( true ) {
          bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_70,
                             (MethodInfo_15381F0 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_MoveNext);
          pUVar2 = local_60;
          if (!bVar3) break;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar3 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar3) {
            if (pUVar2 == (UnityEngine_Object_o *)0x0) {
              ThrowNullReferenceException();
            }
            if ((char)(*(uint64_t *)((char *)pUVar2 + 0x70)) == '\0') {
              if (__this_00 == (System_Collections_Generic_HashSet_BaseCharacter__o *)0x0) {
                ThrowNullReferenceException();
              }
              System_Collections_Generic_HashSet_object___Add
                        ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)pUVar2,
                         (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add
                        );
            }
          }
        }
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_70,
                   MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose);
        pSVar1 = (System_Collections_Generic_HashSet_Vector2Int__o *)(__this->fields).Horses;
        if (pSVar1 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
          System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
                    ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_b8,pSVar1,
                     (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_Horse_GetEnumerator);
          local_58 = (undefined1  [8])local_b8._0_8_;
          uStack_50 = local_b8._8_8_;
          local_48 = local_a8;
          local_b8._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
          local_b8._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58;
          while( true ) {
            do {
              bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_58,
                                 (MethodInfo_15381F0 *)
                                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_MoveNext);
              pUVar2 = local_48;
              if (!bVar3) {
                System_Collections_Generic_HashSet_Enumerator_object___Dispose
                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58,
                           MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_Dispose);
                return __this_00;
              }
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar3 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            } while (!bVar3);
            if (pUVar2 == (UnityEngine_Object_o *)0x0) break;
            if ((char)(*(uint64_t *)((char *)pUVar2 + 0x70)) == '\0') {
              if (__this_00 == (System_Collections_Generic_HashSet_BaseCharacter__o *)0x0) {
                ThrowNullReferenceException();
              }
              System_Collections_Generic_HashSet_object___Add
                        ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)pUVar2,
                         (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add
                        );
            }
          }
          ThrowNullReferenceException();
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$GetAllCharactersEnumerable
// il2cpp: System_Collections_Generic_IEnumerable_BaseCharacter__o* GameManagers_InGameManager__GetAllCharactersEnumerable (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x181e53ed0

System_Collections_Generic_IEnumerable_BaseCharacter__o *
GameManagers_InGameManager__GetAllCharactersEnumerable
          (GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  GameManagers_InGameManager__GetAllCharactersEnumerable_d__39_o *__this_00;
  
  if (Il2CppMethodInitialized_184344e7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_GameManagers_InGameManager_GetAllCharactersEnumerable_d__39);
    Il2CppMethodInitialized_184344e7e = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameManagers_InGameManager_GetAllCharactersEnumerable_d__39);
  GameManagers_InGameManager__GetAllCharactersEnumerable_d__39___ctor
            ((System_Xml_Linq_XElement__GetAttributes_d__116_o *)__this_00,-2,(MethodInfo *)0x0);
  if (__this_00 != (GameManagers_InGameManager__GetAllCharactersEnumerable_d__39_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
    return (System_Collections_Generic_IEnumerable_BaseCharacter__o *)__this_00;
  }
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$GetAllNonAICharacters
// il2cpp: System_Collections_Generic_HashSet_BaseCharacter__o* GameManagers_InGameManager__GetAllNonAICharacters (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x181e54510

System_Collections_Generic_HashSet_BaseCharacter__o *
GameManagers_InGameManager__GetAllNonAICharacters(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  Il2CppObject *object;
  System_Collections_Generic_HashSet_BaseCharacter__o *source;
  System_Func_BaseCharacter__bool__o *__this_00;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Collections_Generic_HashSet_TSource__o *pSVar1;
  
  if (Il2CppMethodInitialized_184344e7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToHashSet_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_BaseCharacter_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_InGameManager_c_GetAllNonAICharacters_b__40_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager_c);
    Il2CppMethodInitialized_184344e7f = '\x01';
  }
  source = GameManagers_InGameManager__GetAllCharacters(__this,(MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_InGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager_c);
  }
  __this_00 = TypeInfo_GameManagers_InGameManager_c->static_fields->__9__40_0;
  if (__this_00 == (System_Func_BaseCharacter__bool__o *)0x0) {
    if ((TypeInfo_GameManagers_InGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager_c);
    }
    object = (Il2CppObject *)TypeInfo_GameManagers_InGameManager_c->static_fields->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_BaseCharacter_bool);
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)__this_00,object,
               (intptr_t)MethodInfo_GameManagers_InGameManager_c_GetAllNonAICharacters_b__40_0,
               (MethodInfo_B61EB0 *)0x0);
    TypeInfo_GameManagers_InGameManager_c->static_fields->__9__40_0 = __this_00;
    Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_InGameManager_c->static_fields->__9__40_0,__this_00);
  }
  source_00 = System_Linq_Enumerable__Where_float_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__bool__o *)__this_00,
                         (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_BaseCharacter);
  pSVar1 = System_Linq_Enumerable__ToHashSet_object_
                     (source_00,(MethodInfo_6C93E0 *)MethodInfo_System_Linq_Enumerable_ToHashSet_BaseCharacter
                     );
  return (System_Collections_Generic_HashSet_BaseCharacter__o *)pSVar1;
}


// GameManagers.InGameManager$$PauseGame
// il2cpp: void GameManagers_InGameManager__PauseGame (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x181e583a0

void GameManagers_InGameManager__PauseGame(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar1;
  System_Object_array *parameters;
  
  if (Il2CppMethodInitialized_184344e80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"PauseGameRPC");
    Il2CppMethodInitialized_184344e80 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if ((bVar1) && ((__this->fields).GlobalPause == false)) {
    __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
    if (__this_00 == (Photon_Pun_PhotonView_o *)0x0) {
      ThrowNullReferenceException();
    }
    Photon_Pun_PhotonView__RPC(__this_00,"PauseGameRPC",0,parameters,(MethodInfo *)0x0);
  }
  return;
}


// GameManagers.InGameManager$$OnPauseGameRPC
// il2cpp: void GameManagers_InGameManager__OnPauseGameRPC (GameManagers_InGameManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e56f70

void GameManagers_InGameManager__OnPauseGameRPC
               (GameManagers_InGameManager_o *__this,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Photon_Realtime_Player_o *__this_00;
  bool bVar1;
  
  __this_00 = (info->fields).Sender;
  if (__this_00 == (Photon_Realtime_Player_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = Photon_Realtime_Player__get_IsMasterClient(__this_00,(MethodInfo *)0x0);
  if (bVar1) {
    (__this->fields).GlobalPause = true;
    (__this->fields).PauseTimeLeft = -1.0;
    UnityEngine_Time__set_timeScale(0.0,(MethodInfo *)0x0);
    return;
  }
  return;
}


// GameManagers.InGameManager$$UnpauseGame
// il2cpp: void GameManagers_InGameManager__UnpauseGame (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x181e5e430

void GameManagers_InGameManager__UnpauseGame(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar1;
  System_Object_array *parameters;
  
  if (Il2CppMethodInitialized_184344e81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"UnpauseGameRPC");
    Il2CppMethodInitialized_184344e81 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if ((bVar1) && ((__this->fields).GlobalPause != false)) {
    __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
    if (__this_00 == (Photon_Pun_PhotonView_o *)0x0) {
      ThrowNullReferenceException();
    }
    Photon_Pun_PhotonView__RPC(__this_00,"UnpauseGameRPC",0,parameters,(MethodInfo *)0x0);
  }
  return;
}


// GameManagers.InGameManager$$OnUnpauseGameRPC
// il2cpp: void GameManagers_InGameManager__OnUnpauseGameRPC (GameManagers_InGameManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e58350

void GameManagers_InGameManager__OnUnpauseGameRPC
               (GameManagers_InGameManager_o *__this,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Photon_Realtime_Player_o *__this_00;
  bool bVar1;
  
  __this_00 = (info->fields).Sender;
  if (__this_00 == (Photon_Realtime_Player_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = Photon_Realtime_Player__get_IsMasterClient(__this_00,(MethodInfo *)0x0);
  if (bVar1) {
    (__this->fields).GlobalPause = false;
    (__this->fields).PauseTimeLeft = -1.0;
    UnityEngine_Time__set_timeScale(1.0,(MethodInfo *)0x0);
    return;
  }
  return;
}


// GameManagers.InGameManager$$StartUnpauseGame
// il2cpp: void GameManagers_InGameManager__StartUnpauseGame (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x181e5d6f0

void GameManagers_InGameManager__StartUnpauseGame(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar1;
  System_Object_array *parameters;
  
  if (Il2CppMethodInitialized_184344e82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"StartUnpauseGameRPC");
    Il2CppMethodInitialized_184344e82 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if ((bVar1) && ((__this->fields).GlobalPause != false)) {
    __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
    if (__this_00 == (Photon_Pun_PhotonView_o *)0x0) {
      ThrowNullReferenceException();
    }
    Photon_Pun_PhotonView__RPC(__this_00,"StartUnpauseGameRPC",0,parameters,(MethodInfo *)0x0);
  }
  return;
}


// GameManagers.InGameManager$$OnStartUnpauseGameRPC
// il2cpp: void GameManagers_InGameManager__OnStartUnpauseGameRPC (GameManagers_InGameManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e582a0

void GameManagers_InGameManager__OnStartUnpauseGameRPC
               (GameManagers_InGameManager_o *__this,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Photon_Realtime_Player_o *__this_00;
  bool bVar1;
  Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *__this_01;
  
  __this_00 = (info->fields).Sender;
  if (__this_00 != (Photon_Realtime_Player_o *)0x0) {
    bVar1 = Photon_Realtime_Player__get_IsMasterClient(__this_00,(MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = Il2CppMethodInitialized_184344e83 == '\0';
      (__this->fields).GlobalPause = true;
      (__this->fields).PauseTimeLeft = 5.0;
      if (bVar1) {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_GameManagers_InGameManager_WaitAndUnpauseGame_d__47);
        Il2CppMethodInitialized_184344e83 = '\x01';
      }
      __this_01 = (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_GameManagers_InGameManager_WaitAndUnpauseGame_d__47);
      GameManagers_InGameManager__WaitAndUnpauseGame_d__47___ctor(__this_01,0,(MethodInfo *)0x0);
      if (__this_01 == (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)0x0) goto label_181e5833c;
      (__this_01->fields).__4__this = (Photon_Pun_UtilityScripts_OnClickRpc_o *)__this;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this,__this);
      UnityEngine_MonoBehaviour__StartCoroutine_Auto
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_01,
                 (MethodInfo *)0x0);
    }
    return;
  }
label_181e5833c:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$WaitAndUnpauseGame
// il2cpp: System_Collections_IEnumerator_o* GameManagers_InGameManager__WaitAndUnpauseGame (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x181e5f720

System_Collections_IEnumerator_o *
GameManagers_InGameManager__WaitAndUnpauseGame(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *__this_00;
  
  if (Il2CppMethodInitialized_184344e83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager_WaitAndUnpauseGame_d__47);
    Il2CppMethodInitialized_184344e83 = '\x01';
  }
  __this_00 = (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameManagers_InGameManager_WaitAndUnpauseGame_d__47);
  GameManagers_InGameManager__WaitAndUnpauseGame_d__47___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)0x0) {
    (__this_00->fields).__4__this = (Photon_Pun_UtilityScripts_OnClickRpc_o *)__this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$RestartGame
// il2cpp: void GameManagers_InGameManager__RestartGame (const MethodInfo* method);
// 0x181e5a2a0

void GameManagers_InGameManager__RestartGame(MethodInfo *method)

{
  byte bVar1;
  GameManagers_BaseGameManager_o *__this;
  Photon_Pun_PhotonView_o *__this_00;
  Settings_UISettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  bool bVar4;
  System_Object_array *parameters;
  Il2CppObject *pIVar5;
  Il2CppObject *pIVar6;
  Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *__this_01;
  undefined1 local_res10 [8];
  
  if (Il2CppMethodInitialized_184344e84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"PreRestartGameRPC");
    Il2CppMethodInitialized_184344e84 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar4) {
    return;
  }
  __this = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (__this != (GameManagers_BaseGameManager_o *)0x0) {
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this);
    }
  }
  __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar2 != (Settings_UISettings_o *)0x0) &&
     (pSVar3 = (pSVar2->fields).FadeLoadscreen, pSVar3 != (Settings_BoolSetting_o *)0x0)) {
    local_res10[0] = (pSVar3->fields)._value == false;
    pIVar5 = il2cpp_value_box(g_data_184354de8,local_res10);
    if (parameters != (System_Object_array *)0x0) {
      if ((pIVar5 != (Il2CppObject *)0x0) &&
         (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((parameters->obj).klass)->_1).element_class),
         pIVar6 == (Il2CppObject *)0x0)) {
        pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
      }
      if ((int)parameters->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      parameters->m_Items[0] = pIVar5;
      Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar5);
      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this_00,"PreRestartGameRPC",0,parameters,(MethodInfo *)0x0);
        UnityEngine_Time__set_timeScale(1.0,(MethodInfo *)0x0);
        if (__this != (GameManagers_BaseGameManager_o *)0x0) {
          if (Il2CppMethodInitialized_184344e85 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_GameManagers_InGameManager_FinishRestartGame_d__49);
            Il2CppMethodInitialized_184344e85 = '\x01';
          }
          __this_01 = (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_GameManagers_InGameManager_FinishRestartGame_d__49);
          GameManagers_InGameManager__FinishRestartGame_d__49___ctor(__this_01,0,(MethodInfo *)0x0);
          UnityEngine_MonoBehaviour__StartCoroutine_Auto
                    ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_01,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$FinishRestartGame
// il2cpp: System_Collections_IEnumerator_o* GameManagers_InGameManager__FinishRestartGame (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x181e53e80

System_Collections_IEnumerator_o *
GameManagers_InGameManager__FinishRestartGame(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *__this_00;
  
  if (Il2CppMethodInitialized_184344e85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager_FinishRestartGame_d__49);
    Il2CppMethodInitialized_184344e85 = '\x01';
  }
  __this_00 = (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameManagers_InGameManager_FinishRestartGame_d__49);
  GameManagers_InGameManager__FinishRestartGame_d__49___ctor(__this_00,0,(MethodInfo *)0x0);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// GameManagers.InGameManager$$OnRestartGameRPC
// il2cpp: void GameManagers_InGameManager__OnRestartGameRPC (Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e57ed0

void GameManagers_InGameManager__OnRestartGameRPC(Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Photon_Realtime_Player_o *__this;
  bool bVar1;
  System_Nullable_DateTime__Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184344e86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&"Master client has restarted the game.");
    Il2CppMethodInitialized_184344e86 = '\x01';
  }
  __this = (info->fields).Sender;
  if (__this != (Photon_Realtime_Player_o *)0x0) {
    bVar1 = Photon_Realtime_Player__get_IsMasterClient(__this,(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      GameManagers_InGameManager__ResetRoundPlayerProperties((MethodInfo *)0x0);
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      if (Il2CppMethodInitialized_184344524 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
        Il2CppMethodInitialized_184344524 = '\x01';
      }
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      if (TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode == false) {
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        local_28[0].hasValue = false;
        local_28[0]._1_7_ = 0;
        local_28[0].value.fields._dateData = (System_DateTime_Fields)0;
        GameManagers_ChatManager__AddLine
                  ("Master client has restarted the game.",3,false,(System_Nullable_DateTime__o *)local_28,-1,false,false,-1,
                   false,(MethodInfo *)0x0);
      }
      ApplicationManagers_SceneLoader__LoadScene(2,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$OnPreRestartGameRPC
// il2cpp: void GameManagers_InGameManager__OnPreRestartGameRPC (bool immediate, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e57d50

void GameManagers_InGameManager__OnPreRestartGameRPC
               (bool immediate,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  byte bVar1;
  Photon_Realtime_Player_o *__this;
  GameManagers_BaseGameManager_o *pGVar2;
  UI_BaseMenu_o *__this_00;
  UI_LoadingMenu_o *__this_01;
  bool bVar3;
  UnityEngine_GameObject_o *__this_02;
  
  if (Il2CppMethodInitialized_184344e87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184344e87 = '\x01';
  }
  __this = (info->fields).Sender;
  if (__this != (Photon_Realtime_Player_o *)0x0) {
    bVar3 = Photon_Realtime_Player__get_IsMasterClient(__this,(MethodInfo *)0x0);
    if (!bVar3) {
      return;
    }
    pGVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar2 != (GameManagers_BaseGameManager_o *)0x0) {
      bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
      if (((pGVar2->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pGVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception(pGVar2);
      }
      *(undefined1 *)((longlong)&(*(uint64_t *)((char *)pGVar2 + 0x80)) + 3) = 1;
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      TypeInfo_GameManagers_ChatManager->static_fields->PreserveInputOnRestart = true;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      __this_00 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if ((__this_00 != (UI_BaseMenu_o *)0x0) &&
         (__this_02 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
         __this_02 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_02,false,(MethodInfo *)0x0);
        __this_01 = TypeInfo_UI_UIManager->static_fields->LoadingMenu;
        if (__this_01 != (UI_LoadingMenu_o *)0x0) {
          UI_LoadingMenu__Show(__this_01,immediate,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$LeaveRoom
// il2cpp: void GameManagers_InGameManager__LeaveRoom (const MethodInfo* method);
// 0x181e552f0

void GameManagers_InGameManager__LeaveRoom(MethodInfo *method)

{
  Settings_MultiplayerSettings_o *__this;
  Settings_InGameSet_o *pSVar1;
  Settings_InGameCharacterSettings_o *pSVar2;
  bool bVar3;
  int32_t sceneName;
  
  if (Il2CppMethodInitialized_184344e88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_MaterialCache);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184344e88 = '\x01';
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  sceneName = 3;
  if (TypeInfo_GameManagers_InGameManager->static_fields->_returnToMapEditorOnLeave == false) {
    sceneName = 1;
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  TypeInfo_GameManagers_InGameManager->static_fields->_returnToMapEditorOnLeave = false;
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  TypeInfo_GameManagers_ChatManager->static_fields->PreserveInputOnRestart = false;
  GameManagers_ChatManager__ResetAllPMState((MethodInfo *)0x0);
  GameManagers_InGameManager__ResetPersistentPlayerProperties((MethodInfo *)0x0);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    Photon_Pun_PhotonNetwork__DestroyAll((MethodInfo *)0x0);
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar3 = Photon_Pun_PhotonNetwork__get_IsConnected((MethodInfo *)0x0);
  if (bVar3) {
    __this = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
    if (__this == (Settings_MultiplayerSettings_o *)0x0) goto label_181e554ef;
    Settings_MultiplayerSettings__Disconnect(__this,(MethodInfo *)0x0);
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (pSVar1 != (Settings_InGameSet_o *)0x0) {
    (*(pSVar1->klass->vtable)._4_SetDefault.methodPtr)(pSVar1,(pSVar1->klass->vtable)._4_SetDefault.method);
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
    if (pSVar1 != (Settings_InGameSet_o *)0x0) {
      (*(pSVar1->klass->vtable)._4_SetDefault.methodPtr)(pSVar1,(pSVar1->klass->vtable)._4_SetDefault.method);
      pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
      if (pSVar2 != (Settings_InGameCharacterSettings_o *)0x0) {
        (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)
                  (pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
        ApplicationManagers_SceneLoader__LoadScene(sceneName,(MethodInfo *)0x0);
        if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
        }
        CustomSkins_MaterialCache__Clear((MethodInfo *)0x0);
        return;
      }
    }
  }
label_181e554ef:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$OnLeftRoom
// il2cpp: void GameManagers_InGameManager__OnLeftRoom (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x181e56880

void GameManagers_InGameManager__OnLeftRoom(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  UI_BaseMenu_o *__this_00;
  bool bVar1;
  UI_InGameMenu_o *pUVar2;
  UI_ChatPanel_o *__this_01;
  
  if (Il2CppMethodInitialized_184344e89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MainMenuGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184344e89 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar1 = Photon_Pun_PhotonNetwork__get_IsConnected((MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    __this_00 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if ((__this_00 == (UI_BaseMenu_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)__this_00,
                            (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_InGameMenu),
       pUVar2 == (UI_InGameMenu_o *)0x0)) {
      __this_01 = (UI_ChatPanel_o *)0x0;
    }
    else {
      __this_01 = (pUVar2->fields).ChatPanel;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this_01 == (UI_ChatPanel_o *)0x0) {
        ThrowNullReferenceException();
      }
      UI_ChatPanel__ResetPMState(__this_01,(MethodInfo *)0x0);
    }
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    GameManagers_InGameManager__LeaveRoom((MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_MainMenuGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MainMenuGameManager);
    }
    TypeInfo_GameManagers_MainMenuGameManager->static_fields->JustLeftRoom = true;
    return;
  }
  return;
}


// GameManagers.InGameManager$$OnJoinRoom
// il2cpp: void GameManagers_InGameManager__OnJoinRoom (const MethodInfo* method);
// 0x181e56460

void GameManagers_InGameManager__OnJoinRoom(MethodInfo *method)

{
  Photon_Realtime_Room_o *room;
  System_String_o *pSVar1;
  System_Object_array *pSVar2;
  Il2CppObject *pIVar3;
  System_String_o *str0;
  System_Nullable_DateTime__Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184344e8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_AnticheatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RoomProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    il2cpp_codegen_initialize_runtime_metadata(&"Motd");
    il2cpp_codegen_initialize_runtime_metadata(&"InGame");
    il2cpp_codegen_initialize_runtime_metadata(&"Chat");
    il2cpp_codegen_initialize_runtime_metadata(&"Help");
    il2cpp_codegen_initialize_runtime_metadata(&"single player");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184344e8a = '\x01';
  }
  if ((TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager);
  }
  Anticheat_AnticheatManager__Reset((MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  GameManagers_InGameManager__ResetPlayerInfo((MethodInfo *)0x0);
  GameManagers_InGameManager__ResetPersistentPlayerProperties((MethodInfo *)0x0);
  TypeInfo_GameManagers_InGameManager->static_fields->_needSendPlayerInfo = true;
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__SyncPMPartnersOnJoin((MethodInfo *)0x0);
  pSVar1 = "single player";
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  if (Il2CppMethodInitialized_184344524 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_184344524 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  if (TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode == false) {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    room = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
    }
    pSVar1 = PhotonExtensions__GetStringProperty_1dacb40
                       ((Photon_Realtime_RoomInfo_o *)room,
                        TypeInfo_GameManagers_RoomProperty->static_fields->Name,"",
                        (MethodInfo *)0x0);
    if (pSVar1 == (System_String_o *)0x0) goto label_181e5684c;
    pSVar1 = System_String__Trim(pSVar1,(MethodInfo *)0x0);
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    pSVar1 = MiscExtensions__HexColor(pSVar1,(MethodInfo *)0x0);
  }
  pSVar2 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  if (pSVar2 != (System_Object_array *)0x0) {
    if (pSVar1 != (System_String_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((pSVar2->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) {
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
    }
    if ((int)pSVar2->max_length != 0) {
      pSVar2->m_Items[0] = (Il2CppObject *)pSVar1;
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      str0 = UI_UIManager__GetLocaleFormatted
                       ("InGame","Chat","Motd",pSVar2,
                        (MethodInfo *)0x0);
      pSVar2 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      if (pSVar2 == (System_Object_array *)0x0) goto label_181e5684c;
      if (pSVar1 != (System_String_o *)0x0) {
        pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((pSVar2->obj).klass)->_1).element_class);
        if (pIVar3 == (Il2CppObject *)0x0) {
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
      }
      if ((int)pSVar2->max_length != 0) {
        pSVar2->m_Items[0] = (Il2CppObject *)pSVar1;
        Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
        pSVar1 = UI_UIManager__GetLocaleFormatted
                           ("InGame","Chat","Help",pSVar2,
                            (MethodInfo *)0x0);
        pSVar1 = System_String__Concat_1969b70(str0,"\n",pSVar1,(MethodInfo *)0x0);
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        local_28[0].hasValue = false;
        local_28[0]._1_7_ = 0;
        local_28[0].value.fields._dateData = (System_DateTime_Fields)0;
        GameManagers_ChatManager__AddLine
                  (pSVar1,3,false,(System_Nullable_DateTime__o *)local_28,-1,false,false,-1,false,
                   (MethodInfo *)0x0);
        ApplicationManagers_SceneLoader__LoadScene(2,(MethodInfo *)0x0);
        return;
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_181e5684c:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$RegisterMainCharacterDie
// il2cpp: void GameManagers_InGameManager__RegisterMainCharacterDie (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x181e58dd0

void GameManagers_InGameManager__RegisterMainCharacterDie
               (GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *x;
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  System_String_o *key;
  bool bVar2;
  int32_t iVar3;
  Photon_Realtime_Player_o *player;
  Photon_Realtime_Player_o *player_00;
  Il2CppObject *value;
  int local_res8 [2];
  
  if (Il2CppMethodInitialized_184344e8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_184344e8b = '\x01';
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  GameManagers_InGameManager__UpdateRoundPlayerProperties((MethodInfo *)0x0);
  x = (__this->fields).CurrentCharacter;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator !=
        (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if (pCVar1 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        ThrowNullReferenceException();
      }
      if ((pCVar1->fields).DefaultAddKillScore != false) {
        if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
        }
        player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
        if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
        }
        key = TypeInfo_GameManagers_PlayerProperty->static_fields->Deaths;
        player_00 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
        iVar3 = PhotonExtensions__GetIntProperty
                          (player_00,TypeInfo_GameManagers_PlayerProperty->static_fields->Deaths,0,
                           (MethodInfo *)0x0);
        local_res8[0] = iVar3 + 1;
        value = il2cpp_value_box(g_data_184354e08,local_res8);
        PhotonExtensions__SetCustomProperty(player,key,value,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// GameManagers.InGameManager$$RegisterMainCharacterKill
// il2cpp: void GameManagers_InGameManager__RegisterMainCharacterKill (GameManagers_InGameManager_o* __this, Characters_BaseCharacter_o* victim, const MethodInfo* method);
// 0x181e58f80

void GameManagers_InGameManager__RegisterMainCharacterKill
               (GameManagers_InGameManager_o *__this,Characters_BaseCharacter_o *victim,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  Characters_BaseCharacter_c *pCVar3;
  System_String_o *key;
  longlong lVar4;
  bool bVar5;
  int32_t iVar6;
  Characters_BaseCharacter_o *pCVar7;
  GameProgress_KillMethod_o *pGVar8;
  System_Collections_Generic_Dictionary_string__object__o *__this_00;
  Photon_Realtime_Player_o *pPVar9;
  Il2CppObject *value;
  int local_res8 [2];
  GameProgress_KillMethod_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184344e8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Horse);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_184344e8c = '\x01';
  }
  pCVar2 = (__this->fields).CurrentCharacter;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar5) {
    if (victim != (Characters_BaseCharacter_o *)0x0) {
      bVar1 = (TypeInfo_Characters_Horse->_2).typeHierarchyDepth;
      if ((bVar1 <= (victim->klass->_2).typeHierarchyDepth) &&
         ((victim->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Horse)
         ) {
        return;
      }
    }
    pCVar2 = (__this->fields).CurrentCharacter;
    iVar6 = 4;
    if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
      pCVar3 = pCVar2->klass;
      bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
      if (((pCVar3->_2).typeHierarchyDepth < bVar1) ||
         ((pCVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      pCVar7 = (Characters_BaseCharacter_o *)0x0;
      if (bVar5) {
        pCVar7 = pCVar2;
      }
      if (pCVar7 == (Characters_BaseCharacter_o *)0x0) {
        bVar1 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
        if (((pCVar3->_2).typeHierarchyDepth < bVar1) ||
           ((pCVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_BasicTitan)
           ) {
          bVar1 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
          if ((bVar1 <= (pCVar3->_2).typeHierarchyDepth) &&
             ((pCVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
              (Il2CppClass *)TypeInfo_Characters_BaseShifter)) {
            iVar6 = 5;
          }
        }
        else {
          iVar6 = 6;
        }
      }
      else {
        bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
        if (((pCVar3->_2).typeHierarchyDepth < bVar1) ||
           ((pCVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
          il2cpp_codegen_raise_invalid_cast_exception(pCVar2);
        }
        lVar4 = *(longlong *)&(*(uint8_t *)((char *)pCVar2 + 0x148));
        if (lVar4 == 0) {
          ThrowNullReferenceException();
        }
        if (*(int *)(lVar4 + 0x1d0) == 1) {
          iVar6 = 1;
        }
        else if (*(int *)(lVar4 + 0x1d0) == 0) {
          iVar6 = 0;
        }
        else if (*(int *)(lVar4 + 0x1d0) == 2) {
          iVar6 = 2;
        }
        else if (*(int *)(lVar4 + 0x1d0) == 3) {
          iVar6 = 3;
        }
      }
    }
    if (victim != (Characters_BaseCharacter_o *)0x0) {
      pCVar3 = victim->klass;
      bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
      if (((pCVar3->_2).typeHierarchyDepth < bVar1) ||
         ((pCVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
        bVar1 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
        if ((bVar1 <= (pCVar3->_2).typeHierarchyDepth) &&
           ((pCVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BasicTitan)
           ) {
          pGVar8 = GameProgress_KillMethod__op_Implicit
                             ((GameProgress_KillMethod_o *)local_28,iVar6,(MethodInfo *)0x0);
          local_28[0].Weapon = (pGVar8->fields).Weapon;
          local_28[0]._4_4_ = *(undefined4 *)&(pGVar8->fields).field_0x4;
          local_28[0].Special = (pGVar8->fields).Special;
          if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
          }
          bVar1 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
          if (((victim->klass->_2).typeHierarchyDepth < bVar1) ||
             ((victim->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Characters_BasicTitan)) {
            il2cpp_codegen_raise_invalid_cast_exception(victim);
          }
          GameProgress_GameProgressManager__RegisterTitanKill
                    ((Characters_BasicTitan_o *)victim,(GameProgress_KillMethod_o *)local_28,(MethodInfo *)0x0
                    );
        }
      }
      else {
        pGVar8 = GameProgress_KillMethod__op_Implicit
                           ((GameProgress_KillMethod_o *)local_28,iVar6,(MethodInfo *)0x0);
        local_28[0].Weapon = (pGVar8->fields).Weapon;
        local_28[0]._4_4_ = *(undefined4 *)&(pGVar8->fields).field_0x4;
        local_28[0].Special = (pGVar8->fields).Special;
        if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
        }
        bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
        if (((victim->klass->_2).typeHierarchyDepth < bVar1) ||
           ((victim->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Characters_Human)) {
          il2cpp_codegen_raise_invalid_cast_exception(victim);
        }
        GameProgress_GameProgressManager__RegisterHumanKill
                  ((Characters_Human_o *)victim,(GameProgress_KillMethod_o *)local_28,(MethodInfo *)0x0);
      }
    }
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_object);
    System_Collections_Generic_Dictionary_object__object____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    key = TypeInfo_GameManagers_PlayerProperty->static_fields->Kills;
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar9 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    iVar6 = PhotonExtensions__GetIntProperty
                      (pPVar9,TypeInfo_GameManagers_PlayerProperty->static_fields->Kills,0,(MethodInfo *)0x0);
    local_res8[0] = iVar6 + 1;
    value = il2cpp_value_box(g_data_184354e08,local_res8);
    if (__this_00 == (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,(Il2CppObject *)key,value,
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    pPVar9 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    PhotonExtensions__SetCustomProperties(pPVar9,__this_00,(MethodInfo *)0x0);
  }
  return;
}


// GameManagers.InGameManager$$RegisterMainCharacterDamage
// il2cpp: void GameManagers_InGameManager__RegisterMainCharacterDamage (GameManagers_InGameManager_o* __this, Characters_BaseCharacter_o* victim, int32_t damage, const MethodInfo* method);
// 0x181e58950

void GameManagers_InGameManager__RegisterMainCharacterDamage
               (GameManagers_InGameManager_o *__this,Characters_BaseCharacter_o *victim,int32_t damage,
               MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  Characters_BaseCharacter_c *pCVar3;
  System_String_o *pSVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  int32_t iVar8;
  GameProgress_KillMethod_o *pGVar9;
  Characters_BaseCharacter_o *pCVar10;
  UnityEngine_GameObject_o *victim_00;
  System_Collections_Generic_Dictionary_string__object__o *__this_00;
  Photon_Realtime_Player_o *pPVar11;
  Il2CppObject *pIVar12;
  int local_res8 [2];
  int32_t local_48 [4];
  undefined8 local_38;
  System_String_o *pSStack_30;
  GameProgress_KillMethod_o local_28 [2];
  
  if (Il2CppMethodInitialized_184344e8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Horse);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184344e8d = '\x01';
  }
  pCVar2 = (__this->fields).CurrentCharacter;
  local_38 = 0;
  pSStack_30 = (System_String_o *)0x0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    return;
  }
  if (victim != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Characters_Horse->_2).typeHierarchyDepth;
    if ((bVar1 <= (victim->klass->_2).typeHierarchyDepth) &&
       ((victim->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Horse))
    {
      return;
    }
  }
  pGVar9 = GameProgress_KillMethod__op_Implicit(local_28,4,(MethodInfo *)0x0);
  pCVar2 = (__this->fields).CurrentCharacter;
  lVar6 = *(longlong *)&pGVar9->fields;
  pSStack_30 = (pGVar9->fields).Special;
  local_38 = lVar6;
  if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
    pCVar3 = pCVar2->klass;
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if (((pCVar3->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    pCVar10 = (Characters_BaseCharacter_o *)0x0;
    if (bVar7) {
      pCVar10 = pCVar2;
    }
    if (pCVar10 == (Characters_BaseCharacter_o *)0x0) {
      bVar1 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
      if (((pCVar3->_2).typeHierarchyDepth < bVar1) ||
         ((pCVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_BasicTitan))
      {
        bVar1 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
        if (((pCVar3->_2).typeHierarchyDepth < bVar1) ||
           ((pCVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseShifter
           )) goto label_181e58b5d;
        iVar8 = 5;
      }
      else {
        iVar8 = 6;
      }
      pGVar9 = GameProgress_KillMethod__op_Implicit(local_28,iVar8,(MethodInfo *)0x0);
      pSStack_30 = (pGVar9->fields).Special;
      local_38 = *(longlong *)&pGVar9->fields;
    }
    else {
      bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
      if (((pCVar3->_2).typeHierarchyDepth < bVar1) ||
         ((pCVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
        il2cpp_codegen_raise_invalid_cast_exception(pCVar2);
      }
      lVar5 = *(longlong *)&(*(uint8_t *)((char *)pCVar2 + 0x148));
      if (lVar5 == 0) {
        ThrowNullReferenceException();
      }
      local_38._4_4_ = (uint)((ulonglong)lVar6 >> 0x20);
      if (*(int *)(lVar5 + 0x1d0) == 1) {
        local_38 = CONCAT44(local_38._4_4_,1);
        lVar6 = local_38;
      }
      else if (*(int *)(lVar5 + 0x1d0) == 0) {
        local_38 = (ulonglong)local_38._4_4_ << 0x20;
        lVar6 = local_38;
      }
      else if (*(int *)(lVar5 + 0x1d0) == 2) {
        local_38 = CONCAT44(local_38._4_4_,2);
        lVar6 = local_38;
      }
      else if (*(int *)(lVar5 + 0x1d0) == 3) {
        local_38 = CONCAT44(local_38._4_4_,3);
        lVar6 = local_38;
      }
      local_38 = lVar6;
      if (*(int *)&(*(uint64_t *)((char *)pCVar2 + 0x170)) == 9) {
        pSStack_30 = *(System_String_o **)&(*(uint8_t *)((char *)pCVar2 + 0x178));
        Il2CppCodeGenWriteBarrier(&pSStack_30,pSStack_30);
      }
      else {
        pSStack_30 = "";
        Il2CppCodeGenWriteBarrier(&pSStack_30,"");
      }
    }
  }
label_181e58b5d:
  if (victim != (Characters_BaseCharacter_o *)0x0) {
    victim_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)victim,(MethodInfo *)0x0);
    local_28[0].fields.Special = pSStack_30;
    local_28[0].fields._0_8_ = local_38;
    if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
    }
    GameProgress_GameProgressManager__RegisterDamage(victim_00,local_28,damage,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_object);
    System_Collections_Generic_Dictionary_object__object____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    pSVar4 = TypeInfo_GameManagers_PlayerProperty->static_fields->TotalDamage;
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar11 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    iVar8 = PhotonExtensions__GetIntProperty
                      (pPVar11,TypeInfo_GameManagers_PlayerProperty->static_fields->TotalDamage,0,
                       (MethodInfo *)0x0);
    local_res8[0] = iVar8 + damage;
    pIVar12 = il2cpp_value_box(g_data_184354e08,local_res8);
    if (__this_00 != (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,(Il2CppObject *)pSVar4,
                 pIVar12,(MethodInfo_146B4B0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
      pSVar4 = TypeInfo_GameManagers_PlayerProperty->static_fields->HighestDamage;
      pPVar11 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      iVar8 = PhotonExtensions__GetIntProperty
                        (pPVar11,TypeInfo_GameManagers_PlayerProperty->static_fields->HighestDamage,0,
                         (MethodInfo *)0x0);
      local_48[0] = damage;
      if (damage < iVar8) {
        local_48[0] = iVar8;
      }
      pIVar12 = il2cpp_value_box(g_data_184354e08,local_48);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,(Il2CppObject *)pSVar4,
                 pIVar12,(MethodInfo_146B4B0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
      pPVar11 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      PhotonExtensions__SetCustomProperties(pPVar11,__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$OnPlayerEnteredRoom
// il2cpp: void GameManagers_InGameManager__OnPlayerEnteredRoom (GameManagers_InGameManager_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x181e56fc0

void GameManagers_InGameManager__OnPlayerEnteredRoom
               (GameManagers_InGameManager_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  int32_t key;
  System_Collections_Generic_Dictionary_int__ulong__o *__this_00;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  Photon_Pun_PhotonView_o *pPVar1;
  Settings_InGameSet_o *pSVar2;
  Utility_Algorithms_CompressionAlgorithm_o *__this_02;
  bool bVar3;
  GameManagers_PlayerInfo_o *__this_03;
  System_Byte_array *pSVar4;
  System_Object_array *pSVar5;
  Il2CppObject *pIVar6;
  System_String_o *str;
  
  if (Il2CppMethodInitialized_184344e8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_DataCompressors);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"GameSettingsRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"PauseGameRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"PlayerInfoRPC");
    Il2CppMethodInitialized_184344e8e = '\x01';
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                  TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo,
     __this_00 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0)) {
    bVar3 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                      (__this_00,(player->fields).actorNumber,
                       (MethodInfo_1407110 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_ContainsKey);
    if (!bVar3) {
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      key = (player->fields).actorNumber;
      __this_01 = (System_Collections_Generic_Dictionary_int__object__o *)
                  TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo;
      __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameManagers_PlayerInfo);
      GameManagers_PlayerInfo___ctor(__this_03,(MethodInfo *)0x0);
      if (__this_01 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_181e573b4;
      System_Collections_Generic_Dictionary_int__object___Add
                (__this_01,key,(Il2CppObject *)__this_03,
                 (MethodInfo_1415BA0 *)MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_Add);
    }
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    pSVar4 = GameManagers_InGameManager__SerializeMyPlayerInfo((MethodInfo *)0x0);
    pPVar1 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
    pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    if (pSVar5 != (System_Object_array *)0x0) {
      if (pSVar4 != (System_Byte_array *)0x0) {
        pIVar6 = il2cpp_vm_Object_IsInst(&pSVar4->obj,(((pSVar5->obj).klass)->_1).element_class);
        if (pIVar6 == (Il2CppObject *)0x0) {
          pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
        }
      }
      if ((int)pSVar5->max_length == 0) {
label_181e573da:
        ThrowIndexOutOfRangeException();
      }
      pSVar5->m_Items[0] = &pSVar4->obj;
      Il2CppCodeGenWriteBarrier(pSVar5->m_Items,pSVar4);
      if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC_1d4d8d0(pPVar1,"PlayerInfoRPC",player,pSVar5,(MethodInfo *)0x0);
        if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
        }
        bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
        if (!bVar3) goto label_181e5735d;
        pPVar1 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
        pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
        if ((TypeInfo_Utility_DataCompressors->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DataCompressors);
        }
        pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
        if (pSVar2 != (Settings_InGameSet_o *)0x0) {
          __this_02 = (Utility_Algorithms_CompressionAlgorithm_o *)
                      TypeInfo_Utility_DataCompressors->static_fields->Brotli;
          str = (*(pSVar2->klass->vtable)._8_SerializeToJsonString.methodPtr)
                          (pSVar2,(pSVar2->klass->vtable)._8_SerializeToJsonString.method);
          if (__this_02 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
            pSVar4 = Utility_Algorithms_CompressionAlgorithm__CompressString
                               (__this_02,str,1,(MethodInfo *)0x0);
            if (pSVar5 != (System_Object_array *)0x0) {
              if (pSVar4 != (System_Byte_array *)0x0) {
                pIVar6 = il2cpp_vm_Object_IsInst(&pSVar4->obj,(((pSVar5->obj).klass)->_1).element_class);
                if (pIVar6 == (Il2CppObject *)0x0) {
                  pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
                }
              }
              if ((int)pSVar5->max_length == 0) goto label_181e573da;
              pSVar5->m_Items[0] = &pSVar4->obj;
              Il2CppCodeGenWriteBarrier(pSVar5->m_Items,pSVar4);
              if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
                Photon_Pun_PhotonView__RPC_1d4d8d0
                          (pPVar1,"GameSettingsRPC",player,pSVar5,(MethodInfo *)0x0);
                if ((__this->fields).GlobalPause != false) {
                  pPVar1 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
                  pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
                  if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) goto label_181e573b4;
                  Photon_Pun_PhotonView__RPC_1d4d8d0
                            (pPVar1,"PauseGameRPC",player,pSVar5,(MethodInfo *)0x0);
                }
label_181e5735d:
                if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                }
                bVar3 = GameManagers_ChatManager__HasActivePlayerSuggestions((MethodInfo *)0x0);
                if (bVar3) {
                  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                  }
                  GameManagers_ChatManager__RefreshPlayerSuggestions((MethodInfo *)0x0);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
label_181e573b4:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$OnNotifyPlayerJoined
// il2cpp: void GameManagers_InGameManager__OnNotifyPlayerJoined (GameManagers_InGameManager_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x181e56d60

void GameManagers_InGameManager__OnNotifyPlayerJoined
               (GameManagers_InGameManager_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Settings_UISettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  bool bVar3;
  System_String_o *pSVar4;
  System_String_o *str1;
  System_Nullable_DateTime__Fields local_18;
  
  if (Il2CppMethodInitialized_184344e8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&" has joined the room.");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184344e8f = '\x01';
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
    if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_181e56f62;
    CustomLogic_CustomLogicEvaluator__OnPlayerJoin(__this_00,player,(MethodInfo *)0x0);
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar1 != (Settings_UISettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).JoinNotifications, pSVar2 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar2->fields)._value != false) {
      if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
      }
      pSVar4 = PhotonExtensions__GetStringProperty
                         (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,
                          "",(MethodInfo *)0x0);
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      local_18.hasValue = false;
      local_18._1_7_ = 0;
      local_18.value.fields._dateData = (System_DateTime_Fields)0;
      str1 = GameManagers_ChatManager__GetColorString(" has joined the room.",3,false,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat_1969e50(pSVar4,str1,(MethodInfo *)0x0);
      GameManagers_ChatManager__AddLine
                (pSVar4,0,false,(System_Nullable_DateTime__o *)&local_18,-1,false,false,-1,false,
                 (MethodInfo *)0x0);
    }
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    bVar3 = GameManagers_ChatManager__HasActivePlayerSuggestions((MethodInfo *)0x0);
    if (bVar3) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      GameManagers_ChatManager__RefreshPlayerSuggestions((MethodInfo *)0x0);
      return;
    }
    return;
  }
label_181e56f62:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$OnPlayerLeftRoom
// il2cpp: void GameManagers_InGameManager__OnPlayerLeftRoom (GameManagers_InGameManager_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x181e57740

void GameManagers_InGameManager__OnPlayerLeftRoom
               (GameManagers_InGameManager_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  UI_BaseMenu_o *__this_00;
  System_Collections_Generic_Dictionary_int__ulong__o *__this_01;
  System_Collections_Generic_Dictionary_int__object__o *__this_02;
  Settings_UISettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  CustomLogic_CustomLogicEvaluator_o *__this_03;
  System_Collections_Generic_HashSet_int__o *pSVar3;
  System_Collections_Generic_Dictionary_int__float__o *pSVar4;
  bool bVar5;
  UI_InGameMenu_o *pUVar6;
  System_String_o *pSVar7;
  System_String_o *str1;
  UI_ChatPanel_o *__this_04;
  System_Nullable_DateTime__Fields local_18;
  
  if (Il2CppMethodInitialized_184344e90 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_AnticheatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_float_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_float_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&" has left the room.");
    Il2CppMethodInitialized_184344e90 = '\x01';
  }
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)player);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  __this_00 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (__this_00 == (UI_BaseMenu_o *)0x0) {
label_181e57893:
    __this_04 = (UI_ChatPanel_o *)0x0;
  }
  else {
    pUVar6 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this_00,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_InGameMenu);
    if (pUVar6 == (UI_InGameMenu_o *)0x0) goto label_181e57893;
    __this_04 = (pUVar6->fields).ChatPanel;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    if (__this_04 == (UI_ChatPanel_o *)0x0) goto label_181e57d3d;
    UI_ChatPanel__RemovePMPartner(__this_04,player,(MethodInfo *)0x0);
    UI_ChatPanel__Sync(__this_04,(MethodInfo *)0x0);
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (__this_01 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                  TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo,
     __this_01 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0)) {
    bVar5 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                      (__this_01,(player->fields).actorNumber,
                       (MethodInfo_1407110 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_ContainsKey);
    if (bVar5) {
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      __this_02 = (System_Collections_Generic_Dictionary_int__object__o *)
                  TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo;
      if (__this_02 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_181e57d3d;
      System_Collections_Generic_Dictionary_int__object___Remove
                (__this_02,(player->fields).actorNumber,
                 (MethodInfo_1419B90 *)MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_Remove)
      ;
    }
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if ((pSVar1 != (Settings_UISettings_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).JoinNotifications, pSVar2 != (Settings_BoolSetting_o *)0x0)) {
      if ((pSVar2->fields)._value != false) {
        if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
        }
        pSVar7 = PhotonExtensions__GetStringProperty
                           (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,
                            "",(MethodInfo *)0x0);
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        local_18.hasValue = false;
        local_18._1_7_ = 0;
        local_18.value.fields._dateData = (System_DateTime_Fields)0;
        str1 = GameManagers_ChatManager__GetColorString(" has left the room.",3,false,(MethodInfo *)0x0);
        pSVar7 = System_String__Concat_1969e50(pSVar7,str1,(MethodInfo *)0x0);
        GameManagers_ChatManager__AddLine
                  (pSVar7,0,false,(System_Nullable_DateTime__o *)&local_18,-1,false,false,-1,false,
                   (MethodInfo *)0x0);
      }
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator !=
          (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        __this_03 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
        if (__this_03 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_181e57d3d;
        CustomLogic_CustomLogicEvaluator__OnPlayerLeave(__this_03,player,(MethodInfo *)0x0);
      }
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      pSVar3 = TypeInfo_GameManagers_InGameManager->static_fields->MuteEmote;
      if (pSVar3 != (System_Collections_Generic_HashSet_int__o *)0x0) {
        bVar5 = System_Collections_Generic_HashSet_Int32Enum___Contains
                          ((System_Collections_Generic_HashSet_T__o *)pSVar3,(player->fields).actorNumber,
                           (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
        if (bVar5) {
          if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
          }
          pSVar3 = TypeInfo_GameManagers_InGameManager->static_fields->MuteEmote;
          if (pSVar3 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_181e57d3d;
          System_Collections_Generic_HashSet_Int32Enum___Remove
                    ((System_Collections_Generic_HashSet_T__o *)pSVar3,(player->fields).actorNumber,
                     (MethodInfo_17666A0 *)MethodInfo_System_Collections_Generic_HashSet_int_Remove);
        }
        if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
        }
        pSVar3 = TypeInfo_GameManagers_InGameManager->static_fields->MuteText;
        if (pSVar3 != (System_Collections_Generic_HashSet_int__o *)0x0) {
          bVar5 = System_Collections_Generic_HashSet_Int32Enum___Contains
                            ((System_Collections_Generic_HashSet_T__o *)pSVar3,(player->fields).actorNumber,
                             (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains)
          ;
          if (bVar5) {
            if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
            }
            pSVar3 = TypeInfo_GameManagers_InGameManager->static_fields->MuteText;
            if (pSVar3 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_181e57d3d;
            System_Collections_Generic_HashSet_Int32Enum___Remove
                      ((System_Collections_Generic_HashSet_T__o *)pSVar3,(player->fields).actorNumber,
                       (MethodInfo_17666A0 *)MethodInfo_System_Collections_Generic_HashSet_int_Remove);
          }
          if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
          }
          pSVar3 = TypeInfo_GameManagers_InGameManager->static_fields->MuteVoiceChat;
          if (pSVar3 != (System_Collections_Generic_HashSet_int__o *)0x0) {
            bVar5 = System_Collections_Generic_HashSet_Int32Enum___Contains
                              ((System_Collections_Generic_HashSet_T__o *)pSVar3,(player->fields).actorNumber,
                               (MethodInfo_1759C90 *)
                               MethodInfo_System_Collections_Generic_HashSet_int_Contains);
            if (bVar5) {
              if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
              }
              pSVar3 = TypeInfo_GameManagers_InGameManager->static_fields->MuteVoiceChat;
              if (pSVar3 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_181e57d3d;
              System_Collections_Generic_HashSet_Int32Enum___Remove
                        ((System_Collections_Generic_HashSet_T__o *)pSVar3,(player->fields).actorNumber,
                         (MethodInfo_17666A0 *)MethodInfo_System_Collections_Generic_HashSet_int_Remove);
            }
            if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
            }
            pSVar4 = TypeInfo_GameManagers_InGameManager->static_fields->VoiceChatVolumeMultiplier;
            if (pSVar4 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
              bVar5 = System_Collections_Generic_Dictionary_int__float___ContainsKey
                                (pSVar4,(player->fields).actorNumber,
                                 (MethodInfo_14070E0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_int_float_ContainsKey);
              if (bVar5) {
                if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
                }
                pSVar4 = TypeInfo_GameManagers_InGameManager->static_fields->VoiceChatVolumeMultiplier;
                if (pSVar4 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) goto label_181e57d3d;
                System_Collections_Generic_Dictionary_int__float___Remove
                          (pSVar4,(player->fields).actorNumber,
                           (MethodInfo_140B8F0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_float_Remove);
              }
              if ((TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager);
              }
              Anticheat_AnticheatManager__ResetVoteKicks(player,(MethodInfo *)0x0);
              if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
              }
              bVar5 = GameManagers_ChatManager__HasActivePlayerSuggestions((MethodInfo *)0x0);
              if (bVar5) {
                if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                }
                GameManagers_ChatManager__RefreshPlayerSuggestions((MethodInfo *)0x0);
              }
              return;
            }
          }
        }
      }
    }
  }
label_181e57d3d:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$OnMasterClientSwitched
// il2cpp: void GameManagers_InGameManager__OnMasterClientSwitched (GameManagers_InGameManager_o* __this, Photon_Realtime_Player_o* newMasterClient, const MethodInfo* method);
// 0x181e56b00

void GameManagers_InGameManager__OnMasterClientSwitched
               (GameManagers_InGameManager_o *__this,Photon_Realtime_Player_o *newMasterClient,
               MethodInfo *method)

{
  bool bVar1;
  System_Object_array *args;
  System_String_o *pSVar2;
  Il2CppObject *pIVar3;
  System_Nullable_DateTime__Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184344e91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"InGame");
    il2cpp_codegen_initialize_runtime_metadata(&"MasterclientChangeTo");
    il2cpp_codegen_initialize_runtime_metadata(&"Chat");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184344e91 = '\x01';
  }
  args = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar2 = PhotonExtensions__GetStringProperty
                     (newMasterClient,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,
                      "",(MethodInfo *)0x0);
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (pSVar2 != (System_String_o *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((args->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) {
      pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
    }
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = (Il2CppObject *)pSVar2;
    Il2CppCodeGenWriteBarrier(args->m_Items,pSVar2);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar2 = UI_UIManager__GetLocaleFormatted
                       ("InGame","Chat","MasterclientChangeTo",args,
                        (MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    local_28[0].hasValue = false;
    local_28[0]._1_7_ = 0;
    local_28[0].value.fields._dateData = (System_DateTime_Fields)0;
    GameManagers_ChatManager__AddLine
              (pSVar2,3,false,(System_Nullable_DateTime__o *)local_28,-1,false,false,-1,false,
               (MethodInfo *)0x0);
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    CustomLogic_CustomLogicManager__WaitForRestart((MethodInfo *)0x0);
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      GameManagers_InGameManager__RestartGame((MethodInfo *)0x0);
    }
    return;
  }
  ThrowIndexOutOfRangeException();
}


// GameManagers.InGameManager$$OnPlayerInfoRPC
// il2cpp: void GameManagers_InGameManager__OnPlayerInfoRPC (System_Byte_array* data, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e573e0
// eh: try 0x181e57555..0x181e5773b -> pad 0x183336110 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 35 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e57713: add rsp, 0x40
// asm:   0x181e57717: pop r15
// asm:   0x181e57719: pop r14
// asm:   0x181e5771b: pop rdi
// asm:   0x181e5771c: pop rsi
// asm:   0x181e5771d: pop rbx
// asm:   0x181e5771e: ret 
// asm:   0x183336110: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183336115: push rbx
// asm:   0x183336116: push rbp
// asm:   0x183336117: push rdi
// asm:   0x183336118: sub rsp, 0x30
// asm:   0x18333611c: mov rbp, rdx
// asm:   0x18333611f: mov rdi, qword ptr [rbp + 0x38]
// asm:   0x183336123: mov rax, qword ptr [rdi]
// asm:   0x183336126: mov rbx, qword ptr [rax]
// asm:   0x183336129: lea rcx, [rip + 0xd42e28]  ; TypeInfo_System_Exception
// asm:   0x183336130: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x183336135: mov rcx, rax
// asm:   0x183336138: mov rdx, rbx
// asm:   0x18333613b: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183336140: test al, al
// asm:   0x183336142: je 0x183336150
// asm:   0x183336144: movabs rax, 0
// asm:   0x18333614e: jmp 0x183336168
// asm:   0x183336150: mov rax, qword ptr [rdi]
// asm:   0x183336153: mov qword ptr [rbp + 0x30], rax
// asm:   0x183336157: lea rdx, [rip + 0xca5e2a]
// asm:   0x18333615e: lea rcx, [rbp + 0x30]
// asm:   0x183336162: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x183336168: add rsp, 0x30
// asm:   0x18333616c: pop rdi
// asm:   0x18333616d: pop rbp
// asm:   0x18333616e: pop rbx
// asm:   0x18333616f: ret 

void GameManagers_InGameManager__OnPlayerInfoRPC
               (System_Byte_array *data,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  int32_t iVar1;
  Photon_Realtime_Player_o *pPVar2;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar3;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  Utility_Algorithms_CompressionAlgorithm_o *__this_00;
  System_Collections_Generic_HashSet_object__o *__this_01;
  longlong lVar4;
  bool bVar5;
  GameManagers_PlayerInfo_o *__this_02;
  longlong *plVar6;
  System_String_o *pSVar7;
  uint64_t uVar8;
  
  if (Il2CppMethodInitialized_184344e92 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_AnticheatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_DataCompressors);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184344e92 = '\x01';
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  pPVar2 = (info->fields).Sender;
  if ((pPVar2 == (Photon_Realtime_Player_o *)0x0) ||
     (pSVar3 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo,
     pSVar3 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0)) goto label_181e5771f;
  bVar5 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                    (pSVar3,(pPVar2->fields).actorNumber,
                     (MethodInfo_1407110 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_ContainsKey);
  if (!bVar5) {
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    pPVar2 = (info->fields).Sender;
    if (pPVar2 == (Photon_Realtime_Player_o *)0x0) goto label_181e5771f;
    __this = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo;
    iVar1 = (pPVar2->fields).actorNumber;
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameManagers_PlayerInfo);
    GameManagers_PlayerInfo___ctor(__this_02,(MethodInfo *)0x0);
    if (__this == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_181e5771f;
    System_Collections_Generic_Dictionary_int__object___Add
              (__this,iVar1,(Il2CppObject *)__this_02,
               (MethodInfo_1415BA0 *)MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_Add);
  }
  if ((data == (System_Byte_array *)0x0) || (0x4000 < (int)data->max_length)) {
    return;
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  pPVar2 = (info->fields).Sender;
  if (pPVar2 == (Photon_Realtime_Player_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar3 = (System_Collections_Generic_Dictionary_int__ulong__o *)
           TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo;
  if (pSVar3 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
    ThrowNullReferenceException();
  }
  plVar6 = (longlong *)
           System_Collections_Generic_Dictionary_int__ulong___get_Item
                     (pSVar3,(pPVar2->fields).actorNumber,
                      (MethodInfo_14156F0 *)
                      MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_get_Item);
  if ((TypeInfo_Utility_DataCompressors->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DataCompressors);
  }
  __this_00 = (Utility_Algorithms_CompressionAlgorithm_o *)
              TypeInfo_Utility_DataCompressors->static_fields->Brotli;
  if (__this_00 == (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar7 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                     (__this_00,data,0x1000,0xa00000,(MethodInfo *)0x0);
  if (plVar6 == (longlong *)0x0) {
    ThrowNullReferenceException();
  }
  (**(code **)(*plVar6 + 0x1c8))(plVar6,pSVar7,*(undefined8 *)(*plVar6 + 0x1d0));
  pPVar2 = (info->fields).Sender;
  if (pPVar2 != (Photon_Realtime_Player_o *)0x0) {
    iVar1 = (pPVar2->fields).actorNumber;
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    GameManagers_InGameManager__NotifyPlayerInfoUpdated(iVar1,(MethodInfo *)0x0);
    if ((TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager);
    }
    pPVar2 = (info->fields).Sender;
    if ((pPVar2 != (Photon_Realtime_Player_o *)0x0) &&
       (pSVar3 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                 TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo,
       pSVar3 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0)) {
      __this_01 = (System_Collections_Generic_HashSet_object__o *)
                  TypeInfo_Anticheat_AnticheatManager->static_fields->BanList;
      uVar8 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                        (pSVar3,(pPVar2->fields).actorNumber,
                         (MethodInfo_14156F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_get_Item);
      if ((uVar8 != 0) &&
         (((*(longlong *)(uVar8 + 0x30) != 0 &&
           (lVar4 = *(longlong *)(*(longlong *)(uVar8 + 0x30) + 0x80), lVar4 != 0)) &&
          (__this_01 != (System_Collections_Generic_HashSet_object__o *)0x0)))) {
        bVar5 = System_Collections_Generic_HashSet_object___Contains
                          (__this_01,*(Il2CppObject **)(lVar4 + 0x20),
                           (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains
                          );
        if (!bVar5) {
          return;
        }
        if ((TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager);
        }
        Anticheat_AnticheatManager__KickPlayer
                  ((info->fields).Sender,false,"",(MethodInfo *)0x0);
        return;
      }
    }
  }
label_181e5771f:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$OnGameSettingsRPC
// il2cpp: void GameManagers_InGameManager__OnGameSettingsRPC (System_Byte_array* data, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e56140

void GameManagers_InGameManager__OnGameSettingsRPC
               (System_Byte_array *data,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  Photon_Realtime_Player_o *__this;
  Settings_InGameSet_o *pSVar3;
  Settings_InGameMiscSettings_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  System_String_o *original;
  Utility_Algorithms_CompressionAlgorithm_o *__this_00;
  Settings_InGameSet_c *pSVar6;
  GameManagers_BaseGameManager_o *pGVar7;
  Settings_BoolSetting_o *pSVar8;
  Photon_Pun_UtilityScripts_OnClickRpc_o *__this_01;
  Settings_FloatSetting_o *pSVar9;
  bool bVar10;
  System_String_o *pSVar11;
  Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *__this_02;
  
  if (Il2CppMethodInitialized_184344e93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_DataCompressors);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_VoiceChatManager);
    Il2CppMethodInitialized_184344e93 = '\x01';
  }
  __this = (info->fields).Sender;
  if (__this != (Photon_Realtime_Player_o *)0x0) {
    bVar10 = Photon_Realtime_Player__get_IsMasterClient(__this,(MethodInfo *)0x0);
    if (!bVar10) {
      return;
    }
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
    if (((pSVar3 != (Settings_InGameSet_o *)0x0) &&
        (pSVar4 = (pSVar3->fields).Misc, pSVar4 != (Settings_InGameMiscSettings_o *)0x0)) &&
       (pSVar5 = (pSVar4->fields).Motd, pSVar5 != (Settings_StringSetting_o *)0x0)) {
      original = (pSVar5->fields)._value;
      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
      if ((TypeInfo_Utility_DataCompressors->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DataCompressors);
      }
      __this_00 = (Utility_Algorithms_CompressionAlgorithm_o *)
                  TypeInfo_Utility_DataCompressors->static_fields->Brotli;
      if (__this_00 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
        pSVar11 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                            (__this_00,data,0x1000,0xa00000,(MethodInfo *)0x0);
        pSVar6 = pSVar3->klass;
        (*(pSVar6->vtable)._9_DeserializeFromJsonString.methodPtr)
                  (pSVar3,pSVar11,(pSVar6->vtable)._9_DeserializeFromJsonString.method);
        pGVar7 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
        if (pGVar7 != (GameManagers_BaseGameManager_o *)0x0) {
          bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
          if (((pGVar7->klass->_2).typeHierarchyDepth < bVar2) ||
             ((pGVar7->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
              (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
            il2cpp_codegen_raise_invalid_cast_exception(pGVar7,TypeInfo_GameManagers_InGameManager);
          }
          *(undefined1 *)&(*(uint64_t *)((char *)pGVar7 + 0x80)) = 1;
          if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
          }
          GameManagers_InGameManager__PrintMOTD(original,(MethodInfo *)0x0);
          if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager);
          }
          ApplicationManagers_VoiceChatManager__ApplySoundSettings((MethodInfo *)0x0);
          pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
          if (((pSVar3 != (Settings_InGameSet_o *)0x0) &&
              (pSVar4 = (pSVar3->fields).Misc, pSVar4 != (Settings_InGameMiscSettings_o *)0x0)) &&
             (pSVar8 = (pSVar4->fields).EndlessRespawnEnabled, pSVar8 != (Settings_BoolSetting_o *)0x0)) {
            if ((pSVar8->fields)._value == false) {
              return;
            }
            __this_01 = (Photon_Pun_UtilityScripts_OnClickRpc_o *)
                        TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
            if (__this_01 != (Photon_Pun_UtilityScripts_OnClickRpc_o *)0x0) {
              bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
              if (((((GameManagers_BaseGameManager_c *)__this_01->klass)->_2).typeHierarchyDepth < bVar2) ||
                 ((((GameManagers_BaseGameManager_c *)__this_01->klass)->_2).typeHierarchy
                  [(ulonglong)bVar2 - 1] != (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
                il2cpp_codegen_raise_invalid_cast_exception(__this_01);
              }
            }
            pSVar9 = (((TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent->fields).Misc)->fields
                     ).EndlessRespawnTime;
            if ((pSVar9 != (Settings_FloatSetting_o *)0x0) &&
               (__this_01 != (Photon_Pun_UtilityScripts_OnClickRpc_o *)0x0)) {
              fVar1 = (pSVar9->fields)._value;
              if (Il2CppMethodInitialized_184344e97 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_GameManagers_InGameManager_RespawnForever_d__67);
                Il2CppMethodInitialized_184344e97 = '\x01';
              }
              __this_02 = (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)
                          il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_GameManagers_InGameManager_RespawnForever_d__67);
              GameManagers_InGameManager__RespawnForever_d__67___ctor(__this_02,0,(MethodInfo *)0x0);
              if (__this_02 != (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)0x0) {
                (__this_02->fields).__4__this = __this_01;
                Il2CppCodeGenWriteBarrier(&(__this_02->fields).__4__this,__this_01);
                *(float *)&(__this_02->fields)._wasEmissive_5__2 = fVar1;
                UnityEngine_MonoBehaviour__StartCoroutine_Auto
                          ((UnityEngine_MonoBehaviour_o *)__this_01,
                           (System_Collections_IEnumerator_o *)__this_02,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$OnCharacterChosen
// il2cpp: void GameManagers_InGameManager__OnCharacterChosen (const MethodInfo* method);
// 0x181e55ab0

void GameManagers_InGameManager__OnCharacterChosen(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344e94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_184344e94 = '\x01';
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  GameManagers_InGameManager__ResetRespawnTimeLeft((MethodInfo *)0x0);
  return;
}


// GameManagers.InGameManager$$OnLocalPlayerDied
// il2cpp: void GameManagers_InGameManager__OnLocalPlayerDied (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x181e56ac0

void GameManagers_InGameManager__OnLocalPlayerDied(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344e95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_184344e95 = '\x01';
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  GameManagers_InGameManager__ResetRespawnTimeLeft((MethodInfo *)0x0);
  return;
}


// GameManagers.InGameManager$$ResetRespawnTimeLeft
// il2cpp: void GameManagers_InGameManager__ResetRespawnTimeLeft (const MethodInfo* method);
// 0x181e59de0

void GameManagers_InGameManager__ResetRespawnTimeLeft(MethodInfo *method)

{
  byte bVar1;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameMiscSettings_o *pSVar3;
  Settings_FloatSetting_o *pSVar4;
  GameManagers_BaseGameManager_o *pGVar5;
  
  if (Il2CppMethodInitialized_184344e96 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_184344e96 = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if ((((pSVar2 != (Settings_InGameSet_o *)0x0) &&
       (pSVar3 = (pSVar2->fields).Misc, pSVar3 != (Settings_InGameMiscSettings_o *)0x0)) &&
      (pSVar4 = (pSVar3->fields).EndlessRespawnTime, pSVar4 != (Settings_FloatSetting_o *)0x0)) &&
     (pGVar5 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager,
     pGVar5 != (GameManagers_BaseGameManager_o *)0x0)) {
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if ((bVar1 <= (pGVar5->klass->_2).typeHierarchyDepth) &&
       ((pGVar5->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      *(float *)&(*(uint64_t *)((char *)pGVar5 + 0x88)) = (pSVar4->fields)._value;
      return;
    }
    il2cpp_codegen_raise_invalid_cast_exception(pGVar5);
  }
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$RespawnForever
// il2cpp: System_Collections_IEnumerator_o* GameManagers_InGameManager__RespawnForever (GameManagers_InGameManager_o* __this, float delay, const MethodInfo* method);
// 0x181e5a220

System_Collections_IEnumerator_o *
GameManagers_InGameManager__RespawnForever
          (GameManagers_InGameManager_o *__this,float delay,MethodInfo *method)

{
  Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *__this_00;
  
  if (Il2CppMethodInitialized_184344e97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager_RespawnForever_d__67);
    Il2CppMethodInitialized_184344e97 = '\x01';
  }
  __this_00 = (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameManagers_InGameManager_RespawnForever_d__67);
  GameManagers_InGameManager__RespawnForever_d__67___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)0x0) {
    (__this_00->fields).__4__this = (Photon_Pun_UtilityScripts_OnClickRpc_o *)__this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
    *(float *)&(__this_00->fields)._wasEmissive_5__2 = delay;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$SpawnPlayer
// il2cpp: void GameManagers_InGameManager__SpawnPlayer (GameManagers_InGameManager_o* __this, bool force, const MethodInfo* method);
// 0x181e5d2e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e5d592: mov rbx, qword ptr [rsp + 0xe0]

void GameManagers_InGameManager__SpawnPlayer
               (GameManagers_InGameManager_o *__this,bool force,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CustomLogic_CustomLogicEvaluator_o *pCVar5;
  Settings_InGameCharacterSettings_o *pSVar6;
  Settings_StringSetting_o *pSVar7;
  System_String_o *a;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  Photon_Realtime_Player_o *pPVar12;
  System_ValueTuple_Vector3__Quaternion__o *pSVar13;
  UnityEngine_Vector3_o *pUVar14;
  UnityEngine_Vector3_Fields *position;
  float fVar15;
  UnityEngine_Vector3_Fields local_a8;
  UnityEngine_Vector3_Fields local_98;
  UnityEngine_Vector3_o local_88;
  UnityEngine_Vector3_Fields local_78;
  float fStack_6c;
  float fStack_68;
  undefined8 uStack_64;
  UnityEngine_Quaternion_Fields local_58;
  UnityEngine_Quaternion_Fields local_48;
  System_ValueTuple_Vector3__Quaternion__o local_38;
  
  if (Il2CppMethodInitialized_184344e98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_184344e98 = '\x01';
  }
  local_48.x = 0.0;
  local_48.y = 0.0;
  local_48.z = 0.0;
  local_48.w = 0.0;
  local_58.x = 0.0;
  local_58.y = 0.0;
  local_58.z = 0.0;
  local_58.w = 0.0;
  bVar10 = (*(__this->klass->vtable)._56_IsFinishedLoading.methodPtr)
                     (__this,(__this->klass->vtable)._56_IsFinishedLoading.method);
  if (bVar10) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar5 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if (pCVar5 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_181e5d694;
    bVar10 = System_String__op_Inequality
                       ((pCVar5->fields).ForcedCharacterType,
                        (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
    if (bVar10) {
      pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
      if (pSVar6 == (Settings_InGameCharacterSettings_o *)0x0) goto label_181e5d694;
      pSVar7 = (pSVar6->fields).CharacterType;
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pCVar5 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if ((pCVar5 == (CustomLogic_CustomLogicEvaluator_o *)0x0) || (pSVar7 == (Settings_StringSetting_o *)0x0)
         ) goto label_181e5d694;
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar7,(Il2CppObject *)(pCVar5->fields).ForcedCharacterType,
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    }
    pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
    if ((pSVar6 == (Settings_InGameCharacterSettings_o *)0x0) ||
       (pSVar7 = (pSVar6->fields).CharacterType, pSVar7 == (Settings_StringSetting_o *)0x0)) {
label_181e5d694:
      ThrowNullReferenceException();
    }
    a = (pSVar7->fields)._value;
    if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
    }
    bVar10 = System_String__op_Equality
                       (a,TypeInfo_GameManagers_PlayerCharacter->static_fields->Human,(MethodInfo *)0x0);
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar12 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    bVar11 = PhotonExtensions__HasSpawnPoint(pPVar12,(MethodInfo *)0x0);
    if (bVar11) {
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar12 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      pUVar14 = PhotonExtensions__GetSpawnPoint(&local_88,pPVar12,(MethodInfo *)0x0);
      local_a8.x = (pUVar14->fields).x;
      local_a8.y = (pUVar14->fields).y;
      local_a8.z = (pUVar14->fields).z;
      GameManagers_InGameManager__SpawnPlayerAt
                (__this,force,(UnityEngine_Vector3_o *)&local_a8,0.0,(MethodInfo *)0x0);
    }
    else {
      if (bVar10) {
        pSVar13 = GameManagers_InGameManager__GetHumanSpawnPoint(&local_38,__this,(MethodInfo *)0x0);
        uVar9._0_4_ = (pSVar13->fields).Item1.fields.x;
        uVar9._4_4_ = (pSVar13->fields).Item1.fields.y;
        local_48.x = (pSVar13->fields).Item2.fields.x;
        local_48.y = (pSVar13->fields).Item2.fields.y;
        uStack_64._0_4_ = (pSVar13->fields).Item2.fields.z;
        uStack_64._4_4_ = (pSVar13->fields).Item2.fields.w;
        local_78.z = (float)*(undefined8 *)&(pSVar13->fields).Item1.fields.z;
        fVar15 = local_78.z;
        local_78._0_8_ = uVar9;
        fStack_6c = local_48.x;
        fStack_68 = local_48.y;
        local_48._8_8_ = uStack_64;
        pUVar14 = UnityEngine_Quaternion__Internal_ToEulerRad
                            (&local_88,(UnityEngine_Quaternion_o *)&local_48,(MethodInfo *)0x0);
        local_98.z = fVar15;
        uVar2 = (pUVar14->fields).x;
        uVar4 = (pUVar14->fields).y;
        local_a8.x = (float)uVar2 * 57.29578;
        local_a8.y = (float)uVar4 * 57.29578;
        local_a8.z = (pUVar14->fields).z * 57.29578;
        local_98._0_8_ = uVar9;
        pUVar14 = UnityEngine_Quaternion__Internal_MakePositive
                            (&local_88,(UnityEngine_Vector3_o *)&local_a8,(MethodInfo *)0x0);
        position = &local_98;
        fVar15 = (pUVar14->fields).y;
      }
      else {
        pSVar13 = GameManagers_InGameManager__GetTitanSpawnPoint(&local_38,__this,(MethodInfo *)0x0);
        uVar8._0_4_ = (pSVar13->fields).Item1.fields.x;
        uVar8._4_4_ = (pSVar13->fields).Item1.fields.y;
        local_58.x = (pSVar13->fields).Item2.fields.x;
        local_58.y = (pSVar13->fields).Item2.fields.y;
        uStack_64._0_4_ = (pSVar13->fields).Item2.fields.z;
        uStack_64._4_4_ = (pSVar13->fields).Item2.fields.w;
        local_78.z = (float)*(undefined8 *)&(pSVar13->fields).Item1.fields.z;
        fVar15 = local_78.z;
        local_78._0_8_ = uVar8;
        fStack_6c = local_58.x;
        fStack_68 = local_58.y;
        local_58._8_8_ = uStack_64;
        pUVar14 = UnityEngine_Quaternion__Internal_ToEulerRad
                            ((UnityEngine_Vector3_o *)&local_a8,(UnityEngine_Quaternion_o *)&local_58,
                             (MethodInfo *)0x0);
        uVar1 = (pUVar14->fields).x;
        uVar3 = (pUVar14->fields).y;
        local_98.x = (float)uVar1 * 57.29578;
        local_98.y = (float)uVar3 * 57.29578;
        local_98.z = (pUVar14->fields).z * 57.29578;
        local_a8.z = fVar15;
        local_a8._0_8_ = uVar8;
        pUVar14 = UnityEngine_Quaternion__Internal_MakePositive
                            (&local_88,(UnityEngine_Vector3_o *)&local_98,(MethodInfo *)0x0);
        position = &local_a8;
        fVar15 = (pUVar14->fields).y;
      }
      GameManagers_InGameManager__SpawnPlayerAt
                (__this,force,(UnityEngine_Vector3_o *)position,fVar15,(MethodInfo *)0x0);
    }
  }
  return;
}


// GameManagers.InGameManager$$SpawnPlayerShifterAt
// il2cpp: void GameManagers_InGameManager__SpawnPlayerShifterAt (GameManagers_InGameManager_o* __this, System_String_o* shifterName, float liveTime, UnityEngine_Vector3_o position, float rotationY, const MethodInfo* method);
// 0x181e5cea0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e5d063: mov rbx, r8
// asm:   0x181e5d066: jmp 0x181e5d18a
// asm:   0x181e5d0fa: jmp 0x181e5d18a

void GameManagers_InGameManager__SpawnPlayerShifterAt
               (GameManagers_InGameManager_o *__this,System_String_o *shifterName,float liveTime,
               UnityEngine_Vector3_o *position,float rotationY,MethodInfo *method)

{
  byte bVar1;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameMiscSettings_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  UnityEngine_Quaternion_o *pUVar8;
  Characters_BaseCharacter_o *pCVar9;
  Characters_BaseCharacter_o *__this_00;
  System_String_o *pSVar10;
  UnityEngine_Vector3_o local_48;
  UnityEngine_Quaternion_Fields local_38 [3];
  
  if (Il2CppMethodInitialized_184344e99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSpecials);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Eren");
    il2cpp_codegen_initialize_runtime_metadata(&"Annie");
    il2cpp_codegen_initialize_runtime_metadata(&"Armored");
    Il2CppMethodInitialized_184344e99 = '\x01';
  }
  local_48.fields.z = 0.0;
  local_48.fields._0_8_ = (ulonglong)(uint)(rotationY * 0.017453292) << 0x20;
  pUVar8 = UnityEngine_Quaternion__Internal_FromEulerRad
                     ((UnityEngine_Quaternion_o *)local_38,&local_48,(MethodInfo *)0x0);
  uVar5._0_4_ = (pUVar8->fields).x;
  uVar5._4_4_ = (pUVar8->fields).y;
  uVar6._0_4_ = (pUVar8->fields).z;
  uVar6._4_4_ = (pUVar8->fields).w;
  bVar7 = System_String__op_Equality(shifterName,"Annie",(MethodInfo *)0x0);
  if (bVar7) {
    if ((TypeInfo_Characters_CharacterPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterPrefabs);
    }
    local_48.fields.x = (position->fields).x;
    local_48.fields.y = (position->fields).y;
    local_48.fields.z = (position->fields).z;
    local_38[0]._0_8_ = uVar5;
    local_38[0]._8_8_ = uVar6;
    __this_00 = Characters_CharacterSpawner__Spawn
                          (TypeInfo_Characters_CharacterPrefabs->static_fields->AnnieShifter,&local_48,
                           (UnityEngine_Quaternion_o *)local_38,(MethodInfo *)0x0);
    if (__this_00 != (Characters_BaseCharacter_o *)0x0) {
      bVar1 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
      if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Characters_BaseShifter)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_00);
      }
    }
  }
  else {
    bVar7 = System_String__op_Equality(shifterName,"Eren",(MethodInfo *)0x0);
    if (bVar7) {
      if ((TypeInfo_Characters_CharacterPrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterPrefabs);
      }
      local_48.fields.x = (position->fields).x;
      local_48.fields.y = (position->fields).y;
      local_48.fields.z = (position->fields).z;
      local_38[0]._0_8_ = uVar5;
      local_38[0]._8_8_ = uVar6;
      __this_00 = Characters_CharacterSpawner__Spawn
                            (TypeInfo_Characters_CharacterPrefabs->static_fields->ErenShifter,&local_48,
                             (UnityEngine_Quaternion_o *)local_38,(MethodInfo *)0x0);
      if (__this_00 != (Characters_BaseCharacter_o *)0x0) {
        bVar1 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
        if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
           ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Characters_BaseShifter)) {
          il2cpp_codegen_raise_invalid_cast_exception(__this_00);
        }
      }
    }
    else {
      bVar7 = System_String__op_Equality(shifterName,"Armored",(MethodInfo *)0x0);
      __this_00 = (Characters_BaseCharacter_o *)0x0;
      if (bVar7) {
        if ((TypeInfo_Characters_CharacterPrefabs->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterPrefabs);
        }
        local_48.fields.x = (position->fields).x;
        local_48.fields.y = (position->fields).y;
        local_48.fields.z = (position->fields).z;
        local_38[0]._0_8_ = uVar5;
        local_38[0]._8_8_ = uVar6;
        pCVar9 = Characters_CharacterSpawner__Spawn
                           (TypeInfo_Characters_CharacterPrefabs->static_fields->ArmoredShifter,&local_48,
                            (UnityEngine_Quaternion_o *)local_38,(MethodInfo *)0x0);
        if (pCVar9 != (Characters_BaseCharacter_o *)0x0) {
          bVar1 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
          if (((pCVar9->klass->_2).typeHierarchyDepth < bVar1) ||
             (__this_00 = pCVar9,
             (pCVar9->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
             (Il2CppClass *)TypeInfo_Characters_BaseShifter)) {
            il2cpp_codegen_raise_invalid_cast_exception(pCVar9);
          }
        }
      }
    }
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
    }
    pSVar10 = Characters_HumanSpecials__GetSpecialIcon(shifterName,(MethodInfo *)0x0);
    if (__this_00 != (Characters_BaseCharacter_o *)0x0) {
      *(System_String_o **)&(*(uint32_t *)((char *)__this_00 + 0x2b8)) = pSVar10;
      Il2CppCodeGenWriteBarrier((void **)&(*(uint32_t *)((char *)__this_00 + 0x2b8)),pSVar10);
      pSVar10 = GameManagers_InGameManager__GetPlayerTeam(__this,false,(MethodInfo *)0x0);
      (*(code *)((Il2CppClass *)__this_00->klass)->vtable[203].methodPtr)
                (__this_00,0,pSVar10,0,liveTime,
                 ((Il2CppClass *)__this_00->klass)->vtable[203].method);
      (__this->fields).CurrentCharacter = __this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).CurrentCharacter,__this_00);
      pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
      if (((pSVar2 != (Settings_InGameSet_o *)0x0) &&
          (pSVar3 = (pSVar2->fields).Misc, pSVar3 != (Settings_InGameMiscSettings_o *)0x0)) &&
         (pSVar4 = (pSVar3->fields).ShifterHealth, pSVar4 != (Settings_IntSetting_o *)0x0)) {
        if ((pSVar4->fields)._value < 1) {
          return;
        }
        Characters_BaseCharacter__SetHealth
                  (__this_00,
                   (((((TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent->fields).Misc)->fields
                     ).ShifterHealth)->fields)._value,(MethodInfo *)0x0);
        return;
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// GameManagers.InGameManager$$GetSetHumanSettings
// il2cpp: Settings_InGameCharacterSettings_o* GameManagers_InGameManager__GetSetHumanSettings (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x181e54a40

Settings_InGameCharacterSettings_o *
GameManagers_InGameManager__GetSetHumanSettings(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameCharacterSettings_o *pSVar2;
  Settings_InGameMiscSettings_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  bool bVar6;
  System_Collections_Generic_List_string__o *pSVar7;
  System_String_o *pSVar8;
  
  if (Il2CppMethodInitialized_184344e9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSpecials);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_184344e9a = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (pSVar1 != (Settings_InGameSet_o *)0x0) {
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
    pSVar3 = (pSVar1->fields).Misc;
    if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    }
    pSVar7 = GameManagers_HumanLoadout__GetAllowed((MethodInfo *)0x0);
    if (((pSVar2 != (Settings_InGameCharacterSettings_o *)0x0) &&
        (pSVar4 = (pSVar2->fields).Loadout, pSVar4 != (Settings_StringSetting_o *)0x0)) &&
       (pSVar7 != (System_Collections_Generic_List_string__o *)0x0)) {
      bVar6 = System_Collections_Generic_List_object___Contains
                        ((System_Collections_Generic_List_object__o *)pSVar7,
                         (Il2CppObject *)(pSVar4->fields)._value,
                         (MethodInfo_93FC70 *)MethodInfo_System_Collections_Generic_List_string_Contains);
      if (!bVar6) {
        pSVar4 = (pSVar2->fields).Loadout;
        pSVar8 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar7,0,
                            (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
        if (pSVar4 == (Settings_StringSetting_o *)0x0) goto label_181e54c5c;
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)pSVar8,
                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      }
      pSVar4 = (pSVar2->fields).Loadout;
      if (((pSVar4 != (Settings_StringSetting_o *)0x0) && (pSVar3 != (Settings_InGameMiscSettings_o *)0x0)) &&
         (pSVar5 = (pSVar3->fields).AllowShifterSpecials, pSVar5 != (Settings_BoolSetting_o *)0x0)) {
        pSVar8 = (pSVar4->fields)._value;
        bVar6 = (pSVar5->fields)._value;
        if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
        }
        pSVar7 = Characters_HumanSpecials__GetSpecialNames(pSVar8,bVar6,(MethodInfo *)0x0);
        pSVar4 = (pSVar2->fields).Special;
        if ((pSVar4 != (Settings_StringSetting_o *)0x0) &&
           (pSVar7 != (System_Collections_Generic_List_string__o *)0x0)) {
          bVar6 = System_Collections_Generic_List_object___Contains
                            ((System_Collections_Generic_List_object__o *)pSVar7,
                             (Il2CppObject *)(pSVar4->fields)._value,
                             (MethodInfo_93FC70 *)MethodInfo_System_Collections_Generic_List_string_Contains);
          if (!bVar6) {
            pSVar4 = (pSVar2->fields).Special;
            if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
            }
            if (pSVar4 == (Settings_StringSetting_o *)0x0) goto label_181e54c5c;
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)pSVar4,
                       (Il2CppObject *)TypeInfo_Characters_HumanSpecials->static_fields->DefaultSpecial,
                       (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          }
          return TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
        }
      }
    }
  }
label_181e54c5c:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$SpawnPlayerAt
// il2cpp: void GameManagers_InGameManager__SpawnPlayerAt (GameManagers_InGameManager_o* __this, bool force, UnityEngine_Vector3_o position, float rotationY, const MethodInfo* method);
// 0x181e5bf60
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e5c6dd: mov rbx, rbp
// asm:   0x181e5c6e0: jmp 0x181e5c74d
// asm:   0x181e5c715: jmp 0x181e5c64c
// asm:   0x181e5c779: jmp 0x181e5c7a6
// asm:   0x181e5c928: movaps xmm1, xmm8
// asm:   0x181e5c92c: jmp 0x181e5c962
// asm:   0x181e5c944: movaps xmm1, xmm6
// asm:   0x181e5c947: jmp 0x181e5c962
// asm:   0x181e5c95c: xor r8d, r8d
// asm:   0x181e5c95f: movaps xmm1, xmm7

void GameManagers_InGameManager__SpawnPlayerAt
               (GameManagers_InGameManager_o *__this,bool force,UnityEngine_Vector3_o *position,
               float rotationY,MethodInfo *method)

{
  float *pfVar1;
  byte bVar2;
  int iVar3;
  Settings_InGameCharacterSettings_o *pSVar4;
  CustomLogic_CustomLogicEvaluator_o *pCVar5;
  Settings_StringSetting_o *pSVar6;
  Settings_InGameSet_o *pSVar7;
  Settings_IntSetting_o *pSVar8;
  Settings_InGameMiscSettings_o *pSVar9;
  Characters_BaseCharacter_o *pCVar10;
  Settings_BoolSetting_o *pSVar11;
  Settings_TitanCustomSettings_o *pSVar12;
  Settings_SetSettingsContainer_TitanCustomSet__o *pSVar13;
  Settings_ListSetting_T__o *pSVar14;
  System_Collections_Generic_List_T__o *pSVar15;
  Settings_InGameTitanSettings_o *pSVar16;
  Settings_FloatSetting_o *pSVar17;
  Settings_FloatSetting_o *pSVar18;
  Utility_BaseComponentCache_o *pUVar19;
  Photon_Pun_PhotonView_o *pPVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  bool bVar23;
  UnityEngine_Quaternion_o *pUVar24;
  System_Collections_Generic_List_string__o *pSVar25;
  System_String_o *pSVar26;
  Characters_BasicTitan_o *forcedSet;
  CustomSkins_TitanSkinSelection_o *__this_00;
  System_String_o *str1;
  Characters_BasicTitan_o *pCVar27;
  Settings_TitanCustomSet_o *customSet;
  longlong lVar28;
  Characters_Human_o *__this_01;
  Photon_Realtime_Player_o *player;
  Il2CppObject *value;
  int iVar29;
  Characters_BasicTitan_o *__this_02;
  float fVar30;
  float fVar31;
  float size;
  int32_t local_res8 [2];
  UnityEngine_Vector3_o local_78;
  UnityEngine_Quaternion_Fields local_68 [4];
  
  if (Il2CppMethodInitialized_184344e9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSpecials);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_TitanCustomSet_GetItemAt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanCustomSet_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_TypedSetting_List_TitanCustomSet_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Large");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Small");
    il2cpp_codegen_initialize_runtime_metadata(&"Medium");
    Il2CppMethodInitialized_184344e9b = '\x01';
  }
  bVar23 = (*(__this->klass->vtable)._56_IsFinishedLoading.methodPtr)
                     (__this,(__this->klass->vtable)._56_IsFinishedLoading.method);
  if (!bVar23) {
    return;
  }
  local_78.fields.z = 0.0;
  local_78.fields._0_8_ = (ulonglong)(uint)(rotationY * 0.017453292) << 0x20;
  pUVar24 = UnityEngine_Quaternion__Internal_FromEulerRad
                      ((UnityEngine_Quaternion_o *)local_68,&local_78,(MethodInfo *)0x0);
  uVar21._0_4_ = (pUVar24->fields).x;
  uVar21._4_4_ = (pUVar24->fields).y;
  uVar22._0_4_ = (pUVar24->fields).z;
  uVar22._4_4_ = (pUVar24->fields).w;
  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar5 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if ((pCVar5 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
     (bVar23 = System_String__op_Inequality
                         ((pCVar5->fields).ForcedCharacterType,
                          (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0),
     pSVar4 != (Settings_InGameCharacterSettings_o *)0x0)) {
    if (bVar23) {
      pSVar6 = (pSVar4->fields).CharacterType;
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pCVar5 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if ((pCVar5 == (CustomLogic_CustomLogicEvaluator_o *)0x0) || (pSVar6 == (Settings_StringSetting_o *)0x0)
         ) goto label_181e5ce7c;
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)(pCVar5->fields).ForcedCharacterType,
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    }
    pSVar6 = (pSVar4->fields).CharacterType;
    if (((pSVar6 != (Settings_StringSetting_o *)0x0) &&
        (pSVar7 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent,
        pSVar7 != (Settings_InGameSet_o *)0x0)) &&
       (pSVar8 = (pSVar4->fields).ChooseStatus, pSVar8 != (Settings_IntSetting_o *)0x0)) {
      if ((pSVar8->fields)._value != 2) {
        return;
      }
      pSVar26 = (pSVar6->fields)._value;
      pSVar9 = (pSVar7->fields).Misc;
      pCVar10 = (__this->fields).CurrentCharacter;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar23 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pCVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar23) {
        pCVar10 = (__this->fields).CurrentCharacter;
        if (pCVar10 == (Characters_BaseCharacter_o *)0x0) goto label_181e5ce7c;
        if (((pCVar10->fields).Dead == false) && (!force)) {
          return;
        }
      }
      pCVar10 = (__this->fields).CurrentCharacter;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar23 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pCVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar23) {
        pCVar10 = (__this->fields).CurrentCharacter;
        if (pCVar10 == (Characters_BaseCharacter_o *)0x0) goto label_181e5ce7c;
        if ((pCVar10->fields).Dead == false) {
          (*(pCVar10->klass->vtable)._98_GetKilled.methodPtr)
                    (pCVar10,"",(pCVar10->klass->vtable)._98_GetKilled.method);
        }
      }
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      GameManagers_InGameManager__UpdatePlayerName((MethodInfo *)0x0);
      pSVar25 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)pSVar25,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
      if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
      }
      bVar23 = GameManagers_HumanLoadout__AnyAllowed((MethodInfo *)0x0);
      if (bVar23) {
        if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
        }
        if (pSVar25 == (System_Collections_Generic_List_string__o *)0x0) goto label_181e5ce7c;
        il2cpp_runtime_helper_180012890(pSVar25,TypeInfo_GameManagers_PlayerCharacter->static_fields->Human,
                      MethodInfo_System_Collections_Generic_List_string_Add);
      }
      if ((pSVar9 != (Settings_InGameMiscSettings_o *)0x0) &&
         (pSVar11 = (pSVar9->fields).AllowPlayerTitans, pSVar11 != (Settings_BoolSetting_o *)0x0)) {
        if ((pSVar11->fields)._value != false) {
          if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
          }
          if (pSVar25 == (System_Collections_Generic_List_string__o *)0x0) goto label_181e5ce7c;
          il2cpp_runtime_helper_180012890(pSVar25,TypeInfo_GameManagers_PlayerCharacter->static_fields->Titan,
                        MethodInfo_System_Collections_Generic_List_string_Add);
        }
        pSVar11 = (pSVar9->fields).AllowShifters;
        if (pSVar11 != (Settings_BoolSetting_o *)0x0) {
          if ((pSVar11->fields)._value == false) {
            if (pSVar25 == (System_Collections_Generic_List_string__o *)0x0) goto label_181e5ce7c;
          }
          else {
            if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
            }
            if (pSVar25 == (System_Collections_Generic_List_string__o *)0x0) goto label_181e5ce7c;
            il2cpp_runtime_helper_180012890(pSVar25,TypeInfo_GameManagers_PlayerCharacter->static_fields->Shifter,
                          MethodInfo_System_Collections_Generic_List_string_Add);
          }
          if ((pSVar25->fields)._size == 0) {
            if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
            }
            il2cpp_runtime_helper_180012890(pSVar25,TypeInfo_GameManagers_PlayerCharacter->static_fields->Human,
                          MethodInfo_System_Collections_Generic_List_string_Add);
          }
          bVar23 = System_Collections_Generic_List_object___Contains
                             ((System_Collections_Generic_List_object__o *)pSVar25,(Il2CppObject *)pSVar26,
                              (MethodInfo_93FC70 *)MethodInfo_System_Collections_Generic_List_string_Contains)
          ;
          if (!bVar23) {
            pSVar26 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar25,0,
                                 (MethodInfo_92B830 *)
                                 MethodInfo_System_Collections_Generic_List_string_get_Item);
          }
          if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
          }
          bVar23 = System_String__op_Equality
                             (pSVar26,TypeInfo_GameManagers_PlayerCharacter->static_fields->Human,
                              (MethodInfo *)0x0);
          if (bVar23) {
            if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
            }
            pSVar25 = GameManagers_HumanLoadout__GetAllowed((MethodInfo *)0x0);
            pSVar6 = (pSVar4->fields).Loadout;
            if ((pSVar6 != (Settings_StringSetting_o *)0x0) &&
               (pSVar25 != (System_Collections_Generic_List_string__o *)0x0)) {
              bVar23 = System_Collections_Generic_List_object___Contains
                                 ((System_Collections_Generic_List_object__o *)pSVar25,
                                  (Il2CppObject *)(pSVar6->fields)._value,
                                  (MethodInfo_93FC70 *)
                                  MethodInfo_System_Collections_Generic_List_string_Contains);
              if (!bVar23) {
                pSVar6 = (pSVar4->fields).Loadout;
                pSVar26 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar25,0,
                                     (MethodInfo_92B830 *)
                                     MethodInfo_System_Collections_Generic_List_string_get_Item);
                if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_181e5ce7c;
                Settings_TypedSetting_object___set_Value
                          ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)pSVar26,
                           (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
              }
              if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
              }
              pCVar5 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
              if (pCVar5 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                bVar23 = System_String__op_Inequality
                                   ((pCVar5->fields).ForcedLoadout,
                                    (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                                    (MethodInfo *)0x0);
                if (bVar23) {
                  pSVar6 = (pSVar4->fields).Loadout;
                  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                  }
                  pCVar5 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
                  if ((pCVar5 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
                     (pSVar6 == (Settings_StringSetting_o *)0x0)) goto label_181e5ce7c;
                  Settings_TypedSetting_object___set_Value
                            ((Settings_TypedSetting_T__o *)pSVar6,
                             (Il2CppObject *)(pCVar5->fields).ForcedLoadout,
                             (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                }
                pSVar6 = (pSVar4->fields).Loadout;
                if ((pSVar6 != (Settings_StringSetting_o *)0x0) &&
                   (pSVar11 = (pSVar9->fields).AllowShifterSpecials, pSVar11 != (Settings_BoolSetting_o *)0x0)
                   ) {
                  pSVar26 = (pSVar6->fields)._value;
                  bVar23 = (pSVar11->fields)._value;
                  if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
                  }
                  pSVar25 = Characters_HumanSpecials__GetSpecialNames(pSVar26,bVar23,(MethodInfo *)0x0);
                  pSVar6 = (pSVar4->fields).Special;
                  if ((pSVar6 != (Settings_StringSetting_o *)0x0) &&
                     (pSVar25 != (System_Collections_Generic_List_string__o *)0x0)) {
                    bVar23 = System_Collections_Generic_List_object___Contains
                                       ((System_Collections_Generic_List_object__o *)pSVar25,
                                        (Il2CppObject *)(pSVar6->fields)._value,
                                        (MethodInfo_93FC70 *)
                                        MethodInfo_System_Collections_Generic_List_string_Contains);
                    if (!bVar23) {
                      pSVar6 = (pSVar4->fields).Special;
                      if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
                      }
                      if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_181e5ce7c;
                      Settings_TypedSetting_object___set_Value
                                ((Settings_TypedSetting_T__o *)pSVar6,
                                 (Il2CppObject *)
                                 TypeInfo_Characters_HumanSpecials->static_fields->DefaultSpecial,
                                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                    }
                    if ((TypeInfo_Characters_CharacterPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterPrefabs);
                    }
                    local_78.fields.x = (position->fields).x;
                    local_78.fields.y = (position->fields).y;
                    local_78.fields.z = (position->fields).z;
                    local_68[0]._0_8_ = uVar21;
                    local_68[0]._8_8_ = uVar22;
                    __this_01 = (Characters_Human_o *)
                                Characters_CharacterSpawner__Spawn
                                          (TypeInfo_Characters_CharacterPrefabs->static_fields->Human,
                                           &local_78,(UnityEngine_Quaternion_o *)local_68,(MethodInfo *)0x0);
                    if (__this_01 == (Characters_Human_o *)0x0) {
                      GameManagers_InGameManager__GetPlayerTeam(__this,false,(MethodInfo *)0x0);
                    }
                    else {
                      bVar2 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
                      if (((__this_01->klass->_2).typeHierarchyDepth < bVar2) ||
                         ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                          (Il2CppClass *)TypeInfo_Characters_Human)) {
                        il2cpp_codegen_raise_invalid_cast_exception(__this_01);
                      }
                      pSVar26 = GameManagers_InGameManager__GetPlayerTeam(__this,false,(MethodInfo *)0x0);
                      Characters_Human__Init
                                (__this_01,false,pSVar26,
                                 TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings,
                                 (MethodInfo *)0x0);
                      (__this->fields).CurrentCharacter = (Characters_BaseCharacter_o *)__this_01;
                      Il2CppCodeGenWriteBarrier(&(__this->fields).CurrentCharacter,__this_01);
                      pSVar7 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
                      if (((pSVar7 != (Settings_InGameSet_o *)0x0) &&
                          (pSVar9 = (pSVar7->fields).Misc, pSVar9 != (Settings_InGameMiscSettings_o *)0x0)) &&
                         (pSVar8 = (pSVar9->fields).HumanHealth, pSVar8 != (Settings_IntSetting_o *)0x0)) {
                        if (1 < (pSVar8->fields)._value) {
                          Characters_BaseCharacter__SetHealth
                                    ((Characters_BaseCharacter_o *)__this_01,
                                     (((((TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent->
                                         fields).Misc)->fields).HumanHealth)->fields)._value,(MethodInfo *)0x0
                                    );
                        }
                        goto label_181e5cd65;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
            }
            bVar23 = System_String__op_Equality
                               (pSVar26,TypeInfo_GameManagers_PlayerCharacter->static_fields->Shifter,
                                (MethodInfo *)0x0);
            if (bVar23) {
              if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
              }
              pCVar5 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
              if (pCVar5 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                pSVar26 = (pCVar5->fields).ForcedLoadout;
                bVar23 = System_String__op_Inequality
                                   (pSVar26,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                                    (MethodInfo *)0x0);
                if (bVar23) {
                  pSVar6 = (pSVar4->fields).Loadout;
                  if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_181e5ce7c;
                  Settings_TypedSetting_object___set_Value
                            ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)pSVar26,
                             (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                }
                pSVar6 = (pSVar4->fields).Loadout;
                if (pSVar6 != (Settings_StringSetting_o *)0x0) {
                  local_78.fields.x = (position->fields).x;
                  local_78.fields.y = (position->fields).y;
                  local_78.fields.z = (position->fields).z;
                  GameManagers_InGameManager__SpawnPlayerShifterAt
                            (__this,(pSVar6->fields)._value,0.0,&local_78,rotationY,(MethodInfo *)0x0);
                  goto label_181e5cd65;
                }
              }
            }
            else {
              if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
              }
              bVar23 = System_String__op_Equality
                                 (pSVar26,TypeInfo_GameManagers_PlayerCharacter->static_fields->Titan,
                                  (MethodInfo *)0x0);
              if (!bVar23) {
label_181e5cd65:
                (__this->fields).HasSpawned = true;
                if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
                }
                player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
                if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
                }
                pCVar10 = (__this->fields).CurrentCharacter;
                if (((pCVar10 != (Characters_BaseCharacter_o *)0x0) &&
                    (pUVar19 = (pCVar10->fields).Cache, pUVar19 != (Utility_BaseComponentCache_o *)0x0)) &&
                   (pPVar20 = (pUVar19->fields).PhotonView, pPVar20 != (Photon_Pun_PhotonView_o *)0x0)) {
                  pSVar26 = TypeInfo_GameManagers_PlayerProperty->static_fields->CharacterViewId;
                  local_res8[0] = (pPVar20->fields).viewIdField;
                  value = il2cpp_value_box(g_data_184354e08,local_res8);
                  PhotonExtensions__SetCustomProperty(player,pSVar26,value,(MethodInfo *)0x0);
                  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
                  }
                  GameManagers_InGameManager__UpdateRoundPlayerProperties((MethodInfo *)0x0);
                  return;
                }
                ThrowNullReferenceException();
              }
              pSVar8 = (pSVar4->fields).CustomSet;
              if (((pSVar8 != (Settings_IntSetting_o *)0x0) &&
                  (pSVar12 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings,
                  pSVar12 != (Settings_TitanCustomSettings_o *)0x0)) &&
                 ((pSVar13 = (pSVar12->fields).TitanCustomSets,
                  pSVar13 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0 &&
                  ((pSVar14 = (pSVar13->fields).Sets, pSVar14 != (Settings_ListSetting_T__o *)0x0 &&
                   (pSVar15 = (pSVar14->fields)._value, pSVar15 != (System_Collections_Generic_List_T__o *)0x0
                   )))))) {
                iVar3 = (pSVar8->fields)._value;
                __this_02 = (Characters_BasicTitan_o *)0x0;
                if (((iVar3 < 0) || (iVar29 = (pSVar15->fields)._size, iVar3 <= iVar29)) &&
                   (iVar29 = iVar3, iVar3 < 0)) {
                  iVar29 = 0;
                }
                forcedSet = __this_02;
                if (0 < iVar29) {
                  forcedSet = (Characters_BasicTitan_o *)
                              Settings_ListSetting_object___GetItemAt
                                        ((((TypeInfo_Settings_SettingsManager->static_fields->
                                            TitanCustomSettings->fields).TitanCustomSets)->fields).Sets,
                                         iVar29 + -1,
                                         (MethodInfo_182B120 *)
                                         MethodInfo_Settings_ListSetting_TitanCustomSet_GetItemAt);
                  if (forcedSet == (Characters_BasicTitan_o *)0x0) {
                    forcedSet = (Characters_BasicTitan_o *)0x0;
                  }
                  else {
                    bVar2 = (TypeInfo_Settings_TitanCustomSet->_2).typeHierarchyDepth;
                    if (((forcedSet->klass->_2).typeHierarchyDepth < bVar2) ||
                       ((forcedSet->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                        (Il2CppClass *)TypeInfo_Settings_TitanCustomSet)) {
                      il2cpp_codegen_raise_invalid_cast_exception(forcedSet);
                    }
                  }
                }
                __this_00 = CustomSkins_TitanSkinPicker__Pick
                                      (false,(SimpleJSONFixed_JSONNode_o *)0x0,
                                       (Settings_TitanCustomSet_o *)forcedSet,(MethodInfo *)0x0);
                if ((TypeInfo_Characters_CharacterPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterPrefabs);
                }
                if (__this_00 != (CustomSkins_TitanSkinSelection_o *)0x0) {
                  local_78.fields.x = (position->fields).x;
                  local_78.fields.y = (position->fields).y;
                  local_78.fields.z = (position->fields).z;
                  pSVar26 = TypeInfo_Characters_CharacterPrefabs->static_fields->BasicTitanPrefix;
                  local_68[0]._0_8_ = uVar21;
                  local_68[0]._8_8_ = uVar22;
                  str1 = System_Int32__ToString(&(__this_00->fields).Body,(MethodInfo *)0x0);
                  pSVar26 = System_String__Concat_1969e50(pSVar26,str1,(MethodInfo *)0x0);
                  pCVar27 = (Characters_BasicTitan_o *)
                            Characters_CharacterSpawner__Spawn
                                      (pSVar26,&local_78,(UnityEngine_Quaternion_o *)local_68,
                                       (MethodInfo *)0x0);
                  if (pCVar27 != (Characters_BasicTitan_o *)0x0) {
                    bVar2 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
                    if (((pCVar27->klass->_2).typeHierarchyDepth < bVar2) ||
                       (__this_02 = pCVar27,
                       (pCVar27->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                       (Il2CppClass *)TypeInfo_Characters_BasicTitan)) {
                      il2cpp_codegen_raise_invalid_cast_exception(pCVar27);
                    }
                  }
                  if (forcedSet == (Characters_BasicTitan_o *)0x0) {
                    if (__this_02 == (Characters_BasicTitan_o *)0x0) goto label_181e5ce7c;
                    customSet = CustomSkins_TitanSkinSelection__CreateSet
                                          (__this_00,(__this_02->fields).Setup,(MethodInfo *)0x0);
                    pSVar26 = GameManagers_InGameManager__GetPlayerTeam(__this,true,(MethodInfo *)0x0);
                  }
                  else {
                    customSet = CustomSkins_TitanSkinSelection__ApplyTo
                                          (__this_00,(Settings_TitanCustomSet_o *)forcedSet,(MethodInfo *)0x0)
                    ;
                    pSVar26 = GameManagers_InGameManager__GetPlayerTeam(__this,true,(MethodInfo *)0x0);
                    if (__this_02 == (Characters_BasicTitan_o *)0x0) goto label_181e5ce7c;
                  }
                  Characters_BasicTitan__Init
                            (__this_02,false,pSVar26,(SimpleJSONFixed_JSONNode_o *)0x0,customSet,
                             (__this_00->fields).SkinSlot,(MethodInfo *)0x0);
                  GameManagers_InGameManager__SetupTitan(__this,__this_02,false,(MethodInfo *)0x0);
                  pSVar7 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
                  if (((pSVar7 != (Settings_InGameSet_o *)0x0) &&
                      (pSVar16 = (pSVar7->fields).Titan, pSVar16 != (Settings_InGameTitanSettings_o *)0x0)) &&
                     (pSVar11 = (pSVar16->fields).TitanSizeEnabled, pSVar11 != (Settings_BoolSetting_o *)0x0))
                  {
                    if ((pSVar11->fields)._value == false) {
                      fVar30 = 2.0;
                      fVar31 = 3.0;
                      size = 1.0;
                    }
                    else {
                      pSVar16 = (TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent->fields).
                                Titan;
                      pSVar17 = (pSVar16->fields).TitanSizeMin;
                      if ((pSVar17 == (Settings_FloatSetting_o *)0x0) ||
                         (pSVar18 = (pSVar16->fields).TitanSizeMax, pSVar18 == (Settings_FloatSetting_o *)0x0)
                         ) goto label_181e5ce7c;
                      fVar31 = (pSVar18->fields)._value;
                      pfVar1 = &(pSVar17->fields)._value;
                      lVar28 = 0x78;
                      if (*pfVar1 <= fVar31 && fVar31 != *pfVar1) {
                        lVar28 = 0x70;
                      }
                      size = *(float *)(*(longlong *)((longlong)&pSVar16->klass + lVar28) + 0x1c);
                      fVar30 = (size + fVar31) * 0.5;
                    }
                    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                    }
                    pCVar5 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
                    if (pCVar5 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                      pSVar26 = (pCVar5->fields).ForcedLoadout;
                      bVar23 = System_String__op_Inequality
                                         (pSVar26,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                                          (MethodInfo *)0x0);
                      if (bVar23) {
                        pSVar6 = (pSVar4->fields).Loadout;
                        if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_181e5ce7c;
                        Settings_TypedSetting_object___set_Value
                                  ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)pSVar26,
                                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                      }
                      pSVar6 = (pSVar4->fields).Loadout;
                      if (pSVar6 != (Settings_StringSetting_o *)0x0) {
                        pSVar26 = (pSVar6->fields)._value;
                        bVar23 = System_String__op_Equality(pSVar26,"Small",(MethodInfo *)0x0);
                        if (((bVar23) ||
                            (bVar23 = System_String__op_Equality
                                                (pSVar26,"Medium",(MethodInfo *)0x0),
                            size = fVar30, bVar23)) ||
                           (bVar23 = System_String__op_Equality
                                               (pSVar26,"Large",(MethodInfo *)0x0),
                           size = fVar31, bVar23)) {
                          Characters_BaseTitan__SetSize
                                    ((Characters_BaseTitan_o *)__this_02,size,(MethodInfo *)0x0);
                        }
                        (__this->fields).CurrentCharacter = (Characters_BaseCharacter_o *)__this_02;
                        Il2CppCodeGenWriteBarrier(&(__this->fields).CurrentCharacter,__this_02);
                        goto label_181e5cd65;
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
label_181e5ce7c:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$GetHumanSpawnPoint
// il2cpp: System_ValueTuple_Vector3__Quaternion__o GameManagers_InGameManager__GetHumanSpawnPoint (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x181e54650

System_ValueTuple_Vector3__Quaternion__o *
GameManagers_InGameManager__GetHumanSpawnPoint
          (System_ValueTuple_Vector3__Quaternion__o *__return_storage_ptr__,
          GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  Settings_InGameSet_o *pSVar5;
  Settings_InGameMiscSettings_o *pSVar6;
  Settings_IntSetting_o *pSVar7;
  Settings_InGameCharacterSettings_o *pSVar8;
  Settings_StringSetting_o *pSVar9;
  System_String_o *a;
  UnityEngine_Vector3_StaticFields *pUVar10;
  UnityEngine_Quaternion_StaticFields *pUVar11;
  bool bVar12;
  UnityEngine_Vector3_o *pUVar13;
  UnityEngine_Quaternion_o *pUVar14;
  float fVar15;
  System_Collections_Generic_List_string__o *tags;
  UnityEngine_Transform_o *local_res8;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Quaternion_o local_28 [2];
  
  if (Il2CppMethodInitialized_184344e9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_ValueTuple_Vector3_Quaternion_ctor);
    Il2CppMethodInitialized_184344e9c = '\x01';
  }
  local_res8 = (UnityEngine_Transform_o *)0x0;
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar5 != (Settings_InGameSet_o *)0x0) &&
      (pSVar6 = (pSVar5->fields).Misc, pSVar6 != (Settings_InGameMiscSettings_o *)0x0)) &&
     (pSVar7 = (pSVar6->fields).PVP, pSVar7 != (Settings_IntSetting_o *)0x0)) {
    if ((pSVar7->fields)._value == 2) {
      pSVar8 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
      if ((pSVar8 == (Settings_InGameCharacterSettings_o *)0x0) ||
         (pSVar9 = (pSVar8->fields).Team, pSVar9 == (Settings_StringSetting_o *)0x0)) goto label_181e548fa;
      a = (pSVar9->fields)._value;
      if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
      }
      bVar12 = System_String__op_Equality
                         (a,TypeInfo_GameManagers_TeamInfo->static_fields->Blue,(MethodInfo *)0x0);
      if (bVar12) {
        if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
        }
        tags = TypeInfo_GameManagers_InGameManager->static_fields->BlueSpawnTags;
      }
      else {
        if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
        }
        tags = TypeInfo_GameManagers_InGameManager->static_fields->RedSpawnTags;
      }
    }
    else {
      tags = TypeInfo_GameManagers_InGameManager->static_fields->HumanSpawnTags;
    }
    if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
    }
    bVar12 = Map_MapManager__TryGetRandomTagsXform(tags,&local_res8,(MethodInfo *)0x0);
    if (!bVar12) {
      if (Il2CppMethodInitialized_18433dbea == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433dbea = '\x01';
      }
      pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar2 = (pUVar10->zeroVector).fields.x;
      uVar4 = (pUVar10->zeroVector).fields.y;
      fVar15 = (pUVar10->zeroVector).fields.z;
      if (Il2CppMethodInitialized_18433de5b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
        Il2CppMethodInitialized_18433de5b = '\x01';
      }
      pUVar11 = TypeInfo_UnityEngine_Quaternion->static_fields;
      local_28[0].fields.x = (pUVar11->identityQuaternion).fields.x;
      local_28[0].fields.y = (pUVar11->identityQuaternion).fields.y;
      local_28[0].fields.z = (pUVar11->identityQuaternion).fields.z;
      local_28[0].fields.w = (pUVar11->identityQuaternion).fields.w;
      fVar1 = (float)uVar2;
      fVar3 = (float)uVar4;
label_181e54851:
      (__return_storage_ptr__->fields).Item1.fields.x = 0.0;
      (__return_storage_ptr__->fields).Item1.fields.y = 0.0;
      *(undefined8 *)&(__return_storage_ptr__->fields).Item1.fields.z = 0;
      (__return_storage_ptr__->fields).Item2.fields.x = 0.0;
      (__return_storage_ptr__->fields).Item2.fields.y = 0.0;
      (__return_storage_ptr__->fields).Item2.fields.z = 0.0;
      (__return_storage_ptr__->fields).Item2.fields.w = 0.0;
      local_38.y = fVar3;
      local_38.x = fVar1;
      local_38.z = fVar15;
      System_ValueTuple_Vector3__Quaternion____ctor
                (__return_storage_ptr__,(UnityEngine_Vector3_o *)&local_38,local_28,
                 (MethodInfo_1028B10 *)MethodInfo_System_ValueTuple_Vector3_Quaternion_ctor);
      return __return_storage_ptr__;
    }
    if (local_res8 != (UnityEngine_Transform_o *)0x0) {
      pUVar13 = UnityEngine_Transform__get_position
                          ((UnityEngine_Vector3_o *)&local_38,local_res8,(MethodInfo *)0x0);
      if (local_res8 != (UnityEngine_Transform_o *)0x0) {
        fVar1 = (pUVar13->fields).x;
        fVar3 = (pUVar13->fields).y;
        fVar15 = (pUVar13->fields).z;
        pUVar14 = UnityEngine_Transform__get_rotation(local_28,local_res8,(MethodInfo *)0x0);
        local_28[0].fields.x = (pUVar14->fields).x;
        local_28[0].fields.y = (pUVar14->fields).y;
        local_28[0].fields.z = (pUVar14->fields).z;
        local_28[0].fields.w = (pUVar14->fields).w;
        goto label_181e54851;
      }
    }
  }
label_181e548fa:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$GetTitanSpawnPoint
// il2cpp: System_ValueTuple_Vector3__Quaternion__o GameManagers_InGameManager__GetTitanSpawnPoint (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x181e54c70

System_ValueTuple_Vector3__Quaternion__o *
GameManagers_InGameManager__GetTitanSpawnPoint
          (System_ValueTuple_Vector3__Quaternion__o *__return_storage_ptr__,
          GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  System_String_o *tag;
  UnityEngine_Vector3_StaticFields *pUVar5;
  UnityEngine_Quaternion_StaticFields *pUVar6;
  bool bVar7;
  UnityEngine_Vector3_o *pUVar8;
  UnityEngine_Quaternion_o *pUVar9;
  float fVar10;
  UnityEngine_Transform_o *local_res8;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Quaternion_o local_28 [2];
  
  if (Il2CppMethodInitialized_184344e9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTags);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_ValueTuple_Vector3_Quaternion_ctor);
    Il2CppMethodInitialized_184344e9d = '\x01';
  }
  local_res8 = (UnityEngine_Transform_o *)0x0;
  if ((TypeInfo_Map_MapTags->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTags);
  }
  tag = TypeInfo_Map_MapTags->static_fields->TitanSpawnPoint;
  if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
  }
  bVar7 = Map_MapManager__TryGetRandomTagXform(tag,&local_res8,(MethodInfo *)0x0);
  if (bVar7) {
    if (local_res8 != (UnityEngine_Transform_o *)0x0) {
      pUVar8 = UnityEngine_Transform__get_position
                         ((UnityEngine_Vector3_o *)&local_38,local_res8,(MethodInfo *)0x0);
      if (local_res8 != (UnityEngine_Transform_o *)0x0) {
        fVar1 = (pUVar8->fields).x;
        fVar3 = (pUVar8->fields).y;
        fVar10 = (pUVar8->fields).z;
        pUVar9 = UnityEngine_Transform__get_rotation(local_28,local_res8,(MethodInfo *)0x0);
        local_28[0].fields.x = (pUVar9->fields).x;
        local_28[0].fields.y = (pUVar9->fields).y;
        local_28[0].fields.z = (pUVar9->fields).z;
        local_28[0].fields.w = (pUVar9->fields).w;
        goto label_181e54db2;
      }
    }
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar2 = (pUVar5->zeroVector).fields.x;
  uVar4 = (pUVar5->zeroVector).fields.y;
  fVar10 = (pUVar5->zeroVector).fields.z;
  if (Il2CppMethodInitialized_18433de5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_18433de5b = '\x01';
  }
  pUVar6 = TypeInfo_UnityEngine_Quaternion->static_fields;
  local_28[0].fields.x = (pUVar6->identityQuaternion).fields.x;
  local_28[0].fields.y = (pUVar6->identityQuaternion).fields.y;
  local_28[0].fields.z = (pUVar6->identityQuaternion).fields.z;
  local_28[0].fields.w = (pUVar6->identityQuaternion).fields.w;
  fVar1 = (float)uVar2;
  fVar3 = (float)uVar4;
label_181e54db2:
  (__return_storage_ptr__->fields).Item1.fields.x = 0.0;
  (__return_storage_ptr__->fields).Item1.fields.y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->fields).Item1.fields.z = 0;
  (__return_storage_ptr__->fields).Item2.fields.x = 0.0;
  (__return_storage_ptr__->fields).Item2.fields.y = 0.0;
  (__return_storage_ptr__->fields).Item2.fields.z = 0.0;
  (__return_storage_ptr__->fields).Item2.fields.w = 0.0;
  local_38.y = fVar3;
  local_38.x = fVar1;
  local_38.z = fVar10;
  System_ValueTuple_Vector3__Quaternion____ctor
            (__return_storage_ptr__,(UnityEngine_Vector3_o *)&local_38,local_28,
             (MethodInfo_1028B10 *)MethodInfo_System_ValueTuple_Vector3_Quaternion_ctor);
  return __return_storage_ptr__;
}


// GameManagers.InGameManager$$GetPlayerTeam
// il2cpp: System_String_o* GameManagers_InGameManager__GetPlayerTeam (GameManagers_InGameManager_o* __this, bool titan, const MethodInfo* method);
// 0x181e54900

System_String_o *
GameManagers_InGameManager__GetPlayerTeam(GameManagers_InGameManager_o *__this,bool titan,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameMiscSettings_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  Settings_InGameCharacterSettings_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  
  if (Il2CppMethodInitialized_184344e9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184344e9e = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Misc, pSVar2 != (Settings_InGameMiscSettings_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).PVP, pSVar3 != (Settings_IntSetting_o *)0x0)) {
    if ((pSVar3->fields)._value == 2) {
      pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
      if ((pSVar4 == (Settings_InGameCharacterSettings_o *)0x0) ||
         (pSVar5 = (pSVar4->fields).Team, pSVar5 == (Settings_StringSetting_o *)0x0)) goto label_181e54a39;
    }
    else {
      if ((((((TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent->fields).Misc)->fields).PVP)->
          fields)._value == 1) {
        if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
        }
        return TypeInfo_GameManagers_TeamInfo->static_fields->None;
      }
      if (titan) {
        if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
        }
        return TypeInfo_GameManagers_TeamInfo->static_fields->Titan;
      }
      if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
      }
      pSVar5 = (Settings_StringSetting_o *)TypeInfo_GameManagers_TeamInfo->static_fields;
    }
    return (pSVar5->fields)._value;
  }
label_181e54a39:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$SpawnAITitan
// il2cpp: Characters_BasicTitan_o* GameManagers_InGameManager__SpawnAITitan (GameManagers_InGameManager_o* __this, System_String_o* type, const MethodInfo* method);
// 0x181e5bb00

Characters_BasicTitan_o *
GameManagers_InGameManager__SpawnAITitan
          (GameManagers_InGameManager_o *__this,System_String_o *type,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  System_ValueTuple_Vector3__Quaternion__o *pSVar7;
  UnityEngine_Vector3_o *pUVar8;
  Characters_BasicTitan_o *pCVar9;
  UnityEngine_Vector3_o local_98;
  UnityEngine_Vector3_Fields local_88;
  undefined8 local_78;
  undefined4 uStack_70;
  UnityEngine_Quaternion_o UStack_6c;
  undefined8 local_58;
  float fStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_44;
  UnityEngine_Vector3_o local_38;
  System_ValueTuple_Vector3__Quaternion__o local_28;
  
  local_78 = 0;
  uStack_70 = 0;
  UStack_6c.fields.x = 0.0;
  UStack_6c.fields.y = 0.0;
  UStack_6c.fields.z = 0.0;
  UStack_6c.fields.w = 0.0;
  pSVar7 = GameManagers_InGameManager__GetTitanSpawnPoint(&local_28,__this,(MethodInfo *)0x0);
  local_78._0_4_ = (pSVar7->fields).Item1.fields.x;
  local_78._4_4_ = (pSVar7->fields).Item1.fields.y;
  uStack_70 = (undefined4)*(undefined8 *)&(pSVar7->fields).Item1.fields.z;
  uVar3 = (pSVar7->fields).Item2.fields.x;
  uVar4 = (pSVar7->fields).Item2.fields.y;
  UStack_6c.fields.z = (pSVar7->fields).Item2.fields.z;
  UStack_6c.fields.w = (pSVar7->fields).Item2.fields.w;
  local_58._0_4_ = (pSVar7->fields).Item1.fields.x;
  local_58._4_4_ = (pSVar7->fields).Item1.fields.y;
  uVar5 = (pSVar7->fields).Item2.fields.x;
  uVar6 = (pSVar7->fields).Item2.fields.y;
  uStack_44._0_4_ = (pSVar7->fields).Item2.fields.z;
  uStack_44._4_4_ = (pSVar7->fields).Item2.fields.w;
  fStack_50 = (float)*(undefined8 *)&(pSVar7->fields).Item1.fields.z;
  UStack_6c.fields.x = (float)uVar3;
  UStack_6c.fields.y = (float)uVar4;
  uStack_4c = uVar5;
  uStack_48 = uVar6;
  pUVar8 = UnityEngine_Quaternion__Internal_ToEulerRad(&local_98,&UStack_6c,(MethodInfo *)0x0);
  uVar1 = (pUVar8->fields).x;
  uVar2 = (pUVar8->fields).y;
  local_88.y = (float)uVar2 * 57.29578;
  local_88.x = (float)uVar1 * 57.29578;
  local_88.z = (pUVar8->fields).z * 57.29578;
  local_98.fields.x = (float)local_58;
  local_98.fields.y = local_58._4_4_;
  local_98.fields.z = fStack_50;
  pUVar8 = UnityEngine_Quaternion__Internal_MakePositive
                     (&local_38,(UnityEngine_Vector3_o *)&local_88,(MethodInfo *)0x0);
  pCVar9 = GameManagers_InGameManager__SpawnAITitanAt
                     (__this,type,&local_98,(pUVar8->fields).y,(MethodInfo *)0x0);
  return pCVar9;
}


// GameManagers.InGameManager$$SpawnAITitans
// il2cpp: System_Collections_Generic_IEnumerable_BasicTitan__o* GameManagers_InGameManager__SpawnAITitans (GameManagers_InGameManager_o* __this, System_String_o* type, int32_t count, const MethodInfo* method);
// 0x181e5be70

System_Collections_Generic_IEnumerable_BasicTitan__o *
GameManagers_InGameManager__SpawnAITitans
          (GameManagers_InGameManager_o *__this,System_String_o *type,int32_t count,MethodInfo *method)

{
  GameManagers_InGameManager___c__DisplayClass76_0_o *object;
  System_Collections_Generic_IEnumerable_ValueTuple_Vector3__Quaternion___o *source;
  System_Func_T__TResult__o *__this_00;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar1;
  
  if (Il2CppMethodInitialized_184344e9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Select_ValueTuple_Vector3_Quaternion_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_ValueTuple_Vector3_Quaternion_BasicTitan)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_InGameManager_c__DisplayClass76_0_SpawnAITitans_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager_c__DisplayClass76_0);
    Il2CppMethodInitialized_184344e9f = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameManagers_InGameManager_c__DisplayClass76_0);
  GameManagers_InGameManager___c__DisplayClass76_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  if (object != (GameManagers_InGameManager___c__DisplayClass76_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    (object->fields).type = type;
    Il2CppCodeGenWriteBarrier(&(object->fields).type,type);
    source = GameManagers_InGameManager__GetTitanSpawnPositions(__this,count,(MethodInfo *)0x0);
    __this_00 = (System_Func_T__TResult__o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Func_ValueTuple_Vector3_Quaternion_BasicTitan);
    System_Func_ValueTuple_Vector3__Quaternion___object____ctor
              (__this_00,(Il2CppObject *)object,
               (intptr_t)MethodInfo_GameManagers_InGameManager_c__DisplayClass76_0_SpawnAITitans_b__0,
               (MethodInfo_17277E0 *)0x0);
    pSVar1 = System_Linq_Enumerable__Select_Vector3__object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                        (System_Func_TSource__TResult__o *)__this_00,
                        (MethodInfo_6C2170 *)
                        MethodInfo_System_Linq_Enumerable_Select_ValueTuple_Vector3_Quaternion_BasicTitan);
    return (System_Collections_Generic_IEnumerable_BasicTitan__o *)pSVar1;
  }
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$SpawnAITitansAsync
// il2cpp: void GameManagers_InGameManager__SpawnAITitansAsync (GameManagers_InGameManager_o* __this, System_String_o* type, int32_t count, const MethodInfo* method);
// 0x181e5bbf0

void GameManagers_InGameManager__SpawnAITitansAsync
               (GameManagers_InGameManager_o *__this,System_String_o *type,int32_t count,MethodInfo *method)

{
  GameManagers_InGameManager__SpawnAITitansCoroutine_d__78_o *__this_00;
  
  if (Il2CppMethodInitialized_184344ea0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_GameManagers_InGameManager_SpawnAITitansCoroutine_d__78);
    Il2CppMethodInitialized_184344ea0 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameManagers_InGameManager_SpawnAITitansCoroutine_d__78);
  GameManagers_InGameManager__SpawnAITitansCoroutine_d__78___ctor
            ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (GameManagers_InGameManager__SpawnAITitansCoroutine_d__78_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
    (__this_00->fields).type = type;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,type);
    (__this_00->fields).count = count;
    UnityEngine_MonoBehaviour__StartCoroutine_Auto
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$SpawnAITitansCoroutine
// il2cpp: System_Collections_IEnumerator_o* GameManagers_InGameManager__SpawnAITitansCoroutine (GameManagers_InGameManager_o* __this, System_String_o* type, int32_t count, const MethodInfo* method);
// 0x181e5bde0

System_Collections_IEnumerator_o *
GameManagers_InGameManager__SpawnAITitansCoroutine
          (GameManagers_InGameManager_o *__this,System_String_o *type,int32_t count,MethodInfo *method)

{
  GameManagers_InGameManager__SpawnAITitansCoroutine_d__78_o *__this_00;
  
  if (Il2CppMethodInitialized_184344ea0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_GameManagers_InGameManager_SpawnAITitansCoroutine_d__78);
    Il2CppMethodInitialized_184344ea0 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameManagers_InGameManager_SpawnAITitansCoroutine_d__78);
  GameManagers_InGameManager__SpawnAITitansCoroutine_d__78___ctor
            ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (GameManagers_InGameManager__SpawnAITitansCoroutine_d__78_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
    (__this_00->fields).type = type;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,type);
    (__this_00->fields).count = count;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$SpawnAITitansAtAsync
// il2cpp: void GameManagers_InGameManager__SpawnAITitansAtAsync (GameManagers_InGameManager_o* __this, System_String_o* type, int32_t count, UnityEngine_Vector3_o position, float rotationY, const MethodInfo* method);
// 0x181e5bc80

void GameManagers_InGameManager__SpawnAITitansAtAsync
               (GameManagers_InGameManager_o *__this,System_String_o *type,int32_t count,
               UnityEngine_Vector3_o *position,float rotationY,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__80_o *__this_00;
  
  if (Il2CppMethodInitialized_184344ea1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_GameManagers_InGameManager_SpawnAITitansAtCoroutine_d__80);
    Il2CppMethodInitialized_184344ea1 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameManagers_InGameManager_SpawnAITitansAtCoroutine_d__80);
  GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__80___ctor
            ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__80_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
    (__this_00->fields).type = type;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,type);
    fVar2 = (position->fields).y;
    fVar1 = (position->fields).z;
    (__this_00->fields).position.fields.x = (position->fields).x;
    (__this_00->fields).position.fields.y = fVar2;
    (__this_00->fields).rotationY = rotationY;
    (__this_00->fields).count = count;
    (__this_00->fields).position.fields.z = fVar1;
    UnityEngine_MonoBehaviour__StartCoroutine_Auto
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$SpawnAITitansAtCoroutine
// il2cpp: System_Collections_IEnumerator_o* GameManagers_InGameManager__SpawnAITitansAtCoroutine (GameManagers_InGameManager_o* __this, System_String_o* type, int32_t count, UnityEngine_Vector3_o position, float rotationY, const MethodInfo* method);
// 0x181e5bd30

System_Collections_IEnumerator_o *
GameManagers_InGameManager__SpawnAITitansAtCoroutine
          (GameManagers_InGameManager_o *__this,System_String_o *type,int32_t count,
          UnityEngine_Vector3_o *position,float rotationY,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__80_o *__this_00;
  
  if (Il2CppMethodInitialized_184344ea1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_GameManagers_InGameManager_SpawnAITitansAtCoroutine_d__80);
    Il2CppMethodInitialized_184344ea1 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameManagers_InGameManager_SpawnAITitansAtCoroutine_d__80);
  GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__80___ctor
            ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__80_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
    (__this_00->fields).type = type;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,type);
    fVar2 = (position->fields).y;
    fVar1 = (position->fields).z;
    (__this_00->fields).position.fields.x = (position->fields).x;
    (__this_00->fields).position.fields.y = fVar2;
    (__this_00->fields).position.fields.z = fVar1;
    (__this_00->fields).rotationY = rotationY;
    (__this_00->fields).count = count;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$GetTitanSpawnPositions
// il2cpp: System_Collections_Generic_IEnumerable_ValueTuple_Vector3__Quaternion___o* GameManagers_InGameManager__GetTitanSpawnPositions (GameManagers_InGameManager_o* __this, int32_t count, const MethodInfo* method);
// 0x181e54e00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e54f86: xor edi, edi

System_Collections_Generic_IEnumerable_ValueTuple_Vector3__Quaternion___o *
GameManagers_InGameManager__GetTitanSpawnPositions
          (GameManagers_InGameManager_o *__this,int32_t count,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar3;
  byte bVar6;
  Characters_BaseCharacter_o *pCVar7;
  Characters_BaseCharacter_c *pCVar8;
  System_Collections_Generic_HashSet_Human__o *pSVar9;
  Utility_BaseComponentCache_o *pUVar10;
  UnityEngine_Transform_o *__this_00;
  System_String_o *tag;
  Il2CppObject *object;
  UnityEngine_Vector3_StaticFields *pUVar11;
  UnityEngine_Quaternion_StaticFields *pUVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  System_Collections_Generic_List_Transform__o *source;
  bool bVar15;
  UnityEngine_Vector3_o *pUVar16;
  System_Func_T__TResult__o *__this_01;
  System_Collections_Generic_IEnumerable_ValueTuple_Vector3__Quaternion___o *pSVar17;
  float fVar18;
  float avoidRadius;
  System_Collections_Generic_List_Transform__o *local_res8;
  UnityEngine_Vector3_Fields local_78;
  System_ValueTuple_Vector3__Quaternion__o local_68;
  System_ValueTuple_Vector3__Quaternion__o local_48 [2];
  
  if (Il2CppMethodInitialized_184344ea2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Repeat_ValueTuple_Vector3_Quaternion);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Select_Transform_ValueTuple_Vector3_Quaternion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Transform_ValueTuple_Vector3_Quaternion);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Human_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTags);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_InGameManager_c_GetTitanSpawnPositions_b__81_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager_c);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_ValueTuple_Vector3_Quaternion_ctor);
    Il2CppMethodInitialized_184344ea2 = '\x01';
  }
  pCVar7 = (__this->fields).CurrentCharacter;
  local_res8 = (System_Collections_Generic_List_Transform__o *)0x0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar15 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pCVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar15) && (pCVar7 = (__this->fields).CurrentCharacter, pCVar7 != (Characters_BaseCharacter_o *)0x0)) {
    pCVar8 = pCVar7->klass;
    bVar6 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if ((bVar6 <= (pCVar8->_2).typeHierarchyDepth) &&
       ((pCVar8->_2).typeHierarchy[(ulonglong)bVar6 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) {
      pSVar9 = (__this->fields).Humans;
      if (pSVar9 == (System_Collections_Generic_HashSet_Human__o *)0x0) {
label_181e551ee:
        ThrowNullReferenceException();
      }
      if ((pSVar9->fields)._count == 1) {
        pUVar10 = (((__this->fields).CurrentCharacter)->fields).Cache;
        if ((pUVar10 == (Utility_BaseComponentCache_o *)0x0) ||
           (__this_00 = (pUVar10->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0))
        goto label_181e551ee;
        pUVar16 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)&local_78,__this_00,(MethodInfo *)0x0);
        fVar1 = (pUVar16->fields).x;
        fVar4 = (pUVar16->fields).y;
        fVar18 = (pUVar16->fields).z;
        avoidRadius = 100.0;
        goto label_181e54fca;
      }
    }
  }
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar11 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar2 = (pUVar11->zeroVector).fields.x;
  uVar5 = (pUVar11->zeroVector).fields.y;
  fVar18 = (pUVar11->zeroVector).fields.z;
  avoidRadius = 0.0;
  fVar1 = (float)uVar2;
  fVar4 = (float)uVar5;
label_181e54fca:
  if ((TypeInfo_Map_MapTags->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTags);
  }
  tag = TypeInfo_Map_MapTags->static_fields->TitanSpawnPoint;
  if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
  }
  local_78.y = fVar4;
  local_78.x = fVar1;
  local_78.z = fVar18;
  bVar15 = Map_MapManager__TryGetRandomTagXforms
                     (tag,(UnityEngine_Vector3_o *)&local_78,avoidRadius,count,&local_res8,(MethodInfo *)0x0);
  source = local_res8;
  if (bVar15) {
    if ((TypeInfo_GameManagers_InGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager_c);
    }
    __this_01 = (System_Func_T__TResult__o *)TypeInfo_GameManagers_InGameManager_c->static_fields->__9__81_0;
    if (__this_01 == (System_Func_T__TResult__o *)0x0) {
      if ((TypeInfo_GameManagers_InGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager_c);
      }
      object = (Il2CppObject *)TypeInfo_GameManagers_InGameManager_c->static_fields->__9;
      __this_01 = (System_Func_T__TResult__o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_Transform_ValueTuple_Vector3_Quaternion);
      System_Func_object__ValueTuple_Vector3__Quaternion_____ctor
                (__this_01,object,
                 (intptr_t)MethodInfo_GameManagers_InGameManager_c_GetTitanSpawnPositions_b__81_0,
                 (MethodInfo_1729040 *)0x0);
      TypeInfo_GameManagers_InGameManager_c->static_fields->__9__81_0 =
           (System_Func_Transform__ValueTuple_Vector3__Quaternion___o *)__this_01;
      Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_InGameManager_c->static_fields->__9__81_0,__this_01);
    }
    pSVar17 = (System_Collections_Generic_IEnumerable_ValueTuple_Vector3__Quaternion___o *)
              System_Linq_Enumerable__Select_object__GisketchGridPickerItem_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__TResult__o *)__this_01,
                         (MethodInfo_6C24F0 *)
                         MethodInfo_System_Linq_Enumerable_Select_Transform_ValueTuple_Vector3_Quaternion);
  }
  else {
    if (Il2CppMethodInitialized_18433dbea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbea = '\x01';
    }
    pUVar11 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar3._0_4_ = (pUVar11->zeroVector).fields.x;
    uVar3._4_4_ = (pUVar11->zeroVector).fields.y;
    fVar1 = (pUVar11->zeroVector).fields.z;
    if (Il2CppMethodInitialized_18433de5b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
      Il2CppMethodInitialized_18433de5b = '\x01';
    }
    pUVar12 = TypeInfo_UnityEngine_Quaternion->static_fields;
    local_68.fields.Item1.fields.x = (pUVar12->identityQuaternion).fields.x;
    local_68.fields.Item1.fields.y = (pUVar12->identityQuaternion).fields.y;
    uVar13 = (pUVar12->identityQuaternion).fields.z;
    uVar14 = (pUVar12->identityQuaternion).fields.w;
    local_48[0].fields.Item1.fields.x = 0.0;
    local_48[0].fields.Item1.fields.y = 0.0;
    local_48[0].fields.Item1.fields.z = 0.0;
    local_48[0].fields.Item2.fields.x = 0.0;
    local_48[0].fields.Item2.fields.y = 0.0;
    local_48[0].fields.Item2.fields.z = 0.0;
    local_48[0].fields.Item2.fields.w = 0.0;
    local_78._0_8_ = uVar3;
    local_78.z = fVar1;
    local_68.fields.Item1.fields.z = (float)uVar13;
    local_68.fields.Item2.fields.x = (float)uVar14;
    System_ValueTuple_Vector3__Quaternion____ctor
              (local_48,(UnityEngine_Vector3_o *)&local_78,(UnityEngine_Quaternion_o *)&local_68,
               (MethodInfo_1028B10 *)MethodInfo_System_ValueTuple_Vector3_Quaternion_ctor);
    local_68.fields.Item1.fields.z = local_48[0].fields.Item1.fields.z;
    local_68.fields.Item1.fields.x = local_48[0].fields.Item1.fields.x;
    local_68.fields.Item1.fields.y = local_48[0].fields.Item1.fields.y;
    local_68.fields.Item2.fields.x = local_48[0].fields.Item2.fields.x;
    local_68.fields.Item2.fields.y = local_48[0].fields.Item2.fields.y;
    local_68.fields.Item2.fields.z = local_48[0].fields.Item2.fields.z;
    local_68.fields.Item2.fields.w = local_48[0].fields.Item2.fields.w;
    pSVar17 = (System_Collections_Generic_IEnumerable_ValueTuple_Vector3__Quaternion___o *)
              System_Linq_Enumerable__Repeat_ValueTuple_Vector3__Quaternion__
                        (&local_68,count,
                         (MethodInfo_6C17C0 *)
                         MethodInfo_System_Linq_Enumerable_Repeat_ValueTuple_Vector3_Quaternion);
  }
  return pSVar17;
}


// GameManagers.InGameManager$$SpawnAITitanAt
// il2cpp: Characters_BasicTitan_o* GameManagers_InGameManager__SpawnAITitanAt (GameManagers_InGameManager_o* __this, System_String_o* type, UnityEngine_Vector3_o position, float rotationY, const MethodInfo* method);
// 0x181e5b570
// asm: 9 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e5b8e3: mov rbx, qword ptr [rip + 0x221247e]  ; "Thrower"
// asm:   0x181e5b8ea: jmp 0x181e5b90e
// asm:   0x181e5b8ec: mov rbx, qword ptr [rip + 0x22310ad]  ; "Crawler"
// asm:   0x181e5b8f3: jmp 0x181e5b90e
// asm:   0x181e5b8f5: mov rbx, qword ptr [rip + 0x2279f4c]  ; "Jumper"
// asm:   0x181e5b8fc: jmp 0x181e5b90e
// asm:   0x181e5b8fe: mov rbx, qword ptr [rip + 0x2225c13]  ; "Abnormal"
// asm:   0x181e5b905: jmp 0x181e5b90e
// asm:   0x181e5b907: mov rbx, qword ptr [rip + 0x224235a]  ; "Normal"

Characters_BasicTitan_o *
GameManagers_InGameManager__SpawnAITitanAt
          (GameManagers_InGameManager_o *__this,System_String_o *type,UnityEngine_Vector3_o *position,
          float rotationY,MethodInfo *method)

{
  byte bVar1;
  int32_t difficulty;
  Settings_InGameTitanSettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  Settings_FloatSetting_o *pSVar4;
  Settings_FloatSetting_o *pSVar5;
  Settings_FloatSetting_o *pSVar6;
  Settings_FloatSetting_o *pSVar7;
  Settings_FloatSetting_o *pSVar8;
  Settings_InGameSet_o *pSVar9;
  Settings_InGameGeneralSettings_o *pSVar10;
  Settings_IntSetting_o *pSVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  uint uVar15;
  UnityEngine_Quaternion_o *pUVar16;
  Il2CppObject *pIVar17;
  SimpleJSONFixed_JSONNode_o *aiData;
  CustomSkins_TitanSkinSelection_o *__this_00;
  System_String_o *str1;
  System_String_o *pSVar18;
  Characters_BasicTitan_o *__this_01;
  Settings_TitanCustomSet_o *customSet;
  Il2CppClass *pIVar19;
  float fVar20;
  float fVar21;
  UnityEngine_Vector3_o local_58;
  UnityEngine_Quaternion_Fields local_48 [3];
  
  if (Il2CppMethodInitialized_184344ea3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Random");
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    il2cpp_codegen_initialize_runtime_metadata(&"Punk");
    il2cpp_codegen_initialize_runtime_metadata(&"Thrower");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    il2cpp_codegen_initialize_runtime_metadata(&"Jumper");
    il2cpp_codegen_initialize_runtime_metadata(&"Crawler");
    il2cpp_codegen_initialize_runtime_metadata(&"Abnormal");
    Il2CppMethodInitialized_184344ea3 = '\x01';
  }
  local_58.fields._0_8_ = (ulonglong)(uint)(rotationY * 0.017453292) << 0x20;
  local_58.fields.z = 0.0;
  pUVar16 = UnityEngine_Quaternion__Internal_FromEulerRad
                      ((UnityEngine_Quaternion_o *)local_48,&local_58,(MethodInfo *)0x0);
  uVar12._0_4_ = (pUVar16->fields).x;
  uVar12._4_4_ = (pUVar16->fields).y;
  uVar13._0_4_ = (pUVar16->fields).z;
  uVar13._4_4_ = (pUVar16->fields).w;
  bVar14 = System_String__op_Equality(type,"Default",(MethodInfo *)0x0);
  pIVar19 = (Il2CppClass *)type;
  if (bVar14) {
    pSVar9 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
    if (((pSVar9 == (Settings_InGameSet_o *)0x0) ||
        (pSVar2 = (pSVar9->fields).Titan, pSVar2 == (Settings_InGameTitanSettings_o *)0x0)) ||
       (pSVar3 = (pSVar2->fields).TitanSpawnEnabled, pSVar3 == (Settings_BoolSetting_o *)0x0))
    goto label_181e5badd;
    if ((pSVar3->fields)._value != false) {
      fVar20 = UnityEngine_Random__Range(0.0,1.0,(MethodInfo *)0x0);
      pSVar4 = (pSVar2->fields).TitanSpawnNormal;
      if (pSVar4 == (Settings_FloatSetting_o *)0x0) goto label_181e5badd;
      pSVar5 = (pSVar2->fields).TitanSpawnAbnormal;
      fVar21 = (pSVar4->fields)._value / 100.0;
      if (pSVar5 == (Settings_FloatSetting_o *)0x0) goto label_181e5badd;
      pSVar4 = (pSVar2->fields).TitanSpawnJumper;
      if (pSVar4 == (Settings_FloatSetting_o *)0x0) goto label_181e5badd;
      pSVar6 = (pSVar2->fields).TitanSpawnCrawler;
      if (pSVar6 == (Settings_FloatSetting_o *)0x0) goto label_181e5badd;
      pSVar7 = (pSVar2->fields).TitanSpawnThrower;
      if (pSVar7 == (Settings_FloatSetting_o *)0x0) goto label_181e5badd;
      pSVar8 = (pSVar2->fields).TitanSpawnPunk;
      if (pSVar8 == (Settings_FloatSetting_o *)0x0) goto label_181e5badd;
      pIVar19 = (Il2CppClass *)"Normal";
      if ((((fVar21 <= fVar20) &&
           (fVar21 = (pSVar5->fields)._value / 100.0 + fVar21, pIVar19 = (Il2CppClass *)"Abnormal",
           fVar21 <= fVar20)) &&
          ((fVar21 = (pSVar4->fields)._value / 100.0 + fVar21, pIVar19 = (Il2CppClass *)"Jumper",
           fVar21 <= fVar20 &&
           ((fVar21 = (pSVar6->fields)._value / 100.0 + fVar21, pIVar19 = (Il2CppClass *)"Crawler"
            , fVar21 <= fVar20 &&
            (fVar21 = (pSVar7->fields)._value / 100.0 + fVar21, pIVar19 = (Il2CppClass *)"Thrower"
            , fVar21 <= fVar20)))))) &&
         (pIVar19 = (Il2CppClass *)type, fVar20 < (pSVar8->fields)._value / 100.0 + fVar21)) {
        pIVar19 = (Il2CppClass *)"Punk";
      }
    }
  }
  else {
    bVar14 = System_String__op_Equality(type,"Random",(MethodInfo *)0x0);
    if (bVar14) {
      pIVar17 = SZArrayNew(TypeInfo_string_array,5);
      pSVar18 = "Normal";
      if (pIVar17 == (Il2CppObject *)0x0) goto label_181e5badd;
      if (*(int *)&pIVar17[1].monitor == 0) {
label_181e5bae3:
        ThrowIndexOutOfRangeException();
      }
      pIVar17[2].klass = (Il2CppClass *)"Normal";
      Il2CppCodeGenWriteBarrier(&pIVar17[2].klass,pSVar18);
      pSVar18 = "Abnormal";
      if (*(uint *)&pIVar17[1].monitor < 2) goto label_181e5bae3;
      pIVar17[2].monitor = "Abnormal";
      Il2CppCodeGenWriteBarrier(&pIVar17[2].monitor,pSVar18);
      pSVar18 = "Jumper";
      if (*(uint *)&pIVar17[1].monitor < 3) goto label_181e5bae3;
      pIVar17[3].klass = (Il2CppClass *)"Jumper";
      Il2CppCodeGenWriteBarrier(&pIVar17[3].klass,pSVar18);
      pSVar18 = "Crawler";
      if (*(uint *)&pIVar17[1].monitor < 4) goto label_181e5bae3;
      pIVar17[3].monitor = "Crawler";
      Il2CppCodeGenWriteBarrier(&pIVar17[3].monitor,pSVar18);
      pSVar18 = "Thrower";
      if (*(uint *)&pIVar17[1].monitor < 5) goto label_181e5bae3;
      pIVar17[4].klass = (Il2CppClass *)"Thrower";
      Il2CppCodeGenWriteBarrier(&pIVar17[4].klass,pSVar18);
      uVar15 = UnityEngine_Random__RandomRangeInt(0,*(int32_t *)&pIVar17[1].monitor,(MethodInfo *)0x0);
      if (*(uint *)&pIVar17[1].monitor <= uVar15) goto label_181e5bae3;
      pIVar19 = (&pIVar17[2].klass)[(int)uVar15];
    }
  }
  pSVar9 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar9 != (Settings_InGameSet_o *)0x0) &&
      (pSVar10 = (pSVar9->fields).General, pSVar10 != (Settings_InGameGeneralSettings_o *)0x0)) &&
     (pSVar11 = (pSVar10->fields).Difficulty, pSVar11 != (Settings_IntSetting_o *)0x0)) {
    difficulty = (pSVar11->fields)._value;
    if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
    }
    aiData = Characters_CharacterData__GetTitanAI(difficulty,(System_String_o *)pIVar19,(MethodInfo *)0x0);
    __this_00 = CustomSkins_TitanSkinPicker__Pick
                          (true,aiData,(Settings_TitanCustomSet_o *)0x0,(MethodInfo *)0x0);
    if ((TypeInfo_Characters_CharacterPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterPrefabs);
    }
    if (__this_00 != (CustomSkins_TitanSkinSelection_o *)0x0) {
      local_58.fields.x = (position->fields).x;
      local_58.fields.y = (position->fields).y;
      local_58.fields.z = (position->fields).z;
      pSVar18 = TypeInfo_Characters_CharacterPrefabs->static_fields->BasicTitanPrefix;
      local_48[0]._0_8_ = uVar12;
      local_48[0]._8_8_ = uVar13;
      str1 = System_Int32__ToString(&(__this_00->fields).Body,(MethodInfo *)0x0);
      pSVar18 = System_String__Concat_1969e50(pSVar18,str1,(MethodInfo *)0x0);
      __this_01 = (Characters_BasicTitan_o *)
                  Characters_CharacterSpawner__Spawn
                            (pSVar18,&local_58,(UnityEngine_Quaternion_o *)local_48,(MethodInfo *)0x0);
      if (__this_01 != (Characters_BasicTitan_o *)0x0) {
        bVar1 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
        if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
           ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Characters_BasicTitan)) {
          il2cpp_codegen_raise_invalid_cast_exception(__this_01);
        }
      }
      if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
      }
      if (__this_01 != (Characters_BasicTitan_o *)0x0) {
        pSVar18 = TypeInfo_GameManagers_TeamInfo->static_fields->Titan;
        customSet = CustomSkins_TitanSkinSelection__CreateSet
                              (__this_00,(__this_01->fields).Setup,(MethodInfo *)0x0);
        Characters_BasicTitan__Init
                  (__this_01,true,pSVar18,aiData,customSet,(__this_00->fields).SkinSlot,(MethodInfo *)0x0);
        GameManagers_InGameManager__SetupTitan(__this,__this_01,true,(MethodInfo *)0x0);
        return __this_01;
      }
    }
  }
label_181e5badd:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$SetupTitan
// il2cpp: void GameManagers_InGameManager__SetupTitan (GameManagers_InGameManager_o* __this, Characters_BasicTitan_o* titan, bool ai, const MethodInfo* method);
// 0x181e5a6b0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e5a8da: movaps xmm0, xmm1
// asm:   0x181e5a94b: jmp 0x181e5a834

void GameManagers_InGameManager__SetupTitan
               (GameManagers_InGameManager_o *__this,Characters_BasicTitan_o *titan,bool ai,MethodInfo *method
               )

{
  float *pfVar1;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameTitanSettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  Settings_FloatSetting_o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  Settings_FloatSetting_o *pSVar7;
  Settings_IntSetting_o *pSVar8;
  int iVar9;
  int32_t health;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (Il2CppMethodInitialized_184344ea4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184344ea4 = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (pSVar2 == (Settings_InGameSet_o *)0x0) goto label_181e5a97d;
  pSVar3 = (pSVar2->fields).Titan;
  if (ai) {
    if (titan == (Characters_BasicTitan_o *)0x0) goto label_181e5a97d;
    if ((titan->fields).IsCrawler != false) goto label_181e5a79d;
    if ((pSVar3 == (Settings_InGameTitanSettings_o *)0x0) ||
       (pSVar4 = (pSVar3->fields).TitanWardedEnabled, pSVar4 == (Settings_BoolSetting_o *)0x0))
    goto label_181e5a97d;
    if ((pSVar4->fields)._value != false) {
      fVar11 = UnityEngine_Random__get_value((MethodInfo *)0x0);
      pSVar5 = (pSVar3->fields).TitanChanceWarded;
      if (pSVar5 == (Settings_FloatSetting_o *)0x0) goto label_181e5a97d;
      if (fVar11 * 100.0 <= (pSVar5->fields)._value) {
        Characters_BasicTitan__SetWarded(titan,true,(MethodInfo *)0x0);
      }
    }
  }
  else {
label_181e5a79d:
    if (pSVar3 == (Settings_InGameTitanSettings_o *)0x0) goto label_181e5a97d;
  }
  pSVar4 = (pSVar3->fields).TitanSizeEnabled;
  if (pSVar4 != (Settings_BoolSetting_o *)0x0) {
    fVar11 = 3.0;
    if ((pSVar4->fields)._value == false) {
      fVar13 = 3.0;
      fVar12 = 1.0;
    }
    else {
      pSVar5 = (pSVar3->fields).TitanSizeMin;
      if ((pSVar5 == (Settings_FloatSetting_o *)0x0) ||
         (pSVar7 = (pSVar3->fields).TitanSizeMax, pSVar7 == (Settings_FloatSetting_o *)0x0))
      goto label_181e5a97d;
      fVar13 = (pSVar7->fields)._value;
      fVar12 = (pSVar5->fields)._value;
    }
    fVar13 = UnityEngine_Random__Range(fVar12,fVar13,(MethodInfo *)0x0);
    if (titan != (Characters_BasicTitan_o *)0x0) {
      Characters_BaseTitan__SetSize((Characters_BaseTitan_o *)titan,fVar13,(MethodInfo *)0x0);
      pSVar6 = (pSVar3->fields).TitanHealthMode;
      if (pSVar6 != (Settings_IntSetting_o *)0x0) {
        if ((pSVar6->fields)._value < 1) {
          if (ai) {
            return;
          }
          health = 10;
label_181e5a834:
          Characters_BaseCharacter__SetHealth((Characters_BaseCharacter_o *)titan,health,(MethodInfo *)0x0);
          return;
        }
        if (pSVar6 != (Settings_IntSetting_o *)0x0) {
          if ((pSVar6->fields)._value == 1) {
            pSVar6 = (pSVar3->fields).TitanHealthMin;
            if ((pSVar6 != (Settings_IntSetting_o *)0x0) &&
               (pSVar8 = (pSVar3->fields).TitanHealthMax, pSVar8 != (Settings_IntSetting_o *)0x0)) {
              health = UnityEngine_Random__RandomRangeInt
                                 ((pSVar6->fields)._value,(pSVar8->fields)._value,(MethodInfo *)0x0);
              goto label_181e5a834;
            }
          }
          else {
            if ((pSVar6->fields)._value != 2) {
              return;
            }
            pSVar4 = (pSVar3->fields).TitanSizeEnabled;
            if (pSVar4 != (Settings_BoolSetting_o *)0x0) {
              if ((pSVar4->fields)._value == false) {
                fVar13 = 1.0;
              }
              else {
                pSVar5 = (pSVar3->fields).TitanSizeMin;
                if ((pSVar5 == (Settings_FloatSetting_o *)0x0) ||
                   (pSVar7 = (pSVar3->fields).TitanSizeMax, pSVar7 == (Settings_FloatSetting_o *)0x0))
                goto label_181e5a97d;
                fVar13 = (pSVar5->fields)._value;
                pfVar1 = &(pSVar7->fields)._value;
                lVar10 = 0x78;
                if (*pfVar1 <= fVar13 && fVar13 != *pfVar1) {
                  lVar10 = 0x70;
                }
                fVar11 = *(float *)(*(longlong *)((longlong)&pSVar3->klass + lVar10) + 0x1c);
              }
              fVar12 = (titan->fields).Size;
              fVar14 = fVar13;
              if ((fVar13 <= fVar12) && (fVar14 = fVar12, fVar11 < fVar12)) {
                fVar14 = fVar11;
              }
              if (fVar11 - fVar13 <= 0.0) {
                fVar11 = 0.0;
              }
              else {
                fVar11 = (fVar14 - fVar13) / (fVar11 - fVar13);
              }
              if (fVar11 < 0.0) {
                fVar13 = 0.0;
              }
              else {
                fVar13 = 1.0;
                if (fVar11 <= 1.0) {
                  fVar13 = fVar11;
                }
              }
              pSVar6 = (pSVar3->fields).TitanHealthMax;
              if ((pSVar6 != (Settings_IntSetting_o *)0x0) &&
                 (pSVar8 = (pSVar3->fields).TitanHealthMin, pSVar8 != (Settings_IntSetting_o *)0x0)) {
                iVar9 = (int)((float)((pSVar6->fields)._value - (pSVar8->fields)._value) * fVar13 +
                             (float)(pSVar8->fields)._value);
                health = 1;
                if (1 < iVar9) {
                  health = iVar9;
                }
                goto label_181e5a834;
              }
            }
          }
        }
      }
    }
  }
label_181e5a97d:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$SpawnAIShifter
// il2cpp: Characters_BaseShifter_o* GameManagers_InGameManager__SpawnAIShifter (GameManagers_InGameManager_o* __this, System_String_o* type, const MethodInfo* method);
// 0x181e5b480

Characters_BaseShifter_o *
GameManagers_InGameManager__SpawnAIShifter
          (GameManagers_InGameManager_o *__this,System_String_o *type,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  System_ValueTuple_Vector3__Quaternion__o *pSVar7;
  UnityEngine_Vector3_o *pUVar8;
  Characters_BaseShifter_o *pCVar9;
  UnityEngine_Vector3_o local_98;
  UnityEngine_Vector3_Fields local_88;
  undefined8 local_78;
  undefined4 uStack_70;
  UnityEngine_Quaternion_o UStack_6c;
  undefined8 local_58;
  float fStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_44;
  UnityEngine_Vector3_o local_38;
  System_ValueTuple_Vector3__Quaternion__o local_28;
  
  local_78 = 0;
  uStack_70 = 0;
  UStack_6c.fields.x = 0.0;
  UStack_6c.fields.y = 0.0;
  UStack_6c.fields.z = 0.0;
  UStack_6c.fields.w = 0.0;
  pSVar7 = GameManagers_InGameManager__GetTitanSpawnPoint(&local_28,__this,(MethodInfo *)0x0);
  local_78._0_4_ = (pSVar7->fields).Item1.fields.x;
  local_78._4_4_ = (pSVar7->fields).Item1.fields.y;
  uStack_70 = (undefined4)*(undefined8 *)&(pSVar7->fields).Item1.fields.z;
  uVar3 = (pSVar7->fields).Item2.fields.x;
  uVar4 = (pSVar7->fields).Item2.fields.y;
  UStack_6c.fields.z = (pSVar7->fields).Item2.fields.z;
  UStack_6c.fields.w = (pSVar7->fields).Item2.fields.w;
  local_58._0_4_ = (pSVar7->fields).Item1.fields.x;
  local_58._4_4_ = (pSVar7->fields).Item1.fields.y;
  uVar5 = (pSVar7->fields).Item2.fields.x;
  uVar6 = (pSVar7->fields).Item2.fields.y;
  uStack_44._0_4_ = (pSVar7->fields).Item2.fields.z;
  uStack_44._4_4_ = (pSVar7->fields).Item2.fields.w;
  fStack_50 = (float)*(undefined8 *)&(pSVar7->fields).Item1.fields.z;
  UStack_6c.fields.x = (float)uVar3;
  UStack_6c.fields.y = (float)uVar4;
  uStack_4c = uVar5;
  uStack_48 = uVar6;
  pUVar8 = UnityEngine_Quaternion__Internal_ToEulerRad(&local_98,&UStack_6c,(MethodInfo *)0x0);
  uVar1 = (pUVar8->fields).x;
  uVar2 = (pUVar8->fields).y;
  local_88.y = (float)uVar2 * 57.29578;
  local_88.x = (float)uVar1 * 57.29578;
  local_88.z = (pUVar8->fields).z * 57.29578;
  local_98.fields.x = (float)local_58;
  local_98.fields.y = local_58._4_4_;
  local_98.fields.z = fStack_50;
  pUVar8 = UnityEngine_Quaternion__Internal_MakePositive
                     (&local_38,(UnityEngine_Vector3_o *)&local_88,(MethodInfo *)0x0);
  pCVar9 = GameManagers_InGameManager__SpawnAIShifterAt
                     (__this,type,&local_98,(pUVar8->fields).y,(MethodInfo *)0x0);
  return pCVar9;
}


// GameManagers.InGameManager$$SpawnAIShifterAt
// il2cpp: Characters_BaseShifter_o* GameManagers_InGameManager__SpawnAIShifterAt (GameManagers_InGameManager_o* __this, System_String_o* type, UnityEngine_Vector3_o position, float rotationY, const MethodInfo* method);
// 0x181e5b110

Characters_BaseShifter_o *
GameManagers_InGameManager__SpawnAIShifterAt
          (GameManagers_InGameManager_o *__this,System_String_o *type,UnityEngine_Vector3_o *position,
          float rotationY,MethodInfo *method)

{
  byte bVar1;
  int32_t difficulty;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameGeneralSettings_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  UnityEngine_Quaternion_o *pUVar8;
  Characters_BaseShifter_o *pCVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  System_String_o *a;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Quaternion_Fields local_38 [3];
  
  if (Il2CppMethodInitialized_184344ea5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Eren");
    il2cpp_codegen_initialize_runtime_metadata(&"Annie");
    il2cpp_codegen_initialize_runtime_metadata(&"WallColossal");
    il2cpp_codegen_initialize_runtime_metadata(&"Armored");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184344ea5 = '\x01';
  }
  local_48.z = 0.0;
  local_48._0_8_ = (ulonglong)(uint)(rotationY * 0.017453292) << 0x20;
  pUVar8 = UnityEngine_Quaternion__Internal_FromEulerRad
                     ((UnityEngine_Quaternion_o *)local_38,(UnityEngine_Vector3_o *)&local_48,
                      (MethodInfo *)0x0);
  a = "";
  uVar5._0_4_ = (pUVar8->fields).x;
  uVar5._4_4_ = (pUVar8->fields).y;
  uVar6._0_4_ = (pUVar8->fields).z;
  uVar6._4_4_ = (pUVar8->fields).w;
  bVar7 = System_String__op_Equality(type,"Annie",(MethodInfo *)0x0);
  if (bVar7) {
    if ((TypeInfo_Characters_CharacterPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterPrefabs);
    }
    a = TypeInfo_Characters_CharacterPrefabs->static_fields->AnnieShifter;
  }
  else {
    bVar7 = System_String__op_Equality(type,"Armored",(MethodInfo *)0x0);
    if (bVar7) {
      if ((TypeInfo_Characters_CharacterPrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterPrefabs);
      }
      a = TypeInfo_Characters_CharacterPrefabs->static_fields->ArmoredShifter;
    }
    else {
      bVar7 = System_String__op_Equality(type,"Eren",(MethodInfo *)0x0);
      if (bVar7) {
        if ((TypeInfo_Characters_CharacterPrefabs->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterPrefabs);
        }
        a = TypeInfo_Characters_CharacterPrefabs->static_fields->ErenShifter;
      }
      else {
        bVar7 = System_String__op_Equality(type,"WallColossal",(MethodInfo *)0x0);
        if (bVar7) {
          if ((TypeInfo_Characters_CharacterPrefabs->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterPrefabs);
          }
          a = TypeInfo_Characters_CharacterPrefabs->static_fields->WallColossal;
        }
      }
    }
  }
  bVar7 = System_String__op_Equality(a,"",(MethodInfo *)0x0);
  if (bVar7) {
    return (Characters_BaseShifter_o *)0x0;
  }
  local_48.x = (position->fields).x;
  local_48.y = (position->fields).y;
  local_48.z = (position->fields).z;
  local_38[0]._0_8_ = uVar5;
  local_38[0]._8_8_ = uVar6;
  pCVar9 = (Characters_BaseShifter_o *)
           Characters_CharacterSpawner__Spawn
                     (a,(UnityEngine_Vector3_o *)&local_48,(UnityEngine_Quaternion_o *)local_38,
                      (MethodInfo *)0x0);
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar2 != (Settings_InGameSet_o *)0x0) &&
      (pSVar3 = (pSVar2->fields).General, pSVar3 != (Settings_InGameGeneralSettings_o *)0x0)) &&
     (pSVar4 = (pSVar3->fields).Difficulty, pSVar4 != (Settings_IntSetting_o *)0x0)) {
    difficulty = (pSVar4->fields)._value;
    if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
    }
    pSVar10 = Characters_CharacterData__GetShifterAI(difficulty,type,(MethodInfo *)0x0);
    if (pCVar9 != (Characters_BaseShifter_o *)0x0) {
      bVar1 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
      if (((pCVar9->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pCVar9->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Characters_BaseShifter)) {
        il2cpp_codegen_raise_invalid_cast_exception(pCVar9);
      }
    }
    if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    }
    if (pCVar9 != (Characters_BaseShifter_o *)0x0) {
      (*(pCVar9->klass->vtable)._203_Init.methodPtr)
                (pCVar9,true,TypeInfo_GameManagers_TeamInfo->static_fields->Titan,pSVar10,0.0,
                 (pCVar9->klass->vtable)._203_Init.method);
      return pCVar9;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$SpawnAIHuman
// il2cpp: Characters_Human_o* GameManagers_InGameManager__SpawnAIHuman (GameManagers_InGameManager_o* __this, int32_t costume, System_String_o* costumeName, System_String_o* loadout, const MethodInfo* method);
// 0x181e5b010

Characters_Human_o *
GameManagers_InGameManager__SpawnAIHuman
          (GameManagers_InGameManager_o *__this,int32_t costume,System_String_o *costumeName,
          System_String_o *loadout,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  System_ValueTuple_Vector3__Quaternion__o *pSVar7;
  UnityEngine_Vector3_o *pUVar8;
  Characters_Human_o *pCVar9;
  UnityEngine_Vector3_o local_b8;
  UnityEngine_Vector3_Fields local_a8;
  undefined8 local_98;
  undefined4 uStack_90;
  UnityEngine_Quaternion_o UStack_8c;
  undefined8 local_78;
  float fStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  UnityEngine_Vector3_o local_58;
  System_ValueTuple_Vector3__Quaternion__o local_48;
  
  local_98 = 0;
  uStack_90 = 0;
  UStack_8c.fields.x = 0.0;
  UStack_8c.fields.y = 0.0;
  UStack_8c.fields.z = 0.0;
  UStack_8c.fields.w = 0.0;
  pSVar7 = GameManagers_InGameManager__GetHumanSpawnPoint(&local_48,__this,(MethodInfo *)0x0);
  local_98._0_4_ = (pSVar7->fields).Item1.fields.x;
  local_98._4_4_ = (pSVar7->fields).Item1.fields.y;
  uStack_90 = (undefined4)*(undefined8 *)&(pSVar7->fields).Item1.fields.z;
  uVar3 = (pSVar7->fields).Item2.fields.x;
  uVar4 = (pSVar7->fields).Item2.fields.y;
  UStack_8c.fields.z = (pSVar7->fields).Item2.fields.z;
  UStack_8c.fields.w = (pSVar7->fields).Item2.fields.w;
  local_78._0_4_ = (pSVar7->fields).Item1.fields.x;
  local_78._4_4_ = (pSVar7->fields).Item1.fields.y;
  uVar5 = (pSVar7->fields).Item2.fields.x;
  uVar6 = (pSVar7->fields).Item2.fields.y;
  uStack_64._0_4_ = (pSVar7->fields).Item2.fields.z;
  uStack_64._4_4_ = (pSVar7->fields).Item2.fields.w;
  fStack_70 = (float)*(undefined8 *)&(pSVar7->fields).Item1.fields.z;
  UStack_8c.fields.x = (float)uVar3;
  UStack_8c.fields.y = (float)uVar4;
  uStack_6c = uVar5;
  uStack_68 = uVar6;
  pUVar8 = UnityEngine_Quaternion__Internal_ToEulerRad(&local_b8,&UStack_8c,(MethodInfo *)0x0);
  uVar1 = (pUVar8->fields).x;
  uVar2 = (pUVar8->fields).y;
  local_a8.y = (float)uVar2 * 57.29578;
  local_a8.x = (float)uVar1 * 57.29578;
  local_a8.z = (pUVar8->fields).z * 57.29578;
  local_b8.fields.x = (float)local_78;
  local_b8.fields.y = local_78._4_4_;
  local_b8.fields.z = fStack_70;
  pUVar8 = UnityEngine_Quaternion__Internal_MakePositive
                     (&local_58,(UnityEngine_Vector3_o *)&local_a8,(MethodInfo *)0x0);
  pCVar9 = GameManagers_InGameManager__SpawnAIHumanAt
                     (__this,costume,costumeName,loadout,&local_b8,(pUVar8->fields).y,(MethodInfo *)0x0);
  return pCVar9;
}


// GameManagers.InGameManager$$SpawnAIHumanAt
// il2cpp: Characters_Human_o* GameManagers_InGameManager__SpawnAIHumanAt (GameManagers_InGameManager_o* __this, int32_t costume, System_String_o* costumeName, System_String_o* loadout, UnityEngine_Vector3_o position, float rotationY, const MethodInfo* method);
// 0x181e5a990
// eh: try 0x181e5aad9..0x181e5ab18 -> pad 0x18333cd80 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// eh: try 0x181e5ac8c..0x181e5acf2 -> pad 0x18333cde0 catch Il2CppExceptionWrapper
// eh: try 0x181e5aff0..0x181e5aff6 -> pad 0x18333cd80 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// eh: try 0x181e5aff6..0x181e5b001 -> pad 0x18333cde0 catch Il2CppExceptionWrapper
// asm: 57 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e5ad1c: mov rdx, qword ptr [rip + 0x22274a5]  ; MethodInfo_System_Collections_Generic_List_Enumerator_HumanCustomSet_Dispose
// asm:   0x181e5ad23: mov rcx, qword ptr [rsp + 0x68]
// asm:   0x181e5ad28: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e5ad2d: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x181e5ad32: test rcx, rcx
// asm:   0x181e5ad35: jne 0x181e5b001
// asm:   0x181e5ad3b: mov esi, dword ptr [rsp + 0xf8]
// asm:   0x181e5ad42: mov r12, qword ptr [rsp + 0x40]
// asm:   0x181e5ad47: mov ebx, dword ptr [rsp + 0x50]
// asm:   0x181e5ad4b: mov edi, dword ptr [rsp + 0x54]
// asm:   0x181e5ad4f: movzx r14d, byte ptr [rsp + 0x30]
// asm:   0x181e5ad55: jmp 0x181e5ad5b
// asm:   0x181e5afbe: mov rcx, qword ptr [rdx + 0xb8]
// asm:   0x181e5afc5: mov rdx, qword ptr [rcx + 0x50]
// asm:   0x181e5afc9: mov rcx, qword ptr [rdx + 0x68]
// asm:   0x181e5afcd: mov rdx, qword ptr [rcx + 0x148]
// asm:   0x181e5afd4: xor r8d, r8d
// asm:   0x181e5afd7: mov edx, dword ptr [rdx + 0x1c]
// asm:   0x181e5afda: mov rcx, rbx
// asm:   0x181e5afdd: call 0x18210eb20  ; Characters_BaseCharacter__SetHealth()
// asm:   0x181e5afe2: mov rax, rbx
// asm:   0x181e5afe5: jmp 0x181e5ab1c
// asm:   0x181e5b001: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333cd80: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333cd85: push rbx
// asm:   0x18333cd86: push rbp
// asm:   0x18333cd87: sub rsp, 0x38
// asm:   0x18333cd8b: mov rbp, rdx
// asm:   0x18333cd8e: mov rbx, qword ptr [rbp + 0xa0]
// asm:   0x18333cd95: mov rdx, qword ptr [rbx]
// asm:   0x18333cd98: mov rdx, qword ptr [rdx]
// asm:   0x18333cd9b: mov rcx, qword ptr [rip + 0x101802e]
// asm:   0x18333cda2: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x18333cda7: test al, al
// asm:   0x18333cda9: je 0x18333cdb7
// asm:   0x18333cdab: movabs rax, 0
// asm:   0x18333cdb5: jmp 0x18333cdd5
// asm:   0x18333cdb7: mov rax, qword ptr [rbx]
// asm:   0x18333cdba: mov qword ptr [rbp + 0x98], rax
// asm:   0x18333cdc1: lea rdx, [rip + 0xc9f1c0]
// asm:   0x18333cdc8: lea rcx, [rbp + 0x98]
// asm:   0x18333cdcf: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18333cdd5: add rsp, 0x38
// asm:   0x18333cdd9: pop rbp
// asm:   0x18333cdda: pop rbx
// asm:   0x18333cddb: ret 
// asm:   0x18333cde0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333cde5: push rbp
// asm:   0x18333cde6: sub rsp, 0x30
// asm:   0x18333cdea: mov rbp, rdx
// asm:   0x18333cded: mov rax, qword ptr [rbp + 0xa8]
// asm:   0x18333cdf4: mov rcx, qword ptr [rax]
// asm:   0x18333cdf7: mov qword ptr [rbp + 0x60], rcx
// asm:   0x18333cdfb: movabs rax, 0
// asm:   0x18333ce05: add rsp, 0x30
// asm:   0x18333ce09: pop rbp
// asm:   0x18333ce0a: ret 

Characters_Human_o *
GameManagers_InGameManager__SpawnAIHumanAt
          (GameManagers_InGameManager_o *__this,int32_t costume,System_String_o *costumeName,
          System_String_o *loadout,UnityEngine_Vector3_o *position,float rotationY,MethodInfo *method)

{
  byte bVar1;
  Settings_SettingsManager_StaticFields *pSVar2;
  Settings_SetSettingsContainer_HumanCustomSet__o *pSVar3;
  Settings_SetSettingsContainer_HumanCustomSet__o *pSVar4;
  Settings_ListSetting_T__o *__this_00;
  System_Collections_Generic_List_T__o *pSVar5;
  Settings_StringSetting_o *pSVar6;
  Settings_IntSetting_o *pSVar7;
  Characters_HumanSetup_o *__this_01;
  Settings_InGameSet_o *pSVar8;
  Settings_InGameMiscSettings_o *pSVar9;
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUVar10;
  bool bVar11;
  int32_t iVar12;
  Settings_HumanCustomSet_o *__this_02;
  Settings_InGameCharacterSettings_o *__this_03;
  UnityEngine_Quaternion_o *pUVar13;
  Characters_Human_o *__this_04;
  Settings_ListSetting_T__o *pSVar14;
  int32_t iVar15;
  int iVar16;
  bool bVar17;
  Settings_HumanCustomSet_o *local_a8;
  float local_a0;
  int32_t local_98;
  int local_94;
  int32_t local_90;
  undefined1 local_88 [16];
  Il2CppObject *local_78;
  undefined1 local_68 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_60;
  Il2CppObject *local_58;
  
  if (Il2CppMethodInitialized_184344ea6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterPrefabs);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_HumanCustomSet_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_HumanCustomSet_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_HumanCustomSet_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSpecials);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InGameCharacterSettings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_HumanCustomSet_GetCount);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_HumanCustomSet_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_TypedSetting_List_HumanCustomSet_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184344ea6 = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  pUStack_60 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_58 = (Il2CppObject *)0x0;
  bVar17 = costume != -1;
  __this_02 = (Settings_HumanCustomSet_o *)0x0;
  local_a8 = (Settings_HumanCustomSet_o *)0x0;
  if (costume == -1) {
    bVar11 = System_String__IsNullOrWhiteSpace(costumeName,(MethodInfo *)0x0);
    if (bVar11) {
      return (Characters_Human_o *)0x0;
    }
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_HumanCustomSet);
    Settings_HumanCustomSet___ctor(__this_02,(MethodInfo *)0x0);
    if (__this_02 == (Settings_HumanCustomSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_a8 = __this_02;
    (*(__this_02->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
              (__this_02,costumeName,(__this_02->klass->vtable)._9_DeserializeFromJsonString.method);
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields;
  if ((pSVar2->HumanCustomSettings == (Settings_HumanCustomSettings_o *)0x0) ||
     (pSVar3 = (pSVar2->HumanCustomSettings->fields).CustomSets,
     pSVar3 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) goto label_181e5afea;
  local_90 = costume;
  if (costume == -1) {
label_181e5abeb:
    pSVar4 = (pSVar2->HumanCustomSettings->fields).Costume1Sets;
    if ((pSVar4 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0) ||
       (__this_00 = (pSVar4->fields).Sets, __this_00 == (Settings_ListSetting_T__o *)0x0)) goto label_181e5afea;
    pSVar14 = (pSVar3->fields).Sets;
    iVar12 = Settings_ListSetting_object___GetCount
                       (__this_00,
                        (MethodInfo_182B100 *)MethodInfo_Settings_ListSetting_HumanCustomSet_GetCount);
    iVar15 = 0;
    bVar11 = costume != -1;
    costume = iVar15;
    local_98 = iVar12;
    if (bVar11) goto label_181e5ac33;
    iVar16 = 0;
  }
  else {
    local_98 = 0;
    if (costume == 1) {
      if ((pSVar2->HumanCustomSettings == (Settings_HumanCustomSettings_o *)0x0) ||
         (pSVar3 = (pSVar2->HumanCustomSettings->fields).Costume1Sets,
         pSVar3 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) goto label_181e5afea;
      pSVar14 = (pSVar3->fields).Sets;
    }
    else if (costume == 2) {
      if ((pSVar2->HumanCustomSettings == (Settings_HumanCustomSettings_o *)0x0) ||
         (pSVar3 = (pSVar2->HumanCustomSettings->fields).Costume2Sets,
         pSVar3 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) goto label_181e5afea;
      pSVar14 = (pSVar3->fields).Sets;
    }
    else {
      if (costume != 3) goto label_181e5abeb;
      if ((pSVar2->HumanCustomSettings == (Settings_HumanCustomSettings_o *)0x0) ||
         (pSVar3 = (pSVar2->HumanCustomSettings->fields).Costume3Sets,
         pSVar3 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) goto label_181e5afea;
      pSVar14 = (pSVar3->fields).Sets;
    }
label_181e5ac33:
    iVar12 = local_98;
    if ((pSVar14 == (Settings_ListSetting_T__o *)0x0) ||
       (pSVar5 = (pSVar14->fields)._value, pSVar5 == (System_Collections_Generic_List_T__o *)0x0))
    goto label_181e5afea;
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_88,pSVar5,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_HumanCustomSet_GetEnumerator);
    local_68 = (undefined1  [8])local_88._0_8_;
    pUStack_60 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_88._8_8_;
    local_58 = local_78;
    local_88._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    iVar16 = 0;
    local_88._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_68;
    while (local_94 = iVar16,
          bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                              (MethodInfo_153A2A0 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_HumanCustomSet_MoveNext),
          iVar15 = costume, bVar11) {
      if (local_58 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if (local_58[3].klass == (Il2CppClass *)0x0) {
        ThrowNullReferenceException();
      }
      bVar11 = System_String__op_Equality
                         (((local_58[3].klass)->_1).byval_arg.data,costumeName,(MethodInfo *)0x0);
      if (bVar11) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_68,
                   MethodInfo_System_Collections_Generic_List_Enumerator_HumanCustomSet_Dispose);
        goto label_181e5ad64;
      }
      iVar16 = iVar16 + 1;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_68,
               MethodInfo_System_Collections_Generic_List_Enumerator_HumanCustomSet_Dispose);
  }
  if (bVar17) {
    return (Characters_Human_o *)0x0;
  }
label_181e5ad64:
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameCharacterSettings);
  Settings_InGameCharacterSettings___ctor(__this_03,(MethodInfo *)0x0);
  if ((__this_03 != (Settings_InGameCharacterSettings_o *)0x0) &&
     (pSVar6 = (__this_03->fields).Loadout, pSVar6 != (Settings_StringSetting_o *)0x0)) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)loadout,
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    pSVar7 = (__this_03->fields).CustomSet;
    if (pSVar7 != (Settings_IntSetting_o *)0x0) {
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar7,iVar16 + iVar12,
                 (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      pSVar7 = (__this_03->fields).Costume;
      if (pSVar7 != (Settings_IntSetting_o *)0x0) {
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)pSVar7,iVar15 + -1,
                   (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        local_a8 = (Settings_HumanCustomSet_o *)((ulonglong)(uint)(rotationY * 0.017453292) << 0x20);
        local_a0 = 0.0;
        pUVar13 = UnityEngine_Quaternion__Internal_FromEulerRad
                            ((UnityEngine_Quaternion_o *)local_88,(UnityEngine_Vector3_o *)&local_a8,
                             (MethodInfo *)0x0);
        pSVar5 = *(System_Collections_Generic_List_T__o **)&pUVar13->fields;
        pUVar10 = *(UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o **)&(pUVar13->fields).z;
        pSVar6 = (__this_03->fields).Special;
        if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
        }
        if (pSVar6 != (Settings_StringSetting_o *)0x0) {
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar6,
                     (Il2CppObject *)TypeInfo_Characters_HumanSpecials->static_fields->DefaultSpecial,
                     (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          if ((TypeInfo_Characters_CharacterPrefabs->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterPrefabs);
          }
          local_a8 = *(Settings_HumanCustomSet_o **)&position->fields;
          local_a0 = (position->fields).z;
          local_88._0_8_ = pSVar5;
          local_88._8_8_ = pUVar10;
          __this_04 = (Characters_Human_o *)
                      Characters_CharacterSpawner__Spawn
                                (TypeInfo_Characters_CharacterPrefabs->static_fields->Human,
                                 (UnityEngine_Vector3_o *)&local_a8,(UnityEngine_Quaternion_o *)local_88,
                                 (MethodInfo *)0x0);
          if (__this_04 != (Characters_Human_o *)0x0) {
            bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
            if (((__this_04->klass->_2).typeHierarchyDepth < bVar1) ||
               ((__this_04->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_Characters_Human)) {
              il2cpp_codegen_raise_invalid_cast_exception(__this_04);
            }
          }
          if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
          }
          if (__this_04 != (Characters_Human_o *)0x0) {
            Characters_Human__Init
                      (__this_04,true,TypeInfo_GameManagers_TeamInfo->static_fields->Human,__this_03,
                       (MethodInfo *)0x0);
            if (local_90 == -1) {
              __this_01 = (__this_04->fields).Setup;
              if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
              }
              iVar12 = GameManagers_HumanLoadout__ToWeapon(loadout,(MethodInfo *)0x0);
              if (__this_01 == (Characters_HumanSetup_o *)0x0) goto label_181e5afea;
              Characters_HumanSetup__Load(__this_01,__this_02,iVar12,false,(MethodInfo *)0x0);
            }
            pSVar8 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
            if (((pSVar8 != (Settings_InGameSet_o *)0x0) &&
                (pSVar9 = (pSVar8->fields).Misc, pSVar9 != (Settings_InGameMiscSettings_o *)0x0)) &&
               (pSVar7 = (pSVar9->fields).HumanHealth, pSVar7 != (Settings_IntSetting_o *)0x0)) {
              if (1 < (pSVar7->fields)._value) {
                Characters_BaseCharacter__SetHealth
                          ((Characters_BaseCharacter_o *)__this_04,
                           (((((TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent->fields).Misc)
                             ->fields).HumanHealth)->fields)._value,(MethodInfo *)0x0);
                return __this_04;
              }
              return __this_04;
            }
          }
        }
      }
    }
  }
label_181e5afea:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$OnSetLabelRPC
// il2cpp: void GameManagers_InGameManager__OnSetLabelRPC (System_String_o* label, System_String_o* message, float time, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e58040

void GameManagers_InGameManager__OnSetLabelRPC
               (System_String_o *label,System_String_o *message,float time,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  byte bVar1;
  UI_InGameMenu_o *__this;
  Photon_Realtime_Player_o *pPVar2;
  
  if (Il2CppMethodInitialized_184344ea7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_184344ea7 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar2 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  if ((info->fields).Sender == pPVar2) {
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    if (Il2CppMethodInitialized_184344ea8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      Il2CppMethodInitialized_184344ea8 = '\x01';
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    __this = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (__this == (UI_InGameMenu_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
    if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this,TypeInfo_UI_InGameMenu);
    }
    UI_InGameMenu__SetLabel(__this,label,message,time,(MethodInfo *)0x0);
  }
  return;
}


// GameManagers.InGameManager$$SetLabel
// il2cpp: void GameManagers_InGameManager__SetLabel (System_String_o* label, System_String_o* message, float time, const MethodInfo* method);
// 0x181e5a5d0

void GameManagers_InGameManager__SetLabel
               (System_String_o *label,System_String_o *message,float time,MethodInfo *method)

{
  byte bVar1;
  UI_InGameMenu_o *__this;
  
  if (Il2CppMethodInitialized_184344ea8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184344ea8 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  __this = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (__this != (UI_InGameMenu_o *)0x0) {
    bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this->klass->_2).typeHierarchyDepth) &&
       ((__this->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
      UI_InGameMenu__SetLabel(__this,label,message,time,(MethodInfo *)0x0);
      return;
    }
    il2cpp_codegen_raise_invalid_cast_exception(__this,TypeInfo_UI_InGameMenu);
  }
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$EndGame
// il2cpp: void GameManagers_InGameManager__EndGame (GameManagers_InGameManager_o* __this, float time, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e53c30

void GameManagers_InGameManager__EndGame
               (GameManagers_InGameManager_o *__this,float time,Photon_Pun_PhotonMessageInfo_o *info,
               MethodInfo *method)

{
  float num;
  Settings_UISettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  CustomLogic_CustomLogicEvaluator_o *pCVar3;
  bool bVar4;
  Photon_Realtime_Player_o *pPVar5;
  Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *__this_00;
  System_String_o *pSVar6;
  
  if (Il2CppMethodInitialized_184344ea9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"(");
    il2cpp_codegen_initialize_runtime_metadata(&")");
    il2cpp_codegen_initialize_runtime_metadata(&" Round ended.");
    Il2CppMethodInitialized_184344ea9 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar5 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  if (((info->fields).Sender == pPVar5) && ((__this->fields).IsEnding == false)) {
    (__this->fields).EndTimeLeft = time;
    (__this->fields).IsEnding = true;
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if (bVar4) {
      if (Il2CppMethodInitialized_184344eaa == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager_WaitAndEndGame_d__91);
        Il2CppMethodInitialized_184344eaa = '\x01';
      }
      __this_00 = (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_GameManagers_InGameManager_WaitAndEndGame_d__91);
      GameManagers_InGameManager__WaitAndEndGame_d__91___ctor(__this_00,0,(MethodInfo *)0x0);
      if (__this_00 == (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)0x0) goto label_181e53e70;
      *(float *)&(__this_00->fields).__4__this = time;
      UnityEngine_MonoBehaviour__StartCoroutine_Auto
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                 (MethodInfo *)0x0);
    }
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if ((pSVar1 == (Settings_UISettings_o *)0x0) ||
       (pSVar2 = (pSVar1->fields).GameFeed, pSVar2 == (Settings_BoolSetting_o *)0x0)) {
label_181e53e70:
      ThrowNullReferenceException();
    }
    if ((pSVar2->fields)._value != false) {
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if (pCVar3 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_181e53e70;
      num = (pCVar3->fields).CurrentTime;
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      pSVar6 = Utility_Util__FormatFloat(num,2,(MethodInfo *)0x0);
      pSVar6 = System_String__Concat_1969b70
                         ("(",pSVar6,")",(MethodInfo *)0x0);
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      pSVar6 = GameManagers_ChatManager__GetColorString(pSVar6,3,false,(MethodInfo *)0x0);
      pSVar6 = System_String__Concat_1969e50(pSVar6," Round ended.",(MethodInfo *)0x0);
      GameManagers_ChatManager__AddFeed(pSVar6,(MethodInfo *)0x0);
    }
  }
  return;
}


// GameManagers.InGameManager$$WaitAndEndGame
// il2cpp: System_Collections_IEnumerator_o* GameManagers_InGameManager__WaitAndEndGame (GameManagers_InGameManager_o* __this, float time, const MethodInfo* method);
// 0x181e5f6b0

System_Collections_IEnumerator_o *
GameManagers_InGameManager__WaitAndEndGame(GameManagers_InGameManager_o *__this,float time,MethodInfo *method)

{
  Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *__this_00;
  
  if (Il2CppMethodInitialized_184344eaa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager_WaitAndEndGame_d__91);
    Il2CppMethodInitialized_184344eaa = '\x01';
  }
  __this_00 = (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameManagers_InGameManager_WaitAndEndGame_d__91);
  GameManagers_InGameManager__WaitAndEndGame_d__91___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)0x0) {
    *(float *)&(__this_00->fields).__4__this = time;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$ResetPersistentPlayerProperties
// il2cpp: void GameManagers_InGameManager__ResetPersistentPlayerProperties (const MethodInfo* method);
// 0x181e59480

void GameManagers_InGameManager__ResetPersistentPlayerProperties(MethodInfo *method)

{
  ExitGames_Client_Photon_Hashtable_o *__this;
  GameManagers_PlayerInfo_o *pGVar1;
  Settings_ProfileSettings_o *pSVar2;
  Settings_NameSetting_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  System_String_o *selectedRoleName;
  Photon_Realtime_Player_o *pPVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  System_Collections_Generic_Dictionary_string__object__o *__this_00;
  Il2CppObject *pIVar8;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_28;
  undefined4 local_24 [3];
  
  if (Il2CppMethodInitialized_184344eab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    Il2CppMethodInitialized_184344eab = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if ((pPVar5 != (Photon_Realtime_Player_o *)0x0) &&
     (__this = (pPVar5->fields)._CustomProperties_k__BackingField,
     __this != (ExitGames_Client_Photon_Hashtable_o *)0x0)) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
               (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_object_object_Clear);
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    pGVar1 = TypeInfo_GameManagers_InGameManager->static_fields->MyPlayerInfo;
    if (((pGVar1 != (GameManagers_PlayerInfo_o *)0x0) &&
        (pSVar2 = (pGVar1->fields).Profile, pSVar2 != (Settings_ProfileSettings_o *)0x0)) &&
       (pSVar3 = (pSVar2->fields).Name, pSVar3 != (Settings_NameSetting_o *)0x0)) {
      pSVar6 = (pSVar3->fields)._value;
      if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
      }
      pSVar6 = Anticheat_ChatFilter__FilterBadWords(pSVar6,(MethodInfo *)0x0);
      if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
      }
      pSVar6 = MiscExtensions__HexColor(pSVar6,(MethodInfo *)0x0);
      pGVar1 = TypeInfo_GameManagers_InGameManager->static_fields->MyPlayerInfo;
      if (((pGVar1 != (GameManagers_PlayerInfo_o *)0x0) &&
          (pSVar2 = (pGVar1->fields).Profile, pSVar2 != (Settings_ProfileSettings_o *)0x0)) &&
         (pSVar3 = (pSVar2->fields).Guild, pSVar3 != (Settings_NameSetting_o *)0x0)) {
        pSVar7 = Anticheat_ChatFilter__FilterBadWords((pSVar3->fields)._value,(MethodInfo *)0x0);
        pSVar7 = MiscExtensions__HexColor(pSVar7,(MethodInfo *)0x0);
        pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
        pGVar1 = TypeInfo_GameManagers_InGameManager->static_fields->MyPlayerInfo;
        if (((pGVar1 != (GameManagers_PlayerInfo_o *)0x0) &&
            (pSVar2 = (pGVar1->fields).Profile, pSVar2 != (Settings_ProfileSettings_o *)0x0)) &&
           (pSVar4 = (pSVar2->fields).GuildRoleSprite, pSVar4 != (Settings_StringSetting_o *)0x0)) {
          selectedRoleName = (pSVar4->fields)._value;
          if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
          }
          pSVar7 = PatreonEffects_RoleSpriteHelpers__ComposeGuildWithRoleSprite
                             (pPVar5,pSVar7,selectedRoleName,(MethodInfo *)0x0);
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_object);
          System_Collections_Generic_Dictionary_object__object____ctor
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                     (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor
                    );
          if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
          }
          if (__this_00 != (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                       (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->Name,
                       (Il2CppObject *)pSVar6,
                       (MethodInfo_146B4B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                       (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->Guild,
                       (Il2CppObject *)pSVar7,
                       (MethodInfo_146B4B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                       (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->Team,
                       (Il2CppObject *)0x0,
                       (MethodInfo_146B4B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
            pSVar6 = TypeInfo_GameManagers_PlayerProperty->static_fields->CharacterViewId;
            local_res10[0] = 0xffffffff;
            pIVar8 = il2cpp_value_box(g_data_184354e08,local_res10);
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                       (Il2CppObject *)pSVar6,pIVar8,
                       (MethodInfo_146B4B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                       (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->CustomMapHash,
                       (Il2CppObject *)0x0,
                       (MethodInfo_146B4B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                       (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->CustomLogicHash,
                       (Il2CppObject *)0x0,
                       (MethodInfo_146B4B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                       (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->CustomAddonHash,
                       (Il2CppObject *)0x0,
                       (MethodInfo_146B4B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                       (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->Status,
                       (Il2CppObject *)0x0,
                       (MethodInfo_146B4B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                       (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->Character,
                       (Il2CppObject *)0x0,
                       (MethodInfo_146B4B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                       (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->Loadout,
                       (Il2CppObject *)0x0,
                       (MethodInfo_146B4B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
            pSVar6 = TypeInfo_GameManagers_PlayerProperty->static_fields->Kills;
            local_res18[0] = 0;
            pIVar8 = il2cpp_value_box(g_data_184354e08,local_res18);
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                       (Il2CppObject *)pSVar6,pIVar8,
                       (MethodInfo_146B4B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
            pSVar6 = TypeInfo_GameManagers_PlayerProperty->static_fields->Deaths;
            local_res20[0] = 0;
            pIVar8 = il2cpp_value_box(g_data_184354e08,local_res20);
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                       (Il2CppObject *)pSVar6,pIVar8,
                       (MethodInfo_146B4B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
            pSVar6 = TypeInfo_GameManagers_PlayerProperty->static_fields->HighestDamage;
            local_28 = 0;
            pIVar8 = il2cpp_value_box(g_data_184354e08,&local_28);
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                       (Il2CppObject *)pSVar6,pIVar8,
                       (MethodInfo_146B4B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
            pSVar6 = TypeInfo_GameManagers_PlayerProperty->static_fields->TotalDamage;
            local_24[0] = 0;
            pIVar8 = il2cpp_value_box(g_data_184354e08,local_24);
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                       (Il2CppObject *)pSVar6,pIVar8,
                       (MethodInfo_146B4B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                       (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->SpawnPoint,
                       (Il2CppObject *)"null",
                       (MethodInfo_146B4B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
            pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
            PhotonExtensions__SetCustomProperties(pPVar5,__this_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$ResetPlayerKD
// il2cpp: void GameManagers_InGameManager__ResetPlayerKD (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x181e59c40

void GameManagers_InGameManager__ResetPlayerKD(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Collections_Generic_Dictionary_string__object__o *__this;
  Il2CppObject *pIVar2;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_28;
  undefined4 local_24 [3];
  
  if (Il2CppMethodInitialized_184344eac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_184344eac = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar1 = TypeInfo_GameManagers_PlayerProperty->static_fields->Kills;
  local_res18[0] = 0;
  pIVar2 = il2cpp_value_box(g_data_184354e08,local_res18);
  if (__this != (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this,(Il2CppObject *)pSVar1,pIVar2
               ,(MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    pSVar1 = TypeInfo_GameManagers_PlayerProperty->static_fields->Deaths;
    local_res20[0] = 0;
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res20);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this,(Il2CppObject *)pSVar1,pIVar2
               ,(MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    pSVar1 = TypeInfo_GameManagers_PlayerProperty->static_fields->HighestDamage;
    local_28 = 0;
    pIVar2 = il2cpp_value_box(g_data_184354e08,&local_28);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this,(Il2CppObject *)pSVar1,pIVar2
               ,(MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    pSVar1 = TypeInfo_GameManagers_PlayerProperty->static_fields->TotalDamage;
    local_24[0] = 0;
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_24);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this,(Il2CppObject *)pSVar1,pIVar2
               ,(MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    PhotonExtensions__SetCustomProperties(player,__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$ResetRoundPlayerProperties
// il2cpp: void GameManagers_InGameManager__ResetRoundPlayerProperties (const MethodInfo* method);
// 0x181e59eb0

void GameManagers_InGameManager__ResetRoundPlayerProperties(MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameMiscSettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  System_String_o *pSVar4;
  System_Collections_Generic_Dictionary_string__object__o *pSVar5;
  Il2CppObject *pIVar6;
  Photon_Realtime_Player_o *pPVar7;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_28 [4];
  
  if (Il2CppMethodInitialized_184344ead == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerStatus);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    Il2CppMethodInitialized_184344ead = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar1 == (Settings_InGameSet_o *)0x0) ||
      (pSVar2 = (pSVar1->fields).Misc, pSVar2 == (Settings_InGameMiscSettings_o *)0x0)) ||
     (pSVar3 = (pSVar2->fields).ClearKDROnRestart, pSVar3 == (Settings_BoolSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  if ((pSVar3->fields)._value != false) {
    pSVar5 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_object);
    System_Collections_Generic_Dictionary_object__object____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,
               (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    pSVar4 = TypeInfo_GameManagers_PlayerProperty->static_fields->Kills;
    local_res10[0] = 0;
    pIVar6 = il2cpp_value_box(g_data_184354e08,local_res10);
    if (pSVar5 == (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)pSVar5,(Il2CppObject *)pSVar4,pIVar6
               ,(MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    pSVar4 = TypeInfo_GameManagers_PlayerProperty->static_fields->Deaths;
    local_res18[0] = 0;
    pIVar6 = il2cpp_value_box(g_data_184354e08,local_res18);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)pSVar5,(Il2CppObject *)pSVar4,pIVar6
               ,(MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    pSVar4 = TypeInfo_GameManagers_PlayerProperty->static_fields->HighestDamage;
    local_res20[0] = 0;
    pIVar6 = il2cpp_value_box(g_data_184354e08,local_res20);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)pSVar5,(Il2CppObject *)pSVar4,pIVar6
               ,(MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    pSVar4 = TypeInfo_GameManagers_PlayerProperty->static_fields->TotalDamage;
    local_28[0] = 0;
    pIVar6 = il2cpp_value_box(g_data_184354e08,local_28);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)pSVar5,(Il2CppObject *)pSVar4,pIVar6
               ,(MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar7 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    PhotonExtensions__SetCustomProperties(pPVar7,pSVar5,(MethodInfo *)0x0);
  }
  pSVar5 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar4 = TypeInfo_GameManagers_PlayerProperty->static_fields->Status;
  if ((TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus);
  }
  if (pSVar5 != (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)pSVar5,(Il2CppObject *)pSVar4,
               (Il2CppObject *)TypeInfo_GameManagers_PlayerStatus->static_fields->Spectating,
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    pSVar4 = TypeInfo_GameManagers_PlayerProperty->static_fields->CharacterViewId;
    local_res10[0] = 0xffffffff;
    pIVar6 = il2cpp_value_box(g_data_184354e08,local_res10);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)pSVar5,(Il2CppObject *)pSVar4,pIVar6
               ,(MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)pSVar5,
               (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->SpawnPoint,
               (Il2CppObject *)"null",
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar7 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    PhotonExtensions__SetCustomProperties(pPVar7,pSVar5,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$UpdatePlayerName
// il2cpp: void GameManagers_InGameManager__UpdatePlayerName (const MethodInfo* method);
// 0x181e5eca0

void GameManagers_InGameManager__UpdatePlayerName(MethodInfo *method)

{
  GameManagers_PlayerInfo_o *pGVar1;
  Settings_ProfileSettings_o *pSVar2;
  Settings_NameSetting_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  System_String_o *pSVar5;
  Settings_InGameSet_o *pSVar6;
  Settings_InGameMiscSettings_o *pSVar7;
  Settings_IntSetting_o *pSVar8;
  Settings_InGameCharacterSettings_o *pSVar9;
  bool bVar10;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  Photon_Realtime_Player_o *pPVar13;
  System_Collections_Generic_Dictionary_string__object__o *__this;
  int32_t color;
  
  if (Il2CppMethodInitialized_184344eae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184344eae = '\x01';
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  pGVar1 = TypeInfo_GameManagers_InGameManager->static_fields->MyPlayerInfo;
  if (((pGVar1 == (GameManagers_PlayerInfo_o *)0x0) ||
      (pSVar2 = (pGVar1->fields).Profile, pSVar2 == (Settings_ProfileSettings_o *)0x0)) ||
     (pSVar3 = (pSVar2->fields).Name, pSVar3 == (Settings_NameSetting_o *)0x0)) goto label_181e5f0ea;
  pSVar11 = (pSVar3->fields)._value;
  if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
  }
  pSVar11 = Anticheat_ChatFilter__FilterBadWords(pSVar11,(MethodInfo *)0x0);
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  pSVar11 = MiscExtensions__HexColor(pSVar11,(MethodInfo *)0x0);
  pGVar1 = TypeInfo_GameManagers_InGameManager->static_fields->MyPlayerInfo;
  if (((pGVar1 == (GameManagers_PlayerInfo_o *)0x0) ||
      (pSVar2 = (pGVar1->fields).Profile, pSVar2 == (Settings_ProfileSettings_o *)0x0)) ||
     (pSVar3 = (pSVar2->fields).Guild, pSVar3 == (Settings_NameSetting_o *)0x0)) goto label_181e5f0ea;
  pSVar12 = Anticheat_ChatFilter__FilterBadWords((pSVar3->fields)._value,(MethodInfo *)0x0);
  pSVar12 = MiscExtensions__HexColor(pSVar12,(MethodInfo *)0x0);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar13 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  pGVar1 = TypeInfo_GameManagers_InGameManager->static_fields->MyPlayerInfo;
  if (((pGVar1 == (GameManagers_PlayerInfo_o *)0x0) ||
      (pSVar2 = (pGVar1->fields).Profile, pSVar2 == (Settings_ProfileSettings_o *)0x0)) ||
     (pSVar4 = (pSVar2->fields).GuildRoleSprite, pSVar4 == (Settings_StringSetting_o *)0x0))
  goto label_181e5f0ea;
  pSVar5 = (pSVar4->fields)._value;
  if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
  }
  pSVar12 = PatreonEffects_RoleSpriteHelpers__ComposeGuildWithRoleSprite
                      (pPVar13,pSVar12,pSVar5,(MethodInfo *)0x0);
  pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar6 == (Settings_InGameSet_o *)0x0) ||
      (pSVar7 = (pSVar6->fields).Misc, pSVar7 == (Settings_InGameMiscSettings_o *)0x0)) ||
     (pSVar8 = (pSVar7->fields).PVP, pSVar8 == (Settings_IntSetting_o *)0x0)) goto label_181e5f0ea;
  if ((pSVar8->fields)._value == 2) {
    pSVar9 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
    if ((pSVar9 == (Settings_InGameCharacterSettings_o *)0x0) ||
       (pSVar4 = (pSVar9->fields).Team, pSVar4 == (Settings_StringSetting_o *)0x0)) goto label_181e5f0ea;
    pSVar5 = (pSVar4->fields)._value;
    if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    }
    bVar10 = System_String__op_Equality
                       (pSVar5,TypeInfo_GameManagers_TeamInfo->static_fields->Blue,(MethodInfo *)0x0);
    if (bVar10) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      color = 6;
    }
    else {
      pSVar9 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
      if ((pSVar9 == (Settings_InGameCharacterSettings_o *)0x0) ||
         (pSVar4 = (pSVar9->fields).Team, pSVar4 == (Settings_StringSetting_o *)0x0)) goto label_181e5f0ea;
      pSVar5 = (pSVar4->fields)._value;
      if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
      }
      bVar10 = System_String__op_Equality
                         (pSVar5,TypeInfo_GameManagers_TeamInfo->static_fields->Red,(MethodInfo *)0x0);
      if (!bVar10) goto label_181e5f023;
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      color = 5;
    }
    pSVar11 = GameManagers_ChatManager__GetColorString(pSVar11,color,false,(MethodInfo *)0x0);
  }
label_181e5f023:
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar13 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  if (__this != (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this,
               (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->Name,
               (Il2CppObject *)pSVar11,
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this,
               (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->Guild,
               (Il2CppObject *)pSVar12,
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    PhotonExtensions__SetCustomProperties(pPVar13,__this,(MethodInfo *)0x0);
    return;
  }
label_181e5f0ea:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$SyncLocalProfileToPlayerInfo
// il2cpp: void GameManagers_InGameManager__SyncLocalProfileToPlayerInfo (System_String_o* reason, const MethodInfo* method);
// 0x181e5ddf0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e5e1af: mov rsi, qword ptr [rsp + 0x50]
// asm:   0x181e5e1b4: mov rbp, qword ptr [rsp + 0x48]
// asm:   0x181e5e1b9: mov rdi, qword ptr [rsp + 0x30]
// asm:   0x181e5e1be: mov rbx, qword ptr [rsp + 0x40]

void GameManagers_InGameManager__SyncLocalProfileToPlayerInfo(System_String_o *reason,MethodInfo *method)

{
  Settings_ProfileSettings_o *pSVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  Photon_Pun_PhotonView_o *pPVar2;
  bool bVar3;
  GameManagers_PlayerInfo_o *pGVar4;
  Photon_Realtime_Player_o *pPVar5;
  Photon_Realtime_Room_o *pPVar6;
  System_Byte_array *obj;
  System_Object_array *parameters;
  Il2CppObject *pIVar7;
  int32_t key;
  
  if (Il2CppMethodInitialized_184344eaf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"PlayerInfoRPC");
    Il2CppMethodInitialized_184344eaf = '\x01';
  }
  if (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings != (Settings_ProfileSettings_o *)0x0)
  {
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    if (TypeInfo_GameManagers_InGameManager->static_fields->MyPlayerInfo == (GameManagers_PlayerInfo_o *)0x0)
    {
      pGVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameManagers_PlayerInfo);
      GameManagers_PlayerInfo___ctor(pGVar4,(MethodInfo *)0x0);
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      TypeInfo_GameManagers_InGameManager->static_fields->MyPlayerInfo = pGVar4;
      Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_InGameManager->static_fields->MyPlayerInfo,pGVar4);
    }
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    pGVar4 = TypeInfo_GameManagers_InGameManager->static_fields->MyPlayerInfo;
    if ((pGVar4 == (GameManagers_PlayerInfo_o *)0x0) ||
       (pSVar1 = (pGVar4->fields).Profile, pSVar1 == (Settings_ProfileSettings_o *)0x0)) goto label_181e5e1c8;
    (*(pSVar1->klass->vtable)._10_Copy.methodPtr)
              (pSVar1,(Settings_BaseSetting_o *)
                      TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings,
               (pSVar1->klass->vtable)._10_Copy.method);
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar5 == (Photon_Realtime_Player_o *)0x0) {
      key = -1;
    }
    else {
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      if (pPVar5 == (Photon_Realtime_Player_o *)0x0) goto label_181e5e1c8;
      key = (pPVar5->fields).actorNumber;
      if (0 < key) {
        if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
        }
        __this = (System_Collections_Generic_Dictionary_int__object__o *)
                 TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo;
        if (__this == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_181e5e1c8;
        System_Collections_Generic_Dictionary_int__object___set_Item
                  (__this,key,(Il2CppObject *)TypeInfo_GameManagers_InGameManager->static_fields->MyPlayerInfo
                   ,(MethodInfo_1423510 *)
                    MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_set_Item);
      }
    }
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar5 != (Photon_Realtime_Player_o *)0x0) {
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar6 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
      if (pPVar6 != (Photon_Realtime_Room_o *)0x0) {
        if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
        }
        GameManagers_InGameManager__UpdatePlayerName((MethodInfo *)0x0);
        pPVar2 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pPVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
          }
          obj = GameManagers_InGameManager__SerializeMyPlayerInfo((MethodInfo *)0x0);
          pPVar2 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
          parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
          if (parameters == (System_Object_array *)0x0) {
label_181e5e1c8:
            ThrowNullReferenceException();
          }
          if ((obj != (System_Byte_array *)0x0) &&
             (pIVar7 = il2cpp_vm_Object_IsInst(&obj->obj,(((parameters->obj).klass)->_1).element_class),
             pIVar7 == (Il2CppObject *)0x0)) {
            pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
          }
          if ((int)parameters->max_length == 0) {
            ThrowIndexOutOfRangeException();
          }
          parameters->m_Items[0] = &obj->obj;
          Il2CppCodeGenWriteBarrier(parameters->m_Items,obj);
          if (pPVar2 == (Photon_Pun_PhotonView_o *)0x0) goto label_181e5e1c8;
          Photon_Pun_PhotonView__RPC(pPVar2,"PlayerInfoRPC",1,parameters,(MethodInfo *)0x0);
        }
      }
    }
    if (0 < key) {
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      GameManagers_InGameManager__NotifyPlayerInfoUpdated(key,(MethodInfo *)0x0);
    }
    if (TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName == 2) {
      Settings_SettingsManager__NotifySettingsChanged((MethodInfo *)0x0);
    }
  }
  return;
}


// GameManagers.InGameManager$$UpdateRoundPlayerProperties
// il2cpp: void GameManagers_InGameManager__UpdateRoundPlayerProperties (const MethodInfo* method);
// 0x181e5f0f0

void GameManagers_InGameManager__UpdateRoundPlayerProperties(MethodInfo *method)

{
  byte bVar1;
  GameManagers_BaseGameManager_o *pGVar2;
  Settings_InGameCharacterSettings_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  GameManagers_BaseGameManager_c *x;
  Settings_StringSetting_o *pSVar5;
  bool bVar6;
  System_Collections_Generic_Dictionary_string__object__o *__this;
  Photon_Realtime_Player_o *player;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184344eb0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerStatus);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184344eb0 = '\x01';
  }
  pGVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar2 != (GameManagers_BaseGameManager_o *)0x0) {
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((pGVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pGVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(pGVar2);
    }
  }
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
  if ((pSVar3 == (Settings_InGameCharacterSettings_o *)0x0) ||
     (pSVar4 = (pSVar3->fields).ChooseStatus, pSVar4 == (Settings_IntSetting_o *)0x0)) goto label_181e5f461;
  if ((pSVar4->fields)._value == 2) {
    if (pGVar2 == (GameManagers_BaseGameManager_o *)0x0) goto label_181e5f461;
    x = (*(uint64_t *)((char *)pGVar2 + 0x78));
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar6) {
      if ((*(uint64_t *)((char *)pGVar2 + 0x78)) == (GameManagers_BaseGameManager_c *)0x0) goto label_181e5f461;
      if (*(char *)&(((*(Il2CppClass **)((char *)pGVar2 + 0x78)))->_1).interopData == '\0') {
        if ((TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus);
        }
        value = TypeInfo_GameManagers_PlayerStatus->static_fields->Alive;
        goto label_181e5f2e2;
      }
    }
    if ((TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus);
    }
    value = TypeInfo_GameManagers_PlayerStatus->static_fields->Dead;
  }
  else {
    if ((TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus);
    }
    value = TypeInfo_GameManagers_PlayerStatus->static_fields->Spectating;
  }
label_181e5f2e2:
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  if (__this != (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this,
               (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->Status,
               (Il2CppObject *)value,
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
    if ((pSVar3 != (Settings_InGameCharacterSettings_o *)0x0) &&
       (pSVar5 = (pSVar3->fields).CharacterType, pSVar5 != (Settings_StringSetting_o *)0x0)) {
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                 (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->Character,
                 (Il2CppObject *)(pSVar5->fields)._value,
                 (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
      if ((pSVar3 != (Settings_InGameCharacterSettings_o *)0x0) &&
         (pSVar5 = (pSVar3->fields).Loadout, pSVar5 != (Settings_StringSetting_o *)0x0)) {
        System_Collections_Generic_Dictionary_object__object___Add
                  ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                   (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->Loadout,
                   (Il2CppObject *)(pSVar5->fields)._value,
                   (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
        pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
        if ((pSVar3 != (Settings_InGameCharacterSettings_o *)0x0) &&
           (pSVar5 = (pSVar3->fields).Team, pSVar5 != (Settings_StringSetting_o *)0x0)) {
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                     (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->Team,
                     (Il2CppObject *)(pSVar5->fields)._value,
                     (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add)
          ;
          if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
          }
          player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
          PhotonExtensions__SetCustomProperties(player,__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_181e5f461:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$ResetPlayerInfo
// il2cpp: void GameManagers_InGameManager__ResetPlayerInfo (const MethodInfo* method);
// 0x181e599e0

void GameManagers_InGameManager__ResetPlayerInfo(MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_Dictionary_int__PlayerInfo__o *__this;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *pSVar2;
  Settings_ProfileSettings_o *pSVar3;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  System_Action_int__o *pSVar4;
  GameManagers_PlayerInfo_o *__this_01;
  Photon_Realtime_Player_o *pPVar5;
  
  if (Il2CppMethodInitialized_184344eb1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184344eb1 = '\x01';
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  __this = TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo;
  if (__this != (System_Collections_Generic_Dictionary_int__PlayerInfo__o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
               (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_Clear);
    pSVar2 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
             TypeInfo_GameManagers_InGameManager->static_fields->MuteEmote;
    if (pSVar2 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
      System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                (pSVar2,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_int_Clear);
      pSVar2 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
               TypeInfo_GameManagers_InGameManager->static_fields->MuteText;
      if (pSVar2 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
        System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                  (pSVar2,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_int_Clear);
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameManagers_PlayerInfo);
        GameManagers_PlayerInfo___ctor(__this_01,(MethodInfo *)0x0);
        if ((__this_01 != (GameManagers_PlayerInfo_o *)0x0) &&
           (pSVar3 = (__this_01->fields).Profile, pSVar3 != (Settings_ProfileSettings_o *)0x0)) {
          (*(pSVar3->klass->vtable)._10_Copy.methodPtr)
                    (pSVar3,(Settings_BaseSetting_o *)
                            TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings,
                     (pSVar3->klass->vtable)._10_Copy.method);
          __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                      TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo;
          if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
          }
          pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
          if ((pPVar5 != (Photon_Realtime_Player_o *)0x0) &&
             (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
            System_Collections_Generic_Dictionary_int__object___Add
                      (__this_00,(pPVar5->fields).actorNumber,(Il2CppObject *)__this_01,
                       (MethodInfo_1415BA0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_Add);
            TypeInfo_GameManagers_InGameManager->static_fields->MyPlayerInfo = __this_01;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_GameManagers_InGameManager->static_fields->MyPlayerInfo,__this_01);
            pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
            if (pPVar5 != (Photon_Realtime_Player_o *)0x0) {
              iVar1 = (pPVar5->fields).actorNumber;
              if (Il2CppMethodInitialized_184344eb3 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
                Il2CppMethodInitialized_184344eb3 = '\x01';
              }
              if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
              }
              pSVar4 = TypeInfo_GameManagers_InGameManager->static_fields->PlayerInfoUpdated;
              if (pSVar4 != (System_Action_int__o *)0x0) {
                (*(code *)(pSVar4->fields).invoke_impl)
                          ((pSVar4->fields).method_code,iVar1,(pSVar4->fields).method);
              }
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$SerializeMyPlayerInfo
// il2cpp: System_Byte_array* GameManagers_InGameManager__SerializeMyPlayerInfo (const MethodInfo* method);
// 0x181e5a510

System_Byte_array * GameManagers_InGameManager__SerializeMyPlayerInfo(MethodInfo *method)

{
  Utility_Algorithms_CompressionAlgorithm_o *__this;
  GameManagers_PlayerInfo_o *pGVar1;
  System_String_o *str;
  System_Byte_array *pSVar2;
  
  if (Il2CppMethodInitialized_184344eb2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_DataCompressors);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_184344eb2 = '\x01';
  }
  if ((TypeInfo_Utility_DataCompressors->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DataCompressors);
  }
  __this = (Utility_Algorithms_CompressionAlgorithm_o *)
           TypeInfo_Utility_DataCompressors->static_fields->Brotli;
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  pGVar1 = TypeInfo_GameManagers_InGameManager->static_fields->MyPlayerInfo;
  if (pGVar1 != (GameManagers_PlayerInfo_o *)0x0) {
    str = (*(pGVar1->klass->vtable)._8_SerializeToJsonString.methodPtr)
                    (pGVar1,(pGVar1->klass->vtable)._8_SerializeToJsonString.method);
    if (__this != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
      pSVar2 = Utility_Algorithms_CompressionAlgorithm__CompressString(__this,str,1,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$NotifyPlayerInfoUpdated
// il2cpp: void GameManagers_InGameManager__NotifyPlayerInfoUpdated (int32_t actorNumber, const MethodInfo* method);
// 0x181e55a40

void GameManagers_InGameManager__NotifyPlayerInfoUpdated(int32_t actorNumber,MethodInfo *method)

{
  System_Action_int__o *pSVar1;
  
  if (Il2CppMethodInitialized_184344eb3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_184344eb3 = '\x01';
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  pSVar1 = TypeInfo_GameManagers_InGameManager->static_fields->PlayerInfoUpdated;
  if (pSVar1 != (System_Action_int__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,actorNumber,(pSVar1->fields).method);
    return;
  }
  return;
}


// GameManagers.InGameManager$$PrintMOTD
// il2cpp: void GameManagers_InGameManager__PrintMOTD (System_String_o* original, const MethodInfo* method);
// 0x181e58460

void GameManagers_InGameManager__PrintMOTD(System_String_o *original,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameMiscSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  bool bVar4;
  System_String_o *message;
  System_Nullable_DateTime__Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184344eb4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"MOTD: ");
    Il2CppMethodInitialized_184344eb4 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Misc, pSVar2 != (Settings_InGameMiscSettings_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).Motd, pSVar3 != (Settings_StringSetting_o *)0x0)) {
    bVar4 = System_String__op_Inequality(original,(pSVar3->fields)._value,(MethodInfo *)0x0);
    if (bVar4) {
      pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
      if (((pSVar1 == (Settings_InGameSet_o *)0x0) ||
          (pSVar2 = (pSVar1->fields).Misc, pSVar2 == (Settings_InGameMiscSettings_o *)0x0)) ||
         (pSVar3 = (pSVar2->fields).Motd, pSVar3 == (Settings_StringSetting_o *)0x0)) goto label_181e585b1;
      message = System_String__Concat_1969e50("MOTD: ",(pSVar3->fields)._value,(MethodInfo *)0x0)
      ;
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      local_28[0].hasValue = false;
      local_28[0]._1_7_ = 0;
      local_28[0].value.fields._dateData = (System_DateTime_Fields)0;
      GameManagers_ChatManager__AddLine
                (message,3,false,(System_Nullable_DateTime__o *)local_28,-1,false,false,-1,false,
                 (MethodInfo *)0x0);
    }
    return;
  }
label_181e585b1:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$Awake
// il2cpp: void GameManagers_InGameManager__Awake (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x181e53aa0

void GameManagers_InGameManager__Awake(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  Settings_InputSettings_o *pSVar1;
  Settings_GeneralInputSettings_o *value;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameMiscSettings_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  System_String_o *original;
  Settings_InGameSet_c *pSVar5;
  bool bVar6;
  UnityEngine_GameObject_o *__this_00;
  CustomSkins_SkyboxCustomSkinLoader_o *value_00;
  
  if (Il2CppMethodInitialized_184344eb5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_SkyboxCustomSkinLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184344eb5 = '\x01';
  }
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    value_00 = UnityEngine_GameObject__AddComponent_object_
                         (__this_00,
                          (MethodInfo_6F4D60 *)
                          MethodInfo_UnityEngine_GameObject_AddComponent_SkyboxCustomSkinLoader);
    (__this->fields)._skyboxCustomSkinLoader = value_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._skyboxCustomSkinLoader,value_00);
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
    if (pSVar1 != (Settings_InputSettings_o *)0x0) {
      value = (pSVar1->fields).General;
      (__this->fields)._generalInputSettings = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._generalInputSettings,value);
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      GameManagers_InGameManager__ResetRoundPlayerProperties((MethodInfo *)0x0);
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      bVar6 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      if (bVar6) {
        pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
        if (((pSVar2 == (Settings_InGameSet_o *)0x0) ||
            (pSVar3 = (pSVar2->fields).Misc, pSVar3 == (Settings_InGameMiscSettings_o *)0x0)) ||
           (pSVar4 = (pSVar3->fields).Motd, pSVar4 == (Settings_StringSetting_o *)0x0)) goto label_181e53c1d;
        original = (pSVar4->fields)._value;
        pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
        pSVar5 = pSVar2->klass;
        (*(pSVar5->vtable)._10_Copy.methodPtr)
                  (pSVar2,(Settings_BaseSetting_o *)TypeInfo_Settings_SettingsManager->static_fields->InGameUI
                   ,(pSVar5->vtable)._10_Copy.method);
        if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
        }
        GameManagers_InGameManager__PrintMOTD(original,(MethodInfo *)0x0);
      }
      System_Configuration_ConfigurationCollectionAttribute___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
label_181e53c1d:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$Start
// il2cpp: void GameManagers_InGameManager__Start (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x181e5d7b0

void GameManagers_InGameManager__Start(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  byte bVar2;
  float fVar3;
  Photon_Pun_PhotonView_o *__this_00;
  Settings_InGameSet_o *pSVar4;
  Utility_Algorithms_CompressionAlgorithm_o *__this_01;
  Settings_InGameGeneralSettings_o *pSVar5;
  Settings_StringSetting_o *pSVar6;
  Settings_StringSetting_o *pSVar7;
  System_String_o *value;
  Settings_BoolSetting_o *pSVar8;
  UnityEngine_Vector3_StaticFields *pUVar9;
  UnityEngine_Quaternion_StaticFields *pUVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int32_t iVar14;
  System_Object_array *parameters;
  System_String_o *pSVar15;
  System_Byte_array *obj;
  Il2CppObject *pIVar16;
  ExitGames_Client_Photon_Hashtable_o *__this_02;
  Photon_Realtime_Room_o *pPVar17;
  Photon_Realtime_Player_o *pPVar18;
  UI_InGameMenu_o *value_00;
  int32_t local_res18 [2];
  undefined4 local_res20 [2];
  UnityEngine_Vector3_Fields local_68;
  UnityEngine_Quaternion_Fields local_58 [3];
  
  if (Il2CppMethodInitialized_184344eb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_DataCompressors);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ExitGames_Client_Photon_Hashtable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RoomProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"GameSettingsRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"Game/PhotonVoicePrefab");
    Il2CppMethodInitialized_184344eb6 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  value_00 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (value_00 == (UI_InGameMenu_o *)0x0) {
    (__this->fields)._inGameMenu = (UI_InGameMenu_o *)0x0;
    value_00 = (UI_InGameMenu_o *)0x0;
  }
  else {
    bVar2 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
    if (((((UI_BaseMenu_c *)value_00->klass)->_2).typeHierarchyDepth < bVar2) ||
       ((((UI_BaseMenu_c *)value_00->klass)->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(value_00);
    }
    (__this->fields)._inGameMenu = value_00;
    bVar2 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
    if (((((UI_BaseMenu_c *)value_00->klass)->_2).typeHierarchyDepth < bVar2) ||
       ((((UI_BaseMenu_c *)value_00->klass)->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(value_00);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._inGameMenu,value_00);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar13 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (bVar13) {
    __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    if ((TypeInfo_Utility_DataCompressors->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DataCompressors);
    }
    pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
    if (pSVar4 != (Settings_InGameSet_o *)0x0) {
      __this_01 = (Utility_Algorithms_CompressionAlgorithm_o *)
                  TypeInfo_Utility_DataCompressors->static_fields->Brotli;
      pSVar15 = (*(pSVar4->klass->vtable)._8_SerializeToJsonString.methodPtr)
                          (pSVar4,(pSVar4->klass->vtable)._8_SerializeToJsonString.method);
      if (__this_01 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
        obj = Utility_Algorithms_CompressionAlgorithm__CompressString(__this_01,pSVar15,1,(MethodInfo *)0x0);
        if (parameters != (System_Object_array *)0x0) {
          if (obj != (System_Byte_array *)0x0) {
            pIVar16 = il2cpp_vm_Object_IsInst(&obj->obj,(((parameters->obj).klass)->_1).element_class);
            if (pIVar16 == (Il2CppObject *)0x0) {
              pIVar16 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar16,(MethodInfo *)0x0);
            }
          }
          if ((int)parameters->max_length == 0) {
            ThrowIndexOutOfRangeException();
          }
          parameters->m_Items[0] = &obj->obj;
          Il2CppCodeGenWriteBarrier(parameters->m_Items,obj);
          if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(__this_00,"GameSettingsRPC",0,parameters,(MethodInfo *)0x0);
            pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
            if ((((pSVar4 != (Settings_InGameSet_o *)0x0) &&
                 (pSVar5 = (pSVar4->fields).General, pSVar5 != (Settings_InGameGeneralSettings_o *)0x0)) &&
                (pSVar6 = (pSVar5->fields).MapName, pSVar6 != (Settings_StringSetting_o *)0x0)) &&
               (pSVar7 = (pSVar5->fields).GameMode, pSVar7 != (Settings_StringSetting_o *)0x0)) {
              pSVar15 = (pSVar6->fields)._value;
              value = (pSVar7->fields)._value;
              __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ExitGames_Client_Photon_Hashtable)
              ;
              ExitGames_Client_Photon_Hashtable___ctor(__this_02,(MethodInfo *)0x0);
              if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
              }
              if (__this_02 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
                System_Collections_Generic_Dictionary_object__object___Add
                          ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
                           (Il2CppObject *)TypeInfo_GameManagers_RoomProperty->static_fields->Map,
                           (Il2CppObject *)pSVar15,
                           (MethodInfo_146B4B0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_object_object_Add);
                System_Collections_Generic_Dictionary_object__object___Add
                          ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
                           (Il2CppObject *)TypeInfo_GameManagers_RoomProperty->static_fields->GameMode,
                           (Il2CppObject *)value,
                           (MethodInfo_146B4B0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_object_object_Add);
                pSVar8 = (pSVar4->fields).Sandbox;
                if (pSVar8 != (Settings_BoolSetting_o *)0x0) {
                  pSVar15 = TypeInfo_GameManagers_RoomProperty->static_fields->Sandbox;
                  local_res18[0] = CONCAT31(local_res18[0]._1_3_,(pSVar8->fields)._value);
                  pIVar16 = il2cpp_value_box(g_data_184354de8,local_res18);
                  System_Collections_Generic_Dictionary_object__object___Add
                            ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
                             (Il2CppObject *)pSVar15,pIVar16,
                             (MethodInfo_146B4B0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_object_object_Add);
                  pSVar6 = (pSVar4->fields).ExperienceName;
                  if (pSVar6 != (Settings_StringSetting_o *)0x0) {
                    System_Collections_Generic_Dictionary_object__object___Add
                              ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
                               (Il2CppObject *)TypeInfo_GameManagers_RoomProperty->static_fields->Experience,
                               (Il2CppObject *)(pSVar6->fields)._value,
                               (MethodInfo_146B4B0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_object_object_Add);
                    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
                    }
                    pPVar17 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
                    if (pPVar17 != (Photon_Realtime_Room_o *)0x0) {
                      (*(pPVar17->klass->vtable)._5_SetCustomProperties.methodPtr)
                                (pPVar17,__this_02,(ExitGames_Client_Photon_Hashtable_o *)0x0,
                                 (Photon_Realtime_WebFlags_o *)0x0,
                                 (pPVar17->klass->vtable)._5_SetCustomProperties.method);
                      GameManagers_InGameManager__LoadSkin(__this,(MethodInfo *)0x0);
                      goto label_181e5dc16;
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
label_181e5dc16:
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar1._0_4_ = (pUVar9->zeroVector).fields.x;
  uVar1._4_4_ = (pUVar9->zeroVector).fields.y;
  fVar3 = (pUVar9->zeroVector).fields.z;
  if (Il2CppMethodInitialized_18433de5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_18433de5b = '\x01';
  }
  pUVar10 = TypeInfo_UnityEngine_Quaternion->static_fields;
  uVar11._0_4_ = (pUVar10->identityQuaternion).fields.x;
  uVar11._4_4_ = (pUVar10->identityQuaternion).fields.y;
  uVar12._0_4_ = (pUVar10->identityQuaternion).fields.z;
  uVar12._4_4_ = (pUVar10->identityQuaternion).fields.w;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  local_68._0_8_ = uVar1;
  local_68.z = fVar3;
  local_58[0]._0_8_ = uVar11;
  local_58[0]._8_8_ = uVar12;
  Photon_Pun_PhotonNetwork__Instantiate
            ("Game/PhotonVoicePrefab",(UnityEngine_Vector3_o *)&local_68,(UnityEngine_Quaternion_o *)local_58,
             '\0',(System_Object_array *)0x0,(MethodInfo *)0x0);
  GameManagers_BaseGameManager__Start((GameManagers_BaseGameManager_o *)__this,(MethodInfo *)0x0);
  iVar14 = Photon_Pun_PhotonNetwork__GetPing((MethodInfo *)0x0);
  pPVar18 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar15 = TypeInfo_GameManagers_PlayerProperty->static_fields->Ping;
  local_res18[0] = iVar14;
  pIVar16 = il2cpp_value_box(g_data_184354e08,local_res18);
  PhotonExtensions__SetCustomProperty(pPVar18,pSVar15,pIVar16,(MethodInfo *)0x0);
  pPVar18 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  pSVar15 = TypeInfo_GameManagers_PlayerProperty->static_fields->SpectateID;
  local_res20[0] = 0xffffffff;
  pIVar16 = il2cpp_value_box(g_data_184354e08,local_res20);
  PhotonExtensions__SetCustomProperty(pPVar18,pSVar15,pIVar16,(MethodInfo *)0x0);
  return;
}


// GameManagers.InGameManager$$IsFinishedLoading
// il2cpp: bool GameManagers_InGameManager__IsFinishedLoading (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x181e55200

bool GameManagers_InGameManager__IsFinishedLoading(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = GameManagers_BaseGameManager__IsFinishedLoading
                    ((GameManagers_BaseGameManager_o *)__this,(MethodInfo *)0x0);
  if (!bVar1) {
    return false;
  }
  return (__this->fields)._gameSettingsLoaded;
}


// GameManagers.InGameManager$$Update
// il2cpp: void GameManagers_InGameManager__Update (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x181e5f470

void GameManagers_InGameManager__Update(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  System_String_o *key;
  int32_t iVar1;
  System_Collections_Generic_HashSet_Human__o *pSVar2;
  System_Collections_Generic_HashSet_BasicTitan__o *value;
  System_Collections_Generic_HashSet_BaseShifter__o *value_00;
  System_Collections_Generic_HashSet_Horse__o *value_01;
  System_Collections_Generic_HashSet_BaseDetection__o *value_02;
  Photon_Realtime_Player_o *player;
  Il2CppObject *value_03;
  float fVar3;
  float fVar4;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184344eb7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_184344eb7 = '\x01';
  }
  if ((__this->fields).State != 0) {
    GameManagers_InGameManager__UpdateInput(__this,(MethodInfo *)0x0);
  }
  if (Il2CppMethodInitialized_184344ebc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_Util_RemoveNullOrDeadDetections_BaseDetection);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_RemoveNullOrDead_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_RemoveNullOrDead_Horse);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_RemoveNullOrDead_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184344ebc = '\x01';
  }
  pSVar2 = (__this->fields).Humans;
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  pSVar2 = (System_Collections_Generic_HashSet_Human__o *)
           Utility_Util__RemoveNullOrDeadDetections_object_
                     ((System_Collections_Generic_HashSet_T__o *)pSVar2,
                      (MethodInfo_86B5C0 *)MethodInfo_Utility_Util_RemoveNullOrDead_Human);
  (__this->fields).Humans = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Humans,pSVar2);
  value = (System_Collections_Generic_HashSet_BasicTitan__o *)
          Utility_Util__RemoveNullOrDeadDetections_object_
                    ((System_Collections_Generic_HashSet_T__o *)(__this->fields).Titans,
                     (MethodInfo_86B5C0 *)MethodInfo_Utility_Util_RemoveNullOrDead_BasicTitan);
  (__this->fields).Titans = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Titans,value);
  value_00 = Utility_Util__RemoveNullOrDeadShifters((__this->fields).Shifters,(MethodInfo *)0x0);
  (__this->fields).Shifters = value_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Shifters,value_00);
  value_01 = (System_Collections_Generic_HashSet_Horse__o *)
             Utility_Util__RemoveNullOrDeadDetections_object_
                       ((System_Collections_Generic_HashSet_T__o *)(__this->fields).Horses,
                        (MethodInfo_86B5C0 *)MethodInfo_Utility_Util_RemoveNullOrDead_Horse);
  (__this->fields).Horses = value_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Horses,value_01);
  value_02 = (System_Collections_Generic_HashSet_BaseDetection__o *)
             Utility_Util__RemoveNullOrDeadDetections_object_
                       ((System_Collections_Generic_HashSet_T__o *)(__this->fields).Detections,
                        (MethodInfo_86B5C0 *)MethodInfo_Utility_Util_RemoveNullOrDeadDetections_BaseDetection)
  ;
  (__this->fields).Detections = value_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Detections,value_02);
  fVar4 = (__this->fields).EndTimeLeft;
  fVar3 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar4 = fVar4 - fVar3;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  (__this->fields).EndTimeLeft = fVar4;
  fVar4 = (__this->fields).timeSinceLastPingUpdate;
  fVar3 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar3 = fVar3 + fVar4;
  (__this->fields).timeSinceLastPingUpdate = fVar3;
  if ((__this->fields).pingUpdateInterval <= fVar3) {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    iVar1 = Photon_Pun_PhotonNetwork__GetPing((MethodInfo *)0x0);
    player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    key = TypeInfo_GameManagers_PlayerProperty->static_fields->Ping;
    local_res8[0] = iVar1;
    value_03 = il2cpp_value_box(g_data_184354e08,local_res8);
    PhotonExtensions__SetCustomProperty(player,key,value_03,(MethodInfo *)0x0);
    (__this->fields).timeSinceLastPingUpdate = 0.0;
  }
  return;
}


// GameManagers.InGameManager$$OnFinishLoading
// il2cpp: void GameManagers_InGameManager__OnFinishLoading (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x181e55af0

void GameManagers_InGameManager__OnFinishLoading(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  float num;
  Map_MapScript_o *pMVar1;
  UI_LoadingMenu_o *__this_00;
  Settings_InGameCharacterSettings_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  UI_InGameMenu_o *__this_01;
  Settings_InGameSet_o *pSVar4;
  Settings_InGameModeSettings_o *pSVar5;
  Settings_InGameAddonSettings_o *pSVar6;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *modeSettings;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *addonSettings;
  Photon_Pun_PhotonView_o *pPVar7;
  Settings_UISettings_o *pSVar8;
  Settings_BoolSetting_o *pSVar9;
  CustomLogic_CustomLogicEvaluator_o *pCVar10;
  bool bVar11;
  System_String_o *pSVar12;
  System_Object_array *pSVar13;
  System_Byte_array *obj;
  Il2CppObject *pIVar14;
  
  if (Il2CppMethodInitialized_184344eb8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"(");
    il2cpp_codegen_initialize_runtime_metadata(&"NotifyPlayerJoinedRPC");
    il2cpp_codegen_initialize_runtime_metadata(&")");
    il2cpp_codegen_initialize_runtime_metadata(&"PlayerInfoRPC");
    il2cpp_codegen_initialize_runtime_metadata(&" Round started.");
    Il2CppMethodInitialized_184344eb8 = '\x01';
  }
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pSVar12 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Logic;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  bVar11 = System_String__op_Equality
                     (pSVar12,TypeInfo_Map_BuiltinLevels->static_fields->UseMapLogic,(MethodInfo *)0x0);
  if (bVar11) {
    if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
    }
    pMVar1 = TypeInfo_Map_MapManager->static_fields->MapScript;
    if (pMVar1 == (Map_MapScript_o *)0x0) goto label_181e56117;
    pSVar12 = (pMVar1->fields).Logic;
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    TypeInfo_CustomLogic_CustomLogicManager->static_fields->Logic = pSVar12;
  }
  else {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pSVar12 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Logic;
    if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
    }
    pMVar1 = TypeInfo_Map_MapManager->static_fields->MapScript;
    if (pMVar1 == (Map_MapScript_o *)0x0) goto label_181e56117;
    pSVar12 = System_String__Concat_1969e50(pSVar12,(pMVar1->fields).Logic,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicManager->static_fields->Logic = pSVar12;
  }
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicManager->static_fields->Logic,pSVar12);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  __this_00 = TypeInfo_UI_UIManager->static_fields->LoadingMenu;
  if (__this_00 != (UI_LoadingMenu_o *)0x0) {
    UI_LoadingMenu__UpdateLoading(__this_00,1.0,true,false,(MethodInfo *)0x0);
    if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    }
    Map_MapDestruction__RequestState((MethodInfo *)0x0);
    if ((__this->fields).State == 0) {
      (__this->fields).State = 1;
    }
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
    if ((pSVar2 != (Settings_InGameCharacterSettings_o *)0x0) &&
       (pSVar3 = (pSVar2->fields).ChooseStatus, pSVar3 != (Settings_IntSetting_o *)0x0)) {
      if ((pSVar3->fields)._value == 0) {
        __this_01 = (__this->fields)._inGameMenu;
        if (__this_01 == (UI_InGameMenu_o *)0x0) goto label_181e56117;
        UI_InGameMenu__SetCharacterMenu(__this_01,true,(MethodInfo *)0x0);
      }
      pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
      if (((pSVar4 != (Settings_InGameSet_o *)0x0) &&
          (pSVar5 = (pSVar4->fields).Mode, pSVar5 != (Settings_InGameModeSettings_o *)0x0)) &&
         (pSVar6 = (pSVar4->fields).Addons, pSVar6 != (Settings_InGameAddonSettings_o *)0x0)) {
        modeSettings = (pSVar5->fields).Current;
        addonSettings = (pSVar6->fields).Current;
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        CustomLogic_CustomLogicManager__StartLogic(modeSettings,addonSettings,(MethodInfo *)0x0);
        if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
        }
        if (TypeInfo_GameManagers_InGameManager->static_fields->_needSendPlayerInfo != false) {
          pPVar7 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
          pSVar13 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
          if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
          }
          obj = GameManagers_InGameManager__SerializeMyPlayerInfo((MethodInfo *)0x0);
          if (pSVar13 == (System_Object_array *)0x0) goto label_181e56117;
          if (obj != (System_Byte_array *)0x0) {
            pIVar14 = il2cpp_vm_Object_IsInst(&obj->obj,(((pSVar13->obj).klass)->_1).element_class);
            if (pIVar14 == (Il2CppObject *)0x0) {
              pIVar14 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar14,(MethodInfo *)0x0);
            }
          }
          if ((int)pSVar13->max_length == 0) {
            ThrowIndexOutOfRangeException();
          }
          pSVar13->m_Items[0] = &obj->obj;
          Il2CppCodeGenWriteBarrier(pSVar13->m_Items,obj);
          if (pPVar7 == (Photon_Pun_PhotonView_o *)0x0) goto label_181e56117;
          Photon_Pun_PhotonView__RPC(pPVar7,"PlayerInfoRPC",1,pSVar13,(MethodInfo *)0x0);
          if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
          }
          bVar11 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
          if (!bVar11) {
            pPVar7 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
            pSVar13 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
            if (pPVar7 == (Photon_Pun_PhotonView_o *)0x0) goto label_181e56117;
            Photon_Pun_PhotonView__RPC(pPVar7,"NotifyPlayerJoinedRPC",1,pSVar13,(MethodInfo *)0x0);
          }
          if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
          }
          TypeInfo_GameManagers_InGameManager->static_fields->_needSendPlayerInfo = false;
        }
        GameManagers_InGameManager__SpawnPlayer(__this,false,(MethodInfo *)0x0);
        pSVar8 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
        if ((pSVar8 != (Settings_UISettings_o *)0x0) &&
           (pSVar9 = (pSVar8->fields).GameFeed, pSVar9 != (Settings_BoolSetting_o *)0x0)) {
          if ((pSVar9->fields)._value != false) {
            if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
            }
            pCVar10 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
            if (pCVar10 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_181e56117;
            num = (pCVar10->fields).CurrentTime;
            if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
            }
            pSVar12 = Utility_Util__FormatFloat(num,2,(MethodInfo *)0x0);
            pSVar12 = System_String__Concat_1969b70
                                ("(",pSVar12,")",(MethodInfo *)0x0);
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            pSVar12 = GameManagers_ChatManager__GetColorString(pSVar12,3,false,(MethodInfo *)0x0);
            pSVar12 = System_String__Concat_1969e50(pSVar12," Round started.",(MethodInfo *)0x0);
            GameManagers_ChatManager__AddFeed(pSVar12,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
label_181e56117:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$UpdateInput
// il2cpp: void GameManagers_InGameManager__UpdateInput (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x181e5e610

void GameManagers_InGameManager__UpdateInput(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  Settings_GeneralInputSettings_o *pSVar1;
  Settings_KeybindSetting_o *pSVar2;
  UI_InGameMenu_o *pUVar3;
  Characters_BaseCharacter_o *pCVar4;
  Settings_InGameCharacterSettings_o *pSVar5;
  Settings_IntSetting_o *__this_00;
  Settings_BoolSetting_o *pSVar6;
  Settings_InputSettings_o *pSVar7;
  bool bVar8;
  bool bVar9;
  UI_ChatPanel_o *__this_01;
  
  if (Il2CppMethodInitialized_184344eb9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184344eb9 = '\x01';
  }
  pSVar1 = (__this->fields)._generalInputSettings;
  if ((pSVar1 == (Settings_GeneralInputSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).ToggleScoreboard, pSVar2 == (Settings_KeybindSetting_o *)0x0))
  goto label_181e5ec90;
  bVar8 = Settings_KeybindSetting__GetKey(pSVar2,false,(MethodInfo *)0x0);
  if (!bVar8) {
    pUVar3 = (__this->fields)._inGameMenu;
    if (pUVar3 == (UI_InGameMenu_o *)0x0) goto label_181e5ec90;
    (pUVar3->fields).ScoreboardDismissedUntilRelease = false;
  }
  pSVar1 = (__this->fields)._generalInputSettings;
  if ((pSVar1 == (Settings_GeneralInputSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).ToggleMap, pSVar2 == (Settings_KeybindSetting_o *)0x0)) goto label_181e5ec90;
  bVar8 = Settings_KeybindSetting__GetKey(pSVar2,false,(MethodInfo *)0x0);
  if (!bVar8) {
    pUVar3 = (__this->fields)._inGameMenu;
    if (pUVar3 == (UI_InGameMenu_o *)0x0) goto label_181e5ec90;
    (pUVar3->fields).MapDismissedUntilRelease = false;
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  if (Il2CppMethodInitialized_184344e25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344e25 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  __this_01 = GameManagers_ChatManager__GetChatPanel((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    if (__this_01 == (UI_ChatPanel_o *)0x0) goto label_181e5ec90;
    bVar8 = UI_ChatPanel__IsInputActive(__this_01,(MethodInfo *)0x0);
    if (bVar8) {
      return;
    }
    bVar8 = UI_ChatPanel__IsInteractingWithChatUI(__this_01,(MethodInfo *)0x0);
    if (bVar8) {
      return;
    }
  }
  bVar8 = UnityEngine_Input__GetKeyDown(0x1b,(MethodInfo *)0x0);
  if (bVar8) {
label_181e5e822:
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    }
    bVar9 = Gisketch_Aottg2UI_Actions_GisketchInputCapture__get_BlocksUiInput((MethodInfo *)0x0);
    if (bVar9) {
      return;
    }
    bVar9 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_ClosedInGameOverlayThisFrame((MethodInfo *)0x0);
    if (bVar9) {
      return;
    }
    if ((bVar8) &&
       (bVar8 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_IsInGameOverlayActive((MethodInfo *)0x0),
       bVar8)) {
      return;
    }
    pUVar3 = (__this->fields)._inGameMenu;
    if (pUVar3 == (UI_InGameMenu_o *)0x0) goto label_181e5ec90;
    bVar8 = UI_InGameMenu__TryDismissGameplayMenu(pUVar3,(MethodInfo *)0x0);
    if (bVar8) {
      return;
    }
    bVar8 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_IsPauseScreenActive((MethodInfo *)0x0);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    UI_UIManager__PlaySound((uint)bVar8,(MethodInfo *)0x0);
    pUVar3 = (__this->fields)._inGameMenu;
    if (pUVar3 == (UI_InGameMenu_o *)0x0) goto label_181e5ec90;
    UI_InGameMenu__SetPauseMenu(pUVar3,!bVar8,(MethodInfo *)0x0);
  }
  else {
    pSVar1 = (__this->fields)._generalInputSettings;
    if ((pSVar1 == (Settings_GeneralInputSettings_o *)0x0) ||
       (pSVar2 = (pSVar1->fields).Pause, pSVar2 == (Settings_KeybindSetting_o *)0x0)) goto label_181e5ec90;
    bVar9 = Settings_KeybindSetting__GetKeyDown(pSVar2,false,(MethodInfo *)0x0);
    if (bVar9) goto label_181e5e822;
  }
  pSVar1 = (__this->fields)._generalInputSettings;
  if ((pSVar1 == (Settings_GeneralInputSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).ChangeCharacter, pSVar2 == (Settings_KeybindSetting_o *)0x0))
  goto label_181e5ec90;
  bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar2,false,(MethodInfo *)0x0);
  if ((bVar8) && (bVar8 = UI_InGameMenu__InMenu((MethodInfo *)0x0), !bVar8)) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    if (((TypeInfo_CustomLogic_CustomLogicManager->static_fields->Cutscene == false) &&
        ((__this->fields).Restarting == false)) &&
       (bVar8 = (*(__this->klass->vtable)._56_IsFinishedLoading.methodPtr)
                          (__this,(__this->klass->vtable)._56_IsFinishedLoading.method), bVar8)) {
      pCVar4 = (__this->fields).CurrentCharacter;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar8 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar8) {
        pCVar4 = (__this->fields).CurrentCharacter;
        if (pCVar4 == (Characters_BaseCharacter_o *)0x0) goto label_181e5ec90;
        if ((pCVar4->fields).Dead == false) {
          (*(pCVar4->klass->vtable)._98_GetKilled.methodPtr)
                    (pCVar4,"",(pCVar4->klass->vtable)._98_GetKilled.method);
        }
      }
      pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
      if ((pSVar5 == (Settings_InGameCharacterSettings_o *)0x0) ||
         (__this_00 = (pSVar5->fields).ChooseStatus, __this_00 == (Settings_IntSetting_o *)0x0))
      goto label_181e5ec90;
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)__this_00,0,
                 (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      pUVar3 = (__this->fields)._inGameMenu;
      if (pUVar3 == (UI_InGameMenu_o *)0x0) goto label_181e5ec90;
      UI_InGameMenu__SetCharacterMenu(pUVar3,true,(MethodInfo *)0x0);
    }
  }
  pSVar1 = (__this->fields)._generalInputSettings;
  if ((pSVar1 == (Settings_GeneralInputSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).RestartGame, pSVar2 == (Settings_KeybindSetting_o *)0x0)) goto label_181e5ec90;
  bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar2,false,(MethodInfo *)0x0);
  if (bVar8) {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    bVar8 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if (bVar8) {
      pUVar3 = (__this->fields)._inGameMenu;
      if (pUVar3 == (UI_InGameMenu_o *)0x0) goto label_181e5ec90;
      bVar8 = UI_InGameMenu__IsPauseMenuActive(pUVar3,(MethodInfo *)0x0);
      if (!bVar8) {
        if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
        }
        GameManagers_InGameManager__RestartGame((MethodInfo *)0x0);
      }
    }
  }
  pSVar1 = (__this->fields)._generalInputSettings;
  if (((pSVar1 == (Settings_GeneralInputSettings_o *)0x0) ||
      (pSVar6 = (pSVar1->fields).TapScoreboard, pSVar6 == (Settings_BoolSetting_o *)0x0)) ||
     (pSVar2 = (pSVar1->fields).ToggleScoreboard, pSVar2 == (Settings_KeybindSetting_o *)0x0))
  goto label_181e5ec90;
  if ((pSVar6->fields)._value == false) {
    bVar8 = Settings_KeybindSetting__GetKey(pSVar2,false,(MethodInfo *)0x0);
    if (bVar8) {
      pUVar3 = (__this->fields)._inGameMenu;
      if (pUVar3 == (UI_InGameMenu_o *)0x0) goto label_181e5ec90;
      if ((pUVar3->fields).ScoreboardDismissedUntilRelease == false) {
        if (pUVar3 == (UI_InGameMenu_o *)0x0) goto label_181e5ec90;
        UI_InGameMenu__SetScoreboardMenu(pUVar3,true,false,(MethodInfo *)0x0);
        goto label_181e5eb30;
      }
    }
    pUVar3 = (__this->fields)._inGameMenu;
    if (pUVar3 == (UI_InGameMenu_o *)0x0) goto label_181e5ec90;
    UI_InGameMenu__SetScoreboardMenu(pUVar3,false,false,(MethodInfo *)0x0);
  }
  else {
    bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar2,false,(MethodInfo *)0x0);
    if (bVar8) {
      pUVar3 = (__this->fields)._inGameMenu;
      if (pUVar3 == (UI_InGameMenu_o *)0x0) goto label_181e5ec90;
      UI_InGameMenu__ToggleScoreboardMenu(pUVar3,(MethodInfo *)0x0);
    }
  }
label_181e5eb30:
  pSVar1 = (__this->fields)._generalInputSettings;
  if (((pSVar1 == (Settings_GeneralInputSettings_o *)0x0) ||
      (pSVar6 = (pSVar1->fields).TapMap, pSVar6 == (Settings_BoolSetting_o *)0x0)) ||
     (pSVar2 = (pSVar1->fields).ToggleMap, pSVar2 == (Settings_KeybindSetting_o *)0x0)) goto label_181e5ec90;
  if ((pSVar6->fields)._value == false) {
    bVar8 = Settings_KeybindSetting__GetKey(pSVar2,false,(MethodInfo *)0x0);
    if (bVar8) {
      pUVar3 = (__this->fields)._inGameMenu;
      if (pUVar3 == (UI_InGameMenu_o *)0x0) goto label_181e5ec90;
      if ((pUVar3->fields).MapDismissedUntilRelease == false) {
        if (pUVar3 == (UI_InGameMenu_o *)0x0) goto label_181e5ec90;
        UI_InGameMenu__SetMapMenu(pUVar3,true,false,(MethodInfo *)0x0);
        goto label_181e5ebdd;
      }
    }
    pUVar3 = (__this->fields)._inGameMenu;
    if (pUVar3 == (UI_InGameMenu_o *)0x0) goto label_181e5ec90;
    UI_InGameMenu__SetMapMenu(pUVar3,false,false,(MethodInfo *)0x0);
  }
  else {
    bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar2,false,(MethodInfo *)0x0);
    if (bVar8) {
      pUVar3 = (__this->fields)._inGameMenu;
      if (pUVar3 == (UI_InGameMenu_o *)0x0) goto label_181e5ec90;
      UI_InGameMenu__ToggleMapMenu(pUVar3,(MethodInfo *)0x0);
    }
  }
label_181e5ebdd:
  pSVar7 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (((pSVar7 != (Settings_InputSettings_o *)0x0) &&
      (pSVar1 = (pSVar7->fields).General, pSVar1 != (Settings_GeneralInputSettings_o *)0x0)) &&
     (pSVar2 = (pSVar1->fields).HideUI, pSVar2 != (Settings_KeybindSetting_o *)0x0)) {
    bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar2,false,(MethodInfo *)0x0);
    if ((bVar8) && (bVar8 = UI_InGameMenu__InMenu((MethodInfo *)0x0), !bVar8)) {
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Cutscene == false) {
        pUVar3 = (__this->fields)._inGameMenu;
        if (pUVar3 == (UI_InGameMenu_o *)0x0) goto label_181e5ec90;
        bVar8 = UI_InGameMenu__IsActive(pUVar3,(MethodInfo *)0x0);
        UI_InGameMenu__ToggleUI(pUVar3,!bVar8,(MethodInfo *)0x0);
      }
    }
    UnityEngine_Input__GetKeyDown(0x11d,(MethodInfo *)0x0);
    return;
  }
label_181e5ec90:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$OnSongChange
// il2cpp: void GameManagers_InGameManager__OnSongChange (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x181e58190

void GameManagers_InGameManager__OnSongChange(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_InGameMenu_o *pUVar2;
  UI_BasePopup_o *x;
  UI_SongPopup_o *__this_00;
  bool bVar3;
  System_Collections_IEnumerator_o *routine;
  
  if (Il2CppMethodInitialized_184344eba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SongPopup);
    Il2CppMethodInitialized_184344eba = '\x01';
  }
  pUVar2 = (__this->fields)._inGameMenu;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar2 = (__this->fields)._inGameMenu;
    if (pUVar2 == (UI_InGameMenu_o *)0x0) {
label_181e5828e:
      ThrowNullReferenceException();
    }
    x = (pUVar2->fields)._songPopup;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pUVar2 = (__this->fields)._inGameMenu;
      if ((pUVar2 == (UI_InGameMenu_o *)0x0) ||
         (__this_00 = (UI_SongPopup_o *)(pUVar2->fields)._songPopup, __this_00 == (UI_SongPopup_o *)0x0))
      goto label_181e5828e;
      bVar1 = (TypeInfo_UI_SongPopup->_2).typeHierarchyDepth;
      if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_SongPopup))
      {
        il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_UI_SongPopup);
      }
      routine = UI_SongPopup__ShowNextSongPopup(__this_00,(MethodInfo *)0x0);
      UnityEngine_MonoBehaviour__StartCoroutine_Auto
                ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
    }
  }
  return;
}


// GameManagers.InGameManager$$TakePreviewScreenshot
// il2cpp: void GameManagers_InGameManager__TakePreviewScreenshot (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x181e5e1f0
// eh: try 0x181e5e28f..0x181e5e421 -> pad 0x1833318f0 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 44 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e5e2e4: lea rcx, [rip + 0x2220275]  ; TypeInfo_UnityEngine_Texture2D
// asm:   0x181e5e2eb: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181e5e2f0: mov rcx, rax
// asm:   0x181e5e2f3: call 0x1804170d0  ; il2cpp_runtime_helper_1804170d0()
// asm:   0x181e5e2f8: mov rdi, rax
// asm:   0x181e5e2fb: xor r9d, r9d
// asm:   0x181e5e2fe: mov edx, 1
// asm:   0x181e5e303: mov r8d, edx
// asm:   0x181e5e306: mov rcx, rax
// asm:   0x181e5e309: call 0x182efbf30  ; UnityEngine_Texture2D___ctor()
// asm:   0x181e5e30e: test rdi, rdi
// asm:   0x181e5e311: je 0x181e5e414
// asm:   0x181e5e317: movdqa xmm0, xmmword ptr [rip + 0x14fb5b1]
// asm:   0x181e5e31f: movaps xmmword ptr [rsp + 0x40], xmm0
// asm:   0x181e5e324: xor ebx, ebx
// asm:   0x181e5e326: mov qword ptr [rsp + 0x20], rbx
// asm:   0x181e5e32b: lea r9, [rsp + 0x40]
// asm:   0x181e5e330: xor r8d, r8d
// asm:   0x181e5e333: xor edx, edx
// asm:   0x181e5e335: mov rcx, rdi
// asm:   0x181e5e338: call 0x182efb610  ; UnityEngine_Texture2D__SetPixel()
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

void GameManagers_InGameManager__TakePreviewScreenshot
               (GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameGeneralSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  UnityEngine_Texture2D_o *__this_00;
  System_String_o *pSVar4;
  System_Byte_array *bytes;
  UnityEngine_Rect_Fields local_18;
  
  if (Il2CppMethodInitialized_184344ebb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"/MapPreviews");
    il2cpp_codegen_initialize_runtime_metadata(&"Preview.png");
    il2cpp_codegen_initialize_runtime_metadata(&"/MapPreviews/");
    Il2CppMethodInitialized_184344ebb = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
  UnityEngine_Texture2D___ctor_2efc630(__this_00,0x400,0x400,3,false,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_Texture2D_o *)0x0) {
    ThrowNullReferenceException();
  }
  local_18.m_XMin = 1.0;
  local_18.m_YMin = 1.0;
  local_18.m_Width = 1.0;
  local_18.m_Height = 1.0;
  UnityEngine_Texture2D__SetPixel(__this_00,0,0,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
  local_18.m_XMin = 448.0;
  local_18.m_YMin = 28.0;
  local_18.m_Width = 1024.0;
  local_18.m_Height = 1024.0;
  UnityEngine_Texture2D__ReadPixels_2efaf30(__this_00,(UnityEngine_Rect_o *)&local_18,0,0,(MethodInfo *)0x0);
  UnityEngine_Texture2D__Apply_2ef9fd0(__this_00,(MethodInfo *)0x0);
  TextureScaler__ScaleBlocking(__this_00,0x100,0x100,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  pSVar4 = System_String__Concat_1969e50
                     (TypeInfo_Utility_FolderPaths->static_fields->Documents,"/MapPreviews",
                      (MethodInfo *)0x0);
  System_IO_Directory__CreateDirectory(pSVar4,(MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).General, pSVar2 != (Settings_InGameGeneralSettings_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).MapName, pSVar3 != (Settings_StringSetting_o *)0x0)) {
    pSVar4 = System_String__Concat_1969590
                       (TypeInfo_Utility_FolderPaths->static_fields->Documents,"/MapPreviews/",
                        (pSVar3->fields)._value,"Preview.png",(MethodInfo *)0x0);
    bytes = UnityEngine_ImageConversion__EncodeToPNG(__this_00,(MethodInfo *)0x0);
    System_IO_File__WriteAllBytes(pSVar4,bytes,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$UpdateCleanCharacters
// il2cpp: void GameManagers_InGameManager__UpdateCleanCharacters (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x181e5e4f0

void GameManagers_InGameManager__UpdateCleanCharacters
               (GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_Human__o *pSVar1;
  System_Collections_Generic_HashSet_BasicTitan__o *value;
  System_Collections_Generic_HashSet_BaseShifter__o *value_00;
  System_Collections_Generic_HashSet_Horse__o *value_01;
  System_Collections_Generic_HashSet_BaseDetection__o *value_02;
  
  if (Il2CppMethodInitialized_184344ebc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_Util_RemoveNullOrDeadDetections_BaseDetection);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_RemoveNullOrDead_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_RemoveNullOrDead_Horse);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_RemoveNullOrDead_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184344ebc = '\x01';
  }
  pSVar1 = (__this->fields).Humans;
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  pSVar1 = (System_Collections_Generic_HashSet_Human__o *)
           Utility_Util__RemoveNullOrDeadDetections_object_
                     ((System_Collections_Generic_HashSet_T__o *)pSVar1,
                      (MethodInfo_86B5C0 *)MethodInfo_Utility_Util_RemoveNullOrDead_Human);
  (__this->fields).Humans = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Humans,pSVar1);
  value = (System_Collections_Generic_HashSet_BasicTitan__o *)
          Utility_Util__RemoveNullOrDeadDetections_object_
                    ((System_Collections_Generic_HashSet_T__o *)(__this->fields).Titans,
                     (MethodInfo_86B5C0 *)MethodInfo_Utility_Util_RemoveNullOrDead_BasicTitan);
  (__this->fields).Titans = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Titans,value);
  value_00 = Utility_Util__RemoveNullOrDeadShifters((__this->fields).Shifters,(MethodInfo *)0x0);
  (__this->fields).Shifters = value_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Shifters,value_00);
  value_01 = (System_Collections_Generic_HashSet_Horse__o *)
             Utility_Util__RemoveNullOrDeadDetections_object_
                       ((System_Collections_Generic_HashSet_T__o *)(__this->fields).Horses,
                        (MethodInfo_86B5C0 *)MethodInfo_Utility_Util_RemoveNullOrDead_Horse);
  (__this->fields).Horses = value_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Horses,value_01);
  value_02 = (System_Collections_Generic_HashSet_BaseDetection__o *)
             Utility_Util__RemoveNullOrDeadDetections_object_
                       ((System_Collections_Generic_HashSet_T__o *)(__this->fields).Detections,
                        (MethodInfo_86B5C0 *)MethodInfo_Utility_Util_RemoveNullOrDeadDetections_BaseDetection)
  ;
  (__this->fields).Detections = value_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Detections,value_02);
  return;
}


// GameManagers.InGameManager$$LoadSkin
// il2cpp: void GameManagers_InGameManager__LoadSkin (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x181e55500
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e55811: jmp 0x181e559a7

void GameManagers_InGameManager__LoadSkin(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_CustomSkinSettings_o *pSVar2;
  Settings_BaseCustomSkinSettings_SkyboxCustomSkinSet__o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  Settings_InspectorSettingMetadata_o *pSVar5;
  System_Collections_Specialized_OrderedDictionary_o *pSVar6;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSVar7;
  System_Collections_Generic_HashSet_string__o *pSVar8;
  bool bVar9;
  Settings_BaseSetSetting_o *pSVar10;
  System_String_array *pSVar11;
  System_String_o *pSVar12;
  System_Object_array *parameters;
  Il2CppObject *pIVar13;
  Photon_Pun_PhotonView_o *__this_00;
  
  if (Il2CppMethodInitialized_184344ebd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_SkyboxCustomSkinSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SkyboxCustomSkinSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"LoadSkyboxRPC");
    il2cpp_codegen_initialize_runtime_metadata(&",");
    Il2CppMethodInitialized_184344ebd = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar9 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (bVar9) {
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
    if (((pSVar2 == (Settings_CustomSkinSettings_o *)0x0) ||
        (pSVar3 = (pSVar2->fields).Skybox,
        pSVar3 == (Settings_BaseCustomSkinSettings_SkyboxCustomSkinSet__o *)0x0)) ||
       (pSVar4 = (pSVar3->fields).SkinsEnabled, pSVar4 == (Settings_BoolSetting_o *)0x0)) goto label_181e55a0e;
    if ((pSVar4->fields)._value == false) goto label_181e55816;
    pSVar4 = (((TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings->fields).Skybox)->fields)
             .SkinsLocal;
    if (pSVar4 == (Settings_BoolSetting_o *)0x0) goto label_181e55a0e;
    if ((pSVar4->fields)._value != false) goto label_181e55816;
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
    if ((pSVar2 == (Settings_CustomSkinSettings_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).Skybox,
       pSVar3 == (Settings_BaseCustomSkinSettings_SkyboxCustomSkinSet__o *)0x0)) goto label_181e55a0e;
    pSVar10 = Settings_SetSettingsContainer_object___GetSelectedSet
                        ((Settings_SetSettingsContainer_T__o *)pSVar3,
                         (MethodInfo_C8EAF0 *)
                         MethodInfo_Settings_SetSettingsContainer_SkyboxCustomSkinSet_GetSelectedSet);
    if (pSVar10 == (Settings_BaseSetSetting_o *)0x0) {
      SZArrayNew(TypeInfo_string_array,6);
      goto label_181e55a0e;
    }
    bVar1 = (TypeInfo_Settings_SkyboxCustomSkinSet->_2).typeHierarchyDepth;
    if (((pSVar10->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar10->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_SkyboxCustomSkinSet)) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar10);
    }
    pSVar11 = (System_String_array *)SZArrayNew(TypeInfo_string_array,6);
    if (((*(uint64_t *)((char *)pSVar10 + 0x48)) == (Settings_BaseSetSetting_c *)0x0) || (pSVar11 == (System_String_array *)0x0))
    goto label_181e55a0e;
    if ((int)pSVar11->max_length == 0) goto label_181e559f7;
    pSVar12 = (((*(Il2CppClass **)((char *)pSVar10 + 0x48)))->_1).byval_arg.data;
    pSVar11->m_Items[0] = pSVar12;
    Il2CppCodeGenWriteBarrier(pSVar11->m_Items,pSVar12);
    if ((*(uint64_t *)((char *)pSVar10 + 0x50)) == (void *)0x0) goto label_181e55a0e;
    if ((uint)pSVar11->max_length < 2) goto label_181e559f7;
    pSVar12 = *(System_String_o **)((longlong)(*(uint64_t *)((char *)pSVar10 + 0x50)) + 0x20);
    pSVar11->m_Items[1] = pSVar12;
    Il2CppCodeGenWriteBarrier(pSVar11->m_Items + 1,pSVar12);
    pSVar5 = (*(uint64_t *)((char *)pSVar10 + 0x58));
    if (pSVar5 == (Settings_InspectorSettingMetadata_o *)0x0) goto label_181e55a0e;
    if ((uint)pSVar11->max_length < 3) goto label_181e559f7;
    pSVar12 = (pSVar5->fields).Header;
    pSVar11->m_Items[2] = pSVar12;
    Il2CppCodeGenWriteBarrier(pSVar11->m_Items + 2,pSVar12);
    pSVar6 = (*(uint64_t *)((char *)pSVar10 + 0x60));
    if (pSVar6 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_181e55a0e;
    if ((uint)pSVar11->max_length < 4) goto label_181e559f7;
    pSVar12 = *(System_String_o **)&(pSVar6->fields)._initialCapacity;
    pSVar11->m_Items[3] = pSVar12;
    Il2CppCodeGenWriteBarrier(pSVar11->m_Items + 3,pSVar12);
    pSVar7 = (*(uint64_t *)((char *)pSVar10 + 0x68));
    if (pSVar7 == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) goto label_181e55a0e;
    if ((uint)pSVar11->max_length < 5) goto label_181e559f7;
    pSVar12 = *(System_String_o **)&(pSVar7->fields)._count;
    pSVar11->m_Items[4] = pSVar12;
    Il2CppCodeGenWriteBarrier(pSVar11->m_Items + 4,pSVar12);
    pSVar8 = (*(uint64_t *)((char *)pSVar10 + 0x70));
    if (pSVar8 == (System_Collections_Generic_HashSet_string__o *)0x0) goto label_181e55a0e;
    if ((uint)pSVar11->max_length < 6) goto label_181e559f7;
    pSVar12 = *(System_String_o **)&(pSVar8->fields)._count;
    pSVar11->m_Items[5] = pSVar12;
    Il2CppCodeGenWriteBarrier(pSVar11->m_Items + 5,pSVar12);
    pSVar12 = System_String__Join(",",pSVar11,(MethodInfo *)0x0);
    __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    if (parameters == (System_Object_array *)0x0) goto label_181e55a0e;
    if ((pSVar12 != (System_String_o *)0x0) &&
       (pIVar13 = il2cpp_vm_Object_IsInst
                            ((Il2CppObject *)pSVar12,(((parameters->obj).klass)->_1).element_class),
       pIVar13 == (Il2CppObject *)0x0)) {
      pIVar13 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar13,(MethodInfo *)0x0);
    }
  }
  else {
label_181e55816:
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    bVar9 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if (!bVar9) {
      return;
    }
    pSVar11 = (System_String_array *)SZArrayNew(TypeInfo_string_array,6);
    if (pSVar11 == (System_String_array *)0x0) goto label_181e55a0e;
    if ((int)pSVar11->max_length == 0) goto label_181e559f7;
    pSVar12 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    pSVar11->m_Items[0] = pSVar12;
    Il2CppCodeGenWriteBarrier(pSVar11->m_Items,pSVar12);
    if ((uint)pSVar11->max_length < 2) goto label_181e559f7;
    pSVar12 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    pSVar11->m_Items[1] = pSVar12;
    Il2CppCodeGenWriteBarrier(pSVar11->m_Items + 1,pSVar12);
    if ((uint)pSVar11->max_length < 3) goto label_181e559f7;
    pSVar12 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    pSVar11->m_Items[2] = pSVar12;
    Il2CppCodeGenWriteBarrier(pSVar11->m_Items + 2,pSVar12);
    if ((uint)pSVar11->max_length < 4) goto label_181e559f7;
    pSVar12 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    pSVar11->m_Items[3] = pSVar12;
    Il2CppCodeGenWriteBarrier(pSVar11->m_Items + 3,pSVar12);
    if ((uint)pSVar11->max_length < 5) goto label_181e559f7;
    pSVar12 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    pSVar11->m_Items[4] = pSVar12;
    Il2CppCodeGenWriteBarrier(pSVar11->m_Items + 4,pSVar12);
    if ((uint)pSVar11->max_length < 6) goto label_181e559f7;
    pSVar12 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    pSVar11->m_Items[5] = pSVar12;
    Il2CppCodeGenWriteBarrier(pSVar11->m_Items + 5,pSVar12);
    pSVar12 = System_String__Join(",",pSVar11,(MethodInfo *)0x0);
    __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    if (parameters == (System_Object_array *)0x0) goto label_181e55a0e;
    if ((pSVar12 != (System_String_o *)0x0) &&
       (pIVar13 = il2cpp_vm_Object_IsInst
                            ((Il2CppObject *)pSVar12,(((parameters->obj).klass)->_1).element_class),
       pIVar13 == (Il2CppObject *)0x0)) {
      pIVar13 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar13,(MethodInfo *)0x0);
    }
  }
  if ((int)parameters->max_length == 0) {
label_181e559f7:
    ThrowIndexOutOfRangeException();
  }
  parameters->m_Items[0] = (Il2CppObject *)pSVar12;
  Il2CppCodeGenWriteBarrier(parameters->m_Items,pSVar12);
  if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
    Photon_Pun_PhotonView__RPC(__this_00,"LoadSkyboxRPC",3,parameters,(MethodInfo *)0x0);
    return;
  }
label_181e55a0e:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$OnLoadSkyboxRPC
// il2cpp: System_Collections_IEnumerator_o* GameManagers_InGameManager__OnLoadSkyboxRPC (GameManagers_InGameManager_o* __this, System_String_array* urls, const MethodInfo* method);
// 0x181e56a30

System_Collections_IEnumerator_o *
GameManagers_InGameManager__OnLoadSkyboxRPC
          (GameManagers_InGameManager_o *__this,System_String_array *urls,MethodInfo *method)

{
  Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *__this_00;
  
  if (Il2CppMethodInitialized_184344ebe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager_OnLoadSkyboxRPC_d__112);
    Il2CppMethodInitialized_184344ebe = '\x01';
  }
  __this_00 = (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameManagers_InGameManager_OnLoadSkyboxRPC_d__112);
  GameManagers_InGameManager__OnLoadSkyboxRPC_d__112___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)0x0) {
    (__this_00->fields).__4__this = (Photon_Pun_UtilityScripts_OnClickRpc_o *)__this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
    *(System_String_array **)&(__this_00->fields)._wasEmissive_5__2 = urls;
    Il2CppCodeGenWriteBarrier((void **)&(__this_00->fields)._wasEmissive_5__2,urls);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$ReloadSkybox
// il2cpp: System_Collections_IEnumerator_o* GameManagers_InGameManager__ReloadSkybox (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x181e59430

System_Collections_IEnumerator_o *
GameManagers_InGameManager__ReloadSkybox(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *__this_00;
  
  if (Il2CppMethodInitialized_184344ebf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager_ReloadSkybox_d__113);
    Il2CppMethodInitialized_184344ebf = '\x01';
  }
  __this_00 = (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameManagers_InGameManager_ReloadSkybox_d__113);
  GameManagers_InGameManager__ReloadSkybox_d__113___ctor(__this_00,0,(MethodInfo *)0x0);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// GameManagers.InGameManager$$OnLoadLevelSkinRPC
// il2cpp: System_Collections_IEnumerator_o* GameManagers_InGameManager__OnLoadLevelSkinRPC (GameManagers_InGameManager_o* __this, System_String_o* indices, System_String_o* urls1, System_String_o* urls2, const MethodInfo* method);
// 0x181e569e0

System_Collections_IEnumerator_o *
GameManagers_InGameManager__OnLoadLevelSkinRPC
          (GameManagers_InGameManager_o *__this,System_String_o *indices,System_String_o *urls1,
          System_String_o *urls2,MethodInfo *method)

{
  Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *__this_00;
  
  if (Il2CppMethodInitialized_184344ec0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager_OnLoadLevelSkinRPC_d__114)
    ;
    Il2CppMethodInitialized_184344ec0 = '\x01';
  }
  __this_00 = (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameManagers_InGameManager_OnLoadLevelSkinRPC_d__114);
  GameManagers_InGameManager__OnLoadLevelSkinRPC_d__114___ctor(__this_00,0,(MethodInfo *)0x0);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// GameManagers.InGameManager$$IsValidSkybox
// il2cpp: bool GameManagers_InGameManager__IsValidSkybox (GameManagers_InGameManager_o* __this, System_String_array* urls, const MethodInfo* method);
// 0x181e55230

bool GameManagers_InGameManager__IsValidSkybox
               (GameManagers_InGameManager_o *__this,System_String_array *urls,MethodInfo *method)

{
  System_String_o *url;
  bool bVar1;
  uint uVar2;
  
  if (Il2CppMethodInitialized_184344ec1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
    Il2CppMethodInitialized_184344ec1 = '\x01';
  }
  if (urls == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)urls->max_length != 6) {
    return false;
  }
  uVar2 = 0;
  while( true ) {
    if ((int)urls->max_length <= (int)uVar2) {
      return false;
    }
    if ((uint)urls->max_length <= uVar2) break;
    url = urls->m_Items[(int)uVar2];
    if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
    }
    bVar1 = CustomSkins_TextureDownloader__ValidTextureURL(url,false,(MethodInfo *)0x0);
    if (bVar1) {
      return true;
    }
    uVar2 = uVar2 + 1;
  }
  ThrowIndexOutOfRangeException();
}


// GameManagers.InGameManager$$.ctor
// il2cpp: void GameManagers_InGameManager___ctor (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x181e5ff00

void GameManagers_InGameManager___ctor(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_Human__o *__this_00;
  System_Collections_Generic_HashSet_BasicTitan__o *__this_01;
  System_Collections_Generic_HashSet_BaseShifter__o *__this_02;
  System_Collections_Generic_HashSet_Horse__o *__this_03;
  System_Collections_Generic_List_PhotonVoiceSync__o *__this_04;
  System_Collections_Generic_HashSet_BaseDetection__o *__this_05;
  
  if (Il2CppMethodInitialized_184344ec2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseShifter_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseDetection_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Horse_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Human_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_BasicTitan_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_Horse);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_BaseDetection);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_BaseShifter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_PhotonVoiceSync_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_PhotonVoiceSync);
    Il2CppMethodInitialized_184344ec2 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Human);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_Human_ctor);
  (__this->fields).Humans = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Humans,__this_00);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_BasicTitan)
  ;
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_01,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_BasicTitan_ctor);
  (__this->fields).Titans = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Titans,__this_01);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_BaseShifter);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_02,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_BaseShifter_ctor);
  (__this->fields).Shifters = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Shifters,__this_02);
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Horse);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_03,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_Horse_ctor);
  (__this->fields).Horses = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Horses,__this_03);
  __this_04 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_PhotonVoiceSync);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_04,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_PhotonVoiceSync_ctor);
  (__this->fields).PhotonVoiceSyncs = __this_04;
  Il2CppCodeGenWriteBarrier(&(__this->fields).PhotonVoiceSyncs,__this_04);
  (__this->fields).PauseTimeLeft = -1.0;
  __this_05 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_BaseDetection);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_05,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_BaseDetection_ctor);
  (__this->fields).Detections = __this_05;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Detections,__this_05);
  (__this->fields).pingUpdateInterval = 10.0;
  GameManagers_BaseGameManager___ctor
            ((Photon_Voice_PUN_UtilityScripts_VoiceDebugScript_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.InGameManager$$.cctor
// il2cpp: void GameManagers_InGameManager___cctor (const MethodInfo* method);
// 0x181e5f790

void GameManagers_InGameManager___cctor(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  System_String_o *pSVar4;
  MethodInfo *pMVar5;
  System_Collections_Generic_List_string__o *pSVar6;
  System_Collections_Generic_Dictionary_int__PlayerInfo__o *__this;
  System_Collections_Generic_HashSet_int__o *pSVar7;
  System_Collections_Generic_Dictionary_int__float__o *__this_00;
  GameManagers_PlayerInfo_o *__this_01;
  
  if (Il2CppMethodInitialized_184344ec3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_int_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_int_PlayerInfo)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTags);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerInfo);
    Il2CppMethodInitialized_184344ec3 = '\x01';
  }
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar6,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_Map_MapTags->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTags);
  }
  pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
  if (pSVar6 != (System_Collections_Generic_List_string__o *)0x0) {
    pSVar3 = (pSVar6->fields)._items;
    pSVar4 = TypeInfo_Map_MapTags->static_fields->HumanSpawnPointBlue;
    piVar1 = &(pSVar6->fields)._version;
    *piVar1 = *piVar1 + 1;
    if (pSVar3 == (System_String_array *)0x0) goto label_181e5fee5;
    uVar2 = (pSVar6->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (pSVar6->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181e5feeb;
      pSVar3->m_Items[(int)uVar2] = pSVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar4,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar3 = (pSVar6->fields)._items;
    pSVar4 = TypeInfo_Map_MapTags->static_fields->HumanSpawnPoint;
    piVar1 = &(pSVar6->fields)._version;
    *piVar1 = *piVar1 + 1;
    if (pSVar3 == (System_String_array *)0x0) goto label_181e5fee5;
    uVar2 = (pSVar6->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (pSVar6->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181e5feeb;
      pSVar3->m_Items[(int)uVar2] = pSVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar4,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar3 = (pSVar6->fields)._items;
    pSVar4 = TypeInfo_Map_MapTags->static_fields->HumanSpawnPointRed;
    piVar1 = &(pSVar6->fields)._version;
    *piVar1 = *piVar1 + 1;
    if (pSVar3 == (System_String_array *)0x0) goto label_181e5fee5;
    uVar2 = (pSVar6->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (pSVar6->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181e5feeb;
      pSVar3->m_Items[(int)uVar2] = pSVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar4,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    TypeInfo_GameManagers_InGameManager->static_fields->BlueSpawnTags = pSVar6;
    Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_InGameManager->static_fields->BlueSpawnTags,pSVar6);
    pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)pSVar6,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
    if (pSVar6 == (System_Collections_Generic_List_string__o *)0x0) goto label_181e5fee5;
    pSVar3 = (pSVar6->fields)._items;
    pSVar4 = TypeInfo_Map_MapTags->static_fields->HumanSpawnPointRed;
    piVar1 = &(pSVar6->fields)._version;
    *piVar1 = *piVar1 + 1;
    if (pSVar3 == (System_String_array *)0x0) goto label_181e5fee5;
    uVar2 = (pSVar6->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (pSVar6->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181e5feeb;
      pSVar3->m_Items[(int)uVar2] = pSVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar4,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar3 = (pSVar6->fields)._items;
    pSVar4 = TypeInfo_Map_MapTags->static_fields->HumanSpawnPoint;
    piVar1 = &(pSVar6->fields)._version;
    *piVar1 = *piVar1 + 1;
    if (pSVar3 == (System_String_array *)0x0) goto label_181e5fee5;
    uVar2 = (pSVar6->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (pSVar6->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181e5feeb;
      pSVar3->m_Items[(int)uVar2] = pSVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar4,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar3 = (pSVar6->fields)._items;
    pSVar4 = TypeInfo_Map_MapTags->static_fields->HumanSpawnPointBlue;
    piVar1 = &(pSVar6->fields)._version;
    *piVar1 = *piVar1 + 1;
    if (pSVar3 == (System_String_array *)0x0) goto label_181e5fee5;
    uVar2 = (pSVar6->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (pSVar6->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181e5feeb;
      pSVar3->m_Items[(int)uVar2] = pSVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar4,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    TypeInfo_GameManagers_InGameManager->static_fields->RedSpawnTags = pSVar6;
    Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_InGameManager->static_fields->RedSpawnTags,pSVar6);
    pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)pSVar6,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
    if (pSVar6 == (System_Collections_Generic_List_string__o *)0x0) goto label_181e5fee5;
    pSVar3 = (pSVar6->fields)._items;
    pSVar4 = TypeInfo_Map_MapTags->static_fields->HumanSpawnPoint;
    piVar1 = &(pSVar6->fields)._version;
    *piVar1 = *piVar1 + 1;
    if (pSVar3 == (System_String_array *)0x0) goto label_181e5fee5;
    uVar2 = (pSVar6->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (pSVar6->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181e5feeb;
      pSVar3->m_Items[(int)uVar2] = pSVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar4,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar3 = (pSVar6->fields)._items;
    pSVar4 = TypeInfo_Map_MapTags->static_fields->HumanSpawnPointBlue;
    piVar1 = &(pSVar6->fields)._version;
    *piVar1 = *piVar1 + 1;
    if (pSVar3 == (System_String_array *)0x0) goto label_181e5fee5;
    uVar2 = (pSVar6->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (pSVar6->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181e5feeb;
      pSVar3->m_Items[(int)uVar2] = pSVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar4,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar3 = (pSVar6->fields)._items;
    pSVar4 = TypeInfo_Map_MapTags->static_fields->HumanSpawnPointRed;
    piVar1 = &(pSVar6->fields)._version;
    *piVar1 = *piVar1 + 1;
    if (pSVar3 != (System_String_array *)0x0) {
      uVar2 = (pSVar6->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (pSVar6->fields)._size = uVar2 + 1;
        if ((uint)pSVar3->max_length <= uVar2) {
label_181e5feeb:
          ThrowIndexOutOfRangeException();
        }
        pSVar3->m_Items[(int)uVar2] = pSVar4;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar4);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar4,
                   (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
      }
      TypeInfo_GameManagers_InGameManager->static_fields->HumanSpawnTags = pSVar6;
      Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_InGameManager->static_fields->HumanSpawnTags,pSVar6);
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_PlayerInfo);
      System_Collections_Generic_Dictionary_int__object____ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                 (MethodInfo_1404750 *)MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_ctor);
      TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo = __this;
      Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo,__this);
      pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
      System_Collections_Generic_HashSet_int____ctor
                (pSVar7,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
      TypeInfo_GameManagers_InGameManager->static_fields->MuteEmote = pSVar7;
      Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_InGameManager->static_fields->MuteEmote,pSVar7);
      pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
      System_Collections_Generic_HashSet_int____ctor
                (pSVar7,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
      TypeInfo_GameManagers_InGameManager->static_fields->MuteText = pSVar7;
      Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_InGameManager->static_fields->MuteText,pSVar7);
      pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
      System_Collections_Generic_HashSet_int____ctor
                (pSVar7,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
      TypeInfo_GameManagers_InGameManager->static_fields->MuteVoiceChat = pSVar7;
      Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_InGameManager->static_fields->MuteVoiceChat,pSVar7);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_float);
      System_Collections_Generic_Dictionary_int__float____ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                 (MethodInfo_1404750 *)MethodInfo_System_Collections_Generic_Dictionary_int_float_ctor);
      TypeInfo_GameManagers_InGameManager->static_fields->VoiceChatVolumeMultiplier = __this_00;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_GameManagers_InGameManager->static_fields->VoiceChatVolumeMultiplier,__this_00);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameManagers_PlayerInfo);
      GameManagers_PlayerInfo___ctor(__this_01,(MethodInfo *)0x0);
      TypeInfo_GameManagers_InGameManager->static_fields->MyPlayerInfo = __this_01;
      Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_InGameManager->static_fields->MyPlayerInfo,__this_01);
      return;
    }
  }
label_181e5fee5:
  ThrowNullReferenceException();
}


