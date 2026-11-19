// Type: Characters.CarrySpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Characters/CarrySpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/CarrySpecial.cs
// --------------------------------

// Characters.CarrySpecial$$get_ActiveTime
// il2cpp: float Characters_CarrySpecial__get_ActiveTime (Characters_CarrySpecial_o* __this, const MethodInfo* method);
// 0x5c09bb0

float Characters_CarrySpecial__get_ActiveTime(Characters_CarrySpecial_o *__this,MethodInfo *method)

{
  return 0.64;
}


// Characters.CarrySpecial$$get_CarryDistance
// il2cpp: float Characters_CarrySpecial__get_CarryDistance (Characters_CarrySpecial_o* __this, const MethodInfo* method);
// 0x5c09bc0

float Characters_CarrySpecial__get_CarryDistance(Characters_CarrySpecial_o *__this,MethodInfo *method)

{
  return 25.0;
}


// Characters.CarrySpecial$$get_GroundedCarryDistance
// il2cpp: float Characters_CarrySpecial__get_GroundedCarryDistance (Characters_CarrySpecial_o* __this, const MethodInfo* method);
// 0x5c09bd0

float Characters_CarrySpecial__get_GroundedCarryDistance(Characters_CarrySpecial_o *__this,MethodInfo *method)

{
  return 10.0;
}


// Characters.CarrySpecial$$.ctor
// il2cpp: void Characters_CarrySpecial___ctor (Characters_CarrySpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x5c09be0

void Characters_CarrySpecial___ctor
               (Characters_CarrySpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  Characters_BaseHoldAttackSpecial___ctor((Characters_StockSpecial_o *)__this,owner,method);
  (__this->fields).Cooldown = 2.0;
  return;
}


// Characters.CarrySpecial$$Activate
// il2cpp: void Characters_CarrySpecial__Activate (Characters_CarrySpecial_o* __this, const MethodInfo* method);
// 0x5c09c00

void Characters_CarrySpecial__Activate(Characters_CarrySpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  GameManagers_InGameManager_o *x;
  bool bVar3;
  
  if (Il2CppMethodInitialized_075476b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075476b2 = '\x01';
  }
  (__this->fields)._needActivate = true;
  pCVar2 = (__this->fields)._owner;
  if (pCVar2 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if (((pCVar2->klass->_2).typeHierarchyDepth < bVar1) ||
     ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  x = (*(uint64_t *)((char *)pCVar2 + 0x1a8));
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    (__this->fields).IsActive = false;
    (*(__this->klass->vtable)._10_Deactivate.methodPtr)(__this,(__this->klass->vtable)._10_Deactivate.method);
    return;
  }
  return;
}


// Characters.CarrySpecial$$ActiveFixedUpdate
// il2cpp: void Characters_CarrySpecial__ActiveFixedUpdate (Characters_CarrySpecial_o* __this, const MethodInfo* method);
// 0x5c09cd0
// eh: try 0x5c09f30..0x5c0a34f -> pad 0x5c0a367 (+25 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c0a399..0x5c0a39e -> pad 0x5c0a3c3 cleanup
// eh: try 0x5c0a3c6..0x5c0a3d0 -> pad 0x5c0a3d8 catch (...) [compiler noexcept guard]
// asm: 57 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c09fe9: jmp 0x5c0a024
// asm:   0x5c0a078: jmp 0x5c0a090
// asm:   0x5c0a17f: jmp 0x5c0a1bb
// asm:   0x5c0a213: jmp 0x5c09f1d
// asm:   0x5c0a22c: jmp 0x5c09f1d
// asm:   0x5c0a25a: movaps xmm0, xmmword ptr [rip - 0x4c00761]
// asm:   0x5c0a261: jmp 0x5c0a2f4
// asm:   0x5c0a2ea: movaps xmm0, xmmword ptr [rip - 0x4c007f1]
// asm:   0x5c0a2f1: mov rdi, rbx
// asm:   0x5c0a34f: jmp 0x5c0a381
// asm:   0x5c0a351: jmp 0x5c0a381
// asm:   0x5c0a353: jmp 0x5c0a381
// asm:   0x5c0a355: jmp 0x5c0a381
// asm:   0x5c0a357: jmp 0x5c0a381
// asm:   0x5c0a359: jmp 0x5c0a381
// asm:   0x5c0a35b: jmp 0x5c0a381
// asm:   0x5c0a35d: jmp 0x5c0a381
// asm:   0x5c0a35f: jmp 0x5c0a381
// asm:   0x5c0a361: jmp 0x5c0a381
// asm:   0x5c0a363: jmp 0x5c0a381
// asm:   0x5c0a365: jmp 0x5c0a381
// asm:   0x5c0a367: jmp 0x5c0a381
// asm:   0x5c0a369: jmp 0x5c0a381
// asm:   0x5c0a36b: jmp 0x5c0a381
// asm:   0x5c0a36d: jmp 0x5c0a381
// asm:   0x5c0a36f: jmp 0x5c0a381
// asm:   0x5c0a371: jmp 0x5c0a381
// asm:   0x5c0a373: jmp 0x5c0a381
// asm:   0x5c0a375: jmp 0x5c0a381
// asm:   0x5c0a377: jmp 0x5c0a381
// asm:   0x5c0a379: jmp 0x5c0a381
// asm:   0x5c0a37b: jmp 0x5c0a381
// asm:   0x5c0a37d: jmp 0x5c0a381
// asm:   0x5c0a37f: jmp 0x5c0a381
// asm:   0x5c0a381: mov rbx, rax
// asm:   0x5c0a384: cmp edx, 1
// asm:   0x5c0a387: jne 0x5c0a3c6
// asm:   0x5c0a389: mov rdi, rbx
// asm:   0x5c0a38c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c0a391: mov rbx, qword ptr [rax]
// asm:   0x5c0a394: mov qword ptr [rsp + 0x48], rbx
// asm:   0x5c0a399: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c0a39e: lea rax, [rip + 0x1683ac3]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose
// asm:   0x5c0a3a5: mov rsi, qword ptr [rax]
// asm:   0x5c0a3a8: lea rdi, [rsp + 0x30]
// asm:   0x5c0a3ad: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5c0a3b2: test rbx, rbx
// asm:   0x5c0a3b5: je 0x5c0a245
// asm:   0x5c0a3bb: mov rdi, rbx
// asm:   0x5c0a3be: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c0a3c3: mov rbx, rax
// asm:   0x5c0a3c6: lea rdi, [rsp + 0x48]
// asm:   0x5c0a3cb: call 0x2fd9040  ; il2cpp_runtime_helper_02fd9040()
// asm:   0x5c0a3d0: mov rdi, rbx
// asm:   0x5c0a3d3: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c0a3d8: mov rdi, rax
// asm:   0x5c0a3db: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_CarrySpecial__ActiveFixedUpdate(Characters_CarrySpecial_o *__this,MethodInfo *method)

{
  float distance;
  byte bVar1;
  uint32_t uVar2;
  Characters_Human_o *__this_00;
  System_Collections_Generic_HashSet_object__o *__this_01;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  System_String_o *b;
  UnityEngine_Ray_o ray;
  bool bVar5;
  bool bVar6;
  Characters_Human_o *human;
  Characters_Human_o *pCVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float in_XMM1_Db;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar11;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  UnityEngine_Vector3_o UVar12;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_c8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [16];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 auStack_68 [24];
  Characters_Human_o *pCStack_50;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_48;
  
  if (Il2CppMethodInitialized_075476b3 == '\0') {
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
    Il2CppMethodInitialized_075476b3 = '\x01';
  }
  SStack_c8.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  SStack_c8.fields._index = 0;
  SStack_c8.fields._version = 0;
  SStack_c8.fields._current = (Il2CppObject *)0x0;
  Characters_ExtendedUseable__ActiveFixedUpdate((Characters_ExtendedUseable_o *)__this,(MethodInfo *)0x0);
  __this_00 = (Characters_Human_o *)(__this->fields)._owner;
  if (__this_00 != (Characters_Human_o *)0x0) {
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
      pCVar7 = __this_00;
label_05c0a336:
      il2cpp_codegen_raise_invalid_cast_exception(pCVar7);
    }
    pCVar7 = (__this_00->fields).BackHuman;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      (__this->fields).IsActive = false;
      return;
    }
    distance = *(float *)(&g_data_0100ae48 + (ulong)((__this_00->fields).Grounded == false) * 4);
    Characters_Human__GetAimRayAfterHumanCheap((UnityEngine_Ray_o *)auStack_b0,__this_00,(MethodInfo *)0x0);
    ray.fields.m_Origin.fields.z = (float)auStack_b0._8_4_;
    ray.fields.m_Direction.fields.x = (float)auStack_b0._12_4_;
    ray.fields.m_Origin.fields.x = (float)auStack_b0._0_4_;
    ray.fields.m_Origin.fields.y = (float)auStack_b0._4_4_;
    ray.fields.m_Direction.fields.y = (float)auStack_b0._16_4_;
    ray.fields.m_Direction.fields.z = (float)auStack_b0._20_4_;
    human = Characters_Human__GetHumanAlongRay(__this_00,ray,distance,(MethodInfo *)0x0);
    bVar5 = Characters_Human__IsValidCarryTarget(__this_00,human,distance,(MethodInfo *)0x0);
    pCVar7 = (Characters_Human_o *)TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager
    ;
    if (pCVar7 != (Characters_Human_o *)0x0) {
      bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
      if (((pCVar7->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pCVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) goto label_05c0a336;
      __this_01 = *(System_Collections_Generic_HashSet_object__o **)&(pCVar7->fields).IsVisible;
      if (__this_01 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___GetEnumerator
                  (&SStack_48,__this_01,
                   (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
        SStack_c8.fields._current = SStack_48.fields._current;
        SStack_c8.fields._set = SStack_48.fields._set;
        SStack_c8.fields._index = SStack_48.fields._index;
        SStack_c8.fields._version = SStack_48.fields._version;
        auStack_b0._0_4_ = 0.0;
        auStack_b0._4_4_ = 0.0;
        pCVar7 = (Characters_Human_o *)0x0;
        fVar9 = INFINITY;
        auStack_b0._8_8_ = &SStack_c8;
label_05c09f1d:
        do {
          fVar8 = fVar9;
          pCStack_50 = pCVar7;
          do {
            while( true ) {
              do {
                while( true ) {
                  while( true ) {
                    while( true ) {
                      bVar6 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                        (&SStack_c8,
                                         (MethodInfo_4C456D0 *)
                                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext
                                        );
                      pCVar7 = (Characters_Human_o *)SStack_c8.fields._current;
                      if (!bVar6) {
                        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                                  (&SStack_c8,
                                   (MethodInfo_4C456C0 *)
                                   MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
                        if (bVar5) {
                          if (human == (Characters_Human_o *)0x0) goto label_05c0a32e;
                        }
                        else {
                          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                          }
                          bVar5 = UnityEngine_Object__op_Inequality
                                            ((UnityEngine_Object_o *)human,(UnityEngine_Object_o *)0x0,
                                             (MethodInfo *)0x0);
                          if (bVar5) {
                            if (human == (Characters_Human_o *)0x0) goto label_05c0a32e;
                            color_01.fields.b = 0.0;
                            color_01.fields.a = 1.0;
                            color_01.fields.r = 1.0;
                            color_01.fields.g = 0.0;
                            Characters_BaseCharacter__AddVisibleOutlineWithColor
                                      ((Characters_BaseCharacter_o *)human,color_01,(MethodInfo *)0x0);
                          }
                          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                          }
                          human = pCStack_50;
                          bVar5 = UnityEngine_Object__op_Inequality
                                            ((UnityEngine_Object_o *)pCStack_50,(UnityEngine_Object_o *)0x0,
                                             (MethodInfo *)0x0);
                          if (!bVar5) {
                            return;
                          }
                          if (human == (Characters_Human_o *)0x0) goto label_05c0a32e;
                        }
                        color_02.fields.b = 0.0;
                        color_02.fields.a = 1.0;
                        color_02.fields.r = 0.0;
                        color_02.fields.g = 1.0;
                        Characters_BaseCharacter__AddVisibleOutlineWithColor
                                  ((Characters_BaseCharacter_o *)human,color_02,(MethodInfo *)0x0);
                        return;
                      }
                      bVar6 = Characters_Human__IsCarryable
                                        (__this_00,(Characters_Human_o *)SStack_c8.fields._current,
                                         (MethodInfo *)0x0);
                      if (bVar6) break;
                      if (pCVar7 == (Characters_Human_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      Characters_BaseCharacter__RemoveOutline
                                ((Characters_BaseCharacter_o *)pCVar7,(MethodInfo *)0x0);
                    }
                    pUVar3 = (__this_00->fields).Cache;
                    if (pUVar3 == (Utility_BaseComponentCache_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pUVar4 = (pUVar3->fields).Transform;
                    if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    UVar12 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
                    fStack_78 = UVar12.fields.z;
                    auStack_68._8_4_ = extraout_XMM0_Dc;
                    auStack_68._0_8_ = UVar12.fields._0_8_;
                    auStack_68._12_4_ = extraout_XMM0_Dd;
                    fStack_74 = in_XMM1_Db;
                    fStack_70 = in_XMM1_Dc;
                    fStack_6c = in_XMM1_Dd;
                    if (pCVar7 == (Characters_Human_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pUVar3 = ((Characters_Human_Fields *)((long)pCVar7 + 0x10))->Cache;
                    if (pUVar3 == (Utility_BaseComponentCache_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pUVar4 = (pUVar3->fields).Transform;
                    if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    UVar12 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
                    fStack_88 = UVar12.fields.z;
                    auStack_98._8_4_ = extraout_XMM0_Dc_00;
                    auStack_98._0_8_ = UVar12.fields._0_8_;
                    auStack_98._12_4_ = extraout_XMM0_Dd_00;
                    fStack_84 = in_XMM1_Db;
                    fStack_80 = in_XMM1_Dc;
                    fStack_7c = in_XMM1_Dd;
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
                    in_XMM1_Db = ((float)auStack_68._0_4_ - (float)auStack_98._0_4_) *
                                 ((float)auStack_68._0_4_ - (float)auStack_98._0_4_);
                    in_XMM1_Dc = (fStack_74 - fStack_84) * (fStack_74 - fStack_84);
                    in_XMM1_Dd = ((float)auStack_68._4_4_ - (float)auStack_98._4_4_) *
                                 ((float)auStack_68._4_4_ - (float)auStack_98._4_4_);
                    fVar9 = ((float)auStack_68._4_4_ - (float)auStack_98._4_4_) *
                            ((float)auStack_68._4_4_ - (float)auStack_98._4_4_) + in_XMM1_Db +
                            (fStack_78 - fStack_88) * (fStack_78 - fStack_88);
                    if (fVar9 < 0.0) {
                      fVar9 = sqrtf(fVar9);
                    }
                    else {
                      fVar9 = SQRT(fVar9);
                    }
                    if (fVar9 <= distance) break;
                    Characters_BaseCharacter__RemoveOutline
                              ((Characters_BaseCharacter_o *)pCVar7,(MethodInfo *)0x0);
                  }
                  b = (__this_00->fields).Team;
                  if ((((Il2CppClass *)TypeInfo_GameManagers_TeamInfo)->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
                  }
                  bVar6 = GameManagers_TeamInfo__SameTeam_5858ba0
                                    ((Characters_BaseCharacter_o *)pCVar7,b,(MethodInfo *)0x0);
                  if (bVar6) break;
                  in_XMM1_Dc = g_data_01009b00._8_4_;
                  in_XMM1_Dd = g_data_01009b00._12_4_;
                  color_00.fields.b = (float)(int)g_data_01009b00;
                  color_00.fields.a = (float)g_data_01009b00._4_4_;
                  color_00.fields.r = 1.0;
                  color_00.fields.g = 0.0;
                  in_XMM1_Db = g_data_01009b00._4_4_;
                  Characters_BaseCharacter__AddVisibleOutlineWithColor
                            ((Characters_BaseCharacter_o *)pCVar7,color_00,(MethodInfo *)0x0);
                }
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar6 = UnityEngine_Object__op_Equality
                                  ((UnityEngine_Object_o *)pCVar7,(UnityEngine_Object_o *)human,
                                   (MethodInfo *)0x0);
              } while (bVar6);
              fVar9 = g_data_01005870._4_4_;
              fVar10 = g_data_01005870._8_4_;
              fVar11 = g_data_01005870._12_4_;
              color.fields.b = (float)(int)g_data_01005870;
              color.fields.a = (float)g_data_01005870._4_4_;
              color.fields.r = (float)(int)g_data_01005870;
              color.fields.g = (float)g_data_01005870._4_4_;
              Characters_BaseCharacter__AddVisibleOutlineWithColor
                        ((Characters_BaseCharacter_o *)pCVar7,color,(MethodInfo *)0x0);
              pUVar3 = (__this_00->fields).Cache;
              if (pUVar3 == (Utility_BaseComponentCache_o *)0x0) {
                ThrowNullReferenceException();
              }
              pUVar4 = (pUVar3->fields).Transform;
              if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
                ThrowNullReferenceException();
              }
              UVar12 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
              fStack_78 = UVar12.fields.z;
              auStack_68._8_4_ = extraout_XMM0_Dc_01;
              auStack_68._0_8_ = UVar12.fields._0_8_;
              auStack_68._12_4_ = extraout_XMM0_Dd_01;
              pUVar3 = ((Characters_Human_Fields *)((long)pCVar7 + 0x10))->Cache;
              fStack_74 = fVar9;
              fStack_70 = fVar10;
              fStack_6c = fVar11;
              if (pUVar3 == (Utility_BaseComponentCache_o *)0x0) {
                ThrowNullReferenceException();
              }
              pUVar4 = (pUVar3->fields).Transform;
              if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
                ThrowNullReferenceException();
              }
              UVar12 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
              fStack_88 = UVar12.fields.z;
              auStack_98._8_4_ = extraout_XMM0_Dc_02;
              auStack_98._0_8_ = UVar12.fields._0_8_;
              auStack_98._12_4_ = extraout_XMM0_Dd_02;
              fStack_84 = fVar9;
              fStack_80 = fVar10;
              fStack_7c = fVar11;
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
              fVar10 = ((float)auStack_68._4_4_ - (float)auStack_98._4_4_) *
                       ((float)auStack_68._4_4_ - (float)auStack_98._4_4_) +
                       ((float)auStack_68._0_4_ - (float)auStack_98._0_4_) *
                       ((float)auStack_68._0_4_ - (float)auStack_98._0_4_) +
                       (fStack_78 - fStack_88) * (fStack_78 - fStack_88);
              if (fVar10 < 0.0) break;
              in_XMM1_Db = 0.0;
              in_XMM1_Dc = 0.0;
              in_XMM1_Dd = 0.0;
              fVar9 = SQRT(fVar10);
              if (SQRT(fVar10) < fVar8) goto label_05c09f1d;
            }
            fVar9 = sqrtf(fVar10);
            in_XMM1_Db = 0.0;
            in_XMM1_Dc = 0.0;
            in_XMM1_Dd = 0.0;
          } while (fVar8 <= fVar9);
        } while( true );
      }
    }
  }
label_05c0a32e:
  ThrowNullReferenceException();
}


// Characters.CarrySpecial$$Deactivate
// il2cpp: void Characters_CarrySpecial__Deactivate (Characters_CarrySpecial_o* __this, const MethodInfo* method);
// 0x5c0a3e0
// eh: try 0x5c0a5f3..0x5c0a637 -> pad 0x5c0a648 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c0a660..0x5c0a665 -> pad 0x5c0a684 cleanup
// eh: try 0x5c0a687..0x5c0a691 -> pad 0x5c0a699 catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c0a637: mov rdi, r12
// asm:   0x5c0a644: jmp 0x5c0a648
// asm:   0x5c0a646: jmp 0x5c0a648
// asm:   0x5c0a648: mov rbx, rax
// asm:   0x5c0a64b: cmp edx, 1
// asm:   0x5c0a64e: jne 0x5c0a687
// asm:   0x5c0a650: mov rdi, rbx
// asm:   0x5c0a653: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c0a658: mov rbx, qword ptr [rax]
// asm:   0x5c0a65b: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5c0a660: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c0a665: lea rax, [rip + 0x16837fc]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose
// asm:   0x5c0a66c: mov rsi, qword ptr [rax]
// asm:   0x5c0a66f: mov rdi, rsp
// asm:   0x5c0a672: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5c0a677: test rbx, rbx
// asm:   0x5c0a67a: je 0x5c0a624
// asm:   0x5c0a67c: mov rdi, rbx
// asm:   0x5c0a67f: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c0a684: mov rbx, rax
// asm:   0x5c0a687: lea rdi, [rsp + 0x20]
// asm:   0x5c0a68c: call 0x2fd9070  ; il2cpp_runtime_helper_02fd9070()
// asm:   0x5c0a691: mov rdi, rbx
// asm:   0x5c0a694: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c0a699: mov rdi, rax
// asm:   0x5c0a69c: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_CarrySpecial__Deactivate(Characters_CarrySpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar2;
  Characters_Human_o *pCVar3;
  Characters_Human_o *__this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o local_58;
  undefined8 local_38;
  undefined1 *local_30;
  
  if (Il2CppMethodInitialized_075476b4 == '\0') {
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
    Il2CppMethodInitialized_075476b4 = '\x01';
  }
  local_58.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  __this_01 = (Characters_Human_o *)(__this->fields)._owner;
  if (__this_01 != (Characters_Human_o *)0x0) {
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
label_05c0a63a:
      il2cpp_codegen_raise_invalid_cast_exception(__this_01);
    }
    pCVar3 = (__this_01->fields).BackHuman;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      Characters_Human__StopCarrySpecial(__this_01,(MethodInfo *)0x0);
      return;
    }
    pCVar3 = Characters_Human__GetCarryOption
                       (__this_01,
                        *(float *)(&g_data_0100ae48 + (ulong)((__this_01->fields).Grounded == false) * 4),
                        (MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      Characters_Human__StartCarrySpecial(__this_01,pCVar3,(MethodInfo *)0x0);
    }
    Characters_BaseUseable__SetCooldownLeft((Characters_BaseUseable_o *)__this,0.0,(MethodInfo *)0x0);
    __this_01 = (Characters_Human_o *)
                TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (__this_01 != (Characters_Human_o *)0x0) {
      bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
      if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) goto label_05c0a63a;
      __this_00 = *(System_Collections_Generic_HashSet_object__o **)&(__this_01->fields).IsVisible;
      if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___GetEnumerator
                  (&local_58,__this_00,
                   (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
        local_38 = 0;
        local_30 = (undefined1 *)&local_58;
        while( true ) {
          bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (&local_58,
                             (MethodInfo_4C456D0 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
          if (!bVar2) {
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      (&local_58,
                       (MethodInfo_4C456C0 *)
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
            return;
          }
          if ((Characters_BaseCharacter_o *)local_58.fields._current == (Characters_BaseCharacter_o *)0x0)
          break;
          Characters_BaseCharacter__RemoveOutline
                    ((Characters_BaseCharacter_o *)local_58.fields._current,(MethodInfo *)0x0);
        }
        ThrowNullReferenceException();
      }
    }
  }
  ThrowNullReferenceException();
}


