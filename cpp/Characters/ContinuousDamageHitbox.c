// Type: Characters.ContinuousDamageHitbox
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Characters/ContinuousDamageHitbox.cs
// Prior real C# source: none
// --------------------------------

// Characters.ContinuousDamageHitbox$$get_DestroysMap
// il2cpp: bool Characters_ContinuousDamageHitbox__get_DestroysMap (Characters_ContinuousDamageHitbox_o* __this, const MethodInfo* method);
// 0x180668280

bool
Characters_ContinuousDamageHitbox__get_DestroysMap(Characters_ContinuousDamageHitbox_o* __this, MethodInfo* method)

{
  return false;
}


// Characters.ContinuousDamageHitbox$$CreateContinuous
// il2cpp: Characters_ContinuousDamageHitbox_o* Characters_ContinuousDamageHitbox__CreateContinuous (Characters_BaseCharacter_o* owner, UnityEngine_GameObject_o* obj, UnityEngine_Collider_o* collider, int32_t damagePerSecond, float damageInterval, const MethodInfo* method);
// 0x182114ce0

Characters_ContinuousDamageHitbox_o *
Characters_ContinuousDamageHitbox__CreateContinuous
          (Characters_BaseCharacter_o *owner,UnityEngine_GameObject_o *obj,UnityEngine_Collider_o *collider,
          int32_t damagePerSecond,float damageInterval,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_BaseCharacter__float__o *__this;
  System_Collections_Generic_Dictionary_BaseCharacter__Collider__o *__this_00;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *pSVar1;
  System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *__this_01;
  System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__Collider__o *__this_02;
  UnityEngine_Collider_o *__this_03;
  Characters_ContinuousDamageHitbox_o *__this_04;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184346b6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_ContinuousDamageHitbox);
    Il2CppMethodInitialized_184346b6a = '\x01';
  }
  if (obj != (UnityEngine_GameObject_o *)0x0) {
    __this_04 = UnityEngine_GameObject__AddComponent_object_
                          (obj,(MethodInfo_6F4D60 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_ContinuousDamageHitbox);
    if (__this_04 != (Characters_ContinuousDamageHitbox_o *)0x0) {
      (__this_04->fields).Owner = owner;
      Il2CppCodeGenWriteBarrier(&(__this_04->fields).Owner,owner);
      (__this_04->fields)._collider = collider;
      Il2CppCodeGenWriteBarrier(&(__this_04->fields)._collider,collider);
      bVar2 = Il2CppMethodInitialized_184346b6c == '\0';
      (__this_04->fields).DamageInterval = damageInterval;
      (__this_04->fields).DamagePerSecond = damagePerSecond;
      if (bVar2) {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_Collider_Clear
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_Collider_Clear);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float_Clear);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_float_Clear);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Clear);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Clear);
        Il2CppMethodInitialized_184346b6c = '\x01';
      }
      __this = (__this_04->fields)._characterDamageTimers;
      if (__this != (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0) {
        System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                   (MethodInfo_13BF1C0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_float_Clear);
        __this_00 = (__this_04->fields)._characterColliders;
        if (__this_00 != (System_Collections_Generic_Dictionary_BaseCharacter__Collider__o *)0x0) {
          System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                     (MethodInfo_13BF1C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_Collider_Clear);
          pSVar1 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
                   (__this_04->fields)._charactersInside;
          if (pSVar1 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
            System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                      (pSVar1,(MethodInfo_17592A0 *)
                              MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Clear);
            __this_01 = (__this_04->fields)._handlerDamageTimers;
            if (__this_01 !=
                (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)0x0) {
              System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                         (MethodInfo_13BF1C0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float_Clear
                        );
              __this_02 = (__this_04->fields)._handlerColliders;
              if (__this_02 !=
                  (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__Collider__o *)0x0) {
                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
                           (MethodInfo_13BF1C0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_Collider_Clear
                          );
                pSVar1 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
                         (__this_04->fields)._handlersInside;
                if (pSVar1 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
                  System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                            (pSVar1,(MethodInfo_17592A0 *)
                                    MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Clear
                            );
                  UnityEngine_MonoBehaviour__StopAllCoroutines
                            ((UnityEngine_MonoBehaviour_o *)__this_04,(MethodInfo *)0x0);
                  (__this_04->fields)._mapSweep = (UnityEngine_Coroutine_o *)0x0;
                  Il2CppCodeGenWriteBarrier(&(__this_04->fields)._mapSweep,(void *)0x0);
                  __this_03 = (__this_04->fields)._collider;
                  if (__this_03 != (UnityEngine_Collider_o *)0x0) {
                    UnityEngine_Collider__set_enabled(__this_03,false,(MethodInfo *)0x0);
                    Characters_BaseHitbox__ToggleDebug
                              ((Characters_BaseHitbox_o *)__this_04,false,(MethodInfo *)0x0);
                    return __this_04;
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


// Characters.ContinuousDamageHitbox$$Activate
// il2cpp: void Characters_ContinuousDamageHitbox__Activate (Characters_ContinuousDamageHitbox_o* __this, float delay, float length, const MethodInfo* method);
// 0x182114a10

void Characters_ContinuousDamageHitbox__Activate
               (Characters_ContinuousDamageHitbox_o *__this,float delay,float length,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_BaseCharacter__float__o *__this_00;
  System_Collections_Generic_Dictionary_BaseCharacter__Collider__o *__this_01;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *pSVar1;
  System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *__this_02;
  System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__Collider__o *__this_03;
  Characters_BaseHitbox__WaitAndActivate_d__18_o *routine;
  Characters_BaseHitbox__WaitAndDeactivate_d__21_o *routine_00;
  
  if (Il2CppMethodInitialized_184346b6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_Collider_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_Collider_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_float_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Clear);
    Il2CppMethodInitialized_184346b6b = '\x01';
  }
  __this_00 = (__this->fields)._characterDamageTimers;
  if (__this_00 != (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_13BF1C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_float_Clear);
    __this_01 = (__this->fields)._characterColliders;
    if (__this_01 != (System_Collections_Generic_Dictionary_BaseCharacter__Collider__o *)0x0) {
      System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                 (MethodInfo_13BF1C0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_Collider_Clear);
      pSVar1 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)(__this->fields)._charactersInside;
      if (pSVar1 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
        System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                  (pSVar1,(MethodInfo_17592A0 *)
                          MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Clear);
        __this_02 = (__this->fields)._handlerDamageTimers;
        if (__this_02 != (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)0x0) {
          System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
                     (MethodInfo_13BF1C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float_Clear)
          ;
          __this_03 = (__this->fields)._handlerColliders;
          if (__this_03 !=
              (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__Collider__o *)0x0) {
            System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,
                       (MethodInfo_13BF1C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_Collider_Clear
                      );
            pSVar1 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
                     (__this->fields)._handlersInside;
            if (pSVar1 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
              System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                        (pSVar1,(MethodInfo_17592A0 *)
                                MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Clear
                        );
              if (Il2CppMethodInitialized_184346b52 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Clear);
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_System_Collections_Generic_HashSet_GameObject_Clear);
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Clear);
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_System_Collections_Generic_HashSet_Collider_Clear);
                Il2CppMethodInitialized_184346b52 = '\x01';
              }
              pSVar1 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
                       (__this->fields)._hitGameObjects;
              if (pSVar1 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
                System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                          (pSVar1,(MethodInfo_17592A0 *)
                                  MethodInfo_System_Collections_Generic_HashSet_GameObject_Clear);
                pSVar1 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
                         (__this->fields)._firstHitCharacters;
                if (pSVar1 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
                  System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                            (pSVar1,(MethodInfo_17592A0 *)
                                    MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Clear);
                  pSVar1 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
                           (__this->fields)._firstHitHandlers;
                  if (pSVar1 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
                    System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                              (pSVar1,(MethodInfo_17592A0 *)
                                      MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Clear
                              );
                    pSVar1 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
                             (__this->fields)._firstFrameColliders;
                    if (pSVar1 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
                      System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                                (pSVar1,(MethodInfo_17592A0 *)
                                        MethodInfo_System_Collections_Generic_HashSet_Collider_Clear);
                      if (delay == 0.0) {
                        Characters_BaseHitbox__Enable((Characters_BaseHitbox_o *)__this,(MethodInfo *)0x0);
                      }
                      else {
                        if (Il2CppMethodInitialized_184346b53 == '\0') {
                          il2cpp_codegen_initialize_runtime_metadata
                                    (&TypeInfo_Characters_BaseHitbox_WaitAndActivate_d__18);
                          Il2CppMethodInitialized_184346b53 = '\x01';
                        }
                        routine = il2cpp_codegen_object_new
                                            ((Il2CppClass *)
                                             TypeInfo_Characters_BaseHitbox_WaitAndActivate_d__18);
                        System_Object___ctor
                                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,
                                   (MethodInfo *)0x0);
                        (routine->fields).__1__state = 0;
                        (routine->fields).__4__this = (Characters_BaseHitbox_o *)__this;
                        Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
                        (routine->fields).delay = delay;
                        UnityEngine_MonoBehaviour__StartCoroutine_Auto
                                  ((UnityEngine_MonoBehaviour_o *)__this,
                                   (System_Collections_IEnumerator_o *)routine,(MethodInfo *)0x0);
                      }
                      if (0.0 < length) {
                        if (Il2CppMethodInitialized_184346b56 == '\0') {
                          il2cpp_codegen_initialize_runtime_metadata
                                    (&TypeInfo_Characters_BaseHitbox_WaitAndDeactivate_d__21);
                          Il2CppMethodInitialized_184346b56 = '\x01';
                        }
                        routine_00 = il2cpp_codegen_object_new
                                               ((Il2CppClass *)
                                                TypeInfo_Characters_BaseHitbox_WaitAndDeactivate_d__21);
                        System_Object___ctor
                                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine_00,
                                   (MethodInfo *)0x0);
                        (routine_00->fields).__1__state = 0;
                        (routine_00->fields).__4__this = (Characters_BaseHitbox_o *)__this;
                        Il2CppCodeGenWriteBarrier(&(routine_00->fields).__4__this,__this);
                        (routine_00->fields).delay = delay + length;
                        UnityEngine_MonoBehaviour__StartCoroutine_Auto
                                  ((UnityEngine_MonoBehaviour_o *)__this,
                                   (System_Collections_IEnumerator_o *)routine_00,(MethodInfo *)0x0);
                      }
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
  ThrowNullReferenceException();
}


// Characters.ContinuousDamageHitbox$$Deactivate
// il2cpp: void Characters_ContinuousDamageHitbox__Deactivate (Characters_ContinuousDamageHitbox_o* __this, const MethodInfo* method);
// 0x182114eb0

void Characters_ContinuousDamageHitbox__Deactivate
               (Characters_ContinuousDamageHitbox_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_BaseCharacter__float__o *__this_00;
  System_Collections_Generic_Dictionary_BaseCharacter__Collider__o *__this_01;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *pSVar1;
  System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *__this_02;
  System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__Collider__o *__this_03;
  UnityEngine_Collider_o *__this_04;
  
  if (Il2CppMethodInitialized_184346b6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_Collider_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_Collider_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_float_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Clear);
    Il2CppMethodInitialized_184346b6c = '\x01';
  }
  __this_00 = (__this->fields)._characterDamageTimers;
  if (__this_00 != (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_13BF1C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_float_Clear);
    __this_01 = (__this->fields)._characterColliders;
    if (__this_01 != (System_Collections_Generic_Dictionary_BaseCharacter__Collider__o *)0x0) {
      System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                 (MethodInfo_13BF1C0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_Collider_Clear);
      pSVar1 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)(__this->fields)._charactersInside;
      if (pSVar1 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
        System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                  (pSVar1,(MethodInfo_17592A0 *)
                          MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Clear);
        __this_02 = (__this->fields)._handlerDamageTimers;
        if (__this_02 != (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)0x0) {
          System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
                     (MethodInfo_13BF1C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float_Clear)
          ;
          __this_03 = (__this->fields)._handlerColliders;
          if (__this_03 !=
              (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__Collider__o *)0x0) {
            System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,
                       (MethodInfo_13BF1C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_Collider_Clear
                      );
            pSVar1 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
                     (__this->fields)._handlersInside;
            if (pSVar1 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
              System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                        (pSVar1,(MethodInfo_17592A0 *)
                                MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Clear
                        );
              UnityEngine_MonoBehaviour__StopAllCoroutines
                        ((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
              (__this->fields)._mapSweep = (UnityEngine_Coroutine_o *)0x0;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._mapSweep,(void *)0x0);
              __this_04 = (__this->fields)._collider;
              if (__this_04 != (UnityEngine_Collider_o *)0x0) {
                UnityEngine_Collider__set_enabled(__this_04,false,(MethodInfo *)0x0);
                Characters_BaseHitbox__ToggleDebug((Characters_BaseHitbox_o *)__this,false,(MethodInfo *)0x0);
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


// Characters.ContinuousDamageHitbox$$OnTriggerEnter
// il2cpp: void Characters_ContinuousDamageHitbox__OnTriggerEnter (Characters_ContinuousDamageHitbox_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x182115110
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182115318: mov r9, qword ptr [rip + 0x1f7e279]  ; MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_Collider_set_Item
// asm:   0x18211531f: mov r8, rsi
// asm:   0x182115322: mov rdx, rdi
// asm:   0x1821153c9: mov r9, qword ptr [rip + 0x1f84e18]  ; MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_Collider_set_Item
// asm:   0x1821153d0: mov r8, rsi
// asm:   0x1821153d3: mov rdx, rbp
// asm:   0x1821153d6: jmp 0x182115325

void Characters_ContinuousDamageHitbox__OnTriggerEnter
               (Characters_ContinuousDamageHitbox_o *__this,UnityEngine_Collider_o *other,MethodInfo *method)

{
  Characters_BaseCharacter_o *a;
  System_Collections_Generic_HashSet_object__o *pSVar1;
  System_Collections_Generic_Dictionary_BaseCharacter__float__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *__this_02;
  MethodInfo *method_00;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  Characters_BaseCharacter_o *b;
  Characters_BaseCharacter_o *x;
  
  if (Il2CppMethodInitialized_184346b6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_Collider_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_Collider_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_float_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicCollisionHandler);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_184346b6d = '\x01';
  }
  if ((((other == (UnityEngine_Collider_o *)0x0) ||
       (pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)other,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_Transform_o *)0x0)) ||
      (pUVar3 = UnityEngine_Transform__GetRoot(pUVar3,(MethodInfo *)0x0),
      pUVar3 == (UnityEngine_Transform_o *)0x0)) ||
     (pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
     pUVar4 == (UnityEngine_GameObject_o *)0x0)) goto label_1821153db;
  b = UnityEngine_GameObject__GetComponent_object_
                (pUVar4,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_BaseCharacter);
  pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_1821153db;
  x = (Characters_BaseCharacter_o *)
      UnityEngine_GameObject__GetComponent_object_
                (pUVar4,(MethodInfo_6F5650 *)
                        MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicCollisionHandler);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)b,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    a = (__this->fields).Owner;
    if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    }
    bVar2 = GameManagers_TeamInfo__SameTeam_1e770d0(a,b,(MethodInfo *)0x0);
    if (bVar2) goto label_18211533f;
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._charactersInside;
    if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1821153db;
    bVar2 = System_Collections_Generic_HashSet_object___Contains
                      (pSVar1,(Il2CppObject *)b,
                       (MethodInfo_1759E40 *)
                       MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Contains);
    if (bVar2) {
      return;
    }
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._charactersInside;
    if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1821153db;
    System_Collections_Generic_HashSet_object___Add
              (pSVar1,(Il2CppObject *)b,
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add);
    __this_00 = (__this->fields)._characterDamageTimers;
    if (__this_00 == (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0) goto label_1821153db;
    System_Collections_Generic_Dictionary_object__float___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)b,0.0,
               (MethodInfo_1488DA0 *)
               MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_float_set_Item);
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields)._characterColliders;
    method_00 = MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_Collider_set_Item;
  }
  else {
label_18211533f:
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._handlersInside;
    if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1821153db;
    bVar2 = System_Collections_Generic_HashSet_object___Contains
                      (pSVar1,(Il2CppObject *)x,
                       (MethodInfo_1759E40 *)
                       MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Contains);
    if (bVar2) {
      return;
    }
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._handlersInside;
    if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1821153db;
    System_Collections_Generic_HashSet_object___Add
              (pSVar1,(Il2CppObject *)x,
               (MethodInfo_1757CE0 *)
               MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Add);
    __this_02 = (__this->fields)._handlerDamageTimers;
    if (__this_02 == (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)0x0)
    goto label_1821153db;
    System_Collections_Generic_Dictionary_object__float___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,(Il2CppObject *)x,0.0,
               (MethodInfo_1488DA0 *)
               MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float_set_Item);
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._handlerColliders;
    b = x;
    method_00 = MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_Collider_set_Item
    ;
  }
  if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this_01,(Il2CppObject *)b,(Il2CppObject *)other,(MethodInfo_147A7F0 *)method_00);
    return;
  }
label_1821153db:
  ThrowNullReferenceException();
}


// Characters.ContinuousDamageHitbox$$OnTriggerStay
// il2cpp: void Characters_ContinuousDamageHitbox__OnTriggerStay (Characters_ContinuousDamageHitbox_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x182115670
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182115878: mov r9, qword ptr [rip + 0x1f7dd19]  ; MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_Collider_set_Item
// asm:   0x18211587f: mov r8, rsi
// asm:   0x182115882: mov rdx, rdi
// asm:   0x182115929: mov r9, qword ptr [rip + 0x1f848b8]  ; MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_Collider_set_Item
// asm:   0x182115930: mov r8, rsi
// asm:   0x182115933: mov rdx, rbp
// asm:   0x182115936: jmp 0x182115885

void Characters_ContinuousDamageHitbox__OnTriggerStay
               (Characters_ContinuousDamageHitbox_o *__this,UnityEngine_Collider_o *other,MethodInfo *method)

{
  Characters_BaseCharacter_o *a;
  System_Collections_Generic_HashSet_object__o *pSVar1;
  System_Collections_Generic_Dictionary_BaseCharacter__float__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *__this_02;
  MethodInfo *method_00;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  Characters_BaseCharacter_o *b;
  Characters_BaseCharacter_o *x;
  
  if (Il2CppMethodInitialized_184346b6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_Collider_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_Collider_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_float_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicCollisionHandler);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_184346b6e = '\x01';
  }
  if ((((other == (UnityEngine_Collider_o *)0x0) ||
       (pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)other,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_Transform_o *)0x0)) ||
      (pUVar3 = UnityEngine_Transform__GetRoot(pUVar3,(MethodInfo *)0x0),
      pUVar3 == (UnityEngine_Transform_o *)0x0)) ||
     (pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
     pUVar4 == (UnityEngine_GameObject_o *)0x0)) goto label_18211593b;
  b = UnityEngine_GameObject__GetComponent_object_
                (pUVar4,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_BaseCharacter);
  pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_18211593b;
  x = (Characters_BaseCharacter_o *)
      UnityEngine_GameObject__GetComponent_object_
                (pUVar4,(MethodInfo_6F5650 *)
                        MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicCollisionHandler);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)b,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    a = (__this->fields).Owner;
    if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    }
    bVar2 = GameManagers_TeamInfo__SameTeam_1e770d0(a,b,(MethodInfo *)0x0);
    if (bVar2) goto label_18211589f;
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._charactersInside;
    if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_18211593b;
    bVar2 = System_Collections_Generic_HashSet_object___Contains
                      (pSVar1,(Il2CppObject *)b,
                       (MethodInfo_1759E40 *)
                       MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Contains);
    if (bVar2) {
      return;
    }
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._charactersInside;
    if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_18211593b;
    System_Collections_Generic_HashSet_object___Add
              (pSVar1,(Il2CppObject *)b,
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add);
    __this_00 = (__this->fields)._characterDamageTimers;
    if (__this_00 == (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0) goto label_18211593b;
    System_Collections_Generic_Dictionary_object__float___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)b,0.0,
               (MethodInfo_1488DA0 *)
               MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_float_set_Item);
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields)._characterColliders;
    method_00 = MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_Collider_set_Item;
  }
  else {
label_18211589f:
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._handlersInside;
    if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_18211593b;
    bVar2 = System_Collections_Generic_HashSet_object___Contains
                      (pSVar1,(Il2CppObject *)x,
                       (MethodInfo_1759E40 *)
                       MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Contains);
    if (bVar2) {
      return;
    }
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._handlersInside;
    if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_18211593b;
    System_Collections_Generic_HashSet_object___Add
              (pSVar1,(Il2CppObject *)x,
               (MethodInfo_1757CE0 *)
               MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Add);
    __this_02 = (__this->fields)._handlerDamageTimers;
    if (__this_02 == (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)0x0)
    goto label_18211593b;
    System_Collections_Generic_Dictionary_object__float___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,(Il2CppObject *)x,0.0,
               (MethodInfo_1488DA0 *)
               MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float_set_Item);
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._handlerColliders;
    b = x;
    method_00 = MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_Collider_set_Item
    ;
  }
  if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this_01,(Il2CppObject *)b,(Il2CppObject *)other,(MethodInfo_147A7F0 *)method_00);
    return;
  }
label_18211593b:
  ThrowNullReferenceException();
}


// Characters.ContinuousDamageHitbox$$OnTriggerExit
// il2cpp: void Characters_ContinuousDamageHitbox__OnTriggerExit (Characters_ContinuousDamageHitbox_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x1821153f0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821155ab: mov r8, qword ptr [rip + 0x1f7de36]  ; MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_Collider_Remove
// asm:   0x1821155b2: mov rdx, rsi
// asm:   0x182115651: mov r8, qword ptr [rip + 0x1f849d0]  ; MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_Collider_Remove
// asm:   0x182115658: mov rdx, rdi
// asm:   0x18211565b: jmp 0x1821155b5

void Characters_ContinuousDamageHitbox__OnTriggerExit
               (Characters_ContinuousDamageHitbox_o *__this,UnityEngine_Collider_o *other,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  System_Collections_Generic_Dictionary_BaseCharacter__float__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *__this_02;
  MethodInfo *method_00;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  Characters_BaseCharacter_o *x;
  Characters_BaseCharacter_o *x_00;
  
  if (Il2CppMethodInitialized_184346b6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_Collider_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_float_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_Collider_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicCollisionHandler);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346b6f = '\x01';
  }
  if ((((other == (UnityEngine_Collider_o *)0x0) ||
       (pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)other,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_Transform_o *)0x0)) ||
      (pUVar3 = UnityEngine_Transform__GetRoot(pUVar3,(MethodInfo *)0x0),
      pUVar3 == (UnityEngine_Transform_o *)0x0)) ||
     (pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
     pUVar4 == (UnityEngine_GameObject_o *)0x0)) goto label_182115660;
  x = UnityEngine_GameObject__GetComponent_object_
                (pUVar4,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_BaseCharacter);
  pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_182115660;
  x_00 = (Characters_BaseCharacter_o *)
         UnityEngine_GameObject__GetComponent_object_
                   (pUVar4,(MethodInfo_6F5650 *)
                           MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicCollisionHandler);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._charactersInside;
    if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_182115660;
    bVar2 = System_Collections_Generic_HashSet_object___Contains
                      (pSVar1,(Il2CppObject *)x,
                       (MethodInfo_1759E40 *)
                       MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Contains);
    if (!bVar2) goto label_1821155ca;
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._charactersInside;
    if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_182115660;
    System_Collections_Generic_HashSet_object___Remove
              (pSVar1,(Il2CppObject *)x,
               (MethodInfo_1766930 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Remove);
    __this_00 = (__this->fields)._characterDamageTimers;
    if (__this_00 == (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0) goto label_182115660;
    System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___Remove
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)x,
               (MethodInfo_145AA00 *)
               MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_float_Remove);
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields)._characterColliders;
    method_00 = MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_Collider_Remove;
  }
  else {
label_1821155ca:
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._handlersInside;
    if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_182115660;
    bVar2 = System_Collections_Generic_HashSet_object___Contains
                      (pSVar1,(Il2CppObject *)x_00,
                       (MethodInfo_1759E40 *)
                       MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Contains);
    if (!bVar2) {
      return;
    }
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._handlersInside;
    if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_182115660;
    System_Collections_Generic_HashSet_object___Remove
              (pSVar1,(Il2CppObject *)x_00,
               (MethodInfo_1766930 *)
               MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Remove);
    __this_02 = (__this->fields)._handlerDamageTimers;
    if (__this_02 == (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)0x0)
    goto label_182115660;
    System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___Remove
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,(Il2CppObject *)x_00,
               (MethodInfo_145AA00 *)
               MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float_Remove);
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._handlerColliders;
    x = x_00;
    method_00 = MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_Collider_Remove;
  }
  if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Remove
              (__this_01,(Il2CppObject *)x,(MethodInfo_1470BF0 *)method_00);
    return;
  }
label_182115660:
  ThrowNullReferenceException();
}


// Characters.ContinuousDamageHitbox$$Update
// il2cpp: void Characters_ContinuousDamageHitbox__Update (Characters_ContinuousDamageHitbox_o* __this, const MethodInfo* method);
// 0x182115950
// eh: try 0x182115c2a..0x1821162d1 -> pad 0x1833245a0 (+7 call sites) catch Il2CppExceptionWrapper
// asm: 84 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182115c2d: nop dword ptr [rax]
// asm:   0x182115dbd: mov rdx, qword ptr [rip + 0x1f5ef74]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_Dispose
// asm:   0x182115dc4: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182115dc9: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182115dce: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x182115dd3: test rcx, rcx
// asm:   0x182115dd6: jne 0x18211627b
// asm:   0x182115ddc: mov rdi, qword ptr [rsp + 0x110]
// asm:   0x182115de4: mov r15, qword ptr [rsp + 0x128]
// asm:   0x182115dec: xorps xmm7, xmm7
// asm:   0x182115def: mov r12, qword ptr [rsp + 0x120]
// asm:   0x182115e3d: nop dword ptr [rax]
// asm:   0x182115ec4: mov rdx, qword ptr [rip + 0x1f5f10d]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseCharacter_Dispose
// asm:   0x182115ecb: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182115ed0: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182115ed5: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x182115eda: test rcx, rcx
// asm:   0x182115edd: jne 0x182116291
// asm:   0x182115ee3: mov rdi, qword ptr [rsp + 0x110]
// asm:   0x182115eeb: xorps xmm7, xmm7
// asm:   0x182115eee: mov r12, qword ptr [rsp + 0x120]
// asm:   0x1821160fe: mov rdx, qword ptr [rip + 0x1f642cb]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_CustomLogicCollisionHandler_Dispose
// asm:   0x182116105: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18211610a: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18211610f: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x182116114: test rcx, rcx
// asm:   0x182116117: jne 0x1821162bb
// asm:   0x18211611d: mov rdi, qword ptr [rsp + 0x110]
// asm:   0x182116125: mov r15, qword ptr [rsp + 0x120]
// asm:   0x18211617c: nop dword ptr [rax]
// asm:   0x182116210: mov rdx, qword ptr [rip + 0x1f64459]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicCollisionHandler_Dispose
// asm:   0x182116217: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18211621c: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182116221: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x182116226: test rcx, rcx
// asm:   0x182116229: jne 0x1821162d1
// asm:   0x18211627b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x182116291: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1821162bb: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1821162d1: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Characters_ContinuousDamageHitbox__Update(Characters_ContinuousDamageHitbox_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_Vector2Int__o *pSVar1;
  System_Collections_Generic_Dictionary_BaseCharacter__float__o *pSVar2;
  System_Collections_Generic_Dictionary_BaseCharacter__Collider__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_HashSet_object__o *pSVar4;
  System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *pSVar5;
  System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__Collider__o *__this_01;
  Characters_BaseCharacter_o *pCVar6;
  bool bVar7;
  System_Collections_Generic_List_BaseCharacter__o *__this_02;
  UnityEngine_Collider_o *pUVar8;
  System_Collections_Generic_List_CustomLogicCollisionHandler__o *__this_03;
  float fVar9;
  float fVar10;
  undefined1 local_e8 [16];
  Characters_BaseCharacter_o *local_d8;
  undefined1 local_d0 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_c8;
  Characters_BaseCharacter_o *local_c0;
  undefined1 local_b8 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_b0;
  Characters_BaseCharacter_o *local_a8;
  undefined1 local_a0 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_98;
  Characters_BaseCharacter_o *local_90;
  undefined1 local_88 [8];
  uint64_t uStack_80;
  Characters_BaseCharacter_o *local_78;
  
  if (Il2CppMethodInitialized_184346b70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_float_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_Collider_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_Collider_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_Collider_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_float_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_Collider_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_Collider_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_float_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_Collider_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_float_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseCharacter_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_CustomLogicCollisionHandler_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicCollisionHandler_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicCollisionHandler_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseCharacter_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_CustomLogicCollisionHandler_MoveNext)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseCharacter_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicCollisionHandler_get_Current)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_CustomLogicCollisionHandler_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BaseCharacter_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicCollisionHandler_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicCollisionHandler_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseCharacter_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BaseCharacter_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicCollisionHandler_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_CustomLogicCollisionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346b70 = '\x01';
  }
  local_d0 = (undefined1  [8])0x0;
  pUStack_c8 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_c0 = (Characters_BaseCharacter_o *)0x0;
  local_b8 = (undefined1  [8])0x0;
  pUStack_b0 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_a8 = (Characters_BaseCharacter_o *)0x0;
  local_a0 = (undefined1  [8])0x0;
  pUStack_98 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_90 = (Characters_BaseCharacter_o *)0x0;
  local_88 = (undefined1  [8])0x0;
  uStack_80 = 0;
  local_78 = (Characters_BaseCharacter_o *)0x0;
  pUVar8 = (__this->fields)._collider;
  if (pUVar8 != (UnityEngine_Collider_o *)0x0) {
    bVar7 = UnityEngine_Collider__get_enabled(pUVar8,(MethodInfo *)0x0);
    if (!bVar7) {
      return;
    }
    __this_02 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BaseCharacter);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this_02,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_BaseCharacter_ctor);
    pSVar1 = (System_Collections_Generic_HashSet_Vector2Int__o *)(__this->fields)._charactersInside;
    if (pSVar1 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
      System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_e8,pSVar1,
                 (MethodInfo_175C200 *)
                 MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_GetEnumerator);
      local_d0 = (undefined1  [8])local_e8._0_8_;
      pUStack_c8 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_e8._8_8_;
      local_c0 = local_d8;
      local_e8._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_e8._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_d0;
      while (bVar7 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                               ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_d0,
                                (MethodInfo_15381F0 *)
                                MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_MoveNext
                               ), pCVar6 = local_c0, bVar7) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar7 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar7) {
label_182115d8c:
          if (__this_02 == (System_Collections_Generic_List_BaseCharacter__o *)0x0) {
            ThrowNullReferenceException();
          }
          il2cpp_runtime_helper_180012890(__this_02,pCVar6);
        }
        else {
          if (pCVar6 == (Characters_BaseCharacter_o *)0x0) {
            ThrowNullReferenceException();
          }
          if ((pCVar6->fields).Dead != false) goto label_182115d8c;
          pSVar2 = (__this->fields)._characterDamageTimers;
          if (pSVar2 == (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar7 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                             (Il2CppObject *)pCVar6,
                             (MethodInfo_1455450 *)
                             MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_float_ContainsKey)
          ;
          if (bVar7) {
            pSVar2 = (__this->fields)._characterDamageTimers;
            if (pSVar2 == (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0) {
              ThrowNullReferenceException();
            }
            fVar9 = System_Collections_Generic_Dictionary_object__float___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                               (Il2CppObject *)pCVar6,
                               (MethodInfo_1488BA0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_float_get_Item);
            fVar10 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            System_Collections_Generic_Dictionary_object__float___set_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,(Il2CppObject *)pCVar6,
                       fVar10 + fVar9,
                       (MethodInfo_1488DA0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_float_set_Item);
            pSVar2 = (__this->fields)._characterDamageTimers;
            if (pSVar2 == (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0) {
              ThrowNullReferenceException();
            }
            fVar9 = System_Collections_Generic_Dictionary_object__float___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                               (Il2CppObject *)pCVar6,
                               (MethodInfo_1488BA0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_float_get_Item);
            if ((__this->fields).DamageInterval <= fVar9) {
              __this_00 = (__this->fields)._characterColliders;
              if (__this_00 == (System_Collections_Generic_Dictionary_BaseCharacter__Collider__o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar7 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                                 (Il2CppObject *)pCVar6,
                                 (MethodInfo_1455450 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_Collider_ContainsKey
                                );
              if (bVar7) {
                pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                         (__this->fields)._characterColliders;
                if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                pUVar8 = System_Collections_Generic_Dictionary_object__object___get_Item
                                   (pSVar3,(Il2CppObject *)pCVar6,
                                    (MethodInfo_147A5B0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_Collider_get_Item
                                   );
                (*(__this->klass->vtable)._8_OnHit.methodPtr)
                          (__this,pCVar6,pUVar8,(__this->klass->vtable)._8_OnHit.method);
              }
              pSVar2 = (__this->fields)._characterDamageTimers;
              if (pSVar2 == (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0) {
                ThrowNullReferenceException();
              }
              System_Collections_Generic_Dictionary_object__float___set_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                         (Il2CppObject *)pCVar6,0.0,
                         (MethodInfo_1488DA0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_float_set_Item);
            }
          }
        }
      }
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_d0,
                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_Dispose);
      if (__this_02 != (System_Collections_Generic_List_BaseCharacter__o *)0x0) {
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_e8,
                   (System_Collections_Generic_List_T__o *)__this_02,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_BaseCharacter_GetEnumerator
                  );
        local_b8 = (undefined1  [8])local_e8._0_8_;
        pUStack_b0 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_e8._8_8_;
        local_a8 = local_d8;
        local_e8._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
        local_e8._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_b8;
        while (bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 ((System_Collections_Generic_List_Enumerator_object__o *)local_b8,
                                  (MethodInfo_153A2A0 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_BaseCharacter_MoveNext
                                 ), pCVar6 = local_a8, bVar7) {
          pSVar4 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._charactersInside;
          if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_HashSet_object___Remove
                    (pSVar4,(Il2CppObject *)local_a8,
                     (MethodInfo_1766930 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Remove)
          ;
          pSVar2 = (__this->fields)._characterDamageTimers;
          if (pSVar2 == (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___Remove
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,(Il2CppObject *)pCVar6,
                     (MethodInfo_145AA00 *)
                     MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_float_Remove);
          pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._characterColliders;
          if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_Dictionary_object__object___Remove
                    (pSVar3,(Il2CppObject *)pCVar6,
                     (MethodInfo_1470BF0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_Collider_Remove);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_b8,
                   MethodInfo_System_Collections_Generic_List_Enumerator_BaseCharacter_Dispose);
        __this_03 = il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Collections_Generic_List_CustomLogicCollisionHandler);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_LowLevelList_T__o *)__this_03,
                   (MethodInfo_92A240 *)
                   MethodInfo_System_Collections_Generic_List_CustomLogicCollisionHandler_ctor);
        pSVar1 = (System_Collections_Generic_HashSet_Vector2Int__o *)(__this->fields)._handlersInside;
        if (pSVar1 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
          System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
                    ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_e8,pSVar1,
                     (MethodInfo_175C200 *)
                     MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_GetEnumerator);
          local_a0 = (undefined1  [8])local_e8._0_8_;
          pUStack_98 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_e8._8_8_;
          local_90 = local_d8;
          local_e8._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
          local_e8._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a0;
          while (bVar7 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                   ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_a0,
                                    (MethodInfo_15381F0 *)
                                    MethodInfo_System_Collections_Generic_HashSet_Enumerator_CustomLogicCollisionHandler_MoveNext
                                   ), pCVar6 = local_90, bVar7) {
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar7 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar7) {
              if (__this_03 == (System_Collections_Generic_List_CustomLogicCollisionHandler__o *)0x0) {
                ThrowNullReferenceException();
              }
              il2cpp_runtime_helper_180012890(__this_03,pCVar6);
            }
            else {
              pSVar5 = (__this->fields)._handlerDamageTimers;
              if (pSVar5 == (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)0x0
                 ) {
                ThrowNullReferenceException();
              }
              bVar7 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,
                                 (Il2CppObject *)pCVar6,
                                 (MethodInfo_1455450 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float_ContainsKey
                                );
              if (bVar7) {
                pSVar5 = (__this->fields)._handlerDamageTimers;
                if (pSVar5 == (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)
                              0x0) {
                  ThrowNullReferenceException();
                }
                fVar9 = System_Collections_Generic_Dictionary_object__float___get_Item
                                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,
                                   (Il2CppObject *)pCVar6,
                                   (MethodInfo_1488BA0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float_get_Item
                                  );
                fVar10 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                System_Collections_Generic_Dictionary_object__float___set_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,
                           (Il2CppObject *)pCVar6,fVar10 + fVar9,
                           (MethodInfo_1488DA0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float_set_Item
                          );
                pSVar5 = (__this->fields)._handlerDamageTimers;
                if (pSVar5 == (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)
                              0x0) {
                  ThrowNullReferenceException();
                }
                fVar9 = System_Collections_Generic_Dictionary_object__float___get_Item
                                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,
                                   (Il2CppObject *)pCVar6,
                                   (MethodInfo_1488BA0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float_get_Item
                                  );
                if ((__this->fields).DamageInterval <= fVar9) {
                  __this_01 = (__this->fields)._handlerColliders;
                  if (__this_01 ==
                      (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__Collider__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  bVar7 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                                     (Il2CppObject *)pCVar6,
                                     (MethodInfo_1455450 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_Collider_ContainsKey
                                    );
                  if (bVar7) {
                    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                             (__this->fields)._handlerColliders;
                    if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pUVar8 = System_Collections_Generic_Dictionary_object__object___get_Item
                                       (pSVar3,(Il2CppObject *)pCVar6,
                                        (MethodInfo_147A5B0 *)
                                        MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_Collider_get_Item
                                       );
                    (*(__this->klass->vtable)._9_OnHit.methodPtr)
                              (__this,(CustomLogic_CustomLogicCollisionHandler_o *)pCVar6,pUVar8,
                               (__this->klass->vtable)._9_OnHit.method);
                  }
                  pSVar5 = (__this->fields)._handlerDamageTimers;
                  if (pSVar5 == (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *
                                )0x0) {
                    ThrowNullReferenceException();
                  }
                  System_Collections_Generic_Dictionary_object__float___set_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,
                             (Il2CppObject *)pCVar6,0.0,
                             (MethodInfo_1488DA0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float_set_Item
                            );
                }
              }
            }
          }
          System_Collections_Generic_HashSet_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a0,
                     MethodInfo_System_Collections_Generic_HashSet_Enumerator_CustomLogicCollisionHandler_Dispose
                    );
          if (__this_03 != (System_Collections_Generic_List_CustomLogicCollisionHandler__o *)0x0) {
            System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)local_e8,
                       (System_Collections_Generic_List_T__o *)__this_03,
                       (MethodInfo_91F180 *)
                       MethodInfo_System_Collections_Generic_List_CustomLogicCollisionHandler_GetEnumerator);
            local_88 = (undefined1  [8])local_e8._0_8_;
            uStack_80 = local_e8._8_8_;
            local_78 = local_d8;
            local_e8._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
            local_e8._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_88;
            while( true ) {
              bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                ((System_Collections_Generic_List_Enumerator_object__o *)local_88,
                                 (MethodInfo_153A2A0 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicCollisionHandler_MoveNext
                                );
              pCVar6 = local_78;
              if (!bVar7) {
                System_Collections_Generic_List_Enumerator_object___Dispose
                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_88,
                           MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicCollisionHandler_Dispose
                          );
                return;
              }
              pSVar4 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._handlersInside;
              if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                ThrowNullReferenceException();
              }
              System_Collections_Generic_HashSet_object___Remove
                        (pSVar4,(Il2CppObject *)local_78,
                         (MethodInfo_1766930 *)
                         MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Remove);
              pSVar5 = (__this->fields)._handlerDamageTimers;
              if (pSVar5 == (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)0x0
                 ) {
                ThrowNullReferenceException();
              }
              System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___Remove
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,
                         (Il2CppObject *)pCVar6,
                         (MethodInfo_145AA00 *)
                         MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float_Remove
                        );
              pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields)._handlerColliders;
              if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
              System_Collections_Generic_Dictionary_object__object___Remove
                        (pSVar3,(Il2CppObject *)pCVar6,
                         (MethodInfo_1470BF0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_Collider_Remove
                        );
            }
            ThrowNullReferenceException();
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.ContinuousDamageHitbox$$OnHit
// il2cpp: void Characters_ContinuousDamageHitbox__OnHit (Characters_ContinuousDamageHitbox_o* __this, Characters_BaseCharacter_o* victim, UnityEngine_Collider_o* collider, const MethodInfo* method);
// 0x182115080

void Characters_ContinuousDamageHitbox__OnHit
               (Characters_ContinuousDamageHitbox_o *__this,Characters_BaseCharacter_o *victim,
               UnityEngine_Collider_o *collider,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  if (Il2CppMethodInitialized_184346b71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346b71 = '\x01';
  }
  pCVar1 = (__this->fields).Owner;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    (*(pCVar1->klass->vtable)._89_OnHit.methodPtr)(pCVar1,(System_Type_o *)__this,(MethodInfo *)victim);
    return;
  }
  ThrowNullReferenceException();
}


// Characters.ContinuousDamageHitbox$$OnHit
// il2cpp: void Characters_ContinuousDamageHitbox__OnHit (Characters_ContinuousDamageHitbox_o* __this, CustomLogic_CustomLogicCollisionHandler_o* handler, UnityEngine_Collider_o* collider, const MethodInfo* method);
// 0x182114ff0

void Characters_ContinuousDamageHitbox__OnHit_2114ff0
               (Characters_ContinuousDamageHitbox_o *__this,CustomLogic_CustomLogicCollisionHandler_o *handler
               ,UnityEngine_Collider_o *collider,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  if (Il2CppMethodInitialized_184346b72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346b72 = '\x01';
  }
  pCVar1 = (__this->fields).Owner;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    (*(pCVar1->klass->vtable)._89_OnHit.methodPtr)(pCVar1,(System_Type_o *)__this,(MethodInfo *)handler);
    return;
  }
  ThrowNullReferenceException();
}


// Characters.ContinuousDamageHitbox$$.ctor
// il2cpp: void Characters_ContinuousDamageHitbox___ctor (Characters_ContinuousDamageHitbox_o* __this, const MethodInfo* method);
// 0x1821162e0

void Characters_ContinuousDamageHitbox___ctor(Characters_ContinuousDamageHitbox_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_BaseCharacter__float__o *__this_00;
  System_Collections_Generic_Dictionary_BaseCharacter__Collider__o *__this_01;
  System_Collections_Generic_HashSet_BaseCharacter__o *pSVar1;
  System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *__this_02;
  System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__Collider__o *__this_03;
  System_Collections_Generic_HashSet_CustomLogicCollisionHandler__o *pSVar2;
  System_Collections_Generic_HashSet_GameObject__o *__this_04;
  System_Collections_Generic_HashSet_Collider__o *__this_05;
  
  if (Il2CppMethodInitialized_184346b73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_Collider_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_Collider_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_BaseCharacter_float);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_BaseCharacter_Collider);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_Collider);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_BaseCharacter);
    Il2CppMethodInitialized_184346b73 = '\x01';
  }
  (__this->fields).DamagePerSecond = 100;
  (__this->fields).DamageInterval = 0.1;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_BaseCharacter_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_float_ctor);
  (__this->fields)._characterDamageTimers = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._characterDamageTimers,__this_00);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_BaseCharacter_Collider)
  ;
  System_Collections_Generic_Dictionary_object__ProbeReferenceVolume_CellData_PerScenarioData____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_Collider_ctor);
  (__this->fields)._characterColliders = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._characterColliders,__this_01);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_BaseCharacter)
  ;
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pSVar1,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_ctor);
  (__this->fields)._charactersInside = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._charactersInside,pSVar1);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float_ctor);
  (__this->fields)._handlerDamageTimers = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._handlerDamageTimers,__this_02);
  __this_03 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_Collider);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_Collider_ctor);
  (__this->fields)._handlerColliders = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._handlerColliders,__this_03);
  pSVar2 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pSVar2,
             (MethodInfo_176CE80 *)
             MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_ctor);
  (__this->fields)._handlersInside = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._handlersInside,pSVar2);
  if (Il2CppMethodInitialized_184346b5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_GameObject_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Collider_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_Collider);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_BaseCharacter);
    Il2CppMethodInitialized_184346b5c = '\x01';
  }
  __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_GameObject)
  ;
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_04,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_GameObject_ctor);
  (__this->fields)._hitGameObjects = __this_04;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._hitGameObjects,__this_04);
  __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Collider);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_05,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_Collider_ctor);
  (__this->fields)._firstFrameColliders = __this_05;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._firstFrameColliders,__this_05);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_BaseCharacter)
  ;
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pSVar1,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_ctor);
  (__this->fields)._firstHitCharacters = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._firstHitCharacters,pSVar1);
  pSVar2 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pSVar2,
             (MethodInfo_176CE80 *)
             MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_ctor);
  (__this->fields)._firstHitHandlers = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._firstHitHandlers,pSVar2);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


