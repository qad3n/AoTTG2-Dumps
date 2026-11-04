// Type: Characters.CarrySpecial
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/CarrySpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/CarrySpecial.cs
// --------------------------------

// Characters.CarrySpecial$$get_ActiveTime
// il2cpp: float Characters_CarrySpecial__get_ActiveTime (Characters_CarrySpecial_o* __this, const MethodInfo* method);
// 0x18216a4b0

float
Characters_CarrySpecial__get_ActiveTime(Characters_CarrySpecial_o* __this, MethodInfo* method)

{
  return 0.64;
}


// Characters.CarrySpecial$$get_CarryDistance
// il2cpp: float Characters_CarrySpecial__get_CarryDistance (Characters_CarrySpecial_o* __this, const MethodInfo* method);
// 0x182160800

float
Characters_CarrySpecial__get_CarryDistance(Characters_CarrySpecial_o* __this, MethodInfo* method)

{
  return 25.0;
}


// Characters.CarrySpecial$$get_GroundedCarryDistance
// il2cpp: float Characters_CarrySpecial__get_GroundedCarryDistance (Characters_CarrySpecial_o* __this, const MethodInfo* method);
// 0x1820b9980

float
Characters_CarrySpecial__get_GroundedCarryDistance(Characters_CarrySpecial_o* __this, MethodInfo* method)

{
  return 10.0;
}


// Characters.CarrySpecial$$.ctor
// il2cpp: void Characters_CarrySpecial___ctor (Characters_CarrySpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x18216a490

void Characters_CarrySpecial___ctor
               (Characters_CarrySpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  Characters_BaseHoldAttackSpecial___ctor
            ((Characters_BaseHoldAttackSpecial_o *)__this,owner,(MethodInfo *)0x0);
  (__this->fields).Cooldown = 2.0;
  return;
}


// Characters.CarrySpecial$$Activate
// il2cpp: void Characters_CarrySpecial__Activate (Characters_CarrySpecial_o* __this, const MethodInfo* method);
// 0x182169ad0

void Characters_CarrySpecial__Activate(Characters_CarrySpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  UnityEngine_Object_o *x;
  Characters_CarrySpecial_c *pCVar3;
  bool bVar4;
  
  if (Il2CppMethodInitialized_184346ce2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346ce2 = '\x01';
  }
  pCVar2 = (__this->fields)._owner;
  (__this->fields)._needActivate = true;
  if (pCVar2 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if (((pCVar2->klass->_2).typeHierarchyDepth < bVar1) ||
     ((pCVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
    il2cpp_codegen_raise_invalid_cast_exception(pCVar2);
  }
  x = *(UnityEngine_Object_o **)&(*(uint8_t *)((char *)pCVar2 + 0x1a0));
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pCVar3 = __this->klass;
    (__this->fields).IsActive = false;
    (*(pCVar3->vtable)._10_Deactivate.methodPtr)(__this,(pCVar3->vtable)._10_Deactivate.method);
    return;
  }
  return;
}


// Characters.CarrySpecial$$ActiveFixedUpdate
// il2cpp: void Characters_CarrySpecial__ActiveFixedUpdate (Characters_CarrySpecial_o* __this, const MethodInfo* method);
// 0x182169bb0
// eh: try 0x182169e0f..0x18216a1cd -> pad 0x18333edd0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 37 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18216a061: mov rdx, qword ptr [rip + 0x1f17ec0]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose
// asm:   0x18216a068: mov rcx, qword ptr [rsp + 0xa8]
// asm:   0x18216a070: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18216a075: mov rcx, qword ptr [rsp + 0xa0]
// asm:   0x18216a07d: test rcx, rcx
// asm:   0x18216a080: jne 0x18216a1cd
// asm:   0x18216a086: mov r12, qword ptr [rsp + 0x1a8]
// asm:   0x18216a08e: mov r15, qword ptr [rsp + 0x1a0]
// asm:   0x18216a096: movdqa xmm9, xmmword ptr [rip + 0x11eecf1]
// asm:   0x18216a09f: movzx r13d, byte ptr [rsp + 0x190]
// asm:   0x18216a11c: test r15, r15
// asm:   0x18216a11f: je 0x18216a193
// asm:   0x18216a121: movdqa xmm0, xmmword ptr [rip + 0x12d5de7]
// asm:   0x18216a129: movaps xmmword ptr [rsp + 0x20], xmm0
// asm:   0x18216a12e: xor r8d, r8d
// asm:   0x18216a131: lea rdx, [rsp + 0x20]
// asm:   0x18216a136: mov rcx, r15
// asm:   0x18216a173: movdqa xmm0, xmmword ptr [rip + 0x12d5d95]
// asm:   0x18216a17b: movaps xmmword ptr [rsp + 0x20], xmm0
// asm:   0x18216a180: xor r8d, r8d
// asm:   0x18216a183: lea rdx, [rsp + 0x20]
// asm:   0x18216a188: mov rcx, r12
// asm:   0x18216a18b: jmp 0x18216a139
// asm:   0x18216a18d: mov byte ptr [rbx + 0x1c], 0
// asm:   0x18216a191: jmp 0x18216a13e
// asm:   0x18216a1cd: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333edd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333edd5: push rbp
// asm:   0x18333edd6: sub rsp, 0x20
// asm:   0x18333edda: mov rbp, rdx
// asm:   0x18333eddd: mov rax, qword ptr [rbp + 0xb8]
// asm:   0x18333ede4: mov rcx, qword ptr [rax]
// asm:   0x18333ede7: mov qword ptr [rbp + 0xa0], rcx
// asm:   0x18333edee: movabs rax, 0
// asm:   0x18333edf8: add rsp, 0x20
// asm:   0x18333edfc: pop rbp
// asm:   0x18333edfd: ret 

void Characters_CarrySpecial__ActiveFixedUpdate(Characters_CarrySpecial_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  Characters_Human_o *__this_00;
  GameManagers_BaseGameManager_o *pGVar4;
  System_Collections_Generic_HashSet_Vector2Int__o *__this_01;
  Utility_BaseComponentCache_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  System_String_o *b;
  Il2CppObject *__this_02;
  bool bVar7;
  bool bVar8;
  UnityEngine_Ray_o *pUVar9;
  Characters_Human_o *pCVar10;
  UnityEngine_Vector3_o *pUVar11;
  Characters_Human_o *x;
  float fVar12;
  float fVar13;
  float distance;
  System_Collections_Generic_HashSet_Enumerator_T__o local_168;
  System_Collections_Generic_HashSet_Enumerator_T__o local_148;
  undefined8 local_128;
  float local_120;
  undefined8 local_118;
  float local_110;
  undefined8 local_108;
  float local_100;
  undefined8 local_f8;
  float local_f0;
  undefined1 local_e8 [32];
  UnityEngine_Vector3_o local_c8;
  UnityEngine_Vector3_o local_b8;
  UnityEngine_Vector3_o local_a8;
  UnityEngine_Vector3_o local_98 [8];
  
  if (Il2CppMethodInitialized_184346ce3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_184346ce3 = '\x01';
  }
  local_148.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_148.fields._index = 0;
  local_148.fields._version = 0;
  local_148.fields._current = (Il2CppObject *)0x0;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  __this_00 = (Characters_Human_o *)(__this->fields)._owner;
  if (__this_00 != (Characters_Human_o *)0x0) {
    bVar3 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar3) ||
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] != (Il2CppClass *)TypeInfo_Characters_Human
       )) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00);
    }
    pCVar10 = (__this_00->fields).BackHuman;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar7) {
      (__this->fields).IsActive = false;
      return;
    }
    if ((__this_00->fields).Grounded == false) {
      distance = 25.0;
    }
    else {
      distance = 10.0;
    }
    pUVar9 = Characters_Human__GetAimRayAfterHumanCheap
                       ((UnityEngine_Ray_o *)local_e8,__this_00,(MethodInfo *)0x0);
    local_168.fields._set = *(System_Collections_Generic_HashSet_T__o **)&(pUVar9->fields).m_Origin.fields;
    local_168.fields._8_8_ = *(undefined8 *)&(pUVar9->fields).m_Origin.fields.z;
    local_168.fields._current = *(Il2CppObject **)&(pUVar9->fields).m_Direction.fields.y;
    pCVar10 = Characters_Human__GetHumanAlongRay
                        (__this_00,(UnityEngine_Ray_o *)&local_168,distance,(MethodInfo *)0x0);
    bVar7 = Characters_Human__IsValidCarryTarget(__this_00,pCVar10,distance,(MethodInfo *)0x0);
    pGVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar4 != (GameManagers_BaseGameManager_o *)0x0) {
      bVar3 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
      if (((pGVar4->klass->_2).typeHierarchyDepth < bVar3) ||
         ((pGVar4->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception(pGVar4);
      }
      __this_01 = (System_Collections_Generic_HashSet_Vector2Int__o *)
                  (*(uint64_t *)((char *)pGVar4 + 0x40));
      if (__this_01 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
        System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
                  (&local_168,__this_01,
                   (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
        local_148.fields._set = local_168.fields._set;
        local_148.fields._index = local_168.fields._index;
        local_148.fields._version = local_168.fields._version;
        local_148.fields._current = local_168.fields._current;
        local_e8._0_4_ = 0.0;
        local_e8._4_4_ = 0.0;
        x = (Characters_Human_o *)0x0;
        fVar13 = INFINITY;
        local_e8._8_8_ = &local_148;
label_182169e21:
        bVar8 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          (&local_148,
                           (MethodInfo_15381F0 *)
                           MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
        __this_02 = local_148.fields._current;
        if (bVar8) {
          bVar8 = Characters_Human__IsCarryable
                            (__this_00,(Characters_Human_o *)local_148.fields._current,(MethodInfo *)0x0);
          if (bVar8) {
            pUVar5 = (__this_00->fields).Cache;
            if (pUVar5 == (Utility_BaseComponentCache_o *)0x0) {
              ThrowNullReferenceException();
            }
            pUVar6 = (pUVar5->fields).Transform;
            if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
              ThrowNullReferenceException();
            }
            pUVar11 = UnityEngine_Transform__get_position(&local_c8,pUVar6,(MethodInfo *)0x0);
            if ((Characters_Human_o *)__this_02 == (Characters_Human_o *)0x0) {
              ThrowNullReferenceException();
            }
            pUVar5 = ((Characters_Human_Fields *)((longlong)__this_02 + 0x10))->Cache;
            if (pUVar5 == (Utility_BaseComponentCache_o *)0x0) {
              ThrowNullReferenceException();
            }
            pUVar6 = (pUVar5->fields).Transform;
            if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
              ThrowNullReferenceException();
            }
            uVar1._0_4_ = (pUVar11->fields).x;
            uVar1._4_4_ = (pUVar11->fields).y;
            fVar12 = (pUVar11->fields).z;
            pUVar11 = UnityEngine_Transform__get_position(&local_b8,pUVar6,(MethodInfo *)0x0);
            local_128._0_4_ = (pUVar11->fields).x;
            local_128._4_4_ = (pUVar11->fields).y;
            local_120 = (pUVar11->fields).z;
            local_118 = uVar1;
            local_110 = fVar12;
            fVar12 = (float)il2cpp_runtime_helper_180562c80(&local_118);
            if (fVar12 <= distance) {
              b = (__this_00->fields).Team;
              if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
              }
              bVar8 = GameManagers_TeamInfo__SameTeam_1e76f20
                                ((Characters_BaseCharacter_o *)__this_02,b,(MethodInfo *)0x0);
              if (bVar8) {
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar8 = UnityEngine_Object__op_Equality
                                  ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)pCVar10,
                                   (MethodInfo *)0x0);
                if (!bVar8) {
                  local_168.fields._set = (System_Collections_Generic_HashSet_T__o *)0x3f8000003f800000;
                  local_168.fields._index = 0x3f800000;
                  local_168.fields._version = 0x3f800000;
                  Characters_BaseCharacter__AddVisibleOutlineWithColor
                            ((Characters_BaseCharacter_o *)__this_02,(UnityEngine_Color_o *)&local_168,
                             (MethodInfo *)0x0);
                  pUVar5 = (__this_00->fields).Cache;
                  if (pUVar5 == (Utility_BaseComponentCache_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pUVar6 = (pUVar5->fields).Transform;
                  if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pUVar11 = UnityEngine_Transform__get_position(&local_a8,pUVar6,(MethodInfo *)0x0);
                  pUVar5 = ((Characters_Human_Fields *)((longlong)__this_02 + 0x10))->Cache;
                  if (pUVar5 == (Utility_BaseComponentCache_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pUVar6 = (pUVar5->fields).Transform;
                  if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  uVar2._0_4_ = (pUVar11->fields).x;
                  uVar2._4_4_ = (pUVar11->fields).y;
                  fVar12 = (pUVar11->fields).z;
                  pUVar11 = UnityEngine_Transform__get_position(local_98,pUVar6,(MethodInfo *)0x0);
                  local_108._0_4_ = (pUVar11->fields).x;
                  local_108._4_4_ = (pUVar11->fields).y;
                  local_100 = (pUVar11->fields).z;
                  local_f8 = uVar2;
                  local_f0 = fVar12;
                  fVar12 = (float)il2cpp_runtime_helper_180562c80(&local_f8,&local_108);
                  if (fVar12 < fVar13) {
                    x = (Characters_Human_o *)__this_02;
                    fVar13 = fVar12;
                  }
                }
              }
              else {
                local_168.fields._set = (System_Collections_Generic_HashSet_T__o *)0x3f800000;
                local_168.fields._index = 0;
                local_168.fields._version = 0x3f800000;
                Characters_BaseCharacter__AddVisibleOutlineWithColor
                          ((Characters_BaseCharacter_o *)__this_02,(UnityEngine_Color_o *)&local_168,
                           (MethodInfo *)0x0);
              }
              goto label_182169e21;
            }
          }
          else if ((Characters_Human_o *)__this_02 == (Characters_Human_o *)0x0) {
            ThrowNullReferenceException();
          }
          Characters_BaseCharacter__RemoveOutline((Characters_BaseCharacter_o *)__this_02,(MethodInfo *)0x0);
          goto label_182169e21;
        }
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_148,
                   MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
        if (!bVar7) {
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar7 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pCVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar7) {
            if (pCVar10 == (Characters_Human_o *)0x0) goto label_18216a193;
            local_168.fields._set = (System_Collections_Generic_HashSet_T__o *)0x3f800000;
            local_168.fields._index = 0;
            local_168.fields._version = 0x3f800000;
            Characters_BaseCharacter__AddVisibleOutlineWithColor
                      ((Characters_BaseCharacter_o *)pCVar10,(UnityEngine_Color_o *)&local_168,
                       (MethodInfo *)0x0);
          }
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar7 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          pCVar10 = x;
          if (!bVar7) {
            return;
          }
        }
        if (pCVar10 != (Characters_Human_o *)0x0) {
          local_168.fields._index = 0;
          local_168.fields._version = 0x3f800000;
          local_168.fields._set = (System_Collections_Generic_HashSet_T__o *)0x3f80000000000000;
          Characters_BaseCharacter__AddVisibleOutlineWithColor
                    ((Characters_BaseCharacter_o *)pCVar10,(UnityEngine_Color_o *)&local_168,(MethodInfo *)0x0
                    );
          return;
        }
      }
    }
  }
label_18216a193:
  ThrowNullReferenceException();
}


// Characters.CarrySpecial$$Deactivate
// il2cpp: void Characters_CarrySpecial__Deactivate (Characters_CarrySpecial_o* __this, const MethodInfo* method);
// 0x18216a1f0
// eh: try 0x18216a3f1..0x18216a419 -> pad 0x183315930 catch Il2CppExceptionWrapper
// eh: try 0x18216a445..0x18216a44c -> pad 0x180355860 cleanup
// eh: try 0x18216a467..0x18216a46d -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18216a42a: mov rdx, qword ptr [rip + 0x1f17af7]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose
// asm:   0x18216a431: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18216a436: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18216a43b: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18216a440: test rcx, rcx
// asm:   0x18216a443: jne 0x18216a46d
// asm:   0x18216a445: jmp 0x18216a451
// asm:   0x18216a46d: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Characters_CarrySpecial__Deactivate(Characters_CarrySpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *__this_00;
  GameManagers_BaseGameManager_o *pGVar2;
  System_Collections_Generic_HashSet_Vector2Int__o *__this_01;
  bool bVar3;
  Characters_Human_o *pCVar4;
  float distance;
  undefined1 local_40 [16];
  Characters_BaseCharacter_o *local_30;
  System_Collections_Generic_HashSet_Enumerator_T__o local_28;
  
  if (Il2CppMethodInitialized_184346ce4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184346ce4 = '\x01';
  }
  local_28.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  __this_00 = (Characters_Human_o *)(__this->fields)._owner;
  if (__this_00 != (Characters_Human_o *)0x0) {
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human
       )) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00);
    }
    pCVar4 = (__this_00->fields).BackHuman;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      Characters_Human__StopCarrySpecial(__this_00,(MethodInfo *)0x0);
      return;
    }
    if ((__this_00->fields).Grounded == false) {
      distance = 25.0;
    }
    else {
      distance = 10.0;
    }
    pCVar4 = Characters_Human__GetCarryOption(__this_00,distance,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      Characters_Human__StartCarrySpecial(__this_00,pCVar4,(MethodInfo *)0x0);
    }
    Characters_BaseUseable__SetCooldownLeft((Characters_BaseUseable_o *)__this,0.0,(MethodInfo *)0x0);
    pGVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar2 != (GameManagers_BaseGameManager_o *)0x0) {
      bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
      if (((pGVar2->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pGVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception(pGVar2);
      }
      __this_01 = (System_Collections_Generic_HashSet_Vector2Int__o *)
                  (*(uint64_t *)((char *)pGVar2 + 0x40));
      if (__this_01 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
        System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_40,__this_01,
                   (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
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
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
          if (!bVar3) {
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
            return;
          }
          if ((Characters_BaseCharacter_o *)local_28.fields._current == (Characters_BaseCharacter_o *)0x0)
          break;
          Characters_BaseCharacter__RemoveOutline
                    ((Characters_BaseCharacter_o *)local_28.fields._current,(MethodInfo *)0x0);
        }
        ThrowNullReferenceException();
      }
    }
  }
  ThrowNullReferenceException();
}


