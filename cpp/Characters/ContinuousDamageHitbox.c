// Type: Characters.ContinuousDamageHitbox
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Characters/ContinuousDamageHitbox.cs
// Prior real C# source: none
// --------------------------------

// Characters.ContinuousDamageHitbox$$get_DestroysMap
// il2cpp: bool Characters_ContinuousDamageHitbox__get_DestroysMap (Characters_ContinuousDamageHitbox_o* __this, const MethodInfo* method);
// 0x5be2f90

bool Characters_ContinuousDamageHitbox__get_DestroysMap
               (Characters_ContinuousDamageHitbox_o *__this,MethodInfo *method)

{
  return false;
}


// Characters.ContinuousDamageHitbox$$CreateContinuous
// il2cpp: Characters_ContinuousDamageHitbox_o* Characters_ContinuousDamageHitbox__CreateContinuous (Characters_BaseCharacter_o* owner, UnityEngine_GameObject_o* obj, UnityEngine_Collider_o* collider, int32_t damagePerSecond, float damageInterval, const MethodInfo* method);
// 0x5be2fa0

Characters_ContinuousDamageHitbox_o *
Characters_ContinuousDamageHitbox__CreateContinuous
          (Characters_BaseCharacter_o *owner,UnityEngine_GameObject_o *obj,UnityEngine_Collider_o *collider,
          int32_t damagePerSecond,float damageInterval,MethodInfo *method)

{
  Characters_ContinuousDamageHitbox_o *pCVar1;
  
  if (Il2CppMethodInitialized_075475cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_ContinuousDamageHitbox);
    Il2CppMethodInitialized_075475cc = '\x01';
  }
  if (obj != (UnityEngine_GameObject_o *)0x0) {
    pCVar1 = UnityEngine_GameObject__AddComponent_object_
                       (obj,(MethodInfo_353B6A0 *)
                            MethodInfo_UnityEngine_GameObject_AddComponent_ContinuousDamageHitbox);
    if (pCVar1 != (Characters_ContinuousDamageHitbox_o *)0x0) {
      (pCVar1->fields).Owner = owner;
      Il2CppCodeGenWriteBarrier(&(pCVar1->fields).Owner);
      (pCVar1->fields)._collider = collider;
      Il2CppCodeGenWriteBarrier(&(pCVar1->fields)._collider);
      (pCVar1->fields).DamagePerSecond = damagePerSecond;
      (pCVar1->fields).DamageInterval = damageInterval;
      (*(pCVar1->klass->vtable)._6_Deactivate.methodPtr)(pCVar1,(pCVar1->klass->vtable)._6_Deactivate.method);
      return pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// Characters.ContinuousDamageHitbox$$Activate
// il2cpp: void Characters_ContinuousDamageHitbox__Activate (Characters_ContinuousDamageHitbox_o* __this, float delay, float length, const MethodInfo* method);
// 0x5be3050

void Characters_ContinuousDamageHitbox__Activate
               (Characters_ContinuousDamageHitbox_o *__this,float delay,float length,MethodInfo *method)

{
  Characters_ContinuousDamageHitbox__ClearOccupants(__this,method);
  Characters_BaseHitbox__Activate((Characters_BaseHitbox_o *)__this,delay,length,(MethodInfo *)0x0);
  return;
}


// Characters.ContinuousDamageHitbox$$Deactivate
// il2cpp: void Characters_ContinuousDamageHitbox__Deactivate (Characters_ContinuousDamageHitbox_o* __this, const MethodInfo* method);
// 0x5be31a0

void Characters_ContinuousDamageHitbox__Deactivate
               (Characters_ContinuousDamageHitbox_o *__this,MethodInfo *method)

{
  Characters_ContinuousDamageHitbox__ClearOccupants(__this,method);
  Characters_BaseHitbox__Deactivate((Characters_BaseHitbox_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.ContinuousDamageHitbox$$ClearOccupants
// il2cpp: void Characters_ContinuousDamageHitbox__ClearOccupants (Characters_ContinuousDamageHitbox_o* __this, const MethodInfo* method);
// 0x5be3090

void Characters_ContinuousDamageHitbox__ClearOccupants
               (Characters_ContinuousDamageHitbox_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_BaseCharacter__float__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *__this_01;
  
  if (Il2CppMethodInitialized_075475cd == '\0') {
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
    Il2CppMethodInitialized_075475cd = '\x01';
  }
  __this_00 = (__this->fields)._characterDamageTimers;
  if (__this_00 != (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0) {
    System_Collections_Generic_Dictionary_object__float___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_4AB5620 *)
               MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_float_Clear);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._characterColliders;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Clear
                (pSVar1,(MethodInfo_4AAD690 *)
                        MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_Collider_Clear);
      pSVar2 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._charactersInside;
      if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Clear
                  (pSVar2,(MethodInfo_4FB36D0 *)
                          MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Clear);
        __this_01 = (__this->fields)._handlerDamageTimers;
        if (__this_01 != (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)0x0) {
          System_Collections_Generic_Dictionary_object__float___Clear
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                     (MethodInfo_4AB5620 *)
                     MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float_Clear)
          ;
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._handlerColliders;
          if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary_object__object___Clear
                      (pSVar1,(MethodInfo_4AAD690 *)
                              MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_Collider_Clear
                      );
            pSVar2 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._handlersInside;
            if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
              System_Collections_Generic_HashSet_object___Clear
                        (pSVar2,(MethodInfo_4FB36D0 *)
                                MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Clear
                        );
              return;
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
// 0x5be31c0

void Characters_ContinuousDamageHitbox__OnTriggerEnter
               (Characters_ContinuousDamageHitbox_o *__this,UnityEngine_Collider_o *other,MethodInfo *method)

{
  Characters_BaseCharacter_o *a;
  System_Collections_Generic_HashSet_object__o *pSVar1;
  System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *__this_00;
  System_Collections_Generic_Dictionary_BaseCharacter__float__o *__this_01;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  Characters_BaseCharacter_o *b;
  Characters_BaseCharacter_o *x;
  MethodInfo *method_00;
  System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__Collider__o *__this_02;
  
  if (Il2CppMethodInitialized_075475ce == '\0') {
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
    Il2CppMethodInitialized_075475ce = '\x01';
  }
  if ((((other != (UnityEngine_Collider_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)other,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_Transform_o *)0x0)) &&
      (pUVar3 = UnityEngine_Transform__get_root(pUVar3,(MethodInfo *)0x0),
      pUVar3 != (UnityEngine_Transform_o *)0x0)) &&
     (pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
     pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
    b = UnityEngine_GameObject__GetComponent_object_
                  (pUVar4,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_BaseCharacter);
    pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05be34a4;
    x = (Characters_BaseCharacter_o *)
        UnityEngine_GameObject__GetComponent_object_
                  (pUVar4,(MethodInfo_353B730 *)
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
      bVar2 = GameManagers_TeamInfo__SameTeam_5858900(a,b,(MethodInfo *)0x0);
      if (!bVar2) {
        pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._charactersInside;
        if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05be34a4;
        bVar2 = System_Collections_Generic_HashSet_object___Contains
                          (pSVar1,(Il2CppObject *)b,
                           (MethodInfo_4FB3720 *)
                           MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Contains);
        if (bVar2) {
          return;
        }
        pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._charactersInside;
        if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05be34a4;
        System_Collections_Generic_HashSet_object___Add
                  (pSVar1,(Il2CppObject *)b,
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add);
        __this_01 = (__this->fields)._characterDamageTimers;
        if (__this_01 == (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0)
        goto label_05be34a4;
        System_Collections_Generic_Dictionary_object__float___set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,(Il2CppObject *)b,0.0,
                   (MethodInfo_4AB5450 *)
                   MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_float_set_Item);
        __this_02 = (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__Collider__o *)
                    (__this->fields)._characterColliders;
        if (__this_02 == (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__Collider__o *)0x0
           ) goto label_05be34a4;
        method_00 = MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_Collider_set_Item;
        goto label_05be348e;
      }
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._handlersInside;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet_object___Contains
                        (pSVar1,(Il2CppObject *)x,
                         (MethodInfo_4FB3720 *)
                         MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Contains);
      if (bVar2) {
        return;
      }
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._handlersInside;
      if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Add
                  (pSVar1,(Il2CppObject *)x,
                   (MethodInfo_4FB4450 *)
                   MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Add);
        __this_00 = (__this->fields)._handlerDamageTimers;
        if (__this_00 != (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)0x0) {
          System_Collections_Generic_Dictionary_object__float___set_Item
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)x,0.0,
                     (MethodInfo_4AB5450 *)
                     MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float_set_Item
                    );
          __this_02 = (__this->fields)._handlerColliders;
          if (__this_02 !=
              (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__Collider__o *)0x0) {
            method_00 = 
            MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_Collider_set_Item;
            b = x;
label_05be348e:
            System_Collections_Generic_Dictionary_object__object___set_Item
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,(Il2CppObject *)b,
                       (Il2CppObject *)other,(MethodInfo_4AAD4C0 *)method_00);
            return;
          }
        }
      }
    }
  }
label_05be34a4:
  ThrowNullReferenceException();
}


// Characters.ContinuousDamageHitbox$$OnTriggerStay
// il2cpp: void Characters_ContinuousDamageHitbox__OnTriggerStay (Characters_ContinuousDamageHitbox_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x5be34b0

void Characters_ContinuousDamageHitbox__OnTriggerStay
               (Characters_ContinuousDamageHitbox_o *__this,UnityEngine_Collider_o *other,MethodInfo *method)

{
  Characters_BaseCharacter_o *a;
  System_Collections_Generic_HashSet_object__o *pSVar1;
  System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *__this_00;
  System_Collections_Generic_Dictionary_BaseCharacter__float__o *__this_01;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  Characters_BaseCharacter_o *b;
  Characters_BaseCharacter_o *x;
  MethodInfo *method_00;
  System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__Collider__o *__this_02;
  
  if (Il2CppMethodInitialized_075475cf == '\0') {
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
    Il2CppMethodInitialized_075475cf = '\x01';
  }
  if ((((other != (UnityEngine_Collider_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)other,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_Transform_o *)0x0)) &&
      (pUVar3 = UnityEngine_Transform__get_root(pUVar3,(MethodInfo *)0x0),
      pUVar3 != (UnityEngine_Transform_o *)0x0)) &&
     (pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
     pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
    b = UnityEngine_GameObject__GetComponent_object_
                  (pUVar4,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_BaseCharacter);
    pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05be3794;
    x = (Characters_BaseCharacter_o *)
        UnityEngine_GameObject__GetComponent_object_
                  (pUVar4,(MethodInfo_353B730 *)
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
      bVar2 = GameManagers_TeamInfo__SameTeam_5858900(a,b,(MethodInfo *)0x0);
      if (!bVar2) {
        pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._charactersInside;
        if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05be3794;
        bVar2 = System_Collections_Generic_HashSet_object___Contains
                          (pSVar1,(Il2CppObject *)b,
                           (MethodInfo_4FB3720 *)
                           MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Contains);
        if (bVar2) {
          return;
        }
        pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._charactersInside;
        if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05be3794;
        System_Collections_Generic_HashSet_object___Add
                  (pSVar1,(Il2CppObject *)b,
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add);
        __this_01 = (__this->fields)._characterDamageTimers;
        if (__this_01 == (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0)
        goto label_05be3794;
        System_Collections_Generic_Dictionary_object__float___set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,(Il2CppObject *)b,0.0,
                   (MethodInfo_4AB5450 *)
                   MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_float_set_Item);
        __this_02 = (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__Collider__o *)
                    (__this->fields)._characterColliders;
        if (__this_02 == (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__Collider__o *)0x0
           ) goto label_05be3794;
        method_00 = MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_Collider_set_Item;
        goto label_05be377e;
      }
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._handlersInside;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet_object___Contains
                        (pSVar1,(Il2CppObject *)x,
                         (MethodInfo_4FB3720 *)
                         MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Contains);
      if (bVar2) {
        return;
      }
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._handlersInside;
      if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Add
                  (pSVar1,(Il2CppObject *)x,
                   (MethodInfo_4FB4450 *)
                   MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Add);
        __this_00 = (__this->fields)._handlerDamageTimers;
        if (__this_00 != (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)0x0) {
          System_Collections_Generic_Dictionary_object__float___set_Item
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)x,0.0,
                     (MethodInfo_4AB5450 *)
                     MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float_set_Item
                    );
          __this_02 = (__this->fields)._handlerColliders;
          if (__this_02 !=
              (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__Collider__o *)0x0) {
            method_00 = 
            MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_Collider_set_Item;
            b = x;
label_05be377e:
            System_Collections_Generic_Dictionary_object__object___set_Item
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,(Il2CppObject *)b,
                       (Il2CppObject *)other,(MethodInfo_4AAD4C0 *)method_00);
            return;
          }
        }
      }
    }
  }
label_05be3794:
  ThrowNullReferenceException();
}


// Characters.ContinuousDamageHitbox$$OnTriggerExit
// il2cpp: void Characters_ContinuousDamageHitbox__OnTriggerExit (Characters_ContinuousDamageHitbox_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x5be37a0

void Characters_ContinuousDamageHitbox__OnTriggerExit
               (Characters_ContinuousDamageHitbox_o *__this,UnityEngine_Collider_o *other,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  System_Collections_Generic_Dictionary_BaseCharacter__float__o *__this_00;
  System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *__this_01;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  Characters_BaseCharacter_o *x;
  Characters_BaseCharacter_o *x_00;
  MethodInfo *method_00;
  System_Collections_Generic_Dictionary_BaseCharacter__Collider__o *__this_02;
  
  if (Il2CppMethodInitialized_075475d0 == '\0') {
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
    Il2CppMethodInitialized_075475d0 = '\x01';
  }
  if ((((other != (UnityEngine_Collider_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)other,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_Transform_o *)0x0)) &&
      (pUVar3 = UnityEngine_Transform__get_root(pUVar3,(MethodInfo *)0x0),
      pUVar3 != (UnityEngine_Transform_o *)0x0)) &&
     (pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
     pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
    x = UnityEngine_GameObject__GetComponent_object_
                  (pUVar4,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_BaseCharacter);
    pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05be3a33;
    x_00 = (Characters_BaseCharacter_o *)
           UnityEngine_GameObject__GetComponent_object_
                     (pUVar4,(MethodInfo_353B730 *)
                             MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicCollisionHandler);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._charactersInside;
      if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05be3a33;
      bVar2 = System_Collections_Generic_HashSet_object___Contains
                        (pSVar1,(Il2CppObject *)x,
                         (MethodInfo_4FB3720 *)
                         MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Contains);
      if (bVar2) {
        pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._charactersInside;
        if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05be3a33;
        System_Collections_Generic_HashSet_object___Remove
                  (pSVar1,(Il2CppObject *)x,
                   (MethodInfo_4FB39F0 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Remove);
        __this_00 = (__this->fields)._characterDamageTimers;
        if (__this_00 == (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0)
        goto label_05be3a33;
        System_Collections_Generic_Dictionary_object__float___Remove
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)x,
                   (MethodInfo_4AB6C10 *)
                   MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_float_Remove);
        __this_02 = (__this->fields)._characterColliders;
        if (__this_02 == (System_Collections_Generic_Dictionary_BaseCharacter__Collider__o *)0x0)
        goto label_05be3a33;
        method_00 = MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_Collider_Remove;
        x_00 = x;
        goto label_05be3a17;
      }
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._handlersInside;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet_object___Contains
                        (pSVar1,(Il2CppObject *)x_00,
                         (MethodInfo_4FB3720 *)
                         MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Contains);
      if (!bVar2) {
        return;
      }
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._handlersInside;
      if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Remove
                  (pSVar1,(Il2CppObject *)x_00,
                   (MethodInfo_4FB39F0 *)
                   MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Remove);
        __this_01 = (__this->fields)._handlerDamageTimers;
        if (__this_01 != (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)0x0) {
          System_Collections_Generic_Dictionary_object__float___Remove
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,(Il2CppObject *)x_00,
                     (MethodInfo_4AB6C10 *)
                     MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float_Remove
                    );
          __this_02 = (System_Collections_Generic_Dictionary_BaseCharacter__Collider__o *)
                      (__this->fields)._handlerColliders;
          if (__this_02 != (System_Collections_Generic_Dictionary_BaseCharacter__Collider__o *)0x0) {
            method_00 = 
            MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_Collider_Remove;
label_05be3a17:
            System_Collections_Generic_Dictionary_object__object___Remove
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
                       (Il2CppObject *)x_00,(MethodInfo_4AAED10 *)method_00);
            return;
          }
        }
      }
    }
  }
label_05be3a33:
  ThrowNullReferenceException();
}


// Characters.ContinuousDamageHitbox$$Update
// il2cpp: void Characters_ContinuousDamageHitbox__Update (Characters_ContinuousDamageHitbox_o* __this, const MethodInfo* method);
// 0x5be3a40
// eh: try 0x5be3d1f..0x5be43cd -> pad 0x5be4463 (+52 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5be44b2..0x5be44b7 -> pad 0x5be44d9 cleanup
// eh: try 0x5be44dc..0x5be44e4 -> pad 0x5be45d8 catch (...) [compiler noexcept guard]
// eh: try 0x5be4500..0x5be4505 -> pad 0x5be4527 cleanup
// eh: try 0x5be452a..0x5be4532 -> pad 0x5be45d8 catch (...) [compiler noexcept guard]
// eh: try 0x5be454e..0x5be4553 -> pad 0x5be4572 cleanup
// eh: try 0x5be4575..0x5be457d -> pad 0x5be45d8 catch (...) [compiler noexcept guard]
// eh: try 0x5be4598..0x5be459d -> pad 0x5be45c5 cleanup
// eh: try 0x5be45c8..0x5be45d0 -> pad 0x5be45d8 catch (...) [compiler noexcept guard]
// asm: 127 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5be43cd: jmp 0x5be4581
// asm:   0x5be43d2: jmp 0x5be4581
// asm:   0x5be43d7: jmp 0x5be4581
// asm:   0x5be43dc: jmp 0x5be4581
// asm:   0x5be43e1: jmp 0x5be4581
// asm:   0x5be43e6: jmp 0x5be4581
// asm:   0x5be43eb: jmp 0x5be44e9
// asm:   0x5be43f0: jmp 0x5be4581
// asm:   0x5be43f5: jmp 0x5be4581
// asm:   0x5be43fa: jmp 0x5be4581
// asm:   0x5be43ff: jmp 0x5be4581
// asm:   0x5be4404: jmp 0x5be44e9
// asm:   0x5be4409: jmp 0x5be44e9
// asm:   0x5be440e: jmp 0x5be44e9
// asm:   0x5be4413: jmp 0x5be44e9
// asm:   0x5be4418: jmp 0x5be44e9
// asm:   0x5be441d: jmp 0x5be4581
// asm:   0x5be4422: jmp 0x5be4581
// asm:   0x5be4427: jmp 0x5be4581
// asm:   0x5be442c: jmp 0x5be44e9
// asm:   0x5be4431: jmp 0x5be44e9
// asm:   0x5be4436: jmp 0x5be44e9
// asm:   0x5be443b: jmp 0x5be44e9
// asm:   0x5be4440: jmp 0x5be44e9
// asm:   0x5be4445: jmp 0x5be4581
// asm:   0x5be444a: jmp 0x5be44e9
// asm:   0x5be444f: jmp 0x5be44e9
// asm:   0x5be4454: jmp 0x5be44e9
// asm:   0x5be4459: jmp 0x5be44e9
// asm:   0x5be445e: jmp 0x5be4581
// asm:   0x5be4463: jmp 0x5be4581
// asm:   0x5be4468: jmp 0x5be44e9
// asm:   0x5be446a: jmp 0x5be44e9
// asm:   0x5be446c: jmp 0x5be449b
// asm:   0x5be446e: jmp 0x5be449b
// asm:   0x5be4470: jmp 0x5be449b
// asm:   0x5be4472: jmp 0x5be449b
// asm:   0x5be4474: jmp 0x5be449b
// asm:   0x5be4476: jmp 0x5be449b
// asm:   0x5be4478: jmp 0x5be4537
// asm:   0x5be447d: jmp 0x5be4537
// asm:   0x5be4482: jmp 0x5be4537
// asm:   0x5be4487: jmp 0x5be4537
// asm:   0x5be448c: jmp 0x5be4537
// asm:   0x5be4491: jmp 0x5be4537
// asm:   0x5be4496: jmp 0x5be4581
// asm:   0x5be449b: mov r14, rax
// asm:   0x5be449e: cmp edx, 1
// asm:   0x5be44a1: jne 0x5be44dc
// asm:   0x5be44a3: mov rdi, r14
// asm:   0x5be44a6: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5be44ab: mov rbx, qword ptr [rax]
// asm:   0x5be44ae: mov qword ptr [rsp], rbx
// asm:   0x5be44b2: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5be44b7: lea rax, [rip + 0x16a955a]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicCollisionHandler_Dispose
// asm:   0x5be44be: mov rsi, qword ptr [rax]
// asm:   0x5be44c1: lea rdi, [rsp + 0x20]
// asm:   0x5be44c6: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5be44cb: test rbx, rbx
// asm:   0x5be44ce: je 0x5be434d
// asm:   0x5be44d4: jmp 0x5be45bd
// asm:   0x5be44d9: mov r14, rax
// asm:   0x5be44dc: mov rdi, rsp
// asm:   0x5be44df: call 0x2fd8b90  ; il2cpp_runtime_helper_02fd8b90()
// asm:   0x5be44e4: jmp 0x5be45d0
// asm:   0x5be44e9: mov r14, rax
// asm:   0x5be44ec: cmp edx, 1
// asm:   0x5be44ef: jne 0x5be452a
// asm:   0x5be44f1: mov rdi, r14
// asm:   0x5be44f4: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5be44f9: mov rbx, qword ptr [rax]
// asm:   0x5be44fc: mov qword ptr [rsp], rbx
// asm:   0x5be4500: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5be4505: lea rax, [rip + 0x16a94f4]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_CustomLogicCollisionHandler_Dispose
// asm:   0x5be450c: mov rsi, qword ptr [rax]
// asm:   0x5be450f: lea rdi, [rsp + 0x40]
// asm:   0x5be4514: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5be4519: test rbx, rbx
// asm:   0x5be451c: je 0x5be426e
// asm:   0x5be4522: jmp 0x5be45bd
// asm:   0x5be4527: mov r14, rax
// asm:   0x5be452a: mov rdi, rsp
// asm:   0x5be452d: call 0x2fd8b60  ; il2cpp_runtime_helper_02fd8b60()
// asm:   0x5be4532: jmp 0x5be45d0
// asm:   0x5be4537: mov r14, rax
// asm:   0x5be453a: cmp edx, 1
// asm:   0x5be453d: jne 0x5be4575
// asm:   0x5be453f: mov rdi, r14
// asm:   0x5be4542: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5be4547: mov rbx, qword ptr [rax]
// asm:   0x5be454a: mov qword ptr [rsp], rbx
// asm:   0x5be454e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5be4553: lea rax, [rip + 0x16a918e]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseCharacter_Dispose
// asm:   0x5be455a: mov rsi, qword ptr [rax]
// asm:   0x5be455d: lea rdi, [rsp + 0x60]
// asm:   0x5be4562: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5be4567: test rbx, rbx
// asm:   0x5be456a: je 0x5be3fef
// asm:   0x5be4570: jmp 0x5be45bd
// asm:   0x5be4572: mov r14, rax
// asm:   0x5be4575: mov rdi, rsp
// asm:   0x5be4578: call 0x2fd8b30  ; il2cpp_runtime_helper_02fd8b30()
// asm:   0x5be457d: jmp 0x5be45d0
// asm:   0x5be457f: jmp 0x5be4581
// asm:   0x5be4581: mov r14, rax
// asm:   0x5be4584: cmp edx, 1
// asm:   0x5be4587: jne 0x5be45c8
// asm:   0x5be4589: mov rdi, r14
// asm:   0x5be458c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5be4591: mov rbx, qword ptr [rax]
// asm:   0x5be4594: mov qword ptr [rsp], rbx
// asm:   0x5be4598: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5be459d: lea rax, [rip + 0x16a912c]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_Dispose
// asm:   0x5be45a4: mov rsi, qword ptr [rax]
// asm:   0x5be45a7: lea rdi, [rsp + 0x80]
// asm:   0x5be45af: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5be45b4: test rbx, rbx
// asm:   0x5be45b7: je 0x5be3f0c
// asm:   0x5be45bd: mov rdi, rbx
// asm:   0x5be45c0: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5be45c5: mov r14, rax
// asm:   0x5be45c8: mov rdi, rsp
// asm:   0x5be45cb: call 0x2fd8b00  ; il2cpp_runtime_helper_02fd8b00()
// asm:   0x5be45d0: mov rdi, r14
// asm:   0x5be45d3: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5be45d8: mov rdi, rax
// asm:   0x5be45db: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_ContinuousDamageHitbox__Update(Characters_ContinuousDamageHitbox_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  uint uVar3;
  System_Collections_Generic_List_BaseCharacter__o *pSVar4;
  System_Collections_Generic_HashSet_object__o *pSVar5;
  Characters_BaseCharacter_array *pCVar6;
  System_Collections_Generic_Dictionary_BaseCharacter__float__o *pSVar7;
  System_Collections_Generic_Dictionary_object__object__o *pSVar8;
  System_Collections_Generic_List_CustomLogicCollisionHandler__o *pSVar9;
  CustomLogic_CustomLogicCollisionHandler_array *pCVar10;
  System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *pSVar11;
  MethodInfo *pMVar12;
  Characters_BaseCharacter_o *pCVar13;
  bool bVar14;
  UnityEngine_Collider_o *pUVar15;
  float fVar16;
  undefined1 auStack_c8 [16];
  Characters_BaseCharacter_o *pCStack_b8;
  float fStack_ac;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  Characters_BaseCharacter_o *pCStack_98;
  undefined1 auStack_88 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_80;
  Characters_BaseCharacter_o *pCStack_78;
  undefined1 auStack_68 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_60;
  Characters_BaseCharacter_o *pCStack_58;
  undefined1 auStack_48 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_40;
  Characters_BaseCharacter_o *pCStack_38;
  
  if (Il2CppMethodInitialized_075475d1 == '\0') {
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
              (&MethodInfo_System_Collections_Generic_List_BaseCharacter_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicCollisionHandler_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicCollisionHandler_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseCharacter_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075475d1 = '\x01';
  }
  auStack_48 = (undefined1  [8])0x0;
  pSStack_40 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  pCStack_38 = (Characters_BaseCharacter_o *)0x0;
  auStack_68 = (undefined1  [8])0x0;
  pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  pCStack_58 = (Characters_BaseCharacter_o *)0x0;
  auStack_88 = (undefined1  [8])0x0;
  pSStack_80 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  pCStack_78 = (Characters_BaseCharacter_o *)0x0;
  auStack_a8 = (undefined1  [8])0x0;
  uStack_a0._0_4_ = 0;
  uStack_a0._4_4_ = 0;
  pCStack_98 = (Characters_BaseCharacter_o *)0x0;
  bVar14 = Characters_BaseHitbox__IsActive((Characters_BaseHitbox_o *)__this,(MethodInfo *)0x0);
  if (!bVar14) {
    return;
  }
  pSVar4 = (__this->fields)._charactersToRemove;
  if (pSVar4 != (System_Collections_Generic_List_BaseCharacter__o *)0x0) {
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    iVar2 = (pSVar4->fields)._size;
    (pSVar4->fields)._size = 0;
    if (0 < iVar2) {
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar2,(MethodInfo *)0x0);
    }
    pSVar5 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._charactersInside;
    if (pSVar5 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_c8,pSVar5,
                 (MethodInfo_4FB3DA0 *)
                 MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_GetEnumerator);
      pCStack_38 = pCStack_b8;
      auStack_48 = (undefined1  [8])auStack_c8._0_8_;
      pSStack_40 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_c8._8_8_;
      auStack_c8._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      auStack_c8._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)auStack_48;
label_05be3d27:
      bVar14 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                         ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_48,
                          (MethodInfo_4C456D0 *)
                          MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_MoveNext);
      pCVar13 = pCStack_38;
      if (bVar14) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar14 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)pCVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        pMVar12 = MethodInfo_System_Collections_Generic_List_BaseCharacter_Add;
        if (!bVar14) {
          if (pCVar13 == (Characters_BaseCharacter_o *)0x0) {
            ThrowNullReferenceException();
          }
          if ((pCVar13->fields).Dead == false) {
            pSVar7 = (__this->fields)._characterDamageTimers;
            if (pSVar7 == (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar14 = System_Collections_Generic_Dictionary_object__float___ContainsKey
                               ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7,
                                (Il2CppObject *)pCVar13,
                                (MethodInfo_4AB5680 *)
                                MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_float_ContainsKey
                               );
            if (bVar14) {
              pSVar7 = (__this->fields)._characterDamageTimers;
              if (pSVar7 == (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0) {
                ThrowNullReferenceException();
              }
              fStack_ac = System_Collections_Generic_Dictionary_object__float___get_Item
                                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7,
                                     (Il2CppObject *)pCVar13,
                                     (MethodInfo_4AB53E0 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_float_get_Item
                                    );
              fVar16 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
              System_Collections_Generic_Dictionary_object__float___set_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7,
                         (Il2CppObject *)pCVar13,fStack_ac + fVar16,
                         (MethodInfo_4AB5450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_float_set_Item);
              pSVar7 = (__this->fields)._characterDamageTimers;
              if (pSVar7 == (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0) {
                ThrowNullReferenceException();
              }
              fVar16 = System_Collections_Generic_Dictionary_object__float___get_Item
                                 ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7,
                                  (Il2CppObject *)pCVar13,
                                  (MethodInfo_4AB53E0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_float_get_Item
                                 );
              if ((__this->fields).DamageInterval <= fVar16) {
                pSVar8 = (System_Collections_Generic_Dictionary_object__object__o *)
                         (__this->fields)._characterColliders;
                if (pSVar8 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar14 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                   (pSVar8,(Il2CppObject *)pCVar13,
                                    (MethodInfo_4AAD6F0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_Collider_ContainsKey
                                   );
                if (bVar14) {
                  pSVar8 = (System_Collections_Generic_Dictionary_object__object__o *)
                           (__this->fields)._characterColliders;
                  if (pSVar8 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pUVar15 = System_Collections_Generic_Dictionary_object__object___get_Item
                                      (pSVar8,(Il2CppObject *)pCVar13,
                                       (MethodInfo_4AAD450 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_Collider_get_Item
                                      );
                  (*(__this->klass->vtable)._10_OnHit.methodPtr)
                            (__this,pCVar13,pUVar15,(__this->klass->vtable)._10_OnHit.method);
                }
                pSVar7 = (__this->fields)._characterDamageTimers;
                if (pSVar7 == (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0) {
                  ThrowNullReferenceException();
                }
                System_Collections_Generic_Dictionary_object__float___set_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7,
                           (Il2CppObject *)pCVar13,0.0,
                           (MethodInfo_4AB5450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_float_set_Item);
              }
            }
            goto label_05be3d27;
          }
        }
        pSVar4 = (__this->fields)._charactersToRemove;
        if (pSVar4 == (System_Collections_Generic_List_BaseCharacter__o *)0x0) {
label_05be435f:
          ThrowNullReferenceException();
        }
        piVar1 = &(pSVar4->fields)._version;
        *piVar1 = *piVar1 + 1;
        pCVar6 = (pSVar4->fields)._items;
        if (pCVar6 == (Characters_BaseCharacter_array *)0x0) goto label_05be435f;
        uVar3 = (pSVar4->fields)._size;
        if (uVar3 < (uint)pCVar6->max_length) {
          (pSVar4->fields)._size = uVar3 + 1;
          pCVar6->m_Items[(int)uVar3] = pCVar13;
          Il2CppCodeGenWriteBarrier(pCVar6->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pCVar13,
                     (MethodInfo_395D230 *)pMVar12->klass->rgctx_data[0xe].method);
        }
        goto label_05be3d27;
      }
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_48,
                 (MethodInfo_4C456C0 *)
                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_Dispose);
      pSVar4 = (__this->fields)._charactersToRemove;
      if (pSVar4 != (System_Collections_Generic_List_BaseCharacter__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)auStack_c8,
                   (System_Collections_Generic_List_object__o *)pSVar4,
                   (MethodInfo_395E050 *)
                   MethodInfo_System_Collections_Generic_List_BaseCharacter_GetEnumerator);
        pCStack_58 = pCStack_b8;
        auStack_68 = (undefined1  [8])auStack_c8._0_8_;
        pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_c8._8_8_;
        auStack_c8._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
        auStack_c8._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)auStack_68;
        while (bVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                  ((System_Collections_Generic_List_Enumerator_object__o *)auStack_68,
                                   (MethodInfo_4C45C50 *)
                                   MethodInfo_System_Collections_Generic_List_Enumerator_BaseCharacter_MoveNext
                                  ), pCVar13 = pCStack_58, bVar14) {
          pSVar5 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._charactersInside;
          if (pSVar5 == (System_Collections_Generic_HashSet_object__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_HashSet_object___Remove
                    (pSVar5,(Il2CppObject *)pCStack_58,
                     (MethodInfo_4FB39F0 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Remove)
          ;
          pSVar7 = (__this->fields)._characterDamageTimers;
          if (pSVar7 == (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_Dictionary_object__float___Remove
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7,(Il2CppObject *)pCVar13,
                     (MethodInfo_4AB6C10 *)
                     MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_float_Remove);
          pSVar8 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._characterColliders;
          if (pSVar8 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_Dictionary_object__object___Remove
                    (pSVar8,(Il2CppObject *)pCVar13,
                     (MethodInfo_4AAED10 *)
                     MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_Collider_Remove);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o *)auStack_68,
                   (MethodInfo_4C45C40 *)
                   MethodInfo_System_Collections_Generic_List_Enumerator_BaseCharacter_Dispose);
        pSVar9 = (__this->fields)._handlersToRemove;
        if (pSVar9 != (System_Collections_Generic_List_CustomLogicCollisionHandler__o *)0x0) {
          piVar1 = &(pSVar9->fields)._version;
          *piVar1 = *piVar1 + 1;
          iVar2 = (pSVar9->fields)._size;
          (pSVar9->fields)._size = 0;
          if (0 < iVar2) {
            System_Array__Clear((System_Array_o *)(pSVar9->fields)._items,0,iVar2,(MethodInfo *)0x0);
          }
          pSVar5 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._handlersInside;
          if (pSVar5 != (System_Collections_Generic_HashSet_object__o *)0x0) {
            System_Collections_Generic_HashSet_object___GetEnumerator
                      ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_c8,pSVar5,
                       (MethodInfo_4FB3DA0 *)
                       MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_GetEnumerator
                      );
            pCStack_78 = pCStack_b8;
            auStack_88 = (undefined1  [8])auStack_c8._0_8_;
            pSStack_80 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_c8._8_8_;
            auStack_c8._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
            auStack_c8._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)auStack_88;
            while (bVar14 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                      ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_88,
                                       (MethodInfo_4C456D0 *)
                                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_CustomLogicCollisionHandler_MoveNext
                                      ), pCVar13 = pCStack_78, bVar14) {
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar14 = UnityEngine_Object__op_Equality
                                 ((UnityEngine_Object_o *)pCVar13,(UnityEngine_Object_o *)0x0,
                                  (MethodInfo *)0x0);
              pMVar12 = MethodInfo_System_Collections_Generic_List_CustomLogicCollisionHandler_Add;
              if (bVar14) {
                pSVar9 = (__this->fields)._handlersToRemove;
                if (pSVar9 == (System_Collections_Generic_List_CustomLogicCollisionHandler__o *)0x0) {
label_05be4382:
                  ThrowNullReferenceException();
                }
                piVar1 = &(pSVar9->fields)._version;
                *piVar1 = *piVar1 + 1;
                pCVar10 = (pSVar9->fields)._items;
                if (pCVar10 == (CustomLogic_CustomLogicCollisionHandler_array *)0x0) goto label_05be4382;
                uVar3 = (pSVar9->fields)._size;
                if (uVar3 < (uint)pCVar10->max_length) {
                  (pSVar9->fields)._size = uVar3 + 1;
                  pCVar10->m_Items[(int)uVar3] = (CustomLogic_CustomLogicCollisionHandler_o *)pCVar13;
                  Il2CppCodeGenWriteBarrier(pCVar10->m_Items + (int)uVar3);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)pCVar13,
                             (MethodInfo_395D230 *)pMVar12->klass->rgctx_data[0xe].method);
                }
              }
              else {
                pSVar11 = (__this->fields)._handlerDamageTimers;
                if (pSVar11 ==
                    (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar14 = System_Collections_Generic_Dictionary_object__float___ContainsKey
                                   ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,
                                    (Il2CppObject *)pCVar13,
                                    (MethodInfo_4AB5680 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float_ContainsKey
                                   );
                if (bVar14) {
                  pSVar11 = (__this->fields)._handlerDamageTimers;
                  if (pSVar11 ==
                      (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  fStack_ac = System_Collections_Generic_Dictionary_object__float___get_Item
                                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,
                                         (Il2CppObject *)pCVar13,
                                         (MethodInfo_4AB53E0 *)
                                         MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float_get_Item
                                        );
                  fVar16 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                  System_Collections_Generic_Dictionary_object__float___set_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,
                             (Il2CppObject *)pCVar13,fStack_ac + fVar16,
                             (MethodInfo_4AB5450 *)
                             MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float_set_Item
                            );
                  pSVar11 = (__this->fields)._handlerDamageTimers;
                  if (pSVar11 ==
                      (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  fVar16 = System_Collections_Generic_Dictionary_object__float___get_Item
                                     ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,
                                      (Il2CppObject *)pCVar13,
                                      (MethodInfo_4AB53E0 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float_get_Item
                                     );
                  if ((__this->fields).DamageInterval <= fVar16) {
                    pSVar8 = (System_Collections_Generic_Dictionary_object__object__o *)
                             (__this->fields)._handlerColliders;
                    if (pSVar8 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    bVar14 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                       (pSVar8,(Il2CppObject *)pCVar13,
                                        (MethodInfo_4AAD6F0 *)
                                        MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_Collider_ContainsKey
                                       );
                    if (bVar14) {
                      pSVar8 = (System_Collections_Generic_Dictionary_object__object__o *)
                               (__this->fields)._handlerColliders;
                      if (pSVar8 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pUVar15 = System_Collections_Generic_Dictionary_object__object___get_Item
                                          (pSVar8,(Il2CppObject *)pCVar13,
                                           (MethodInfo_4AAD450 *)
                                           MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_Collider_get_Item
                                          );
                      (*(__this->klass->vtable)._11_OnHit.methodPtr)
                                (__this,(CustomLogic_CustomLogicCollisionHandler_o *)pCVar13,pUVar15,
                                 (__this->klass->vtable)._11_OnHit.method);
                    }
                    pSVar11 = (__this->fields)._handlerDamageTimers;
                    if (pSVar11 ==
                        (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    System_Collections_Generic_Dictionary_object__float___set_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,
                               (Il2CppObject *)pCVar13,0.0,
                               (MethodInfo_4AB5450 *)
                               MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float_set_Item
                              );
                  }
                }
              }
            }
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_88,
                       (MethodInfo_4C456C0 *)
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_CustomLogicCollisionHandler_Dispose
                      );
            pSVar9 = (__this->fields)._handlersToRemove;
            if (pSVar9 != (System_Collections_Generic_List_CustomLogicCollisionHandler__o *)0x0) {
              System_Collections_Generic_List_object___GetEnumerator
                        ((System_Collections_Generic_List_Enumerator_T__o *)auStack_c8,
                         (System_Collections_Generic_List_object__o *)pSVar9,
                         (MethodInfo_395E050 *)
                         MethodInfo_System_Collections_Generic_List_CustomLogicCollisionHandler_GetEnumerator)
              ;
              pCStack_98 = pCStack_b8;
              auStack_a8 = (undefined1  [8])auStack_c8._0_8_;
              uStack_a0 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_c8._8_8_;
              auStack_c8._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
              auStack_c8._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)auStack_a8;
              while( true ) {
                bVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                   ((System_Collections_Generic_List_Enumerator_object__o *)auStack_a8,
                                    (MethodInfo_4C45C50 *)
                                    MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicCollisionHandler_MoveNext
                                   );
                pCVar13 = pCStack_98;
                if (!bVar14) {
                  System_Collections_Generic_List_Enumerator_object___Dispose
                            ((System_Collections_Generic_List_Enumerator_object__o *)auStack_a8,
                             (MethodInfo_4C45C40 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicCollisionHandler_Dispose
                            );
                  return;
                }
                pSVar5 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._handlersInside;
                if (pSVar5 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                System_Collections_Generic_HashSet_object___Remove
                          (pSVar5,(Il2CppObject *)pCStack_98,
                           (MethodInfo_4FB39F0 *)
                           MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_Remove);
                pSVar11 = (__this->fields)._handlerDamageTimers;
                if (pSVar11 ==
                    (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)0x0) {
                  ThrowNullReferenceException();
                }
                System_Collections_Generic_Dictionary_object__float___Remove
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,
                           (Il2CppObject *)pCVar13,
                           (MethodInfo_4AB6C10 *)
                           MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float_Remove
                          );
                pSVar8 = (System_Collections_Generic_Dictionary_object__object__o *)
                         (__this->fields)._handlerColliders;
                if (pSVar8 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
                System_Collections_Generic_Dictionary_object__object___Remove
                          (pSVar8,(Il2CppObject *)pCVar13,
                           (MethodInfo_4AAED10 *)
                           MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_Collider_Remove
                          );
              }
              ThrowNullReferenceException();
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.ContinuousDamageHitbox$$OnHit
// il2cpp: void Characters_ContinuousDamageHitbox__OnHit (Characters_ContinuousDamageHitbox_o* __this, Characters_BaseCharacter_o* victim, UnityEngine_Collider_o* collider, const MethodInfo* method);
// 0x5be45e0

void Characters_ContinuousDamageHitbox__OnHit
               (Characters_ContinuousDamageHitbox_o *__this,Characters_BaseCharacter_o *victim,
               UnityEngine_Collider_o *collider,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  if (Il2CppMethodInitialized_075475d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075475d2 = '\x01';
  }
  pCVar1 = (__this->fields).Owner;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pCVar1->klass->vtable)._89_OnHit.methodPtr)
            (pCVar1,(Characters_BaseHitbox_o *)__this,(Il2CppObject *)victim,collider,"",
             true,(pCVar1->klass->vtable)._89_OnHit.method);
  return;
}


// Characters.ContinuousDamageHitbox$$OnHit
// il2cpp: void Characters_ContinuousDamageHitbox__OnHit (Characters_ContinuousDamageHitbox_o* __this, CustomLogic_CustomLogicCollisionHandler_o* handler, UnityEngine_Collider_o* collider, const MethodInfo* method);
// 0x5be4660

void Characters_ContinuousDamageHitbox__OnHit_5ae4660
               (Characters_ContinuousDamageHitbox_o *__this,CustomLogic_CustomLogicCollisionHandler_o *handler
               ,UnityEngine_Collider_o *collider,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  if (Il2CppMethodInitialized_075475d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075475d3 = '\x01';
  }
  pCVar1 = (__this->fields).Owner;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pCVar1->klass->vtable)._89_OnHit.methodPtr)
            (pCVar1,(Characters_BaseHitbox_o *)__this,(Il2CppObject *)handler,collider,"",
             true,(pCVar1->klass->vtable)._89_OnHit.method);
  return;
}


// Characters.ContinuousDamageHitbox$$.ctor
// il2cpp: void Characters_ContinuousDamageHitbox___ctor (Characters_ContinuousDamageHitbox_o* __this, const MethodInfo* method);
// 0x5be46e0

void Characters_ContinuousDamageHitbox___ctor(Characters_ContinuousDamageHitbox_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_BaseCharacter__float__o *__this_00;
  System_Collections_Generic_Dictionary_BaseCharacter__Collider__o *__this_01;
  System_Collections_Generic_HashSet_BaseCharacter__o *__this_02;
  System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *__this_03;
  System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__Collider__o *__this_04;
  System_Collections_Generic_HashSet_CustomLogicCollisionHandler__o *__this_05;
  System_Collections_Generic_List_BaseCharacter__o *__this_06;
  System_Collections_Generic_List_CustomLogicCollisionHandler__o *__this_07;
  
  if (Il2CppMethodInitialized_075475d4 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BaseCharacter_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicCollisionHandler_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_CustomLogicCollisionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_BaseCharacter);
    Il2CppMethodInitialized_075475d4 = '\x01';
  }
  (__this->fields).DamagePerSecond = 100;
  (__this->fields).DamageInterval = 0.1;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_BaseCharacter_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_4AB4860 *)MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_float_ctor);
  (__this->fields)._characterDamageTimers = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._characterDamageTimers);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_BaseCharacter_Collider)
  ;
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_BaseCharacter_Collider_ctor);
  (__this->fields)._characterColliders = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._characterColliders);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_BaseCharacter);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_02,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_ctor);
  (__this->fields)._charactersInside = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._charactersInside);
  __this_03 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,
             (MethodInfo_4AB4860 *)
             MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_float_ctor);
  (__this->fields)._handlerDamageTimers = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._handlerDamageTimers);
  __this_04 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_Collider);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_04,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_CustomLogicCollisionHandler_Collider_ctor);
  (__this->fields)._handlerColliders = __this_04;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._handlerColliders);
  __this_05 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_05,
             (MethodInfo_4FB2EA0 *)
             MethodInfo_System_Collections_Generic_HashSet_CustomLogicCollisionHandler_ctor);
  (__this->fields)._handlersInside = __this_05;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._handlersInside);
  __this_06 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BaseCharacter)
  ;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_06,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_BaseCharacter_ctor);
  (__this->fields)._charactersToRemove = __this_06;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._charactersToRemove);
  __this_07 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_CustomLogicCollisionHandler);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_07,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_CustomLogicCollisionHandler_ctor
            );
  (__this->fields)._handlersToRemove = __this_07;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._handlersToRemove);
  Characters_BaseHitbox___ctor((Characters_BaseHitbox_o *)__this,(MethodInfo *)0x0);
  return;
}


