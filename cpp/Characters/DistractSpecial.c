// Type: Characters.DistractSpecial
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/DistractSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/DistractSpecial.cs
// --------------------------------

// Characters.DistractSpecial$$get_ActiveTime
// il2cpp: float Characters_DistractSpecial__get_ActiveTime (Characters_DistractSpecial_o* __this, const MethodInfo* method);
// 0x1820cf430

float
Characters_DistractSpecial__get_ActiveTime(Characters_DistractSpecial_o* __this, MethodInfo* method)

{
  return 1.0;
}


// Characters.DistractSpecial$$get_GroundedOnly
// il2cpp: bool Characters_DistractSpecial__get_GroundedOnly (Characters_DistractSpecial_o* __this, const MethodInfo* method);
// 0x180668280

bool
Characters_DistractSpecial__get_GroundedOnly(Characters_DistractSpecial_o* __this, MethodInfo* method)

{
  return false;
}


// Characters.DistractSpecial$$.ctor
// il2cpp: void Characters_DistractSpecial___ctor (Characters_DistractSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x18216b1f0

void Characters_DistractSpecial___ctor
               (Characters_DistractSpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  (__this->fields).Range = 300.0;
  Characters_BaseEmoteSpecial___ctor((Characters_BaseEmoteSpecial_o *)__this,owner,(MethodInfo *)0x0);
  (__this->fields).Cooldown = 20.0;
  return;
}


// Characters.DistractSpecial$$Activate
// il2cpp: void Characters_DistractSpecial__Activate (Characters_DistractSpecial_o* __this, const MethodInfo* method);
// 0x18216ae40

void Characters_DistractSpecial__Activate(Characters_DistractSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *__this_00;
  
  if (Il2CppMethodInitialized_184346ce9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184346ce9 = '\x01';
  }
  __this_00 = (__this->fields)._human;
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  if (__this_00 != (Characters_Human_o *)0x0) {
    Characters_Human__EmoteAnimation
              (__this_00,TypeInfo_Characters_HumanAnimations->static_fields->SpecialMarco0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Characters.DistractSpecial$$Deactivate
// il2cpp: void Characters_DistractSpecial__Deactivate (Characters_DistractSpecial_o* __this, const MethodInfo* method);
// 0x18216aec0
// eh: try 0x18216b010..0x18216b1cd -> pad 0x18331b300 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18216b15f: mov rdx, qword ptr [rip + 0x1f0bdea]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose
// asm:   0x18216b166: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x18216b16b: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18216b170: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x18216b175: test rcx, rcx
// asm:   0x18216b178: jne 0x18216b1cd
// asm:   0x18216b1cd: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18331b300: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18331b305: push rbp
// asm:   0x18331b306: sub rsp, 0x20
// asm:   0x18331b30a: mov rbp, rdx
// asm:   0x18331b30d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x18331b311: mov rcx, qword ptr [rax]
// asm:   0x18331b314: mov qword ptr [rbp + 0x48], rcx
// asm:   0x18331b318: movabs rax, 0
// asm:   0x18331b322: add rsp, 0x20
// asm:   0x18331b326: pop rbp
// asm:   0x18331b327: ret 

void Characters_DistractSpecial__Deactivate(Characters_DistractSpecial_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  Characters_Human_o *pCVar5;
  GameManagers_BaseGameManager_o *pGVar6;
  Photon_Pun_PhotonView_o *__this_00;
  Utility_BaseComponentCache_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  Il2CppObject *__this_01;
  bool bVar9;
  UnityEngine_Vector3_o *pUVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Vector3_o local_c0;
  UnityEngine_Vector3_o local_b0;
  undefined1 local_a0 [16];
  Characters_BasicTitan_o *local_90;
  System_Collections_Generic_HashSet_Enumerator_T__o local_88 [5];
  
  if (Il2CppMethodInitialized_184346cea == '\0') {
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
    Il2CppMethodInitialized_184346cea = '\x01';
  }
  local_88[0].fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_88[0].fields._index = 0;
  local_88[0].fields._version = 0;
  local_88[0].fields._current = (Il2CppObject *)0x0;
  pCVar5 = (__this->fields)._human;
  if (pCVar5 != (Characters_Human_o *)0x0) {
    if ((pCVar5->fields)._state != 8) {
      return;
    }
    pGVar6 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar6 != (GameManagers_BaseGameManager_o *)0x0) {
      bVar4 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
      if (((pGVar6->klass->_2).typeHierarchyDepth < bVar4) ||
         ((pGVar6->klass->_2).typeHierarchy[(ulonglong)bVar4 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception(pGVar6);
      }
      __this_00 = (*(uint64_t *)((char *)pGVar6 + 0x48));
      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
        System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_a0,
                   (System_Collections_Generic_HashSet_Vector2Int__o *)__this_00,
                   (MethodInfo_175C200 *)
                   MethodInfo_System_Collections_Generic_HashSet_BasicTitan_GetEnumerator);
        local_88[0].fields._set = (System_Collections_Generic_HashSet_T__o *)local_a0._0_8_;
        local_88[0].fields._index = local_a0._8_4_;
        local_88[0].fields._version = local_a0._12_4_;
        local_88[0].fields._current = (Il2CppObject *)local_90;
        local_a0._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
        local_a0._8_8_ = local_88;
        while( true ) {
          bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (local_88,(MethodInfo_15381F0 *)
                                      MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_MoveNext
                            );
          __this_01 = local_88[0].fields._current;
          if (!bVar9) {
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_88,
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_BasicTitan_Dispose);
            return;
          }
          pCVar5 = (__this->fields)._human;
          if (pCVar5 == (Characters_Human_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar7 = (pCVar5->fields).Cache;
          if (pUVar7 == (Utility_BaseComponentCache_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar8 = (pUVar7->fields).Transform;
          if (pUVar8 == (UnityEngine_Transform_o *)0x0) break;
          pUVar10 = UnityEngine_Transform__get_position(&local_c0,pUVar8,(MethodInfo *)0x0);
          if ((Characters_BasicTitan_o *)__this_01 == (Characters_BasicTitan_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar7 = ((Characters_BasicTitan_Fields *)((longlong)__this_01 + 0x10))->Cache;
          if (pUVar7 == (Utility_BaseComponentCache_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar8 = (pUVar7->fields).Transform;
          if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          fVar14 = (pUVar10->fields).x;
          fVar12 = (pUVar10->fields).y;
          fVar13 = (pUVar10->fields).z;
          pUVar10 = UnityEngine_Transform__get_position(&local_b0,pUVar8,(MethodInfo *)0x0);
          fVar1 = (pUVar10->fields).x;
          fVar2 = (pUVar10->fields).y;
          fVar3 = (pUVar10->fields).z;
          if (Il2CppMethodInitialized_18433dee7 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
            Il2CppMethodInitialized_18433dee7 = '\x01';
          }
          if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          }
          fVar14 = fVar14 - fVar1;
          fVar12 = fVar12 - fVar2;
          fVar13 = fVar13 - fVar3;
          dVar11 = (double)(fVar13 * fVar13 + fVar12 * fVar12 + fVar14 * fVar14);
          if (dVar11 < 0.0) {
            dVar11 = sqrt(dVar11);
          }
          else {
            dVar11 = SQRT(dVar11);
          }
          if ((float)dVar11 < (__this->fields).Range) {
            Characters_BasicTitan__Distract
                      ((Characters_BasicTitan_o *)__this_01,
                       (Characters_BaseCharacter_o *)(__this->fields)._human,(MethodInfo *)0x0);
          }
        }
        ThrowNullReferenceException();
      }
    }
  }
  ThrowNullReferenceException();
}


