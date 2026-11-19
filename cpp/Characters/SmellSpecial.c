// Type: Characters.SmellSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Characters/SmellSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/SmellSpecial.cs
// --------------------------------

// Characters.SmellSpecial$$get_ActiveTime
// il2cpp: float Characters_SmellSpecial__get_ActiveTime (Characters_SmellSpecial_o* __this, const MethodInfo* method);
// 0x5c0dc50

float Characters_SmellSpecial__get_ActiveTime(Characters_SmellSpecial_o *__this,MethodInfo *method)

{
  return 30.0;
}


// Characters.SmellSpecial$$get_GroundedOnly
// il2cpp: bool Characters_SmellSpecial__get_GroundedOnly (Characters_SmellSpecial_o* __this, const MethodInfo* method);
// 0x5c0dc60

bool Characters_SmellSpecial__get_GroundedOnly(Characters_SmellSpecial_o *__this,MethodInfo *method)

{
  return false;
}


// Characters.SmellSpecial$$.ctor
// il2cpp: void Characters_SmellSpecial___ctor (Characters_SmellSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x5c0dc70

void Characters_SmellSpecial___ctor
               (Characters_SmellSpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  (__this->fields).Range = 600.0;
  (__this->fields).Delay = 1.0;
  Characters_BaseEmoteSpecial___ctor((Characters_BaseEmoteSpecial_o *)__this,owner,method);
  (__this->fields).Cooldown = 60.0;
  return;
}


// Characters.SmellSpecial$$Activate
// il2cpp: void Characters_SmellSpecial__Activate (Characters_SmellSpecial_o* __this, const MethodInfo* method);
// 0x5c0dc90
// eh: try 0x5c0de24..0x5c0e00e -> pad 0x5c0e030 (+12 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c0e048..0x5c0e04d -> pad 0x5c0e072 cleanup
// eh: try 0x5c0e075..0x5c0e07f -> pad 0x5c0e087 catch (...) [compiler noexcept guard]
// asm: 37 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c0dec0: jmp 0x5c0deeb
// asm:   0x5c0df3d: jmp 0x5c0df55
// asm:   0x5c0e018: jmp 0x5c0e030
// asm:   0x5c0e01a: jmp 0x5c0e030
// asm:   0x5c0e01c: jmp 0x5c0e030
// asm:   0x5c0e01e: jmp 0x5c0e030
// asm:   0x5c0e020: jmp 0x5c0e030
// asm:   0x5c0e022: jmp 0x5c0e030
// asm:   0x5c0e024: jmp 0x5c0e030
// asm:   0x5c0e026: jmp 0x5c0e030
// asm:   0x5c0e028: jmp 0x5c0e030
// asm:   0x5c0e02a: jmp 0x5c0e030
// asm:   0x5c0e02c: jmp 0x5c0e030
// asm:   0x5c0e02e: jmp 0x5c0e030
// asm:   0x5c0e030: mov rbx, rax
// asm:   0x5c0e033: cmp edx, 1
// asm:   0x5c0e036: jne 0x5c0e075
// asm:   0x5c0e038: mov rdi, rbx
// asm:   0x5c0e03b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c0e040: mov rbx, qword ptr [rax]
// asm:   0x5c0e043: mov qword ptr [rsp + 0x28], rbx
// asm:   0x5c0e048: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c0e04d: lea rax, [rip + 0x167f7b4]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose
// asm:   0x5c0e054: mov rsi, qword ptr [rax]
// asm:   0x5c0e057: lea rdi, [rsp + 0x10]
// asm:   0x5c0e05c: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5c0e061: test rbx, rbx
// asm:   0x5c0e064: je 0x5c0dfe1
// asm:   0x5c0e06a: mov rdi, rbx
// asm:   0x5c0e06d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c0e072: mov rbx, rax
// asm:   0x5c0e075: lea rdi, [rsp + 0x28]
// asm:   0x5c0e07a: call 0x2fd9130  ; il2cpp_runtime_helper_02fd9130()
// asm:   0x5c0e07f: mov rdi, rbx
// asm:   0x5c0e082: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c0e087: mov rdi, rax
// asm:   0x5c0e08a: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_SmellSpecial__Activate(Characters_SmellSpecial_o *__this,MethodInfo *method)

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
  float fVar9;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 in_XMM1_Db;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o UVar11;
  float fStack_a8;
  float fStack_a4;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_98;
  undefined1 auStack_80 [16];
  Characters_BaseCharacter_o *pCStack_70;
  float fStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [24];
  
  if (Il2CppMethodInitialized_075476c4 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_075476c4 = '\x01';
  }
  SStack_98.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  SStack_98.fields._index = 0;
  SStack_98.fields._version = 0;
  SStack_98.fields._current = (Il2CppObject *)0x0;
  pCVar3 = (__this->fields)._human;
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  if (pCVar3 != (Characters_Human_o *)0x0) {
    Characters_Human__EmoteAnimation
              (pCVar3,TypeInfo_Characters_HumanAnimations->static_fields->SpecialShifter,(MethodInfo *)0x0);
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
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_80,
                   (System_Collections_Generic_HashSet_object__o *)__this_00,
                   (MethodInfo_4FB3DA0 *)
                   MethodInfo_System_Collections_Generic_HashSet_BasicTitan_GetEnumerator);
        SStack_98.fields._current = (Il2CppObject *)pCStack_70;
        SStack_98.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_80._0_8_;
        SStack_98.fields._index = auStack_80._8_4_;
        SStack_98.fields._version = auStack_80._12_4_;
        auStack_80._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
        auStack_80._8_8_ = &SStack_98;
label_05c0de20:
        do {
          bVar7 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (&SStack_98,
                             (MethodInfo_4C456D0 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_MoveNext);
          __this_01 = SStack_98.fields._current;
          if (!bVar7) {
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      (&SStack_98,
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
          fStack_58 = UVar10.fields.z;
          uStack_54 = in_XMM1_Db;
          uStack_50 = in_XMM1_Dc;
          uStack_4c = in_XMM1_Dd;
          if ((Characters_BaseCharacter_o *)__this_01 == (Characters_BaseCharacter_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar5 = ((Characters_BaseCharacter_Fields *)((long)__this_01 + 0x10))->Cache;
          if (pUVar5 == (Utility_BaseComponentCache_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar6 = (pUVar5->fields).Transform;
          if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          UVar11 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
          fStack_68 = UVar11.fields.z;
          auStack_48._8_4_ = extraout_XMM0_Dc;
          auStack_48._0_8_ = UVar11.fields._0_8_;
          auStack_48._12_4_ = extraout_XMM0_Dd;
          uStack_64 = in_XMM1_Db;
          uStack_60 = in_XMM1_Dc;
          uStack_5c = in_XMM1_Dd;
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
          fStack_a8 = UVar10.fields.x;
          fStack_a4 = UVar10.fields.y;
          fVar8 = (fStack_a4 - (float)auStack_48._4_4_) * (fStack_a4 - (float)auStack_48._4_4_) +
                  (fStack_a8 - (float)auStack_48._0_4_) * (fStack_a8 - (float)auStack_48._0_4_) +
                  (fStack_58 - fStack_68) * (fStack_58 - fStack_68);
          if (fVar8 < 0.0) goto label_05c0df40;
          fVar8 = SQRT(fVar8);
          fVar9 = (__this->fields).Range;
          in_XMM1_Db = 0;
          in_XMM1_Dc = 0;
          in_XMM1_Dd = 0;
        } while (fVar9 <= fVar8);
        goto label_05c0df55;
      }
    }
  }
  ThrowNullReferenceException();
label_05c0df40:
  fVar8 = sqrtf(fVar8);
  fVar9 = (__this->fields).Range;
  in_XMM1_Db = 0;
  in_XMM1_Dc = 0;
  in_XMM1_Dd = 0;
  if (fVar8 < fVar9) {
label_05c0df55:
    fStack_68 = (__this->fields).Delay;
    fStack_58 = fVar9;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    fVar8 = Utility_Util__LinearMap(fVar8,0.0,fStack_58,0.0,fStack_68,(MethodInfo *)0x0);
    fVar9 = (*(__this->klass->vtable)._14_get_ActiveTime.methodPtr)
                      (__this,(__this->klass->vtable)._14_get_ActiveTime.method);
    in_XMM1_Db = extraout_XMM0_Db;
    in_XMM1_Dc = extraout_XMM0_Dc_00;
    in_XMM1_Dd = extraout_XMM0_Dd_00;
    Characters_BaseCharacter__Reveal((Characters_BaseCharacter_o *)__this_01,fVar8,fVar9,(MethodInfo *)0x0);
  }
  goto label_05c0de20;
}


// Characters.SmellSpecial$$Deactivate
// il2cpp: void Characters_SmellSpecial__Deactivate (Characters_SmellSpecial_o* __this, const MethodInfo* method);
// 0x5c0e090

void Characters_SmellSpecial__Deactivate(Characters_SmellSpecial_o *__this,MethodInfo *method)

{
  return;
}


