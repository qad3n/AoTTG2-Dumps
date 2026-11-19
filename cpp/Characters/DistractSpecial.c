// Type: Characters.DistractSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/DistractSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/DistractSpecial.cs
// --------------------------------

// Characters.DistractSpecial$$get_ActiveTime
// il2cpp: float Characters_DistractSpecial__get_ActiveTime (Characters_DistractSpecial_o* __this, const MethodInfo* method);
// 0x5c0b130

float Characters_DistractSpecial__get_ActiveTime(Characters_DistractSpecial_o *__this,MethodInfo *method)

{
  return 1.0;
}


// Characters.DistractSpecial$$get_GroundedOnly
// il2cpp: bool Characters_DistractSpecial__get_GroundedOnly (Characters_DistractSpecial_o* __this, const MethodInfo* method);
// 0x5c0b140

bool Characters_DistractSpecial__get_GroundedOnly(Characters_DistractSpecial_o *__this,MethodInfo *method)

{
  return false;
}


// Characters.DistractSpecial$$.ctor
// il2cpp: void Characters_DistractSpecial___ctor (Characters_DistractSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x5c0b150

void Characters_DistractSpecial___ctor
               (Characters_DistractSpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  (__this->fields).Range = 300.0;
  Characters_BaseEmoteSpecial___ctor((Characters_BaseEmoteSpecial_o *)__this,owner,method);
  (__this->fields).Cooldown = 20.0;
  return;
}


// Characters.DistractSpecial$$Activate
// il2cpp: void Characters_DistractSpecial__Activate (Characters_DistractSpecial_o* __this, const MethodInfo* method);
// 0x5c0b170

void Characters_DistractSpecial__Activate(Characters_DistractSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *__this_00;
  
  if (Il2CppMethodInitialized_075476b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075476b9 = '\x01';
  }
  __this_00 = (__this->fields)._human;
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  if (__this_00 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  Characters_Human__EmoteAnimation
            (__this_00,TypeInfo_Characters_HumanAnimations->static_fields->SpecialMarco0,(MethodInfo *)0x0);
  return;
}


// Characters.DistractSpecial$$Deactivate
// il2cpp: void Characters_DistractSpecial__Deactivate (Characters_DistractSpecial_o* __this, const MethodInfo* method);
// 0x5c0b1e0
// eh: try 0x5c0b324..0x5c0b4a7 -> pad 0x5c0b4c5 (+10 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c0b4dd..0x5c0b4e2 -> pad 0x5c0b501 cleanup
// eh: try 0x5c0b504..0x5c0b50e -> pad 0x5c0b516 catch (...) [compiler noexcept guard]
// asm: 35 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c0b3c1: jmp 0x5c0b3eb
// asm:   0x5c0b43e: jmp 0x5c0b455
// asm:   0x5c0b4b1: jmp 0x5c0b4c5
// asm:   0x5c0b4b3: jmp 0x5c0b4c5
// asm:   0x5c0b4b5: jmp 0x5c0b4c5
// asm:   0x5c0b4b7: jmp 0x5c0b4c5
// asm:   0x5c0b4b9: jmp 0x5c0b4c5
// asm:   0x5c0b4bb: jmp 0x5c0b4c5
// asm:   0x5c0b4bd: jmp 0x5c0b4c5
// asm:   0x5c0b4bf: jmp 0x5c0b4c5
// asm:   0x5c0b4c1: jmp 0x5c0b4c5
// asm:   0x5c0b4c3: jmp 0x5c0b4c5
// asm:   0x5c0b4c5: mov rbx, rax
// asm:   0x5c0b4c8: cmp edx, 1
// asm:   0x5c0b4cb: jne 0x5c0b504
// asm:   0x5c0b4cd: mov rdi, rbx
// asm:   0x5c0b4d0: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c0b4d5: mov rbx, qword ptr [rax]
// asm:   0x5c0b4d8: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5c0b4dd: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c0b4e2: lea rax, [rip + 0x168231f]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose
// asm:   0x5c0b4e9: mov rsi, qword ptr [rax]
// asm:   0x5c0b4ec: mov rdi, rsp
// asm:   0x5c0b4ef: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5c0b4f4: test rbx, rbx
// asm:   0x5c0b4f7: je 0x5c0b47b
// asm:   0x5c0b4f9: mov rdi, rbx
// asm:   0x5c0b4fc: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c0b501: mov rbx, rax
// asm:   0x5c0b504: lea rdi, [rsp + 0x18]
// asm:   0x5c0b509: call 0x2fd9100  ; il2cpp_runtime_helper_02fd9100()
// asm:   0x5c0b50e: mov rdi, rbx
// asm:   0x5c0b511: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c0b516: mov rdi, rax
// asm:   0x5c0b519: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_DistractSpecial__Deactivate(Characters_DistractSpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  Characters_Human_o *pCVar3;
  GameManagers_BaseGameManager_o *pGVar4;
  Photon_Pun_PhotonView_o *__this_00;
  Utility_BaseComponentCache_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  Il2CppObject *__this_01;
  bool bVar7;
  float fVar8;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 in_XMM1_Db;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Vector3_o UVar9;
  System_Collections_Generic_HashSet_Enumerator_T__o local_98;
  undefined1 local_80 [16];
  Characters_BasicTitan_o *local_70;
  undefined1 local_68 [16];
  float local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [16];
  
  if (Il2CppMethodInitialized_075476ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BasicTitan_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_075476ba = '\x01';
  }
  local_98.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_98.fields._index = 0;
  local_98.fields._version = 0;
  local_98.fields._current = (Il2CppObject *)0x0;
  pCVar3 = (__this->fields)._human;
  if (pCVar3 != (Characters_Human_o *)0x0) {
    if ((pCVar3->fields)._state != 8) {
      return;
    }
    pGVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar4 != (GameManagers_BaseGameManager_o *)0x0) {
      bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
      if (((pGVar4->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      __this_00 = (*(uint64_t *)((char *)pGVar4 + 0x48));
      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
        System_Collections_Generic_HashSet_object___GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_80,
                   (System_Collections_Generic_HashSet_object__o *)__this_00,
                   (MethodInfo_4FB3DA0 *)
                   MethodInfo_System_Collections_Generic_HashSet_BasicTitan_GetEnumerator);
        local_98.fields._current = (Il2CppObject *)local_70;
        local_98.fields._set = (System_Collections_Generic_HashSet_T__o *)local_80._0_8_;
        local_98.fields._index = local_80._8_4_;
        local_98.fields._version = local_80._12_4_;
        local_80._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
        local_80._8_8_ = &local_98;
label_05c0b320:
        do {
          bVar7 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (&local_98,
                             (MethodInfo_4C456D0 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_MoveNext);
          __this_01 = local_98.fields._current;
          if (!bVar7) {
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      (&local_98,
                       (MethodInfo_4C456C0 *)
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose);
            return;
          }
          pCVar3 = (__this->fields)._human;
          if (pCVar3 == (Characters_Human_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar5 = (pCVar3->fields).Cache;
          if (pUVar5 == (Utility_BaseComponentCache_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar6 = (pUVar5->fields).Transform;
          if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          UVar9 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
          local_48 = UVar9.fields.z;
          local_38._8_4_ = extraout_XMM0_Dc;
          local_38._0_8_ = UVar9.fields._0_8_;
          local_38._12_4_ = extraout_XMM0_Dd;
          uStack_44 = in_XMM1_Db;
          uStack_40 = in_XMM1_Dc;
          uStack_3c = in_XMM1_Dd;
          if ((Characters_BasicTitan_o *)__this_01 == (Characters_BasicTitan_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar5 = ((Characters_BasicTitan_Fields *)((long)__this_01 + 0x10))->Cache;
          if (pUVar5 == (Utility_BaseComponentCache_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar6 = (pUVar5->fields).Transform;
          if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          UVar9 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
          local_58 = UVar9.fields.z;
          local_68._8_4_ = extraout_XMM0_Dc_00;
          local_68._0_8_ = UVar9.fields._0_8_;
          local_68._12_4_ = extraout_XMM0_Dd_00;
          uStack_54 = in_XMM1_Db;
          uStack_50 = in_XMM1_Dc;
          uStack_4c = in_XMM1_Dd;
          if (Il2CppMethodInitialized_0753e7b7 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
            Il2CppMethodInitialized_0753e7b7 = '\x01';
            uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
          }
          else {
            uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
          }
          if (uVar2 == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          }
          fVar8 = ((float)local_38._4_4_ - (float)local_68._4_4_) *
                  ((float)local_38._4_4_ - (float)local_68._4_4_) +
                  ((float)local_38._0_4_ - (float)local_68._0_4_) *
                  ((float)local_38._0_4_ - (float)local_68._0_4_) +
                  (local_48 - local_58) * (local_48 - local_58);
          if (fVar8 < 0.0) goto label_05c0b440;
          in_XMM1_Db = 0;
          in_XMM1_Dc = 0;
          in_XMM1_Dd = 0;
        } while ((__this->fields).Range <= SQRT(fVar8));
        goto label_05c0b455;
      }
    }
  }
  ThrowNullReferenceException();
label_05c0b440:
  fVar8 = sqrtf(fVar8);
  in_XMM1_Db = 0;
  in_XMM1_Dc = 0;
  in_XMM1_Dd = 0;
  if (fVar8 < (__this->fields).Range) {
label_05c0b455:
    in_XMM1_Dd = 0;
    in_XMM1_Dc = 0;
    in_XMM1_Db = 0;
    Characters_BasicTitan__Distract
              ((Characters_BasicTitan_o *)__this_01,(Characters_BaseCharacter_o *)(__this->fields)._human,
               (MethodInfo *)0x0);
  }
  goto label_05c0b320;
}


