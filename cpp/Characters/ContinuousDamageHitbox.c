// Type: Characters.ContinuousDamageHitbox
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/ContinuousDamageHitbox.cs
// Prior source: NEW in this update
// --------------------------------

// Characters.ContinuousDamageHitbox$$CreateContinuous
// il2cpp: Characters_ContinuousDamageHitbox_o* Characters_ContinuousDamageHitbox__CreateContinuous (Characters_BaseCharacter_o* owner, UnityEngine_GameObject_o* obj, UnityEngine_Collider_o* collider, int32_t damagePerSecond, float damageInterval, const MethodInfo* method);
// 0x3f9df60

Characters_ContinuousDamageHitbox_o *
Characters_ContinuousDamageHitbox__CreateContinuous
          (Characters_BaseCharacter_o *owner,UnityEngine_GameObject_o *obj,
          UnityEngine_Collider_o *collider,int32_t damagePerSecond,float damageInterval,
          MethodInfo *method)

{
  Characters_ContinuousDamageHitbox_o *__this;
  
  if (DAT_05704018 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ContinuousDamageHitbox_AddComponent_ContinuousDa);
    DAT_05704018 = '\x01';
  }
  if (obj != (UnityEngine_GameObject_o *)0x0) {
    __this = (Characters_ContinuousDamageHitbox_o *)
             UnityEngine_GameObject__AddComponent<object>(obj,MethodInfo_ContinuousDamageHitbox_AddComponent_ContinuousDa);
    if (__this != (Characters_ContinuousDamageHitbox_o *)0x0) {
      (__this->fields).Owner = owner;
      il2cpp_runtime_glue(&(__this->fields).Owner,owner);
      (__this->fields)._collider = collider;
      il2cpp_runtime_glue(&(__this->fields)._collider);
      (__this->fields).DamagePerSecond = damagePerSecond;
      (__this->fields).DamageInterval = damageInterval;
      Characters_ContinuousDamageHitbox__Deactivate(__this,(MethodInfo *)collider);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.ContinuousDamageHitbox$$Activate
// il2cpp: void Characters_ContinuousDamageHitbox__Activate (Characters_ContinuousDamageHitbox_o* __this, float delay, float length, const MethodInfo* method);
// 0x3f9e120

void Characters_ContinuousDamageHitbox__Activate
               (Characters_ContinuousDamageHitbox_o *__this,float delay,float length,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_BaseCharacter__float__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *__this_01;
  MethodInfo *method_00;
  
  if (DAT_05704019 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    DAT_05704019 = '\x01';
  }
  __this_00 = (__this->fields)._characterDamageTimers;
  if (__this_00 != (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0) {
    System_Collections_Generic_Dictionary<object__float>__Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,MethodInfo_Void_Clear);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this->fields)._characterColliders;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__Clear(pSVar1,MethodInfo_Void_Clear);
      pSVar2 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._charactersInside;
      if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet<object>__Clear(pSVar2,MethodInfo_Void_Clear);
        __this_01 = (__this->fields)._handlerDamageTimers;
        if (__this_01 !=
            (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)0x0) {
          System_Collections_Generic_Dictionary<object__float>__Clear
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,MethodInfo_Void_Clear
                    );
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._handlerColliders;
          if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary<object__object>__Clear(pSVar1,MethodInfo_Void_Clear);
            pSVar2 = (System_Collections_Generic_HashSet_object__o *)
                     (__this->fields)._handlersInside;
            if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
              method_00 = MethodInfo_Void_Clear;
              System_Collections_Generic_HashSet<object>__Clear
                        (pSVar2,(MethodInfo_335C410 *)MethodInfo_Void_Clear);
              Characters_BaseHitbox__Activate
                        ((Characters_BaseHitbox_o *)__this,delay,length,method_00);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.ContinuousDamageHitbox$$Deactivate
// il2cpp: void Characters_ContinuousDamageHitbox__Deactivate (Characters_ContinuousDamageHitbox_o* __this, const MethodInfo* method);
// 0x3f9e010

void Characters_ContinuousDamageHitbox__Deactivate
               (Characters_ContinuousDamageHitbox_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_BaseCharacter__float__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *__this_01;
  MethodInfo *method_00;
  
  if (DAT_0570401a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    DAT_0570401a = '\x01';
  }
  __this_00 = (__this->fields)._characterDamageTimers;
  if (__this_00 != (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0) {
    System_Collections_Generic_Dictionary<object__float>__Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,MethodInfo_Void_Clear);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this->fields)._characterColliders;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__Clear(pSVar1,MethodInfo_Void_Clear);
      pSVar2 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._charactersInside;
      if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet<object>__Clear(pSVar2,MethodInfo_Void_Clear);
        __this_01 = (__this->fields)._handlerDamageTimers;
        if (__this_01 !=
            (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)0x0) {
          System_Collections_Generic_Dictionary<object__float>__Clear
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,MethodInfo_Void_Clear
                    );
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._handlerColliders;
          if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary<object__object>__Clear(pSVar1,MethodInfo_Void_Clear);
            pSVar2 = (System_Collections_Generic_HashSet_object__o *)
                     (__this->fields)._handlersInside;
            if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
              method_00 = MethodInfo_Void_Clear;
              System_Collections_Generic_HashSet<object>__Clear
                        (pSVar2,(MethodInfo_335C410 *)MethodInfo_Void_Clear);
              Characters_BaseHitbox__Deactivate((Characters_BaseHitbox_o *)__this,method_00);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.ContinuousDamageHitbox$$OnTriggerEnter
// il2cpp: void Characters_ContinuousDamageHitbox__OnTriggerEnter (Characters_ContinuousDamageHitbox_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x3f9e250

void Characters_ContinuousDamageHitbox__OnTriggerEnter
               (Characters_ContinuousDamageHitbox_o *__this,UnityEngine_Collider_o *other,
               MethodInfo *method)

{
  Characters_BaseCharacter_o *a;
  System_Collections_Generic_HashSet_object__o *pSVar1;
  System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *__this_00;
  System_Collections_Generic_Dictionary_BaseCharacter__float__o *__this_01;
  bool_conflict bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  Characters_BaseCharacter_o *b;
  Characters_BaseCharacter_o *x;
  MethodInfo_308C840 *method_00;
  System_Collections_Generic_Dictionary_BaseCharacter__Collider__o *__this_02;
  
  if (DAT_0570401b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomL);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    DAT_0570401b = '\x01';
  }
  if ((((other != (UnityEngine_Collider_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)other,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_Transform_o *)0x0)) &&
      (pUVar3 = UnityEngine_Transform__get_root(pUVar3,(MethodInfo *)0x0),
      pUVar3 != (UnityEngine_Transform_o *)0x0)) &&
     (pUVar4 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
     pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
    b = (Characters_BaseCharacter_o *)
        UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    pUVar4 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto LAB_03f9e52e;
    x = (Characters_BaseCharacter_o *)
        UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomL);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)b,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      a = (__this->fields).Owner;
      if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = GameManagers_TeamInfo__SameTeam(a,b,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._charactersInside;
        if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03f9e52e;
        bVar2 = System_Collections_Generic_HashSet<object>__Contains
                          (pSVar1,(Il2CppObject *)b,MethodInfo_Boolean_Contains);
        if ((char)bVar2 != '\0') {
          return;
        }
        pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._charactersInside;
        if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03f9e52e;
        System_Collections_Generic_HashSet<object>__Add(pSVar1,(Il2CppObject *)b,MethodInfo_Boolean_Add);
        __this_01 = (__this->fields)._characterDamageTimers;
        if (__this_01 == (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0)
        goto LAB_03f9e52e;
        System_Collections_Generic_Dictionary<object__float>__set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                   (Il2CppObject *)b,0.0,MethodInfo_Void_set_Item);
        __this_02 = (__this->fields)._characterColliders;
        method_00 = MethodInfo_Void_set_Item;
        x = b;
        if (__this_02 == (System_Collections_Generic_Dictionary_BaseCharacter__Collider__o *)0x0)
        goto LAB_03f9e52e;
        goto LAB_03f9e518;
      }
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._handlersInside;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet<object>__Contains
                        (pSVar1,(Il2CppObject *)x,MethodInfo_Boolean_Contains);
      if ((char)bVar2 != '\0') {
        return;
      }
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._handlersInside;
      if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet<object>__Add(pSVar1,(Il2CppObject *)x,MethodInfo_Boolean_Add);
        __this_00 = (__this->fields)._handlerDamageTimers;
        if (__this_00 !=
            (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)0x0) {
          System_Collections_Generic_Dictionary<object__float>__set_Item
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                     (Il2CppObject *)x,0.0,MethodInfo_Void_set_Item);
          __this_02 = (System_Collections_Generic_Dictionary_BaseCharacter__Collider__o *)
                      (__this->fields)._handlerColliders;
          method_00 = MethodInfo_Void_set_Item;
          if (__this_02 != (System_Collections_Generic_Dictionary_BaseCharacter__Collider__o *)0x0)
          {
LAB_03f9e518:
            System_Collections_Generic_Dictionary<object__object>__set_Item
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
                       (Il2CppObject *)x,(Il2CppObject *)other,method_00);
            return;
          }
        }
      }
    }
  }
LAB_03f9e52e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.ContinuousDamageHitbox$$OnTriggerStay
// il2cpp: void Characters_ContinuousDamageHitbox__OnTriggerStay (Characters_ContinuousDamageHitbox_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x3f9e540

void Characters_ContinuousDamageHitbox__OnTriggerStay
               (Characters_ContinuousDamageHitbox_o *__this,UnityEngine_Collider_o *other,
               MethodInfo *method)

{
  Characters_BaseCharacter_o *a;
  System_Collections_Generic_HashSet_object__o *pSVar1;
  System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *__this_00;
  System_Collections_Generic_Dictionary_BaseCharacter__float__o *__this_01;
  bool_conflict bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  Characters_BaseCharacter_o *b;
  Characters_BaseCharacter_o *x;
  MethodInfo_308C840 *method_00;
  System_Collections_Generic_Dictionary_BaseCharacter__Collider__o *__this_02;
  
  if (DAT_0570401c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomL);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    DAT_0570401c = '\x01';
  }
  if ((((other != (UnityEngine_Collider_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)other,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_Transform_o *)0x0)) &&
      (pUVar3 = UnityEngine_Transform__get_root(pUVar3,(MethodInfo *)0x0),
      pUVar3 != (UnityEngine_Transform_o *)0x0)) &&
     (pUVar4 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
     pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
    b = (Characters_BaseCharacter_o *)
        UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    pUVar4 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto LAB_03f9e81e;
    x = (Characters_BaseCharacter_o *)
        UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomL);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)b,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      a = (__this->fields).Owner;
      if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = GameManagers_TeamInfo__SameTeam(a,b,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._charactersInside;
        if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03f9e81e;
        bVar2 = System_Collections_Generic_HashSet<object>__Contains
                          (pSVar1,(Il2CppObject *)b,MethodInfo_Boolean_Contains);
        if ((char)bVar2 != '\0') {
          return;
        }
        pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._charactersInside;
        if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03f9e81e;
        System_Collections_Generic_HashSet<object>__Add(pSVar1,(Il2CppObject *)b,MethodInfo_Boolean_Add);
        __this_01 = (__this->fields)._characterDamageTimers;
        if (__this_01 == (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0)
        goto LAB_03f9e81e;
        System_Collections_Generic_Dictionary<object__float>__set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                   (Il2CppObject *)b,0.0,MethodInfo_Void_set_Item);
        __this_02 = (__this->fields)._characterColliders;
        method_00 = MethodInfo_Void_set_Item;
        x = b;
        if (__this_02 == (System_Collections_Generic_Dictionary_BaseCharacter__Collider__o *)0x0)
        goto LAB_03f9e81e;
        goto LAB_03f9e808;
      }
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._handlersInside;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet<object>__Contains
                        (pSVar1,(Il2CppObject *)x,MethodInfo_Boolean_Contains);
      if ((char)bVar2 != '\0') {
        return;
      }
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._handlersInside;
      if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet<object>__Add(pSVar1,(Il2CppObject *)x,MethodInfo_Boolean_Add);
        __this_00 = (__this->fields)._handlerDamageTimers;
        if (__this_00 !=
            (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)0x0) {
          System_Collections_Generic_Dictionary<object__float>__set_Item
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                     (Il2CppObject *)x,0.0,MethodInfo_Void_set_Item);
          __this_02 = (System_Collections_Generic_Dictionary_BaseCharacter__Collider__o *)
                      (__this->fields)._handlerColliders;
          method_00 = MethodInfo_Void_set_Item;
          if (__this_02 != (System_Collections_Generic_Dictionary_BaseCharacter__Collider__o *)0x0)
          {
LAB_03f9e808:
            System_Collections_Generic_Dictionary<object__object>__set_Item
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
                       (Il2CppObject *)x,(Il2CppObject *)other,method_00);
            return;
          }
        }
      }
    }
  }
LAB_03f9e81e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.ContinuousDamageHitbox$$OnTriggerExit
// il2cpp: void Characters_ContinuousDamageHitbox__OnTriggerExit (Characters_ContinuousDamageHitbox_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x3f9e830

void Characters_ContinuousDamageHitbox__OnTriggerExit
               (Characters_ContinuousDamageHitbox_o *__this,UnityEngine_Collider_o *other,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  System_Collections_Generic_Dictionary_BaseCharacter__float__o *__this_00;
  System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *__this_01;
  bool_conflict bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *x_00;
  MethodInfo_308E080 *method_00;
  System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__Collider__o *__this_02;
  
  if (DAT_0570401d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomL);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570401d = '\x01';
  }
  if ((((other != (UnityEngine_Collider_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)other,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_Transform_o *)0x0)) &&
      (pUVar3 = UnityEngine_Transform__get_root(pUVar3,(MethodInfo *)0x0),
      pUVar3 != (UnityEngine_Transform_o *)0x0)) &&
     (pUVar4 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
     pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
    x = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    pUVar4 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto LAB_03f9eabd;
    x_00 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomL)
    ;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._charactersInside;
      if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03f9eabd;
      bVar2 = System_Collections_Generic_HashSet<object>__Contains
                        (pSVar1,(Il2CppObject *)x,MethodInfo_Boolean_Contains);
      if ((char)bVar2 != '\0') {
        pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._charactersInside;
        if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03f9eabd;
        System_Collections_Generic_HashSet<object>__Remove(pSVar1,(Il2CppObject *)x,MethodInfo_Boolean_Remove);
        __this_00 = (__this->fields)._characterDamageTimers;
        if (__this_00 == (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0)
        goto LAB_03f9eabd;
        System_Collections_Generic_Dictionary<object__float>__Remove
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                   (Il2CppObject *)x,MethodInfo_Boolean_Remove);
        __this_02 = (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__Collider__o
                     *)(__this->fields)._characterColliders;
        method_00 = MethodInfo_Boolean_Remove;
        if (__this_02 ==
            (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__Collider__o *)0x0)
        goto LAB_03f9eabd;
        goto LAB_03f9eaa1;
      }
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._handlersInside;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet<object>__Contains
                        (pSVar1,(Il2CppObject *)x_00,MethodInfo_Boolean_Contains);
      if ((char)bVar2 == '\0') {
        return;
      }
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._handlersInside;
      if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet<object>__Remove(pSVar1,(Il2CppObject *)x_00,MethodInfo_Boolean_Remove)
        ;
        __this_01 = (__this->fields)._handlerDamageTimers;
        if (__this_01 !=
            (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)0x0) {
          System_Collections_Generic_Dictionary<object__float>__Remove
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                     (Il2CppObject *)x_00,MethodInfo_Boolean_Remove);
          __this_02 = (__this->fields)._handlerColliders;
          method_00 = MethodInfo_Boolean_Remove;
          x = x_00;
          if (__this_02 !=
              (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__Collider__o *)0x0)
          {
LAB_03f9eaa1:
            System_Collections_Generic_Dictionary<object__object>__Remove
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
                       (Il2CppObject *)x,method_00);
            return;
          }
        }
      }
    }
  }
LAB_03f9eabd:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.ContinuousDamageHitbox$$Update
// il2cpp: void Characters_ContinuousDamageHitbox__Update (Characters_ContinuousDamageHitbox_o* __this, const MethodInfo* method);
// 0x3f9ead0

void Characters_ContinuousDamageHitbox__Update
               (Characters_ContinuousDamageHitbox_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Collider_o *__this_00;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  System_Object_array *pSVar4;
  System_Collections_Generic_Dictionary_BaseCharacter__float__o *pSVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *pSVar7;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  long lVar8;
  UnityEngine_Object_o *pUVar9;
  bool_conflict bVar10;
  System_Collections_Generic_List_object__o *pSVar11;
  Il2CppObject *pIVar12;
  float fVar13;
  undefined8 in_stack_ffffffffffffff28;
  undefined4 in_stack_ffffffffffffff38;
  float in_stack_ffffffffffffff3c;
  _union_329995 _Stack_c0;
  undefined8 uStack_b8;
  UnityEngine_Object_o *pUStack_b0;
  _union_329995 _Stack_a8;
  undefined8 uStack_a0;
  UnityEngine_Object_o *pUStack_98;
  _union_329995 _Stack_88;
  undefined8 uStack_80;
  UnityEngine_Object_o *pUStack_78;
  _union_329995 _Stack_68;
  undefined8 uStack_60;
  UnityEngine_Object_o *pUStack_58;
  _union_329995 _Stack_48;
  undefined8 uStack_40;
  UnityEngine_Object_o *pUStack_38;
  
  if (DAT_0570401e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Collider_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Collider_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BaseCharacter_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_BaseCharacter_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicCollisionHandler_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicCollisionHandler_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_CustomLogic_CustomLogicC);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_BaseCharacter);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicColl);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Characters_BaseCharacter__G);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Characters_BaseCharacter);
    il2cpp_init_method_metadata(&MethodInfo_List_1_CustomLogic_CustomLogicCollisionHandler);
    il2cpp_init_method_metadata(&TypeInfo_List_CustomLogicCollisionHandler);
    il2cpp_init_method_metadata(&TypeInfo_List_BaseCharacter);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570401e = '\x01';
  }
  _Stack_48.genericMethod = (void *)0x0;
  uStack_40 = 0;
  pUStack_38 = (UnityEngine_Object_o *)0x0;
  _Stack_68.genericMethod = (void *)0x0;
  uStack_60 = 0;
  pUStack_58 = (UnityEngine_Object_o *)0x0;
  _Stack_88.genericMethod = (void *)0x0;
  uStack_80 = 0;
  pUStack_78 = (UnityEngine_Object_o *)0x0;
  _Stack_a8.genericMethod = (void *)0x0;
  uStack_a0 = 0;
  pUStack_98 = (UnityEngine_Object_o *)0x0;
  __this_00 = (__this->fields)._collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    bVar10 = UnityEngine_Collider__get_enabled(__this_00,(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      return;
    }
    pSVar11 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_BaseCharacter);
    System_Collections_Generic_List<object>___ctor(pSVar11,MethodInfo_List_1_Characters_BaseCharacter);
    pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._charactersInside;
    if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet<object>__GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)&_Stack_c0,pSVar3,
                 MethodInfo_HashSet_1_T__Enumerator_Characters_BaseCharacter);
      pUStack_38 = pUStack_b0;
      _Stack_48 = _Stack_c0;
      uStack_40 = uStack_b8;
LAB_03f9edca:
      __this_01.fields._8_8_ = __this;
      __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff28;
      __this_01.fields._current._0_4_ = in_stack_ffffffffffffff38;
      __this_01.fields._current._4_4_ = in_stack_ffffffffffffff3c;
      bVar10 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                         (__this_01,(MethodInfo_3185890 *)&_Stack_48);
      pUVar9 = pUStack_38;
      if ((char)bVar10 != '\0') {
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar10 = UnityEngine_Object__op_Equality
                           (pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        lVar8 = MethodInfo_Void_Add;
        if ((char)bVar10 == '\0') {
          if (pUVar9 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if (*(char *)&pUVar9[4].monitor == '\0') {
            pSVar5 = (__this->fields)._characterDamageTimers;
            if (pSVar5 == (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            bVar10 = System_Collections_Generic_Dictionary<object__float>__ContainsKey
                               ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,
                                (Il2CppObject *)pUVar9,MethodInfo_Boolean_ContainsKey);
            if ((char)bVar10 != '\0') {
              pSVar5 = (__this->fields)._characterDamageTimers;
              if (pSVar5 == (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              in_stack_ffffffffffffff3c =
                   System_Collections_Generic_Dictionary<object__float>__get_Item
                             ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,
                              (Il2CppObject *)pUVar9,MethodInfo_Single_get_Item);
              fVar13 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
              System_Collections_Generic_Dictionary<object__float>__set_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,
                         (Il2CppObject *)pUVar9,in_stack_ffffffffffffff3c + fVar13,MethodInfo_Void_set_Item);
              pSVar5 = (__this->fields)._characterDamageTimers;
              if (pSVar5 == (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              fVar13 = System_Collections_Generic_Dictionary<object__float>__get_Item
                                 ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,
                                  (Il2CppObject *)pUVar9,MethodInfo_Single_get_Item);
              if ((__this->fields).DamageInterval <= fVar13) {
                pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                         (__this->fields)._characterColliders;
                if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                bVar10 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                                   (pSVar6,(Il2CppObject *)pUVar9,MethodInfo_Boolean_ContainsKey);
                if ((char)bVar10 != '\0') {
                  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                           (__this->fields)._characterColliders;
                  if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pIVar12 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                      (pSVar6,(Il2CppObject *)pUVar9,MethodInfo_Collider_get_Item);
                  (*(__this->klass->vtable)._7_OnHit.methodPtr)
                            (__this,pUVar9,pIVar12,(__this->klass->vtable)._7_OnHit.method);
                }
                pSVar5 = (__this->fields)._characterDamageTimers;
                if (pSVar5 == (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0)
                {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                System_Collections_Generic_Dictionary<object__float>__set_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,
                           (Il2CppObject *)pUVar9,0.0,MethodInfo_Void_set_Item);
              }
            }
            goto LAB_03f9edca;
          }
        }
        if (pSVar11 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        piVar1 = &(pSVar11->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (pSVar11->fields)._items;
        if (pSVar4 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar2 = (pSVar11->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (pSVar11->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pUVar9;
          il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,pUVar9);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (pSVar11,(Il2CppObject *)pUVar9,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_03f9edca;
      }
      __this_02.fields._8_8_ = __this;
      __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff28;
      __this_02.fields._current._0_4_ = in_stack_ffffffffffffff38;
      __this_02.fields._current._4_4_ = in_stack_ffffffffffffff3c;
      System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                (__this_02,(MethodInfo_3185880 *)&_Stack_48);
      if (pSVar11 != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_c0,pSVar11,
                   MethodInfo_List_1_T__Enumerator_Characters_BaseCharacter__G);
        pUStack_58 = pUStack_b0;
        _Stack_68 = _Stack_c0;
        uStack_60 = uStack_b8;
        while (__this_03.fields._8_8_ = __this,
              __this_03.fields._list =
                   (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28,
              __this_03.fields._current._0_4_ = in_stack_ffffffffffffff38,
              __this_03.fields._current._4_4_ = in_stack_ffffffffffffff3c,
              bVar10 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (__this_03,(MethodInfo_3185E20 *)&_Stack_68), pUVar9 = pUStack_58,
              (char)bVar10 != '\0') {
          pSVar3 = (System_Collections_Generic_HashSet_object__o *)
                   (__this->fields)._charactersInside;
          if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          System_Collections_Generic_HashSet<object>__Remove
                    (pSVar3,(Il2CppObject *)pUStack_58,MethodInfo_Boolean_Remove);
          pSVar5 = (__this->fields)._characterDamageTimers;
          if (pSVar5 == (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          System_Collections_Generic_Dictionary<object__float>__Remove
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,
                     (Il2CppObject *)pUVar9,MethodInfo_Boolean_Remove);
          pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._characterColliders;
          if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          System_Collections_Generic_Dictionary<object__object>__Remove
                    (pSVar6,(Il2CppObject *)pUVar9,MethodInfo_Boolean_Remove);
        }
        __this_04.fields._8_8_ = __this;
        __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
        __this_04.fields._current._0_4_ = in_stack_ffffffffffffff38;
        __this_04.fields._current._4_4_ = in_stack_ffffffffffffff3c;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_04,(MethodInfo_3185E10 *)&_Stack_68);
        pSVar11 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_CustomLogicCollisionHandler);
        System_Collections_Generic_List<object>___ctor(pSVar11,MethodInfo_List_1_CustomLogic_CustomLogicCollisionHandler);
        pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._handlersInside;
        if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          System_Collections_Generic_HashSet<object>__GetEnumerator
                    ((System_Collections_Generic_HashSet_Enumerator_T__o *)&_Stack_c0,pSVar3,
                     MethodInfo_HashSet_1_T__Enumerator_CustomLogic_CustomLogicC);
          pUStack_78 = pUStack_b0;
          _Stack_88 = _Stack_c0;
          uStack_80 = uStack_b8;
          while (__this_05.fields._8_8_ = __this,
                __this_05.fields._set =
                     (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff28,
                __this_05.fields._current._0_4_ = in_stack_ffffffffffffff38,
                __this_05.fields._current._4_4_ = in_stack_ffffffffffffff3c,
                bVar10 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                                   (__this_05,(MethodInfo_3185890 *)&_Stack_88), pUVar9 = pUStack_78
                , (char)bVar10 != '\0') {
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar10 = UnityEngine_Object__op_Equality
                               (pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            lVar8 = MethodInfo_Void_Add;
            if ((char)bVar10 == '\0') {
              pSVar7 = (__this->fields)._handlerDamageTimers;
              if (pSVar7 == (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o
                             *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              bVar10 = System_Collections_Generic_Dictionary<object__float>__ContainsKey
                                 ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7,
                                  (Il2CppObject *)pUVar9,MethodInfo_Boolean_ContainsKey);
              if ((char)bVar10 != '\0') {
                pSVar7 = (__this->fields)._handlerDamageTimers;
                if (pSVar7 == (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o
                               *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                in_stack_ffffffffffffff3c =
                     System_Collections_Generic_Dictionary<object__float>__get_Item
                               ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7,
                                (Il2CppObject *)pUVar9,MethodInfo_Single_get_Item);
                fVar13 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                System_Collections_Generic_Dictionary<object__float>__set_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7,
                           (Il2CppObject *)pUVar9,in_stack_ffffffffffffff3c + fVar13,MethodInfo_Void_set_Item);
                pSVar7 = (__this->fields)._handlerDamageTimers;
                if (pSVar7 == (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o
                               *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                fVar13 = System_Collections_Generic_Dictionary<object__float>__get_Item
                                   ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7,
                                    (Il2CppObject *)pUVar9,MethodInfo_Single_get_Item);
                if ((__this->fields).DamageInterval <= fVar13) {
                  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                           (__this->fields)._handlerColliders;
                  if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  bVar10 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                                     (pSVar6,(Il2CppObject *)pUVar9,MethodInfo_Boolean_ContainsKey);
                  if ((char)bVar10 != '\0') {
                    pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                             (__this->fields)._handlerColliders;
                    if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    pIVar12 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                        (pSVar6,(Il2CppObject *)pUVar9,MethodInfo_Collider_get_Item);
                    (*(__this->klass->vtable)._8_OnHit.methodPtr)
                              (__this,pUVar9,pIVar12,(__this->klass->vtable)._8_OnHit.method);
                  }
                  pSVar7 = (__this->fields)._handlerDamageTimers;
                  if (pSVar7 == (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o
                                 *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  System_Collections_Generic_Dictionary<object__float>__set_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7,
                             (Il2CppObject *)pUVar9,0.0,MethodInfo_Void_set_Item);
                }
              }
            }
            else {
              if (pSVar11 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              piVar1 = &(pSVar11->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar4 = (pSVar11->fields)._items;
              if (pSVar4 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              uVar2 = (pSVar11->fields)._size;
              if (uVar2 < (uint)pSVar4->max_length) {
                (pSVar11->fields)._size = uVar2 + 1;
                pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pUVar9;
                il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,pUVar9);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          (pSVar11,(Il2CppObject *)pUVar9,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          __this_06.fields._8_8_ = __this;
          __this_06.fields._set =
               (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff28;
          __this_06.fields._current._0_4_ = in_stack_ffffffffffffff38;
          __this_06.fields._current._4_4_ = in_stack_ffffffffffffff3c;
          System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                    (__this_06,(MethodInfo_3185880 *)&_Stack_88);
          if (pSVar11 != (System_Collections_Generic_List_object__o *)0x0) {
            System_Collections_Generic_List<object>__GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_c0,pSVar11,
                       MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicColl);
            pUStack_98 = pUStack_b0;
            _Stack_a8 = _Stack_c0;
            uStack_a0 = uStack_b8;
            while( true ) {
              __this_07.fields._8_8_ = __this;
              __this_07.fields._list =
                   (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
              __this_07.fields._current._0_4_ = in_stack_ffffffffffffff38;
              __this_07.fields._current._4_4_ = in_stack_ffffffffffffff3c;
              bVar10 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (__this_07,(MethodInfo_3185E20 *)&_Stack_a8);
              pUVar9 = pUStack_98;
              if ((char)bVar10 == '\0') {
                __this_08.fields._8_8_ = __this;
                __this_08.fields._list =
                     (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
                __this_08.fields._current._0_4_ = in_stack_ffffffffffffff38;
                __this_08.fields._current._4_4_ = in_stack_ffffffffffffff3c;
                System_Collections_Generic_List_Enumerator<object>__Dispose
                          (__this_08,(MethodInfo_3185E10 *)&_Stack_a8);
                return;
              }
              pSVar3 = (System_Collections_Generic_HashSet_object__o *)
                       (__this->fields)._handlersInside;
              if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              System_Collections_Generic_HashSet<object>__Remove
                        (pSVar3,(Il2CppObject *)pUStack_98,MethodInfo_Boolean_Remove);
              pSVar7 = (__this->fields)._handlerDamageTimers;
              if (pSVar7 == (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o
                             *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              System_Collections_Generic_Dictionary<object__float>__Remove
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7,
                         (Il2CppObject *)pUVar9,MethodInfo_Boolean_Remove);
              pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields)._handlerColliders;
              if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
              System_Collections_Generic_Dictionary<object__object>__Remove
                        (pSVar6,(Il2CppObject *)pUVar9,MethodInfo_Boolean_Remove);
            }
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.ContinuousDamageHitbox$$OnHit
// il2cpp: void Characters_ContinuousDamageHitbox__OnHit (Characters_ContinuousDamageHitbox_o* __this, Characters_BaseCharacter_o* victim, UnityEngine_Collider_o* collider, const MethodInfo* method);
// 0x3f9f990

void Characters_ContinuousDamageHitbox__OnHit
               (Characters_ContinuousDamageHitbox_o *__this,Characters_BaseCharacter_o *victim,
               UnityEngine_Collider_o *collider,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  if (DAT_0570401f == '\0') {
    il2cpp_init_method_metadata(&"");
    DAT_0570401f = '\x01';
  }
  pCVar1 = (__this->fields).Owner;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    (*(pCVar1->klass->vtable)._79_OnHit.methodPtr)
              (pCVar1,__this,victim,collider,"",1,(pCVar1->klass->vtable)._79_OnHit.method
              );
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.ContinuousDamageHitbox$$OnHit
// il2cpp: void Characters_ContinuousDamageHitbox__OnHit (Characters_ContinuousDamageHitbox_o* __this, CustomLogic_CustomLogicCollisionHandler_o* handler, UnityEngine_Collider_o* collider, const MethodInfo* method);
// 0x3f9fa10

void Characters_ContinuousDamageHitbox__OnHit
               (Characters_ContinuousDamageHitbox_o *__this,
               CustomLogic_CustomLogicCollisionHandler_o *handler,UnityEngine_Collider_o *collider,
               MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  if (DAT_05704020 == '\0') {
    il2cpp_init_method_metadata(&"");
    DAT_05704020 = '\x01';
  }
  pCVar1 = (__this->fields).Owner;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    (*(pCVar1->klass->vtable)._79_OnHit.methodPtr)
              (pCVar1,__this,handler,collider,"",1,
               (pCVar1->klass->vtable)._79_OnHit.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.ContinuousDamageHitbox$$.ctor
// il2cpp: void Characters_ContinuousDamageHitbox___ctor (Characters_ContinuousDamageHitbox_o* __this, const MethodInfo* method);
// 0x3f9fa90

void Characters_ContinuousDamageHitbox___ctor
               (Characters_ContinuousDamageHitbox_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_BaseCharacter__float__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_HashSet_object__o *__this_01;
  System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *__this_02;
  MethodInfo *method_00;
  
  if (DAT_05704021 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_Characters_BaseCharacter_UnityEngin);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_CustomLogic_CustomLogicCollisionHan);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_CustomLogic_CustomLogicCollisionHan);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_Characters_BaseCharacter_System_Sin);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_CustomLogicCollisionHandler__float);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_BaseCharacter__float);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_BaseCharacter__Collider);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_CustomLogicCollisionHandler__Collider);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_CustomLogic_CustomLogicCollisionHandle);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Characters_BaseCharacter);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_CustomLogicCollisionHandler);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_BaseCharacter);
    DAT_05704021 = '\x01';
  }
  (__this->fields).DamagePerSecond = 100;
  (__this->fields).DamageInterval = 0.1;
  __this_00 = (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_BaseCharacter__float);
  System_Collections_Generic_Dictionary<object__float>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,MethodInfo_Dictionary_2_Characters_BaseCharacter_System_Sin);
  (__this->fields)._characterDamageTimers = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._characterDamageTimers,__this_00);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_BaseCharacter__Collider);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar1,MethodInfo_Dictionary_2_Characters_BaseCharacter_UnityEngin);
  (__this->fields)._characterColliders =
       (System_Collections_Generic_Dictionary_BaseCharacter__Collider__o *)pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._characterColliders,pSVar1);
  __this_01 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_BaseCharacter);
  System_Collections_Generic_HashSet<object>___ctor(__this_01,MethodInfo_HashSet_1_Characters_BaseCharacter);
  (__this->fields)._charactersInside =
       (System_Collections_Generic_HashSet_BaseCharacter__o *)__this_01;
  il2cpp_runtime_glue(&(__this->fields)._charactersInside,__this_01);
  __this_02 = (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_CustomLogicCollisionHandler__float);
  System_Collections_Generic_Dictionary<object__float>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,MethodInfo_Dictionary_2_CustomLogic_CustomLogicCollisionHan);
  (__this->fields)._handlerDamageTimers = __this_02;
  il2cpp_runtime_glue(&(__this->fields)._handlerDamageTimers,__this_02);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_CustomLogicCollisionHandler__Collider);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar1,MethodInfo_Dictionary_2_CustomLogic_CustomLogicCollisionHan);
  (__this->fields)._handlerColliders =
       (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__Collider__o *)pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._handlerColliders,pSVar1);
  method_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_HashSet_CustomLogicCollisionHandler);
  System_Collections_Generic_HashSet<object>___ctor
            ((System_Collections_Generic_HashSet_object__o *)method_00,MethodInfo_HashSet_1_CustomLogic_CustomLogicCollisionHandle);
  (__this->fields)._handlersInside =
       (System_Collections_Generic_HashSet_CustomLogicCollisionHandler__o *)method_00;
  il2cpp_runtime_glue(&(__this->fields)._handlersInside);
  Characters_BaseHitbox___ctor((Characters_BaseHitbox_o *)__this,method_00);
  return;
}


