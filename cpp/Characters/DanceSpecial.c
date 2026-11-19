// Type: Characters.DanceSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/DanceSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/DanceSpecial.cs
// --------------------------------

// Characters.DanceSpecial$$get_ActiveTime
// il2cpp: float Characters_DanceSpecial__get_ActiveTime (Characters_DanceSpecial_o* __this, const MethodInfo* method);
// 0x5c0ad40

float Characters_DanceSpecial__get_ActiveTime(Characters_DanceSpecial_o *__this,MethodInfo *method)

{
  return 2.0;
}


// Characters.DanceSpecial$$get_GroundedOnly
// il2cpp: bool Characters_DanceSpecial__get_GroundedOnly (Characters_DanceSpecial_o* __this, const MethodInfo* method);
// 0x5c0ad50

bool Characters_DanceSpecial__get_GroundedOnly(Characters_DanceSpecial_o *__this,MethodInfo *method)

{
  return false;
}


// Characters.DanceSpecial$$.ctor
// il2cpp: void Characters_DanceSpecial___ctor (Characters_DanceSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x5c0ad60

void Characters_DanceSpecial___ctor
               (Characters_DanceSpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  (__this->fields).Range = 200.0;
  Characters_BaseEmoteSpecial___ctor((Characters_BaseEmoteSpecial_o *)__this,owner,method);
  (__this->fields).Cooldown = 20.0;
  return;
}


// Characters.DanceSpecial$$Activate
// il2cpp: void Characters_DanceSpecial__Activate (Characters_DanceSpecial_o* __this, const MethodInfo* method);
// 0x5c0ad80

void Characters_DanceSpecial__Activate(Characters_DanceSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *__this_00;
  
  if (Il2CppMethodInitialized_075476b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075476b7 = '\x01';
  }
  __this_00 = (__this->fields)._human;
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  if (__this_00 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  Characters_Human__EmoteAnimation
            (__this_00,TypeInfo_Characters_HumanAnimations->static_fields->SpecialArmin,(MethodInfo *)0x0);
  return;
}


// Characters.DanceSpecial$$Deactivate
// il2cpp: void Characters_DanceSpecial__Deactivate (Characters_DanceSpecial_o* __this, const MethodInfo* method);
// 0x5c0adf0
// eh: try 0x5c0af34..0x5c0b0b7 -> pad 0x5c0b0d5 (+10 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c0b0ed..0x5c0b0f2 -> pad 0x5c0b111 cleanup
// eh: try 0x5c0b114..0x5c0b11e -> pad 0x5c0b126 catch (...) [compiler noexcept guard]
// asm: 35 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c0afd1: jmp 0x5c0affb
// asm:   0x5c0b04e: jmp 0x5c0b065
// asm:   0x5c0b0c1: jmp 0x5c0b0d5
// asm:   0x5c0b0c3: jmp 0x5c0b0d5
// asm:   0x5c0b0c5: jmp 0x5c0b0d5
// asm:   0x5c0b0c7: jmp 0x5c0b0d5
// asm:   0x5c0b0c9: jmp 0x5c0b0d5
// asm:   0x5c0b0cb: jmp 0x5c0b0d5
// asm:   0x5c0b0cd: jmp 0x5c0b0d5
// asm:   0x5c0b0cf: jmp 0x5c0b0d5
// asm:   0x5c0b0d1: jmp 0x5c0b0d5
// asm:   0x5c0b0d3: jmp 0x5c0b0d5
// asm:   0x5c0b0d5: mov rbx, rax
// asm:   0x5c0b0d8: cmp edx, 1
// asm:   0x5c0b0db: jne 0x5c0b114
// asm:   0x5c0b0dd: mov rdi, rbx
// asm:   0x5c0b0e0: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c0b0e5: mov rbx, qword ptr [rax]
// asm:   0x5c0b0e8: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5c0b0ed: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c0b0f2: lea rax, [rip + 0x168270f]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose
// asm:   0x5c0b0f9: mov rsi, qword ptr [rax]
// asm:   0x5c0b0fc: mov rdi, rsp
// asm:   0x5c0b0ff: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5c0b104: test rbx, rbx
// asm:   0x5c0b107: je 0x5c0b08b
// asm:   0x5c0b109: mov rdi, rbx
// asm:   0x5c0b10c: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c0b111: mov rbx, rax
// asm:   0x5c0b114: lea rdi, [rsp + 0x18]
// asm:   0x5c0b119: call 0x2fd90d0  ; il2cpp_runtime_helper_02fd90d0()
// asm:   0x5c0b11e: mov rdi, rbx
// asm:   0x5c0b121: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c0b126: mov rdi, rax
// asm:   0x5c0b129: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_DanceSpecial__Deactivate(Characters_DanceSpecial_o *__this,MethodInfo *method)

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
  
  if (Il2CppMethodInitialized_075476b8 == '\0') {
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
    Il2CppMethodInitialized_075476b8 = '\x01';
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
label_05c0af30:
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
          if (fVar8 < 0.0) goto label_05c0b050;
          in_XMM1_Db = 0;
          in_XMM1_Dc = 0;
          in_XMM1_Dd = 0;
        } while ((__this->fields).Range <= SQRT(fVar8));
        goto label_05c0b065;
      }
    }
  }
  ThrowNullReferenceException();
label_05c0b050:
  fVar8 = sqrtf(fVar8);
  in_XMM1_Db = 0;
  in_XMM1_Dc = 0;
  in_XMM1_Dd = 0;
  if (fVar8 < (__this->fields).Range) {
label_05c0b065:
    in_XMM1_Dd = 0;
    in_XMM1_Dc = 0;
    in_XMM1_Db = 0;
    Characters_BasicTitan__Laugh
              ((Characters_BasicTitan_o *)__this_01,(Characters_BaseCharacter_o *)(__this->fields)._human,
               (MethodInfo *)0x0);
  }
  goto label_05c0af30;
}


