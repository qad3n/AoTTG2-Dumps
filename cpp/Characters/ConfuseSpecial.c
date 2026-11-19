// Type: Characters.ConfuseSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/ConfuseSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/ConfuseSpecial.cs
// --------------------------------

// Characters.ConfuseSpecial$$get_ActiveTime
// il2cpp: float Characters_ConfuseSpecial__get_ActiveTime (Characters_ConfuseSpecial_o* __this, const MethodInfo* method);
// 0x5c0a970

float Characters_ConfuseSpecial__get_ActiveTime(Characters_ConfuseSpecial_o *__this,MethodInfo *method)

{
  return 10.0;
}


// Characters.ConfuseSpecial$$get_GroundedOnly
// il2cpp: bool Characters_ConfuseSpecial__get_GroundedOnly (Characters_ConfuseSpecial_o* __this, const MethodInfo* method);
// 0x5c0a980

bool Characters_ConfuseSpecial__get_GroundedOnly(Characters_ConfuseSpecial_o *__this,MethodInfo *method)

{
  return false;
}


// Characters.ConfuseSpecial$$.ctor
// il2cpp: void Characters_ConfuseSpecial___ctor (Characters_ConfuseSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x5c0a990

void Characters_ConfuseSpecial___ctor
               (Characters_ConfuseSpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  (__this->fields).Range = 250.0;
  Characters_BaseEmoteSpecial___ctor((Characters_BaseEmoteSpecial_o *)__this,owner,method);
  (__this->fields).Cooldown = 30.0;
  return;
}


// Characters.ConfuseSpecial$$Activate
// il2cpp: void Characters_ConfuseSpecial__Activate (Characters_ConfuseSpecial_o* __this, const MethodInfo* method);
// 0x5c0a9b0
// eh: try 0x5c0ab24..0x5c0acb8 -> pad 0x5c0acd6 (+10 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c0acee..0x5c0acf3 -> pad 0x5c0ad12 cleanup
// eh: try 0x5c0ad15..0x5c0ad1f -> pad 0x5c0ad27 catch (...) [compiler noexcept guard]
// asm: 35 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c0abc1: jmp 0x5c0abeb
// asm:   0x5c0ac3e: jmp 0x5c0ac55
// asm:   0x5c0acc2: jmp 0x5c0acd6
// asm:   0x5c0acc4: jmp 0x5c0acd6
// asm:   0x5c0acc6: jmp 0x5c0acd6
// asm:   0x5c0acc8: jmp 0x5c0acd6
// asm:   0x5c0acca: jmp 0x5c0acd6
// asm:   0x5c0accc: jmp 0x5c0acd6
// asm:   0x5c0acce: jmp 0x5c0acd6
// asm:   0x5c0acd0: jmp 0x5c0acd6
// asm:   0x5c0acd2: jmp 0x5c0acd6
// asm:   0x5c0acd4: jmp 0x5c0acd6
// asm:   0x5c0acd6: mov rbx, rax
// asm:   0x5c0acd9: cmp edx, 1
// asm:   0x5c0acdc: jne 0x5c0ad15
// asm:   0x5c0acde: mov rdi, rbx
// asm:   0x5c0ace1: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c0ace6: mov rbx, qword ptr [rax]
// asm:   0x5c0ace9: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5c0acee: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c0acf3: lea rax, [rip + 0x1682b0e]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose
// asm:   0x5c0acfa: mov rsi, qword ptr [rax]
// asm:   0x5c0acfd: mov rdi, rsp
// asm:   0x5c0ad00: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5c0ad05: test rbx, rbx
// asm:   0x5c0ad08: je 0x5c0ac8c
// asm:   0x5c0ad0a: mov rdi, rbx
// asm:   0x5c0ad0d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c0ad12: mov rbx, rax
// asm:   0x5c0ad15: lea rdi, [rsp + 0x18]
// asm:   0x5c0ad1a: call 0x2fd90a0  ; il2cpp_runtime_helper_02fd90a0()
// asm:   0x5c0ad1f: mov rdi, rbx
// asm:   0x5c0ad22: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c0ad27: mov rdi, rax
// asm:   0x5c0ad2a: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_ConfuseSpecial__Activate(Characters_ConfuseSpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  Characters_Human_o *pCVar3;
  GameManagers_BaseGameManager_o *pGVar4;
  Photon_Pun_PhotonView_o *__this_00;
  Utility_BaseComponentCache_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  Il2CppObject *pIVar7;
  bool bVar8;
  float fVar9;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 in_XMM1_Db;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Vector3_o UVar10;
  System_Collections_Generic_HashSet_Enumerator_T__o local_98;
  undefined1 local_80 [16];
  Il2CppObject *local_70;
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
  
  if (Il2CppMethodInitialized_075476b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BasicTitan_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_075476b6 = '\x01';
  }
  local_98.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_98.fields._index = 0;
  local_98.fields._version = 0;
  local_98.fields._current = (Il2CppObject *)0x0;
  pCVar3 = (__this->fields)._human;
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  if (pCVar3 != (Characters_Human_o *)0x0) {
    Characters_Human__EmoteAnimation
              (pCVar3,TypeInfo_Characters_HumanAnimations->static_fields->Dodge,(MethodInfo *)0x0);
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
        local_98.fields._current = local_70;
        local_98.fields._set = (System_Collections_Generic_HashSet_T__o *)local_80._0_8_;
        local_98.fields._index = local_80._8_4_;
        local_98.fields._version = local_80._12_4_;
        local_80._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
        local_80._8_8_ = &local_98;
label_05c0ab20:
        do {
          bVar8 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (&local_98,
                             (MethodInfo_4C456D0 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_MoveNext);
          pIVar7 = local_98.fields._current;
          if (!bVar8) {
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
          UVar10 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
          local_48 = UVar10.fields.z;
          local_38._8_4_ = extraout_XMM0_Dc;
          local_38._0_8_ = UVar10.fields._0_8_;
          local_38._12_4_ = extraout_XMM0_Dd;
          uStack_44 = in_XMM1_Db;
          uStack_40 = in_XMM1_Dc;
          uStack_3c = in_XMM1_Dd;
          if (pIVar7 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          if (pIVar7[8].klass == (Il2CppClass *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar6 = (UnityEngine_Transform_o *)((pIVar7[8].klass)->_1).name;
          if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          UVar10 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
          local_58 = UVar10.fields.z;
          local_68._8_4_ = extraout_XMM0_Dc_00;
          local_68._0_8_ = UVar10.fields._0_8_;
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
          fVar9 = ((float)local_38._4_4_ - (float)local_68._4_4_) *
                  ((float)local_38._4_4_ - (float)local_68._4_4_) +
                  ((float)local_38._0_4_ - (float)local_68._0_4_) *
                  ((float)local_38._0_4_ - (float)local_68._0_4_) +
                  (local_48 - local_58) * (local_48 - local_58);
          if (fVar9 < 0.0) goto label_05c0ac40;
          in_XMM1_Db = 0;
          in_XMM1_Dc = 0;
          in_XMM1_Dd = 0;
        } while ((__this->fields).Range <= SQRT(fVar9));
        goto label_05c0ac55;
      }
    }
  }
  ThrowNullReferenceException();
label_05c0ac40:
  fVar9 = sqrtf(fVar9);
  in_XMM1_Db = 0;
  in_XMM1_Dc = 0;
  in_XMM1_Dd = 0;
  if (fVar9 < (__this->fields).Range) {
label_05c0ac55:
    in_XMM1_Dd = 0;
    in_XMM1_Dc = 0;
    in_XMM1_Db = 0;
    if (*(char *)&pIVar7[8].monitor != '\0') {
      (*pIVar7->klass->vtable[0xaf].methodPtr)(pIVar7,pIVar7->klass->vtable[0xaf].method);
    }
  }
  goto label_05c0ab20;
}


// Characters.ConfuseSpecial$$Deactivate
// il2cpp: void Characters_ConfuseSpecial__Deactivate (Characters_ConfuseSpecial_o* __this, const MethodInfo* method);
// 0x5c0ad30

void Characters_ConfuseSpecial__Deactivate(Characters_ConfuseSpecial_o *__this,MethodInfo *method)

{
  return;
}


