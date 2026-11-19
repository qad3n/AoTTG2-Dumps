// Type: GameManagers.InGameManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/GameManagers/InGameManager.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/InGameManager.cs
// --------------------------------

// GameManagers.InGameManager.<>c$$.cctor
// il2cpp: void GameManagers_InGameManager___c___cctor (const MethodInfo* method);
// 0x5949250

void GameManagers_InGameManager___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_0754585f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager_c);
    Il2CppMethodInitialized_0754585f = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameManagers_InGameManager_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_GameManagers_InGameManager_c->static_fields->__9 = (GameManagers_InGameManager___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_InGameManager_c->static_fields->__9);
  return;
}


// GameManagers.InGameManager.<>c$$.ctor
// il2cpp: void GameManagers_InGameManager___c___ctor (GameManagers_InGameManager___c_o* __this, const MethodInfo* method);
// 0x59492c0

void GameManagers_InGameManager___c___ctor(GameManagers_InGameManager___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.InGameManager.<>c$$<GetAllNonAICharacters>b__49_0
// il2cpp: bool GameManagers_InGameManager___c___GetAllNonAICharacters_b__49_0 (GameManagers_InGameManager___c_o* __this, Characters_BaseCharacter_o* x, const MethodInfo* method);
// 0x59492d0

bool GameManagers_InGameManager___c___GetAllNonAICharacters_b__49_0
               (GameManagers_InGameManager___c_o *__this,Characters_BaseCharacter_o *x,MethodInfo *method)

{
  if (x == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (x->fields).AI == false;
}


// GameManagers.InGameManager.<>c$$<GetTitanSpawnPositions>b__91_0
// il2cpp: System_ValueTuple_Vector3__Quaternion__o GameManagers_InGameManager___c___GetTitanSpawnPositions_b__91_0 (GameManagers_InGameManager___c_o* __this, UnityEngine_Transform_o* xform, const MethodInfo* method);
// 0x59492f0

System_ValueTuple_Vector3__Quaternion__o *
GameManagers_InGameManager___c___GetTitanSpawnPositions_b__91_0
          (System_ValueTuple_Vector3__Quaternion__o *__return_storage_ptr__,
          GameManagers_InGameManager___c_o *__this,UnityEngine_Transform_o *xform,MethodInfo *method)

{
  UnityEngine_Quaternion_o item2;
  UnityEngine_Vector3_o item1;
  
  if (Il2CppMethodInitialized_07545860 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_ValueTuple_Vector3_Quaternion_ctor);
    Il2CppMethodInitialized_07545860 = '\x01';
  }
  if (xform == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  item1 = UnityEngine_Transform__get_position(xform,(MethodInfo *)0x0);
  item2 = UnityEngine_Transform__get_rotation(xform,(MethodInfo *)0x0);
  (__return_storage_ptr__->fields).Item1.fields.x = 0.0;
  (__return_storage_ptr__->fields).Item1.fields.y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->fields).Item1.fields.z = 0;
  (__return_storage_ptr__->fields).Item2.fields.x = 0.0;
  (__return_storage_ptr__->fields).Item2.fields.y = 0.0;
  (__return_storage_ptr__->fields).Item2.fields.z = 0.0;
  (__return_storage_ptr__->fields).Item2.fields.w = 0.0;
  System_ValueTuple_Vector3__Quaternion____ctor
            (__return_storage_ptr__,item1,item2,
             (MethodInfo_45448C0 *)MethodInfo_System_ValueTuple_Vector3_Quaternion_ctor);
  return __return_storage_ptr__;
}


// GameManagers.InGameManager.<>c__DisplayClass86_0$$.ctor
// il2cpp: void GameManagers_InGameManager___c__DisplayClass86_0___ctor (GameManagers_InGameManager___c__DisplayClass86_0_o* __this, const MethodInfo* method);
// 0x59443e0

void GameManagers_InGameManager___c__DisplayClass86_0___ctor
               (GameManagers_InGameManager___c__DisplayClass86_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.InGameManager.<>c__DisplayClass86_0$$<SpawnAITitans>b__0
// il2cpp: Characters_BasicTitan_o* GameManagers_InGameManager___c__DisplayClass86_0___SpawnAITitans_b__0 (GameManagers_InGameManager___c__DisplayClass86_0_o* __this, System_ValueTuple_Vector3__Quaternion__o p, const MethodInfo* method);
// 0x5949380

Characters_BasicTitan_o *
GameManagers_InGameManager___c__DisplayClass86_0___SpawnAITitans_b__0
          (GameManagers_InGameManager___c__DisplayClass86_0_o *__this,
          System_ValueTuple_Vector3__Quaternion__o p,MethodInfo *method)

{
  System_String_o *type;
  GameManagers_InGameManager_o *pGVar1;
  System_ValueTuple_Vector3__Quaternion__o SVar2;
  Characters_BasicTitan_o *pCVar3;
  MethodInfo *method_00;
  GameManagers_InGameManager_o *__this_00;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector3_o euler;
  
  SVar2.fields = p.fields;
  type = (__this->fields).type;
  pGVar1 = (__this->fields).__4__this;
  UVar4 = UnityEngine_Quaternion__Internal_ToEulerRad(&p.fields.Item2,(MethodInfo *)0x0);
  euler.fields.x = UVar4.fields.x * 57.29578;
  euler.fields.y = UVar4.fields.y * 57.29578;
  euler.fields.z = UVar4.fields.z * 57.29578;
  __this_00 = (GameManagers_InGameManager_o *)0x0;
  UVar4 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
  if (pGVar1 == (GameManagers_InGameManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar3 = GameManagers_InGameManager__SpawnAITitanAt
                     (__this_00,type,SVar2.fields.Item1.fields,UVar4.fields.y,method_00);
  return pCVar3;
}


// GameManagers.InGameManager.<FinishRestartGame>d__58$$.ctor
// il2cpp: void GameManagers_InGameManager__FinishRestartGame_d__58___ctor (GameManagers_InGameManager__FinishRestartGame_d__58_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x593db20

void GameManagers_InGameManager__FinishRestartGame_d__58___ctor
               (GameManagers_InGameManager__FinishRestartGame_d__58_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.InGameManager.<FinishRestartGame>d__58$$System.IDisposable.Dispose
// il2cpp: void GameManagers_InGameManager__FinishRestartGame_d__58__System_IDisposable_Dispose (GameManagers_InGameManager__FinishRestartGame_d__58_o* __this, const MethodInfo* method);
// 0x5949400

void GameManagers_InGameManager__FinishRestartGame_d__58__System_IDisposable_Dispose
               (GameManagers_InGameManager__FinishRestartGame_d__58_o *__this,MethodInfo *method)

{
  return;
}


// GameManagers.InGameManager.<FinishRestartGame>d__58$$MoveNext
// il2cpp: bool GameManagers_InGameManager__FinishRestartGame_d__58__MoveNext (GameManagers_InGameManager__FinishRestartGame_d__58_o* __this, const MethodInfo* method);
// 0x5949410

bool GameManagers_InGameManager__FinishRestartGame_d__58__MoveNext
               (GameManagers_InGameManager__FinishRestartGame_d__58_o *__this,MethodInfo *method)

{
  int iVar1;
  Photon_Pun_PhotonView_o *__this_00;
  Settings_UISettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  System_Object_array *parameters;
  UnityEngine_WaitForSeconds_o *__this_01;
  Il2CppObject *__this_02;
  bool bVar4;
  
  if (Il2CppMethodInitialized_07545861 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    il2cpp_codegen_initialize_runtime_metadata(&"RestartGameRPC");
    Il2CppMethodInitialized_07545861 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 - 1U < 2) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    Photon_Pun_PhotonNetwork__DestroyAll((MethodInfo *)0x0);
    __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
    if (__this_00 == (Photon_Pun_PhotonView_o *)0x0) {
label_059495c6:
      ThrowNullReferenceException();
    }
    bVar4 = false;
    Photon_Pun_PhotonView__RPC(__this_00,"RestartGameRPC",0,parameters,(MethodInfo *)0x0);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if ((pSVar2 == (Settings_UISettings_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).FadeLoadscreen, pSVar3 == (Settings_BoolSetting_o *)0x0)) goto label_059495c6;
    if ((pSVar3->fields)._value == false) {
      __this_02 = (Il2CppObject *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)__this_02,(MethodInfo *)0x0);
      (__this->fields).__2__current = __this_02;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 2;
    }
    else {
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor(__this_01,0.2,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)__this_01;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 1;
    }
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}


// GameManagers.InGameManager.<FinishRestartGame>d__58$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__FinishRestartGame_d__58__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_InGameManager__FinishRestartGame_d__58_o* __this, const MethodInfo* method);
// 0x59495d0

Il2CppObject *
GameManagers_InGameManager__FinishRestartGame_d__58__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (GameManagers_InGameManager__FinishRestartGame_d__58_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<FinishRestartGame>d__58$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_InGameManager__FinishRestartGame_d__58__System_Collections_IEnumerator_Reset (GameManagers_InGameManager__FinishRestartGame_d__58_o* __this, const MethodInfo* method);
// 0x59495e0

void GameManagers_InGameManager__FinishRestartGame_d__58__System_Collections_IEnumerator_Reset
               (GameManagers_InGameManager__FinishRestartGame_d__58_o *__this,MethodInfo *method)

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
                  MethodInfo_GameManagers_InGameManager_FinishRestartGame_d__58_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// GameManagers.InGameManager.<FinishRestartGame>d__58$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__FinishRestartGame_d__58__System_Collections_IEnumerator_get_Current (GameManagers_InGameManager__FinishRestartGame_d__58_o* __this, const MethodInfo* method);
// 0x5949620

Il2CppObject *
GameManagers_InGameManager__FinishRestartGame_d__58__System_Collections_IEnumerator_get_Current
          (GameManagers_InGameManager__FinishRestartGame_d__58_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<GetAllCharactersEnumerable>d__48$$.ctor
// il2cpp: void GameManagers_InGameManager__GetAllCharactersEnumerable_d__48___ctor (GameManagers_InGameManager__GetAllCharactersEnumerable_d__48_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x593d260

void GameManagers_InGameManager__GetAllCharactersEnumerable_d__48___ctor
               (GameManagers_InGameManager__GetAllCharactersEnumerable_d__48_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  int32_t iVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// GameManagers.InGameManager.<GetAllCharactersEnumerable>d__48$$System.IDisposable.Dispose
// il2cpp: void GameManagers_InGameManager__GetAllCharactersEnumerable_d__48__System_IDisposable_Dispose (GameManagers_InGameManager__GetAllCharactersEnumerable_d__48_o* __this, const MethodInfo* method);
// 0x5949630

void GameManagers_InGameManager__GetAllCharactersEnumerable_d__48__System_IDisposable_Dispose
               (GameManagers_InGameManager__GetAllCharactersEnumerable_d__48_o *__this,MethodInfo *method)

{
  switch((__this->fields).__1__state) {
  case -6:
  case 4:
    if (Il2CppMethodInitialized_07545866 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_Dispose);
      Il2CppMethodInitialized_07545866 = '\x01';
    }
    (__this->fields).__1__state = -1;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)&(__this->fields).__7__wrap4,
               (MethodInfo_4C456C0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_Dispose);
    return;
  case -5:
  case 3:
    if (Il2CppMethodInitialized_07545865 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose);
      Il2CppMethodInitialized_07545865 = '\x01';
    }
    break;
  case -4:
  case 2:
    if (Il2CppMethodInitialized_07545864 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose);
      Il2CppMethodInitialized_07545864 = '\x01';
    }
    (__this->fields).__1__state = -1;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)&(__this->fields).__7__wrap2,
               (MethodInfo_4C456C0 *)
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose);
    return;
  case -3:
  case 1:
    if (Il2CppMethodInitialized_07545863 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
      Il2CppMethodInitialized_07545863 = '\x01';
    }
    (__this->fields).__1__state = -1;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)&(__this->fields).__7__wrap1,
               (MethodInfo_4C456C0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
    return;
  default:
    return;
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)&(__this->fields).__7__wrap3,
             (MethodInfo_4C456C0 *)
             MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose);
  return;
}


// GameManagers.InGameManager.<GetAllCharactersEnumerable>d__48$$MoveNext
// il2cpp: bool GameManagers_InGameManager__GetAllCharactersEnumerable_d__48__MoveNext (GameManagers_InGameManager__GetAllCharactersEnumerable_d__48_o* __this, const MethodInfo* method);
// 0x5949740
// eh: try 0x594985b..0x5949d7e -> pad 0x5949d88 (+39 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5949dde..0x5949de3 -> pad 0x5949dfd cleanup
// eh: try 0x5949e00..0x5949e0a -> pad 0x5949e12 catch (...) [compiler noexcept guard]
// asm: 57 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5949d7e: jmp 0x5949dc6
// asm:   0x5949d80: jmp 0x5949dc6
// asm:   0x5949d82: jmp 0x5949dc6
// asm:   0x5949d84: jmp 0x5949dc6
// asm:   0x5949d86: jmp 0x5949dc6
// asm:   0x5949d88: jmp 0x5949dc6
// asm:   0x5949d8a: jmp 0x5949dc6
// asm:   0x5949d8c: jmp 0x5949dc6
// asm:   0x5949d8e: jmp 0x5949dc6
// asm:   0x5949d90: jmp 0x5949dc6
// asm:   0x5949d92: jmp 0x5949dc6
// asm:   0x5949d94: jmp 0x5949dc6
// asm:   0x5949d96: jmp 0x5949dc6
// asm:   0x5949d98: jmp 0x5949dc6
// asm:   0x5949d9a: jmp 0x5949dc6
// asm:   0x5949d9c: jmp 0x5949dc6
// asm:   0x5949d9e: jmp 0x5949dc6
// asm:   0x5949da0: jmp 0x5949dc6
// asm:   0x5949da2: jmp 0x5949dc6
// asm:   0x5949da4: jmp 0x5949dc6
// asm:   0x5949da6: jmp 0x5949dc6
// asm:   0x5949da8: jmp 0x5949dc6
// asm:   0x5949daa: jmp 0x5949dc6
// asm:   0x5949dac: jmp 0x5949dc6
// asm:   0x5949dae: jmp 0x5949dc6
// asm:   0x5949db0: jmp 0x5949dc6
// asm:   0x5949db2: jmp 0x5949dc6
// asm:   0x5949db4: jmp 0x5949dc6
// asm:   0x5949db6: jmp 0x5949dc6
// asm:   0x5949db8: jmp 0x5949dc6
// asm:   0x5949dba: jmp 0x5949dc6
// asm:   0x5949dbc: jmp 0x5949dc6
// asm:   0x5949dbe: jmp 0x5949dc6
// asm:   0x5949dc0: jmp 0x5949dc6
// asm:   0x5949dc2: jmp 0x5949dc6
// asm:   0x5949dc4: jmp 0x5949dc6
// asm:   0x5949dc6: mov rbx, rax
// asm:   0x5949dc9: cmp edx, 1
// asm:   0x5949dcc: jne 0x5949e00
// asm:   0x5949dce: mov rdi, rbx
// asm:   0x5949dd1: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5949dd6: mov rbx, qword ptr [rax]
// asm:   0x5949dd9: mov qword ptr [rsp + 0x38], rbx
// asm:   0x5949dde: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5949de3: test rbx, rbx
// asm:   0x5949de6: je 0x5949d34
// asm:   0x5949dec: mov rdi, qword ptr [rsp]
// asm:   0x5949df0: call 0x2fd3940  ; il2cpp_runtime_helper_02fd3940()
// asm:   0x5949df5: mov rdi, rbx
// asm:   0x5949df8: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5949dfd: mov rbx, rax
// asm:   0x5949e00: lea rdi, [rsp + 0x38]
// asm:   0x5949e05: call 0x2fd3510  ; il2cpp_runtime_helper_02fd3510()
// asm:   0x5949e0a: mov rdi, rbx
// asm:   0x5949e0d: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5949e12: mov rdi, rax
// asm:   0x5949e15: call 0x2ab61e0  ; __clang_call_terminate()

bool GameManagers_InGameManager__GetAllCharactersEnumerable_d__48__MoveNext
               (GameManagers_InGameManager__GetAllCharactersEnumerable_d__48_o *__this,MethodInfo *method)

{
  uint uVar1;
  GameManagers_InGameManager_o *pGVar2;
  Characters_Human_o *x;
  Characters_BasicTitan_o *x_00;
  Characters_BaseShifter_o *x_01;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  Characters_Horse_o *x_02;
  GameManagers_InGameManager__GetAllCharactersEnumerable_d__48_o *pGVar4;
  GameManagers_InGameManager__GetAllCharactersEnumerable_d__48_o **ppGVar5;
  GameManagers_InGameManager__GetAllCharactersEnumerable_d__48_o **ppGVar6;
  GameManagers_InGameManager__GetAllCharactersEnumerable_d__48_o **ppGVar7;
  GameManagers_InGameManager__GetAllCharactersEnumerable_d__48_o **ppGVar8;
  bool bVar9;
  GameManagers_InGameManager__GetAllCharactersEnumerable_d__48_o *local_68;
  System_Collections_Generic_HashSet_Enumerator_T__o local_60;
  System_Collections_Generic_HashSet_T__o *local_48;
  int32_t iStack_40;
  int32_t iStack_3c;
  Characters_BasicTitan_o *local_38;
  undefined8 local_30;
  undefined1 *local_28;
  
  local_68 = __this;
  if (Il2CppMethodInitialized_07545862 == '\0') {
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
    Il2CppMethodInitialized_07545862 = '\x01';
  }
  local_28 = (undefined1 *)&local_68;
  local_30 = 0;
  uVar1 = (__this->fields).__1__state;
  if (uVar1 < 5) {
    pGVar2 = (__this->fields).__4__this;
    ppGVar5 = &local_68;
    ppGVar6 = &local_68;
    ppGVar7 = &local_68;
    ppGVar8 = &local_68;
    switch(uVar1) {
    case 0:
      (__this->fields).__1__state = -1;
      if (pGVar2 == (GameManagers_InGameManager_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar3 = (System_Collections_Generic_HashSet_object__o *)(pGVar2->fields).Humans;
      if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) {
        local_28 = (undefined1 *)&local_68;
        ThrowNullReferenceException();
      }
      local_28 = (undefined1 *)&local_68;
      System_Collections_Generic_HashSet_object___GetEnumerator
                (&local_60,pSVar3,
                 (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
      local_38 = (Characters_BasicTitan_o *)local_60.fields._current;
      local_48 = local_60.fields._set;
      iStack_40 = local_60.fields._index;
      iStack_3c = local_60.fields._version;
      (local_68->fields).__7__wrap1.fields._current = (Characters_Human_o *)local_60.fields._current;
      (local_68->fields).__7__wrap1.fields._set = local_60.fields._set;
      (local_68->fields).__7__wrap1.fields._index = local_60.fields._index;
      (local_68->fields).__7__wrap1.fields._version = local_60.fields._version;
      Il2CppCodeGenWriteBarrier((void **)&(local_68->fields).__7__wrap1);
      __this = local_68;
      ppGVar8 = (GameManagers_InGameManager__GetAllCharactersEnumerable_d__48_o **)local_28;
    case 1:
      local_28 = (undefined1 *)ppGVar8;
      (__this->fields).__1__state = -3;
      while (bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                               ((System_Collections_Generic_HashSet_Enumerator_T__o *)
                                &(__this->fields).__7__wrap1,
                                (MethodInfo_4C456D0 *)
                                MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext),
            pGVar4 = local_68, bVar9) {
        x = (local_68->fields).__7__wrap1.fields._current;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar9 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar9) {
          if (x == (Characters_Human_o *)0x0) {
            ThrowNullReferenceException();
          }
          if ((x->fields).Dead == false) {
            (local_68->fields).__2__current = (Characters_BaseCharacter_o *)x;
            Il2CppCodeGenWriteBarrier(&(local_68->fields).__2__current);
            (local_68->fields).__1__state = 1;
            return true;
          }
        }
        __this = local_68;
      }
      if (Il2CppMethodInitialized_07545863 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
        Il2CppMethodInitialized_07545863 = '\x01';
      }
      (pGVar4->fields).__1__state = -1;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)&(pGVar4->fields).__7__wrap1,
                 (MethodInfo_4C456C0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose)
      ;
      (local_68->fields).__7__wrap1.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
      (local_68->fields).__7__wrap1.fields._index = 0;
      (local_68->fields).__7__wrap1.fields._version = 0;
      (local_68->fields).__7__wrap1.fields._current = (Characters_Human_o *)0x0;
      if (pGVar2 == (GameManagers_InGameManager_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar3 = (System_Collections_Generic_HashSet_object__o *)(pGVar2->fields).Titans;
      if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_HashSet_object___GetEnumerator
                (&local_60,pSVar3,
                 (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_BasicTitan_GetEnumerator)
      ;
      local_38 = (Characters_BasicTitan_o *)local_60.fields._current;
      local_48 = local_60.fields._set;
      iStack_40 = local_60.fields._index;
      iStack_3c = local_60.fields._version;
      (local_68->fields).__7__wrap2.fields._current = (Characters_BasicTitan_o *)local_60.fields._current;
      (local_68->fields).__7__wrap2.fields._set = local_60.fields._set;
      (local_68->fields).__7__wrap2.fields._index = local_60.fields._index;
      (local_68->fields).__7__wrap2.fields._version = local_60.fields._version;
      Il2CppCodeGenWriteBarrier((void **)&(local_68->fields).__7__wrap2);
      __this = local_68;
      ppGVar7 = (GameManagers_InGameManager__GetAllCharactersEnumerable_d__48_o **)local_28;
    case 2:
      local_28 = (undefined1 *)ppGVar7;
      (__this->fields).__1__state = -4;
      while (bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                               ((System_Collections_Generic_HashSet_Enumerator_T__o *)
                                &(__this->fields).__7__wrap2,
                                (MethodInfo_4C456D0 *)
                                MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_MoveNext),
            pGVar4 = local_68, bVar9) {
        x_00 = (local_68->fields).__7__wrap2.fields._current;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar9 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar9) {
          if (x_00 == (Characters_BasicTitan_o *)0x0) {
            ThrowNullReferenceException();
          }
          if ((x_00->fields).Dead == false) {
            (local_68->fields).__2__current = (Characters_BaseCharacter_o *)x_00;
            Il2CppCodeGenWriteBarrier(&(local_68->fields).__2__current);
            (local_68->fields).__1__state = 2;
            return true;
          }
        }
        __this = local_68;
      }
      if (Il2CppMethodInitialized_07545864 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose);
        Il2CppMethodInitialized_07545864 = '\x01';
      }
      (pGVar4->fields).__1__state = -1;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)&(pGVar4->fields).__7__wrap2,
                 (MethodInfo_4C456C0 *)
                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose);
      (local_68->fields).__7__wrap2.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
      (local_68->fields).__7__wrap2.fields._index = 0;
      (local_68->fields).__7__wrap2.fields._version = 0;
      (local_68->fields).__7__wrap2.fields._current = (Characters_BasicTitan_o *)0x0;
      if (pGVar2 == (GameManagers_InGameManager_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar3 = (System_Collections_Generic_HashSet_object__o *)(pGVar2->fields).Shifters;
      if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_HashSet_object___GetEnumerator
                (&local_60,pSVar3,
                 (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_BaseShifter_GetEnumerator
                );
      local_38 = (Characters_BasicTitan_o *)local_60.fields._current;
      local_48 = local_60.fields._set;
      iStack_40 = local_60.fields._index;
      iStack_3c = local_60.fields._version;
      (local_68->fields).__7__wrap3.fields._current = (Characters_BaseShifter_o *)local_60.fields._current;
      (local_68->fields).__7__wrap3.fields._set = local_60.fields._set;
      (local_68->fields).__7__wrap3.fields._index = local_60.fields._index;
      (local_68->fields).__7__wrap3.fields._version = local_60.fields._version;
      Il2CppCodeGenWriteBarrier((void **)&(local_68->fields).__7__wrap3);
      __this = local_68;
      ppGVar6 = (GameManagers_InGameManager__GetAllCharactersEnumerable_d__48_o **)local_28;
    case 3:
      local_28 = (undefined1 *)ppGVar6;
      (__this->fields).__1__state = -5;
      while (bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                               ((System_Collections_Generic_HashSet_Enumerator_T__o *)
                                &(__this->fields).__7__wrap3,
                                (MethodInfo_4C456D0 *)
                                MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_MoveNext)
            , pGVar4 = local_68, bVar9) {
        x_01 = (local_68->fields).__7__wrap3.fields._current;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar9 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar9) {
          if (x_01 == (Characters_BaseShifter_o *)0x0) {
            ThrowNullReferenceException();
          }
          if ((x_01->fields).Dead == false) {
            (local_68->fields).__2__current = (Characters_BaseCharacter_o *)x_01;
            Il2CppCodeGenWriteBarrier(&(local_68->fields).__2__current);
            (local_68->fields).__1__state = 3;
            return true;
          }
        }
        __this = local_68;
      }
      if (Il2CppMethodInitialized_07545865 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose);
        Il2CppMethodInitialized_07545865 = '\x01';
      }
      (pGVar4->fields).__1__state = -1;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)&(pGVar4->fields).__7__wrap3,
                 (MethodInfo_4C456C0 *)
                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose);
      (local_68->fields).__7__wrap3.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
      (local_68->fields).__7__wrap3.fields._index = 0;
      (local_68->fields).__7__wrap3.fields._version = 0;
      (local_68->fields).__7__wrap3.fields._current = (Characters_BaseShifter_o *)0x0;
      if (pGVar2 == (GameManagers_InGameManager_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar3 = (System_Collections_Generic_HashSet_object__o *)(pGVar2->fields).Horses;
      if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_HashSet_object___GetEnumerator
                (&local_60,pSVar3,
                 (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_Horse_GetEnumerator);
      local_38 = (Characters_BasicTitan_o *)local_60.fields._current;
      local_48 = local_60.fields._set;
      iStack_40 = local_60.fields._index;
      iStack_3c = local_60.fields._version;
      (local_68->fields).__7__wrap4.fields._current = (Characters_Horse_o *)local_60.fields._current;
      (local_68->fields).__7__wrap4.fields._set = local_60.fields._set;
      (local_68->fields).__7__wrap4.fields._index = local_60.fields._index;
      (local_68->fields).__7__wrap4.fields._version = local_60.fields._version;
      Il2CppCodeGenWriteBarrier((void **)&(local_68->fields).__7__wrap4);
      __this = local_68;
      ppGVar5 = (GameManagers_InGameManager__GetAllCharactersEnumerable_d__48_o **)local_28;
    case 4:
      local_28 = (undefined1 *)ppGVar5;
      (__this->fields).__1__state = -6;
      while (bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                               ((System_Collections_Generic_HashSet_Enumerator_T__o *)
                                &(__this->fields).__7__wrap4,
                                (MethodInfo_4C456D0 *)
                                MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_MoveNext),
            pGVar4 = local_68, bVar9) {
        x_02 = (local_68->fields).__7__wrap4.fields._current;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar9 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar9) {
          if (x_02 == (Characters_Horse_o *)0x0) {
            ThrowNullReferenceException();
          }
          if ((x_02->fields).Dead == false) {
            (local_68->fields).__2__current = (Characters_BaseCharacter_o *)x_02;
            Il2CppCodeGenWriteBarrier(&(local_68->fields).__2__current);
            (local_68->fields).__1__state = 4;
            return true;
          }
        }
        __this = local_68;
      }
      if (Il2CppMethodInitialized_07545866 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_Dispose);
        Il2CppMethodInitialized_07545866 = '\x01';
      }
      (pGVar4->fields).__1__state = -1;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)&(pGVar4->fields).__7__wrap4,
                 (MethodInfo_4C456C0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_Dispose)
      ;
      (local_68->fields).__7__wrap4.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
      (local_68->fields).__7__wrap4.fields._index = 0;
      (local_68->fields).__7__wrap4.fields._version = 0;
      (local_68->fields).__7__wrap4.fields._current = (Characters_Horse_o *)0x0;
    }
  }
  return false;
}


// GameManagers.InGameManager.<GetAllCharactersEnumerable>d__48$$<>m__Finally1
// il2cpp: void GameManagers_InGameManager__GetAllCharactersEnumerable_d__48____m__Finally1 (GameManagers_InGameManager__GetAllCharactersEnumerable_d__48_o* __this, const MethodInfo* method);
// 0x5949e20

void GameManagers_InGameManager__GetAllCharactersEnumerable_d__48____m__Finally1
               (GameManagers_InGameManager__GetAllCharactersEnumerable_d__48_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545863 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
    Il2CppMethodInitialized_07545863 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)&(__this->fields).__7__wrap1,
             (MethodInfo_4C456C0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
  return;
}


// GameManagers.InGameManager.<GetAllCharactersEnumerable>d__48$$<>m__Finally2
// il2cpp: void GameManagers_InGameManager__GetAllCharactersEnumerable_d__48____m__Finally2 (GameManagers_InGameManager__GetAllCharactersEnumerable_d__48_o* __this, const MethodInfo* method);
// 0x5949e60

void GameManagers_InGameManager__GetAllCharactersEnumerable_d__48____m__Finally2
               (GameManagers_InGameManager__GetAllCharactersEnumerable_d__48_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545864 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose);
    Il2CppMethodInitialized_07545864 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)&(__this->fields).__7__wrap2,
             (MethodInfo_4C456C0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose
            );
  return;
}


// GameManagers.InGameManager.<GetAllCharactersEnumerable>d__48$$<>m__Finally3
// il2cpp: void GameManagers_InGameManager__GetAllCharactersEnumerable_d__48____m__Finally3 (GameManagers_InGameManager__GetAllCharactersEnumerable_d__48_o* __this, const MethodInfo* method);
// 0x5949ea0

void GameManagers_InGameManager__GetAllCharactersEnumerable_d__48____m__Finally3
               (GameManagers_InGameManager__GetAllCharactersEnumerable_d__48_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545865 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose);
    Il2CppMethodInitialized_07545865 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)&(__this->fields).__7__wrap3,
             (MethodInfo_4C456C0 *)
             MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose);
  return;
}


// GameManagers.InGameManager.<GetAllCharactersEnumerable>d__48$$<>m__Finally4
// il2cpp: void GameManagers_InGameManager__GetAllCharactersEnumerable_d__48____m__Finally4 (GameManagers_InGameManager__GetAllCharactersEnumerable_d__48_o* __this, const MethodInfo* method);
// 0x5949ee0

void GameManagers_InGameManager__GetAllCharactersEnumerable_d__48____m__Finally4
               (GameManagers_InGameManager__GetAllCharactersEnumerable_d__48_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545866 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_Dispose);
    Il2CppMethodInitialized_07545866 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)&(__this->fields).__7__wrap4,
             (MethodInfo_4C456C0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_Dispose);
  return;
}


// GameManagers.InGameManager.<GetAllCharactersEnumerable>d__48$$System.Collections.Generic.IEnumerator<Characters.BaseCharacter>.get_Current
// il2cpp: Characters_BaseCharacter_o* GameManagers_InGameManager__GetAllCharactersEnumerable_d__48__System_Collections_Generic_IEnumerator_Characters_BaseCharacter__get_Current (GameManagers_InGameManager__GetAllCharactersEnumerable_d__48_o* __this, const MethodInfo* method);
// 0x5949f20

Characters_BaseCharacter_o *
GameManagers_InGameManager__GetAllCharactersEnumerable_d__48__System_Collections_Generic_IEnumerator_Characters_BaseCharacter__get_Current
          (GameManagers_InGameManager__GetAllCharactersEnumerable_d__48_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<GetAllCharactersEnumerable>d__48$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_InGameManager__GetAllCharactersEnumerable_d__48__System_Collections_IEnumerator_Reset (GameManagers_InGameManager__GetAllCharactersEnumerable_d__48_o* __this, const MethodInfo* method);
// 0x5949f30

void GameManagers_InGameManager__GetAllCharactersEnumerable_d__48__System_Collections_IEnumerator_Reset
               (GameManagers_InGameManager__GetAllCharactersEnumerable_d__48_o *__this,MethodInfo *method)

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
                  MethodInfo_GameManagers_InGameManager_GetAllCharactersEnumerable_d__48_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// GameManagers.InGameManager.<GetAllCharactersEnumerable>d__48$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__GetAllCharactersEnumerable_d__48__System_Collections_IEnumerator_get_Current (GameManagers_InGameManager__GetAllCharactersEnumerable_d__48_o* __this, const MethodInfo* method);
// 0x5949f70

Il2CppObject *
GameManagers_InGameManager__GetAllCharactersEnumerable_d__48__System_Collections_IEnumerator_get_Current
          (GameManagers_InGameManager__GetAllCharactersEnumerable_d__48_o *__this,MethodInfo *method)

{
  return (Il2CppObject *)(__this->fields).__2__current;
}


// GameManagers.InGameManager.<GetAllCharactersEnumerable>d__48$$System.Collections.Generic.IEnumerable<Characters.BaseCharacter>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_BaseCharacter__o* GameManagers_InGameManager__GetAllCharactersEnumerable_d__48__System_Collections_Generic_IEnumerable_Characters_BaseCharacter__GetEnumerator (GameManagers_InGameManager__GetAllCharactersEnumerable_d__48_o* __this, const MethodInfo* method);
// 0x5949f80

System_Collections_IEnumerator_o *
GameManagers_InGameManager__GetAllCharactersEnumerable_d__48__System_Collections_Generic_IEnumerable_Characters_BaseCharacter__GetEnumerator
          (GameManagers_InGameManager__GetAllCharactersEnumerable_d__48_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  GameManagers_InGameManager__GetAllCharactersEnumerable_d__48_o *__this_00;
  
  if (Il2CppMethodInitialized_07545867 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_GameManagers_InGameManager_GetAllCharactersEnumerable_d__48);
    Il2CppMethodInitialized_07545867 = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_IEnumerator_o *)__this;
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameManagers_InGameManager_GetAllCharactersEnumerable_d__48);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  (__this_00->fields).__4__this = (__this->fields).__4__this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// GameManagers.InGameManager.<GetAllCharactersEnumerable>d__48$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* GameManagers_InGameManager__GetAllCharactersEnumerable_d__48__System_Collections_IEnumerable_GetEnumerator (GameManagers_InGameManager__GetAllCharactersEnumerable_d__48_o* __this, const MethodInfo* method);
// 0x594a020

System_Collections_IEnumerator_o *
GameManagers_InGameManager__GetAllCharactersEnumerable_d__48__System_Collections_IEnumerable_GetEnumerator
          (GameManagers_InGameManager__GetAllCharactersEnumerable_d__48_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  pSVar1 = GameManagers_InGameManager__GetAllCharactersEnumerable_d__48__System_Collections_Generic_IEnumerable_Characters_BaseCharacter__GetEnumerator
                     (__this,method);
  return pSVar1;
}


// GameManagers.InGameManager.<OnLoadSkyboxRPC>d__126$$.ctor
// il2cpp: void GameManagers_InGameManager__OnLoadSkyboxRPC_d__126___ctor (GameManagers_InGameManager__OnLoadSkyboxRPC_d__126_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5948790

void GameManagers_InGameManager__OnLoadSkyboxRPC_d__126___ctor
               (GameManagers_InGameManager__OnLoadSkyboxRPC_d__126_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.InGameManager.<OnLoadSkyboxRPC>d__126$$System.IDisposable.Dispose
// il2cpp: void GameManagers_InGameManager__OnLoadSkyboxRPC_d__126__System_IDisposable_Dispose (GameManagers_InGameManager__OnLoadSkyboxRPC_d__126_o* __this, const MethodInfo* method);
// 0x594a030

void GameManagers_InGameManager__OnLoadSkyboxRPC_d__126__System_IDisposable_Dispose
               (GameManagers_InGameManager__OnLoadSkyboxRPC_d__126_o *__this,MethodInfo *method)

{
  return;
}


// GameManagers.InGameManager.<OnLoadSkyboxRPC>d__126$$MoveNext
// il2cpp: bool GameManagers_InGameManager__OnLoadSkyboxRPC_d__126__MoveNext (GameManagers_InGameManager__OnLoadSkyboxRPC_d__126_o* __this, const MethodInfo* method);
// 0x594a040
// asm: 17 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x594a154: jmp 0x594a230
// asm:   0x594a484: jmp 0x594a489
// asm:   0x594a4a4: mov rax, qword ptr [rdi]
// asm:   0x594a4a7: mov rdx, qword ptr [rax + 0x1b0]
// asm:   0x594a4ae: mov rsi, r13
// asm:   0x594a4b1: call qword ptr [rax + 0x1a8]  ; vtable slot 7
// asm:   0x594a4b7: mov rdi, r14
// asm:   0x594a4ba: mov rsi, rax
// asm:   0x594a4bd: xor edx, edx
// asm:   0x594a4bf: call 0x6a1c390  ; UnityEngine_MonoBehaviour__StartCoroutine()
// asm:   0x594a4c4: lea rdi, [r15 + 0x18]
// asm:   0x594a4c8: mov qword ptr [r15 + 0x18], rax
// asm:   0x594a4cc: mov rsi, rax
// asm:   0x594a4cf: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x594a4d4: mov dword ptr [r15 + 0x10], 2
// asm:   0x594a4dc: mov r12b, 1
// asm:   0x594a4df: jmp 0x594a489

bool GameManagers_InGameManager__OnLoadSkyboxRPC_d__126__MoveNext
               (GameManagers_InGameManager__OnLoadSkyboxRPC_d__126_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  GameManagers_InGameManager_o *__this_00;
  Settings_CustomSkinSettings_o *pSVar4;
  Settings_BaseCustomSkinSettings_SkyboxCustomSkinSet__o *pSVar5;
  Settings_BoolSetting_o *pSVar6;
  Settings_InspectorSettingMetadata_o *pSVar7;
  System_Collections_Specialized_OrderedDictionary_o *pSVar8;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSVar9;
  System_Collections_Generic_HashSet_string__o *pSVar10;
  System_String_o *url;
  CustomSkins_SkyboxCustomSkinLoader_o *pCVar11;
  bool bVar12;
  GameManagers_InGameManager__ReloadSkybox_d__127_o *__this_01;
  Settings_BaseSetSetting_o *pSVar13;
  System_Object_array *pSVar14;
  ulong uVar15;
  System_Collections_IEnumerator_o *pSVar16;
  UnityEngine_Coroutine_o *pUVar17;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  ulong uVar18;
  MethodInfo **__this_02;
  
  __this_02 = (MethodInfo **)__this;
  if (Il2CppMethodInitialized_07545868 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_SkyboxCustomSkinSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SkyboxCustomSkinSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    __this_02 = &MethodInfo_Settings_TypedSetting_string_get_Value;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07545868 = '\x01';
    in_RDX = extraout_RDX;
  }
  iVar2 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if ((iVar2 == 2) || (iVar2 == 1)) {
    (__this->fields).__1__state = -1;
    if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
      if (Il2CppMethodInitialized_0754585b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager_ReloadSkybox_d__127);
        Il2CppMethodInitialized_0754585b = '\x01';
      }
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_GameManagers_InGameManager_ReloadSkybox_d__127);
      System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
      (__this_01->fields).__1__state = 0;
      UnityEngine_MonoBehaviour__StartCoroutine_691c390
                ((UnityEngine_MonoBehaviour_o *)__this_00,(System_Collections_IEnumerator_o *)__this_01,
                 (MethodInfo *)0x0);
      return false;
    }
    goto label_0594a4e1;
  }
  if (iVar2 != 0) {
    return false;
  }
  (__this->fields).__1__state = -1;
  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
  if (((pSVar4 == (Settings_CustomSkinSettings_o *)0x0) ||
      (pSVar5 = (pSVar4->fields).Skybox,
      pSVar5 == (Settings_BaseCustomSkinSettings_SkyboxCustomSkinSet__o *)0x0)) ||
     (pSVar6 = (pSVar5->fields).SkinsEnabled, pSVar6 == (Settings_BoolSetting_o *)0x0)) goto label_0594a4e1;
  if ((pSVar6->fields)._value == false) goto label_0594a230;
  pSVar6 = (pSVar5->fields).SkinsLocal;
  if (pSVar6 == (Settings_BoolSetting_o *)0x0) goto label_0594a4e1;
  if ((pSVar6->fields)._value == false) {
label_0594a1cf:
    if (__this_00 == (GameManagers_InGameManager_o *)0x0) goto label_0594a4e1;
    bVar12 = GameManagers_InGameManager__IsValidSkybox
                       ((GameManagers_InGameManager_o *)__this_02,(__this->fields).urls,in_RDX);
    if (bVar12) {
      pCVar11 = (__this_00->fields)._skyboxCustomSkinLoader;
      if (pCVar11 != (CustomSkins_SkyboxCustomSkinLoader_o *)0x0) {
        pSVar16 = (*(pCVar11->klass->vtable)._7_LoadSkinsFromRPC.methodPtr)
                            (pCVar11,(System_Object_array *)(__this->fields).urls,
                             (pCVar11->klass->vtable)._7_LoadSkinsFromRPC.method);
        pUVar17 = UnityEngine_MonoBehaviour__StartCoroutine_691c390
                            ((UnityEngine_MonoBehaviour_o *)__this_00,pSVar16,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)pUVar17;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
        (__this->fields).__1__state = 1;
        return true;
      }
      goto label_0594a4e1;
    }
  }
  else if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    __this_02 = (MethodInfo **)0x0;
    bVar12 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    in_RDX = extraout_RDX_01;
    if (bVar12) goto label_0594a1cf;
  }
  else {
    __this_02 = (MethodInfo **)0x0;
    bVar12 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    in_RDX = extraout_RDX_00;
    if (bVar12) goto label_0594a1cf;
  }
label_0594a230:
  pSVar6 = (pSVar5->fields).SkinsEnabled;
  if (pSVar6 != (Settings_BoolSetting_o *)0x0) {
    if ((pSVar6->fields)._value == false) {
      return false;
    }
    pSVar6 = (pSVar5->fields).SkinsLocal;
    if (pSVar6 != (Settings_BoolSetting_o *)0x0) {
      if ((pSVar6->fields)._value == false) {
        return false;
      }
      pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
      if ((pSVar4 != (Settings_CustomSkinSettings_o *)0x0) &&
         (pSVar5 = (pSVar4->fields).Skybox,
         pSVar5 != (Settings_BaseCustomSkinSettings_SkyboxCustomSkinSet__o *)0x0)) {
        pSVar13 = Settings_SetSettingsContainer_object___GetSelectedSet
                            ((Settings_SetSettingsContainer_T__o *)pSVar5,
                             (MethodInfo_40477A0 *)
                             MethodInfo_Settings_SetSettingsContainer_SkyboxCustomSkinSet_GetSelectedSet);
        if (pSVar13 == (Settings_BaseSetSetting_o *)0x0) {
          SZArrayNew(TypeInfo_string_array,6);
          ThrowNullReferenceException();
        }
        bVar1 = (TypeInfo_Settings_SkyboxCustomSkinSet->_2).typeHierarchyDepth;
        if (((pSVar13->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pSVar13->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_SkyboxCustomSkinSet)) {
          il2cpp_codegen_raise_invalid_cast_exception(pSVar13);
        }
        pSVar14 = (System_Object_array *)SZArrayNew(TypeInfo_string_array,6);
        if (((*(uint64_t *)((char *)pSVar13 + 0x48)) != (Settings_BaseSetSetting_c *)0x0) && (pSVar14 != (System_Object_array *)0x0))
        {
          if ((int)pSVar14->max_length != 0) {
            pSVar14->m_Items[0] = (((*(Il2CppClass **)((char *)pSVar13 + 0x48)))->_1).byval_arg.data;
            Il2CppCodeGenWriteBarrier(pSVar14->m_Items);
            if ((*(uint64_t *)((char *)pSVar13 + 0x50)) == (void *)0x0) goto label_0594a4e1;
            if ((pSVar14->max_length & 0xfffffffe) != 0) {
              pSVar14->m_Items[1] = *(Il2CppObject **)((long)(*(uint64_t *)((char *)pSVar13 + 0x50)) + 0x20);
              Il2CppCodeGenWriteBarrier(pSVar14->m_Items + 1);
              pSVar7 = (*(uint64_t *)((char *)pSVar13 + 0x58));
              if (pSVar7 == (Settings_InspectorSettingMetadata_o *)0x0) goto label_0594a4e1;
              if (2 < (uint)pSVar14->max_length) {
                pSVar14->m_Items[2] = (Il2CppObject *)(pSVar7->fields).Header;
                Il2CppCodeGenWriteBarrier(pSVar14->m_Items + 2);
                pSVar8 = (*(uint64_t *)((char *)pSVar13 + 0x60));
                if (pSVar8 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_0594a4e1;
                if ((pSVar14->max_length & 0xfffffffc) != 0) {
                  pSVar14->m_Items[3] = *(Il2CppObject **)&(pSVar8->fields)._initialCapacity;
                  Il2CppCodeGenWriteBarrier(pSVar14->m_Items + 3);
                  pSVar9 = (*(uint64_t *)((char *)pSVar13 + 0x68));
                  if (pSVar9 == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0)
                  goto label_0594a4e1;
                  if (4 < (uint)pSVar14->max_length) {
                    pSVar14->m_Items[4] = *(Il2CppObject **)&(pSVar9->fields)._count;
                    Il2CppCodeGenWriteBarrier(pSVar14->m_Items + 4);
                    pSVar10 = (*(uint64_t *)((char *)pSVar13 + 0x70));
                    if (pSVar10 == (System_Collections_Generic_HashSet_string__o *)0x0) goto label_0594a4e1;
                    if (5 < (uint)pSVar14->max_length) {
                      pSVar14->m_Items[5] = *(Il2CppObject **)&(pSVar10->fields)._count;
                      Il2CppCodeGenWriteBarrier(pSVar14->m_Items + 5);
                      if (__this_00 == (GameManagers_InGameManager_o *)0x0) goto label_0594a4e1;
                      if (Il2CppMethodInitialized_0754585c == '\0') {
                        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
                        Il2CppMethodInitialized_0754585c = '\x01';
                      }
                      if ((pSVar14->max_length & 0xffffffff) != 6) {
                        return false;
                      }
                      if ((int)pSVar14->max_length < 1) {
                        return false;
                      }
                      uVar18 = 0;
                      uVar15 = 6;
                      while (uVar18 < uVar15) {
                        url = (System_String_o *)pSVar14->m_Items[uVar18];
                        if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init
                                    ((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
                        }
                        bVar12 = CustomSkins_TextureDownloader__ValidTextureURL(url,false,(MethodInfo *)0x0);
                        if (bVar12) {
                          pCVar11 = (__this_00->fields)._skyboxCustomSkinLoader;
                          if (pCVar11 != (CustomSkins_SkyboxCustomSkinLoader_o *)0x0) {
                            pSVar16 = (*(pCVar11->klass->vtable)._7_LoadSkinsFromRPC.methodPtr)
                                                (pCVar11,pSVar14,
                                                 (pCVar11->klass->vtable)._7_LoadSkinsFromRPC.method);
                            pUVar17 = UnityEngine_MonoBehaviour__StartCoroutine_691c390
                                                ((UnityEngine_MonoBehaviour_o *)__this_00,pSVar16,
                                                 (MethodInfo *)0x0);
                            (__this->fields).__2__current = (Il2CppObject *)pUVar17;
                            Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
                            (__this->fields).__1__state = 2;
                            return true;
                          }
                          goto label_0594a4e1;
                        }
                        uVar18 = uVar18 + 1;
                        uVar3 = (uint)pSVar14->max_length;
                        uVar15 = (ulong)uVar3;
                        if ((long)(int)uVar3 <= (long)uVar18) {
                          return false;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          ThrowIndexOutOfRangeException();
        }
      }
    }
  }
label_0594a4e1:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager.<OnLoadSkyboxRPC>d__126$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__OnLoadSkyboxRPC_d__126__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_InGameManager__OnLoadSkyboxRPC_d__126_o* __this, const MethodInfo* method);
// 0x594a510

Il2CppObject *
GameManagers_InGameManager__OnLoadSkyboxRPC_d__126__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (GameManagers_InGameManager__OnLoadSkyboxRPC_d__126_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<OnLoadSkyboxRPC>d__126$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_InGameManager__OnLoadSkyboxRPC_d__126__System_Collections_IEnumerator_Reset (GameManagers_InGameManager__OnLoadSkyboxRPC_d__126_o* __this, const MethodInfo* method);
// 0x594a520

void GameManagers_InGameManager__OnLoadSkyboxRPC_d__126__System_Collections_IEnumerator_Reset
               (GameManagers_InGameManager__OnLoadSkyboxRPC_d__126_o *__this,MethodInfo *method)

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
                  MethodInfo_GameManagers_InGameManager_OnLoadSkyboxRPC_d__126_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// GameManagers.InGameManager.<OnLoadSkyboxRPC>d__126$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__OnLoadSkyboxRPC_d__126__System_Collections_IEnumerator_get_Current (GameManagers_InGameManager__OnLoadSkyboxRPC_d__126_o* __this, const MethodInfo* method);
// 0x594a560

Il2CppObject *
GameManagers_InGameManager__OnLoadSkyboxRPC_d__126__System_Collections_IEnumerator_get_Current
          (GameManagers_InGameManager__OnLoadSkyboxRPC_d__126_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<ReloadSkybox>d__127$$.ctor
// il2cpp: void GameManagers_InGameManager__ReloadSkybox_d__127___ctor (GameManagers_InGameManager__ReloadSkybox_d__127_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5948800

void GameManagers_InGameManager__ReloadSkybox_d__127___ctor
               (GameManagers_InGameManager__ReloadSkybox_d__127_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.InGameManager.<ReloadSkybox>d__127$$System.IDisposable.Dispose
// il2cpp: void GameManagers_InGameManager__ReloadSkybox_d__127__System_IDisposable_Dispose (GameManagers_InGameManager__ReloadSkybox_d__127_o* __this, const MethodInfo* method);
// 0x594a570

void GameManagers_InGameManager__ReloadSkybox_d__127__System_IDisposable_Dispose
               (GameManagers_InGameManager__ReloadSkybox_d__127_o *__this,MethodInfo *method)

{
  return;
}


// GameManagers.InGameManager.<ReloadSkybox>d__127$$MoveNext
// il2cpp: bool GameManagers_InGameManager__ReloadSkybox_d__127__MoveNext (GameManagers_InGameManager__ReloadSkybox_d__127_o* __this, const MethodInfo* method);
// 0x594a580

bool GameManagers_InGameManager__ReloadSkybox_d__127__MoveNext
               (GameManagers_InGameManager__ReloadSkybox_d__127_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Cameras_BaseCamera_o *pCVar3;
  UnityEngine_Material_o *value;
  UnityEngine_Skybox_o *pUVar4;
  bool bVar5;
  UnityEngine_Material_o *x;
  UnityEngine_WaitForSeconds_o *__this_00;
  
  if (Il2CppMethodInitialized_07545869 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_SkyboxCustomSkinLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_07545869 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_00,0.5,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    pCVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
    if (pCVar3 != (Cameras_BaseCamera_o *)0x0) {
      bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
      if (((pCVar3->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Cameras_InGameCamera)
         ) {
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
label_0594a72f:
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
        if (pUVar4 == (UnityEngine_Skybox_o *)0x0) goto label_0594a72f;
        UnityEngine_Skybox__set_material(pUVar4,value,(MethodInfo *)0x0);
      }
    }
  }
  return iVar2 == 0;
}


// GameManagers.InGameManager.<ReloadSkybox>d__127$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__ReloadSkybox_d__127__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_InGameManager__ReloadSkybox_d__127_o* __this, const MethodInfo* method);
// 0x594a740

Il2CppObject *
GameManagers_InGameManager__ReloadSkybox_d__127__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (GameManagers_InGameManager__ReloadSkybox_d__127_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<ReloadSkybox>d__127$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_InGameManager__ReloadSkybox_d__127__System_Collections_IEnumerator_Reset (GameManagers_InGameManager__ReloadSkybox_d__127_o* __this, const MethodInfo* method);
// 0x594a750

void GameManagers_InGameManager__ReloadSkybox_d__127__System_Collections_IEnumerator_Reset
               (GameManagers_InGameManager__ReloadSkybox_d__127_o *__this,MethodInfo *method)

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
                  MethodInfo_GameManagers_InGameManager_ReloadSkybox_d__127_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// GameManagers.InGameManager.<ReloadSkybox>d__127$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__ReloadSkybox_d__127__System_Collections_IEnumerator_get_Current (GameManagers_InGameManager__ReloadSkybox_d__127_o* __this, const MethodInfo* method);
// 0x594a790

Il2CppObject *
GameManagers_InGameManager__ReloadSkybox_d__127__System_Collections_IEnumerator_get_Current
          (GameManagers_InGameManager__ReloadSkybox_d__127_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<RespawnForever>d__77$$.ctor
// il2cpp: void GameManagers_InGameManager__RespawnForever_d__77___ctor (GameManagers_InGameManager__RespawnForever_d__77_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5941970

void GameManagers_InGameManager__RespawnForever_d__77___ctor
               (GameManagers_InGameManager__RespawnForever_d__77_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.InGameManager.<RespawnForever>d__77$$System.IDisposable.Dispose
// il2cpp: void GameManagers_InGameManager__RespawnForever_d__77__System_IDisposable_Dispose (GameManagers_InGameManager__RespawnForever_d__77_o* __this, const MethodInfo* method);
// 0x594a7a0

void GameManagers_InGameManager__RespawnForever_d__77__System_IDisposable_Dispose
               (GameManagers_InGameManager__RespawnForever_d__77_o *__this,MethodInfo *method)

{
  return;
}


// GameManagers.InGameManager.<RespawnForever>d__77$$MoveNext
// il2cpp: bool GameManagers_InGameManager__RespawnForever_d__77__MoveNext (GameManagers_InGameManager__RespawnForever_d__77_o* __this, const MethodInfo* method);
// 0x594a7b0

bool GameManagers_InGameManager__RespawnForever_d__77__MoveNext
               (GameManagers_InGameManager__RespawnForever_d__77_o *__this,MethodInfo *method)

{
  uint uVar1;
  GameManagers_InGameManager_o *__this_00;
  UnityEngine_WaitForSeconds_o *__this_01;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  float fVar2;
  
  if (Il2CppMethodInitialized_0754586a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_0754586a = '\x01';
    in_RDX = extraout_RDX;
  }
  uVar1 = (__this->fields).__1__state;
  if (uVar1 < 2) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    fVar2 = (__this_00->fields).RespawnTimeLeft + -1.0;
    (__this_00->fields).RespawnTimeLeft = fVar2;
    if (fVar2 <= 0.0) {
      GameManagers_InGameManager__SpawnPlayer(__this_00,false,in_RDX);
      (__this_00->fields).RespawnTimeLeft = (__this->fields).delay;
    }
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_01,1.0,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  return uVar1 < 2;
}


// GameManagers.InGameManager.<RespawnForever>d__77$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__RespawnForever_d__77__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_InGameManager__RespawnForever_d__77_o* __this, const MethodInfo* method);
// 0x594a880

Il2CppObject *
GameManagers_InGameManager__RespawnForever_d__77__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (GameManagers_InGameManager__RespawnForever_d__77_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<RespawnForever>d__77$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_InGameManager__RespawnForever_d__77__System_Collections_IEnumerator_Reset (GameManagers_InGameManager__RespawnForever_d__77_o* __this, const MethodInfo* method);
// 0x594a890

void GameManagers_InGameManager__RespawnForever_d__77__System_Collections_IEnumerator_Reset
               (GameManagers_InGameManager__RespawnForever_d__77_o *__this,MethodInfo *method)

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
                  MethodInfo_GameManagers_InGameManager_RespawnForever_d__77_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// GameManagers.InGameManager.<RespawnForever>d__77$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__RespawnForever_d__77__System_Collections_IEnumerator_get_Current (GameManagers_InGameManager__RespawnForever_d__77_o* __this, const MethodInfo* method);
// 0x594a8d0

Il2CppObject *
GameManagers_InGameManager__RespawnForever_d__77__System_Collections_IEnumerator_get_Current
          (GameManagers_InGameManager__RespawnForever_d__77_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<SpawnAITitansAtCoroutine>d__90$$.ctor
// il2cpp: void GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__90___ctor (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__90_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5944a80

void GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__90___ctor
               (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__90_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.InGameManager.<SpawnAITitansAtCoroutine>d__90$$System.IDisposable.Dispose
// il2cpp: void GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__90__System_IDisposable_Dispose (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__90_o* __this, const MethodInfo* method);
// 0x594a8e0

void GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__90__System_IDisposable_Dispose
               (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__90_o *__this,MethodInfo *method)

{
  return;
}


// GameManagers.InGameManager.<SpawnAITitansAtCoroutine>d__90$$MoveNext
// il2cpp: bool GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__90__MoveNext (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__90_o* __this, const MethodInfo* method);
// 0x594a8f0

bool GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__90__MoveNext
               (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__90_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *pIVar2;
  int iVar3;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  UnityEngine_WaitForEndOfFrame_c **__this_00;
  
  __this_00 = (UnityEngine_WaitForEndOfFrame_c **)__this;
  if (g_data_0754586b == '\0') {
    __this_00 = &TypeInfo_UnityEngine_WaitForEndOfFrame;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    g_data_0754586b = '\x01';
    in_RDX = extraout_RDX;
  }
  iVar3 = (__this->fields).__1__state;
  if (iVar3 == 2) {
    (__this->fields).__1__state = -1;
    iVar3 = (__this->fields)._i_5__2 + 1;
    (__this->fields)._i_5__2 = iVar3;
    if ((__this->fields).count <= iVar3) {
      return false;
    }
  }
  else {
    if (iVar3 == 1) {
      (__this->fields).__1__state = -1;
      pIVar2 = (Il2CppObject *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar2,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      iVar1 = 2;
      goto label_0594a9eb;
    }
    if (iVar3 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    (__this->fields)._i_5__2 = 0;
    if ((__this->fields).count < 1) {
      return false;
    }
  }
  if ((__this->fields).__4__this == (GameManagers_InGameManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  GameManagers_InGameManager__SpawnAITitanAt
            ((GameManagers_InGameManager_o *)__this_00,(__this->fields).type,
             (UnityEngine_Vector3_o)(__this->fields).position.fields,(__this->fields).rotationY,in_RDX);
  pIVar2 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
  UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar2,(MethodInfo *)0x0);
  (__this->fields).__2__current = pIVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
  iVar1 = 1;
label_0594a9eb:
  (__this->fields).__1__state = iVar1;
  return true;
}


// GameManagers.InGameManager.<SpawnAITitansAtCoroutine>d__90$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__90__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__90_o* __this, const MethodInfo* method);
// 0x594aa00

Il2CppObject *
GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__90__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__90_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<SpawnAITitansAtCoroutine>d__90$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__90__System_Collections_IEnumerator_Reset (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__90_o* __this, const MethodInfo* method);
// 0x594aa10

void GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__90__System_Collections_IEnumerator_Reset
               (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__90_o *__this,MethodInfo *method)

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
                  MethodInfo_GameManagers_InGameManager_SpawnAITitansAtCoroutine_d__90_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// GameManagers.InGameManager.<SpawnAITitansAtCoroutine>d__90$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__90__System_Collections_IEnumerator_get_Current (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__90_o* __this, const MethodInfo* method);
// 0x594aa50

Il2CppObject *
GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__90__System_Collections_IEnumerator_get_Current
          (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__90_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<SpawnAITitansCoroutine>d__88$$.ctor
// il2cpp: void GameManagers_InGameManager__SpawnAITitansCoroutine_d__88___ctor (GameManagers_InGameManager__SpawnAITitansCoroutine_d__88_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x59448e0

void GameManagers_InGameManager__SpawnAITitansCoroutine_d__88___ctor
               (GameManagers_InGameManager__SpawnAITitansCoroutine_d__88_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.InGameManager.<SpawnAITitansCoroutine>d__88$$System.IDisposable.Dispose
// il2cpp: void GameManagers_InGameManager__SpawnAITitansCoroutine_d__88__System_IDisposable_Dispose (GameManagers_InGameManager__SpawnAITitansCoroutine_d__88_o* __this, const MethodInfo* method);
// 0x594aa60

void GameManagers_InGameManager__SpawnAITitansCoroutine_d__88__System_IDisposable_Dispose
               (GameManagers_InGameManager__SpawnAITitansCoroutine_d__88_o *__this,MethodInfo *method)

{
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  uint uVar3;
  VirtualInvokeData *pVVar4;
  ulong uVar5;
  long lVar6;
  
  uVar3 = (__this->fields).__1__state + 3;
  if ((uVar3 < 6) && ((0x31U >> (uVar3 & 0x1f) & 1) != 0)) {
    if (Il2CppMethodInitialized_0754586d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_0754586d = '\x01';
    }
    (__this->fields).__1__state = -1;
    obj = (Il2CppObject *)(__this->fields).__7__wrap1;
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar5 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar5 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar6) == TypeInfo_System_IDisposable)
          {
            pVVar4 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar6);
            goto label_0594aaff;
          }
          lVar6 = lVar6 + 0x10;
        } while (uVar5 * 0x10 != lVar6);
      }
      pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(obj,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0594aaff:
      (*pVVar4->methodPtr)(obj,pVVar4->method);
      return;
    }
  }
  return;
}


// GameManagers.InGameManager.<SpawnAITitansCoroutine>d__88$$MoveNext
// il2cpp: bool GameManagers_InGameManager__SpawnAITitansCoroutine_d__88__MoveNext (GameManagers_InGameManager__SpawnAITitansCoroutine_d__88_o* __this, const MethodInfo* method);
// 0x594ab10
// eh: try 0x594abad..0x594af1e -> pad 0x594af26 (+16 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x594af50..0x594af55 -> pad 0x594af78 cleanup
// eh: try 0x594af7b..0x594af85 -> pad 0x594af8d catch (...) [compiler noexcept guard]
// asm: 35 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x594acbd: nop dword ptr [rax]
// asm:   0x594af1e: jmp 0x594af38
// asm:   0x594af20: jmp 0x594af38
// asm:   0x594af22: jmp 0x594af38
// asm:   0x594af24: jmp 0x594af38
// asm:   0x594af26: jmp 0x594af38
// asm:   0x594af28: jmp 0x594af38
// asm:   0x594af2a: jmp 0x594af38
// asm:   0x594af2c: jmp 0x594af38
// asm:   0x594af2e: jmp 0x594af38
// asm:   0x594af30: jmp 0x594af38
// asm:   0x594af32: jmp 0x594af38
// asm:   0x594af34: jmp 0x594af38
// asm:   0x594af36: jmp 0x594af38
// asm:   0x594af38: mov rbx, rax
// asm:   0x594af3b: cmp edx, 1
// asm:   0x594af3e: jne 0x594af7b
// asm:   0x594af40: mov rdi, rbx
// asm:   0x594af43: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x594af48: mov rbx, qword ptr [rax]
// asm:   0x594af4b: mov qword ptr [rsp + 0x30], rbx
// asm:   0x594af50: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x594af55: test rbx, rbx
// asm:   0x594af58: jne 0x594af67
// asm:   0x594af67: mov rdi, qword ptr [rsp]
// asm:   0x594af6b: call 0x2fd3950  ; il2cpp_runtime_helper_02fd3950()
// asm:   0x594af70: mov rdi, rbx
// asm:   0x594af73: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x594af78: mov rbx, rax
// asm:   0x594af7b: lea rdi, [rsp + 0x30]
// asm:   0x594af80: call 0x2fd3530  ; il2cpp_runtime_helper_02fd3530()
// asm:   0x594af85: mov rdi, rbx
// asm:   0x594af88: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x594af8d: mov rdi, rax
// asm:   0x594af90: call 0x2ab61e0  ; __clang_call_terminate()

bool GameManagers_InGameManager__SpawnAITitansCoroutine_d__88__MoveNext
               (GameManagers_InGameManager__SpawnAITitansCoroutine_d__88_o *__this,MethodInfo *method)

{
  int iVar1;
  GameManagers_InGameManager_o *__this_00;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  System_String_o *type;
  GameManagers_InGameManager__SpawnAITitansCoroutine_d__88_o *pGVar4;
  GameManagers_InGameManager__SpawnAITitansCoroutine_d__88_o **ppGVar5;
  bool bVar6;
  Il2CppObject *pIVar7;
  VirtualInvokeData *pVVar8;
  ulong uVar9;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  int32_t iVar10;
  long lVar11;
  GameManagers_InGameManager_o *__this_01;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o position;
  GameManagers_InGameManager__SpawnAITitansCoroutine_d__88_o *pGStack_88;
  float fStack_7c;
  undefined8 uStack_78;
  undefined4 uStack_70;
  UnityEngine_Quaternion_o UStack_6c;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  float fStack_30;
  float fStack_24;
  float fStack_20;
  
  pGStack_88 = __this;
  if (Il2CppMethodInitialized_0754586c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerable_ValueTuple_Vector3_Quaternion);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerator_ValueTuple_Vector3_Quaternion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    Il2CppMethodInitialized_0754586c = '\x01';
    in_RDX = extraout_RDX;
  }
  puStack_50 = (undefined1 *)&pGStack_88;
  UStack_6c.fields.y = 0.0;
  UStack_6c.fields.z = 0.0;
  UStack_6c.fields.w = 0.0;
  uStack_78 = 0;
  uStack_70 = 0;
  UStack_6c.fields.x = 0.0;
  uStack_58 = 0;
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  ppGVar5 = &pGStack_88;
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      (__this->fields).__1__state = -3;
      pIVar7 = (Il2CppObject *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar7,(MethodInfo *)0x0);
      (pGStack_88->fields).__2__current = pIVar7;
      iVar10 = 2;
      Il2CppCodeGenWriteBarrier(&(pGStack_88->fields).__2__current);
      goto label_0594aec1;
    }
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
      puStack_50 = (undefined1 *)&pGStack_88;
      ThrowNullReferenceException();
    }
    puStack_50 = (undefined1 *)&pGStack_88;
    pIVar7 = (Il2CppObject *)
             GameManagers_InGameManager__GetTitanSpawnPositions(__this_00,(__this->fields).count,in_RDX);
    if (pIVar7 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar2 = pIVar7->klass;
    uVar9 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar9 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerable_ValueTuple_Vector3__Quaternion___c **)
             ((long)&pIVar3->interfaceType + lVar11) ==
            TypeInfo_System_Collections_Generic_IEnumerable_ValueTuple_Vector3_Quaternion) {
          pVVar8 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar11);
          goto label_0594ac62;
        }
        lVar11 = lVar11 + 0x10;
      } while (uVar9 * 0x10 != lVar11);
    }
    pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar7,(Il2CppClass *)
                               TypeInfo_System_Collections_Generic_IEnumerable_ValueTuple_Vector3_Quaternion,0
                       );
label_0594ac62:
    pIVar7 = (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
    (pGStack_88->fields).__7__wrap1 =
         (System_Collections_Generic_IEnumerator_ValueTuple_Vector3__Quaternion___o *)pIVar7;
    Il2CppCodeGenWriteBarrier(&(pGStack_88->fields).__7__wrap1);
    __this = pGStack_88;
    ppGVar5 = (GameManagers_InGameManager__SpawnAITitansCoroutine_d__88_o **)puStack_50;
  }
  puStack_50 = (undefined1 *)ppGVar5;
  (__this->fields).__1__state = -3;
  pIVar7 = (Il2CppObject *)(__this->fields).__7__wrap1;
  if (pIVar7 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar2 = pIVar7->klass;
  uVar9 = (ulong)(pIVar2->_2).interface_offsets_count;
  if (uVar9 != 0) {
    pIVar3 = (pIVar2->_1).interfaceOffsets;
    lVar11 = 0;
    do {
      if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar11) ==
          TypeInfo_System_Collections_IEnumerator) {
        pVVar8 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar11);
        goto label_0594acf1;
      }
      lVar11 = lVar11 + 0x10;
    } while (uVar9 * 0x10 != lVar11);
  }
  pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                     (pIVar7,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_0594acf1:
  bVar6 = (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
  pGVar4 = pGStack_88;
  if (!bVar6) {
    if (Il2CppMethodInitialized_0754586d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_0754586d = '\x01';
    }
    (pGVar4->fields).__1__state = -1;
    pIVar7 = (Il2CppObject *)(pGVar4->fields).__7__wrap1;
    if (pIVar7 != (Il2CppObject *)0x0) {
      pIVar2 = pIVar7->klass;
      uVar9 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar9 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar11 = 0;
        do {
          if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar11) == TypeInfo_System_IDisposable
             ) {
            pVVar8 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar11);
            goto label_0594aee1;
          }
          lVar11 = lVar11 + 0x10;
        } while (uVar9 * 0x10 != lVar11);
      }
      pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar7,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0594aee1:
      (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
    }
    (pGStack_88->fields).__7__wrap1 =
         (System_Collections_Generic_IEnumerator_ValueTuple_Vector3__Quaternion___o *)0x0;
    Il2CppCodeGenWriteBarrier(&(pGStack_88->fields).__7__wrap1);
    return false;
  }
  pIVar7 = (Il2CppObject *)(pGStack_88->fields).__7__wrap1;
  if (pIVar7 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar2 = pIVar7->klass;
  uVar9 = (ulong)(pIVar2->_2).interface_offsets_count;
  if (uVar9 != 0) {
    pIVar3 = (pIVar2->_1).interfaceOffsets;
    lVar11 = 0;
    do {
      if (*(System_Collections_Generic_IEnumerator_ValueTuple_Vector3__Quaternion___c **)
           ((long)&pIVar3->interfaceType + lVar11) ==
          TypeInfo_System_Collections_Generic_IEnumerator_ValueTuple_Vector3_Quaternion) {
        pVVar8 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar11);
        goto label_0594adf4;
      }
      lVar11 = lVar11 + 0x10;
    } while (uVar9 * 0x10 != lVar11);
  }
  pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                     (pIVar7,(Il2CppClass *)
                             TypeInfo_System_Collections_Generic_IEnumerator_ValueTuple_Vector3_Quaternion,0);
label_0594adf4:
  (*pVVar8->methodPtr)(&uStack_38,pIVar7,pVVar8->method);
  UStack_6c.fields.z = fStack_24;
  UStack_6c.fields.w = fStack_20;
  uStack_78 = uStack_38;
  type = (pGStack_88->fields).type;
  uStack_48 = uStack_38;
  uStack_40 = 0;
  fStack_7c = fStack_30;
  UVar12 = UnityEngine_Quaternion__Internal_ToEulerRad(&UStack_6c,(MethodInfo *)0x0);
  euler.fields.z = UVar12.fields.z * 57.29578;
  __this_01 = (GameManagers_InGameManager_o *)0x0;
  euler.fields.y = UVar12.fields.y * 57.29578;
  euler.fields.x = UVar12.fields.x * 57.29578;
  UVar12 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
  if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  position.fields.z = fStack_7c;
  position.fields.x = (float)(undefined4)uStack_48;
  position.fields.y = (float)uStack_48._4_4_;
  GameManagers_InGameManager__SpawnAITitanAt(__this_01,type,position,UVar12.fields.y,method_00);
  pIVar7 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
  UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar7,(MethodInfo *)0x0);
  (pGStack_88->fields).__2__current = pIVar7;
  iVar10 = 1;
  Il2CppCodeGenWriteBarrier(&(pGStack_88->fields).__2__current);
label_0594aec1:
  (pGStack_88->fields).__1__state = iVar10;
  return true;
}


// GameManagers.InGameManager.<SpawnAITitansCoroutine>d__88$$<>m__Finally1
// il2cpp: void GameManagers_InGameManager__SpawnAITitansCoroutine_d__88____m__Finally1 (GameManagers_InGameManager__SpawnAITitansCoroutine_d__88_o* __this, const MethodInfo* method);
// 0x594afa0

void GameManagers_InGameManager__SpawnAITitansCoroutine_d__88____m__Finally1
               (GameManagers_InGameManager__SpawnAITitansCoroutine_d__88_o *__this,MethodInfo *method)

{
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  
  if (Il2CppMethodInitialized_0754586d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_0754586d = '\x01';
  }
  (__this->fields).__1__state = -1;
  obj = (Il2CppObject *)(__this->fields).__7__wrap1;
  if (obj == (Il2CppObject *)0x0) {
    return;
  }
  pIVar1 = obj->klass;
  uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
  if (uVar4 != 0) {
    pIVar2 = (pIVar1->_1).interfaceOffsets;
    lVar5 = 0;
    do {
      if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar5) == TypeInfo_System_IDisposable) {
        pVVar3 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar5);
        goto label_0594b02f;
      }
      lVar5 = lVar5 + 0x10;
    } while (uVar4 * 0x10 != lVar5);
  }
  pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0594b02f:
  (*pVVar3->methodPtr)(obj,pVVar3->method);
  return;
}


// GameManagers.InGameManager.<SpawnAITitansCoroutine>d__88$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__SpawnAITitansCoroutine_d__88__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_InGameManager__SpawnAITitansCoroutine_d__88_o* __this, const MethodInfo* method);
// 0x594b040

Il2CppObject *
GameManagers_InGameManager__SpawnAITitansCoroutine_d__88__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (GameManagers_InGameManager__SpawnAITitansCoroutine_d__88_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<SpawnAITitansCoroutine>d__88$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_InGameManager__SpawnAITitansCoroutine_d__88__System_Collections_IEnumerator_Reset (GameManagers_InGameManager__SpawnAITitansCoroutine_d__88_o* __this, const MethodInfo* method);
// 0x594b050

void GameManagers_InGameManager__SpawnAITitansCoroutine_d__88__System_Collections_IEnumerator_Reset
               (GameManagers_InGameManager__SpawnAITitansCoroutine_d__88_o *__this,MethodInfo *method)

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
                  MethodInfo_GameManagers_InGameManager_SpawnAITitansCoroutine_d__88_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// GameManagers.InGameManager.<SpawnAITitansCoroutine>d__88$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__SpawnAITitansCoroutine_d__88__System_Collections_IEnumerator_get_Current (GameManagers_InGameManager__SpawnAITitansCoroutine_d__88_o* __this, const MethodInfo* method);
// 0x594b090

Il2CppObject *
GameManagers_InGameManager__SpawnAITitansCoroutine_d__88__System_Collections_IEnumerator_get_Current
          (GameManagers_InGameManager__SpawnAITitansCoroutine_d__88_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<WaitAndEndGame>d__101$$.ctor
// il2cpp: void GameManagers_InGameManager__WaitAndEndGame_d__101___ctor (GameManagers_InGameManager__WaitAndEndGame_d__101_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5945a30

void GameManagers_InGameManager__WaitAndEndGame_d__101___ctor
               (GameManagers_InGameManager__WaitAndEndGame_d__101_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.InGameManager.<WaitAndEndGame>d__101$$System.IDisposable.Dispose
// il2cpp: void GameManagers_InGameManager__WaitAndEndGame_d__101__System_IDisposable_Dispose (GameManagers_InGameManager__WaitAndEndGame_d__101_o* __this, const MethodInfo* method);
// 0x594b0a0

void GameManagers_InGameManager__WaitAndEndGame_d__101__System_IDisposable_Dispose
               (GameManagers_InGameManager__WaitAndEndGame_d__101_o *__this,MethodInfo *method)

{
  return;
}


// GameManagers.InGameManager.<WaitAndEndGame>d__101$$MoveNext
// il2cpp: bool GameManagers_InGameManager__WaitAndEndGame_d__101__MoveNext (GameManagers_InGameManager__WaitAndEndGame_d__101_o* __this, const MethodInfo* method);
// 0x594b0b0

bool GameManagers_InGameManager__WaitAndEndGame_d__101__MoveNext
               (GameManagers_InGameManager__WaitAndEndGame_d__101_o *__this,MethodInfo *method)

{
  float seconds;
  int iVar1;
  UnityEngine_WaitForSeconds_o *__this_00;
  GameManagers_InGameManager_c *method_00;
  
  if (Il2CppMethodInitialized_0754586e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_0754586e = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    seconds = (__this->fields).time;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_00,seconds,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    method_00 = TypeInfo_GameManagers_InGameManager;
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    GameManagers_InGameManager__RestartGame((MethodInfo *)method_00);
  }
  return iVar1 == 0;
}


// GameManagers.InGameManager.<WaitAndEndGame>d__101$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__WaitAndEndGame_d__101__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_InGameManager__WaitAndEndGame_d__101_o* __this, const MethodInfo* method);
// 0x594b170

Il2CppObject *
GameManagers_InGameManager__WaitAndEndGame_d__101__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (GameManagers_InGameManager__WaitAndEndGame_d__101_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<WaitAndEndGame>d__101$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_InGameManager__WaitAndEndGame_d__101__System_Collections_IEnumerator_Reset (GameManagers_InGameManager__WaitAndEndGame_d__101_o* __this, const MethodInfo* method);
// 0x594b180

void GameManagers_InGameManager__WaitAndEndGame_d__101__System_Collections_IEnumerator_Reset
               (GameManagers_InGameManager__WaitAndEndGame_d__101_o *__this,MethodInfo *method)

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
                  MethodInfo_GameManagers_InGameManager_WaitAndEndGame_d__101_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// GameManagers.InGameManager.<WaitAndEndGame>d__101$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__WaitAndEndGame_d__101__System_Collections_IEnumerator_get_Current (GameManagers_InGameManager__WaitAndEndGame_d__101_o* __this, const MethodInfo* method);
// 0x594b1c0

Il2CppObject *
GameManagers_InGameManager__WaitAndEndGame_d__101__System_Collections_IEnumerator_get_Current
          (GameManagers_InGameManager__WaitAndEndGame_d__101_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<WaitAndUnpauseGame>d__56$$.ctor
// il2cpp: void GameManagers_InGameManager__WaitAndUnpauseGame_d__56___ctor (GameManagers_InGameManager__WaitAndUnpauseGame_d__56_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x593d820

void GameManagers_InGameManager__WaitAndUnpauseGame_d__56___ctor
               (GameManagers_InGameManager__WaitAndUnpauseGame_d__56_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.InGameManager.<WaitAndUnpauseGame>d__56$$System.IDisposable.Dispose
// il2cpp: void GameManagers_InGameManager__WaitAndUnpauseGame_d__56__System_IDisposable_Dispose (GameManagers_InGameManager__WaitAndUnpauseGame_d__56_o* __this, const MethodInfo* method);
// 0x594b1d0

void GameManagers_InGameManager__WaitAndUnpauseGame_d__56__System_IDisposable_Dispose
               (GameManagers_InGameManager__WaitAndUnpauseGame_d__56_o *__this,MethodInfo *method)

{
  return;
}


// GameManagers.InGameManager.<WaitAndUnpauseGame>d__56$$MoveNext
// il2cpp: bool GameManagers_InGameManager__WaitAndUnpauseGame_d__56__MoveNext (GameManagers_InGameManager__WaitAndUnpauseGame_d__56_o* __this, const MethodInfo* method);
// 0x594b1e0

bool GameManagers_InGameManager__WaitAndUnpauseGame_d__56__MoveNext
               (GameManagers_InGameManager__WaitAndUnpauseGame_d__56_o *__this,MethodInfo *method)

{
  int iVar1;
  GameManagers_InGameManager_o *__this_00;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_0754586f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_0754586f = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (GameManagers_InGameManager_o *)0x0) goto label_0594b2ed;
    fVar4 = (__this_00->fields).PauseTimeLeft;
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    fVar3 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
    if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
label_0594b2ed:
      ThrowNullReferenceException();
    }
    fVar4 = (__this_00->fields).PauseTimeLeft;
    (__this->fields)._endTime_5__2 = fVar3 + fVar4;
  }
  if (0.0 < fVar4) {
    fVar4 = (__this->fields)._endTime_5__2;
    fVar3 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
    fVar4 = fVar4 - fVar3;
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    (__this_00->fields).PauseTimeLeft = fVar4;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
    return true;
  }
  if ((((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (bVar2) {
    GameManagers_InGameManager__UnpauseGame(__this_00,method);
    return false;
  }
  return false;
}


// GameManagers.InGameManager.<WaitAndUnpauseGame>d__56$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__WaitAndUnpauseGame_d__56__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_InGameManager__WaitAndUnpauseGame_d__56_o* __this, const MethodInfo* method);
// 0x594b300

Il2CppObject *
GameManagers_InGameManager__WaitAndUnpauseGame_d__56__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (GameManagers_InGameManager__WaitAndUnpauseGame_d__56_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<WaitAndUnpauseGame>d__56$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_InGameManager__WaitAndUnpauseGame_d__56__System_Collections_IEnumerator_Reset (GameManagers_InGameManager__WaitAndUnpauseGame_d__56_o* __this, const MethodInfo* method);
// 0x594b310

void GameManagers_InGameManager__WaitAndUnpauseGame_d__56__System_Collections_IEnumerator_Reset
               (GameManagers_InGameManager__WaitAndUnpauseGame_d__56_o *__this,MethodInfo *method)

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
                  MethodInfo_GameManagers_InGameManager_WaitAndUnpauseGame_d__56_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// GameManagers.InGameManager.<WaitAndUnpauseGame>d__56$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__WaitAndUnpauseGame_d__56__System_Collections_IEnumerator_get_Current (GameManagers_InGameManager__WaitAndUnpauseGame_d__56_o* __this, const MethodInfo* method);
// 0x594b350

Il2CppObject *
GameManagers_InGameManager__WaitAndUnpauseGame_d__56__System_Collections_IEnumerator_get_Current
          (GameManagers_InGameManager__WaitAndUnpauseGame_d__56_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager$$StartMapEditorPlaytest
// il2cpp: void GameManagers_InGameManager__StartMapEditorPlaytest (const MethodInfo* method);
// 0x593c550

void GameManagers_InGameManager__StartMapEditorPlaytest(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07545810 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_07545810 = '\x01';
    uVar1 = (TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    TypeInfo_GameManagers_InGameManager->static_fields->_returnToMapEditorOnLeave = true;
    return;
  }
  *(undefined1 *)((Il2CppClass *)TypeInfo_GameManagers_InGameManager)->static_fields = 1;
  return;
}


// GameManagers.InGameManager$$add_PlayerInfoUpdated
// il2cpp: void GameManagers_InGameManager__add_PlayerInfoUpdated (System_Action_int__o* value, const MethodInfo* method);
// 0x593c5c0

void GameManagers_InGameManager__add_PlayerInfoUpdated(System_Action_int__o *value,MethodInfo *method)

{
  System_Action_int__c *pSVar1;
  System_Action_int__o *pSVar2;
  System_Delegate_o *obj;
  Il2CppObject *value_00;
  System_Action_int__o *a;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07545811 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_07545811 = '\x01';
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  a = TypeInfo_GameManagers_InGameManager->static_fields->PlayerInfoUpdated;
  do {
    obj = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_int;
    value_00 = (Il2CppObject *)0x0;
    if (obj != (System_Delegate_o *)0x0) {
      value_00 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_int);
      if (value_00 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_GameManagers_InGameManager->static_fields->PlayerInfoUpdated,value_00,a);
    bVar3 = pSVar2 != a;
    a = pSVar2;
  } while (bVar3);
  return;
}


// GameManagers.InGameManager$$remove_PlayerInfoUpdated
// il2cpp: void GameManagers_InGameManager__remove_PlayerInfoUpdated (System_Action_int__o* value, const MethodInfo* method);
// 0x593c6b0

void GameManagers_InGameManager__remove_PlayerInfoUpdated(System_Action_int__o *value,MethodInfo *method)

{
  System_Action_int__c *pSVar1;
  System_Action_int__o *pSVar2;
  System_Delegate_o *obj;
  Il2CppObject *value_00;
  System_Action_int__o *source;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07545812 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_07545812 = '\x01';
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  source = TypeInfo_GameManagers_InGameManager->static_fields->PlayerInfoUpdated;
  do {
    obj = System_Delegate__Remove((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_int;
    value_00 = (Il2CppObject *)0x0;
    if (obj != (System_Delegate_o *)0x0) {
      value_00 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_int);
      if (value_00 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_GameManagers_InGameManager->static_fields->PlayerInfoUpdated,value_00,source
                       );
    bVar3 = pSVar2 != source;
    source = pSVar2;
  } while (bVar3);
  return;
}


// GameManagers.InGameManager$$get_TitanGoreEnabled
// il2cpp: bool GameManagers_InGameManager__get_TitanGoreEnabled (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x593c7a0

bool GameManagers_InGameManager__get_TitanGoreEnabled(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  return (__this->fields)._TitanGoreEnabled_k__BackingField;
}


// GameManagers.InGameManager$$set_TitanGoreEnabled
// il2cpp: void GameManagers_InGameManager__set_TitanGoreEnabled (GameManagers_InGameManager_o* __this, bool value, const MethodInfo* method);
// 0x593c7b0

void GameManagers_InGameManager__set_TitanGoreEnabled
               (GameManagers_InGameManager_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._TitanGoreEnabled_k__BackingField = value;
  return;
}


// GameManagers.InGameManager$$RegisterCharacter
// il2cpp: void GameManagers_InGameManager__RegisterCharacter (GameManagers_InGameManager_o* __this, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x593c7c0
// eh: try 0x593c9d3..0x593ca16 -> pad 0x593ca1f (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x593ca37..0x593ca3c -> pad 0x593ca5b cleanup
// eh: try 0x593ca5e..0x593ca68 -> pad 0x593ca70 catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x593ca1b: jmp 0x593ca1f
// asm:   0x593ca1d: jmp 0x593ca1f
// asm:   0x593ca1f: mov rbx, rax
// asm:   0x593ca22: cmp edx, 1
// asm:   0x593ca25: jne 0x593ca5e
// asm:   0x593ca27: mov rdi, rbx
// asm:   0x593ca2a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x593ca2f: mov rbx, qword ptr [rax]
// asm:   0x593ca32: mov qword ptr [rsp + 0x20], rbx
// asm:   0x593ca37: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x593ca3c: lea rax, [rip + 0x1950cd5]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseDetection_Dispose
// asm:   0x593ca43: mov rsi, qword ptr [rax]
// asm:   0x593ca46: mov rdi, rsp
// asm:   0x593ca49: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x593ca4e: test rbx, rbx
// asm:   0x593ca51: je 0x593ca07
// asm:   0x593ca53: mov rdi, rbx
// asm:   0x593ca56: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x593ca5b: mov rbx, rax
// asm:   0x593ca5e: lea rdi, [rsp + 0x20]
// asm:   0x593ca63: call 0x2fd3390  ; il2cpp_runtime_helper_02fd3390()
// asm:   0x593ca68: mov rdi, rbx
// asm:   0x593ca6b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x593ca70: mov rdi, rax
// asm:   0x593ca73: call 0x2ab61e0  ; __clang_call_terminate()

void GameManagers_InGameManager__RegisterCharacter
               (GameManagers_InGameManager_o *__this,Characters_BaseCharacter_o *character,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Characters_BaseCharacter_c *pCVar3;
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar4;
  MethodInfo **ppMVar5;
  System_Collections_Generic_HashSet_Horse__o *__this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o local_48;
  undefined8 local_28;
  undefined1 *local_20;
  
  if (Il2CppMethodInitialized_07545813 == '\0') {
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
    Il2CppMethodInitialized_07545813 = '\x01';
  }
  local_48.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (character != (Characters_BaseCharacter_o *)0x0) {
    pCVar3 = character->klass;
    bVar1 = (pCVar3->_2).typeHierarchyDepth;
    bVar2 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if ((bVar1 < bVar2) ||
       ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
      bVar2 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
      if ((bVar1 < bVar2) ||
         ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_BasicTitan)) {
        bVar2 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
        if ((bVar1 < bVar2) ||
           ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseShifter)) {
          bVar2 = (TypeInfo_Characters_Horse->_2).typeHierarchyDepth;
          if ((bVar1 < bVar2) ||
             ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_Horse))
          goto label_0593c98b;
          __this_01 = (__this->fields).Horses;
          if (__this_01 == (System_Collections_Generic_HashSet_Horse__o *)0x0) goto label_0593ca16;
          ppMVar5 = &MethodInfo_System_Collections_Generic_HashSet_Horse_Add;
        }
        else {
          __this_01 = (System_Collections_Generic_HashSet_Horse__o *)(__this->fields).Shifters;
          if (__this_01 == (System_Collections_Generic_HashSet_Horse__o *)0x0) goto label_0593ca16;
          ppMVar5 = &MethodInfo_System_Collections_Generic_HashSet_BaseShifter_Add;
        }
      }
      else {
        __this_01 = (System_Collections_Generic_HashSet_Horse__o *)(__this->fields).Titans;
        if (__this_01 == (System_Collections_Generic_HashSet_Horse__o *)0x0) goto label_0593ca16;
        ppMVar5 = &MethodInfo_System_Collections_Generic_HashSet_BasicTitan_Add;
      }
    }
    else {
      __this_01 = (System_Collections_Generic_HashSet_Horse__o *)(__this->fields).Humans;
      if (__this_01 == (System_Collections_Generic_HashSet_Horse__o *)0x0) goto label_0593ca16;
      ppMVar5 = &MethodInfo_System_Collections_Generic_HashSet_Human_Add;
    }
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_01,(Il2CppObject *)character,
               (MethodInfo_4FB4450 *)*ppMVar5);
  }
label_0593c98b:
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).Detections;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              (&local_48,__this_00,
               (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_BaseDetection_GetEnumerator
              );
    local_28 = 0;
    local_20 = (undefined1 *)&local_48;
    while( true ) {
      bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (&local_48,
                         (MethodInfo_4C456D0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseDetection_MoveNext);
      if (!bVar4) {
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (&local_48,
                   (MethodInfo_4C456C0 *)
                   MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseDetection_Dispose);
        return;
      }
      if ((Characters_BaseDetection_o *)local_48.fields._current == (Characters_BaseDetection_o *)0x0) break;
      Characters_BaseDetection__OnCharacterSpawned
                ((Characters_BaseDetection_o *)local_48.fields._current,character,(MethodInfo *)0x0);
    }
    ThrowNullReferenceException();
  }
label_0593ca16:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$GetAllCharacters
// il2cpp: System_Collections_Generic_HashSet_BaseCharacter__o* GameManagers_InGameManager__GetAllCharacters (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x593ca80
// eh: try 0x593cc74..0x593d03f -> pad 0x593d0e3 (+29 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x593d0ac..0x593d0b1 -> pad 0x593d0d3 cleanup
// eh: try 0x593d0d6..0x593d0de -> pad 0x593d1d9 catch (...) [compiler noexcept guard]
// eh: try 0x593d0fa..0x593d0ff -> pad 0x593d121 cleanup
// eh: try 0x593d124..0x593d12c -> pad 0x593d1d9 catch (...) [compiler noexcept guard]
// eh: try 0x593d14c..0x593d151 -> pad 0x593d170 cleanup
// eh: try 0x593d173..0x593d17b -> pad 0x593d1d9 catch (...) [compiler noexcept guard]
// eh: try 0x593d194..0x593d199 -> pad 0x593d1c6 cleanup
// eh: try 0x593d1c9..0x593d1d1 -> pad 0x593d1d9 catch (...) [compiler noexcept guard]
// asm: 112 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x593cc62: lea r13, [rip + 0x19542cf]  ; MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add
// asm:   0x593cc69: nop dword ptr [rax]
// asm:   0x593cd92: lea r13, [rip + 0x195419f]  ; MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add
// asm:   0x593cd99: nop dword ptr [rax]
// asm:   0x593cebd: nop dword ptr [rax]
// asm:   0x593d044: jmp 0x593d095
// asm:   0x593d046: jmp 0x593d0e3
// asm:   0x593d04b: jmp 0x593d095
// asm:   0x593d04d: jmp 0x593d0e3
// asm:   0x593d052: jmp 0x593d095
// asm:   0x593d054: jmp 0x593d0e3
// asm:   0x593d059: jmp 0x593d135
// asm:   0x593d05e: jmp 0x593d135
// asm:   0x593d063: jmp 0x593d17d
// asm:   0x593d068: jmp 0x593d17d
// asm:   0x593d06d: jmp 0x593d095
// asm:   0x593d06f: jmp 0x593d0e3
// asm:   0x593d071: jmp 0x593d095
// asm:   0x593d073: jmp 0x593d0e3
// asm:   0x593d075: jmp 0x593d135
// asm:   0x593d07a: jmp 0x593d17d
// asm:   0x593d07f: jmp 0x593d095
// asm:   0x593d081: jmp 0x593d0e3
// asm:   0x593d083: jmp 0x593d135
// asm:   0x593d088: jmp 0x593d17d
// asm:   0x593d08d: jmp 0x593d095
// asm:   0x593d08f: jmp 0x593d0e3
// asm:   0x593d091: jmp 0x593d095
// asm:   0x593d093: jmp 0x593d0e3
// asm:   0x593d095: mov r15, rax
// asm:   0x593d098: cmp edx, 1
// asm:   0x593d09b: jne 0x593d0d6
// asm:   0x593d09d: mov rdi, r15
// asm:   0x593d0a0: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x593d0a5: mov rbx, qword ptr [rax]
// asm:   0x593d0a8: mov qword ptr [rsp], rbx
// asm:   0x593d0ac: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x593d0b1: lea rax, [rip + 0x1950750]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose
// asm:   0x593d0b8: mov rsi, qword ptr [rax]
// asm:   0x593d0bb: lea rdi, [rsp + 0x20]
// asm:   0x593d0c0: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x593d0c5: test rbx, rbx
// asm:   0x593d0c8: je 0x593ce5d
// asm:   0x593d0ce: jmp 0x593d1be
// asm:   0x593d0d3: mov r15, rax
// asm:   0x593d0d6: mov rdi, rsp
// asm:   0x593d0d9: call 0x2fd33f0  ; il2cpp_runtime_helper_02fd33f0()
// asm:   0x593d0de: jmp 0x593d1d1
// asm:   0x593d0e3: mov r15, rax
// asm:   0x593d0e6: cmp edx, 1
// asm:   0x593d0e9: jne 0x593d124
// asm:   0x593d0eb: mov rdi, r15
// asm:   0x593d0ee: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x593d0f3: mov rbx, qword ptr [rax]
// asm:   0x593d0f6: mov qword ptr [rsp], rbx
// asm:   0x593d0fa: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x593d0ff: lea rax, [rip + 0x1950d62]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose
// asm:   0x593d106: mov rsi, qword ptr [rax]
// asm:   0x593d109: lea rdi, [rsp + 0x40]
// asm:   0x593d10e: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x593d113: test rbx, rbx
// asm:   0x593d116: je 0x593cd2d
// asm:   0x593d11c: jmp 0x593d1be
// asm:   0x593d121: mov r15, rax
// asm:   0x593d124: mov rdi, rsp
// asm:   0x593d127: call 0x2fd33c0  ; il2cpp_runtime_helper_02fd33c0()
// asm:   0x593d12c: jmp 0x593d1d1
// asm:   0x593d131: jmp 0x593d135
// asm:   0x593d133: jmp 0x593d17d
// asm:   0x593d135: mov r15, rax
// asm:   0x593d138: cmp edx, 1
// asm:   0x593d13b: jne 0x593d173
// asm:   0x593d13d: mov rdi, r15
// asm:   0x593d140: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x593d145: mov rbx, qword ptr [rax]
// asm:   0x593d148: mov qword ptr [rsp], rbx
// asm:   0x593d14c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x593d151: lea rax, [rip + 0x1950cf8]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_Dispose
// asm:   0x593d158: mov rsi, qword ptr [rax]
// asm:   0x593d15b: lea rdi, [rsp + 0x60]
// asm:   0x593d160: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x593d165: test rbx, rbx
// asm:   0x593d168: je 0x593d002
// asm:   0x593d16e: jmp 0x593d1be
// asm:   0x593d170: mov r15, rax
// asm:   0x593d173: mov rdi, rsp
// asm:   0x593d176: call 0x2fd3450  ; il2cpp_runtime_helper_02fd3450()
// asm:   0x593d17b: jmp 0x593d1d1
// asm:   0x593d17d: mov r15, rax
// asm:   0x593d180: cmp edx, 1
// asm:   0x593d183: jne 0x593d1c9
// asm:   0x593d185: mov rdi, r15
// asm:   0x593d188: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x593d18d: mov rbx, qword ptr [rax]
// asm:   0x593d190: mov qword ptr [rsp], rbx
// asm:   0x593d194: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x593d199: lea rax, [rip + 0x1950638]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose
// asm:   0x593d1a0: mov rsi, qword ptr [rax]
// asm:   0x593d1a3: lea rdi, [rsp + 0x80]
// asm:   0x593d1ab: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x593d1b0: test rbx, rbx
// asm:   0x593d1b3: mov rbp, qword ptr [rsp + 0x18]
// asm:   0x593d1b8: je 0x593cf3f
// asm:   0x593d1be: mov rdi, rbx
// asm:   0x593d1c1: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x593d1c6: mov r15, rax
// asm:   0x593d1c9: mov rdi, rsp
// asm:   0x593d1cc: call 0x2fd3420  ; il2cpp_runtime_helper_02fd3420()
// asm:   0x593d1d1: mov rdi, r15
// asm:   0x593d1d4: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x593d1d9: mov rdi, rax
// asm:   0x593d1dc: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_HashSet_BaseCharacter__o *
GameManagers_InGameManager__GetAllCharacters(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  GameManagers_InGameManager_o *pGVar2;
  UnityEngine_Object_o *pUVar3;
  bool bVar4;
  System_Collections_Generic_HashSet_BaseCharacter__o *__this_00;
  undefined1 local_c8 [16];
  UnityEngine_Object_o *local_b8;
  GameManagers_InGameManager_o *local_b0;
  undefined1 local_a8 [8];
  System_Collections_Generic_HashSet_Enumerator_T__o *pSStack_a0;
  UnityEngine_Object_o *local_98;
  undefined1 local_88 [8];
  System_Collections_Generic_HashSet_Enumerator_T__o *pSStack_80;
  UnityEngine_Object_o *local_78;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  UnityEngine_Object_o *local_58;
  undefined1 local_48 [8];
  System_Collections_Generic_HashSet_Enumerator_T__o *pSStack_40;
  UnityEngine_Object_o *local_38;
  
  if (Il2CppMethodInitialized_07545814 == '\0') {
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
    Il2CppMethodInitialized_07545814 = '\x01';
  }
  local_88 = (undefined1  [8])0x0;
  pSStack_80 = (System_Collections_Generic_HashSet_Enumerator_T__o *)0x0;
  local_78 = (UnityEngine_Object_o *)0x0;
  local_a8 = (undefined1  [8])0x0;
  pSStack_a0 = (System_Collections_Generic_HashSet_Enumerator_T__o *)0x0;
  local_98 = (UnityEngine_Object_o *)0x0;
  local_48 = (undefined1  [8])0x0;
  pSStack_40 = (System_Collections_Generic_HashSet_Enumerator_T__o *)0x0;
  local_38 = (UnityEngine_Object_o *)0x0;
  local_68 = (undefined1  [8])0x0;
  uStack_60._0_4_ = 0;
  uStack_60._4_4_ = 0;
  local_58 = (UnityEngine_Object_o *)0x0;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_BaseCharacter);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_ctor);
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).Humans;
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    local_b0 = __this;
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_c8,pSVar1,
               (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
    local_78 = local_b8;
    local_88 = (undefined1  [8])local_c8._0_8_;
    pSStack_80 = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_c8._8_8_;
    local_c8._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_c8._8_8_ = local_88;
    if (__this_00 == (System_Collections_Generic_HashSet_BaseCharacter__o *)0x0) {
      while (bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                               ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_88,
                                (MethodInfo_4C456D0 *)
                                MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext),
            pUVar3 = local_78, bVar4) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar4) {
          if (pUVar3 == (UnityEngine_Object_o *)0x0) goto label_0593d017;
          if (*(char *)&(*(uint64_t *)((char *)pUVar3 + 0x78)) == '\0') {
            ThrowNullReferenceException();
          }
        }
      }
    }
    else {
      while (bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                               ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_88,
                                (MethodInfo_4C456D0 *)
                                MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext),
            pUVar3 = local_78, bVar4) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar4) {
          if (pUVar3 == (UnityEngine_Object_o *)0x0) {
label_0593d017:
            ThrowNullReferenceException();
          }
          if (*(char *)&(*(uint64_t *)((char *)pUVar3 + 0x78)) == '\0') {
            System_Collections_Generic_HashSet_object___Add
                      ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)pUVar3,
                       (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add);
          }
        }
      }
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_88,
               (MethodInfo_4C456C0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(local_b0->fields).Titans;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_c8,pSVar1,
                 (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_BasicTitan_GetEnumerator)
      ;
      local_98 = local_b8;
      local_a8 = (undefined1  [8])local_c8._0_8_;
      pSStack_a0 = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_c8._8_8_;
      local_c8._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_c8._8_8_ = local_a8;
      if (__this_00 == (System_Collections_Generic_HashSet_BaseCharacter__o *)0x0) {
        while (bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                 ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_a8,
                                  (MethodInfo_4C456D0 *)
                                  MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_MoveNext
                                 ), pUVar3 = local_98, bVar4) {
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar4 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar4) {
            if (pUVar3 == (UnityEngine_Object_o *)0x0) goto label_0593d01c;
            if (*(char *)&(*(uint64_t *)((char *)pUVar3 + 0x78)) == '\0') {
              ThrowNullReferenceException();
            }
          }
        }
      }
      else {
        while (bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                 ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_a8,
                                  (MethodInfo_4C456D0 *)
                                  MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_MoveNext
                                 ), pUVar3 = local_98, bVar4) {
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar4 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar4) {
            if (pUVar3 == (UnityEngine_Object_o *)0x0) {
label_0593d01c:
              ThrowNullReferenceException();
            }
            if (*(char *)&(*(uint64_t *)((char *)pUVar3 + 0x78)) == '\0') {
              System_Collections_Generic_HashSet_object___Add
                        ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)pUVar3,
                         (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add
                        );
            }
          }
        }
      }
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_a8,
                 (MethodInfo_4C456C0 *)
                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose);
      pGVar2 = local_b0;
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)(local_b0->fields).Shifters;
      if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_c8,pSVar1,
                   (MethodInfo_4FB3DA0 *)
                   MethodInfo_System_Collections_Generic_HashSet_BaseShifter_GetEnumerator);
        local_38 = local_b8;
        local_48 = (undefined1  [8])local_c8._0_8_;
        pSStack_40 = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_c8._8_8_;
        local_c8._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
        local_c8._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_48;
        while( true ) {
          bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
                             (MethodInfo_4C456D0 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_MoveNext);
          pUVar3 = local_38;
          if (!bVar4) break;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar4 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar4) {
            if (pUVar3 == (UnityEngine_Object_o *)0x0) {
              ThrowNullReferenceException();
            }
            if (*(char *)&(*(uint64_t *)((char *)pUVar3 + 0x78)) == '\0') {
              if (__this_00 == (System_Collections_Generic_HashSet_BaseCharacter__o *)0x0) {
                ThrowNullReferenceException();
              }
              System_Collections_Generic_HashSet_object___Add
                        ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)pUVar3,
                         (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add
                        );
            }
          }
        }
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
                   (MethodInfo_4C456C0 *)
                   MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose);
        pSVar1 = (System_Collections_Generic_HashSet_object__o *)(pGVar2->fields).Horses;
        if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          System_Collections_Generic_HashSet_object___GetEnumerator
                    ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_c8,pSVar1,
                     (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_Horse_GetEnumerator);
          local_58 = local_b8;
          local_68 = (undefined1  [8])local_c8._0_8_;
          uStack_60 = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_c8._8_8_;
          local_c8._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
          local_c8._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_68;
          while( true ) {
            do {
              bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                                 (MethodInfo_4C456D0 *)
                                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_MoveNext);
              pUVar3 = local_58;
              if (!bVar4) {
                System_Collections_Generic_HashSet_Enumerator_object___Dispose
                          ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                           (MethodInfo_4C456C0 *)
                           MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_Dispose);
                return __this_00;
              }
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar4 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            } while (!bVar4);
            if (pUVar3 == (UnityEngine_Object_o *)0x0) break;
            if (*(char *)&(*(uint64_t *)((char *)pUVar3 + 0x78)) == '\0') {
              if (__this_00 == (System_Collections_Generic_HashSet_BaseCharacter__o *)0x0) {
                ThrowNullReferenceException();
              }
              System_Collections_Generic_HashSet_object___Add
                        ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)pUVar3,
                         (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add
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
// 0x593d1f0

System_Collections_Generic_IEnumerable_BaseCharacter__o *
GameManagers_InGameManager__GetAllCharactersEnumerable
          (GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  GameManagers_InGameManager__GetAllCharactersEnumerable_d__48_o *__this_00;
  
  if (Il2CppMethodInitialized_07545815 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_GameManagers_InGameManager_GetAllCharactersEnumerable_d__48);
    Il2CppMethodInitialized_07545815 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameManagers_InGameManager_GetAllCharactersEnumerable_d__48);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = -2;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar1;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_Generic_IEnumerable_BaseCharacter__o *)__this_00;
}


// GameManagers.InGameManager$$GetAllNonAICharacters
// il2cpp: System_Collections_Generic_HashSet_BaseCharacter__o* GameManagers_InGameManager__GetAllNonAICharacters (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x593d290
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x593d316: jmp 0x593d331

System_Collections_Generic_HashSet_BaseCharacter__o *
GameManagers_InGameManager__GetAllNonAICharacters(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  Il2CppObject *object;
  System_Collections_Generic_HashSet_BaseCharacter__o *source;
  GameManagers_InGameManager___c_StaticFields *pGVar1;
  System_Func_BaseCharacter__bool__o *__this_00;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Collections_Generic_HashSet_TSource__o *pSVar2;
  
  if (Il2CppMethodInitialized_07545816 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToHashSet_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_BaseCharacter_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_InGameManager_c_GetAllNonAICharacters_b__49_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager_c);
    Il2CppMethodInitialized_07545816 = '\x01';
  }
  source = GameManagers_InGameManager__GetAllCharacters(__this,method);
  if ((TypeInfo_GameManagers_InGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager_c);
    pGVar1 = TypeInfo_GameManagers_InGameManager_c->static_fields;
    __this_00 = pGVar1->__9__49_0;
  }
  else {
    pGVar1 = TypeInfo_GameManagers_InGameManager_c->static_fields;
    __this_00 = pGVar1->__9__49_0;
  }
  if (__this_00 == (System_Func_BaseCharacter__bool__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_GameManagers_InGameManager_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager_c);
      pGVar1 = TypeInfo_GameManagers_InGameManager_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_BaseCharacter_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)__this_00,object,
               (intptr_t)MethodInfo_GameManagers_InGameManager_c_GetAllNonAICharacters_b__49_0,
               (MethodInfo_4F19300 *)0x0);
    pGVar1 = TypeInfo_GameManagers_InGameManager_c->static_fields;
    pGVar1->__9__49_0 = __this_00;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__49_0);
  }
  source_00 = System_Linq_Enumerable__Where_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__bool__o *)__this_00,
                         (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_BaseCharacter);
  pSVar2 = System_Linq_Enumerable__ToHashSet_object_
                     (source_00,
                      (MethodInfo_3500A90 *)MethodInfo_System_Linq_Enumerable_ToHashSet_BaseCharacter);
  return (System_Collections_Generic_HashSet_BaseCharacter__o *)pSVar2;
}


// GameManagers.InGameManager$$PauseGame
// il2cpp: void GameManagers_InGameManager__PauseGame (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x593d3d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x593d3fb: jmp 0x593d460

void GameManagers_InGameManager__PauseGame(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar2;
  System_Object_array *parameters;
  
  if (Il2CppMethodInitialized_07545817 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"PauseGameRPC");
    Il2CppMethodInitialized_07545817 = '\x01';
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  else {
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  if ((bVar2) && ((__this->fields).GlobalPause == false)) {
    __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
    if (__this_00 == (Photon_Pun_PhotonView_o *)0x0) {
      ThrowNullReferenceException();
    }
    Photon_Pun_PhotonView__RPC(__this_00,"PauseGameRPC",0,parameters,(MethodInfo *)0x0);
    return;
  }
  return;
}


// GameManagers.InGameManager$$OnPauseGameRPC
// il2cpp: void GameManagers_InGameManager__OnPauseGameRPC (GameManagers_InGameManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x593d4b0

void GameManagers_InGameManager__OnPauseGameRPC
               (GameManagers_InGameManager_o *__this,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  bool bVar1;
  
  if (info.fields.Sender == (Photon_Realtime_Player_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
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
// 0x593d4f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x593d51b: jmp 0x593d5c8

void GameManagers_InGameManager__UnpauseGame(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar2;
  System_Object_array *parameters;
  
  if (Il2CppMethodInitialized_07545818 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"UnpauseGameRPC");
    Il2CppMethodInitialized_07545818 = '\x01';
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  else {
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  if ((bVar2) && ((__this->fields).GlobalPause != false)) {
    __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
    if (__this_00 == (Photon_Pun_PhotonView_o *)0x0) {
      ThrowNullReferenceException();
    }
    Photon_Pun_PhotonView__RPC(__this_00,"UnpauseGameRPC",0,parameters,(MethodInfo *)0x0);
    return;
  }
  return;
}


// GameManagers.InGameManager$$OnUnpauseGameRPC
// il2cpp: void GameManagers_InGameManager__OnUnpauseGameRPC (GameManagers_InGameManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x593d5d0

void GameManagers_InGameManager__OnUnpauseGameRPC
               (GameManagers_InGameManager_o *__this,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  bool bVar1;
  
  if (info.fields.Sender == (Photon_Realtime_Player_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
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
// 0x593d620
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x593d64b: jmp 0x593d6f8

void GameManagers_InGameManager__StartUnpauseGame(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar2;
  System_Object_array *parameters;
  
  if (Il2CppMethodInitialized_07545819 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"StartUnpauseGameRPC");
    Il2CppMethodInitialized_07545819 = '\x01';
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  else {
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  if ((bVar2) && ((__this->fields).GlobalPause != false)) {
    __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
    if (__this_00 == (Photon_Pun_PhotonView_o *)0x0) {
      ThrowNullReferenceException();
    }
    Photon_Pun_PhotonView__RPC(__this_00,"StartUnpauseGameRPC",0,parameters,(MethodInfo *)0x0);
    return;
  }
  return;
}


// GameManagers.InGameManager$$OnStartUnpauseGameRPC
// il2cpp: void GameManagers_InGameManager__OnStartUnpauseGameRPC (GameManagers_InGameManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x593d700

void GameManagers_InGameManager__OnStartUnpauseGameRPC
               (GameManagers_InGameManager_o *__this,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  bool bVar1;
  GameManagers_InGameManager__WaitAndUnpauseGame_d__56_o *__this_00;
  
  if (info.fields.Sender == (Photon_Realtime_Player_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
  if (bVar1) {
    (__this->fields).GlobalPause = true;
    (__this->fields).PauseTimeLeft = 5.0;
    if (Il2CppMethodInitialized_0754581a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_GameManagers_InGameManager_WaitAndUnpauseGame_d__56);
      Il2CppMethodInitialized_0754581a = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_GameManagers_InGameManager_WaitAndUnpauseGame_d__56);
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).__1__state = 0;
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    UnityEngine_MonoBehaviour__StartCoroutine_691c390
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
               (MethodInfo *)0x0);
    return;
  }
  return;
}


// GameManagers.InGameManager$$WaitAndUnpauseGame
// il2cpp: System_Collections_IEnumerator_o* GameManagers_InGameManager__WaitAndUnpauseGame (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x593d7b0

System_Collections_IEnumerator_o *
GameManagers_InGameManager__WaitAndUnpauseGame(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  GameManagers_InGameManager__WaitAndUnpauseGame_d__56_o *__this_00;
  
  if (Il2CppMethodInitialized_0754581a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager_WaitAndUnpauseGame_d__56);
    Il2CppMethodInitialized_0754581a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameManagers_InGameManager_WaitAndUnpauseGame_d__56);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// GameManagers.InGameManager$$RestartGame
// il2cpp: void GameManagers_InGameManager__RestartGame (const MethodInfo* method);
// 0x593d840
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x593d877: jmp 0x593da9f

void GameManagers_InGameManager__RestartGame(MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  GameManagers_BaseGameManager_o *__this;
  Photon_Pun_PhotonView_o *__this_00;
  Settings_UISettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  bool bVar5;
  ulong in_RAX;
  System_Object_array *parameters;
  Il2CppObject *pIVar6;
  Il2CppObject *pIVar7;
  GameManagers_InGameManager__FinishRestartGame_d__58_o *__this_01;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (Il2CppMethodInitialized_0754581b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"PreRestartGameRPC");
    Il2CppMethodInitialized_0754581b = '\x01';
    uVar2 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  else {
    bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  if (bVar5) {
    __this = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (__this != (GameManagers_BaseGameManager_o *)0x0) {
      bVar1 = (((Il2CppClass *)TypeInfo_GameManagers_InGameManager)->_2).typeHierarchyDepth;
      if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this);
      }
    }
    __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if ((pSVar3 != (Settings_UISettings_o *)0x0) &&
       (pSVar4 = (pSVar3->fields).FadeLoadscreen, pSVar4 != (Settings_BoolSetting_o *)0x0)) {
      uStack_28 = CONCAT17((pSVar4->fields)._value,(undefined7)uStack_28) ^ 0x100000000000000;
      pIVar6 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_28 + 7));
      if (parameters != (System_Object_array *)0x0) {
        if ((pIVar6 != (Il2CppObject *)0x0) &&
           (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((parameters->obj).klass)->_1).element_class),
           pIVar7 == (Il2CppObject *)0x0)) {
          pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
        }
        if ((int)parameters->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[0] = pIVar6;
        Il2CppCodeGenWriteBarrier(parameters->m_Items);
        if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this_00,"PreRestartGameRPC",0,parameters,(MethodInfo *)0x0);
          UnityEngine_Time__set_timeScale(1.0,(MethodInfo *)0x0);
          if (__this != (GameManagers_BaseGameManager_o *)0x0) {
            if (Il2CppMethodInitialized_0754581c == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_GameManagers_InGameManager_FinishRestartGame_d__58);
              Il2CppMethodInitialized_0754581c = '\x01';
            }
            __this_01 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_GameManagers_InGameManager_FinishRestartGame_d__58)
            ;
            System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
            (__this_01->fields).__1__state = 0;
            UnityEngine_MonoBehaviour__StartCoroutine_691c390
                      ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_01,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// GameManagers.InGameManager$$FinishRestartGame
// il2cpp: System_Collections_IEnumerator_o* GameManagers_InGameManager__FinishRestartGame (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x593dad0

System_Collections_IEnumerator_o *
GameManagers_InGameManager__FinishRestartGame(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  GameManagers_InGameManager__FinishRestartGame_d__58_o *__this_00;
  
  if (Il2CppMethodInitialized_0754581c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager_FinishRestartGame_d__58);
    Il2CppMethodInitialized_0754581c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameManagers_InGameManager_FinishRestartGame_d__58);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// GameManagers.InGameManager$$OnRestartGameRPC
// il2cpp: void GameManagers_InGameManager__OnRestartGameRPC (Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x593db40
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x593dbce: cmp byte ptr [rip + 0x1c070ed], 0
// asm:   0x593dbd5: je 0x593dc0d

void GameManagers_InGameManager__OnRestartGameRPC(Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  bool bVar3;
  GameManagers_InGameManager_c *method_00;
  
  if (Il2CppMethodInitialized_0754581d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&"Master client has restarted the game.");
    Il2CppMethodInitialized_0754581d = '\x01';
  }
  if (info.fields.Sender == (Photon_Realtime_Player_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar3 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  method_00 = TypeInfo_GameManagers_InGameManager;
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  GameManagers_InGameManager__ResetRoundPlayerProperties((MethodInfo *)method_00);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  if (Il2CppMethodInitialized_07544cc2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07544cc2 = '\x01';
    uVar2 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    cVar1 = TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode;
  }
  else {
    cVar1 = *(char *)((long)((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork)->static_fields + 0x30);
  }
  if (cVar1 != '\0') {
    ApplicationManagers_SceneLoader__LoadScene(2,(MethodInfo *)0x0);
    return;
  }
  if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__AddLine
            ("Master client has restarted the game.",3,false,(System_Nullable_DateTime__o)ZEXT816(0),-1,false,false,-1,false,
             (MethodInfo *)0x0);
  ApplicationManagers_SceneLoader__LoadScene(2,(MethodInfo *)0x0);
  return;
}


// GameManagers.InGameManager$$OnPreRestartGameRPC
// il2cpp: void GameManagers_InGameManager__OnPreRestartGameRPC (bool immediate, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x593e020

void GameManagers_InGameManager__OnPreRestartGameRPC
               (bool immediate,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  byte bVar1;
  GameManagers_BaseGameManager_o *pGVar2;
  UI_BaseMenu_o *__this;
  UI_LoadingMenu_o *__this_00;
  bool bVar3;
  UnityEngine_GameObject_o *__this_01;
  
  if (Il2CppMethodInitialized_0754581e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_0754581e = '\x01';
  }
  if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
    bVar3 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
    if (!bVar3) {
      return;
    }
    pGVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar2 != (GameManagers_BaseGameManager_o *)0x0) {
      bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
      if (((pGVar2->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pGVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      *(undefined1 *)((long)&(*(uint64_t *)((char *)pGVar2 + 0x98)) + 2) = 1;
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      TypeInfo_GameManagers_ChatManager->static_fields->PreserveInputOnRestart = true;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      __this = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (__this != (UI_BaseMenu_o *)0x0) {
        __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
        ;
        if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
          __this_00 = TypeInfo_UI_UIManager->static_fields->LoadingMenu;
          if (__this_00 != (UI_LoadingMenu_o *)0x0) {
            UI_LoadingMenu__Show(__this_00,immediate,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$LeaveRoom
// il2cpp: void GameManagers_InGameManager__LeaveRoom (const MethodInfo* method);
// 0x593c2d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x593c3df: jmp 0x593c449

void GameManagers_InGameManager__LeaveRoom(MethodInfo *method)

{
  Settings_MultiplayerSettings_o *__this;
  Settings_InGameSet_o *pSVar1;
  Settings_InGameCharacterSettings_o *pSVar2;
  bool bVar3;
  GameManagers_InGameManager_StaticFields *pGVar4;
  int32_t sceneName;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754581f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_MaterialCache);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_0754581f = '\x01';
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    pGVar4 = TypeInfo_GameManagers_InGameManager->static_fields;
    sceneName = (uint)pGVar4->_returnToMapEditorOnLeave * 2 + 1;
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      pGVar4 = TypeInfo_GameManagers_InGameManager->static_fields;
    }
  }
  else {
    pGVar4 = TypeInfo_GameManagers_InGameManager->static_fields;
    sceneName = (uint)pGVar4->_returnToMapEditorOnLeave * 2 + 1;
  }
  pGVar4->_returnToMapEditorOnLeave = false;
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  TypeInfo_GameManagers_ChatManager->static_fields->PreserveInputOnRestart = false;
  method_00 = (MethodInfo *)0x0;
  GameManagers_ChatManager__ResetAllPMState((MethodInfo *)0x0);
  GameManagers_InGameManager__ResetPersistentPlayerProperties(method_00);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if (!bVar3) goto label_0593c3c8;
label_0593c3f1:
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    Photon_Pun_PhotonNetwork__DestroyAll((MethodInfo *)0x0);
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor != 0) goto label_0593c3d4;
label_0593c415:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar3 = Photon_Pun_PhotonNetwork__get_IsConnected((MethodInfo *)0x0);
    if (bVar3) goto label_0593c425;
  }
  else {
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if (bVar3) goto label_0593c3f1;
label_0593c3c8:
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) goto label_0593c415;
label_0593c3d4:
    bVar3 = Photon_Pun_PhotonNetwork__get_IsConnected((MethodInfo *)0x0);
    if (bVar3) {
label_0593c425:
      __this = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
      if (__this == (Settings_MultiplayerSettings_o *)0x0) goto label_0593c4eb;
      Settings_MultiplayerSettings__Disconnect(__this,(MethodInfo *)0x0);
    }
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
label_0593c4eb:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$OnLeftRoom
// il2cpp: void GameManagers_InGameManager__OnLeftRoom (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x593e6b0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x593e70b: jmp 0x593e7d4
// asm:   0x593e7d2: jmp 0x593e7e9

void GameManagers_InGameManager__OnLeftRoom(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  UI_BaseMenu_o *__this_00;
  bool bVar2;
  UI_InGameMenu_o *pUVar3;
  UI_ChatPanel_o *__this_01;
  GameManagers_InGameManager_c *method_00;
  
  if (Il2CppMethodInitialized_07545820 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MainMenuGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07545820 = '\x01';
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar2 = Photon_Pun_PhotonNetwork__get_IsConnected((MethodInfo *)0x0);
  }
  else {
    bVar2 = Photon_Pun_PhotonNetwork__get_IsConnected((MethodInfo *)0x0);
  }
  if (!bVar2) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    __this_00 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    __this_00 = *(UI_BaseMenu_o **)((long)((Il2CppClass *)TypeInfo_UI_UIManager)->static_fields + 0x40);
  }
  if ((__this_00 == (UI_BaseMenu_o *)0x0) ||
     (pUVar3 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)__this_00,
                          (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_InGameMenu),
     pUVar3 == (UI_InGameMenu_o *)0x0)) {
    __this_01 = (UI_ChatPanel_o *)0x0;
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    __this_01 = (pUVar3->fields).ChatPanel;
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (__this_01 == (UI_ChatPanel_o *)0x0) {
      ThrowNullReferenceException();
    }
    UI_ChatPanel__ResetPMState(__this_01,(MethodInfo *)0x0);
  }
  method_00 = TypeInfo_GameManagers_InGameManager;
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  GameManagers_InGameManager__LeaveRoom((MethodInfo *)method_00);
  if ((TypeInfo_GameManagers_MainMenuGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MainMenuGameManager);
    TypeInfo_GameManagers_MainMenuGameManager->static_fields->JustLeftRoom = true;
    return;
  }
  TypeInfo_GameManagers_MainMenuGameManager->static_fields->JustLeftRoom = true;
  return;
}


// GameManagers.InGameManager$$OnJoinRoom
// il2cpp: void GameManagers_InGameManager__OnJoinRoom (const MethodInfo* method);
// 0x593e870
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x593ea24: jmp 0x593ea6c

void GameManagers_InGameManager__OnJoinRoom(MethodInfo *method)

{
  char cVar1;
  Settings_MultiplayerSettings_o *__this;
  Photon_Realtime_Room_o *room;
  System_String_o *pSVar2;
  System_Object_array *pSVar3;
  Il2CppObject *pIVar4;
  System_String_o *str0;
  GameManagers_InGameManager_c *method_00;
  
  if (Il2CppMethodInitialized_07545821 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_AnticheatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RoomProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    il2cpp_codegen_initialize_runtime_metadata(&"Motd");
    il2cpp_codegen_initialize_runtime_metadata(&"InGame");
    il2cpp_codegen_initialize_runtime_metadata(&"Chat");
    il2cpp_codegen_initialize_runtime_metadata(&"Help");
    il2cpp_codegen_initialize_runtime_metadata(&"single player");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07545821 = '\x01';
  }
  if ((TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager);
  }
  Anticheat_AnticheatManager__Reset((MethodInfo *)0x0);
  method_00 = TypeInfo_GameManagers_InGameManager;
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  GameManagers_InGameManager__ResetPlayerInfo((MethodInfo *)method_00);
  GameManagers_InGameManager__ResetPersistentPlayerProperties((MethodInfo *)method_00);
  TypeInfo_GameManagers_InGameManager->static_fields->_needSendPlayerInfo = true;
  __this = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
  if (__this == (Settings_MultiplayerSettings_o *)0x0) goto label_0593ec84;
  Settings_MultiplayerSettings__OnRoomJoined(__this,(MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__SyncPMPartnersOnJoin((MethodInfo *)0x0);
  pSVar2 = "single player";
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    if (Il2CppMethodInitialized_07544cc2 == '\0') goto label_0593ea34;
label_0593ea07:
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor != 0) goto label_0593ea13;
label_0593ea53:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    cVar1 = TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode;
  }
  else {
    if (Il2CppMethodInitialized_07544cc2 != '\0') goto label_0593ea07;
label_0593ea34:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07544cc2 = '\x01';
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) goto label_0593ea53;
label_0593ea13:
    cVar1 = TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode;
  }
  if (cVar1 == '\0') {
    if ((((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    room = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
    }
    pSVar2 = PhotonExtensions__GetStringProperty_5751c40
                       ((Photon_Realtime_RoomInfo_o *)room,
                        TypeInfo_GameManagers_RoomProperty->static_fields->Name,"",
                        (MethodInfo *)0x0);
    if (pSVar2 == (System_String_o *)0x0) goto label_0593ec84;
    pSVar2 = System_String__Trim(pSVar2,(MethodInfo *)0x0);
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    pSVar2 = MiscExtensions__HexColor(pSVar2,(MethodInfo *)0x0);
  }
  pSVar3 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  if (pSVar3 == (System_Object_array *)0x0) {
label_0593ec84:
    ThrowNullReferenceException();
  }
  if ((pSVar2 != (System_String_o *)0x0) &&
     (pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((pSVar3->obj).klass)->_1).element_class),
     pIVar4 == (Il2CppObject *)0x0)) {
label_0593ec8e:
    pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
  }
  if ((int)pSVar3->max_length != 0) {
    pSVar3->m_Items[0] = (Il2CppObject *)pSVar2;
    Il2CppCodeGenWriteBarrier(pSVar3->m_Items);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    str0 = UI_UIManager__GetLocaleFormatted
                     ("InGame","Chat","Motd",pSVar3,
                      (MethodInfo *)0x0);
    pSVar3 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    if (pSVar3 == (System_Object_array *)0x0) goto label_0593ec84;
    if ((pSVar2 != (System_String_o *)0x0) &&
       (pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((pSVar3->obj).klass)->_1).element_class),
       pIVar4 == (Il2CppObject *)0x0)) goto label_0593ec8e;
    if ((int)pSVar3->max_length != 0) {
      pSVar3->m_Items[0] = (Il2CppObject *)pSVar2;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items);
      pSVar2 = UI_UIManager__GetLocaleFormatted
                         ("InGame","Chat","Help",pSVar3,
                          (MethodInfo *)0x0);
      pSVar2 = System_String__Concat_5301f10(str0,"\n",pSVar2,(MethodInfo *)0x0);
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      GameManagers_ChatManager__AddLine
                (pSVar2,3,false,(System_Nullable_DateTime__o)ZEXT816(0),-1,false,false,-1,false,
                 (MethodInfo *)0x0);
      ApplicationManagers_SceneLoader__LoadScene(2,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowIndexOutOfRangeException();
}


// GameManagers.InGameManager$$RegisterMainCharacterDie
// il2cpp: void GameManagers_InGameManager__RegisterMainCharacterDie (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x593ef70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x593f03b: jmp 0x593f122

void GameManagers_InGameManager__RegisterMainCharacterDie
               (GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *x;
  System_String_o *key;
  bool bVar1;
  int32_t iVar2;
  CustomLogic_CustomLogicEvaluator_o *pCVar3;
  Photon_Realtime_Player_o *player;
  Photon_Realtime_Player_o *player_00;
  Il2CppObject *value;
  GameManagers_InGameManager_c *method_00;
  int local_1c;
  
  if (Il2CppMethodInitialized_07545822 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_07545822 = '\x01';
  }
  method_00 = TypeInfo_GameManagers_InGameManager;
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  GameManagers_InGameManager__UpdateRoundPlayerProperties((MethodInfo *)method_00);
  x = (__this->fields).CurrentCharacter;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    }
    else {
      pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    }
    if (pCVar3 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
        if (pCVar3 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          ThrowNullReferenceException();
        }
      }
      if ((pCVar3->fields).DefaultAddKillScore != false) {
        if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
        }
        player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
        if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
        }
        key = TypeInfo_GameManagers_PlayerProperty->static_fields->Deaths;
        player_00 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
        iVar2 = PhotonExtensions__GetIntProperty
                          (player_00,TypeInfo_GameManagers_PlayerProperty->static_fields->Deaths,0,
                           (MethodInfo *)0x0);
        local_1c = iVar2 + 1;
        value = il2cpp_vm_Object_Box(g_data_07556710,&local_1c);
        PhotonExtensions__SetCustomProperty(player,key,value,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// GameManagers.InGameManager$$RegisterMainCharacterKill
// il2cpp: void GameManagers_InGameManager__RegisterMainCharacterKill (GameManagers_InGameManager_o* __this, Characters_BaseCharacter_o* victim, const MethodInfo* method);
// 0x593f550

void GameManagers_InGameManager__RegisterMainCharacterKill
               (GameManagers_InGameManager_o *__this,Characters_BaseCharacter_o *victim,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Characters_BaseCharacter_o *pCVar3;
  Characters_BaseCharacter_c *pCVar4;
  System_String_o *pSVar5;
  bool bVar6;
  int32_t iVar7;
  System_Collections_Generic_Dictionary_string__object__o *__this_00;
  Photon_Realtime_Player_o *pPVar8;
  Il2CppObject *value;
  uint weapon;
  GameProgress_KillMethod_o GVar9;
  GameProgress_KillMethod_o method_00;
  GameProgress_KillMethod_o method_01;
  int local_2c;
  
  if (Il2CppMethodInitialized_07545823 == '\0') {
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
    Il2CppMethodInitialized_07545823 = '\x01';
  }
  pCVar3 = (__this->fields).CurrentCharacter;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar6) {
    if (victim != (Characters_BaseCharacter_o *)0x0) {
      bVar1 = (TypeInfo_Characters_Horse->_2).typeHierarchyDepth;
      if ((bVar1 <= (victim->klass->_2).typeHierarchyDepth) &&
         ((victim->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Horse)) {
        return;
      }
    }
    pCVar3 = (__this->fields).CurrentCharacter;
    weapon = 4;
    if (pCVar3 != (Characters_BaseCharacter_o *)0x0) {
      pCVar4 = pCVar3->klass;
      bVar1 = (pCVar4->_2).typeHierarchyDepth;
      bVar2 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
      if ((bVar1 < bVar2) ||
         ((pCVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
        bVar2 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
        if ((bVar1 < bVar2) ||
           ((pCVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_BasicTitan)) {
          bVar2 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
          if (bVar2 <= bVar1) {
            weapon = (pCVar4->_2).typeHierarchy[(ulong)bVar2 - 1] ==
                     (Il2CppClass *)TypeInfo_Characters_BaseShifter | 4;
          }
        }
        else {
          weapon = 6;
        }
      }
      else {
        pSVar5 = (*(uint64_t *)((char *)pCVar3 + 0x150));
        if (pSVar5 == (System_String_o *)0x0) goto label_0593f921;
        weapon = *(uint *)&pSVar5[0x13].monitor;
        if (2 < weapon) {
          weapon = 4 - (weapon == 3);
        }
      }
    }
    if (victim != (Characters_BaseCharacter_o *)0x0) {
      pCVar4 = victim->klass;
      bVar1 = (pCVar4->_2).typeHierarchyDepth;
      bVar2 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
      if ((bVar1 < bVar2) ||
         ((pCVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
        bVar2 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
        if ((bVar2 <= bVar1) &&
           ((pCVar4->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Characters_BasicTitan)) {
          GVar9 = GameProgress_KillMethod__op_Implicit(weapon,(MethodInfo *)0x0);
          method_00.fields.Special = GVar9.fields.Special;
          if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
          }
          bVar1 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
          if (((victim->klass->_2).typeHierarchyDepth < bVar1) ||
             ((victim->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Characters_BasicTitan)) goto label_0593f926;
          method_00.fields._4_4_ = 0;
          method_00.fields.Weapon = GVar9.fields.Weapon;
          GameProgress_GameProgressManager__RegisterTitanKill
                    ((Characters_BasicTitan_o *)victim,method_00,(MethodInfo *)0x0);
        }
      }
      else {
        GVar9 = GameProgress_KillMethod__op_Implicit(weapon,(MethodInfo *)0x0);
        method_01.fields.Special = GVar9.fields.Special;
        if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
        }
        bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
        if (((victim->klass->_2).typeHierarchyDepth < bVar1) ||
           ((victim->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human))
        {
label_0593f926:
          il2cpp_codegen_raise_invalid_cast_exception(victim);
        }
        method_01.fields._4_4_ = 0;
        method_01.fields.Weapon = GVar9.fields.Weapon;
        GameProgress_GameProgressManager__RegisterHumanKill
                  ((Characters_Human_o *)victim,method_01,(MethodInfo *)0x0);
      }
    }
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_object);
    System_Collections_Generic_Dictionary_object__object____ctor
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
               (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    pSVar5 = TypeInfo_GameManagers_PlayerProperty->static_fields->Kills;
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar8 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    iVar7 = PhotonExtensions__GetIntProperty
                      (pPVar8,TypeInfo_GameManagers_PlayerProperty->static_fields->Kills,0,(MethodInfo *)0x0);
    local_2c = iVar7 + 1;
    value = il2cpp_vm_Object_Box(g_data_07556710,&local_2c);
    if (__this_00 == (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
label_0593f921:
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,(Il2CppObject *)pSVar5,
               value,(MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add)
    ;
    pPVar8 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    PhotonExtensions__SetCustomProperties(pPVar8,__this_00,(MethodInfo *)0x0);
  }
  return;
}


// GameManagers.InGameManager$$RegisterMainCharacterDamage
// il2cpp: void GameManagers_InGameManager__RegisterMainCharacterDamage (GameManagers_InGameManager_o* __this, Characters_BaseCharacter_o* victim, int32_t damage, const MethodInfo* method);
// 0x593f930
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x593fb4a: test r15, r15
// asm:   0x593fb4d: je 0x593fd20

void GameManagers_InGameManager__RegisterMainCharacterDamage
               (GameManagers_InGameManager_o *__this,Characters_BaseCharacter_o *victim,int32_t damage,
               MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  Characters_BaseCharacter_o *pCVar4;
  Characters_BaseCharacter_c *pCVar5;
  System_String_o *pSVar6;
  Utility_BaseComponentCache_o *pUVar7;
  bool bVar8;
  int32_t iVar9;
  UnityEngine_GameObject_o *victim_00;
  System_Collections_Generic_Dictionary_string__object__o *__this_00;
  Photon_Realtime_Player_o *pPVar10;
  Il2CppObject *pIVar11;
  System_String_o **ppSVar12;
  GameProgress_KillMethod_o GVar13;
  ulong local_48;
  Utility_BaseComponentCache_o *local_40;
  int32_t local_38;
  int local_34;
  
  if (Il2CppMethodInitialized_07545824 == '\0') {
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
    Il2CppMethodInitialized_07545824 = '\x01';
  }
  pCVar4 = (__this->fields).CurrentCharacter;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    return;
  }
  if (victim != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Characters_Horse->_2).typeHierarchyDepth;
    if ((bVar1 <= (victim->klass->_2).typeHierarchyDepth) &&
       ((victim->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Horse)) {
      return;
    }
  }
  GVar13 = GameProgress_KillMethod__op_Implicit(4,(MethodInfo *)0x0);
  local_40 = (Utility_BaseComponentCache_o *)GVar13.fields.Special;
  local_48 = (ulong)(uint)GVar13.fields.Weapon;
  pCVar4 = (__this->fields).CurrentCharacter;
  if (pCVar4 != (Characters_BaseCharacter_o *)0x0) {
    pCVar5 = pCVar4->klass;
    bVar1 = (pCVar5->_2).typeHierarchyDepth;
    bVar2 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if ((bVar1 < bVar2) ||
       ((pCVar5->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
      bVar2 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
      if ((bVar1 < bVar2) ||
         ((pCVar5->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_BasicTitan)) {
        bVar2 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
        if ((bVar1 < bVar2) ||
           ((pCVar5->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseShifter))
        goto joined_r0x0593fd1a;
        iVar9 = 5;
      }
      else {
        iVar9 = 6;
      }
      GVar13 = GameProgress_KillMethod__op_Implicit(iVar9,(MethodInfo *)0x0);
      local_40 = (Utility_BaseComponentCache_o *)GVar13.fields.Special;
      local_48 = (ulong)(uint)GVar13.fields.Weapon;
    }
    else {
      pSVar6 = (*(uint64_t *)((char *)pCVar4 + 0x150));
      if (pSVar6 == (System_String_o *)0x0) goto label_0593fd20;
      switch(*(undefined4 *)&pSVar6[0x13].monitor) {
      case 0:
        local_48 = 0;
        break;
      case 1:
        local_48 = 1;
        break;
      case 2:
        local_48 = 2;
        break;
      case 3:
        local_48 = 3;
      }
      iVar3._0_1_ = (*(uint8_t *)((char *)pCVar4 + 0x178));
      iVar3._1_1_ = (*(uint8_t *)((char *)pCVar4 + 0x179));
      iVar3._2_2_ = *(undefined2 *)&pCVar4[1].fields.field_0x6a;
      if (iVar3 == 9) {
        ppSVar12 = (System_String_o **)&(*(uint64_t *)((char *)pCVar4 + 0x180));
      }
      else {
        ppSVar12 = &"";
      }
      local_40 = (Utility_BaseComponentCache_o *)*ppSVar12;
      Il2CppCodeGenWriteBarrier(&local_40);
    }
  }
joined_r0x0593fd1a:
  if (victim != (Characters_BaseCharacter_o *)0x0) {
    victim_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)victim,(MethodInfo *)0x0);
    pUVar7 = local_40;
    if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
    }
    GVar13.fields.Special = (System_String_o *)pUVar7;
    GVar13.fields._0_8_ = local_48;
    GameProgress_GameProgressManager__RegisterDamage(victim_00,GVar13,damage,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_object);
    System_Collections_Generic_Dictionary_object__object____ctor
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
               (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    pSVar6 = TypeInfo_GameManagers_PlayerProperty->static_fields->TotalDamage;
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar10 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    iVar9 = PhotonExtensions__GetIntProperty
                      (pPVar10,TypeInfo_GameManagers_PlayerProperty->static_fields->TotalDamage,0,
                       (MethodInfo *)0x0);
    local_34 = iVar9 + damage;
    pIVar11 = il2cpp_vm_Object_Box(g_data_07556710,&local_34);
    if (__this_00 != (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,(Il2CppObject *)pSVar6,
                 pIVar11,(MethodInfo_4AAD4E0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
      pSVar6 = TypeInfo_GameManagers_PlayerProperty->static_fields->HighestDamage;
      pPVar10 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      iVar9 = PhotonExtensions__GetIntProperty
                        (pPVar10,TypeInfo_GameManagers_PlayerProperty->static_fields->HighestDamage,0,
                         (MethodInfo *)0x0);
      local_38 = damage;
      if (damage < iVar9) {
        local_38 = iVar9;
      }
      pIVar11 = il2cpp_vm_Object_Box(g_data_07556710,&local_38);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,(Il2CppObject *)pSVar6,
                 pIVar11,(MethodInfo_4AAD4E0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
      pPVar10 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      PhotonExtensions__SetCustomProperties(pPVar10,__this_00,(MethodInfo *)0x0);
      return;
    }
  }
label_0593fd20:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$OnPlayerEnteredRoom
// il2cpp: void GameManagers_InGameManager__OnPlayerEnteredRoom (GameManagers_InGameManager_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x593fd30
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x593fd61: test r12, r12
// asm:   0x593fd64: jne 0x593fe3a
// asm:   0x593fd6a: jmp 0x5940157
// asm:   0x593ff93: jmp 0x59400f4

void GameManagers_InGameManager__OnPlayerEnteredRoom
               (GameManagers_InGameManager_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  uint32_t uVar1;
  int32_t key;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  Settings_InGameSet_o *pSVar4;
  Utility_Algorithms_CompressionAlgorithm_o *__this_00;
  bool bVar5;
  GameManagers_UnsavedPlayerInfo_o *__this_01;
  System_Byte_array *pSVar6;
  System_Object_array *pSVar7;
  Il2CppObject *pIVar8;
  System_String_o *str;
  GameManagers_InGameManager_c *method_00;
  
  if (Il2CppMethodInitialized_07545825 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_DataCompressors);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_UnsavedPlayerInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"GameSettingsRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"PauseGameRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"PlayerInfoRPC");
    Il2CppMethodInitialized_07545825 = '\x01';
    uVar1 = (TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (pSVar2 = *(System_Collections_Generic_Dictionary_int__object__o **)
                ((long)((Il2CppClass *)TypeInfo_GameManagers_InGameManager)->static_fields + 0x28),
     pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar5 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      (pSVar2,(player->fields).actorNumber,
                       (MethodInfo_4A0F950 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_ContainsKey);
    if (!bVar5) {
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo;
      key = (player->fields).actorNumber;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameManagers_UnsavedPlayerInfo);
      GameManagers_UnsavedPlayerInfo___ctor(__this_01,(MethodInfo *)0x0);
      if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05940157;
      System_Collections_Generic_Dictionary_int__object___Add
                (pSVar2,key,(Il2CppObject *)__this_01,
                 (MethodInfo_4A0F740 *)MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_Add);
    }
    method_00 = TypeInfo_GameManagers_InGameManager;
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    pSVar6 = GameManagers_InGameManager__SerializeMyPlayerInfo((MethodInfo *)method_00);
    pPVar3 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
    pSVar7 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    if (pSVar7 != (System_Object_array *)0x0) {
      if ((pSVar6 != (System_Byte_array *)0x0) &&
         (pIVar8 = il2cpp_vm_Object_IsInst(&pSVar6->obj,(((pSVar7->obj).klass)->_1).element_class),
         pIVar8 == (Il2CppObject *)0x0)) {
label_05940161:
        pIVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar8,(MethodInfo *)0x0);
      }
      if ((int)pSVar7->max_length == 0) {
label_0594015c:
        ThrowIndexOutOfRangeException();
      }
      pSVar7->m_Items[0] = &pSVar6->obj;
      Il2CppCodeGenWriteBarrier(pSVar7->m_Items);
      if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC_56e5850(pPVar3,"PlayerInfoRPC",player,pSVar7,(MethodInfo *)0x0);
        if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
          bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
        }
        else {
          bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
        }
        if (!bVar5) goto label_059400f4;
        pPVar3 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
        pSVar7 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
        if ((TypeInfo_Utility_DataCompressors->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DataCompressors);
        }
        pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
        if (pSVar4 != (Settings_InGameSet_o *)0x0) {
          __this_00 = (Utility_Algorithms_CompressionAlgorithm_o *)
                      TypeInfo_Utility_DataCompressors->static_fields->Brotli;
          str = (*(pSVar4->klass->vtable)._8_SerializeToJsonString.methodPtr)
                          (pSVar4,(pSVar4->klass->vtable)._8_SerializeToJsonString.method);
          if ((__this_00 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) &&
             (pSVar6 = Utility_Algorithms_CompressionAlgorithm__CompressString
                                 (__this_00,str,1,(MethodInfo *)0x0), pSVar7 != (System_Object_array *)0x0)) {
            if ((pSVar6 != (System_Byte_array *)0x0) &&
               (pIVar8 = il2cpp_vm_Object_IsInst(&pSVar6->obj,(((pSVar7->obj).klass)->_1).element_class),
               pIVar8 == (Il2CppObject *)0x0)) goto label_05940161;
            if ((int)pSVar7->max_length == 0) goto label_0594015c;
            pSVar7->m_Items[0] = &pSVar6->obj;
            Il2CppCodeGenWriteBarrier(pSVar7->m_Items);
            if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
              Photon_Pun_PhotonView__RPC_56e5850(pPVar3,"GameSettingsRPC",player,pSVar7,(MethodInfo *)0x0)
              ;
              if ((__this->fields).GlobalPause != false) {
                pPVar3 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
                pSVar7 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
                if (pPVar3 == (Photon_Pun_PhotonView_o *)0x0) goto label_05940157;
                Photon_Pun_PhotonView__RPC_56e5850
                          (pPVar3,"PauseGameRPC",player,pSVar7,(MethodInfo *)0x0);
              }
label_059400f4:
              if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                bVar5 = GameManagers_ChatManager__HasActivePlayerSuggestions((MethodInfo *)0x0);
              }
              else {
                bVar5 = GameManagers_ChatManager__HasActivePlayerSuggestions((MethodInfo *)0x0);
              }
              if (bVar5) {
                if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->_2).cctor_finished_or_no_cctor == 0)
                {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
                }
                GameManagers_ChatManager__RefreshPlayerSuggestions((MethodInfo *)0x0);
                return;
              }
              return;
            }
          }
        }
      }
    }
  }
label_05940157:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$OnNotifyPlayerJoined
// il2cpp: void GameManagers_InGameManager__OnNotifyPlayerJoined (GameManagers_InGameManager_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x5940220
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x594025b: jmp 0x594031c

void GameManagers_InGameManager__OnNotifyPlayerJoined
               (GameManagers_InGameManager_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  bool bVar3;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_String_o *pSVar4;
  System_String_o *str1;
  
  if (Il2CppMethodInitialized_07545826 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&" has joined the room.");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07545826 = '\x01';
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor != 0) goto label_05940247;
label_059402d2:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  else {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) goto label_059402d2;
label_05940247:
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_0594044b;
    }
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
      str1 = GameManagers_ChatManager__GetColorString(" has joined the room.",3,false,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat_52f0320(pSVar4,str1,(MethodInfo *)0x0);
      GameManagers_ChatManager__AddLine
                (pSVar4,0,false,(System_Nullable_DateTime__o)ZEXT816(0),-1,false,false,-1,false,
                 (MethodInfo *)0x0);
    }
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      bVar3 = GameManagers_ChatManager__HasActivePlayerSuggestions((MethodInfo *)0x0);
    }
    else {
      bVar3 = GameManagers_ChatManager__HasActivePlayerSuggestions((MethodInfo *)0x0);
    }
    if (bVar3) {
      if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      GameManagers_ChatManager__RefreshPlayerSuggestions((MethodInfo *)0x0);
      return;
    }
    return;
  }
label_0594044b:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$OnPlayerLeftRoom
// il2cpp: void GameManagers_InGameManager__OnPlayerLeftRoom (GameManagers_InGameManager_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x5940450
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5940577: jmp 0x59405c1
// asm:   0x59405bf: jmp 0x59405d6
// asm:   0x59407e8: jmp 0x5940a4a

void GameManagers_InGameManager__OnPlayerLeftRoom
               (GameManagers_InGameManager_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  Settings_UISettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  System_Collections_Generic_HashSet_int__o *pSVar5;
  System_Collections_Generic_Dictionary_int__float__o *pSVar6;
  bool bVar7;
  UI_InGameMenu_o *pUVar8;
  System_String_o *pSVar9;
  System_String_o *str1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  UI_ChatPanel_o *__this_01;
  UI_BaseMenu_o *__this_02;
  
  if (Il2CppMethodInitialized_07545827 == '\0') {
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
    Il2CppMethodInitialized_07545827 = '\x01';
  }
  Photon_Pun_MonoBehaviourPunCallbacks__OnPlayerLeftRoom
            ((Photon_Pun_MonoBehaviourPunCallbacks_o *)__this,player,(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    __this_02 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (__this_02 != (UI_BaseMenu_o *)0x0) goto label_05940591;
label_059405c1:
    __this_01 = (UI_ChatPanel_o *)0x0;
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    __this_02 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (__this_02 == (UI_BaseMenu_o *)0x0) goto label_059405c1;
label_05940591:
    pUVar8 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this_02,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_InGameMenu);
    if (pUVar8 == (UI_InGameMenu_o *)0x0) goto label_059405c1;
    __this_01 = (pUVar8->fields).ChatPanel;
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    if (__this_01 == (UI_ChatPanel_o *)0x0) goto label_05940a4a;
    UI_ChatPanel__RemovePMPartner(__this_01,player,(MethodInfo *)0x0);
    UI_ChatPanel__Sync(__this_01,(MethodInfo *)0x0);
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  if ((player == (Photon_Realtime_Player_o *)0x0) ||
     (pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo,
     pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)) goto label_05940a4a;
  bVar7 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                    (pSVar2,(player->fields).actorNumber,
                     (MethodInfo_4A0F950 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_ContainsKey);
  if (bVar7) {
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo;
    if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05940a4a;
    System_Collections_Generic_Dictionary_int__object___Remove
              (pSVar2,(player->fields).actorNumber,
               (MethodInfo_4A10DC0 *)MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_Remove);
  }
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar3 == (Settings_UISettings_o *)0x0) ||
     (pSVar4 = (pSVar3->fields).JoinNotifications, pSVar4 == (Settings_BoolSetting_o *)0x0))
  goto label_05940a4a;
  if ((pSVar4->fields)._value != false) {
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    pSVar9 = PhotonExtensions__GetStringProperty
                       (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,""
                        ,(MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    str1 = GameManagers_ChatManager__GetColorString(" has left the room.",3,false,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat_52f0320(pSVar9,str1,(MethodInfo *)0x0);
    GameManagers_ChatManager__AddLine
              (pSVar9,0,false,(System_Nullable_DateTime__o)ZEXT816(0),-1,false,false,-1,false,
               (MethodInfo *)0x0);
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_05940792;
label_05940805:
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) goto label_059407d0;
label_05940811:
    pSVar5 = TypeInfo_GameManagers_InGameManager->static_fields->MuteEmote;
  }
  else {
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_05940805;
label_05940792:
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_05940a4a;
    }
    CustomLogic_CustomLogicEvaluator__OnPlayerLeave(__this_00,player,(MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor != 0) goto label_05940811;
label_059407d0:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    pSVar5 = TypeInfo_GameManagers_InGameManager->static_fields->MuteEmote;
  }
  if (pSVar5 != (System_Collections_Generic_HashSet_int__o *)0x0) {
    bVar7 = System_Collections_Generic_HashSet_int___Contains
                      (pSVar5,(player->fields).actorNumber,
                       (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    if (bVar7) {
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      pSVar5 = TypeInfo_GameManagers_InGameManager->static_fields->MuteEmote;
      if (pSVar5 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_05940a4a;
      System_Collections_Generic_HashSet_int___Remove
                (pSVar5,(player->fields).actorNumber,
                 (MethodInfo_4FA80C0 *)MethodInfo_System_Collections_Generic_HashSet_int_Remove);
    }
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    pSVar5 = TypeInfo_GameManagers_InGameManager->static_fields->MuteText;
    if (pSVar5 != (System_Collections_Generic_HashSet_int__o *)0x0) {
      bVar7 = System_Collections_Generic_HashSet_int___Contains
                        (pSVar5,(player->fields).actorNumber,
                         (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
      if (bVar7) {
        if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
        }
        pSVar5 = TypeInfo_GameManagers_InGameManager->static_fields->MuteText;
        if (pSVar5 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_05940a4a;
        System_Collections_Generic_HashSet_int___Remove
                  (pSVar5,(player->fields).actorNumber,
                   (MethodInfo_4FA80C0 *)MethodInfo_System_Collections_Generic_HashSet_int_Remove);
      }
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      pSVar5 = TypeInfo_GameManagers_InGameManager->static_fields->MuteVoiceChat;
      if (pSVar5 != (System_Collections_Generic_HashSet_int__o *)0x0) {
        bVar7 = System_Collections_Generic_HashSet_int___Contains
                          (pSVar5,(player->fields).actorNumber,
                           (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
        if (bVar7) {
          if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
          }
          pSVar5 = TypeInfo_GameManagers_InGameManager->static_fields->MuteVoiceChat;
          if (pSVar5 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_05940a4a;
          System_Collections_Generic_HashSet_int___Remove
                    (pSVar5,(player->fields).actorNumber,
                     (MethodInfo_4FA80C0 *)MethodInfo_System_Collections_Generic_HashSet_int_Remove);
        }
        if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
        }
        pSVar6 = TypeInfo_GameManagers_InGameManager->static_fields->VoiceChatVolumeMultiplier;
        if (pSVar6 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
          bVar7 = System_Collections_Generic_Dictionary_int__float___ContainsKey
                            (pSVar6,(player->fields).actorNumber,
                             (MethodInfo_4A176B0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_float_ContainsKey);
          if (bVar7) {
            if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
            }
            pSVar6 = TypeInfo_GameManagers_InGameManager->static_fields->VoiceChatVolumeMultiplier;
            if (pSVar6 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) goto label_05940a4a;
            System_Collections_Generic_Dictionary_int__float___Remove
                      (pSVar6,(player->fields).actorNumber,
                       (MethodInfo_4A18A90 *)MethodInfo_System_Collections_Generic_Dictionary_int_float_Remove
                      );
          }
          if ((TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager);
          }
          Anticheat_AnticheatManager__ResetVoteKicks(player,(MethodInfo *)0x0);
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            bVar7 = GameManagers_ChatManager__HasActivePlayerSuggestions((MethodInfo *)0x0);
          }
          else {
            bVar7 = GameManagers_ChatManager__HasActivePlayerSuggestions((MethodInfo *)0x0);
          }
          if (bVar7) {
            if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            GameManagers_ChatManager__RefreshPlayerSuggestions((MethodInfo *)0x0);
            return;
          }
          return;
        }
      }
    }
  }
label_05940a4a:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$OnMasterClientSwitched
// il2cpp: void GameManagers_InGameManager__OnMasterClientSwitched (GameManagers_InGameManager_o* __this, Photon_Realtime_Player_o* newMasterClient, const MethodInfo* method);
// 0x5940a50

void GameManagers_InGameManager__OnMasterClientSwitched
               (GameManagers_InGameManager_o *__this,Photon_Realtime_Player_o *newMasterClient,
               MethodInfo *method)

{
  bool bVar1;
  System_Object_array *args;
  System_String_o *pSVar2;
  Il2CppObject *pIVar3;
  MethodInfo *method_00;
  Settings_InGameSet_o *pSVar4;
  
  if (Il2CppMethodInitialized_07545828 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"InGame");
    il2cpp_codegen_initialize_runtime_metadata(&"MasterclientChangeTo");
    il2cpp_codegen_initialize_runtime_metadata(&"Chat");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07545828 = '\x01';
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
  if ((pSVar2 != (System_String_o *)0x0) &&
     (pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((args->obj).klass)->_1).element_class),
     pIVar3 == (Il2CppObject *)0x0)) {
    pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
  }
  if ((int)args->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  args->m_Items[0] = (Il2CppObject *)pSVar2;
  Il2CppCodeGenWriteBarrier(args->m_Items);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocaleFormatted
                     ("InGame","Chat","MasterclientChangeTo",args,(MethodInfo *)0x0
                     );
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  method_00 = (MethodInfo *)0x3;
  GameManagers_ChatManager__AddLine
            (pSVar2,3,false,(System_Nullable_DateTime__o)ZEXT816(0),-1,false,false,-1,false,(MethodInfo *)0x0)
  ;
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  CustomLogic_CustomLogicManager__WaitForRestart((MethodInfo *)0x0);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  else {
    bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  if (bVar1) {
    pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
    if ((((Il2CppClass *)TypeInfo_GameManagers_InGameManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    GameManagers_InGameManager__ResetContentSettings(pSVar4,method_00);
    pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
    GameManagers_InGameManager__ResetContentSettings(pSVar4,method_00);
    GameManagers_InGameManager__RestartGame((MethodInfo *)pSVar4);
    return;
  }
  return;
}


// GameManagers.InGameManager$$ResetContentSettings
// il2cpp: void GameManagers_InGameManager__ResetContentSettings (Settings_InGameSet_o* settings, const MethodInfo* method);
// 0x5940ce0

void GameManagers_InGameManager__ResetContentSettings(Settings_InGameSet_o *settings,MethodInfo *method)

{
  Settings_InGameGeneralSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_ListSetting_StringSetting__o *pSVar3;
  Settings_InGameModeSettings_o *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  Settings_InGameAddonSettings_o *pSVar6;
  
  if (Il2CppMethodInitialized_07545829 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_Clear);
    Il2CppMethodInitialized_07545829 = '\x01';
  }
  if (((settings != (Settings_InGameSet_o *)0x0) &&
      (pSVar1 = (settings->fields).General, pSVar1 != (Settings_InGameGeneralSettings_o *)0x0)) &&
     (pSVar2 = (pSVar1->fields).MapCategory, pSVar2 != (Settings_StringSetting_o *)0x0)) {
    (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
    pSVar1 = (settings->fields).General;
    if ((pSVar1 != (Settings_InGameGeneralSettings_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).MapName, pSVar2 != (Settings_StringSetting_o *)0x0)) {
      (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
      pSVar1 = (settings->fields).General;
      if ((pSVar1 != (Settings_InGameGeneralSettings_o *)0x0) &&
         (pSVar2 = (pSVar1->fields).GameMode, pSVar2 != (Settings_StringSetting_o *)0x0)) {
        (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)
                  (pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
        pSVar1 = (settings->fields).General;
        if ((pSVar1 != (Settings_InGameGeneralSettings_o *)0x0) &&
           (pSVar2 = (pSVar1->fields).PrevGameMode, pSVar2 != (Settings_StringSetting_o *)0x0)) {
          (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)
                    (pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
          pSVar1 = (settings->fields).General;
          if ((pSVar1 != (Settings_InGameGeneralSettings_o *)0x0) &&
             (pSVar3 = (pSVar1->fields).Addons, pSVar3 != (Settings_ListSetting_StringSetting__o *)0x0)) {
            (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)
                      (pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
            pSVar4 = (settings->fields).Mode;
            if (pSVar4 != (Settings_InGameModeSettings_o *)0x0) {
              (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)
                        (pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
              pSVar4 = (settings->fields).Mode;
              if ((pSVar4 != (Settings_InGameModeSettings_o *)0x0) &&
                 (pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar4->fields).Current
                 , pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
                System_Collections_Generic_Dictionary_object__object___Clear
                          (pSVar5,(MethodInfo_4AAD690 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_Clear);
                pSVar6 = (settings->fields).Addons;
                if (pSVar6 != (Settings_InGameAddonSettings_o *)0x0) {
                  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)
                            (pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
                  pSVar6 = (settings->fields).Addons;
                  if ((pSVar6 != (Settings_InGameAddonSettings_o *)0x0) &&
                     (pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                               (pSVar6->fields).Current,
                     pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
                    System_Collections_Generic_Dictionary_object__object___Clear
                              (pSVar5,(MethodInfo_4AAD690 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_Clear
                              );
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


// GameManagers.InGameManager$$OnPlayerInfoRPC
// il2cpp: void GameManagers_InGameManager__OnPlayerInfoRPC (System_Byte_array* data, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5940e70
// eh: try 0x5940fe6..0x5941218 -> pad 0x5941218 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5941233..0x5941285 -> pad 0x5941285 (+1 call sites) cleanup
// eh: try 0x5941288..0x594128d -> pad 0x5941295 catch (...) [compiler noexcept guard]
// asm: 41 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59411ff: jmp 0x59410ce
// asm:   0x5941218: jmp 0x5941220
// asm:   0x594121a: jmp 0x5941220
// asm:   0x594121c: jmp 0x5941220
// asm:   0x594121e: jmp 0x5941220
// asm:   0x5941220: mov rbx, rax
// asm:   0x5941223: cmp edx, 1
// asm:   0x5941226: jne 0x594128d
// asm:   0x5941228: mov rdi, rbx
// asm:   0x594122b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5941230: mov rbx, rax
// asm:   0x5941233: lea rdi, [rip + 0x1936e86]  ; TypeInfo_System_Exception
// asm:   0x594123a: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x594123f: mov rcx, qword ptr [rbx]
// asm:   0x5941242: mov rsi, qword ptr [rcx]
// asm:   0x5941245: mov rdi, rax
// asm:   0x5941248: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x594124d: test al, al
// asm:   0x594124f: je 0x5941264
// asm:   0x5941251: add rsp, 8
// asm:   0x5941255: pop rbx
// asm:   0x5941256: pop r12
// asm:   0x5941258: pop r13
// asm:   0x594125a: pop r14
// asm:   0x594125c: pop r15
// asm:   0x594125e: pop rbp
// asm:   0x594125f: jmp 0x6e255a0
// asm:   0x5941264: mov edi, 8
// asm:   0x5941269: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x594126e: mov rcx, qword ptr [rbx]
// asm:   0x5941271: mov qword ptr [rax], rcx
// asm:   0x5941274: lea rsi, [rip + 0x14ec285]
// asm:   0x594127b: mov rdi, rax
// asm:   0x594127e: xor edx, edx
// asm:   0x5941280: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5941285: mov rbx, rax
// asm:   0x5941288: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x594128d: mov rdi, rbx
// asm:   0x5941290: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5941295: mov rdi, rax
// asm:   0x5941298: call 0x2ab61e0  ; __clang_call_terminate()

void GameManagers_InGameManager__OnPlayerInfoRPC
               (System_Byte_array *data,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  Utility_Algorithms_CompressionAlgorithm_o *__this;
  System_Action_int__o *pSVar3;
  System_Collections_Generic_HashSet_object__o *__this_00;
  Settings_ProfileSettings_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  bool bVar6;
  GameManagers_UnsavedPlayerInfo_o *__this_01;
  GameManagers_PlayerInfo_o *pGVar7;
  System_String_o *pSVar8;
  
  if (Il2CppMethodInitialized_0754582a == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_UnsavedPlayerInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_0754582a = '\x01';
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  if ((info.fields.Sender == (Photon_Realtime_Player_o *)0x0) ||
     (pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo,
     pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)) goto label_05941204;
  bVar6 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                    (pSVar2,((info.fields.Sender)->fields).actorNumber,
                     (MethodInfo_4A0F950 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_ContainsKey);
  if (!bVar6) {
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo;
    iVar1 = ((info.fields.Sender)->fields).actorNumber;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameManagers_UnsavedPlayerInfo);
    GameManagers_UnsavedPlayerInfo___ctor(__this_01,(MethodInfo *)0x0);
    if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05941204;
    System_Collections_Generic_Dictionary_int__object___Add
              (pSVar2,iVar1,(Il2CppObject *)__this_01,
               (MethodInfo_4A0F740 *)MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_Add);
  }
  if (data == (System_Byte_array *)0x0) {
    return;
  }
  if (0x4000 < (int)data->max_length) {
    return;
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
           TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo;
  if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  pGVar7 = System_Collections_Generic_Dictionary_int__object___get_Item
                     (pSVar2,((info.fields.Sender)->fields).actorNumber,
                      (MethodInfo_4A0F690 *)
                      MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_get_Item);
  if ((TypeInfo_Utility_DataCompressors->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DataCompressors);
  }
  __this = (Utility_Algorithms_CompressionAlgorithm_o *)
           TypeInfo_Utility_DataCompressors->static_fields->Brotli;
  if (__this == (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar8 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                     (__this,data,0x1000,0xa00000,(MethodInfo *)0x0);
  if (pGVar7 == (GameManagers_PlayerInfo_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pGVar7->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
            (pGVar7,pSVar8,(pGVar7->klass->vtable)._9_DeserializeFromJsonString.method);
  iVar1 = ((info.fields.Sender)->fields).actorNumber;
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    if (Il2CppMethodInitialized_0754584b != '\0') goto label_059410a0;
label_059411be:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_0754584b = '\x01';
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor != 0) goto label_059410b1;
label_059411e2:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    pSVar3 = TypeInfo_GameManagers_InGameManager->static_fields->PlayerInfoUpdated;
  }
  else {
    if (Il2CppMethodInitialized_0754584b == '\0') goto label_059411be;
label_059410a0:
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) goto label_059411e2;
label_059410b1:
    pSVar3 = TypeInfo_GameManagers_InGameManager->static_fields->PlayerInfoUpdated;
  }
  if (pSVar3 != (System_Action_int__o *)0x0) {
    (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,iVar1,(pSVar3->fields).method);
  }
  if ((TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
           TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo;
  if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    __this_00 = (System_Collections_Generic_HashSet_object__o *)
                TypeInfo_Anticheat_AnticheatManager->static_fields->BanList;
    pGVar7 = System_Collections_Generic_Dictionary_int__object___get_Item
                       (pSVar2,((info.fields.Sender)->fields).actorNumber,
                        (MethodInfo_4A0F690 *)
                        MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_get_Item);
    if ((((pGVar7 != (GameManagers_PlayerInfo_o *)0x0) &&
         (pSVar4 = (pGVar7->fields).Profile, pSVar4 != (Settings_ProfileSettings_o *)0x0)) &&
        (pSVar5 = (pSVar4->fields).ID, pSVar5 != (Settings_StringSetting_o *)0x0)) &&
       (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
      bVar6 = System_Collections_Generic_HashSet_object___Contains
                        (__this_00,(Il2CppObject *)(pSVar5->fields)._value,
                         (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
      if (!bVar6) {
        return;
      }
      if ((TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager);
      }
      Anticheat_AnticheatManager__KickPlayer(info.fields.Sender,false,"",(MethodInfo *)0x0)
      ;
      return;
    }
  }
label_05941204:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$OnGameSettingsRPC
// il2cpp: void GameManagers_InGameManager__OnGameSettingsRPC (System_Byte_array* data, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5941330

void GameManagers_InGameManager__OnGameSettingsRPC
               (System_Byte_array *data,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  UnityEngine_Coroutine_o **targetAddress;
  float fVar1;
  byte bVar2;
  Settings_InGameSet_o *pSVar3;
  Settings_InGameMiscSettings_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  System_String_o *original;
  Utility_Algorithms_CompressionAlgorithm_o *__this;
  GameManagers_InGameManager_o *__this_00;
  Settings_BoolSetting_o *pSVar6;
  Settings_FloatSetting_o *pSVar7;
  bool bVar8;
  System_String_o *pSVar9;
  GameManagers_InGameManager__RespawnForever_d__77_o *__this_01;
  UnityEngine_Coroutine_o *pUVar10;
  GameManagers_InGameManager_c *klass;
  
  if (Il2CppMethodInitialized_0754582b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_DataCompressors);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_VoiceChatManager);
    Il2CppMethodInitialized_0754582b = '\x01';
  }
  if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
    bVar8 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
    if (!bVar8) {
      return;
    }
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
    if (((pSVar3 != (Settings_InGameSet_o *)0x0) &&
        (pSVar4 = (pSVar3->fields).Misc, pSVar4 != (Settings_InGameMiscSettings_o *)0x0)) &&
       (pSVar5 = (pSVar4->fields).Motd, pSVar5 != (Settings_StringSetting_o *)0x0)) {
      original = (pSVar5->fields)._value;
      if ((TypeInfo_Utility_DataCompressors->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DataCompressors);
      }
      __this = (Utility_Algorithms_CompressionAlgorithm_o *)
               TypeInfo_Utility_DataCompressors->static_fields->Brotli;
      if (__this != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
        pSVar9 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                           (__this,data,0x1000,0xa00000,(MethodInfo *)0x0);
        (*(pSVar3->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
                  (pSVar3,pSVar9,(pSVar3->klass->vtable)._9_DeserializeFromJsonString.method);
        klass = TypeInfo_GameManagers_InGameManager;
        __this_00 = (GameManagers_InGameManager_o *)
                    TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
        if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
          bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
          if (((__this_00->klass->_2).typeHierarchyDepth < bVar2) ||
             ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
              (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
            il2cpp_codegen_raise_invalid_cast_exception(__this_00);
          }
          (__this_00->fields)._gameSettingsLoaded = true;
          if ((klass->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)klass);
          }
          GameManagers_InGameManager__PrintMOTD(original,(MethodInfo *)klass);
          if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager);
          }
          ApplicationManagers_VoiceChatManager__ApplySoundSettings((MethodInfo *)0x0);
          targetAddress = &(__this_00->fields)._respawnForever;
          pUVar10 = (__this_00->fields)._respawnForever;
          if (pUVar10 != (UnityEngine_Coroutine_o *)0x0) {
            UnityEngine_MonoBehaviour__StopCoroutine_691c6e0
                      ((UnityEngine_MonoBehaviour_o *)__this_00,pUVar10,(MethodInfo *)0x0);
            (__this_00->fields)._respawnForever = (UnityEngine_Coroutine_o *)0x0;
            Il2CppCodeGenWriteBarrier(targetAddress);
          }
          pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
          if (((pSVar3 != (Settings_InGameSet_o *)0x0) &&
              (pSVar4 = (pSVar3->fields).Misc, pSVar4 != (Settings_InGameMiscSettings_o *)0x0)) &&
             (pSVar6 = (pSVar4->fields).EndlessRespawnEnabled, pSVar6 != (Settings_BoolSetting_o *)0x0)) {
            if ((pSVar6->fields)._value == false) {
              return;
            }
            pSVar7 = (pSVar4->fields).EndlessRespawnTime;
            if (pSVar7 != (Settings_FloatSetting_o *)0x0) {
              fVar1 = (pSVar7->fields)._value;
              if (Il2CppMethodInitialized_0754582f == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_GameManagers_InGameManager_RespawnForever_d__77);
                Il2CppMethodInitialized_0754582f = '\x01';
              }
              __this_01 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_GameManagers_InGameManager_RespawnForever_d__77);
              System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
              (__this_01->fields).__1__state = 0;
              (__this_01->fields).__4__this = __this_00;
              Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
              (__this_01->fields).delay = fVar1;
              pUVar10 = UnityEngine_MonoBehaviour__StartCoroutine_691c390
                                  ((UnityEngine_MonoBehaviour_o *)__this_00,
                                   (System_Collections_IEnumerator_o *)__this_01,(MethodInfo *)0x0);
              (__this_00->fields)._respawnForever = pUVar10;
              Il2CppCodeGenWriteBarrier(targetAddress);
              return;
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
// 0x59417e0

void GameManagers_InGameManager__OnCharacterChosen(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_0754582c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_0754582c = '\x01';
    uVar1 = (TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_GameManagers_InGameManager;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_GameManagers_InGameManager;
  }
  TypeInfo_GameManagers_InGameManager = (GameManagers_InGameManager_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    GameManagers_InGameManager__ResetRespawnTimeLeft((MethodInfo *)klass);
    return;
  }
  GameManagers_InGameManager__ResetRespawnTimeLeft((MethodInfo *)klass);
  return;
}


// GameManagers.InGameManager$$OnLocalPlayerDied
// il2cpp: void GameManagers_InGameManager__OnLocalPlayerDied (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x5941910

void GameManagers_InGameManager__OnLocalPlayerDied(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_0754582d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_0754582d = '\x01';
    uVar1 = (TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_GameManagers_InGameManager;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_GameManagers_InGameManager;
  }
  TypeInfo_GameManagers_InGameManager = (GameManagers_InGameManager_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    GameManagers_InGameManager__ResetRespawnTimeLeft((MethodInfo *)klass);
    return;
  }
  GameManagers_InGameManager__ResetRespawnTimeLeft((MethodInfo *)klass);
  return;
}


// GameManagers.InGameManager$$ResetRespawnTimeLeft
// il2cpp: void GameManagers_InGameManager__ResetRespawnTimeLeft (const MethodInfo* method);
// 0x5941840

void GameManagers_InGameManager__ResetRespawnTimeLeft(MethodInfo *method)

{
  byte bVar1;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameMiscSettings_o *pSVar3;
  Settings_FloatSetting_o *pSVar4;
  GameManagers_BaseGameManager_o *pGVar5;
  
  if (Il2CppMethodInitialized_0754582e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_0754582e = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if ((((pSVar2 == (Settings_InGameSet_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).Misc, pSVar3 == (Settings_InGameMiscSettings_o *)0x0)) ||
      (pSVar4 = (pSVar3->fields).EndlessRespawnTime, pSVar4 == (Settings_FloatSetting_o *)0x0)) ||
     (pGVar5 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager,
     pGVar5 == (GameManagers_BaseGameManager_o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
  if (((pGVar5->klass->_2).typeHierarchyDepth < bVar1) ||
     ((pGVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  *(float *)&(*(uint64_t *)((char *)pGVar5 + 0xa0)) = (pSVar4->fields)._value;
  return;
}


// GameManagers.InGameManager$$RespawnForever
// il2cpp: System_Collections_IEnumerator_o* GameManagers_InGameManager__RespawnForever (GameManagers_InGameManager_o* __this, float delay, const MethodInfo* method);
// 0x5941760

System_Collections_IEnumerator_o *
GameManagers_InGameManager__RespawnForever
          (GameManagers_InGameManager_o *__this,float delay,MethodInfo *method)

{
  GameManagers_InGameManager__RespawnForever_d__77_o *__this_00;
  
  if (Il2CppMethodInitialized_0754582f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager_RespawnForever_d__77);
    Il2CppMethodInitialized_0754582f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameManagers_InGameManager_RespawnForever_d__77);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).delay = delay;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// GameManagers.InGameManager$$SpawnPlayer
// il2cpp: void GameManagers_InGameManager__SpawnPlayer (GameManagers_InGameManager_o* __this, bool force, const MethodInfo* method);
// 0x5941990

void GameManagers_InGameManager__SpawnPlayer
               (GameManagers_InGameManager_o *__this,bool force,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  Settings_InGameCharacterSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  System_String_o *a;
  float fVar4;
  bool bVar5;
  bool bVar6;
  Photon_Realtime_Player_o *pPVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  GameManagers_InGameManager_o *__this_00;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o position;
  System_ValueTuple_Vector3__Quaternion__o local_68;
  undefined1 local_48 [40];
  
  if (Il2CppMethodInitialized_07545830 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_07545830 = '\x01';
  }
  bVar5 = (*(__this->klass->vtable)._56_IsFinishedLoading.methodPtr)
                    (__this,(__this->klass->vtable)._56_IsFinishedLoading.method);
  if (bVar5) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if (pCVar1 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_05941c2a;
    bVar5 = System_String__op_Inequality
                      ((pCVar1->fields).ForcedCharacterType,
                       (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
    if (bVar5) {
      pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
      if (pSVar2 == (Settings_InGameCharacterSettings_o *)0x0) goto label_05941c2a;
      pSVar3 = (pSVar2->fields).CharacterType;
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if ((pCVar1 == (CustomLogic_CustomLogicEvaluator_o *)0x0) || (pSVar3 == (Settings_StringSetting_o *)0x0)
         ) goto label_05941c2a;
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)(pCVar1->fields).ForcedCharacterType,
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    }
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
    if ((pSVar2 == (Settings_InGameCharacterSettings_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).CharacterType, pSVar3 == (Settings_StringSetting_o *)0x0)) {
label_05941c2a:
      ThrowNullReferenceException();
    }
    a = (pSVar3->fields)._value;
    if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
    }
    bVar5 = System_String__op_Equality
                      (a,TypeInfo_GameManagers_PlayerCharacter->static_fields->Human,(MethodInfo *)0x0);
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar7 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    __this_00 = (GameManagers_InGameManager_o *)0x0;
    bVar6 = PhotonExtensions__HasSpawnPoint(pPVar7,(MethodInfo *)0x0);
    if (bVar6) {
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar7 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      UVar8 = PhotonExtensions__GetSpawnPoint(pPVar7,(MethodInfo *)0x0);
      GameManagers_InGameManager__SpawnPlayerAt(__this,force,UVar8,0.0,method_01);
      return;
    }
    if (bVar5) {
      GameManagers_InGameManager__GetHumanSpawnPoint(&local_68,__this_00,method_00);
    }
    else {
      GameManagers_InGameManager__GetTitanSpawnPoint(&local_68,__this_00,method_00);
    }
    fVar4 = local_68.fields.Item1.fields.z;
    local_48._0_4_ = local_68.fields.Item1.fields.x;
    local_48._4_4_ = local_68.fields.Item1.fields.y;
    local_48._8_8_ = 0;
    local_48._24_4_ = local_68.fields.Item2.fields.z;
    local_48._28_4_ = local_68.fields.Item2.fields.w;
    local_68.fields.Item1.fields.z = local_68.fields.Item2.fields.z;
    local_68.fields.Item2.fields.x = local_68.fields.Item2.fields.w;
    UVar8 = UnityEngine_Quaternion__Internal_ToEulerRad
                      ((UnityEngine_Quaternion_o *)&local_68,(MethodInfo *)0x0);
    euler.fields.x = UVar8.fields.x * 57.29578;
    euler.fields.y = UVar8.fields.y * 57.29578;
    euler.fields.z = UVar8.fields.z * 57.29578;
    UVar8 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    position.fields.z = fVar4;
    position.fields.x = (float)local_48._0_4_;
    position.fields.y = (float)local_48._4_4_;
    GameManagers_InGameManager__SpawnPlayerAt(__this,force,position,UVar8.fields.y,method_02);
  }
  return;
}


// GameManagers.InGameManager$$SpawnPlayerShifterAt
// il2cpp: void GameManagers_InGameManager__SpawnPlayerShifterAt (GameManagers_InGameManager_o* __this, System_String_o* shifterName, float liveTime, UnityEngine_Vector3_o position, float rotationY, const MethodInfo* method);
// 0x5942fb0

void GameManagers_InGameManager__SpawnPlayerShifterAt
               (GameManagers_InGameManager_o *__this,System_String_o *shifterName,float liveTime,
               UnityEngine_Vector3_o position,float rotationY,MethodInfo *method)

{
  byte bVar1;
  int32_t health;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameMiscSettings_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  bool bVar5;
  Characters_BaseCharacter_o *pCVar6;
  System_String_o *pSVar7;
  MethodInfo *method_00;
  GameManagers_InGameManager_o *__this_00;
  Characters_BaseCharacter_o *__this_01;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Quaternion_o UVar8;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o local_58;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  local_38._8_4_ = in_XMM1_Dc;
  local_38._0_8_ = position.fields._0_8_;
  local_38._12_4_ = in_XMM1_Dd;
  if (Il2CppMethodInitialized_07545831 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSpecials);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Eren");
    il2cpp_codegen_initialize_runtime_metadata(&"Annie");
    il2cpp_codegen_initialize_runtime_metadata(&"Armored");
    Il2CppMethodInitialized_07545831 = '\x01';
  }
  local_58.fields.x = 0.0;
  local_58.fields.y = rotationY * 0.017453292;
  local_58.fields.z = 0.0;
  UVar8 = UnityEngine_Quaternion__Internal_FromEulerRad(&local_58,(MethodInfo *)0x0);
  local_48._8_4_ = extraout_XMM0_Dc;
  local_48._0_8_ = UVar8.fields._0_8_;
  local_48._12_4_ = extraout_XMM0_Dd;
  bVar5 = System_String__op_Equality(shifterName,"Annie",(MethodInfo *)0x0);
  if (bVar5) {
    if ((TypeInfo_Characters_CharacterPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterPrefabs);
    }
    pSVar7 = TypeInfo_Characters_CharacterPrefabs->static_fields->AnnieShifter;
  }
  else {
    bVar5 = System_String__op_Equality(shifterName,"Eren",(MethodInfo *)0x0);
    if (bVar5) {
      if ((TypeInfo_Characters_CharacterPrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterPrefabs);
      }
      pSVar7 = TypeInfo_Characters_CharacterPrefabs->static_fields->ErenShifter;
    }
    else {
      __this_01 = (Characters_BaseCharacter_o *)0x0;
      bVar5 = System_String__op_Equality(shifterName,"Armored",(MethodInfo *)0x0);
      if (!bVar5) goto label_059431ab;
      if ((TypeInfo_Characters_CharacterPrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterPrefabs);
      }
      pSVar7 = TypeInfo_Characters_CharacterPrefabs->static_fields->ArmoredShifter;
    }
  }
  position_00.fields.z = position.fields.z;
  position_00.fields.x = (float)local_38._0_4_;
  position_00.fields.y = (float)local_38._4_4_;
  UVar8.fields.z = UVar8.fields.z;
  UVar8.fields.w = UVar8.fields.w;
  UVar8.fields.x = (float)local_48._0_4_;
  UVar8.fields.y = (float)local_48._4_4_;
  pCVar6 = Characters_CharacterSpawner__Spawn(pSVar7,position_00,UVar8,(MethodInfo *)0x0);
  __this_01 = (Characters_BaseCharacter_o *)0x0;
  if (pCVar6 != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
    if (((pCVar6->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseShifter)
       ) {
      il2cpp_codegen_raise_invalid_cast_exception(pCVar6);
    }
    __this_01 = pCVar6;
  }
label_059431ab:
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar5) {
    return;
  }
  if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
  }
  pSVar7 = Characters_HumanSpecials__GetSpecialIcon(shifterName,(MethodInfo *)0x0);
  if (__this_01 != (Characters_BaseCharacter_o *)0x0) {
    __this_00 = (GameManagers_InGameManager_o *)&(*(uint32_t *)((char *)__this_01 + 0x2d0));
    *(System_String_o **)&(*(uint32_t *)((char *)__this_01 + 0x2d0)) = pSVar7;
    Il2CppCodeGenWriteBarrier((void **)__this_00);
    pSVar7 = GameManagers_InGameManager__GetPlayerTeam(__this_00,false,method_00);
    (*(code *)((Il2CppClass *)__this_01->klass)->vtable[204].methodPtr)
              (liveTime,__this_01,0,pSVar7,0,((Il2CppClass *)__this_01->klass)->vtable[204].method)
    ;
    (__this->fields).CurrentCharacter = __this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields).CurrentCharacter);
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
    if (((pSVar2 != (Settings_InGameSet_o *)0x0) &&
        (pSVar3 = (pSVar2->fields).Misc, pSVar3 != (Settings_InGameMiscSettings_o *)0x0)) &&
       (pSVar4 = (pSVar3->fields).ShifterHealth, pSVar4 != (Settings_IntSetting_o *)0x0)) {
      health = (pSVar4->fields)._value;
      if (health < 1) {
        return;
      }
      Characters_BaseCharacter__SetHealth(__this_01,health,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$GetSetHumanSettings
// il2cpp: Settings_InGameCharacterSettings_o* GameManagers_InGameManager__GetSetHumanSettings (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x59433d0

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
  
  if (Il2CppMethodInitialized_07545832 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSpecials);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_07545832 = '\x01';
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
                         (MethodInfo_395D6D0 *)MethodInfo_System_Collections_Generic_List_string_Contains);
      if (!bVar6) {
        pSVar4 = (pSVar2->fields).Loadout;
        pSVar8 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar7,0,
                            (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
        if (pSVar4 == (Settings_StringSetting_o *)0x0) goto label_059435d4;
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)pSVar8,
                   (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
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
                             (MethodInfo_395D6D0 *)MethodInfo_System_Collections_Generic_List_string_Contains)
          ;
          if (!bVar6) {
            pSVar4 = (pSVar2->fields).Special;
            if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
            }
            if (pSVar4 == (Settings_StringSetting_o *)0x0) goto label_059435d4;
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)pSVar4,
                       (Il2CppObject *)TypeInfo_Characters_HumanSpecials->static_fields->DefaultSpecial,
                       (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          }
          return TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
        }
      }
    }
  }
label_059435d4:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$SpawnPlayerAt
// il2cpp: void GameManagers_InGameManager__SpawnPlayerAt (GameManagers_InGameManager_o* __this, bool force, UnityEngine_Vector3_o position, float rotationY, const MethodInfo* method);
// 0x5941c30
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x594204e: jmp 0x59420e9
// asm:   0x5942219: jmp 0x594224d
// asm:   0x594222e: jmp 0x594224d

void GameManagers_InGameManager__SpawnPlayerAt
               (GameManagers_InGameManager_o *__this,bool force,UnityEngine_Vector3_o position,float rotationY
               ,MethodInfo *method)

{
  int32_t *piVar1;
  Characters_BaseCharacter_o **targetAddress;
  byte bVar2;
  int iVar3;
  int32_t health;
  Settings_InGameCharacterSettings_o *pSVar4;
  CustomLogic_CustomLogicEvaluator_o *pCVar5;
  Settings_StringSetting_o *pSVar6;
  Settings_InGameSet_o *pSVar7;
  Settings_IntSetting_o *pSVar8;
  Settings_InGameMiscSettings_o *pSVar9;
  Characters_BaseCharacter_o *pCVar10;
  Settings_BoolSetting_o *pSVar11;
  System_String_array *pSVar12;
  Settings_TitanCustomSettings_o *pSVar13;
  Settings_SetSettingsContainer_TitanCustomSet__o *pSVar14;
  Settings_ListSetting_T__o *__this_00;
  System_Collections_Generic_List_T__o *pSVar15;
  Settings_InGameTitanSettings_o *pSVar16;
  Settings_FloatSetting_o *pSVar17;
  Settings_FloatSetting_o *pSVar18;
  bool bVar19;
  uint uVar20;
  System_Collections_Generic_List_string__o *pSVar21;
  System_String_o *pSVar22;
  Characters_Human_o *__this_01;
  Settings_BaseSetting_o *obj;
  Settings_TitanCustomSet_o *pSVar23;
  GameManagers_InGameManager_o *pGVar24;
  System_String_o *str1;
  Characters_BasicTitan_o *__this_02;
  MethodInfo *pMVar25;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  int iVar26;
  GameManagers_InGameManager_c *pGVar27;
  GameManagers_InGameManager_o *pGVar28;
  Characters_BasicTitan_o *__this_03;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Quaternion_o UVar29;
  UnityEngine_Quaternion_o rotation;
  float local_98;
  float local_94;
  System_String_o *local_90;
  float local_78;
  UnityEngine_Vector3_o local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  if (Il2CppMethodInitialized_07545833 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerCharacter);
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
    Il2CppMethodInitialized_07545833 = '\x01';
  }
  bVar19 = (*(__this->klass->vtable)._56_IsFinishedLoading.methodPtr)
                     (__this,(__this->klass->vtable)._56_IsFinishedLoading.method);
  if (!bVar19) {
    return;
  }
  local_68.fields.x = 0.0;
  local_68.fields.y = rotationY * 0.017453292;
  local_68.fields.z = 0.0;
  UVar29 = UnityEngine_Quaternion__Internal_FromEulerRad(&local_68,(MethodInfo *)0x0);
  local_58._8_4_ = extraout_XMM0_Dc;
  local_58._0_8_ = UVar29.fields._0_8_;
  local_58._12_4_ = extraout_XMM0_Dd;
  local_48._8_4_ = in_XMM1_Dc;
  local_48._0_8_ = UVar29.fields._8_8_;
  local_48._12_4_ = in_XMM1_Dd;
  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar5 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (pCVar5 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_05942afb;
  bVar19 = System_String__op_Inequality
                     ((pCVar5->fields).ForcedCharacterType,
                      (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
  if (bVar19) {
    if (pSVar4 == (Settings_InGameCharacterSettings_o *)0x0) goto label_05942afb;
    pSVar6 = (pSVar4->fields).CharacterType;
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar5 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if ((pCVar5 == (CustomLogic_CustomLogicEvaluator_o *)0x0) || (pSVar6 == (Settings_StringSetting_o *)0x0))
    goto label_05942afb;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)(pCVar5->fields).ForcedCharacterType,
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  }
  else if (pSVar4 == (Settings_InGameCharacterSettings_o *)0x0) goto label_05942afb;
  pSVar6 = (pSVar4->fields).CharacterType;
  if (((pSVar6 == (Settings_StringSetting_o *)0x0) ||
      (pSVar7 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent,
      pSVar7 == (Settings_InGameSet_o *)0x0)) ||
     (pSVar8 = (pSVar4->fields).ChooseStatus, pSVar8 == (Settings_IntSetting_o *)0x0)) goto label_05942afb;
  if ((pSVar8->fields)._value != 2) {
    return;
  }
  local_90 = (pSVar6->fields)._value;
  pSVar9 = (pSVar7->fields).Misc;
  targetAddress = &(__this->fields).CurrentCharacter;
  pCVar10 = (__this->fields).CurrentCharacter;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar19 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pCVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pCVar10 = *targetAddress;
  if (bVar19) {
    if (pCVar10 == (Characters_BaseCharacter_o *)0x0) goto label_05942afb;
    if (((pCVar10->fields).Dead == false) && (!force)) {
      return;
    }
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar19 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pCVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar19) {
    pCVar10 = *targetAddress;
    if (pCVar10 == (Characters_BaseCharacter_o *)0x0) goto label_05942afb;
    if ((pCVar10->fields).Dead == false) {
      (*(pCVar10->klass->vtable)._98_GetKilled.methodPtr)
                (pCVar10,"",(pCVar10->klass->vtable)._98_GetKilled.method);
    }
  }
  pGVar27 = TypeInfo_GameManagers_InGameManager;
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  GameManagers_InGameManager__UpdatePlayerName((MethodInfo *)pGVar27);
  pSVar21 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar21,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    bVar19 = GameManagers_HumanLoadout__AnyAllowed((MethodInfo *)0x0);
    if (bVar19) goto label_05942067;
  }
  else {
    bVar19 = GameManagers_HumanLoadout__AnyAllowed((MethodInfo *)0x0);
    if (bVar19) {
label_05942067:
      if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
      }
      pMVar25 = MethodInfo_System_Collections_Generic_List_string_Add;
      if (pSVar21 == (System_Collections_Generic_List_string__o *)0x0) goto label_05942afb;
      pSVar22 = TypeInfo_GameManagers_PlayerCharacter->static_fields->Human;
      piVar1 = &(pSVar21->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar12 = (pSVar21->fields)._items;
      if (pSVar12 == (System_String_array *)0x0) goto label_05942afb;
      uVar20 = (pSVar21->fields)._size;
      if (uVar20 < (uint)pSVar12->max_length) {
        (pSVar21->fields)._size = uVar20 + 1;
        pSVar12->m_Items[(int)uVar20] = pSVar22;
        Il2CppCodeGenWriteBarrier(pSVar12->m_Items + (int)uVar20);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar21,(Il2CppObject *)pSVar22,
                   (MethodInfo_395D230 *)pMVar25->klass->rgctx_data[0xe].method);
      }
    }
  }
  if ((pSVar9 == (Settings_InGameMiscSettings_o *)0x0) ||
     (pSVar11 = (pSVar9->fields).AllowPlayerTitans, pSVar11 == (Settings_BoolSetting_o *)0x0))
  goto label_05942afb;
  if ((pSVar11->fields)._value != false) {
    if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
    }
    pMVar25 = MethodInfo_System_Collections_Generic_List_string_Add;
    if (pSVar21 == (System_Collections_Generic_List_string__o *)0x0) goto label_05942afb;
    pSVar22 = TypeInfo_GameManagers_PlayerCharacter->static_fields->Titan;
    piVar1 = &(pSVar21->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar12 = (pSVar21->fields)._items;
    if (pSVar12 == (System_String_array *)0x0) goto label_05942afb;
    uVar20 = (pSVar21->fields)._size;
    if (uVar20 < (uint)pSVar12->max_length) {
      (pSVar21->fields)._size = uVar20 + 1;
      pSVar12->m_Items[(int)uVar20] = pSVar22;
      Il2CppCodeGenWriteBarrier(pSVar12->m_Items + (int)uVar20);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar21,(Il2CppObject *)pSVar22,
                 (MethodInfo_395D230 *)pMVar25->klass->rgctx_data[0xe].method);
    }
  }
  pSVar11 = (pSVar9->fields).AllowShifters;
  if (pSVar11 == (Settings_BoolSetting_o *)0x0) goto label_05942afb;
  if ((pSVar11->fields)._value == false) {
    if (pSVar21 == (System_Collections_Generic_List_string__o *)0x0) goto label_05942afb;
    iVar3 = (pSVar21->fields)._size;
  }
  else {
    if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
    }
    pMVar25 = MethodInfo_System_Collections_Generic_List_string_Add;
    if (pSVar21 == (System_Collections_Generic_List_string__o *)0x0) goto label_05942afb;
    pSVar22 = TypeInfo_GameManagers_PlayerCharacter->static_fields->Shifter;
    piVar1 = &(pSVar21->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar12 = (pSVar21->fields)._items;
    if (pSVar12 == (System_String_array *)0x0) goto label_05942afb;
    uVar20 = (pSVar21->fields)._size;
    if (uVar20 < (uint)pSVar12->max_length) {
      (pSVar21->fields)._size = uVar20 + 1;
      pSVar12->m_Items[(int)uVar20] = pSVar22;
      Il2CppCodeGenWriteBarrier(pSVar12->m_Items + (int)uVar20);
      iVar3 = (pSVar21->fields)._size;
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar21,(Il2CppObject *)pSVar22,
                 (MethodInfo_395D230 *)pMVar25->klass->rgctx_data[0xe].method);
      iVar3 = (pSVar21->fields)._size;
    }
  }
  if (iVar3 == 0) {
    uVar20 = 0;
    if ((((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
      uVar20 = (pSVar21->fields)._size;
    }
    pMVar25 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar22 = TypeInfo_GameManagers_PlayerCharacter->static_fields->Human;
    piVar1 = &(pSVar21->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar12 = (pSVar21->fields)._items;
    if (pSVar12 == (System_String_array *)0x0) goto label_05942afb;
    if (uVar20 < (uint)pSVar12->max_length) {
      (pSVar21->fields)._size = uVar20 + 1;
      pSVar12->m_Items[(int)uVar20] = pSVar22;
      Il2CppCodeGenWriteBarrier(pSVar12->m_Items + (int)uVar20);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar21,(Il2CppObject *)pSVar22,
                 (MethodInfo_395D230 *)pMVar25->klass->rgctx_data[0xe].method);
    }
  }
  bVar19 = System_Collections_Generic_List_object___Contains
                     ((System_Collections_Generic_List_object__o *)pSVar21,(Il2CppObject *)local_90,
                      (MethodInfo_395D6D0 *)MethodInfo_System_Collections_Generic_List_string_Contains);
  if (!bVar19) {
    local_90 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar21,0,
                          (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
  }
  if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
  }
  bVar19 = System_String__op_Equality
                     (local_90,TypeInfo_GameManagers_PlayerCharacter->static_fields->Human,(MethodInfo *)0x0);
  if (bVar19) {
    if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    }
    pSVar21 = GameManagers_HumanLoadout__GetAllowed((MethodInfo *)0x0);
    pSVar6 = (pSVar4->fields).Loadout;
    if ((pSVar6 != (Settings_StringSetting_o *)0x0) &&
       (pSVar21 != (System_Collections_Generic_List_string__o *)0x0)) {
      bVar19 = System_Collections_Generic_List_object___Contains
                         ((System_Collections_Generic_List_object__o *)pSVar21,
                          (Il2CppObject *)(pSVar6->fields)._value,
                          (MethodInfo_395D6D0 *)MethodInfo_System_Collections_Generic_List_string_Contains);
      if (!bVar19) {
        pSVar6 = (pSVar4->fields).Loadout;
        pSVar22 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar21,0,
                             (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item)
        ;
        if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_05942afb;
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)pSVar22,
                   (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      }
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pCVar5 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if (pCVar5 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        bVar19 = System_String__op_Inequality
                           ((pCVar5->fields).ForcedLoadout,
                            (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
        if (bVar19) {
          pSVar6 = (pSVar4->fields).Loadout;
          if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          }
          pCVar5 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
          if ((pCVar5 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
             (pSVar6 == (Settings_StringSetting_o *)0x0)) goto label_05942afb;
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)(pCVar5->fields).ForcedLoadout,
                     (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        }
        pSVar6 = (pSVar4->fields).Loadout;
        if ((pSVar6 != (Settings_StringSetting_o *)0x0) &&
           (pSVar11 = (pSVar9->fields).AllowShifterSpecials, pSVar11 != (Settings_BoolSetting_o *)0x0)) {
          pSVar22 = (pSVar6->fields)._value;
          bVar19 = (pSVar11->fields)._value;
          if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
          }
          pSVar21 = Characters_HumanSpecials__GetSpecialNames(pSVar22,bVar19,(MethodInfo *)0x0);
          pSVar6 = (pSVar4->fields).Special;
          if ((pSVar6 != (Settings_StringSetting_o *)0x0) &&
             (pSVar21 != (System_Collections_Generic_List_string__o *)0x0)) {
            bVar19 = System_Collections_Generic_List_object___Contains
                               ((System_Collections_Generic_List_object__o *)pSVar21,
                                (Il2CppObject *)(pSVar6->fields)._value,
                                (MethodInfo_395D6D0 *)
                                MethodInfo_System_Collections_Generic_List_string_Contains);
            if (!bVar19) {
              pSVar6 = (pSVar4->fields).Special;
              if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
              }
              if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_05942afb;
              Settings_TypedSetting_object___set_Value
                        ((Settings_TypedSetting_T__o *)pSVar6,
                         (Il2CppObject *)TypeInfo_Characters_HumanSpecials->static_fields->DefaultSpecial,
                         (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
            }
            if ((TypeInfo_Characters_CharacterPrefabs->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterPrefabs);
            }
            pGVar24 = (GameManagers_InGameManager_o *)
                      TypeInfo_Characters_CharacterPrefabs->static_fields->Human;
            rotation.fields.z = (float)local_48._0_4_;
            rotation.fields.w = (float)local_48._4_4_;
            rotation.fields.x = (float)local_58._0_4_;
            rotation.fields.y = (float)local_58._4_4_;
            __this_01 = (Characters_Human_o *)
                        Characters_CharacterSpawner__Spawn
                                  ((System_String_o *)pGVar24,position,rotation,(MethodInfo *)0x0);
            if (__this_01 == (Characters_Human_o *)0x0) {
              GameManagers_InGameManager__GetPlayerTeam(pGVar24,false,method_00);
              ThrowNullReferenceException();
            }
            bVar2 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
            if (((__this_01->klass->_2).typeHierarchyDepth < bVar2) ||
               ((__this_01->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                (Il2CppClass *)TypeInfo_Characters_Human)) {
              il2cpp_codegen_raise_invalid_cast_exception(__this_01);
            }
            pSVar22 = GameManagers_InGameManager__GetPlayerTeam(pGVar24,false,method_00);
            Characters_Human__Init
                      (__this_01,false,pSVar22,
                       TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings,
                       (MethodInfo *)0x0);
            *targetAddress = (Characters_BaseCharacter_o *)__this_01;
            Il2CppCodeGenWriteBarrier(targetAddress);
            pSVar7 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
            if (((pSVar7 != (Settings_InGameSet_o *)0x0) &&
                (pSVar9 = (pSVar7->fields).Misc, pSVar9 != (Settings_InGameMiscSettings_o *)0x0)) &&
               (pSVar8 = (pSVar9->fields).HumanHealth, pSVar8 != (Settings_IntSetting_o *)0x0)) {
              health = (pSVar8->fields)._value;
              if (1 < health) {
                Characters_BaseCharacter__SetHealth
                          ((Characters_BaseCharacter_o *)__this_01,health,(MethodInfo *)0x0);
              }
              goto label_05942ac7;
            }
          }
        }
      }
    }
    goto label_05942afb;
  }
  if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
  }
  bVar19 = System_String__op_Equality
                     (local_90,TypeInfo_GameManagers_PlayerCharacter->static_fields->Shifter,(MethodInfo *)0x0
                     );
  if (bVar19) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar5 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if (pCVar5 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      pSVar22 = (pCVar5->fields).ForcedLoadout;
      bVar19 = System_String__op_Inequality
                         (pSVar22,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0)
      ;
      pMVar25 = extraout_RDX;
      if (bVar19) {
        pSVar6 = (pSVar4->fields).Loadout;
        if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_05942afb;
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)pSVar22,
                   (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        pMVar25 = extraout_RDX_00;
      }
      pSVar6 = (pSVar4->fields).Loadout;
      if (pSVar6 != (Settings_StringSetting_o *)0x0) {
        GameManagers_InGameManager__SpawnPlayerShifterAt
                  (__this,(pSVar6->fields)._value,0.0,position,rotationY,pMVar25);
        goto label_05942ac7;
      }
    }
    goto label_05942afb;
  }
  if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
  }
  bVar19 = System_String__op_Equality
                     (local_90,TypeInfo_GameManagers_PlayerCharacter->static_fields->Titan,(MethodInfo *)0x0);
  if (!bVar19) goto label_05942ac7;
  pSVar8 = (pSVar4->fields).CustomSet;
  if ((((pSVar8 == (Settings_IntSetting_o *)0x0) ||
       (pSVar13 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings,
       pSVar13 == (Settings_TitanCustomSettings_o *)0x0)) ||
      (pSVar14 = (pSVar13->fields).TitanCustomSets,
      pSVar14 == (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) ||
     ((__this_00 = (pSVar14->fields).Sets, __this_00 == (Settings_ListSetting_T__o *)0x0 ||
      (pSVar15 = (__this_00->fields)._value, pSVar15 == (System_Collections_Generic_List_T__o *)0x0))))
  goto label_05942afb;
  iVar3 = (pSVar8->fields)._value;
  iVar26 = (pSVar15->fields)._size;
  if (iVar3 < iVar26) {
    iVar26 = iVar3;
  }
  pSVar23 = (Settings_TitanCustomSet_o *)0x0;
  if (iVar3 < 0) {
    iVar26 = 0;
  }
  if (0 < iVar26) {
    obj = Settings_ListSetting_object___GetItemAt
                    (__this_00,iVar26 + -1,
                     (MethodInfo_515DEA0 *)MethodInfo_Settings_ListSetting_TitanCustomSet_GetItemAt);
    pSVar23 = (Settings_TitanCustomSet_o *)
              il2cpp_codegen_is_inst_class
                        ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_Settings_TitanCustomSet);
  }
  pGVar24 = (GameManagers_InGameManager_o *)
            CustomSkins_TitanSkinPicker__Pick
                      (false,(SimpleJSONFixed_JSONNode_o *)0x0,pSVar23,(MethodInfo *)0x0);
  if ((TypeInfo_Characters_CharacterPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterPrefabs);
  }
  if (pGVar24 == (GameManagers_InGameManager_o *)0x0) goto label_05942afb;
  pSVar22 = TypeInfo_Characters_CharacterPrefabs->static_fields->BasicTitanPrefix;
  str1 = System_Int32__ToString((int32_t *)&pGVar24->fields,(MethodInfo *)0x0);
  pSVar22 = System_String__Concat_52f0320(pSVar22,str1,(MethodInfo *)0x0);
  UVar29.fields.z = (float)local_48._0_4_;
  UVar29.fields.w = (float)local_48._4_4_;
  UVar29.fields.x = (float)local_58._0_4_;
  UVar29.fields.y = (float)local_58._4_4_;
  __this_02 = (Characters_BasicTitan_o *)
              Characters_CharacterSpawner__Spawn(pSVar22,position,UVar29,(MethodInfo *)0x0);
  if (__this_02 == (Characters_BasicTitan_o *)0x0) {
    if (pSVar23 == (Settings_TitanCustomSet_o *)0x0) goto label_05942afb;
label_059428c1:
    pGVar28 = pGVar24;
    pSVar23 = CustomSkins_TitanSkinSelection__ApplyTo
                        ((CustomSkins_TitanSkinSelection_o *)pGVar24,pSVar23,(MethodInfo *)0x0);
    pSVar22 = GameManagers_InGameManager__GetPlayerTeam(pGVar28,true,method_02);
    if (__this_02 == (Characters_BasicTitan_o *)0x0) goto label_05942afb;
  }
  else {
    bVar2 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
    if (((__this_02->klass->_2).typeHierarchyDepth < bVar2) ||
       ((__this_02->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_Characters_BasicTitan)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_02);
    }
    if (pSVar23 != (Settings_TitanCustomSet_o *)0x0) goto label_059428c1;
    pGVar28 = pGVar24;
    pSVar23 = CustomSkins_TitanSkinSelection__CreateSet
                        ((CustomSkins_TitanSkinSelection_o *)pGVar24,(__this_02->fields).Setup,
                         (MethodInfo *)0x0);
    pSVar22 = GameManagers_InGameManager__GetPlayerTeam(pGVar28,true,method_01);
  }
  pMVar25 = (MethodInfo *)0x0;
  __this_03 = __this_02;
  Characters_BasicTitan__Init
            (__this_02,false,pSVar22,(SimpleJSONFixed_JSONNode_o *)0x0,pSVar23,
             *(int32_t *)&(pGVar24->fields)._skyboxCustomSkinLoader,(MethodInfo *)0x0);
  GameManagers_InGameManager__SetupTitan((GameManagers_InGameManager_o *)__this_03,__this_02,false,pMVar25);
  pSVar7 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar7 == (Settings_InGameSet_o *)0x0) ||
      (pSVar16 = (pSVar7->fields).Titan, pSVar16 == (Settings_InGameTitanSettings_o *)0x0)) ||
     (pSVar11 = (pSVar16->fields).TitanSizeEnabled, pSVar11 == (Settings_BoolSetting_o *)0x0)) {
label_05942afb:
    ThrowNullReferenceException();
  }
  if ((pSVar11->fields)._value == false) {
    local_98 = 1.0;
    local_94 = 2.0;
    local_78 = 3.0;
  }
  else {
    pSVar17 = (pSVar16->fields).TitanSizeMin;
    if ((pSVar17 == (Settings_FloatSetting_o *)0x0) ||
       (pSVar18 = (pSVar16->fields).TitanSizeMax, pSVar18 == (Settings_FloatSetting_o *)0x0))
    goto label_05942afb;
    local_98 = (pSVar17->fields)._value;
    local_78 = (pSVar18->fields)._value;
    if (local_78 <= local_98) {
      local_98 = local_78;
    }
    local_94 = (local_78 + local_98) * 0.5;
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar5 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (pCVar5 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_05942afb;
  pSVar22 = (pCVar5->fields).ForcedLoadout;
  bVar19 = System_String__op_Inequality
                     (pSVar22,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
  if (bVar19) {
    pSVar6 = (pSVar4->fields).Loadout;
    if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_05942afb;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)pSVar22,
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  }
  pSVar6 = (pSVar4->fields).Loadout;
  if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_05942afb;
  pSVar22 = (pSVar6->fields)._value;
  bVar19 = System_String__op_Equality(pSVar22,"Small",(MethodInfo *)0x0);
  if (bVar19) {
label_05942aa7:
    Characters_BaseTitan__SetSize((Characters_BaseTitan_o *)__this_02,local_98,(MethodInfo *)0x0);
  }
  else {
    bVar19 = System_String__op_Equality(pSVar22,"Medium",(MethodInfo *)0x0);
    local_98 = local_94;
    if (bVar19) goto label_05942aa7;
    bVar19 = System_String__op_Equality(pSVar22,"Large",(MethodInfo *)0x0);
    local_98 = local_78;
    if (bVar19) goto label_05942aa7;
  }
  *targetAddress = (Characters_BaseCharacter_o *)__this_02;
  Il2CppCodeGenWriteBarrier(targetAddress);
label_05942ac7:
  (__this->fields).HasSpawned = true;
  pGVar27 = TypeInfo_GameManagers_InGameManager;
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  GameManagers_InGameManager__UpdateRoundPlayerProperties((MethodInfo *)pGVar27);
  return;
}


// GameManagers.InGameManager$$GetHumanSpawnPoint
// il2cpp: System_ValueTuple_Vector3__Quaternion__o GameManagers_InGameManager__GetHumanSpawnPoint (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x5942b20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5942dea: jmp 0x5942c8e

System_ValueTuple_Vector3__Quaternion__o *
GameManagers_InGameManager__GetHumanSpawnPoint
          (System_ValueTuple_Vector3__Quaternion__o *__return_storage_ptr__,
          GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint32_t uVar3;
  Settings_InGameSet_o *pSVar4;
  Settings_InGameMiscSettings_o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  Settings_InGameCharacterSettings_o *pSVar7;
  Settings_StringSetting_o *pSVar8;
  System_String_o *a;
  UnityEngine_Vector3_StaticFields *pUVar9;
  UnityEngine_Quaternion_StaticFields *pUVar10;
  System_Collections_Generic_List_string__o *tags;
  undefined1 auVar11 [16];
  bool bVar12;
  System_Collections_Generic_List_string__o **ppSVar13;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined8 uVar14;
  undefined8 uVar15;
  UnityEngine_Quaternion_o UVar16;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Transform_o *local_40;
  undefined1 local_38 [16];
  
  if (Il2CppMethodInitialized_07545834 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_ValueTuple_Vector3_Quaternion_ctor);
    Il2CppMethodInitialized_07545834 = '\x01';
  }
  local_40 = (UnityEngine_Transform_o *)0x0;
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar4 != (Settings_InGameSet_o *)0x0) &&
      (pSVar5 = (pSVar4->fields).Misc, pSVar5 != (Settings_InGameMiscSettings_o *)0x0)) &&
     (pSVar6 = (pSVar5->fields).PVP, pSVar6 != (Settings_IntSetting_o *)0x0)) {
    if ((pSVar6->fields)._value == 2) {
      pSVar7 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
      if ((pSVar7 == (Settings_InGameCharacterSettings_o *)0x0) ||
         (pSVar8 = (pSVar7->fields).Team, pSVar8 == (Settings_StringSetting_o *)0x0)) goto label_05942def;
      a = (pSVar8->fields)._value;
      if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
      }
      bVar12 = System_String__op_Equality
                         (a,TypeInfo_GameManagers_TeamInfo->static_fields->Blue,(MethodInfo *)0x0);
      uVar3 = (TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor;
      if (bVar12) {
        if (uVar3 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
        }
        ppSVar13 = &TypeInfo_GameManagers_InGameManager->static_fields->BlueSpawnTags;
      }
      else {
        if (uVar3 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
        }
        ppSVar13 = &TypeInfo_GameManagers_InGameManager->static_fields->RedSpawnTags;
      }
      tags = *ppSVar13;
      uVar3 = (TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      tags = TypeInfo_GameManagers_InGameManager->static_fields->HumanSpawnTags;
      uVar3 = (TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
    }
    bVar12 = Map_MapManager__TryGetRandomTagsXform(tags,&local_40,(MethodInfo *)0x0);
    if (!bVar12) {
      if (Il2CppMethodInitialized_0753e4b6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e4b6 = '\x01';
      }
      auVar11 = local_38;
      pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar1 = (pUVar9->zeroVector).fields.x;
      uVar2 = (pUVar9->zeroVector).fields.y;
      local_38._4_4_ = uVar2;
      local_38._0_4_ = uVar1;
      UVar17.fields.z = (pUVar9->zeroVector).fields.z;
      if (Il2CppMethodInitialized_0753e72b == '\0') {
        local_38._8_8_ = 0;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
        Il2CppMethodInitialized_0753e72b = '\x01';
        uVar1 = local_38._0_4_;
        uVar2 = local_38._4_4_;
        auVar11 = local_38;
      }
      local_38 = auVar11;
      pUVar10 = TypeInfo_UnityEngine_Quaternion->static_fields;
      uVar14._0_4_ = (pUVar10->identityQuaternion).fields.x;
      uVar14._4_4_ = (pUVar10->identityQuaternion).fields.y;
      uVar15._0_4_ = (pUVar10->identityQuaternion).fields.z;
      uVar15._4_4_ = (pUVar10->identityQuaternion).fields.w;
      (__return_storage_ptr__->fields).Item2.fields.x = 0.0;
      (__return_storage_ptr__->fields).Item2.fields.y = 0.0;
      (__return_storage_ptr__->fields).Item2.fields.z = 0.0;
      (__return_storage_ptr__->fields).Item2.fields.w = 0.0;
      (__return_storage_ptr__->fields).Item1.fields.x = 0.0;
      (__return_storage_ptr__->fields).Item1.fields.y = 0.0;
      *(undefined8 *)&(__return_storage_ptr__->fields).Item1.fields.z = 0;
label_05942da5:
      UVar16.fields.z = (float)(int)uVar15;
      UVar16.fields.w = (float)(int)((ulong)uVar15 >> 0x20);
      UVar16.fields.x = (float)(int)uVar14;
      UVar16.fields.y = (float)(int)((ulong)uVar14 >> 0x20);
      UVar17.fields.y = (float)uVar2;
      UVar17.fields.x = (float)uVar1;
      UVar17.fields.z = UVar17.fields.z;
      System_ValueTuple_Vector3__Quaternion____ctor
                (__return_storage_ptr__,UVar17,UVar16,
                 (MethodInfo_45448C0 *)MethodInfo_System_ValueTuple_Vector3_Quaternion_ctor);
      return __return_storage_ptr__;
    }
    if (local_40 != (UnityEngine_Transform_o *)0x0) {
      UVar17 = UnityEngine_Transform__get_position(local_40,(MethodInfo *)0x0);
      UVar17.fields.z = UVar17.fields.z;
      local_38._8_4_ = extraout_XMM0_Dc;
      local_38._0_8_ = UVar17.fields._0_8_;
      local_38._12_4_ = extraout_XMM0_Dd;
      if (local_40 != (UnityEngine_Transform_o *)0x0) {
        UVar16 = UnityEngine_Transform__get_rotation(local_40,(MethodInfo *)0x0);
        uVar14 = UVar16.fields._0_8_;
        uVar15 = UVar16.fields._8_8_;
        (__return_storage_ptr__->fields).Item1.fields.x = 0.0;
        (__return_storage_ptr__->fields).Item1.fields.y = 0.0;
        *(undefined8 *)&(__return_storage_ptr__->fields).Item1.fields.z = 0;
        (__return_storage_ptr__->fields).Item2.fields.x = 0.0;
        (__return_storage_ptr__->fields).Item2.fields.y = 0.0;
        (__return_storage_ptr__->fields).Item2.fields.z = 0.0;
        (__return_storage_ptr__->fields).Item2.fields.w = 0.0;
        uVar1 = local_38._0_4_;
        uVar2 = local_38._4_4_;
        goto label_05942da5;
      }
    }
  }
label_05942def:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$GetTitanSpawnPoint
// il2cpp: System_ValueTuple_Vector3__Quaternion__o GameManagers_InGameManager__GetTitanSpawnPoint (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x5942e00

System_ValueTuple_Vector3__Quaternion__o *
GameManagers_InGameManager__GetTitanSpawnPoint
          (System_ValueTuple_Vector3__Quaternion__o *__return_storage_ptr__,
          GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  System_String_o *tag;
  UnityEngine_Vector3_StaticFields *pUVar3;
  UnityEngine_Quaternion_StaticFields *pUVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined8 uVar7;
  undefined8 uVar8;
  UnityEngine_Quaternion_o UVar9;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Transform_o *local_30;
  undefined1 local_28 [16];
  
  if (Il2CppMethodInitialized_07545835 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTags);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_ValueTuple_Vector3_Quaternion_ctor);
    Il2CppMethodInitialized_07545835 = '\x01';
  }
  local_30 = (UnityEngine_Transform_o *)0x0;
  if ((TypeInfo_Map_MapTags->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTags);
  }
  tag = TypeInfo_Map_MapTags->static_fields->TitanSpawnPoint;
  if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
  }
  bVar6 = Map_MapManager__TryGetRandomTagXform(tag,&local_30,(MethodInfo *)0x0);
  if (bVar6) {
    if (local_30 != (UnityEngine_Transform_o *)0x0) {
      UVar10 = UnityEngine_Transform__get_position(local_30,(MethodInfo *)0x0);
      UVar10.fields.z = UVar10.fields.z;
      local_28._8_4_ = extraout_XMM0_Dc;
      local_28._0_8_ = UVar10.fields._0_8_;
      local_28._12_4_ = extraout_XMM0_Dd;
      if (local_30 != (UnityEngine_Transform_o *)0x0) {
        UVar9 = UnityEngine_Transform__get_rotation(local_30,(MethodInfo *)0x0);
        uVar7 = UVar9.fields._0_8_;
        uVar8 = UVar9.fields._8_8_;
        (__return_storage_ptr__->fields).Item1.fields.x = 0.0;
        (__return_storage_ptr__->fields).Item1.fields.y = 0.0;
        *(undefined8 *)&(__return_storage_ptr__->fields).Item1.fields.z = 0;
        (__return_storage_ptr__->fields).Item2.fields.x = 0.0;
        (__return_storage_ptr__->fields).Item2.fields.y = 0.0;
        (__return_storage_ptr__->fields).Item2.fields.z = 0.0;
        (__return_storage_ptr__->fields).Item2.fields.w = 0.0;
        uVar1 = local_28._0_4_;
        uVar2 = local_28._4_4_;
        goto label_05942f97;
      }
    }
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  auVar5 = local_28;
  pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar1 = (pUVar3->zeroVector).fields.x;
  uVar2 = (pUVar3->zeroVector).fields.y;
  local_28._4_4_ = uVar2;
  local_28._0_4_ = uVar1;
  UVar10.fields.z = (pUVar3->zeroVector).fields.z;
  if (Il2CppMethodInitialized_0753e72b == '\0') {
    local_28._8_8_ = 0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_0753e72b = '\x01';
    uVar1 = local_28._0_4_;
    uVar2 = local_28._4_4_;
    auVar5 = local_28;
  }
  local_28 = auVar5;
  pUVar4 = TypeInfo_UnityEngine_Quaternion->static_fields;
  uVar7._0_4_ = (pUVar4->identityQuaternion).fields.x;
  uVar7._4_4_ = (pUVar4->identityQuaternion).fields.y;
  uVar8._0_4_ = (pUVar4->identityQuaternion).fields.z;
  uVar8._4_4_ = (pUVar4->identityQuaternion).fields.w;
  (__return_storage_ptr__->fields).Item2.fields.x = 0.0;
  (__return_storage_ptr__->fields).Item2.fields.y = 0.0;
  (__return_storage_ptr__->fields).Item2.fields.z = 0.0;
  (__return_storage_ptr__->fields).Item2.fields.w = 0.0;
  (__return_storage_ptr__->fields).Item1.fields.x = 0.0;
  (__return_storage_ptr__->fields).Item1.fields.y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->fields).Item1.fields.z = 0;
label_05942f97:
  UVar9.fields.z = (float)(int)uVar8;
  UVar9.fields.w = (float)(int)((ulong)uVar8 >> 0x20);
  UVar9.fields.x = (float)(int)uVar7;
  UVar9.fields.y = (float)(int)((ulong)uVar7 >> 0x20);
  UVar10.fields.y = (float)uVar2;
  UVar10.fields.x = (float)uVar1;
  UVar10.fields.z = UVar10.fields.z;
  System_ValueTuple_Vector3__Quaternion____ctor
            (__return_storage_ptr__,UVar10,UVar9,
             (MethodInfo_45448C0 *)MethodInfo_System_ValueTuple_Vector3_Quaternion_ctor);
  return __return_storage_ptr__;
}


// GameManagers.InGameManager$$GetPlayerTeam
// il2cpp: System_String_o* GameManagers_InGameManager__GetPlayerTeam (GameManagers_InGameManager_o* __this, bool titan, const MethodInfo* method);
// 0x59432c0

System_String_o *
GameManagers_InGameManager__GetPlayerTeam(GameManagers_InGameManager_o *__this,bool titan,MethodInfo *method)

{
  int iVar1;
  uint32_t uVar2;
  Settings_InGameSet_o *pSVar3;
  Settings_InGameMiscSettings_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  Settings_InGameCharacterSettings_o *pSVar6;
  Settings_StringSetting_o *pSVar7;
  System_String_o **ppSVar8;
  
  if (Il2CppMethodInitialized_07545836 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07545836 = '\x01';
  }
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar3 == (Settings_InGameSet_o *)0x0) ||
      (pSVar4 = (pSVar3->fields).Misc, pSVar4 == (Settings_InGameMiscSettings_o *)0x0)) ||
     (pSVar5 = (pSVar4->fields).PVP, pSVar5 == (Settings_IntSetting_o *)0x0)) {
label_05943351:
    ThrowNullReferenceException();
  }
  iVar1 = (pSVar5->fields)._value;
  if (iVar1 == 1) {
    if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    }
    ppSVar8 = &TypeInfo_GameManagers_TeamInfo->static_fields->None;
  }
  else {
    if (iVar1 == 2) {
      pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
      if ((pSVar6 == (Settings_InGameCharacterSettings_o *)0x0) ||
         (pSVar7 = (pSVar6->fields).Team, pSVar7 == (Settings_StringSetting_o *)0x0)) goto label_05943351;
    }
    else {
      uVar2 = (TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor;
      if (titan) {
        if (uVar2 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
        }
        ppSVar8 = &TypeInfo_GameManagers_TeamInfo->static_fields->Titan;
        goto label_059433c2;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
      }
      pSVar7 = (Settings_StringSetting_o *)TypeInfo_GameManagers_TeamInfo->static_fields;
    }
    ppSVar8 = &(pSVar7->fields)._value;
  }
label_059433c2:
  return *ppSVar8;
}


// GameManagers.InGameManager$$SpawnAITitan
// il2cpp: Characters_BasicTitan_o* GameManagers_InGameManager__SpawnAITitan (GameManagers_InGameManager_o* __this, System_String_o* type, const MethodInfo* method);
// 0x5943d00

Characters_BasicTitan_o *
GameManagers_InGameManager__SpawnAITitan
          (GameManagers_InGameManager_o *__this,System_String_o *type,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  MethodInfo *method_00;
  GameManagers_InGameManager_o *__this_00;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o position;
  UnityEngine_Quaternion_o UStack_4c;
  undefined1 local_38 [16];
  System_ValueTuple_Vector3__Quaternion__o local_28;
  
  GameManagers_InGameManager__GetTitanSpawnPoint(&local_28,(GameManagers_InGameManager_o *)type,method);
  UStack_4c.fields.z = local_28.fields.Item2.fields.z;
  UStack_4c.fields.w = local_28.fields.Item2.fields.w;
  local_38._0_4_ = local_28.fields.Item1.fields.x;
  local_38._4_4_ = local_28.fields.Item1.fields.y;
  local_38._8_8_ = 0;
  UVar2 = UnityEngine_Quaternion__Internal_ToEulerRad(&UStack_4c,(MethodInfo *)0x0);
  euler.fields.x = UVar2.fields.x * 57.29578;
  euler.fields.y = UVar2.fields.y * 57.29578;
  euler.fields.z = UVar2.fields.z * 57.29578;
  __this_00 = (GameManagers_InGameManager_o *)0x0;
  UVar2 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
  position.fields.z = local_28.fields.Item1.fields.z;
  position.fields.x = (float)local_38._0_4_;
  position.fields.y = (float)local_38._4_4_;
  pCVar1 = GameManagers_InGameManager__SpawnAITitanAt(__this_00,type,position,UVar2.fields.y,method_00);
  return pCVar1;
}


// GameManagers.InGameManager$$SpawnAITitans
// il2cpp: System_Collections_Generic_IEnumerable_BasicTitan__o* GameManagers_InGameManager__SpawnAITitans (GameManagers_InGameManager_o* __this, System_String_o* type, int32_t count, const MethodInfo* method);
// 0x59442f0

System_Collections_Generic_IEnumerable_BasicTitan__o *
GameManagers_InGameManager__SpawnAITitans
          (GameManagers_InGameManager_o *__this,System_String_o *type,int32_t count,MethodInfo *method)

{
  GameManagers_InGameManager___c__DisplayClass86_0_o *__this_00;
  System_Collections_Generic_IEnumerable_ValueTuple_Vector3__Quaternion___o *source;
  System_Func_T__TResult__o *__this_01;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545837 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Select_ValueTuple_Vector3_Quaternion_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_ValueTuple_Vector3_Quaternion_BasicTitan)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_InGameManager_c__DisplayClass86_0_SpawnAITitans_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager_c__DisplayClass86_0);
    Il2CppMethodInitialized_07545837 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameManagers_InGameManager_c__DisplayClass86_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (GameManagers_InGameManager___c__DisplayClass86_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).type = type;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).type);
  source = GameManagers_InGameManager__GetTitanSpawnPositions(__this,count,method_00);
  __this_01 = (System_Func_T__TResult__o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Func_ValueTuple_Vector3_Quaternion_BasicTitan);
  System_Func_ValueTuple_Vector3__Quaternion___object____ctor
            (__this_01,(Il2CppObject *)__this_00,
             (intptr_t)MethodInfo_GameManagers_InGameManager_c__DisplayClass86_0_SpawnAITitans_b__0,
             (MethodInfo_4F11340 *)0x0);
  pSVar1 = System_Linq_Enumerable__Select_ValueTuple_Vector3__Quaternion___object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (System_Func_TSource__TResult__o *)__this_01,
                      (MethodInfo_34F3F80 *)
                      MethodInfo_System_Linq_Enumerable_Select_ValueTuple_Vector3_Quaternion_BasicTitan);
  return (System_Collections_Generic_IEnumerable_BasicTitan__o *)pSVar1;
}


// GameManagers.InGameManager$$SpawnAITitansAsync
// il2cpp: void GameManagers_InGameManager__SpawnAITitansAsync (GameManagers_InGameManager_o* __this, System_String_o* type, int32_t count, const MethodInfo* method);
// 0x59447c0

void GameManagers_InGameManager__SpawnAITitansAsync
               (GameManagers_InGameManager_o *__this,System_String_o *type,int32_t count,MethodInfo *method)

{
  GameManagers_InGameManager__SpawnAITitansCoroutine_d__88_o *__this_00;
  
  if (Il2CppMethodInitialized_07545838 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_GameManagers_InGameManager_SpawnAITitansCoroutine_d__88);
    Il2CppMethodInitialized_07545838 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameManagers_InGameManager_SpawnAITitansCoroutine_d__88);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).type = type;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).type);
  (__this_00->fields).count = count;
  UnityEngine_MonoBehaviour__StartCoroutine_691c390
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// GameManagers.InGameManager$$SpawnAITitansCoroutine
// il2cpp: System_Collections_IEnumerator_o* GameManagers_InGameManager__SpawnAITitansCoroutine (GameManagers_InGameManager_o* __this, System_String_o* type, int32_t count, const MethodInfo* method);
// 0x5944850

System_Collections_IEnumerator_o *
GameManagers_InGameManager__SpawnAITitansCoroutine
          (GameManagers_InGameManager_o *__this,System_String_o *type,int32_t count,MethodInfo *method)

{
  GameManagers_InGameManager__SpawnAITitansCoroutine_d__88_o *__this_00;
  
  if (Il2CppMethodInitialized_07545838 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_GameManagers_InGameManager_SpawnAITitansCoroutine_d__88);
    Il2CppMethodInitialized_07545838 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameManagers_InGameManager_SpawnAITitansCoroutine_d__88);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).type = type;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).type);
  (__this_00->fields).count = count;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// GameManagers.InGameManager$$SpawnAITitansAtAsync
// il2cpp: void GameManagers_InGameManager__SpawnAITitansAtAsync (GameManagers_InGameManager_o* __this, System_String_o* type, int32_t count, UnityEngine_Vector3_o position, float rotationY, const MethodInfo* method);
// 0x5944900

void GameManagers_InGameManager__SpawnAITitansAtAsync
               (GameManagers_InGameManager_o *__this,System_String_o *type,int32_t count,
               UnityEngine_Vector3_o position,float rotationY,MethodInfo *method)

{
  GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__90_o *__this_00;
  
  if (Il2CppMethodInitialized_07545839 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_GameManagers_InGameManager_SpawnAITitansAtCoroutine_d__90);
    Il2CppMethodInitialized_07545839 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameManagers_InGameManager_SpawnAITitansAtCoroutine_d__90);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).type = type;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).type);
  (__this_00->fields).count = count;
  (__this_00->fields).position.fields.x = position.fields.x;
  (__this_00->fields).position.fields.y = position.fields.y;
  (__this_00->fields).position.fields.z = position.fields.z;
  (__this_00->fields).rotationY = rotationY;
  UnityEngine_MonoBehaviour__StartCoroutine_691c390
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// GameManagers.InGameManager$$SpawnAITitansAtCoroutine
// il2cpp: System_Collections_IEnumerator_o* GameManagers_InGameManager__SpawnAITitansAtCoroutine (GameManagers_InGameManager_o* __this, System_String_o* type, int32_t count, UnityEngine_Vector3_o position, float rotationY, const MethodInfo* method);
// 0x59449c0

System_Collections_IEnumerator_o *
GameManagers_InGameManager__SpawnAITitansAtCoroutine
          (GameManagers_InGameManager_o *__this,System_String_o *type,int32_t count,
          UnityEngine_Vector3_o position,float rotationY,MethodInfo *method)

{
  GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__90_o *__this_00;
  
  if (Il2CppMethodInitialized_07545839 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_GameManagers_InGameManager_SpawnAITitansAtCoroutine_d__90);
    Il2CppMethodInitialized_07545839 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameManagers_InGameManager_SpawnAITitansAtCoroutine_d__90);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).type = type;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).type);
  (__this_00->fields).count = count;
  (__this_00->fields).position.fields.x = position.fields.x;
  (__this_00->fields).position.fields.y = position.fields.y;
  (__this_00->fields).position.fields.z = position.fields.z;
  (__this_00->fields).rotationY = rotationY;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// GameManagers.InGameManager$$GetTitanSpawnPositions
// il2cpp: System_Collections_Generic_IEnumerable_ValueTuple_Vector3__Quaternion___o* GameManagers_InGameManager__GetTitanSpawnPositions (GameManagers_InGameManager_o* __this, int32_t count, const MethodInfo* method);
// 0x59443f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x594464c: jmp 0x5944736

System_Collections_Generic_IEnumerable_ValueTuple_Vector3__Quaternion___o *
GameManagers_InGameManager__GetTitanSpawnPositions
          (GameManagers_InGameManager_o *__this,int32_t count,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  Characters_BaseCharacter_o *pCVar4;
  System_Collections_Generic_HashSet_Human__o *pSVar5;
  Utility_BaseComponentCache_o *pUVar6;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar7;
  System_String_o *tag;
  Il2CppObject *object;
  System_ValueTuple_Vector3__Quaternion__o element;
  UnityEngine_Vector3_Fields item1;
  System_Collections_Generic_List_Transform__o *source;
  bool bVar8;
  GameManagers_InGameManager___c_StaticFields *pGVar9;
  System_Func_T__TResult__o *__this_01;
  System_Collections_Generic_IEnumerable_ValueTuple_Vector3__Quaternion___o *pSVar10;
  float avoidRadius;
  UnityEngine_Vector3_o UVar11;
  System_Collections_Generic_List_Transform__o *local_50;
  System_ValueTuple_Vector3__Quaternion__o local_48;
  
  if (Il2CppMethodInitialized_0754583a == '\0') {
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
              (&MethodInfo_GameManagers_InGameManager_c_GetTitanSpawnPositions_b__91_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager_c);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_ValueTuple_Vector3_Quaternion_ctor);
    Il2CppMethodInitialized_0754583a = '\x01';
  }
  local_50 = (System_Collections_Generic_List_Transform__o *)0x0;
  pCVar4 = (__this->fields).CurrentCharacter;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar8) && (pCVar4 = (__this->fields).CurrentCharacter, pCVar4 != (Characters_BaseCharacter_o *)0x0)) {
    bVar3 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if ((bVar3 <= (pCVar4->klass->_2).typeHierarchyDepth) &&
       ((pCVar4->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) {
      pSVar5 = (__this->fields).Humans;
      if (pSVar5 == (System_Collections_Generic_HashSet_Human__o *)0x0) {
label_059447b7:
        ThrowNullReferenceException();
      }
      if ((pSVar5->fields)._count == 1) {
        pUVar6 = (pCVar4->fields).Cache;
        if ((pUVar6 == (Utility_BaseComponentCache_o *)0x0) ||
           (__this_00 = (pUVar6->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0))
        goto label_059447b7;
        UVar11 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
        UVar11.fields.z = UVar11.fields.z;
        fVar1 = UVar11.fields.x;
        fVar2 = UVar11.fields.y;
        avoidRadius = 100.0;
        goto label_05944584;
      }
    }
  }
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
  UVar11.fields.z = (pUVar7->zeroVector).fields.z;
  fVar1 = (pUVar7->zeroVector).fields.x;
  fVar2 = (pUVar7->zeroVector).fields.y;
  avoidRadius = 0.0;
label_05944584:
  if ((TypeInfo_Map_MapTags->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTags);
  }
  tag = TypeInfo_Map_MapTags->static_fields->TitanSpawnPoint;
  if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
  }
  UVar11.fields.y = fVar2;
  UVar11.fields.x = fVar1;
  UVar11.fields.z = UVar11.fields.z;
  bVar8 = Map_MapManager__TryGetRandomTagXforms(tag,UVar11,avoidRadius,count,&local_50,(MethodInfo *)0x0);
  source = local_50;
  if (bVar8) {
    if ((TypeInfo_GameManagers_InGameManager_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager_c);
      pGVar9 = TypeInfo_GameManagers_InGameManager_c->static_fields;
      __this_01 = (System_Func_T__TResult__o *)pGVar9->__9__91_0;
    }
    else {
      pGVar9 = TypeInfo_GameManagers_InGameManager_c->static_fields;
      __this_01 = (System_Func_T__TResult__o *)pGVar9->__9__91_0;
    }
    if (__this_01 == (System_Func_T__TResult__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_GameManagers_InGameManager_c)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager_c);
        pGVar9 = TypeInfo_GameManagers_InGameManager_c->static_fields;
      }
      object = (Il2CppObject *)pGVar9->__9;
      __this_01 = (System_Func_T__TResult__o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_Transform_ValueTuple_Vector3_Quaternion);
      System_Func_object__ValueTuple_Vector3__Quaternion_____ctor
                (__this_01,object,
                 (intptr_t)MethodInfo_GameManagers_InGameManager_c_GetTitanSpawnPositions_b__91_0,
                 (MethodInfo_4F18AB0 *)0x0);
      pGVar9 = TypeInfo_GameManagers_InGameManager_c->static_fields;
      pGVar9->__9__91_0 = (System_Func_Transform__ValueTuple_Vector3__Quaternion___o *)__this_01;
      Il2CppCodeGenWriteBarrier(&pGVar9->__9__91_0);
    }
    pSVar10 = (System_Collections_Generic_IEnumerable_ValueTuple_Vector3__Quaternion___o *)
              System_Linq_Enumerable__Select_object__ValueTuple_Vector3__Quaternion__
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__TResult__o *)__this_01,
                         (MethodInfo_34F51F0 *)
                         MethodInfo_System_Linq_Enumerable_Select_Transform_ValueTuple_Vector3_Quaternion);
  }
  else {
    if (Il2CppMethodInitialized_0753e4b6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b6 = '\x01';
    }
    item1 = (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields;
    if (Il2CppMethodInitialized_0753e72b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
      Il2CppMethodInitialized_0753e72b = '\x01';
    }
    local_48.fields.Item2.fields.y = 0.0;
    local_48.fields.Item2.fields.z = 0.0;
    local_48.fields.Item2.fields.w = 0.0;
    local_48.fields.Item1.fields.x = 0.0;
    local_48.fields.Item1.fields.y = 0.0;
    local_48.fields.Item1.fields.z = 0.0;
    local_48.fields.Item2.fields.x = 0.0;
    System_ValueTuple_Vector3__Quaternion____ctor
              (&local_48,(UnityEngine_Vector3_o)item1,
               (UnityEngine_Quaternion_o)
               *(UnityEngine_Quaternion_Fields *)TypeInfo_UnityEngine_Quaternion->static_fields,
               (MethodInfo_45448C0 *)MethodInfo_System_ValueTuple_Vector3_Quaternion_ctor);
    element.fields.Item1.fields.z = local_48.fields.Item1.fields.z;
    element.fields.Item1.fields.x = local_48.fields.Item1.fields.x;
    element.fields.Item1.fields.y = local_48.fields.Item1.fields.y;
    element.fields.Item2.fields.x = local_48.fields.Item2.fields.x;
    element.fields.Item2.fields.y = local_48.fields.Item2.fields.y;
    element.fields.Item2.fields.z = local_48.fields.Item2.fields.z;
    element.fields.Item2.fields.w = local_48.fields.Item2.fields.w;
    pSVar10 = (System_Collections_Generic_IEnumerable_ValueTuple_Vector3__Quaternion___o *)
              System_Linq_Enumerable__Repeat_ValueTuple_Vector3__Quaternion__
                        (element,count,
                         (MethodInfo_34F2690 *)
                         MethodInfo_System_Linq_Enumerable_Repeat_ValueTuple_Vector3_Quaternion);
  }
  return pSVar10;
}


// GameManagers.InGameManager$$SpawnAITitanAt
// il2cpp: Characters_BasicTitan_o* GameManagers_InGameManager__SpawnAITitanAt (GameManagers_InGameManager_o* __this, System_String_o* type, UnityEngine_Vector3_o position, float rotationY, const MethodInfo* method);
// 0x5943d80

Characters_BasicTitan_o *
GameManagers_InGameManager__SpawnAITitanAt
          (GameManagers_InGameManager_o *__this,System_String_o *type,UnityEngine_Vector3_o position,
          float rotationY,MethodInfo *method)

{
  byte bVar1;
  int32_t difficulty;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameTitanSettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  Settings_FloatSetting_o *pSVar5;
  Settings_FloatSetting_o *pSVar6;
  Settings_FloatSetting_o *pSVar7;
  Settings_FloatSetting_o *pSVar8;
  Settings_FloatSetting_o *pSVar9;
  Settings_FloatSetting_o *pSVar10;
  Settings_InGameGeneralSettings_o *pSVar11;
  Settings_IntSetting_o *pSVar12;
  bool bVar13;
  uint uVar14;
  System_String_o **ppSVar15;
  Il2CppObject *pIVar16;
  MethodInfo *method_00;
  CustomSkins_TitanSkinSelection_o *__this_00;
  System_String_o *str1;
  System_String_o *pSVar17;
  Characters_BasicTitan_o *__this_01;
  Settings_TitanCustomSet_o *customSet;
  Characters_BasicTitan_o *__this_02;
  float fVar18;
  undefined4 in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  float fVar19;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Quaternion_o UVar20;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  position_00.fields.z = position.fields.z;
  local_38._8_4_ = in_XMM0_Dc;
  local_38._0_8_ = position.fields._0_8_;
  local_38._12_4_ = in_XMM0_Dd;
  if (g_data_0754583b == '\0') {
    local_58._0_4_ = rotationY;
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
    g_data_0754583b = '\x01';
    rotationY = (float)local_58._0_4_;
  }
  local_68.fields.x = 0.0;
  local_68.fields.y = rotationY * 0.017453292;
  local_68.fields.z = 0.0;
  UVar20 = UnityEngine_Quaternion__Internal_FromEulerRad(&local_68,(MethodInfo *)0x0);
  local_58._8_4_ = extraout_XMM0_Dc;
  local_58._0_8_ = UVar20.fields._0_8_;
  local_58._12_4_ = extraout_XMM0_Dd;
  local_48._8_4_ = in_XMM1_Dc;
  local_48._0_8_ = UVar20.fields._8_8_;
  local_48._12_4_ = in_XMM1_Dd;
  bVar13 = System_String__op_Equality(type,"Default",(MethodInfo *)0x0);
  if (bVar13) {
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
    if (((pSVar2 == (Settings_InGameSet_o *)0x0) ||
        (pSVar3 = (pSVar2->fields).Titan, pSVar3 == (Settings_InGameTitanSettings_o *)0x0)) ||
       (pSVar4 = (pSVar3->fields).TitanSpawnEnabled, pSVar4 == (Settings_BoolSetting_o *)0x0))
    goto label_059442d0;
    if ((pSVar4->fields)._value != false) {
      fVar18 = UnityEngine_Random__Range(0.0,1.0,(MethodInfo *)0x0);
      pSVar5 = (pSVar3->fields).TitanSpawnNormal;
      if ((((pSVar5 == (Settings_FloatSetting_o *)0x0) ||
           (pSVar6 = (pSVar3->fields).TitanSpawnAbnormal, pSVar6 == (Settings_FloatSetting_o *)0x0)) ||
          ((pSVar7 = (pSVar3->fields).TitanSpawnJumper, pSVar7 == (Settings_FloatSetting_o *)0x0 ||
           ((pSVar8 = (pSVar3->fields).TitanSpawnCrawler, pSVar8 == (Settings_FloatSetting_o *)0x0 ||
            (pSVar9 = (pSVar3->fields).TitanSpawnThrower, pSVar9 == (Settings_FloatSetting_o *)0x0)))))) ||
         (pSVar10 = (pSVar3->fields).TitanSpawnPunk, pSVar10 == (Settings_FloatSetting_o *)0x0))
      goto label_059442d0;
      fVar19 = (pSVar5->fields)._value / 100.0;
      if (fVar19 <= fVar18) {
        fVar19 = fVar19 + (pSVar6->fields)._value / 100.0;
        if (fVar19 <= fVar18) {
          fVar19 = fVar19 + (pSVar7->fields)._value / 100.0;
          if (fVar19 <= fVar18) {
            fVar19 = fVar19 + (pSVar8->fields)._value / 100.0;
            if (fVar19 <= fVar18) {
              fVar19 = fVar19 + (pSVar9->fields)._value / 100.0;
              if (fVar19 <= fVar18) {
                if (fVar19 + (pSVar10->fields)._value / 100.0 <= fVar18) goto label_0594413f;
                ppSVar15 = &"Punk";
              }
              else {
                ppSVar15 = &"Thrower";
              }
            }
            else {
              ppSVar15 = &"Crawler";
            }
          }
          else {
            ppSVar15 = &"Jumper";
          }
        }
        else {
          ppSVar15 = &"Abnormal";
        }
      }
      else {
        ppSVar15 = &"Normal";
      }
      goto label_0594413c;
    }
  }
  else {
    bVar13 = System_String__op_Equality(type,"Random",(MethodInfo *)0x0);
    if (bVar13) {
      pIVar16 = SZArrayNew(TypeInfo_string_array,5);
      if (pIVar16 == (Il2CppObject *)0x0) goto label_059442d0;
      if (*(int *)&pIVar16[1].monitor == 0) {
label_059442d5:
        ThrowIndexOutOfRangeException();
      }
      pIVar16[2].klass = (Il2CppClass *)"Normal";
      Il2CppCodeGenWriteBarrier(&pIVar16[2].klass);
      if (((ulong)pIVar16[1].monitor & 0xfffffffe) == 0) goto label_059442d5;
      pIVar16[2].monitor = "Abnormal";
      Il2CppCodeGenWriteBarrier(&pIVar16[2].monitor);
      if (*(uint *)&pIVar16[1].monitor < 3) goto label_059442d5;
      pIVar16[3].klass = (Il2CppClass *)"Jumper";
      Il2CppCodeGenWriteBarrier(&pIVar16[3].klass);
      if (((ulong)pIVar16[1].monitor & 0xfffffffc) == 0) goto label_059442d5;
      pIVar16[3].monitor = "Crawler";
      Il2CppCodeGenWriteBarrier(&pIVar16[3].monitor);
      if (*(uint *)&pIVar16[1].monitor < 5) goto label_059442d5;
      pIVar16[4].klass = (Il2CppClass *)"Thrower";
      Il2CppCodeGenWriteBarrier(&pIVar16[4].klass);
      uVar14 = UnityEngine_Random__Range_690e2b0(0,*(int32_t *)&pIVar16[1].monitor,(MethodInfo *)0x0);
      if (*(uint *)&pIVar16[1].monitor <= uVar14) goto label_059442d5;
      ppSVar15 = (System_String_o **)(&pIVar16[2].klass + (int)uVar14);
label_0594413c:
      type = *ppSVar15;
    }
  }
label_0594413f:
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar2 != (Settings_InGameSet_o *)0x0) &&
      (pSVar11 = (pSVar2->fields).General, pSVar11 != (Settings_InGameGeneralSettings_o *)0x0)) &&
     (pSVar12 = (pSVar11->fields).Difficulty, pSVar12 != (Settings_IntSetting_o *)0x0)) {
    difficulty = (pSVar12->fields)._value;
    if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
    }
    method_00 = (MethodInfo *)Characters_CharacterData__GetTitanAI(difficulty,type,(MethodInfo *)0x0);
    __this_00 = CustomSkins_TitanSkinPicker__Pick
                          (true,(SimpleJSONFixed_JSONNode_o *)method_00,(Settings_TitanCustomSet_o *)0x0,
                           (MethodInfo *)0x0);
    if ((TypeInfo_Characters_CharacterPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterPrefabs);
    }
    if (__this_00 != (CustomSkins_TitanSkinSelection_o *)0x0) {
      pSVar17 = TypeInfo_Characters_CharacterPrefabs->static_fields->BasicTitanPrefix;
      str1 = System_Int32__ToString(&(__this_00->fields).Body,(MethodInfo *)0x0);
      pSVar17 = System_String__Concat_52f0320(pSVar17,str1,(MethodInfo *)0x0);
      position_00.fields.x = (float)local_38._0_4_;
      position_00.fields.y = (float)local_38._4_4_;
      UVar20.fields.z = (float)local_48._0_4_;
      UVar20.fields.w = (float)local_48._4_4_;
      UVar20.fields.x = (float)local_58._0_4_;
      UVar20.fields.y = (float)local_58._4_4_;
      __this_01 = (Characters_BasicTitan_o *)
                  Characters_CharacterSpawner__Spawn(pSVar17,position_00,UVar20,(MethodInfo *)0x0);
      if (__this_01 != (Characters_BasicTitan_o *)0x0) {
        bVar1 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
        if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
           ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Characters_BasicTitan)) {
          il2cpp_codegen_raise_invalid_cast_exception(__this_01);
        }
      }
      if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
      }
      if (__this_01 != (Characters_BasicTitan_o *)0x0) {
        pSVar17 = TypeInfo_GameManagers_TeamInfo->static_fields->Titan;
        customSet = CustomSkins_TitanSkinSelection__CreateSet
                              (__this_00,(__this_01->fields).Setup,(MethodInfo *)0x0);
        __this_02 = __this_01;
        Characters_BasicTitan__Init
                  (__this_01,true,pSVar17,(SimpleJSONFixed_JSONNode_o *)method_00,customSet,
                   (__this_00->fields).SkinSlot,(MethodInfo *)0x0);
        GameManagers_InGameManager__SetupTitan
                  ((GameManagers_InGameManager_o *)__this_02,__this_01,true,method_00);
        return __this_01;
      }
    }
  }
label_059442d0:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$SetupTitan
// il2cpp: void GameManagers_InGameManager__SetupTitan (GameManagers_InGameManager_o* __this, Characters_BasicTitan_o* titan, bool ai, const MethodInfo* method);
// 0x5943a40
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5943b13: jmp 0x5943cf9
// asm:   0x5943be8: jmp 0x5943c5e

void GameManagers_InGameManager__SetupTitan
               (GameManagers_InGameManager_o *__this,Characters_BasicTitan_o *titan,bool ai,MethodInfo *method
               )

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameTitanSettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  Settings_FloatSetting_o *pSVar4;
  Settings_FloatSetting_o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  Settings_IntSetting_o *pSVar7;
  int32_t health;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (Il2CppMethodInitialized_0754583c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_0754583c = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (pSVar1 == (Settings_InGameSet_o *)0x0) goto label_05943cf9;
  pSVar2 = (pSVar1->fields).Titan;
  if (ai) {
    if (titan == (Characters_BasicTitan_o *)0x0) goto label_05943cf9;
    if ((titan->fields).IsCrawler != false) goto label_05943ac7;
    if ((pSVar2 == (Settings_InGameTitanSettings_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).TitanWardedEnabled, pSVar3 == (Settings_BoolSetting_o *)0x0))
    goto label_05943cf9;
    if ((pSVar3->fields)._value != false) {
      fVar9 = UnityEngine_Random__get_value((MethodInfo *)0x0);
      pSVar4 = (pSVar2->fields).TitanChanceWarded;
      if (pSVar4 == (Settings_FloatSetting_o *)0x0) goto label_05943cf9;
      if (fVar9 * 100.0 <= (pSVar4->fields)._value) {
        Characters_BasicTitan__SetWarded(titan,true,(MethodInfo *)0x0);
      }
    }
  }
  else {
label_05943ac7:
    if (pSVar2 == (Settings_InGameTitanSettings_o *)0x0) goto label_05943cf9;
  }
  pSVar3 = (pSVar2->fields).TitanSizeEnabled;
  if (pSVar3 != (Settings_BoolSetting_o *)0x0) {
    if ((pSVar3->fields)._value == false) {
      fVar9 = UnityEngine_Random__Range(1.0,3.0,(MethodInfo *)0x0);
    }
    else {
      pSVar4 = (pSVar2->fields).TitanSizeMin;
      if ((pSVar4 == (Settings_FloatSetting_o *)0x0) ||
         (pSVar5 = (pSVar2->fields).TitanSizeMax, pSVar5 == (Settings_FloatSetting_o *)0x0))
      goto label_05943cf9;
      fVar9 = UnityEngine_Random__Range((pSVar4->fields)._value,(pSVar5->fields)._value,(MethodInfo *)0x0);
    }
    if (titan != (Characters_BasicTitan_o *)0x0) {
      Characters_BaseTitan__SetSize((Characters_BaseTitan_o *)titan,fVar9,(MethodInfo *)0x0);
      pSVar6 = (pSVar2->fields).TitanHealthMode;
      if (pSVar6 != (Settings_IntSetting_o *)0x0) {
        iVar8 = (pSVar6->fields)._value;
        if (iVar8 < 1) {
          health = 10;
          if (ai) {
            return;
          }
label_05943ceb:
          Characters_BaseCharacter__SetHealth((Characters_BaseCharacter_o *)titan,health,(MethodInfo *)0x0);
          return;
        }
        if (iVar8 == 2) {
          pSVar3 = (pSVar2->fields).TitanSizeEnabled;
          if (pSVar3 != (Settings_BoolSetting_o *)0x0) {
            if ((pSVar3->fields)._value == false) {
              fVar9 = 1.0;
              fVar11 = 3.0;
            }
            else {
              pSVar4 = (pSVar2->fields).TitanSizeMin;
              if ((pSVar4 == (Settings_FloatSetting_o *)0x0) ||
                 (pSVar5 = (pSVar2->fields).TitanSizeMax, pSVar5 == (Settings_FloatSetting_o *)0x0))
              goto label_05943cf9;
              fVar9 = (pSVar4->fields)._value;
              fVar10 = (pSVar5->fields)._value;
              fVar11 = fVar9;
              if (fVar9 <= fVar10) {
                fVar11 = fVar10;
              }
            }
            fVar10 = 0.0;
            if (0.0 < fVar11 - fVar9) {
              fVar10 = (titan->fields).Size;
              fVar12 = fVar11;
              if (fVar10 <= fVar11) {
                fVar12 = fVar10;
              }
              fVar10 = ((float)(~-(uint)(fVar9 <= fVar10) & (uint)fVar9 |
                               (uint)fVar12 & -(uint)(fVar9 <= fVar10)) - fVar9) / (fVar11 - fVar9);
            }
            pSVar6 = (pSVar2->fields).TitanHealthMax;
            if ((pSVar6 != (Settings_IntSetting_o *)0x0) &&
               (pSVar7 = (pSVar2->fields).TitanHealthMin, pSVar7 != (Settings_IntSetting_o *)0x0)) {
              fVar9 = 1.0;
              if (fVar10 <= 1.0) {
                fVar9 = fVar10;
              }
              iVar8 = (pSVar7->fields)._value;
              iVar8 = (int)((float)iVar8 +
                           (float)((pSVar6->fields)._value - iVar8) *
                           (float)(-(uint)(0.0 <= fVar10) & (uint)fVar9));
              health = 1;
              if (1 < iVar8) {
                health = iVar8;
              }
              goto label_05943ceb;
            }
          }
        }
        else {
          if (iVar8 != 1) {
            return;
          }
          pSVar6 = (pSVar2->fields).TitanHealthMin;
          if ((pSVar6 != (Settings_IntSetting_o *)0x0) &&
             (pSVar7 = (pSVar2->fields).TitanHealthMax, pSVar7 != (Settings_IntSetting_o *)0x0)) {
            health = UnityEngine_Random__Range_690e2b0
                               ((pSVar6->fields)._value,(pSVar7->fields)._value,(MethodInfo *)0x0);
            goto label_05943ceb;
          }
        }
      }
    }
  }
label_05943cf9:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$SpawnAIShifter
// il2cpp: Characters_BaseShifter_o* GameManagers_InGameManager__SpawnAIShifter (GameManagers_InGameManager_o* __this, System_String_o* type, const MethodInfo* method);
// 0x5944aa0

Characters_BaseShifter_o *
GameManagers_InGameManager__SpawnAIShifter
          (GameManagers_InGameManager_o *__this,System_String_o *type,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  MethodInfo *method_00;
  GameManagers_InGameManager_o *__this_00;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o position;
  UnityEngine_Quaternion_o UStack_4c;
  undefined1 local_38 [16];
  System_ValueTuple_Vector3__Quaternion__o local_28;
  
  GameManagers_InGameManager__GetTitanSpawnPoint(&local_28,(GameManagers_InGameManager_o *)type,method);
  UStack_4c.fields.z = local_28.fields.Item2.fields.z;
  UStack_4c.fields.w = local_28.fields.Item2.fields.w;
  local_38._0_4_ = local_28.fields.Item1.fields.x;
  local_38._4_4_ = local_28.fields.Item1.fields.y;
  local_38._8_8_ = 0;
  UVar2 = UnityEngine_Quaternion__Internal_ToEulerRad(&UStack_4c,(MethodInfo *)0x0);
  euler.fields.x = UVar2.fields.x * 57.29578;
  euler.fields.y = UVar2.fields.y * 57.29578;
  euler.fields.z = UVar2.fields.z * 57.29578;
  __this_00 = (GameManagers_InGameManager_o *)0x0;
  UVar2 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
  position.fields.z = local_28.fields.Item1.fields.z;
  position.fields.x = (float)local_38._0_4_;
  position.fields.y = (float)local_38._4_4_;
  pCVar1 = GameManagers_InGameManager__SpawnAIShifterAt(__this_00,type,position,UVar2.fields.y,method_00);
  return pCVar1;
}


// GameManagers.InGameManager$$SpawnAIShifterAt
// il2cpp: Characters_BaseShifter_o* GameManagers_InGameManager__SpawnAIShifterAt (GameManagers_InGameManager_o* __this, System_String_o* type, UnityEngine_Vector3_o position, float rotationY, const MethodInfo* method);
// 0x5944b20

Characters_BaseShifter_o *
GameManagers_InGameManager__SpawnAIShifterAt
          (GameManagers_InGameManager_o *__this,System_String_o *type,UnityEngine_Vector3_o position,
          float rotationY,MethodInfo *method)

{
  byte bVar1;
  int32_t difficulty;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameGeneralSettings_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  bool bVar5;
  System_String_o **ppSVar6;
  Characters_BaseShifter_o *pCVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  System_String_o *a;
  undefined4 in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Quaternion_o UVar9;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  position_00.fields.z = position.fields.z;
  local_38._8_4_ = in_XMM0_Dc;
  local_38._0_8_ = position.fields._0_8_;
  local_38._12_4_ = in_XMM0_Dd;
  if (g_data_0754583d == '\0') {
    local_58._0_4_ = rotationY;
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
    g_data_0754583d = '\x01';
    rotationY = (float)local_58._0_4_;
  }
  local_68.fields.x = 0.0;
  local_68.fields.y = rotationY * 0.017453292;
  local_68.fields.z = 0.0;
  UVar9 = UnityEngine_Quaternion__Internal_FromEulerRad(&local_68,(MethodInfo *)0x0);
  a = "";
  local_58._8_4_ = extraout_XMM0_Dc;
  local_58._0_8_ = UVar9.fields._0_8_;
  local_58._12_4_ = extraout_XMM0_Dd;
  local_48._8_4_ = in_XMM1_Dc;
  local_48._0_8_ = UVar9.fields._8_8_;
  local_48._12_4_ = in_XMM1_Dd;
  bVar5 = System_String__op_Equality(type,"Annie",(MethodInfo *)0x0);
  if (bVar5) {
    if ((TypeInfo_Characters_CharacterPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterPrefabs);
    }
    ppSVar6 = &TypeInfo_Characters_CharacterPrefabs->static_fields->AnnieShifter;
  }
  else {
    bVar5 = System_String__op_Equality(type,"Armored",(MethodInfo *)0x0);
    if (bVar5) {
      if ((TypeInfo_Characters_CharacterPrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterPrefabs);
      }
      ppSVar6 = &TypeInfo_Characters_CharacterPrefabs->static_fields->ArmoredShifter;
    }
    else {
      bVar5 = System_String__op_Equality(type,"Eren",(MethodInfo *)0x0);
      if (bVar5) {
        if ((TypeInfo_Characters_CharacterPrefabs->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterPrefabs);
        }
        ppSVar6 = &TypeInfo_Characters_CharacterPrefabs->static_fields->ErenShifter;
      }
      else {
        bVar5 = System_String__op_Equality(type,"WallColossal",(MethodInfo *)0x0);
        if (!bVar5) goto label_05944d29;
        if ((TypeInfo_Characters_CharacterPrefabs->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterPrefabs);
        }
        ppSVar6 = &TypeInfo_Characters_CharacterPrefabs->static_fields->WallColossal;
      }
    }
  }
  a = *ppSVar6;
label_05944d29:
  bVar5 = System_String__op_Equality(a,"",(MethodInfo *)0x0);
  if (bVar5) {
    return (Characters_BaseShifter_o *)0x0;
  }
  UVar9.fields.z = (float)local_48._0_4_;
  UVar9.fields.w = (float)local_48._4_4_;
  UVar9.fields.x = (float)local_58._0_4_;
  UVar9.fields.y = (float)local_58._4_4_;
  position_00.fields.x = (float)local_38._0_4_;
  position_00.fields.y = (float)local_38._4_4_;
  pCVar7 = (Characters_BaseShifter_o *)
           Characters_CharacterSpawner__Spawn(a,position_00,UVar9,(MethodInfo *)0x0);
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar2 != (Settings_InGameSet_o *)0x0) &&
      (pSVar3 = (pSVar2->fields).General, pSVar3 != (Settings_InGameGeneralSettings_o *)0x0)) &&
     (pSVar4 = (pSVar3->fields).Difficulty, pSVar4 != (Settings_IntSetting_o *)0x0)) {
    difficulty = (pSVar4->fields)._value;
    if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
    }
    pSVar8 = Characters_CharacterData__GetShifterAI(difficulty,type,(MethodInfo *)0x0);
    if (pCVar7 != (Characters_BaseShifter_o *)0x0) {
      bVar1 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
      if (((pCVar7->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pCVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Characters_BaseShifter)) {
        il2cpp_codegen_raise_invalid_cast_exception(pCVar7);
      }
    }
    if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    }
    if (pCVar7 != (Characters_BaseShifter_o *)0x0) {
      (*(pCVar7->klass->vtable)._204_Init.methodPtr)
                (pCVar7,true,TypeInfo_GameManagers_TeamInfo->static_fields->Titan,pSVar8,0.0,
                 (pCVar7->klass->vtable)._204_Init.method);
      return pCVar7;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$SpawnAIHuman
// il2cpp: Characters_Human_o* GameManagers_InGameManager__SpawnAIHuman (GameManagers_InGameManager_o* __this, int32_t costume, System_String_o* costumeName, System_String_o* loadout, const MethodInfo* method);
// 0x5944e60

Characters_Human_o *
GameManagers_InGameManager__SpawnAIHuman
          (GameManagers_InGameManager_o *__this,int32_t costume,System_String_o *costumeName,
          System_String_o *loadout,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  undefined4 in_register_00000034;
  GameManagers_InGameManager_o *__this_00;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o position;
  UnityEngine_Quaternion_o UStack_5c;
  undefined1 local_48 [16];
  System_ValueTuple_Vector3__Quaternion__o local_38;
  
  GameManagers_InGameManager__GetHumanSpawnPoint
            (&local_38,(GameManagers_InGameManager_o *)CONCAT44(in_register_00000034,costume),
             (MethodInfo *)costumeName);
  UStack_5c.fields.z = local_38.fields.Item2.fields.z;
  UStack_5c.fields.w = local_38.fields.Item2.fields.w;
  local_48._0_4_ = local_38.fields.Item1.fields.x;
  local_48._4_4_ = local_38.fields.Item1.fields.y;
  local_48._8_8_ = 0;
  UVar2 = UnityEngine_Quaternion__Internal_ToEulerRad(&UStack_5c,(MethodInfo *)0x0);
  euler.fields.x = UVar2.fields.x * 57.29578;
  euler.fields.y = UVar2.fields.y * 57.29578;
  euler.fields.z = UVar2.fields.z * 57.29578;
  __this_00 = (GameManagers_InGameManager_o *)0x0;
  UVar2 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
  position.fields.z = local_38.fields.Item1.fields.z;
  position.fields.x = (float)local_48._0_4_;
  position.fields.y = (float)local_48._4_4_;
  pCVar1 = GameManagers_InGameManager__SpawnAIHumanAt
                     (__this_00,costume,costumeName,loadout,position,UVar2.fields.y,method);
  return pCVar1;
}


// GameManagers.InGameManager$$SpawnAIHumanAt
// il2cpp: Characters_Human_o* GameManagers_InGameManager__SpawnAIHumanAt (GameManagers_InGameManager_o* __this, int32_t costume, System_String_o* costumeName, System_String_o* loadout, UnityEngine_Vector3_o position, float rotationY, const MethodInfo* method);
// 0x5944ef0
// eh: try 0x594504a..0x594507b -> pad 0x59454c0 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5945194..0x59454b1 -> pad 0x594552e (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59454b9..0x59454be -> pad 0x59454be catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x59454e8..0x594551e -> pad 0x594551e (+1 call sites) cleanup
// eh: try 0x5945521..0x5945526 -> pad 0x594558a catch (...) [compiler noexcept guard]
// eh: try 0x5945546..0x594554b -> pad 0x5945575 cleanup
// eh: try 0x5945578..0x5945582 -> pad 0x594558a catch (...) [compiler noexcept guard]
// asm: 58 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59451d2: movzx ebx, byte ptr [rsp + 0xb]
// asm:   0x59451d7: jmp 0x59451db
// asm:   0x594549d: jmp 0x59450e1
// asm:   0x59454be: jmp 0x59454c0
// asm:   0x59454c0: mov rbx, rax
// asm:   0x59454c3: cmp edx, 1
// asm:   0x59454c6: jne 0x5945582
// asm:   0x59454cc: mov rdi, rbx
// asm:   0x59454cf: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59454d4: mov rbx, rax
// asm:   0x59454d7: lea rax, [rip + 0x1c111ea]
// asm:   0x59454de: mov rdi, qword ptr [rax + 0x10]
// asm:   0x59454e2: mov rax, qword ptr [rbx]
// asm:   0x59454e5: mov rsi, qword ptr [rax]
// asm:   0x59454e8: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x59454ed: test al, al
// asm:   0x59454ef: je 0x59454fd
// asm:   0x59454f1: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59454f6: xor ebp, ebp
// asm:   0x59454f8: jmp 0x594544a
// asm:   0x59454fd: mov edi, 8
// asm:   0x5945502: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5945507: mov rcx, qword ptr [rbx]
// asm:   0x594550a: mov qword ptr [rax], rcx
// asm:   0x594550d: lea rsi, [rip + 0x14e7fec]
// asm:   0x5945514: mov rdi, rax
// asm:   0x5945517: xor edx, edx
// asm:   0x5945519: call 0x6e255c0  ; __cxa_throw()
// asm:   0x594551e: mov rbx, rax
// asm:   0x5945521: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5945526: jmp 0x5945582
// asm:   0x5945528: jmp 0x594552e
// asm:   0x594552a: jmp 0x594552e
// asm:   0x594552c: jmp 0x594552e
// asm:   0x594552e: mov rbx, rax
// asm:   0x5945531: cmp edx, 1
// asm:   0x5945534: jne 0x5945578
// asm:   0x5945536: mov rdi, rbx
// asm:   0x5945539: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x594553e: mov rbp, qword ptr [rax]
// asm:   0x5945541: mov qword ptr [rsp + 0x10], rbp
// asm:   0x5945546: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x594554b: lea rax, [rip + 0x194892e]  ; MethodInfo_System_Collections_Generic_List_Enumerator_HumanCustomSet_Dispose
// asm:   0x5945552: mov rsi, qword ptr [rax]
// asm:   0x5945555: lea rdi, [rsp + 0x30]
// asm:   0x594555a: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x594555f: test rbp, rbp
// asm:   0x5945562: movzx ebx, byte ptr [rsp + 0xb]
// asm:   0x5945567: je 0x59451ef
// asm:   0x594556d: mov rdi, rbp
// asm:   0x5945570: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5945575: mov rbx, rax
// asm:   0x5945578: lea rdi, [rsp + 0x10]
// asm:   0x594557d: call 0x2fd3480  ; il2cpp_runtime_helper_02fd3480()
// asm:   0x5945582: mov rdi, rbx
// asm:   0x5945585: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x594558a: mov rdi, rax
// asm:   0x594558d: call 0x2ab61e0  ; __clang_call_terminate()

Characters_Human_o *
GameManagers_InGameManager__SpawnAIHumanAt
          (GameManagers_InGameManager_o *__this,int32_t costume,System_String_o *costumeName,
          System_String_o *loadout,UnityEngine_Vector3_o position,float rotationY,MethodInfo *method)

{
  byte bVar1;
  Settings_HumanCustomSettings_o *pSVar2;
  Settings_SetSettingsContainer_HumanCustomSet__o *pSVar3;
  System_Collections_Generic_List_object__o *__this_00;
  Settings_StringSetting_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  Characters_HumanSetup_o *__this_01;
  Settings_InGameSet_o *pSVar6;
  Settings_InGameMiscSettings_o *pSVar7;
  Settings_SetSettingsContainer_HumanCustomSet__o *pSVar8;
  Settings_ListSetting_T__o *__this_02;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  int32_t iVar12;
  int32_t iVar13;
  Settings_HumanCustomSet_o *__this_03;
  Settings_InGameCharacterSettings_o *__this_04;
  Characters_Human_o *__this_05;
  Settings_ListSetting_T__o *pSVar14;
  int iVar15;
  bool bVar16;
  undefined4 in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Quaternion_o UVar17;
  UnityEngine_Vector3_o position_00;
  undefined1 local_b8 [16];
  Il2CppObject *local_a8;
  System_String_o *local_a0;
  undefined1 local_98 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_90;
  Il2CppObject *local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  Settings_HumanCustomSet_o *local_50;
  undefined1 local_48 [16];
  
  position_00.fields.z = position.fields.z;
  local_68._0_4_ = rotationY;
  local_48._8_4_ = in_XMM0_Dc;
  local_48._0_8_ = position.fields._0_8_;
  local_48._12_4_ = in_XMM0_Dd;
  local_a0 = loadout;
  if (Il2CppMethodInitialized_0754583e == '\0') {
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
    Il2CppMethodInitialized_0754583e = '\x01';
  }
  local_98 = (undefined1  [8])0x0;
  pSStack_90 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_88 = (Il2CppObject *)0x0;
  bVar16 = costume == -1;
  if (bVar16) {
    bVar11 = System_String__IsNullOrWhiteSpace(costumeName,(MethodInfo *)0x0);
    if (bVar11) {
      return (Characters_Human_o *)0x0;
    }
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_HumanCustomSet);
    Settings_HumanCustomSet___ctor(__this_03,(MethodInfo *)0x0);
    if (__this_03 == (Settings_HumanCustomSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(__this_03->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
              (__this_03,costumeName,(__this_03->klass->vtable)._9_DeserializeFromJsonString.method);
  }
  else {
    __this_03 = (Settings_HumanCustomSet_o *)0x0;
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if ((pSVar2 == (Settings_HumanCustomSettings_o *)0x0) ||
     (pSVar3 = (pSVar2->fields).CustomSets, pSVar3 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0))
  goto label_059454a2;
  if (costume == 3) {
    pSVar3 = (pSVar2->fields).Costume3Sets;
    if (pSVar3 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0) goto label_059454a2;
    pSVar14 = (pSVar3->fields).Sets;
    iVar12 = 2;
label_05945119:
    auVar10._12_4_ = 0;
    auVar10._0_12_ = local_78._4_12_;
    local_78 = auVar10 << 0x20;
    if (costume == -1) goto label_059450e1;
label_0594512a:
    local_50 = __this_03;
    if ((pSVar14 == (Settings_ListSetting_T__o *)0x0) ||
       (__this_00 = (System_Collections_Generic_List_object__o *)(pSVar14->fields)._value,
       __this_00 == (System_Collections_Generic_List_object__o *)0x0)) goto label_059454a2;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_b8,__this_00,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_HumanCustomSet_GetEnumerator);
    local_88 = local_a8;
    local_98 = (undefined1  [8])local_b8._0_8_;
    pSStack_90 = (System_Collections_Generic_List_Enumerator_object__o *)local_b8._8_8_;
    local_b8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    iVar15 = 0;
    local_b8._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_98;
    while (bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o *)local_98,
                               (MethodInfo_4C45C50 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_HumanCustomSet_MoveNext),
          bVar11) {
      if (local_88 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if (local_88[3].klass == (Il2CppClass *)0x0) {
        ThrowNullReferenceException();
      }
      bVar11 = System_String__op_Equality
                         (((local_88[3].klass)->_1).byval_arg.data,costumeName,(MethodInfo *)0x0);
      if (bVar11) {
        bVar16 = true;
        break;
      }
      iVar15 = iVar15 + 1;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)local_98,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_HumanCustomSet_Dispose);
    if (!bVar16) {
      return (Characters_Human_o *)0x0;
    }
  }
  else {
    if (costume == 2) {
      pSVar3 = (pSVar2->fields).Costume2Sets;
      if (pSVar3 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0) goto label_059454a2;
      pSVar14 = (pSVar3->fields).Sets;
      iVar12 = 1;
      goto label_05945119;
    }
    if (costume == 1) {
      pSVar3 = (pSVar2->fields).Costume1Sets;
      if (pSVar3 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0) goto label_059454a2;
      pSVar14 = (pSVar3->fields).Sets;
      iVar12 = 0;
      auVar9._12_4_ = 0;
      auVar9._0_12_ = local_78._4_12_;
      local_78 = auVar9 << 0x20;
      goto label_0594512a;
    }
    pSVar8 = (pSVar2->fields).Costume1Sets;
    if ((pSVar8 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0) ||
       (__this_02 = (pSVar8->fields).Sets, __this_02 == (Settings_ListSetting_T__o *)0x0)) goto label_059454a2;
    pSVar14 = (pSVar3->fields).Sets;
    iVar13 = Settings_ListSetting_object___GetCount
                       (__this_02,
                        (MethodInfo_515DE80 *)MethodInfo_Settings_ListSetting_HumanCustomSet_GetCount);
    iVar12 = -1;
    local_78._0_4_ = iVar13;
    if (costume != -1) goto label_0594512a;
label_059450e1:
    iVar15 = 0;
    local_50 = __this_03;
  }
  __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameCharacterSettings);
  Settings_InGameCharacterSettings___ctor(__this_04,(MethodInfo *)0x0);
  if ((__this_04 != (Settings_InGameCharacterSettings_o *)0x0) &&
     (pSVar4 = (__this_04->fields).Loadout, pSVar4 != (Settings_StringSetting_o *)0x0)) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)local_a0,
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    pSVar5 = (__this_04->fields).CustomSet;
    if (pSVar5 != (Settings_IntSetting_o *)0x0) {
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar5,iVar15 + local_78._0_4_,
                 (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      pSVar5 = (__this_04->fields).Costume;
      if (pSVar5 != (Settings_IntSetting_o *)0x0) {
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)pSVar5,iVar12,
                   (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        local_b8._0_8_ = (ulong)(uint)((float)local_68._0_4_ * 0.017453292) << 0x20;
        local_b8._8_8_ = local_b8._8_8_ & 0xffffffff00000000;
        UVar17 = UnityEngine_Quaternion__Internal_FromEulerRad
                           ((UnityEngine_Vector3_o *)local_b8,(MethodInfo *)0x0);
        local_68._8_4_ = extraout_XMM0_Dc;
        local_68._0_8_ = UVar17.fields._0_8_;
        local_68._12_4_ = extraout_XMM0_Dd;
        local_78._8_4_ = in_XMM1_Dc;
        local_78._0_8_ = UVar17.fields._8_8_;
        local_78._12_4_ = in_XMM1_Dd;
        pSVar4 = (__this_04->fields).Special;
        if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
        }
        if (pSVar4 != (Settings_StringSetting_o *)0x0) {
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar4,
                     (Il2CppObject *)TypeInfo_Characters_HumanSpecials->static_fields->DefaultSpecial,
                     (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          if ((TypeInfo_Characters_CharacterPrefabs->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterPrefabs);
          }
          UVar17.fields.z = (float)local_78._0_4_;
          UVar17.fields.w = (float)local_78._4_4_;
          UVar17.fields.x = (float)local_68._0_4_;
          UVar17.fields.y = (float)local_68._4_4_;
          position_00.fields.x = (float)local_48._0_4_;
          position_00.fields.y = (float)local_48._4_4_;
          __this_05 = (Characters_Human_o *)
                      Characters_CharacterSpawner__Spawn
                                (TypeInfo_Characters_CharacterPrefabs->static_fields->Human,position_00,UVar17
                                 ,(MethodInfo *)0x0);
          if (__this_05 != (Characters_Human_o *)0x0) {
            bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
            if (((__this_05->klass->_2).typeHierarchyDepth < bVar1) ||
               ((__this_05->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_Characters_Human)) {
              il2cpp_codegen_raise_invalid_cast_exception(__this_05);
            }
          }
          if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
          }
          if (__this_05 != (Characters_Human_o *)0x0) {
            Characters_Human__Init
                      (__this_05,true,TypeInfo_GameManagers_TeamInfo->static_fields->Human,__this_04,
                       (MethodInfo *)0x0);
            if (costume == -1) {
              __this_01 = (__this_05->fields).Setup;
              if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
              }
              iVar12 = GameManagers_HumanLoadout__ToWeapon(local_a0,(MethodInfo *)0x0);
              if (__this_01 == (Characters_HumanSetup_o *)0x0) goto label_059454a2;
              Characters_HumanSetup__Load(__this_01,local_50,iVar12,false,(MethodInfo *)0x0);
            }
            pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
            if (((pSVar6 != (Settings_InGameSet_o *)0x0) &&
                (pSVar7 = (pSVar6->fields).Misc, pSVar7 != (Settings_InGameMiscSettings_o *)0x0)) &&
               (pSVar5 = (pSVar7->fields).HumanHealth, pSVar5 != (Settings_IntSetting_o *)0x0)) {
              iVar12 = (pSVar5->fields)._value;
              if (1 < iVar12) {
                Characters_BaseCharacter__SetHealth
                          ((Characters_BaseCharacter_o *)__this_05,iVar12,(MethodInfo *)0x0);
              }
              return __this_05;
            }
          }
        }
      }
    }
  }
label_059454a2:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$OnSetLabelRPC
// il2cpp: void GameManagers_InGameManager__OnSetLabelRPC (System_String_o* label, System_String_o* message, float time, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x59455a0

void GameManagers_InGameManager__OnSetLabelRPC
               (System_String_o *label,System_String_o *message,float time,Photon_Pun_PhotonMessageInfo_o info
               ,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754583f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_0754583f = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    pPVar1 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
    method_00 = extraout_RDX_00;
  }
  else {
    pPVar1 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
    method_00 = extraout_RDX;
  }
  if (info.fields.Sender != pPVar1) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_GameManagers_InGameManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    method_00 = extraout_RDX_01;
  }
  GameManagers_InGameManager__SetLabel(label,message,time,method_00);
  return;
}


// GameManagers.InGameManager$$SetLabel
// il2cpp: void GameManagers_InGameManager__SetLabel (System_String_o* label, System_String_o* message, float time, const MethodInfo* method);
// 0x5945660

void GameManagers_InGameManager__SetLabel
               (System_String_o *label,System_String_o *message,float time,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  UI_InGameMenu_o *__this;
  
  if (Il2CppMethodInitialized_07545840 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07545840 = '\x01';
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    __this = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    __this = *(UI_InGameMenu_o **)((long)((Il2CppClass *)TypeInfo_UI_UIManager)->static_fields + 0x40);
  }
  if (__this == (UI_InGameMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
  if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  UI_InGameMenu__SetLabel(__this,label,message,time,(MethodInfo *)0x0);
  return;
}


// GameManagers.InGameManager$$EndGame
// il2cpp: void GameManagers_InGameManager__EndGame (GameManagers_InGameManager_o* __this, float time, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5945760
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5945816: jmp 0x5945829

void GameManagers_InGameManager__EndGame
               (GameManagers_InGameManager_o *__this,float time,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  float num;
  Settings_UISettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  CustomLogic_CustomLogicEvaluator_o *pCVar3;
  bool bVar4;
  Photon_Realtime_Player_o *pPVar5;
  GameManagers_InGameManager__WaitAndEndGame_d__101_o *__this_00;
  System_String_o *pSVar6;
  
  if (Il2CppMethodInitialized_07545841 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"(");
    il2cpp_codegen_initialize_runtime_metadata(&")");
    il2cpp_codegen_initialize_runtime_metadata(&" Round ended.");
    Il2CppMethodInitialized_07545841 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    pPVar5 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  }
  else {
    pPVar5 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  }
  if ((info.fields.Sender != pPVar5) || ((__this->fields).IsEnding != false)) {
    return;
  }
  (__this->fields).IsEnding = true;
  (__this->fields).EndTimeLeft = time;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (bVar4) {
    if (Il2CppMethodInitialized_07545842 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager_WaitAndEndGame_d__101);
      Il2CppMethodInitialized_07545842 = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_GameManagers_InGameManager_WaitAndEndGame_d__101);
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).__1__state = 0;
    (__this_00->fields).time = time;
    UnityEngine_MonoBehaviour__StartCoroutine_691c390
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
               (MethodInfo *)0x0);
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar1 != (Settings_UISettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).GameFeed, pSVar2 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar2->fields)._value == false) {
      return;
    }
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if (pCVar3 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      num = (pCVar3->fields).CurrentTime;
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      pSVar6 = Utility_Util__FormatFloat(num,2,(MethodInfo *)0x0);
      pSVar6 = System_String__Concat_5301f10
                         ("(",pSVar6,")",(MethodInfo *)0x0);
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      pSVar6 = GameManagers_ChatManager__GetColorString(pSVar6,3,false,(MethodInfo *)0x0);
      pSVar6 = System_String__Concat_52f0320(pSVar6," Round ended.",(MethodInfo *)0x0);
      GameManagers_ChatManager__AddFeed(pSVar6,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$WaitAndEndGame
// il2cpp: System_Collections_IEnumerator_o* GameManagers_InGameManager__WaitAndEndGame (GameManagers_InGameManager_o* __this, float time, const MethodInfo* method);
// 0x59459d0

System_Collections_IEnumerator_o *
GameManagers_InGameManager__WaitAndEndGame(GameManagers_InGameManager_o *__this,float time,MethodInfo *method)

{
  GameManagers_InGameManager__WaitAndEndGame_d__101_o *__this_00;
  
  if (Il2CppMethodInitialized_07545842 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager_WaitAndEndGame_d__101);
    Il2CppMethodInitialized_07545842 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameManagers_InGameManager_WaitAndEndGame_d__101);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).time = time;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// GameManagers.InGameManager$$ResetPersistentPlayerProperties
// il2cpp: void GameManagers_InGameManager__ResetPersistentPlayerProperties (const MethodInfo* method);
// 0x593e180
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x593e1bd: jmp 0x593e6a3

void GameManagers_InGameManager__ResetPersistentPlayerProperties(MethodInfo *method)

{
  uint32_t uVar1;
  ExitGames_Client_Photon_Hashtable_o *__this;
  GameManagers_PlayerInfo_o *pGVar2;
  Settings_ProfileSettings_o *pSVar3;
  Settings_NameSetting_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  System_String_o *selectedRoleName;
  Photon_Realtime_Player_o *pPVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  System_Collections_Generic_Dictionary_string__object__o *__this_00;
  Il2CppObject *pIVar9;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (Il2CppMethodInitialized_07545843 == '\0') {
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
    Il2CppMethodInitialized_07545843 = '\x01';
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    pPVar6 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  else {
    pPVar6 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  if ((pPVar6 != (Photon_Realtime_Player_o *)0x0) &&
     (__this = (pPVar6->fields)._CustomProperties_k__BackingField,
     __this != (ExitGames_Client_Photon_Hashtable_o *)0x0)) {
    System_Collections_Generic_Dictionary_object__object___Clear
              ((System_Collections_Generic_Dictionary_object__object__o *)__this,
               (MethodInfo_4AAD690 *)MethodInfo_System_Collections_Generic_Dictionary_object_object_Clear);
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    pGVar2 = TypeInfo_GameManagers_InGameManager->static_fields->MyPlayerInfo;
    if (((pGVar2 != (GameManagers_PlayerInfo_o *)0x0) &&
        (pSVar3 = (pGVar2->fields).Profile, pSVar3 != (Settings_ProfileSettings_o *)0x0)) &&
       (pSVar4 = (pSVar3->fields).Name, pSVar4 != (Settings_NameSetting_o *)0x0)) {
      pSVar7 = (pSVar4->fields)._value;
      if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
      }
      pSVar7 = Anticheat_ChatFilter__FilterBadWords(pSVar7,(MethodInfo *)0x0);
      if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
      }
      pSVar7 = MiscExtensions__HexColor(pSVar7,(MethodInfo *)0x0);
      pGVar2 = TypeInfo_GameManagers_InGameManager->static_fields->MyPlayerInfo;
      if (((pGVar2 != (GameManagers_PlayerInfo_o *)0x0) &&
          (pSVar3 = (pGVar2->fields).Profile, pSVar3 != (Settings_ProfileSettings_o *)0x0)) &&
         (pSVar4 = (pSVar3->fields).Guild, pSVar4 != (Settings_NameSetting_o *)0x0)) {
        pSVar8 = Anticheat_ChatFilter__FilterBadWords((pSVar4->fields)._value,(MethodInfo *)0x0);
        pSVar8 = MiscExtensions__HexColor(pSVar8,(MethodInfo *)0x0);
        pPVar6 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
        pGVar2 = TypeInfo_GameManagers_InGameManager->static_fields->MyPlayerInfo;
        if (((pGVar2 != (GameManagers_PlayerInfo_o *)0x0) &&
            (pSVar3 = (pGVar2->fields).Profile, pSVar3 != (Settings_ProfileSettings_o *)0x0)) &&
           (pSVar5 = (pSVar3->fields).GuildRoleSprite, pSVar5 != (Settings_StringSetting_o *)0x0)) {
          selectedRoleName = (pSVar5->fields)._value;
          if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
          }
          pSVar8 = PatreonEffects_RoleSpriteHelpers__ComposeGuildWithRoleSprite
                             (pPVar6,pSVar8,selectedRoleName,(MethodInfo *)0x0);
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_object);
          System_Collections_Generic_Dictionary_object__object____ctor
                    ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                     (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor
                    );
          if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
          }
          if (__this_00 != (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                       (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->Name,
                       (Il2CppObject *)pSVar7,
                       (MethodInfo_4AAD4E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                       (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->Guild,
                       (Il2CppObject *)pSVar8,
                       (MethodInfo_4AAD4E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                       (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->Team,
                       (Il2CppObject *)0x0,
                       (MethodInfo_4AAD4E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
            pSVar7 = TypeInfo_GameManagers_PlayerProperty->static_fields->CharacterViewId;
            local_2c = 0xffffffff;
            pIVar9 = il2cpp_vm_Object_Box(g_data_07556710,&local_2c);
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                       (Il2CppObject *)pSVar7,pIVar9,
                       (MethodInfo_4AAD4E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                       (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->CustomMapHash,
                       (Il2CppObject *)0x0,
                       (MethodInfo_4AAD4E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                       (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->CustomLogicHash,
                       (Il2CppObject *)0x0,
                       (MethodInfo_4AAD4E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                       (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->CustomAddonHash,
                       (Il2CppObject *)0x0,
                       (MethodInfo_4AAD4E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                       (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->Status,
                       (Il2CppObject *)0x0,
                       (MethodInfo_4AAD4E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                       (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->Character,
                       (Il2CppObject *)0x0,
                       (MethodInfo_4AAD4E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                       (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->Loadout,
                       (Il2CppObject *)0x0,
                       (MethodInfo_4AAD4E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
            pSVar7 = TypeInfo_GameManagers_PlayerProperty->static_fields->Kills;
            local_30 = 0;
            pIVar9 = il2cpp_vm_Object_Box(g_data_07556710,&local_30);
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                       (Il2CppObject *)pSVar7,pIVar9,
                       (MethodInfo_4AAD4E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
            pSVar7 = TypeInfo_GameManagers_PlayerProperty->static_fields->Deaths;
            local_34 = 0;
            pIVar9 = il2cpp_vm_Object_Box(g_data_07556710,&local_34);
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                       (Il2CppObject *)pSVar7,pIVar9,
                       (MethodInfo_4AAD4E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
            pSVar7 = TypeInfo_GameManagers_PlayerProperty->static_fields->HighestDamage;
            local_38 = 0;
            pIVar9 = il2cpp_vm_Object_Box(g_data_07556710,&local_38);
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                       (Il2CppObject *)pSVar7,pIVar9,
                       (MethodInfo_4AAD4E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
            pSVar7 = TypeInfo_GameManagers_PlayerProperty->static_fields->TotalDamage;
            local_3c = 0;
            pIVar9 = il2cpp_vm_Object_Box(g_data_07556710,&local_3c);
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                       (Il2CppObject *)pSVar7,pIVar9,
                       (MethodInfo_4AAD4E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                       (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->SpawnPoint,
                       (Il2CppObject *)"null",
                       (MethodInfo_4AAD4E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
            pPVar6 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
            PhotonExtensions__SetCustomProperties(pPVar6,__this_00,(MethodInfo *)0x0);
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
// 0x5945a50

void GameManagers_InGameManager__ResetPlayerKD(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Collections_Generic_Dictionary_string__object__o *__this;
  Il2CppObject *pIVar2;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (Il2CppMethodInitialized_07545844 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_07545844 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar1 = TypeInfo_GameManagers_PlayerProperty->static_fields->Kills;
  uStack_34 = 0;
  pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,&uStack_34);
  if (__this == (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___Add
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,(Il2CppObject *)pSVar1,pIVar2,
             (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
  pSVar1 = TypeInfo_GameManagers_PlayerProperty->static_fields->Deaths;
  uStack_38 = 0;
  pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,&uStack_38);
  System_Collections_Generic_Dictionary_object__object___Add
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,(Il2CppObject *)pSVar1,pIVar2,
             (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
  pSVar1 = TypeInfo_GameManagers_PlayerProperty->static_fields->HighestDamage;
  uStack_3c = 0;
  pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,&uStack_3c);
  System_Collections_Generic_Dictionary_object__object___Add
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,(Il2CppObject *)pSVar1,pIVar2,
             (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
  pSVar1 = TypeInfo_GameManagers_PlayerProperty->static_fields->TotalDamage;
  uStack_40 = 0;
  pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,&uStack_40);
  System_Collections_Generic_Dictionary_object__object___Add
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,(Il2CppObject *)pSVar1,pIVar2,
             (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
  PhotonExtensions__SetCustomProperties(player,__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.InGameManager$$ResetRoundPlayerProperties
// il2cpp: void GameManagers_InGameManager__ResetRoundPlayerProperties (const MethodInfo* method);
// 0x593dca0

void GameManagers_InGameManager__ResetRoundPlayerProperties(MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameMiscSettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  System_String_o *pSVar4;
  System_Collections_Generic_Dictionary_string__object__o *pSVar5;
  Il2CppObject *pIVar6;
  Photon_Realtime_Player_o *pPVar7;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  if (Il2CppMethodInitialized_07545845 == '\0') {
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
    Il2CppMethodInitialized_07545845 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Misc, pSVar2 != (Settings_InGameMiscSettings_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).ClearKDROnRestart, pSVar3 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar3->fields)._value != false) {
      pSVar5 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_object);
      System_Collections_Generic_Dictionary_object__object____ctor
                ((System_Collections_Generic_Dictionary_object__object__o *)pSVar5,
                 (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
      if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
      }
      pSVar4 = TypeInfo_GameManagers_PlayerProperty->static_fields->Kills;
      local_40 = 0;
      pIVar6 = il2cpp_vm_Object_Box(g_data_07556710,&local_40);
      if (pSVar5 == (System_Collections_Generic_Dictionary_string__object__o *)0x0) goto label_0593e00e;
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)pSVar5,(Il2CppObject *)pSVar4,
                 pIVar6,(MethodInfo_4AAD4E0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
      pSVar4 = TypeInfo_GameManagers_PlayerProperty->static_fields->Deaths;
      uStack_34 = 0;
      pIVar6 = il2cpp_vm_Object_Box(g_data_07556710,&uStack_34);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)pSVar5,(Il2CppObject *)pSVar4,
                 pIVar6,(MethodInfo_4AAD4E0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
      pSVar4 = TypeInfo_GameManagers_PlayerProperty->static_fields->HighestDamage;
      local_38 = 0;
      pIVar6 = il2cpp_vm_Object_Box(g_data_07556710,&local_38);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)pSVar5,(Il2CppObject *)pSVar4,
                 pIVar6,(MethodInfo_4AAD4E0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
      pSVar4 = TypeInfo_GameManagers_PlayerProperty->static_fields->TotalDamage;
      local_3c = 0;
      pIVar6 = il2cpp_vm_Object_Box(g_data_07556710,&local_3c);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)pSVar5,(Il2CppObject *)pSVar4,
                 pIVar6,(MethodInfo_4AAD4E0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar7 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      PhotonExtensions__SetCustomProperties(pPVar7,pSVar5,(MethodInfo *)0x0);
    }
    pSVar5 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_object);
    System_Collections_Generic_Dictionary_object__object____ctor
              ((System_Collections_Generic_Dictionary_object__object__o *)pSVar5,
               (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
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
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
      pSVar4 = TypeInfo_GameManagers_PlayerProperty->static_fields->CharacterViewId;
      local_40 = 0xffffffff;
      pIVar6 = il2cpp_vm_Object_Box(g_data_07556710,&local_40);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)pSVar5,(Il2CppObject *)pSVar4,
                 pIVar6,(MethodInfo_4AAD4E0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)pSVar5,
                 (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->SpawnPoint,
                 (Il2CppObject *)"null",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar7 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      PhotonExtensions__ForceUpdateProps
                (pPVar7,pSVar5,TypeInfo_GameManagers_PlayerProperty->static_fields->Status,
                 TypeInfo_GameManagers_PlayerProperty->static_fields->CharacterViewId,(MethodInfo *)0x0);
      return;
    }
  }
label_0593e00e:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$UpdatePlayerName
// il2cpp: void GameManagers_InGameManager__UpdatePlayerName (const MethodInfo* method);
// 0x59435e0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5943620: jmp 0x5943a39
// asm:   0x5943979: jmp 0x59438ed

void GameManagers_InGameManager__UpdatePlayerName(MethodInfo *method)

{
  uint32_t uVar1;
  GameManagers_PlayerInfo_o *pGVar2;
  Settings_ProfileSettings_o *pSVar3;
  Settings_NameSetting_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  System_String_o *pSVar6;
  Settings_InGameSet_o *pSVar7;
  Settings_InGameMiscSettings_o *pSVar8;
  Settings_IntSetting_o *pSVar9;
  Settings_InGameCharacterSettings_o *pSVar10;
  bool bVar11;
  System_String_o *pSVar12;
  System_String_o *pSVar13;
  Photon_Realtime_Player_o *pPVar14;
  System_Collections_Generic_Dictionary_string__object__o *__this;
  int32_t color;
  int32_t iVar15;
  
  if (Il2CppMethodInitialized_07545846 == '\0') {
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
    Il2CppMethodInitialized_07545846 = '\x01';
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) goto label_059436ec;
label_0594360c:
    pGVar2 = TypeInfo_GameManagers_InGameManager->static_fields->MyPlayerInfo;
  }
  else {
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor != 0) goto label_0594360c;
label_059436ec:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    pGVar2 = TypeInfo_GameManagers_InGameManager->static_fields->MyPlayerInfo;
  }
  if (((pGVar2 == (GameManagers_PlayerInfo_o *)0x0) ||
      (pSVar3 = (pGVar2->fields).Profile, pSVar3 == (Settings_ProfileSettings_o *)0x0)) ||
     (pSVar4 = (pSVar3->fields).Name, pSVar4 == (Settings_NameSetting_o *)0x0)) goto label_05943a39;
  pSVar12 = (pSVar4->fields)._value;
  if ((((Il2CppClass *)TypeInfo_Anticheat_ChatFilter)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
  }
  pSVar12 = Anticheat_ChatFilter__FilterBadWords(pSVar12,(MethodInfo *)0x0);
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  pSVar12 = MiscExtensions__HexColor(pSVar12,(MethodInfo *)0x0);
  pGVar2 = TypeInfo_GameManagers_InGameManager->static_fields->MyPlayerInfo;
  if (((pGVar2 == (GameManagers_PlayerInfo_o *)0x0) ||
      (pSVar3 = (pGVar2->fields).Profile, pSVar3 == (Settings_ProfileSettings_o *)0x0)) ||
     (pSVar4 = (pSVar3->fields).Guild, pSVar4 == (Settings_NameSetting_o *)0x0)) goto label_05943a39;
  pSVar13 = Anticheat_ChatFilter__FilterBadWords((pSVar4->fields)._value,(MethodInfo *)0x0);
  pSVar13 = MiscExtensions__HexColor(pSVar13,(MethodInfo *)0x0);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar14 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  pGVar2 = TypeInfo_GameManagers_InGameManager->static_fields->MyPlayerInfo;
  if (((pGVar2 == (GameManagers_PlayerInfo_o *)0x0) ||
      (pSVar3 = (pGVar2->fields).Profile, pSVar3 == (Settings_ProfileSettings_o *)0x0)) ||
     (pSVar5 = (pSVar3->fields).GuildRoleSprite, pSVar5 == (Settings_StringSetting_o *)0x0))
  goto label_05943a39;
  pSVar6 = (pSVar5->fields)._value;
  if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
  }
  pSVar13 = PatreonEffects_RoleSpriteHelpers__ComposeGuildWithRoleSprite
                      (pPVar14,pSVar13,pSVar6,(MethodInfo *)0x0);
  pSVar7 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar7 == (Settings_InGameSet_o *)0x0) ||
      (pSVar8 = (pSVar7->fields).Misc, pSVar8 == (Settings_InGameMiscSettings_o *)0x0)) ||
     (pSVar9 = (pSVar8->fields).PVP, pSVar9 == (Settings_IntSetting_o *)0x0)) goto label_05943a39;
  if ((pSVar9->fields)._value == 2) {
    pSVar10 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
    if ((pSVar10 == (Settings_InGameCharacterSettings_o *)0x0) ||
       (pSVar5 = (pSVar10->fields).Team, pSVar5 == (Settings_StringSetting_o *)0x0)) goto label_05943a39;
    pSVar6 = (pSVar5->fields)._value;
    if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    }
    bVar11 = System_String__op_Equality
                       (pSVar6,TypeInfo_GameManagers_TeamInfo->static_fields->Blue,(MethodInfo *)0x0);
    if (bVar11) {
      iVar15 = 6;
      color = 6;
      uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      pSVar10 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
      if ((pSVar10 == (Settings_InGameCharacterSettings_o *)0x0) ||
         (pSVar5 = (pSVar10->fields).Team, pSVar5 == (Settings_StringSetting_o *)0x0)) goto label_05943a39;
      pSVar6 = (pSVar5->fields)._value;
      if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
      }
      bVar11 = System_String__op_Equality
                         (pSVar6,TypeInfo_GameManagers_TeamInfo->static_fields->Red,(MethodInfo *)0x0);
      if (!bVar11) goto label_0594397e;
      iVar15 = 5;
      color = 5;
      uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      color = iVar15;
    }
    pSVar12 = GameManagers_ChatManager__GetColorString(pSVar12,color,false,(MethodInfo *)0x0);
  }
label_0594397e:
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar14 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  if (__this != (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this,
               (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->Name,
               (Il2CppObject *)pSVar12,
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this,
               (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->Guild,
               (Il2CppObject *)pSVar13,
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    PhotonExtensions__SetCustomProperties(pPVar14,__this,(MethodInfo *)0x0);
    return;
  }
label_05943a39:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$SyncLocalProfileToPlayerInfo
// il2cpp: void GameManagers_InGameManager__SyncLocalProfileToPlayerInfo (System_String_o* reason, const MethodInfo* method);
// 0x5945c00
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5945cf3: jmp 0x5946097
// asm:   0x5945e62: jmp 0x5945fbe
// asm:   0x5945ea6: jmp 0x5945fbe
// asm:   0x5946092: jmp 0x5946008

void GameManagers_InGameManager__SyncLocalProfileToPlayerInfo(System_String_o *reason,MethodInfo *method)

{
  GameManagers_PlayerInfo_o *pGVar1;
  GameManagers_InGameManager_StaticFields *pGVar2;
  Settings_ProfileSettings_o *pSVar3;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  Photon_Pun_PhotonView_o *pPVar4;
  System_Action_int__o *pSVar5;
  bool bVar6;
  bool bVar7;
  GameManagers_UnsavedPlayerInfo_o *__this_00;
  Photon_Realtime_Player_o *pPVar8;
  Photon_Realtime_Room_o *pPVar9;
  System_Byte_array *obj;
  System_Object_array *parameters;
  Il2CppObject *pIVar10;
  Il2CppClass *klass;
  GameManagers_InGameManager_c *method_00;
  int32_t key;
  
  if (Il2CppMethodInitialized_07545847 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_UnsavedPlayerInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"PlayerInfoRPC");
    Il2CppMethodInitialized_07545847 = '\x01';
  }
  if (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings == (Settings_ProfileSettings_o *)0x0)
  {
    return;
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    if (TypeInfo_GameManagers_InGameManager->static_fields->MyPlayerInfo != (GameManagers_PlayerInfo_o *)0x0)
    goto label_05945cd2;
label_05945d0f:
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameManagers_UnsavedPlayerInfo);
    GameManagers_UnsavedPlayerInfo___ctor(__this_00,(MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    pGVar2 = TypeInfo_GameManagers_InGameManager->static_fields;
    pGVar2->MyPlayerInfo = (GameManagers_PlayerInfo_o *)__this_00;
    Il2CppCodeGenWriteBarrier(&pGVar2->MyPlayerInfo);
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor != 0) goto label_05945cdf;
label_05945d69:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    pGVar1 = TypeInfo_GameManagers_InGameManager->static_fields->MyPlayerInfo;
  }
  else {
    if (TypeInfo_GameManagers_InGameManager->static_fields->MyPlayerInfo == (GameManagers_PlayerInfo_o *)0x0)
    goto label_05945d0f;
label_05945cd2:
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) goto label_05945d69;
label_05945cdf:
    pGVar1 = TypeInfo_GameManagers_InGameManager->static_fields->MyPlayerInfo;
  }
  if ((pGVar1 == (GameManagers_PlayerInfo_o *)0x0) ||
     (pSVar3 = (pGVar1->fields).Profile, pSVar3 == (Settings_ProfileSettings_o *)0x0)) goto label_05946097;
  (*(pSVar3->klass->vtable)._10_Copy.methodPtr)
            (pSVar3,(Settings_BaseSetting_o *)
                    TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings,
             (pSVar3->klass->vtable)._10_Copy.method);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar8 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  bVar6 = true;
  if (pPVar8 == (Photon_Realtime_Player_o *)0x0) {
    key = -1;
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor != 0) goto label_05945e56;
label_05945e79:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    pPVar8 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar8 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar8 == (Photon_Realtime_Player_o *)0x0) goto label_05946097;
    key = (pPVar8->fields).actorNumber;
    if (0 < key) {
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      __this = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo;
      if (__this == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05946097;
      System_Collections_Generic_Dictionary_int__object___set_Item
                (__this,key,(Il2CppObject *)TypeInfo_GameManagers_InGameManager->static_fields->MyPlayerInfo,
                 (MethodInfo_4A0F720 *)
                 MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_set_Item);
      bVar6 = false;
    }
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) goto label_05945e79;
label_05945e56:
    pPVar8 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  if (pPVar8 != (Photon_Realtime_Player_o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      pPVar9 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
      klass = (Il2CppClass *)TypeInfo_GameManagers_InGameManager;
    }
    else {
      pPVar9 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
      klass = (Il2CppClass *)TypeInfo_GameManagers_InGameManager;
    }
    TypeInfo_GameManagers_InGameManager = (GameManagers_InGameManager_c *)klass;
    if (pPVar9 != (Photon_Realtime_Room_o *)0x0) {
      if ((klass->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(klass);
      }
      GameManagers_InGameManager__UpdatePlayerName((MethodInfo *)klass);
      pPVar4 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pPVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar7) {
        method_00 = TypeInfo_GameManagers_InGameManager;
        if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
        }
        obj = GameManagers_InGameManager__SerializeMyPlayerInfo((MethodInfo *)method_00);
        pPVar4 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
        parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
        if (parameters == (System_Object_array *)0x0) {
label_05946097:
          ThrowNullReferenceException();
        }
        if ((obj != (System_Byte_array *)0x0) &&
           (pIVar10 = il2cpp_vm_Object_IsInst(&obj->obj,(((parameters->obj).klass)->_1).element_class),
           pIVar10 == (Il2CppObject *)0x0)) {
          pIVar10 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar10,(MethodInfo *)0x0);
        }
        if ((int)parameters->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[0] = &obj->obj;
        Il2CppCodeGenWriteBarrier(parameters->m_Items);
        if (pPVar4 == (Photon_Pun_PhotonView_o *)0x0) goto label_05946097;
        Photon_Pun_PhotonView__RPC(pPVar4,"PlayerInfoRPC",1,parameters,(MethodInfo *)0x0);
      }
    }
  }
  if (bVar6) goto label_05946008;
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    if (Il2CppMethodInitialized_0754584b != '\0') goto label_05945fd9;
label_05946051:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_0754584b = '\x01';
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor != 0) goto label_05945fea;
label_05946075:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    pSVar5 = TypeInfo_GameManagers_InGameManager->static_fields->PlayerInfoUpdated;
  }
  else {
    if (Il2CppMethodInitialized_0754584b == '\0') goto label_05946051;
label_05945fd9:
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) goto label_05946075;
label_05945fea:
    pSVar5 = TypeInfo_GameManagers_InGameManager->static_fields->PlayerInfoUpdated;
  }
  if (pSVar5 != (System_Action_int__o *)0x0) {
    (*(code *)(pSVar5->fields).invoke_impl)((pSVar5->fields).method_code,key,(pSVar5->fields).method);
  }
label_05946008:
  if (TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName == 2) {
    Settings_SettingsManager__NotifySettingsChanged((MethodInfo *)0x0);
    return;
  }
  return;
}


// GameManagers.InGameManager$$UpdateRoundPlayerProperties
// il2cpp: void GameManagers_InGameManager__UpdateRoundPlayerProperties (const MethodInfo* method);
// 0x593f140

void GameManagers_InGameManager__UpdateRoundPlayerProperties(MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  GameManagers_BaseGameManager_o *pGVar3;
  UnityEngine_Object_o *x;
  Settings_InGameCharacterSettings_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  System_String_o *pSVar6;
  long lVar7;
  Settings_StringSetting_o *pSVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined8 in_RAX;
  GameManagers_PlayerStatus_StaticFields *pGVar11;
  System_Collections_Generic_Dictionary_string__object__o *__this;
  Il2CppObject *value;
  Photon_Realtime_Player_o *player;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (Il2CppMethodInitialized_07545848 == '\0') {
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
    Il2CppMethodInitialized_07545848 = '\x01';
  }
  pGVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar3 == (GameManagers_BaseGameManager_o *)0x0) goto label_0593f53e;
  bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
  if (((pGVar3->klass->_2).typeHierarchyDepth < bVar1) ||
     ((pGVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
    il2cpp_codegen_raise_invalid_cast_exception(pGVar3);
  }
  x = (*(uint64_t *)((char *)pGVar3 + 0x80));
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar9 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar9) {
    if ((*(uint64_t *)((char *)pGVar3 + 0x80)) == (void *)0x0) goto label_0593f53e;
    if (*(char *)((long)(*(uint64_t *)((char *)pGVar3 + 0x80)) + 0x78) != '\0') goto label_0593f288;
    if ((TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus);
    }
    pGVar11 = TypeInfo_GameManagers_PlayerStatus->static_fields;
    bVar9 = false;
  }
  else {
label_0593f288:
    pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
    if ((pSVar4 == (Settings_InGameCharacterSettings_o *)0x0) ||
       (pSVar5 = (pSVar4->fields).ChooseStatus, pSVar5 == (Settings_IntSetting_o *)0x0)) goto label_0593f53e;
    uVar2 = (TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor;
    if ((pSVar5->fields)._value == 2) {
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus);
      }
      pGVar11 = (GameManagers_PlayerStatus_StaticFields *)
                &TypeInfo_GameManagers_PlayerStatus->static_fields->Dead;
    }
    else {
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus);
      }
      pGVar11 = (GameManagers_PlayerStatus_StaticFields *)
                &TypeInfo_GameManagers_PlayerStatus->static_fields->Spectating;
    }
    bVar9 = true;
  }
  pSVar6 = pGVar11->Alive;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  if (__this != (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this,
               (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->Status,
               (Il2CppObject *)pSVar6,
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    pSVar6 = TypeInfo_GameManagers_PlayerProperty->static_fields->CharacterViewId;
    uVar10 = 0xffffffff;
    if (!bVar9) {
      if ((((*(uint64_t *)((char *)pGVar3 + 0x80)) == (void *)0x0) ||
          (lVar7 = *(long *)((long)(*(uint64_t *)((char *)pGVar3 + 0x80)) + 0x80), lVar7 == 0)) ||
         (lVar7 = *(long *)(lVar7 + 0x20), lVar7 == 0)) goto label_0593f53e;
      uVar10 = *(undefined4 *)(lVar7 + 0x94);
    }
    uStack_38 = CONCAT44(uVar10,(undefined4)uStack_38);
    value = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&uStack_38 + 4));
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this,(Il2CppObject *)pSVar6,value,
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
    if ((pSVar4 != (Settings_InGameCharacterSettings_o *)0x0) &&
       (pSVar8 = (pSVar4->fields).CharacterType, pSVar8 != (Settings_StringSetting_o *)0x0)) {
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                 (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->Character,
                 (Il2CppObject *)(pSVar8->fields)._value,
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
      pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
      if ((pSVar4 != (Settings_InGameCharacterSettings_o *)0x0) &&
         (pSVar8 = (pSVar4->fields).Loadout, pSVar8 != (Settings_StringSetting_o *)0x0)) {
        System_Collections_Generic_Dictionary_object__object___Add
                  ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                   (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->Loadout,
                   (Il2CppObject *)(pSVar8->fields)._value,
                   (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
        pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
        if ((pSVar4 != (Settings_InGameCharacterSettings_o *)0x0) &&
           (pSVar8 = (pSVar4->fields).Team, pSVar8 != (Settings_StringSetting_o *)0x0)) {
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                     (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->Team,
                     (Il2CppObject *)(pSVar8->fields)._value,
                     (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add)
          ;
          if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
          }
          player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
          PhotonExtensions__ForceUpdateProps
                    (player,__this,TypeInfo_GameManagers_PlayerProperty->static_fields->Status,
                     TypeInfo_GameManagers_PlayerProperty->static_fields->CharacterViewId,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_0593f53e:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$ResetPlayerInfo
// il2cpp: void GameManagers_InGameManager__ResetPlayerInfo (const MethodInfo* method);
// 0x593eca0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x593ecd9: jmp 0x593ef5f

void GameManagers_InGameManager__ResetPlayerInfo(MethodInfo *method)

{
  uint32_t uVar1;
  int32_t iVar2;
  System_Collections_Generic_Dictionary_int__object__o *pSVar3;
  System_Collections_Generic_HashSet_int__o *pSVar4;
  System_Collections_Generic_Dictionary_int__float__o *__this;
  Settings_ProfileSettings_o *pSVar5;
  GameManagers_InGameManager_StaticFields *pGVar6;
  System_Action_int__o *pSVar7;
  code *vtableDispatch;
  GameManagers_UnsavedPlayerInfo_o *__this_00;
  Photon_Realtime_Player_o *pPVar8;
  
  if (Il2CppMethodInitialized_07545849 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_float_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_UnsavedPlayerInfo);
    Il2CppMethodInitialized_07545849 = '\x01';
    uVar1 = (TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo;
  }
  else {
    pSVar3 = *(System_Collections_Generic_Dictionary_int__object__o **)
              ((long)((Il2CppClass *)TypeInfo_GameManagers_InGameManager)->static_fields + 0x28);
  }
  if (pSVar3 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary_int__object___Clear
              (pSVar3,(MethodInfo_4A0F8F0 *)
                      MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_Clear);
    pSVar4 = TypeInfo_GameManagers_InGameManager->static_fields->MuteEmote;
    if (pSVar4 != (System_Collections_Generic_HashSet_int__o *)0x0) {
      System_Collections_Generic_HashSet_int___Clear
                (pSVar4,(MethodInfo_4FA7DB0 *)MethodInfo_System_Collections_Generic_HashSet_int_Clear);
      pSVar4 = TypeInfo_GameManagers_InGameManager->static_fields->MuteText;
      if (pSVar4 != (System_Collections_Generic_HashSet_int__o *)0x0) {
        System_Collections_Generic_HashSet_int___Clear
                  (pSVar4,(MethodInfo_4FA7DB0 *)MethodInfo_System_Collections_Generic_HashSet_int_Clear);
        pSVar4 = TypeInfo_GameManagers_InGameManager->static_fields->MuteVoiceChat;
        if (pSVar4 != (System_Collections_Generic_HashSet_int__o *)0x0) {
          System_Collections_Generic_HashSet_int___Clear
                    (pSVar4,(MethodInfo_4FA7DB0 *)MethodInfo_System_Collections_Generic_HashSet_int_Clear);
          __this = TypeInfo_GameManagers_InGameManager->static_fields->VoiceChatVolumeMultiplier;
          if (__this != (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
            System_Collections_Generic_Dictionary_int__float___Clear
                      (__this,(MethodInfo_4A17650 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_float_Clear);
            __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameManagers_UnsavedPlayerInfo);
            GameManagers_UnsavedPlayerInfo___ctor(__this_00,(MethodInfo *)0x0);
            if ((__this_00 != (GameManagers_UnsavedPlayerInfo_o *)0x0) &&
               (pSVar5 = (__this_00->fields).Profile, pSVar5 != (Settings_ProfileSettings_o *)0x0)) {
              (*(pSVar5->klass->vtable)._10_Copy.methodPtr)
                        (pSVar5,(Settings_BaseSetting_o *)
                                TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings,
                         (pSVar5->klass->vtable)._10_Copy.method);
              pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)
                       TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo;
              if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
              }
              pPVar8 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
              if ((pPVar8 != (Photon_Realtime_Player_o *)0x0) &&
                 (pSVar3 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
                System_Collections_Generic_Dictionary_int__object___Add
                          (pSVar3,(pPVar8->fields).actorNumber,(Il2CppObject *)__this_00,
                           (MethodInfo_4A0F740 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_Add);
                pGVar6 = TypeInfo_GameManagers_InGameManager->static_fields;
                pGVar6->MyPlayerInfo = (GameManagers_PlayerInfo_o *)__this_00;
                Il2CppCodeGenWriteBarrier(&pGVar6->MyPlayerInfo);
                pPVar8 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
                if (pPVar8 != (Photon_Realtime_Player_o *)0x0) {
                  iVar2 = (pPVar8->fields).actorNumber;
                  if (Il2CppMethodInitialized_0754584b == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
                    Il2CppMethodInitialized_0754584b = '\x01';
                    uVar1 = (TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor;
                  }
                  else {
                    uVar1 = (TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor;
                  }
                  if (uVar1 == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
                    pSVar7 = TypeInfo_GameManagers_InGameManager->static_fields->PlayerInfoUpdated;
                  }
                  else {
                    pSVar7 = *(System_Action_int__o **)
                              ((long)((Il2CppClass *)TypeInfo_GameManagers_InGameManager)->static_fields +
                              0x58);
                  }
                  if (pSVar7 == (System_Action_int__o *)0x0) {
                    return;
                  }
                  vtableDispatch = (code *)(pSVar7->fields).invoke_impl;
                  (*vtableDispatch)
                            ((pSVar7->fields).method_code,iVar2,(pSVar7->fields).method,vtableDispatch)
                  ;
                  return;
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


// GameManagers.InGameManager$$SerializeMyPlayerInfo
// il2cpp: System_Byte_array* GameManagers_InGameManager__SerializeMyPlayerInfo (const MethodInfo* method);
// 0x5940170

System_Byte_array * GameManagers_InGameManager__SerializeMyPlayerInfo(MethodInfo *method)

{
  Utility_Algorithms_CompressionAlgorithm_o *__this;
  GameManagers_PlayerInfo_o *pGVar1;
  System_String_o *str;
  System_Byte_array *pSVar2;
  
  if (Il2CppMethodInitialized_0754584a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_DataCompressors);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_0754584a = '\x01';
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
// 0x59412a0

void GameManagers_InGameManager__NotifyPlayerInfoUpdated(int32_t actorNumber,MethodInfo *method)

{
  uint32_t uVar1;
  System_Action_int__o *pSVar2;
  code *vtableDispatch;
  
  if (Il2CppMethodInitialized_0754584b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_0754584b = '\x01';
    uVar1 = (TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    pSVar2 = TypeInfo_GameManagers_InGameManager->static_fields->PlayerInfoUpdated;
  }
  else {
    pSVar2 = *(System_Action_int__o **)
              ((long)((Il2CppClass *)TypeInfo_GameManagers_InGameManager)->static_fields + 0x58);
  }
  if (pSVar2 == (System_Action_int__o *)0x0) {
    return;
  }
  vtableDispatch = (code *)(pSVar2->fields).invoke_impl;
  (*vtableDispatch)
            ((pSVar2->fields).method_code,actorNumber,(pSVar2->fields).method,vtableDispatch);
  return;
}


// GameManagers.InGameManager$$PrintMOTD
// il2cpp: void GameManagers_InGameManager__PrintMOTD (System_String_o* original, const MethodInfo* method);
// 0x5941630

void GameManagers_InGameManager__PrintMOTD(System_String_o *original,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameMiscSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  bool bVar4;
  System_String_o *message;
  
  if (Il2CppMethodInitialized_0754584c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"MOTD: ");
    Il2CppMethodInitialized_0754584c = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Misc, pSVar2 != (Settings_InGameMiscSettings_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).Motd, pSVar3 != (Settings_StringSetting_o *)0x0)) {
    bVar4 = System_String__op_Inequality(original,(pSVar3->fields)._value,(MethodInfo *)0x0);
    if (!bVar4) {
      return;
    }
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
    if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
        (pSVar2 = (pSVar1->fields).Misc, pSVar2 != (Settings_InGameMiscSettings_o *)0x0)) &&
       (pSVar3 = (pSVar2->fields).Motd, pSVar3 != (Settings_StringSetting_o *)0x0)) {
      message = System_String__Concat_52f0320("MOTD: ",(pSVar3->fields)._value,(MethodInfo *)0x0)
      ;
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      GameManagers_ChatManager__AddLine
                (message,3,false,(System_Nullable_DateTime__o)ZEXT816(0),-1,false,false,-1,false,
                 (MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$PrewarmAssets
// il2cpp: void GameManagers_InGameManager__PrewarmAssets (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x59460b0

void GameManagers_InGameManager__PrewarmAssets(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  bool gore;
  uint uVar1;
  System_String_array *pSVar2;
  System_String_o *name;
  System_String_o *path;
  ulong uVar3;
  ulong uVar4;
  
  if (Il2CppMethodInitialized_0754584d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanComponentCache);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"Blade");
    Il2CppMethodInitialized_0754584d = '\x01';
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  pSVar2 = TypeInfo_GameManagers_InGameManager->static_fields->PrewarmEffects;
  if (pSVar2 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (0 < (int)pSVar2->max_length) {
    uVar3 = pSVar2->max_length & 0xffffffff;
    uVar4 = 0;
    do {
      if (uVar3 <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      name = pSVar2->m_Items[uVar4];
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      path = TypeInfo_Utility_ResourcePaths->static_fields->Effects;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      ApplicationManagers_ResourceManager__LoadAsset(path,name,false,true,(MethodInfo *)0x0);
      uVar4 = uVar4 + 1;
      uVar1 = (uint)pSVar2->max_length;
      uVar3 = (ulong)uVar1;
    } while ((long)uVar4 < (long)(int)uVar1);
  }
  gore = (__this->fields)._TitanGoreEnabled_k__BackingField;
  if ((TypeInfo_Characters_BasicTitanComponentCache->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanComponentCache);
  }
  Characters_BasicTitanComponentCache__PrewarmAssets(gore,(MethodInfo *)0x0);
  if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
  }
  Characters_BasicTitanSetup__PreloadAIAssets((MethodInfo *)0x0);
  UI_KillFeedBigPopup__LoadWeaponIcon("Blade",(MethodInfo *)0x0);
  return;
}


// GameManagers.InGameManager$$Awake
// il2cpp: void GameManagers_InGameManager__Awake (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x5946250
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5946388: jmp 0x59463f3

void GameManagers_InGameManager__Awake(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  Settings_InputSettings_o *pSVar1;
  Settings_GraphicsSettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  Settings_InGameSet_o *pSVar4;
  Settings_InGameMiscSettings_o *pSVar5;
  Settings_StringSetting_o *pSVar6;
  System_String_o *original;
  bool bVar7;
  UnityEngine_GameObject_o *__this_00;
  CustomSkins_SkyboxCustomSkinLoader_o *pCVar8;
  Settings_GeneralInputSettings_o *method_00;
  Settings_InGameSet_o *method_01;
  GameManagers_InGameManager_c *method_02;
  
  if (Il2CppMethodInitialized_0754584e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_SkyboxCustomSkinLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_0754584e = '\x01';
  }
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pCVar8 = UnityEngine_GameObject__AddComponent_object_
                       (__this_00,
                        (MethodInfo_353B6A0 *)
                        MethodInfo_UnityEngine_GameObject_AddComponent_SkyboxCustomSkinLoader);
    (__this->fields)._skyboxCustomSkinLoader = pCVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._skyboxCustomSkinLoader);
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
    if (pSVar1 != (Settings_InputSettings_o *)0x0) {
      method_00 = (pSVar1->fields).General;
      (__this->fields)._generalInputSettings = method_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._generalInputSettings);
      pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
      if ((pSVar2 != (Settings_GraphicsSettings_o *)0x0) &&
         (pSVar3 = (pSVar2->fields).TitanGore, pSVar3 != (Settings_BoolSetting_o *)0x0)) {
        (__this->fields)._TitanGoreEnabled_k__BackingField = (pSVar3->fields)._value;
        GameManagers_InGameManager__PrewarmAssets(__this,(MethodInfo *)method_00);
        method_02 = TypeInfo_GameManagers_InGameManager;
        if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
        }
        GameManagers_InGameManager__ResetRoundPlayerProperties((MethodInfo *)method_02);
        if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
          bVar7 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
        }
        else {
          bVar7 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
        }
        if (bVar7) {
          pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
          if (((pSVar4 == (Settings_InGameSet_o *)0x0) ||
              (pSVar5 = (pSVar4->fields).Misc, pSVar5 == (Settings_InGameMiscSettings_o *)0x0)) ||
             (pSVar6 = (pSVar5->fields).Motd, pSVar6 == (Settings_StringSetting_o *)0x0)) goto label_05946402;
          original = (pSVar6->fields)._value;
          method_01 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
          (*(pSVar4->klass->vtable)._10_Copy.methodPtr)
                    (pSVar4,(Settings_BaseSetting_o *)method_01,(pSVar4->klass->vtable)._10_Copy.method);
          if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
          }
          GameManagers_InGameManager__PrintMOTD(original,(MethodInfo *)method_01);
        }
        GameManagers_BaseGameManager__Awake((GameManagers_BaseGameManager_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_05946402:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$Start
// il2cpp: void GameManagers_InGameManager__Start (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x5946410
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59464b0: lea rdi, [r14 + 0x38]
// asm:   0x59464b4: jmp 0x59465b3
// asm:   0x59465de: cmp byte ptr [rip + 0x1bf7ed1], 0
// asm:   0x59465e5: je 0x5946a13

void GameManagers_InGameManager__Start(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  UnityEngine_Quaternion_StaticFields *pUVar4;
  Photon_Pun_PhotonView_o *__this_00;
  Settings_InGameSet_o *pSVar5;
  Utility_Algorithms_CompressionAlgorithm_o *__this_01;
  Settings_InGameGeneralSettings_o *pSVar6;
  Settings_StringSetting_o *pSVar7;
  Settings_StringSetting_o *pSVar8;
  System_String_o *value;
  Settings_BoolSetting_o *pSVar9;
  UI_InGameMenu_c *pUVar10;
  bool bVar11;
  int32_t iVar12;
  Photon_Realtime_Player_o *pPVar13;
  Il2CppObject *pIVar14;
  System_Object_array *parameters;
  System_String_o *pSVar15;
  System_Byte_array *obj;
  MethodInfo *method_00;
  GameManagers_InGameManager_o *pGVar16;
  UI_InGameMenu_o *pUVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o position;
  undefined1 uStack_75;
  float fStack_74;
  undefined4 uStack_70;
  int32_t iStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (Il2CppMethodInitialized_0754584f == '\0') {
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
    Il2CppMethodInitialized_0754584f = '\x01';
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) goto label_0594658b;
label_05946445:
    pUVar17 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar17 != (UI_InGameMenu_o *)0x0) goto label_05946459;
label_059465a7:
    (__this->fields)._inGameMenu = (UI_InGameMenu_o *)0x0;
  }
  else {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor != 0) goto label_05946445;
label_0594658b:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    pUVar17 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar17 == (UI_InGameMenu_o *)0x0) goto label_059465a7;
label_05946459:
    pUVar10 = TypeInfo_UI_InGameMenu;
    bVar3 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
    if (((((UI_BaseMenu_c *)pUVar17->klass)->_2).typeHierarchyDepth < bVar3) ||
       ((((UI_BaseMenu_c *)pUVar17->klass)->_2).typeHierarchy[(ulong)bVar3 - 1] !=
        (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
label_05946a30:
      il2cpp_codegen_raise_invalid_cast_exception(pUVar17,pUVar10);
    }
    (__this->fields)._inGameMenu = pUVar17;
    if (((((UI_BaseMenu_c *)pUVar17->klass)->_2).typeHierarchyDepth < bVar3) ||
       ((((UI_BaseMenu_c *)pUVar17->klass)->_2).typeHierarchy[(ulong)bVar3 - 1] != (Il2CppClass *)pUVar10))
    goto label_05946a30;
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._inGameMenu);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar11 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  else {
    bVar11 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  if (bVar11) {
    __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    if ((TypeInfo_Utility_DataCompressors->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DataCompressors);
    }
    pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
    if (pSVar5 != (Settings_InGameSet_o *)0x0) {
      __this_01 = (Utility_Algorithms_CompressionAlgorithm_o *)
                  TypeInfo_Utility_DataCompressors->static_fields->Brotli;
      pSVar15 = (*(pSVar5->klass->vtable)._8_SerializeToJsonString.methodPtr)
                          (pSVar5,(pSVar5->klass->vtable)._8_SerializeToJsonString.method);
      if ((__this_01 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) &&
         (obj = Utility_Algorithms_CompressionAlgorithm__CompressString(__this_01,pSVar15,1,(MethodInfo *)0x0)
         , parameters != (System_Object_array *)0x0)) {
        if ((obj != (System_Byte_array *)0x0) &&
           (pIVar14 = il2cpp_vm_Object_IsInst(&obj->obj,(((parameters->obj).klass)->_1).element_class),
           pIVar14 == (Il2CppObject *)0x0)) {
          pIVar14 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar14,(MethodInfo *)0x0);
        }
        if ((int)parameters->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[0] = &obj->obj;
        Il2CppCodeGenWriteBarrier(parameters->m_Items);
        if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this_00,"GameSettingsRPC",0,parameters,(MethodInfo *)0x0);
          pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
          if (((pSVar5 != (Settings_InGameSet_o *)0x0) &&
              (pSVar6 = (pSVar5->fields).General, pSVar6 != (Settings_InGameGeneralSettings_o *)0x0)) &&
             (pSVar7 = (pSVar6->fields).MapName, pSVar7 != (Settings_StringSetting_o *)0x0)) {
            pSVar8 = (pSVar6->fields).GameMode;
            uStack_68 = __this;
            if (pSVar8 != (Settings_StringSetting_o *)0x0) {
              pSVar15 = (pSVar7->fields)._value;
              value = (pSVar8->fields)._value;
              method_00 = (MethodInfo *)
                          il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ExitGames_Client_Photon_Hashtable)
              ;
              ExitGames_Client_Photon_Hashtable___ctor
                        ((ExitGames_Client_Photon_Hashtable_o *)method_00,(MethodInfo *)0x0);
              if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
              }
              if (method_00 != (MethodInfo *)0x0) {
                System_Collections_Generic_Dictionary_object__object___Add
                          ((System_Collections_Generic_Dictionary_object__object__o *)method_00,
                           (Il2CppObject *)TypeInfo_GameManagers_RoomProperty->static_fields->Map,
                           (Il2CppObject *)pSVar15,
                           (MethodInfo_4AAD4E0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_object_object_Add);
                System_Collections_Generic_Dictionary_object__object___Add
                          ((System_Collections_Generic_Dictionary_object__object__o *)method_00,
                           (Il2CppObject *)TypeInfo_GameManagers_RoomProperty->static_fields->GameMode,
                           (Il2CppObject *)value,
                           (MethodInfo_4AAD4E0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_object_object_Add);
                pSVar9 = (pSVar5->fields).Sandbox;
                if (pSVar9 != (Settings_BoolSetting_o *)0x0) {
                  pSVar15 = TypeInfo_GameManagers_RoomProperty->static_fields->Sandbox;
                  uStack_75 = (pSVar9->fields)._value;
                  pIVar14 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_75);
                  System_Collections_Generic_Dictionary_object__object___Add
                            ((System_Collections_Generic_Dictionary_object__object__o *)method_00,
                             (Il2CppObject *)pSVar15,pIVar14,
                             (MethodInfo_4AAD4E0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_object_object_Add);
                  pSVar7 = (pSVar5->fields).ExperienceName;
                  if (pSVar7 != (Settings_StringSetting_o *)0x0) {
                    System_Collections_Generic_Dictionary_object__object___Add
                              ((System_Collections_Generic_Dictionary_object__object__o *)method_00,
                               (Il2CppObject *)TypeInfo_GameManagers_RoomProperty->static_fields->Experience,
                               (Il2CppObject *)(pSVar7->fields)._value,
                               (MethodInfo_4AAD4E0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_object_object_Add);
                    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
                    }
                    pGVar16 = (GameManagers_InGameManager_o *)
                              Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
                    __this = uStack_68;
                    if (pGVar16 != (GameManagers_InGameManager_o *)0x0) {
                      (*((VirtualInvokeData_8545bef1388f *)&(pGVar16->klass->vtable)._5_unknown)->methodPtr)
                                (pGVar16,(ExitGames_Client_Photon_Hashtable_o *)method_00,
                                 (ExitGames_Client_Photon_Hashtable_o *)0x0,(Photon_Realtime_WebFlags_o *)0x0,
                                 ((VirtualInvokeData_8545bef1388f *)&(pGVar16->klass->vtable)._5_unknown)->
                                 method);
                      GameManagers_InGameManager__LoadSkin(pGVar16,method_00);
                      goto joined_r0x05946a0d;
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
joined_r0x05946a0d:
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pGVar16 = *(GameManagers_InGameManager_o **)
             &(TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields;
  fVar22 = (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields.z;
  uVar18 = (int)pGVar16;
  uVar19 = (int)((ulong)pGVar16 >> 0x20);
  uVar20 = 0;
  uVar21 = 0;
  if (Il2CppMethodInitialized_0753e72b == '\0') {
    uStack_60 = 0;
    fStack_74 = fVar22;
    uStack_68 = pGVar16;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_0753e72b = '\x01';
    uVar18 = (undefined4)uStack_68;
    uVar19 = uStack_68._4_4_;
    uVar20 = (undefined4)uStack_60;
    uVar21 = uStack_60._4_4_;
    fVar22 = fStack_74;
  }
  pUVar4 = TypeInfo_UnityEngine_Quaternion->static_fields;
  uVar1._0_4_ = (pUVar4->identityQuaternion).fields.x;
  uVar1._4_4_ = (pUVar4->identityQuaternion).fields.y;
  uVar2._0_4_ = (pUVar4->identityQuaternion).fields.z;
  uVar2._4_4_ = (pUVar4->identityQuaternion).fields.w;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    uStack_68 = (GameManagers_InGameManager_o *)CONCAT44(uVar19,uVar18);
    uStack_60 = CONCAT44(uVar21,uVar20);
    uStack_40 = 0;
    uStack_50 = 0;
    fStack_74 = fVar22;
    uStack_58 = uVar2;
    uStack_48 = uVar1;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    uVar18 = (undefined4)uStack_68;
    uVar19 = uStack_68._4_4_;
    fVar22 = fStack_74;
    uVar1._0_4_ = (undefined4)uStack_48;
    uVar1._4_4_ = uStack_48._4_4_;
    uVar2._0_4_ = (undefined4)uStack_58;
    uVar2._4_4_ = uStack_58._4_4_;
  }
  rotation.fields.y = (float)uVar1._4_4_;
  rotation.fields.x = (float)(undefined4)uVar1;
  rotation.fields.w = (float)uVar2._4_4_;
  rotation.fields.z = (float)(undefined4)uVar2;
  position.fields.y = (float)uVar19;
  position.fields.x = (float)uVar18;
  position.fields.z = fVar22;
  Photon_Pun_PhotonNetwork__Instantiate
            ("Game/PhotonVoicePrefab",position,rotation,0,(System_Object_array *)0x0,(MethodInfo *)0x0);
  GameManagers_BaseGameManager__Start((GameManagers_BaseGameManager_o *)__this,(MethodInfo *)0x0);
  iVar12 = Photon_Pun_PhotonNetwork__GetPing((MethodInfo *)0x0);
  pPVar13 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar15 = TypeInfo_GameManagers_PlayerProperty->static_fields->Ping;
  iStack_6c = iVar12;
  pIVar14 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_6c);
  PhotonExtensions__SetCustomProperty(pPVar13,pSVar15,pIVar14,(MethodInfo *)0x0);
  pPVar13 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  pSVar15 = TypeInfo_GameManagers_PlayerProperty->static_fields->SpectateID;
  uStack_70 = 0xffffffff;
  pIVar14 = il2cpp_vm_Object_Box(g_data_07556710,&uStack_70);
  PhotonExtensions__SetCustomProperty(pPVar13,pSVar15,pIVar14,(MethodInfo *)0x0);
  return;
}


// GameManagers.InGameManager$$IsFinishedLoading
// il2cpp: bool GameManagers_InGameManager__IsFinishedLoading (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x5946f20

bool GameManagers_InGameManager__IsFinishedLoading(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  
  bVar2 = false;
  bVar1 = GameManagers_BaseGameManager__IsFinishedLoading
                    ((GameManagers_BaseGameManager_o *)__this,(MethodInfo *)0x0);
  if (bVar1) {
    bVar2 = (__this->fields)._gameSettingsLoaded != false;
  }
  return bVar2;
}


// GameManagers.InGameManager$$Update
// il2cpp: void GameManagers_InGameManager__Update (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x5946f50

void GameManagers_InGameManager__Update(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  System_String_o *key;
  undefined8 in_RAX;
  Photon_Realtime_Player_o *player;
  Il2CppObject *value;
  float fVar1;
  float fVar2;
  undefined4 uStack_24;
  
  uStack_24 = (undefined4)((ulong)in_RAX >> 0x20);
  if (Il2CppMethodInitialized_07545850 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_07545850 = '\x01';
  }
  if ((__this->fields).State != 0) {
    GameManagers_InGameManager__UpdateInput(__this,method);
  }
  GameManagers_InGameManager__UpdateCleanCharacters(__this,method);
  fVar2 = (__this->fields).EndTimeLeft;
  fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 - fVar1;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  (__this->fields).EndTimeLeft = fVar2;
  fVar2 = (__this->fields).timeSinceLastPingUpdate;
  fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar1 = fVar1 + fVar2;
  (__this->fields).timeSinceLastPingUpdate = fVar1;
  if ((__this->fields).pingUpdateInterval <= fVar1) {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    Photon_Pun_PhotonNetwork__GetPing((MethodInfo *)0x0);
    player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    key = TypeInfo_GameManagers_PlayerProperty->static_fields->Ping;
    value = il2cpp_vm_Object_Box(g_data_07556710,&uStack_24);
    PhotonExtensions__SetCustomProperty(player,key,value,(MethodInfo *)0x0);
    (__this->fields).timeSinceLastPingUpdate = 0.0;
  }
  return;
}


// GameManagers.InGameManager$$OnFinishLoading
// il2cpp: void GameManagers_InGameManager__OnFinishLoading (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x59477d0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5947b5b: jmp 0x5947cf6
// asm:   0x5947b8d: jmp 0x5947a96

void GameManagers_InGameManager__OnFinishLoading(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  float num;
  char cVar1;
  Map_MapScript_o *pMVar2;
  CustomLogic_CustomLogicManager_StaticFields *pCVar3;
  UI_LoadingMenu_o *__this_00;
  Settings_IntSetting_o *pSVar4;
  UI_InGameMenu_o *__this_01;
  Settings_InGameSet_o *pSVar5;
  Settings_InGameModeSettings_o *pSVar6;
  Settings_InGameAddonSettings_o *pSVar7;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *modeSettings;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *addonSettings;
  Photon_Pun_PhotonView_o *pPVar8;
  Settings_UISettings_o *pSVar9;
  Settings_BoolSetting_o *pSVar10;
  CustomLogic_CustomLogicEvaluator_o *pCVar11;
  bool bVar12;
  Settings_SettingsManager_StaticFields *pSVar13;
  System_Object_array *pSVar14;
  System_Byte_array *obj;
  Il2CppObject *pIVar15;
  System_String_o *pSVar16;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *pMVar17;
  GameManagers_InGameManager_c *method_00;
  
  if (Il2CppMethodInitialized_07545851 == '\0') {
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
    Il2CppMethodInitialized_07545851 = '\x01';
  }
  GameManagers_BaseGameManager__OnFinishLoading((GameManagers_BaseGameManager_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pSVar16 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Logic;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  bVar12 = System_String__op_Equality
                     (pSVar16,TypeInfo_Map_BuiltinLevels->static_fields->UseMapLogic,(MethodInfo *)0x0);
  if (bVar12) {
    if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
    }
    pMVar2 = TypeInfo_Map_MapManager->static_fields->MapScript;
    if (pMVar2 == (Map_MapScript_o *)0x0) goto label_05947e13;
    pSVar16 = (pMVar2->fields).Logic;
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
    pCVar3->Logic = pSVar16;
  }
  else {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pSVar16 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Logic;
    if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
    }
    pMVar2 = TypeInfo_Map_MapManager->static_fields->MapScript;
    if (pMVar2 == (Map_MapScript_o *)0x0) goto label_05947e13;
    pSVar16 = System_String__Concat_52f0320(pSVar16,(pMVar2->fields).Logic,(MethodInfo *)0x0);
    pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
    pCVar3->Logic = pSVar16;
  }
  Il2CppCodeGenWriteBarrier(&pCVar3->Logic);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  __this_00 = TypeInfo_UI_UIManager->static_fields->LoadingMenu;
  if (__this_00 == (UI_LoadingMenu_o *)0x0) goto label_05947e13;
  pMVar17 = (MethodInfo *)0x1;
  UI_LoadingMenu__UpdateLoading(__this_00,1.0,true,false,(MethodInfo *)0x0);
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    Map_MapDestruction__RequestState((MethodInfo *)0x0);
    if ((__this->fields).State == 0) goto label_05947b77;
label_05947a84:
    cVar1 = (__this->fields)._songPopupPending;
  }
  else {
    Map_MapDestruction__RequestState((MethodInfo *)0x0);
    if ((__this->fields).State != 0) goto label_05947a84;
label_05947b77:
    (__this->fields).State = 1;
    cVar1 = (__this->fields)._songPopupPending;
  }
  if (cVar1 != '\0') {
    GameManagers_InGameManager__OnSongChange(__this,pMVar17);
  }
  pSVar13 = TypeInfo_Settings_SettingsManager->static_fields;
  if ((pSVar13->InGameCharacterSettings != (Settings_InGameCharacterSettings_o *)0x0) &&
     (pSVar4 = (pSVar13->InGameCharacterSettings->fields).ChooseStatus, pSVar4 != (Settings_IntSetting_o *)0x0
     )) {
    if ((pSVar4->fields)._value == 0) {
      __this_01 = (__this->fields)._inGameMenu;
      if (__this_01 == (UI_InGameMenu_o *)0x0) goto label_05947e13;
      UI_InGameMenu__SetCharacterMenu(__this_01,true,(MethodInfo *)0x0);
      pSVar13 = TypeInfo_Settings_SettingsManager->static_fields;
    }
    pSVar5 = pSVar13->InGameCurrent;
    if (((pSVar5 != (Settings_InGameSet_o *)0x0) &&
        (pSVar6 = (pSVar5->fields).Mode, pSVar6 != (Settings_InGameModeSettings_o *)0x0)) &&
       (pSVar7 = (pSVar5->fields).Addons, pSVar7 != (Settings_InGameAddonSettings_o *)0x0)) {
      modeSettings = (pSVar6->fields).Current;
      addonSettings = (pSVar7->fields).Current;
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      CustomLogic_CustomLogicManager__StartLogic(modeSettings,addonSettings,(MethodInfo *)0x0);
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
        cVar1 = TypeInfo_GameManagers_InGameManager->static_fields->_needSendPlayerInfo;
        pMVar17 = extraout_RDX_00;
      }
      else {
        cVar1 = TypeInfo_GameManagers_InGameManager->static_fields->_needSendPlayerInfo;
        pMVar17 = extraout_RDX;
      }
      if (cVar1 != '\0') {
        pPVar8 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
        pSVar14 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
        method_00 = TypeInfo_GameManagers_InGameManager;
        if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
        }
        obj = GameManagers_InGameManager__SerializeMyPlayerInfo((MethodInfo *)method_00);
        if (pSVar14 == (System_Object_array *)0x0) goto label_05947e13;
        if ((obj != (System_Byte_array *)0x0) &&
           (pIVar15 = il2cpp_vm_Object_IsInst(&obj->obj,(((pSVar14->obj).klass)->_1).element_class),
           pIVar15 == (Il2CppObject *)0x0)) {
          pIVar15 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar15,(MethodInfo *)0x0);
        }
        if ((int)pSVar14->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        pSVar14->m_Items[0] = &obj->obj;
        Il2CppCodeGenWriteBarrier(pSVar14->m_Items);
        if (pPVar8 == (Photon_Pun_PhotonView_o *)0x0) goto label_05947e13;
        Photon_Pun_PhotonView__RPC(pPVar8,"PlayerInfoRPC",1,pSVar14,(MethodInfo *)0x0);
        if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
        }
        bVar12 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
        pMVar17 = extraout_RDX_01;
        if (!bVar12) {
          pPVar8 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
          pSVar14 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
          if (pPVar8 == (Photon_Pun_PhotonView_o *)0x0) goto label_05947e13;
          Photon_Pun_PhotonView__RPC(pPVar8,"NotifyPlayerJoinedRPC",1,pSVar14,(MethodInfo *)0x0);
          pMVar17 = extraout_RDX_02;
        }
        if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
          pMVar17 = extraout_RDX_03;
        }
        TypeInfo_GameManagers_InGameManager->static_fields->_needSendPlayerInfo = false;
      }
      GameManagers_InGameManager__SpawnPlayer(__this,false,pMVar17);
      pSVar9 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
      if ((pSVar9 != (Settings_UISettings_o *)0x0) &&
         (pSVar10 = (pSVar9->fields).GameFeed, pSVar10 != (Settings_BoolSetting_o *)0x0)) {
        if ((pSVar10->fields)._value == false) {
          return;
        }
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        pCVar11 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
        if (pCVar11 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          num = (pCVar11->fields).CurrentTime;
          if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
          }
          pSVar16 = Utility_Util__FormatFloat(num,2,(MethodInfo *)0x0);
          pSVar16 = System_String__Concat_5301f10
                              ("(",pSVar16,")",(MethodInfo *)0x0);
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          pSVar16 = GameManagers_ChatManager__GetColorString(pSVar16,3,false,(MethodInfo *)0x0);
          pSVar16 = System_String__Concat_52f0320(pSVar16," Round started.",(MethodInfo *)0x0);
          GameManagers_ChatManager__AddFeed(pSVar16,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_05947e13:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$UpdateInput
// il2cpp: void GameManagers_InGameManager__UpdateInput (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x5947090
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59471c9: jmp 0x5947281
// asm:   0x594723d: jmp 0x5947281
// asm:   0x594745b: jmp 0x59474a2

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
  GameManagers_InGameManager_c *method_00;
  
  if (Il2CppMethodInitialized_07545852 == '\0') {
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
    Il2CppMethodInitialized_07545852 = '\x01';
  }
  pSVar1 = (__this->fields)._generalInputSettings;
  if ((pSVar1 == (Settings_GeneralInputSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).ToggleScoreboard, pSVar2 == (Settings_KeybindSetting_o *)0x0))
  goto label_05947681;
  bVar8 = Settings_KeybindSetting__GetKey(pSVar2,false,(MethodInfo *)0x0);
  if (!bVar8) {
    pUVar3 = (__this->fields)._inGameMenu;
    if (pUVar3 == (UI_InGameMenu_o *)0x0) goto label_05947681;
    (pUVar3->fields).ScoreboardDismissedUntilRelease = false;
  }
  pSVar1 = (__this->fields)._generalInputSettings;
  if ((pSVar1 == (Settings_GeneralInputSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).ToggleMap, pSVar2 == (Settings_KeybindSetting_o *)0x0)) goto label_05947681;
  bVar8 = Settings_KeybindSetting__GetKey(pSVar2,false,(MethodInfo *)0x0);
  if (!bVar8) {
    pUVar3 = (__this->fields)._inGameMenu;
    if (pUVar3 == (UI_InGameMenu_o *)0x0) goto label_05947681;
    (pUVar3->fields).MapDismissedUntilRelease = false;
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    bVar8 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
    if (bVar8) {
      return;
    }
  }
  else {
    bVar8 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
    if (bVar8) {
      return;
    }
  }
  bVar8 = UnityEngine_Input__GetKeyDown(0x1b,(MethodInfo *)0x0);
  if (bVar8) {
label_0594721f:
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
      bVar9 = Gisketch_Aottg2UI_Actions_GisketchInputCapture__get_BlocksUiInput((MethodInfo *)0x0);
      if (bVar9) {
        return;
      }
    }
    else {
      bVar9 = Gisketch_Aottg2UI_Actions_GisketchInputCapture__get_BlocksUiInput((MethodInfo *)0x0);
      if (bVar9) {
        return;
      }
    }
    bVar9 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_ClosedInGameOverlayThisFrame((MethodInfo *)0x0);
    if ((bVar9) ||
       ((bVar8 && (bVar8 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_IsInGameOverlayActive
                                     ((MethodInfo *)0x0), bVar8)))) {
      return;
    }
    pUVar3 = (__this->fields)._inGameMenu;
    if (pUVar3 == (UI_InGameMenu_o *)0x0) goto label_05947681;
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
    if (pUVar3 == (UI_InGameMenu_o *)0x0) goto label_05947681;
    UI_InGameMenu__SetPauseMenu(pUVar3,!bVar8,(MethodInfo *)0x0);
  }
  else {
    pSVar1 = (__this->fields)._generalInputSettings;
    if ((pSVar1 == (Settings_GeneralInputSettings_o *)0x0) ||
       (pSVar2 = (pSVar1->fields).Pause, pSVar2 == (Settings_KeybindSetting_o *)0x0)) goto label_05947681;
    bVar9 = Settings_KeybindSetting__GetKeyDown(pSVar2,false,(MethodInfo *)0x0);
    if (bVar9) goto label_0594721f;
  }
  pSVar1 = (__this->fields)._generalInputSettings;
  if ((pSVar1 == (Settings_GeneralInputSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).ChangeCharacter, pSVar2 == (Settings_KeybindSetting_o *)0x0))
  goto label_05947681;
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
        if (pCVar4 == (Characters_BaseCharacter_o *)0x0) goto label_05947681;
        if ((pCVar4->fields).Dead == false) {
          (*(pCVar4->klass->vtable)._98_GetKilled.methodPtr)
                    (pCVar4,"",(pCVar4->klass->vtable)._98_GetKilled.method);
        }
      }
      pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
      if ((pSVar5 == (Settings_InGameCharacterSettings_o *)0x0) ||
         (__this_00 = (pSVar5->fields).ChooseStatus, __this_00 == (Settings_IntSetting_o *)0x0))
      goto label_05947681;
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)__this_00,0,
                 (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      pUVar3 = (__this->fields)._inGameMenu;
      if (pUVar3 == (UI_InGameMenu_o *)0x0) goto label_05947681;
      UI_InGameMenu__SetCharacterMenu(pUVar3,true,(MethodInfo *)0x0);
    }
  }
  pSVar1 = (__this->fields)._generalInputSettings;
  if ((pSVar1 == (Settings_GeneralInputSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).RestartGame, pSVar2 == (Settings_KeybindSetting_o *)0x0)) goto label_05947681;
  bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar2,false,(MethodInfo *)0x0);
  if (bVar8) {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      bVar8 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      if (bVar8) goto label_0594746d;
    }
    else {
      bVar8 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      if (bVar8) {
label_0594746d:
        pUVar3 = (__this->fields)._inGameMenu;
        if (pUVar3 == (UI_InGameMenu_o *)0x0) goto label_05947681;
        bVar8 = UI_InGameMenu__IsPauseMenuActive(pUVar3,(MethodInfo *)0x0);
        if (!bVar8) {
          method_00 = TypeInfo_GameManagers_InGameManager;
          if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
          }
          GameManagers_InGameManager__RestartGame((MethodInfo *)method_00);
        }
      }
    }
  }
  pSVar1 = (__this->fields)._generalInputSettings;
  if ((pSVar1 == (Settings_GeneralInputSettings_o *)0x0) ||
     (pSVar6 = (pSVar1->fields).TapScoreboard, pSVar6 == (Settings_BoolSetting_o *)0x0)) goto label_05947681;
  pSVar2 = (pSVar1->fields).ToggleScoreboard;
  if ((pSVar6->fields)._value == false) {
    if (pSVar2 == (Settings_KeybindSetting_o *)0x0) goto label_05947681;
    bVar8 = Settings_KeybindSetting__GetKey(pSVar2,false,(MethodInfo *)0x0);
    pUVar3 = (__this->fields)._inGameMenu;
    if (bVar8) {
      if (pUVar3 == (UI_InGameMenu_o *)0x0) goto label_05947681;
      if ((pUVar3->fields).ScoreboardDismissedUntilRelease != false) goto label_05947534;
      bVar8 = true;
    }
    else {
      if (pUVar3 == (UI_InGameMenu_o *)0x0) goto label_05947681;
label_05947534:
      bVar8 = false;
    }
    UI_InGameMenu__SetScoreboardMenu(pUVar3,bVar8,false,(MethodInfo *)0x0);
  }
  else {
    if (pSVar2 == (Settings_KeybindSetting_o *)0x0) goto label_05947681;
    bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar2,false,(MethodInfo *)0x0);
    if (bVar8) {
      pUVar3 = (__this->fields)._inGameMenu;
      if (pUVar3 == (UI_InGameMenu_o *)0x0) goto label_05947681;
      UI_InGameMenu__ToggleScoreboardMenu(pUVar3,(MethodInfo *)0x0);
    }
  }
  pSVar1 = (__this->fields)._generalInputSettings;
  if ((pSVar1 == (Settings_GeneralInputSettings_o *)0x0) ||
     (pSVar6 = (pSVar1->fields).TapMap, pSVar6 == (Settings_BoolSetting_o *)0x0)) goto label_05947681;
  pSVar2 = (pSVar1->fields).ToggleMap;
  if ((pSVar6->fields)._value == false) {
    if (pSVar2 == (Settings_KeybindSetting_o *)0x0) goto label_05947681;
    bVar8 = Settings_KeybindSetting__GetKey(pSVar2,false,(MethodInfo *)0x0);
    pUVar3 = (__this->fields)._inGameMenu;
    if (bVar8) {
      if (pUVar3 == (UI_InGameMenu_o *)0x0) goto label_05947681;
      if ((pUVar3->fields).MapDismissedUntilRelease != false) goto label_059475d1;
      bVar8 = true;
    }
    else {
      if (pUVar3 == (UI_InGameMenu_o *)0x0) goto label_05947681;
label_059475d1:
      bVar8 = false;
    }
    UI_InGameMenu__SetMapMenu(pUVar3,bVar8,false,(MethodInfo *)0x0);
  }
  else {
    if (pSVar2 == (Settings_KeybindSetting_o *)0x0) goto label_05947681;
    bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar2,false,(MethodInfo *)0x0);
    if (bVar8) {
      pUVar3 = (__this->fields)._inGameMenu;
      if (pUVar3 == (UI_InGameMenu_o *)0x0) goto label_05947681;
      UI_InGameMenu__ToggleMapMenu(pUVar3,(MethodInfo *)0x0);
    }
  }
  pSVar7 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (((pSVar7 == (Settings_InputSettings_o *)0x0) ||
      (pSVar1 = (pSVar7->fields).General, pSVar1 == (Settings_GeneralInputSettings_o *)0x0)) ||
     (pSVar2 = (pSVar1->fields).HideUI, pSVar2 == (Settings_KeybindSetting_o *)0x0)) {
label_05947681:
    ThrowNullReferenceException();
  }
  bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar2,false,(MethodInfo *)0x0);
  if ((bVar8) && (bVar8 = UI_InGameMenu__InMenu((MethodInfo *)0x0), !bVar8)) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Cutscene == false) {
      pUVar3 = (__this->fields)._inGameMenu;
      if (pUVar3 == (UI_InGameMenu_o *)0x0) goto label_05947681;
      bVar8 = UI_InGameMenu__IsActive(pUVar3,(MethodInfo *)0x0);
      UI_InGameMenu__ToggleUI(pUVar3,!bVar8,(MethodInfo *)0x0);
    }
  }
  UnityEngine_Input__GetKeyDown(0x11d,(MethodInfo *)0x0);
  return;
}


// GameManagers.InGameManager$$OnSongChange
// il2cpp: void GameManagers_InGameManager__OnSongChange (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x5947e30

void GameManagers_InGameManager__OnSongChange(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_InGameMenu_o *pUVar2;
  UI_BasePopup_o *x;
  UI_SongPopup_o *__this_00;
  bool bVar3;
  System_Collections_IEnumerator_o *routine;
  
  if (Il2CppMethodInitialized_07545853 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SongPopup);
    Il2CppMethodInitialized_07545853 = '\x01';
  }
  pUVar2 = (__this->fields)._inGameMenu;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    pUVar2 = (__this->fields)._inGameMenu;
    if (pUVar2 == (UI_InGameMenu_o *)0x0) {
label_05947f4a:
      ThrowNullReferenceException();
    }
    x = (pUVar2->fields)._songPopup;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      bVar3 = (*(__this->klass->vtable)._56_IsFinishedLoading.methodPtr)
                        (__this,(__this->klass->vtable)._56_IsFinishedLoading.method);
      if (bVar3) {
        (__this->fields)._songPopupPending = false;
        pUVar2 = (__this->fields)._inGameMenu;
        if ((pUVar2 != (UI_InGameMenu_o *)0x0) &&
           (__this_00 = (UI_SongPopup_o *)(pUVar2->fields)._songPopup, __this_00 != (UI_SongPopup_o *)0x0)) {
          bVar1 = (TypeInfo_UI_SongPopup->_2).typeHierarchyDepth;
          if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
             ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_SongPopup))
          {
            il2cpp_codegen_raise_invalid_cast_exception();
          }
          routine = UI_SongPopup__ShowNextSongPopup(__this_00,(MethodInfo *)0x0);
          UnityEngine_MonoBehaviour__StartCoroutine_691c390
                    ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
          return;
        }
        goto label_05947f4a;
      }
    }
  }
  (__this->fields)._songPopupPending = true;
  return;
}


// GameManagers.InGameManager$$TakePreviewScreenshot
// il2cpp: void GameManagers_InGameManager__TakePreviewScreenshot (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x5947f60
// eh: try 0x5948000..0x594811d -> pad 0x594811f (+2 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5948147..0x59481c8 -> pad 0x59481c8 (+1 call sites) cleanup
// eh: try 0x59481cb..0x59481d0 -> pad 0x59481d8 catch (...) [compiler noexcept guard]
// asm: 49 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x594811d: jmp 0x594811f
// asm:   0x594811f: mov rbx, rax
// asm:   0x5948122: cmp edx, 1
// asm:   0x5948125: jne 0x59481d0
// asm:   0x594812b: mov rdi, rbx
// asm:   0x594812e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5948133: mov rbx, rax
// asm:   0x5948136: lea rax, [rip + 0x1c0e58b]
// asm:   0x594813d: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5948141: mov rax, qword ptr [rbx]
// asm:   0x5948144: mov rsi, qword ptr [rax]
// asm:   0x5948147: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x594814c: test al, al
// asm:   0x594814e: je 0x59481a7
// asm:   0x5948150: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5948155: lea rdi, [rip + 0x19357cc]  ; TypeInfo_UnityEngine_Texture2D
// asm:   0x594815c: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5948161: mov rdi, rax
// asm:   0x5948164: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5948169: mov r14, rax
// asm:   0x594816c: mov rdi, rax
// asm:   0x594816f: mov esi, 1
// asm:   0x5948174: mov edx, 1
// asm:   0x5948179: xor ecx, ecx
// asm:   0x594817b: call 0x69efee0  ; UnityEngine_Texture2D___ctor()
// asm:   0x5948180: test r14, r14
// asm:   0x5948183: je 0x59481a2
// asm:   0x5948185: movaps xmm0, xmmword ptr [rip - 0x494291c]
// asm:   0x594818c: mov rdi, r14
// asm:   0x594818f: xor esi, esi
// asm:   0x5948191: xor edx, edx
// asm:   0x5948193: movaps xmm1, xmm0
// asm:   0x5948196: xor ecx, ecx
// asm:   0x5948198: call 0x69f00e0  ; UnityEngine_Texture2D__SetPixel()
// asm:   0x594819d: jmp 0x5948034
// asm:   0x59481a7: mov edi, 8
// asm:   0x59481ac: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x59481b1: mov rcx, qword ptr [rbx]
// asm:   0x59481b4: mov qword ptr [rax], rcx
// asm:   0x59481b7: lea rsi, [rip + 0x14e5342]
// asm:   0x59481be: mov rdi, rax
// asm:   0x59481c1: xor edx, edx
// asm:   0x59481c3: call 0x6e255c0  ; __cxa_throw()
// asm:   0x59481c8: mov rbx, rax
// asm:   0x59481cb: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59481d0: mov rdi, rbx
// asm:   0x59481d3: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59481d8: mov rdi, rax
// asm:   0x59481db: call 0x2ab61e0  ; __clang_call_terminate()

void GameManagers_InGameManager__TakePreviewScreenshot
               (GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameGeneralSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  UnityEngine_Texture2D_o *__this_00;
  System_String_o *pSVar4;
  System_Byte_array *bytes;
  UnityEngine_Color_o color;
  UnityEngine_Rect_o source;
  
  if (Il2CppMethodInitialized_07545854 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"/MapPreviews");
    il2cpp_codegen_initialize_runtime_metadata(&"Preview.png");
    il2cpp_codegen_initialize_runtime_metadata(&"/MapPreviews/");
    Il2CppMethodInitialized_07545854 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
  UnityEngine_Texture2D___ctor_68efe30(__this_00,0x400,0x400,3,false,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_Texture2D_o *)0x0) {
    ThrowNullReferenceException();
  }
  color.fields.b = 1.0;
  color.fields.a = 1.0;
  color.fields.r = 1.0;
  color.fields.g = 1.0;
  UnityEngine_Texture2D__SetPixel(__this_00,0,0,color,(MethodInfo *)0x0);
  source.fields.m_Width = 1024.0;
  source.fields.m_Height = 1024.0;
  source.fields.m_XMin = 448.0;
  source.fields.m_YMin = 28.0;
  UnityEngine_Texture2D__ReadPixels_68f0830(__this_00,source,0,0,(MethodInfo *)0x0);
  UnityEngine_Texture2D__Apply_68f05d0(__this_00,(MethodInfo *)0x0);
  TextureScaler__ScaleBlocking(__this_00,0x100,0x100,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  pSVar4 = System_String__Concat_52f0320
                     (TypeInfo_Utility_FolderPaths->static_fields->Documents,"/MapPreviews",
                      (MethodInfo *)0x0);
  System_IO_Directory__CreateDirectory(pSVar4,(MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar1 == (Settings_InGameSet_o *)0x0) ||
      (pSVar2 = (pSVar1->fields).General, pSVar2 == (Settings_InGameGeneralSettings_o *)0x0)) ||
     (pSVar3 = (pSVar2->fields).MapName, pSVar3 == (Settings_StringSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pSVar4 = System_String__Concat_5302810
                     (TypeInfo_Utility_FolderPaths->static_fields->Documents,"/MapPreviews/",
                      (pSVar3->fields)._value,"Preview.png",(MethodInfo *)0x0);
  bytes = UnityEngine_ImageConversion__EncodeToPNG(__this_00,(MethodInfo *)0x0);
  System_IO_File__WriteAllBytes(pSVar4,bytes,(MethodInfo *)0x0);
  return;
}


// GameManagers.InGameManager$$FixedUpdate
// il2cpp: void GameManagers_InGameManager__FixedUpdate (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x59481e0

void GameManagers_InGameManager__FixedUpdate(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07545855 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07545855 = '\x01';
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  else {
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  if (bVar2) {
    GameManagers_InGameManager__UpdateSmartTitans(__this,method);
    return;
  }
  return;
}


// GameManagers.InGameManager$$UpdateSmartTitans
// il2cpp: void GameManagers_InGameManager__UpdateSmartTitans (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x5948250
// eh: try 0x5948363..0x59483ec -> pad 0x594845c (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x594842d..0x5948432 -> pad 0x594844d cleanup
// eh: try 0x5948450..0x594845a -> pad 0x59484b3 catch (...) [compiler noexcept guard]
// eh: try 0x5948474..0x5948479 -> pad 0x594849e cleanup
// eh: try 0x59484a1..0x59484ab -> pad 0x59484b3 catch (...) [compiler noexcept guard]
// asm: 44 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5948411: jmp 0x5948415
// asm:   0x5948413: jmp 0x594845c
// asm:   0x5948415: mov r14, rax
// asm:   0x5948418: cmp edx, 1
// asm:   0x594841b: jne 0x5948450
// asm:   0x594841d: mov rdi, r14
// asm:   0x5948420: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5948425: mov rbx, qword ptr [rax]
// asm:   0x5948428: mov qword ptr [rsp + 8], rbx
// asm:   0x594842d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5948432: lea rax, [rip + 0x194539f]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose
// asm:   0x5948439: mov rsi, qword ptr [rax]
// asm:   0x594843c: lea rdi, [rsp + 0x20]
// asm:   0x5948441: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5948446: test rbx, rbx
// asm:   0x5948449: je 0x5948402
// asm:   0x594844b: jmp 0x5948496
// asm:   0x594844d: mov r14, rax
// asm:   0x5948450: lea rdi, [rsp + 8]
// asm:   0x5948455: call 0x2fd34e0  ; il2cpp_runtime_helper_02fd34e0()
// asm:   0x594845a: jmp 0x59484ab
// asm:   0x594845c: mov r14, rax
// asm:   0x594845f: cmp edx, 1
// asm:   0x5948462: jne 0x59484a1
// asm:   0x5948464: mov rdi, r14
// asm:   0x5948467: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x594846c: mov rbx, qword ptr [rax]
// asm:   0x594846f: mov qword ptr [rsp + 8], rbx
// asm:   0x5948474: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5948479: lea rax, [rip + 0x1945388]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose
// asm:   0x5948480: mov rsi, qword ptr [rax]
// asm:   0x5948483: lea rdi, [rsp + 0x40]
// asm:   0x5948488: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x594848d: test rbx, rbx
// asm:   0x5948490: je 0x5948392
// asm:   0x5948496: mov rdi, rbx
// asm:   0x5948499: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x594849e: mov r14, rax
// asm:   0x59484a1: lea rdi, [rsp + 8]
// asm:   0x59484a6: call 0x2fd34b0  ; il2cpp_runtime_helper_02fd34b0()
// asm:   0x59484ab: mov rdi, r14
// asm:   0x59484ae: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59484b3: mov rdi, rax
// asm:   0x59484b6: call 0x2ab61e0  ; __clang_call_terminate()

void GameManagers_InGameManager__UpdateSmartTitans(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  System_Collections_Generic_HashSet_object__o *pSVar1;
  bool bVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined1 auStack_70 [16];
  Characters_BaseTitan_o *pCStack_60;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_58;
  undefined1 auStack_38 [16];
  Characters_BaseTitan_o *pCStack_28;
  
  if (Il2CppMethodInitialized_07545856 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Human_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BasicTitan_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseShifter_GetEnumerator);
    Il2CppMethodInitialized_07545856 = '\x01';
  }
  SStack_58.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  SStack_58.fields._index = 0;
  SStack_58.fields._version = 0;
  SStack_58.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields)._smartTitanCounts;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    System_Collections_Generic_Dictionary_object__int___Clear
              (__this_00,
               (MethodInfo_4A9D930 *)MethodInfo_System_Collections_Generic_Dictionary_Human_int_Clear);
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).Titans;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_70,pSVar1,
                 (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_BasicTitan_GetEnumerator)
      ;
      pCStack_28 = pCStack_60;
      auStack_38._0_8_ = auStack_70._0_8_;
      auStack_38._8_8_ = auStack_70._8_8_;
      auStack_70._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      auStack_70._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_38;
      while( true ) {
        bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_38,
                           (MethodInfo_4C456D0 *)
                           MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_MoveNext);
        if (!bVar2) break;
        GameManagers_InGameManager__TryEnableSmartTitan(__this,pCStack_28,method_00);
      }
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_38,
                 (MethodInfo_4C456C0 *)
                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose);
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).Shifters;
      if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___GetEnumerator
                  (&SStack_58,pSVar1,
                   (MethodInfo_4FB3DA0 *)
                   MethodInfo_System_Collections_Generic_HashSet_BaseShifter_GetEnumerator);
        auStack_70._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
        auStack_70._8_8_ = &SStack_58;
        while( true ) {
          bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (&SStack_58,
                             (MethodInfo_4C456D0 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_MoveNext);
          if (!bVar2) break;
          GameManagers_InGameManager__TryEnableSmartTitan
                    (__this,(Characters_BaseTitan_o *)SStack_58.fields._current,method_01);
        }
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (&SStack_58,
                   (MethodInfo_4C456C0 *)
                   MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseShifter_Dispose);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$TryEnableSmartTitan
// il2cpp: void GameManagers_InGameManager__TryEnableSmartTitan (GameManagers_InGameManager_o* __this, Characters_BaseTitan_o* titan, const MethodInfo* method);
// 0x59484c0
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59486ed: mov edx, dword ptr [rsp + 8]
// asm:   0x59486f1: inc edx
// asm:   0x59486f3: lea rax, [rip + 0x1941136]  ; MethodInfo_System_Collections_Generic_Dictionary_Human_int_set_Item
// asm:   0x59486fa: mov rcx, qword ptr [rax]
// asm:   0x59486fd: mov rsi, r15
// asm:   0x5948700: call 0x4b9d760  ; System_Collections_Generic_Dictionary_object__int___set_Item()
// asm:   0x5948705: jmp 0x594855d

void GameManagers_InGameManager__TryEnableSmartTitan
               (GameManagers_InGameManager_o *__this,Characters_BaseTitan_o *titan,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseDetection_o *pCVar2;
  Characters_BaseCharacter_o *x;
  System_Collections_Generic_Dictionary_object__int__o *pSVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  bool bVar6;
  Controllers_BaseTitanAIController_o *pCVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  UnityEngine_Vector3_o UVar10;
  int32_t local_40;
  float local_3c;
  undefined1 local_38 [16];
  
  if (Il2CppMethodInitialized_07545857 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_BaseTitanAIController);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Human_int_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Human_int_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545857 = '\x01';
  }
  local_40 = 0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)titan,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar6) {
    if (titan == (Characters_BaseTitan_o *)0x0) {
label_0594870a:
      ThrowNullReferenceException();
    }
    if ((((titan->fields).Dead == false) && ((titan->fields).AI != false)) &&
       (bVar6 = (*(titan->klass->vtable)._74_IsMine.methodPtr)(titan,(titan->klass->vtable)._74_IsMine.method)
       , bVar6)) {
      pCVar2 = (titan->fields).Detection;
      if (pCVar2 == (Characters_BaseDetection_o *)0x0) goto label_0594870a;
      x = (pCVar2->fields).ClosestEnemy;
      if (x != (Characters_BaseCharacter_o *)0x0) {
        bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
        if ((bVar1 <= (x->klass->_2).typeHierarchyDepth) &&
           ((x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) {
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar6 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((!bVar6) &&
             (bVar6 = UnityEngine_Behaviour__get_isActiveAndEnabled
                                ((UnityEngine_Behaviour_o *)x,(MethodInfo *)0x0), bVar6)) {
            pSVar3 = (System_Collections_Generic_Dictionary_object__int__o *)
                     (__this->fields)._smartTitanCounts;
            if (pSVar3 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
              System_Collections_Generic_Dictionary_object__int___TryGetValue
                        (pSVar3,(Il2CppObject *)x,&local_40,
                         (MethodInfo_4A9F630 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Human_int_TryGetValue);
              if (1 < local_40) {
                return;
              }
              pUVar4 = (x->fields).Cache;
              if ((pUVar4 != (Utility_BaseComponentCache_o *)0x0) &&
                 (pUVar5 = (pUVar4->fields).Transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
                UVar10 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
                pUVar4 = (titan->fields).Cache;
                if (pUVar4 != (Utility_BaseComponentCache_o *)0x0) {
                  local_38._8_4_ = extraout_XMM0_Dc;
                  local_38._0_8_ = UVar10.fields._0_8_;
                  local_38._12_4_ = extraout_XMM0_Dd;
                  pUVar5 = (pUVar4->fields).Transform;
                  local_3c = UVar10.fields.z;
                  if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                    UVar10 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
                    uVar8 = il2cpp_runtime_helper_05956b50(local_38._0_4_,local_3c,UVar10.fields.x,UVar10.fields.z,0);
                    local_38._0_4_ = uVar8;
                    fVar9 = (*(titan->klass->vtable)._203_GetColliderToggleRadius.methodPtr)
                                      (titan,(titan->klass->vtable)._203_GetColliderToggleRadius.method);
                    if (fVar9 <= (float)local_38._0_4_) {
                      return;
                    }
                    pCVar7 = UnityEngine_Component__GetComponent_object_
                                       ((UnityEngine_Component_o *)titan,
                                        (MethodInfo_34B0830 *)
                                        MethodInfo_UnityEngine_Component_GetComponent_BaseTitanAIController);
                    if (pCVar7 != (Controllers_BaseTitanAIController_o *)0x0) {
                      (pCVar7->fields).SmartAttack = true;
                      pSVar3 = (System_Collections_Generic_Dictionary_object__int__o *)
                               (__this->fields)._smartTitanCounts;
                      if (pSVar3 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                        System_Collections_Generic_Dictionary_object__int___set_Item
                                  (pSVar3,(Il2CppObject *)x,local_40 + 1,
                                   (MethodInfo_4A9D760 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_Human_int_set_Item);
                        return;
                      }
                    }
                  }
                }
              }
            }
            goto label_0594870a;
          }
        }
      }
    }
  }
  return;
}


// GameManagers.InGameManager$$UpdateCleanCharacters
// il2cpp: void GameManagers_InGameManager__UpdateCleanCharacters (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x5947690

void GameManagers_InGameManager__UpdateCleanCharacters
               (GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_Human__o *pSVar1;
  System_Collections_Generic_HashSet_BasicTitan__o *pSVar2;
  System_Collections_Generic_HashSet_BaseShifter__o *pSVar3;
  System_Collections_Generic_HashSet_Horse__o *pSVar4;
  System_Collections_Generic_HashSet_BaseDetection__o *pSVar5;
  
  if (Il2CppMethodInitialized_07545858 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_Util_RemoveNullOrDeadDetections_BaseDetection);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_RemoveNullOrDead_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_RemoveNullOrDead_Horse);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_RemoveNullOrDead_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07545858 = '\x01';
  }
  pSVar1 = (__this->fields).Humans;
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  pSVar1 = (System_Collections_Generic_HashSet_Human__o *)
           Utility_Util__RemoveNullOrDead_object_
                     ((System_Collections_Generic_HashSet_T__o *)pSVar1,
                      (MethodInfo_377E7D0 *)MethodInfo_Utility_Util_RemoveNullOrDead_Human);
  (__this->fields).Humans = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Humans);
  pSVar2 = (System_Collections_Generic_HashSet_BasicTitan__o *)
           Utility_Util__RemoveNullOrDead_object_
                     ((System_Collections_Generic_HashSet_T__o *)(__this->fields).Titans,
                      (MethodInfo_377E7D0 *)MethodInfo_Utility_Util_RemoveNullOrDead_BasicTitan);
  (__this->fields).Titans = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Titans);
  pSVar3 = Utility_Util__RemoveNullOrDeadShifters((__this->fields).Shifters,(MethodInfo *)0x0);
  (__this->fields).Shifters = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Shifters);
  pSVar4 = (System_Collections_Generic_HashSet_Horse__o *)
           Utility_Util__RemoveNullOrDead_object_
                     ((System_Collections_Generic_HashSet_T__o *)(__this->fields).Horses,
                      (MethodInfo_377E7D0 *)MethodInfo_Utility_Util_RemoveNullOrDead_Horse);
  (__this->fields).Horses = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Horses);
  pSVar5 = (System_Collections_Generic_HashSet_BaseDetection__o *)
           Utility_Util__RemoveNullOrDeadDetections_object_
                     ((System_Collections_Generic_HashSet_T__o *)(__this->fields).Detections,
                      (MethodInfo_377E9C0 *)MethodInfo_Utility_Util_RemoveNullOrDeadDetections_BaseDetection);
  (__this->fields).Detections = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Detections);
  return;
}


// GameManagers.InGameManager$$LoadSkin
// il2cpp: void GameManagers_InGameManager__LoadSkin (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x5946a50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5946a84: jmp 0x5946b90

void GameManagers_InGameManager__LoadSkin(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_CustomSkinSettings_o *pSVar2;
  Settings_BaseCustomSkinSettings_SkyboxCustomSkinSet__o *__this_00;
  Settings_BoolSetting_o *pSVar3;
  Settings_InspectorSettingMetadata_o *pSVar4;
  System_Collections_Specialized_OrderedDictionary_o *pSVar5;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSVar6;
  System_Collections_Generic_HashSet_string__o *pSVar7;
  Photon_Pun_PhotonView_o *__this_01;
  bool bVar8;
  System_String_array *value;
  Settings_BaseSetSetting_o *pSVar9;
  System_String_o *pSVar10;
  System_Object_array *parameters;
  Il2CppObject *pIVar11;
  
  if (Il2CppMethodInitialized_07545859 == '\0') {
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
    Il2CppMethodInitialized_07545859 = '\x01';
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) goto label_05946b2b;
label_05946a75:
    bVar8 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if (!bVar8) goto label_05946b90;
label_05946b3b:
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
    if (((pSVar2 == (Settings_CustomSkinSettings_o *)0x0) ||
        (__this_00 = (pSVar2->fields).Skybox,
        __this_00 == (Settings_BaseCustomSkinSettings_SkyboxCustomSkinSet__o *)0x0)) ||
       (pSVar3 = (__this_00->fields).SkinsEnabled, pSVar3 == (Settings_BoolSetting_o *)0x0))
    goto label_05946ee4;
    if ((pSVar3->fields)._value == false) goto label_05946b90;
    pSVar3 = (__this_00->fields).SkinsLocal;
    if (pSVar3 == (Settings_BoolSetting_o *)0x0) goto label_05946ee4;
    if ((pSVar3->fields)._value != false) goto label_05946b90;
    pSVar9 = Settings_SetSettingsContainer_object___GetSelectedSet
                       ((Settings_SetSettingsContainer_T__o *)__this_00,
                        (MethodInfo_40477A0 *)
                        MethodInfo_Settings_SetSettingsContainer_SkyboxCustomSkinSet_GetSelectedSet);
    if (pSVar9 == (Settings_BaseSetSetting_o *)0x0) {
      SZArrayNew(TypeInfo_string_array,6);
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_Settings_SkyboxCustomSkinSet->_2).typeHierarchyDepth;
    if (((pSVar9->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar9->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_SkyboxCustomSkinSet)) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar9);
    }
    value = (System_String_array *)SZArrayNew(TypeInfo_string_array,6);
    if (((*(uint64_t *)((char *)pSVar9 + 0x48)) == (Settings_BaseSetSetting_c *)0x0) || (value == (System_String_array *)0x0))
    goto label_05946ee4;
    if ((int)value->max_length == 0) goto label_05946ee9;
    value->m_Items[0] = (((*(Il2CppClass **)((char *)pSVar9 + 0x48)))->_1).byval_arg.data;
    Il2CppCodeGenWriteBarrier(value->m_Items);
    if ((*(uint64_t *)((char *)pSVar9 + 0x50)) == (void *)0x0) goto label_05946ee4;
    if ((value->max_length & 0xfffffffe) == 0) goto label_05946ee9;
    value->m_Items[1] = *(System_String_o **)((long)(*(uint64_t *)((char *)pSVar9 + 0x50)) + 0x20);
    Il2CppCodeGenWriteBarrier(value->m_Items + 1);
    pSVar4 = (*(uint64_t *)((char *)pSVar9 + 0x58));
    if (pSVar4 == (Settings_InspectorSettingMetadata_o *)0x0) goto label_05946ee4;
    if ((uint)value->max_length < 3) goto label_05946ee9;
    value->m_Items[2] = (pSVar4->fields).Header;
    Il2CppCodeGenWriteBarrier(value->m_Items + 2);
    pSVar5 = (*(uint64_t *)((char *)pSVar9 + 0x60));
    if (pSVar5 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_05946ee4;
    if ((value->max_length & 0xfffffffc) == 0) goto label_05946ee9;
    value->m_Items[3] = *(System_String_o **)&(pSVar5->fields)._initialCapacity;
    Il2CppCodeGenWriteBarrier(value->m_Items + 3);
    pSVar6 = (*(uint64_t *)((char *)pSVar9 + 0x68));
    if (pSVar6 == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) goto label_05946ee4;
    if ((uint)value->max_length < 5) goto label_05946ee9;
    value->m_Items[4] = *(System_String_o **)&(pSVar6->fields)._count;
    Il2CppCodeGenWriteBarrier(value->m_Items + 4);
    pSVar7 = (*(uint64_t *)((char *)pSVar9 + 0x70));
    if (pSVar7 == (System_Collections_Generic_HashSet_string__o *)0x0) goto label_05946ee4;
    if ((uint)value->max_length < 6) goto label_05946ee9;
    pSVar10 = *(System_String_o **)&(pSVar7->fields)._count;
  }
  else {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor != 0) goto label_05946a75;
label_05946b2b:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar8 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if (bVar8) goto label_05946b3b;
label_05946b90:
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      bVar8 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    }
    else {
      bVar8 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    }
    if (!bVar8) {
      return;
    }
    value = (System_String_array *)SZArrayNew(TypeInfo_string_array,6);
    if (value == (System_String_array *)0x0) goto label_05946ee4;
    if ((int)value->max_length == 0) goto label_05946ee9;
    value->m_Items[0] = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(value->m_Items);
    if ((value->max_length & 0xfffffffe) == 0) goto label_05946ee9;
    value->m_Items[1] = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(value->m_Items + 1);
    if ((uint)value->max_length < 3) goto label_05946ee9;
    value->m_Items[2] = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(value->m_Items + 2);
    if ((value->max_length & 0xfffffffc) == 0) goto label_05946ee9;
    value->m_Items[3] = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(value->m_Items + 3);
    if ((uint)value->max_length < 5) goto label_05946ee9;
    value->m_Items[4] = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(value->m_Items + 4);
    if ((uint)value->max_length < 6) goto label_05946ee9;
    pSVar10 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  value->m_Items[5] = pSVar10;
  Il2CppCodeGenWriteBarrier(value->m_Items + 5);
  pSVar10 = System_String__Join(",",value,(MethodInfo *)0x0);
  __this_01 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  if (parameters != (System_Object_array *)0x0) {
    if ((pSVar10 != (System_String_o *)0x0) &&
       (pIVar11 = il2cpp_vm_Object_IsInst
                            ((Il2CppObject *)pSVar10,(((parameters->obj).klass)->_1).element_class),
       pIVar11 == (Il2CppObject *)0x0)) {
      pIVar11 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar11,(MethodInfo *)0x0);
    }
    if ((int)parameters->max_length == 0) {
label_05946ee9:
      ThrowIndexOutOfRangeException();
    }
    parameters->m_Items[0] = (Il2CppObject *)pSVar10;
    Il2CppCodeGenWriteBarrier(parameters->m_Items);
    if (__this_01 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this_01,"LoadSkyboxRPC",3,parameters,(MethodInfo *)0x0);
      return;
    }
  }
label_05946ee4:
  ThrowNullReferenceException();
}


// GameManagers.InGameManager$$OnLoadSkyboxRPC
// il2cpp: System_Collections_IEnumerator_o* GameManagers_InGameManager__OnLoadSkyboxRPC (GameManagers_InGameManager_o* __this, System_String_array* urls, const MethodInfo* method);
// 0x5948710

System_Collections_IEnumerator_o *
GameManagers_InGameManager__OnLoadSkyboxRPC
          (GameManagers_InGameManager_o *__this,System_String_array *urls,MethodInfo *method)

{
  GameManagers_InGameManager__OnLoadSkyboxRPC_d__126_o *__this_00;
  
  if (Il2CppMethodInitialized_0754585a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager_OnLoadSkyboxRPC_d__126);
    Il2CppMethodInitialized_0754585a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameManagers_InGameManager_OnLoadSkyboxRPC_d__126);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).urls = urls;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).urls);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// GameManagers.InGameManager$$ReloadSkybox
// il2cpp: System_Collections_IEnumerator_o* GameManagers_InGameManager__ReloadSkybox (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x59487b0

System_Collections_IEnumerator_o *
GameManagers_InGameManager__ReloadSkybox(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  GameManagers_InGameManager__ReloadSkybox_d__127_o *__this_00;
  
  if (Il2CppMethodInitialized_0754585b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager_ReloadSkybox_d__127);
    Il2CppMethodInitialized_0754585b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_GameManagers_InGameManager_ReloadSkybox_d__127);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// GameManagers.InGameManager$$IsValidSkybox
// il2cpp: bool GameManagers_InGameManager__IsValidSkybox (GameManagers_InGameManager_o* __this, System_String_array* urls, const MethodInfo* method);
// 0x5948820

bool GameManagers_InGameManager__IsValidSkybox
               (GameManagers_InGameManager_o *__this,System_String_array *urls,MethodInfo *method)

{
  uint uVar1;
  System_String_o *url;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (Il2CppMethodInitialized_0754585c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
    Il2CppMethodInitialized_0754585c = '\x01';
  }
  if (urls == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (((urls->max_length & 0xffffffff) == 6) && (0 < (int)urls->max_length)) {
    uVar4 = 0;
    uVar3 = 6;
    do {
      if (uVar3 <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      url = urls->m_Items[uVar4];
      if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
      }
      bVar2 = CustomSkins_TextureDownloader__ValidTextureURL(url,false,(MethodInfo *)0x0);
      if (bVar2) {
        return true;
      }
      uVar4 = uVar4 + 1;
      uVar1 = (uint)urls->max_length;
      uVar3 = (ulong)uVar1;
    } while ((long)uVar4 < (long)(int)uVar1);
  }
  return false;
}


// GameManagers.InGameManager$$.ctor
// il2cpp: void GameManagers_InGameManager___ctor (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x59488d0

void GameManagers_InGameManager___ctor(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_Human__o *__this_00;
  System_Collections_Generic_HashSet_BasicTitan__o *__this_01;
  System_Collections_Generic_HashSet_BaseShifter__o *__this_02;
  System_Collections_Generic_HashSet_Horse__o *__this_03;
  System_Collections_Generic_Dictionary_Human__int__o *__this_04;
  System_Collections_Generic_List_PhotonVoiceSync__o *__this_05;
  System_Collections_Generic_HashSet_BaseDetection__o *__this_06;
  
  if (Il2CppMethodInitialized_0754585d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Human_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_Human_int);
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
    Il2CppMethodInitialized_0754585d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Human);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_Human_ctor);
  (__this->fields).Humans = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Humans);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_BasicTitan)
  ;
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_01,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_BasicTitan_ctor);
  (__this->fields).Titans = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Titans);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_BaseShifter);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_02,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_BaseShifter_ctor);
  (__this->fields).Shifters = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Shifters);
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Horse);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_03,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_Horse_ctor);
  (__this->fields).Horses = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Horses);
  __this_04 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Human_int);
  System_Collections_Generic_Dictionary_object__int____ctor
            ((System_Collections_Generic_Dictionary_object__int__o *)__this_04,
             (MethodInfo_4A9CB80 *)MethodInfo_System_Collections_Generic_Dictionary_Human_int_ctor);
  (__this->fields)._smartTitanCounts = __this_04;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._smartTitanCounts);
  __this_05 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_PhotonVoiceSync);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_05,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_PhotonVoiceSync_ctor);
  (__this->fields).PhotonVoiceSyncs = __this_05;
  Il2CppCodeGenWriteBarrier(&(__this->fields).PhotonVoiceSyncs);
  (__this->fields).PauseTimeLeft = -1.0;
  __this_06 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_BaseDetection);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_06,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_BaseDetection_ctor);
  (__this->fields).Detections = __this_06;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Detections);
  (__this->fields).pingUpdateInterval = 10.0;
  GameManagers_BaseGameManager___ctor((GameManagers_BaseGameManager_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.InGameManager$$.cctor
// il2cpp: void GameManagers_InGameManager___cctor (const MethodInfo* method);
// 0x5948b30

void GameManagers_InGameManager___cctor(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  GameManagers_InGameManager_StaticFields *pGVar3;
  System_String_o *pSVar4;
  MethodInfo *pMVar5;
  System_String_array *pSVar6;
  System_Collections_Generic_List_string__o *pSVar7;
  System_Collections_Generic_Dictionary_int__PlayerInfo__o *__this;
  System_Collections_Generic_HashSet_int__o *pSVar8;
  System_Collections_Generic_Dictionary_int__float__o *__this_00;
  GameManagers_UnsavedPlayerInfo_o *__this_01;
  
  if (Il2CppMethodInitialized_0754585e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_int_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_int_PlayerInfo)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTags);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_UnsavedPlayerInfo);
    Il2CppMethodInitialized_0754585e = '\x01';
  }
  pSVar6 = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  if (pSVar6 == (System_String_array *)0x0) {
label_05949244:
    ThrowNullReferenceException();
  }
  if ((int)pSVar6->max_length != 0) {
    pSVar6->m_Items[0] = TypeInfo_Effects_EffectPrefabs->static_fields->Blood1;
    Il2CppCodeGenWriteBarrier(pSVar6->m_Items);
    if ((pSVar6->max_length & 0xfffffffe) != 0) {
      pSVar6->m_Items[1] = TypeInfo_Effects_EffectPrefabs->static_fields->CriticalHit;
      Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 1);
      if (2 < (uint)pSVar6->max_length) {
        pSVar6->m_Items[2] = TypeInfo_Effects_EffectPrefabs->static_fields->Boom2;
        Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 2);
        pGVar3 = TypeInfo_GameManagers_InGameManager->static_fields;
        pGVar3->PrewarmEffects = pSVar6;
        Il2CppCodeGenWriteBarrier(&pGVar3->PrewarmEffects);
        pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_List_object__o *)pSVar7,
                   (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
        if ((TypeInfo_Map_MapTags->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTags);
        }
        pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (pSVar7 != (System_Collections_Generic_List_string__o *)0x0) {
          pSVar4 = TypeInfo_Map_MapTags->static_fields->HumanSpawnPointBlue;
          piVar1 = &(pSVar7->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar6 = (pSVar7->fields)._items;
          if (pSVar6 != (System_String_array *)0x0) {
            uVar2 = (pSVar7->fields)._size;
            if (uVar2 < (uint)pSVar6->max_length) {
              (pSVar7->fields)._size = uVar2 + 1;
              pSVar6->m_Items[(int)uVar2] = pSVar4;
              Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pSVar4,
                         (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
            }
            pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
            pSVar4 = TypeInfo_Map_MapTags->static_fields->HumanSpawnPoint;
            piVar1 = &(pSVar7->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar6 = (pSVar7->fields)._items;
            if (pSVar6 != (System_String_array *)0x0) {
              uVar2 = (pSVar7->fields)._size;
              if (uVar2 < (uint)pSVar6->max_length) {
                (pSVar7->fields)._size = uVar2 + 1;
                pSVar6->m_Items[(int)uVar2] = pSVar4;
                Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pSVar4,
                           (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
              }
              pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
              pSVar4 = TypeInfo_Map_MapTags->static_fields->HumanSpawnPointRed;
              piVar1 = &(pSVar7->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar6 = (pSVar7->fields)._items;
              if (pSVar6 != (System_String_array *)0x0) {
                uVar2 = (pSVar7->fields)._size;
                if (uVar2 < (uint)pSVar6->max_length) {
                  (pSVar7->fields)._size = uVar2 + 1;
                  pSVar6->m_Items[(int)uVar2] = pSVar4;
                  Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar2);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pSVar4,
                             (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
                }
                pGVar3 = TypeInfo_GameManagers_InGameManager->static_fields;
                pGVar3->BlueSpawnTags = pSVar7;
                Il2CppCodeGenWriteBarrier(&pGVar3->BlueSpawnTags);
                pSVar7 = il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
                System_Collections_Generic_List_object____ctor
                          ((System_Collections_Generic_List_object__o *)pSVar7,
                           (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
                pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
                if (pSVar7 != (System_Collections_Generic_List_string__o *)0x0) {
                  pSVar4 = TypeInfo_Map_MapTags->static_fields->HumanSpawnPointRed;
                  piVar1 = &(pSVar7->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar6 = (pSVar7->fields)._items;
                  if (pSVar6 != (System_String_array *)0x0) {
                    uVar2 = (pSVar7->fields)._size;
                    if (uVar2 < (uint)pSVar6->max_length) {
                      (pSVar7->fields)._size = uVar2 + 1;
                      pSVar6->m_Items[(int)uVar2] = pSVar4;
                      Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar2);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pSVar4,
                                 (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
                    }
                    pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
                    pSVar4 = TypeInfo_Map_MapTags->static_fields->HumanSpawnPoint;
                    piVar1 = &(pSVar7->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar6 = (pSVar7->fields)._items;
                    if (pSVar6 != (System_String_array *)0x0) {
                      uVar2 = (pSVar7->fields)._size;
                      if (uVar2 < (uint)pSVar6->max_length) {
                        (pSVar7->fields)._size = uVar2 + 1;
                        pSVar6->m_Items[(int)uVar2] = pSVar4;
                        Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar2);
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize
                                  ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pSVar4,
                                   (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
                      }
                      pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
                      pSVar4 = TypeInfo_Map_MapTags->static_fields->HumanSpawnPointBlue;
                      piVar1 = &(pSVar7->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      pSVar6 = (pSVar7->fields)._items;
                      if (pSVar6 != (System_String_array *)0x0) {
                        uVar2 = (pSVar7->fields)._size;
                        if (uVar2 < (uint)pSVar6->max_length) {
                          (pSVar7->fields)._size = uVar2 + 1;
                          pSVar6->m_Items[(int)uVar2] = pSVar4;
                          Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar2);
                        }
                        else {
                          System_Collections_Generic_List_object___AddWithResize
                                    ((System_Collections_Generic_List_object__o *)pSVar7,
                                     (Il2CppObject *)pSVar4,
                                     (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
                        }
                        pGVar3 = TypeInfo_GameManagers_InGameManager->static_fields;
                        pGVar3->RedSpawnTags = pSVar7;
                        Il2CppCodeGenWriteBarrier(&pGVar3->RedSpawnTags);
                        pSVar7 = il2cpp_codegen_object_new
                                           ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
                        System_Collections_Generic_List_object____ctor
                                  ((System_Collections_Generic_List_object__o *)pSVar7,
                                   (MethodInfo_395C910 *)
                                   MethodInfo_System_Collections_Generic_List_string_ctor);
                        pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
                        if (pSVar7 != (System_Collections_Generic_List_string__o *)0x0) {
                          pSVar4 = TypeInfo_Map_MapTags->static_fields->HumanSpawnPoint;
                          piVar1 = &(pSVar7->fields)._version;
                          *piVar1 = *piVar1 + 1;
                          pSVar6 = (pSVar7->fields)._items;
                          if (pSVar6 != (System_String_array *)0x0) {
                            uVar2 = (pSVar7->fields)._size;
                            if (uVar2 < (uint)pSVar6->max_length) {
                              (pSVar7->fields)._size = uVar2 + 1;
                              pSVar6->m_Items[(int)uVar2] = pSVar4;
                              Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar2);
                            }
                            else {
                              System_Collections_Generic_List_object___AddWithResize
                                        ((System_Collections_Generic_List_object__o *)pSVar7,
                                         (Il2CppObject *)pSVar4,
                                         (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
                            }
                            pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
                            pSVar4 = TypeInfo_Map_MapTags->static_fields->HumanSpawnPointBlue;
                            piVar1 = &(pSVar7->fields)._version;
                            *piVar1 = *piVar1 + 1;
                            pSVar6 = (pSVar7->fields)._items;
                            if (pSVar6 != (System_String_array *)0x0) {
                              uVar2 = (pSVar7->fields)._size;
                              if (uVar2 < (uint)pSVar6->max_length) {
                                (pSVar7->fields)._size = uVar2 + 1;
                                pSVar6->m_Items[(int)uVar2] = pSVar4;
                                Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar2);
                              }
                              else {
                                System_Collections_Generic_List_object___AddWithResize
                                          ((System_Collections_Generic_List_object__o *)pSVar7,
                                           (Il2CppObject *)pSVar4,
                                           (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
                              }
                              pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
                              pSVar4 = TypeInfo_Map_MapTags->static_fields->HumanSpawnPointRed;
                              piVar1 = &(pSVar7->fields)._version;
                              *piVar1 = *piVar1 + 1;
                              pSVar6 = (pSVar7->fields)._items;
                              if (pSVar6 != (System_String_array *)0x0) {
                                uVar2 = (pSVar7->fields)._size;
                                if (uVar2 < (uint)pSVar6->max_length) {
                                  (pSVar7->fields)._size = uVar2 + 1;
                                  pSVar6->m_Items[(int)uVar2] = pSVar4;
                                  Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar2);
                                }
                                else {
                                  System_Collections_Generic_List_object___AddWithResize
                                            ((System_Collections_Generic_List_object__o *)pSVar7,
                                             (Il2CppObject *)pSVar4,
                                             (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
                                }
                                pGVar3 = TypeInfo_GameManagers_InGameManager->static_fields;
                                pGVar3->HumanSpawnTags = pSVar7;
                                Il2CppCodeGenWriteBarrier(&pGVar3->HumanSpawnTags);
                                __this = il2cpp_codegen_object_new
                                                   ((Il2CppClass *)
                                                    TypeInfo_System_Collections_Generic_Dictionary_int_PlayerInfo
                                                   );
                                System_Collections_Generic_Dictionary_int__object____ctor
                                          ((System_Collections_Generic_Dictionary_int__object__o *)__this,
                                           (MethodInfo_4A0EB10 *)
                                           MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_ctor
                                          );
                                pGVar3 = TypeInfo_GameManagers_InGameManager->static_fields;
                                pGVar3->AllPlayerInfo = __this;
                                Il2CppCodeGenWriteBarrier(&pGVar3->AllPlayerInfo);
                                pSVar8 = il2cpp_codegen_object_new
                                                   ((Il2CppClass *)
                                                    TypeInfo_System_Collections_Generic_HashSet_int);
                                System_Collections_Generic_HashSet_int____ctor
                                          (pSVar8,(MethodInfo_4FA7520 *)
                                                  MethodInfo_System_Collections_Generic_HashSet_int_ctor);
                                pGVar3 = TypeInfo_GameManagers_InGameManager->static_fields;
                                pGVar3->MuteEmote = pSVar8;
                                Il2CppCodeGenWriteBarrier(&pGVar3->MuteEmote);
                                pSVar8 = il2cpp_codegen_object_new
                                                   ((Il2CppClass *)
                                                    TypeInfo_System_Collections_Generic_HashSet_int);
                                System_Collections_Generic_HashSet_int____ctor
                                          (pSVar8,(MethodInfo_4FA7520 *)
                                                  MethodInfo_System_Collections_Generic_HashSet_int_ctor);
                                pGVar3 = TypeInfo_GameManagers_InGameManager->static_fields;
                                pGVar3->MuteText = pSVar8;
                                Il2CppCodeGenWriteBarrier(&pGVar3->MuteText);
                                pSVar8 = il2cpp_codegen_object_new
                                                   ((Il2CppClass *)
                                                    TypeInfo_System_Collections_Generic_HashSet_int);
                                System_Collections_Generic_HashSet_int____ctor
                                          (pSVar8,(MethodInfo_4FA7520 *)
                                                  MethodInfo_System_Collections_Generic_HashSet_int_ctor);
                                pGVar3 = TypeInfo_GameManagers_InGameManager->static_fields;
                                pGVar3->MuteVoiceChat = pSVar8;
                                Il2CppCodeGenWriteBarrier(&pGVar3->MuteVoiceChat);
                                __this_00 = il2cpp_codegen_object_new
                                                      ((Il2CppClass *)
                                                       TypeInfo_System_Collections_Generic_Dictionary_int_float
                                                      );
                                System_Collections_Generic_Dictionary_int__float____ctor
                                          (__this_00,
                                           (MethodInfo_4A16850 *)
                                           MethodInfo_System_Collections_Generic_Dictionary_int_float_ctor);
                                pGVar3 = TypeInfo_GameManagers_InGameManager->static_fields;
                                pGVar3->VoiceChatVolumeMultiplier = __this_00;
                                Il2CppCodeGenWriteBarrier(&pGVar3->VoiceChatVolumeMultiplier);
                                __this_01 = il2cpp_codegen_object_new
                                                      ((Il2CppClass *)TypeInfo_GameManagers_UnsavedPlayerInfo)
                                ;
                                GameManagers_UnsavedPlayerInfo___ctor(__this_01,(MethodInfo *)0x0);
                                pGVar3 = TypeInfo_GameManagers_InGameManager->static_fields;
                                pGVar3->MyPlayerInfo = (GameManagers_PlayerInfo_o *)__this_01;
                                Il2CppCodeGenWriteBarrier(&pGVar3->MyPlayerInfo);
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
            }
          }
        }
        goto label_05949244;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


