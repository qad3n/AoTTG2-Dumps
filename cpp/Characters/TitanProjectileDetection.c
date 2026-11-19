// Type: Characters.TitanProjectileDetection
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/TitanProjectileDetection.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/TitanProjectileDetection.cs
// --------------------------------

// Characters.TitanProjectileDetection.<>c$$.cctor
// il2cpp: void Characters_TitanProjectileDetection___c___cctor (const MethodInfo* method);
// 0x5c5fa80

void Characters_TitanProjectileDetection___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07547891 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanProjectileDetection_c);
    Il2CppMethodInitialized_07547891 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanProjectileDetection_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Characters_TitanProjectileDetection_c->static_fields->__9 =
       (Characters_TitanProjectileDetection___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanProjectileDetection_c->static_fields->__9);
  return;
}


// Characters.TitanProjectileDetection.<>c$$.ctor
// il2cpp: void Characters_TitanProjectileDetection___c___ctor (Characters_TitanProjectileDetection___c_o* __this, const MethodInfo* method);
// 0x5c5faf0

void Characters_TitanProjectileDetection___c___ctor
               (Characters_TitanProjectileDetection___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.TitanProjectileDetection.<>c$$<FixedUpdate>b__8_0
// il2cpp: bool Characters_TitanProjectileDetection___c___FixedUpdate_b__8_0 (Characters_TitanProjectileDetection___c_o* __this, Characters_Hook_o* hook, const MethodInfo* method);
// 0x5c5fb00

bool Characters_TitanProjectileDetection___c___FixedUpdate_b__8_0
               (Characters_TitanProjectileDetection___c_o *__this,Characters_Hook_o *hook,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547892 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547892 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)hook,(MethodInfo *)0x0);
  bVar2 = true;
  if (bVar1) {
    if (hook == (Characters_Hook_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar2 = (hook->fields).State - 3U < 0xfffffffe;
  }
  return bVar2;
}


// Characters.TitanProjectileDetection$$Create
// il2cpp: Characters_TitanProjectileDetection_o* Characters_TitanProjectileDetection__Create (Characters_BaseTitan_o* owner, const MethodInfo* method);
// 0x5c5f380

Characters_TitanProjectileDetection_o *
Characters_TitanProjectileDetection__Create(Characters_BaseTitan_o *owner,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseTitanComponentCache_o *pCVar2;
  UnityEngine_Component_o *__this;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *p;
  Characters_TitanProjectileDetection_o *pCVar4;
  UnityEngine_SphereCollider_o *__this_01;
  float value;
  UnityEngine_Vector3_o value_00;
  
  if (Il2CppMethodInitialized_0754788b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_CapsuleCollider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_SphereCollider)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_TitanProjectileDetection);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    Il2CppMethodInitialized_0754788b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_691aa10(__this_00,(MethodInfo *)0x0);
  if (((owner != (Characters_BaseTitan_o *)0x0) &&
      (pCVar2 = (owner->fields).BaseTitanCache, pCVar2 != (Characters_BaseTitanComponentCache_o *)0x0)) &&
     (__this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this = (UnityEngine_Component_o *)(pCVar2->fields).Movebox;
    pUVar3 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Component_o *)0x0) {
      p = UnityEngine_Component__get_transform(__this,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(pUVar3,p,(MethodInfo *)0x0);
        pUVar3 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_0753e4b6 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e4b6 = '\x01';
        }
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_localPosition
                    (pUVar3,(UnityEngine_Vector3_o)
                            (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,(MethodInfo *)0x0
                    );
          pCVar4 = UnityEngine_GameObject__AddComponent_object_
                             (__this_00,
                              (MethodInfo_353B6A0 *)
                              MethodInfo_UnityEngine_GameObject_AddComponent_TitanProjectileDetection);
          if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
          }
          UnityEngine_GameObject__set_layer
                    (__this_00,TypeInfo_Utility_PhysicsLayer->static_fields->ProjectileDetection,
                     (MethodInfo *)0x0);
          bVar1 = (TypeInfo_UnityEngine_CapsuleCollider->_2).typeHierarchyDepth;
          if ((bVar1 <= (__this->klass->_2).typeHierarchyDepth) &&
             ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
              (Il2CppClass *)TypeInfo_UnityEngine_CapsuleCollider)) {
            __this_01 = UnityEngine_GameObject__AddComponent_object_
                                  (__this_00,
                                   (MethodInfo_353B6A0 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_SphereCollider);
            value_00 = UnityEngine_CapsuleCollider__get_center
                                 ((UnityEngine_CapsuleCollider_o *)__this,(MethodInfo *)0x0);
            if (__this_01 == (UnityEngine_SphereCollider_o *)0x0) goto label_05c5f58b;
            UnityEngine_SphereCollider__set_center(__this_01,value_00,(MethodInfo *)0x0);
            value = UnityEngine_CapsuleCollider__get_height
                              ((UnityEngine_CapsuleCollider_o *)__this,(MethodInfo *)0x0);
            UnityEngine_SphereCollider__set_radius(__this_01,value,(MethodInfo *)0x0);
            UnityEngine_Collider__set_isTrigger((UnityEngine_Collider_o *)__this_01,true,(MethodInfo *)0x0);
          }
          if (pCVar4 != (Characters_TitanProjectileDetection_o *)0x0) {
            (pCVar4->fields).Owner = owner;
            Il2CppCodeGenWriteBarrier(&(pCVar4->fields).Owner);
            return pCVar4;
          }
        }
      }
    }
  }
label_05c5f58b:
  ThrowNullReferenceException();
}


// Characters.TitanProjectileDetection$$RegisterHook
// il2cpp: void Characters_TitanProjectileDetection__RegisterHook (Characters_TitanProjectileDetection_o* __this, Characters_Hook_o* hook, const MethodInfo* method);
// 0x5c5f590

void Characters_TitanProjectileDetection__RegisterHook
               (Characters_TitanProjectileDetection_o *__this,Characters_Hook_o *hook,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (Il2CppMethodInitialized_0754788c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Hook_Add);
    Il2CppMethodInitialized_0754788c = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._hooks;
  if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            (__this_00,(Il2CppObject *)hook,
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_Hook_Add);
  (__this->fields).Detect = true;
  return;
}


// Characters.TitanProjectileDetection$$OnTriggerEnter
// il2cpp: void Characters_TitanProjectileDetection__OnTriggerEnter (Characters_TitanProjectileDetection_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x5c5f5f0

void Characters_TitanProjectileDetection__OnTriggerEnter
               (Characters_TitanProjectileDetection_o *__this,UnityEngine_Collider_o *other,MethodInfo *method
               )

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *__this_01;
  Projectiles_BaseProjectile_o *__this_02;
  
  if (Il2CppMethodInitialized_0754788d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_BaseProjectile)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754788d = '\x01';
  }
  if (other != (UnityEngine_Collider_o *)0x0) {
    pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Transform__get_root(pUVar2,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0)
        ;
        if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
          __this_02 = UnityEngine_GameObject__GetComponent_object_
                                (__this_01,
                                 (MethodInfo_353B730 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_BaseProjectile);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar1) {
            if (__this_02 == (Projectiles_BaseProjectile_o *)0x0) goto label_05c5f6e6;
            bVar1 = Projectiles_BaseProjectile__IsMine(__this_02,(MethodInfo *)0x0);
            if (bVar1) {
              __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._entities;
              if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05c5f6e6;
              System_Collections_Generic_HashSet_object___Add
                        (__this_00,(Il2CppObject *)__this_01,
                         (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_GameObject_Add);
              (__this->fields).Detect = true;
            }
          }
          return;
        }
      }
    }
  }
label_05c5f6e6:
  ThrowNullReferenceException();
}


// Characters.TitanProjectileDetection$$OnTriggerExit
// il2cpp: void Characters_TitanProjectileDetection__OnTriggerExit (Characters_TitanProjectileDetection_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x5c5f6f0

void Characters_TitanProjectileDetection__OnTriggerExit
               (Characters_TitanProjectileDetection_o *__this,UnityEngine_Collider_o *other,MethodInfo *method
               )

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  System_Collections_Generic_HashSet_GameObject__o *pSVar2;
  System_Collections_Generic_HashSet_Hook__o *pSVar3;
  bool bVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *item;
  
  if (Il2CppMethodInitialized_0754788e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_GameObject_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_GameObject_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Hook_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_GameObject_get_Count);
    Il2CppMethodInitialized_0754788e = '\x01';
  }
  if (other != (UnityEngine_Collider_o *)0x0) {
    pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      pUVar5 = UnityEngine_Transform__get_root(pUVar5,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
        item = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
        pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._entities;
        if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          bVar4 = System_Collections_Generic_HashSet_object___Contains
                            (pSVar1,(Il2CppObject *)item,
                             (MethodInfo_4FB3720 *)
                             MethodInfo_System_Collections_Generic_HashSet_GameObject_Contains);
          if (bVar4) {
            pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._entities;
            if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05c5f7df;
            System_Collections_Generic_HashSet_object___Remove
                      (pSVar1,(Il2CppObject *)item,
                       (MethodInfo_4FB39F0 *)MethodInfo_System_Collections_Generic_HashSet_GameObject_Remove);
          }
          pSVar2 = (__this->fields)._entities;
          if (pSVar2 != (System_Collections_Generic_HashSet_GameObject__o *)0x0) {
            if ((pSVar2->fields)._count == 0) {
              pSVar3 = (__this->fields)._hooks;
              if (pSVar3 == (System_Collections_Generic_HashSet_Hook__o *)0x0) goto label_05c5f7df;
              if ((pSVar3->fields)._count == 0) {
                (__this->fields).Detect = false;
                return;
              }
            }
            return;
          }
        }
      }
    }
  }
label_05c5f7df:
  ThrowNullReferenceException();
}


// Characters.TitanProjectileDetection$$FixedUpdate
// il2cpp: void Characters_TitanProjectileDetection__FixedUpdate (Characters_TitanProjectileDetection_o* __this, const MethodInfo* method);
// 0x5c5f7f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c5f8fa: jmp 0x5c5f915

void Characters_TitanProjectileDetection__FixedUpdate
               (Characters_TitanProjectileDetection_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_GameObject__o **targetAddress;
  System_Collections_Generic_HashSet_object__o *__this_00;
  Il2CppObject *object;
  System_Collections_Generic_HashSet_Hook__o *pSVar1;
  System_Collections_Generic_HashSet_GameObject__o *pSVar2;
  Characters_TitanProjectileDetection___c_StaticFields *pCVar3;
  System_Predicate_T__o *match;
  
  if (Il2CppMethodInitialized_0754788f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Hook_RemoveWhere);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Hook_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_GameObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_Hook);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Characters_TitanProjectileDetection_c_FixedUpdate_b__8_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanProjectileDetection_c);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_RemoveNull_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_0754788f = '\x01';
  }
  pSVar2 = (__this->fields)._entities;
  if (pSVar2 != (System_Collections_Generic_HashSet_GameObject__o *)0x0) {
    targetAddress = &(__this->fields)._entities;
    if (0 < ((System_Collections_Generic_HashSet_T__Fields *)&pSVar2->fields)->_count) {
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      pSVar2 = (System_Collections_Generic_HashSet_GameObject__o *)
               Utility_Util__RemoveNull_object_
                         ((System_Collections_Generic_HashSet_T__o *)pSVar2,
                          (MethodInfo_377E5E0 *)MethodInfo_Utility_Util_RemoveNull_GameObject);
      *targetAddress = pSVar2;
      Il2CppCodeGenWriteBarrier(targetAddress);
    }
    __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._hooks;
    if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      if (0 < (__this_00->fields)._count) {
        if ((TypeInfo_Characters_TitanProjectileDetection_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanProjectileDetection_c);
          pCVar3 = TypeInfo_Characters_TitanProjectileDetection_c->static_fields;
          match = (System_Predicate_T__o *)pCVar3->__9__8_0;
        }
        else {
          pCVar3 = TypeInfo_Characters_TitanProjectileDetection_c->static_fields;
          match = (System_Predicate_T__o *)pCVar3->__9__8_0;
        }
        if (match == (System_Predicate_T__o *)0x0) {
          if ((((Il2CppClass *)TypeInfo_Characters_TitanProjectileDetection_c)->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanProjectileDetection_c);
            pCVar3 = TypeInfo_Characters_TitanProjectileDetection_c->static_fields;
          }
          object = (Il2CppObject *)pCVar3->__9;
          match = (System_Predicate_T__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_Hook);
          System_Predicate_object____ctor
                    ((System_Predicate_object__o *)match,object,
                     (intptr_t)MethodInfo_Characters_TitanProjectileDetection_c_FixedUpdate_b__8_0,
                     (MethodInfo_3DC95B0 *)0x0);
          pCVar3 = TypeInfo_Characters_TitanProjectileDetection_c->static_fields;
          pCVar3->__9__8_0 = (System_Predicate_Hook__o *)match;
          Il2CppCodeGenWriteBarrier(&pCVar3->__9__8_0);
        }
        System_Collections_Generic_HashSet_object___RemoveWhere
                  (__this_00,match,
                   (MethodInfo_4FB6160 *)MethodInfo_System_Collections_Generic_HashSet_Hook_RemoveWhere);
      }
      if (*targetAddress != (System_Collections_Generic_HashSet_GameObject__o *)0x0) {
        if (((*targetAddress)->fields)._count == 0) {
          pSVar1 = (__this->fields)._hooks;
          if (pSVar1 == (System_Collections_Generic_HashSet_Hook__o *)0x0) goto label_05c5f9bb;
          if ((pSVar1->fields)._count == 0) {
            (__this->fields).Detect = false;
          }
        }
        return;
      }
    }
  }
label_05c5f9bb:
  ThrowNullReferenceException();
}


// Characters.TitanProjectileDetection$$.ctor
// il2cpp: void Characters_TitanProjectileDetection___ctor (Characters_TitanProjectileDetection_o* __this, const MethodInfo* method);
// 0x5c5f9c0

void Characters_TitanProjectileDetection___ctor
               (Characters_TitanProjectileDetection_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_GameObject__o *__this_00;
  System_Collections_Generic_HashSet_Hook__o *__this_01;
  
  if (Il2CppMethodInitialized_07547890 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_GameObject_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Hook_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_Hook);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_GameObject);
    Il2CppMethodInitialized_07547890 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_GameObject)
  ;
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_GameObject_ctor);
  (__this->fields)._entities = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._entities);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Hook);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_01,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_Hook_ctor);
  (__this->fields)._hooks = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._hooks);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


