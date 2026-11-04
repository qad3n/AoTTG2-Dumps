// Type: Characters.TitanProjectileDetection
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/TitanProjectileDetection.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/TitanProjectileDetection.cs
// --------------------------------

// Characters.TitanProjectileDetection.<>c$$.cctor
// il2cpp: void Characters_TitanProjectileDetection___c___cctor (const MethodInfo* method);
// 0x1821d0ed0

void Characters_TitanProjectileDetection___c___cctor(MethodInfo *method)

{
  Characters_TitanProjectileDetection___c_o *__this;
  
  if (Il2CppMethodInitialized_184346e9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanProjectileDetection_c);
    Il2CppMethodInitialized_184346e9f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanProjectileDetection_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Characters_TitanProjectileDetection_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_TitanProjectileDetection_c->static_fields->__9,__this);
  return;
}


// Characters.TitanProjectileDetection.<>c$$.ctor
// il2cpp: void Characters_TitanProjectileDetection___c___ctor (Characters_TitanProjectileDetection___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Characters_TitanProjectileDetection___c___ctor(Characters_TitanProjectileDetection___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.TitanProjectileDetection.<>c$$<FixedUpdate>b__8_0
// il2cpp: bool Characters_TitanProjectileDetection___c___FixedUpdate_b__8_0 (Characters_TitanProjectileDetection___c_o* __this, Characters_Hook_o* hook, const MethodInfo* method);
// 0x1821d0820

bool Characters_TitanProjectileDetection___c___FixedUpdate_b__8_0
               (Characters_TitanProjectileDetection___c_o *__this,Characters_Hook_o *hook,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346ea0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346ea0 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)hook,(MethodInfo *)0x0);
  if (!bVar1) {
    return true;
  }
  if (hook == (Characters_Hook_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((hook->fields).State == 1) {
    return false;
  }
  return (hook->fields).State != 2;
}


// Characters.TitanProjectileDetection$$Create
// il2cpp: Characters_TitanProjectileDetection_o* Characters_TitanProjectileDetection__Create (Characters_BaseTitan_o* owner, const MethodInfo* method);
// 0x1821cd050

Characters_TitanProjectileDetection_o *
Characters_TitanProjectileDetection__Create(Characters_BaseTitan_o *owner,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseTitanComponentCache_o *pCVar2;
  UnityEngine_Component_o *__this;
  UnityEngine_Vector3_StaticFields *pUVar3;
  UnityEngine_Component_c *pUVar4;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Transform_o *p;
  Characters_TitanProjectileDetection_o *pCVar6;
  UnityEngine_SphereCollider_o *__this_01;
  UnityEngine_Vector3_o *pUVar7;
  float value;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_184346e99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_CapsuleCollider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_SphereCollider)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_TitanProjectileDetection);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    Il2CppMethodInitialized_184346e99 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_2f1ad20(__this_00,(MethodInfo *)0x0);
  if (((owner != (Characters_BaseTitan_o *)0x0) &&
      (pCVar2 = (owner->fields).BaseTitanCache, pCVar2 != (Characters_BaseTitanComponentCache_o *)0x0)) &&
     (__this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this = (UnityEngine_Component_o *)(pCVar2->fields).Movebox;
    pUVar5 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Component_o *)0x0) {
      p = UnityEngine_Component__get_transform(__this,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(pUVar5,p,(MethodInfo *)0x0);
        pUVar5 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_18433dbea == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433dbea = '\x01';
        }
        if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
          pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
          local_28.x = (pUVar3->zeroVector).fields.x;
          local_28.y = (pUVar3->zeroVector).fields.y;
          local_28.z = (pUVar3->zeroVector).fields.z;
          UnityEngine_Transform__set_localPosition
                    (pUVar5,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
          pCVar6 = UnityEngine_GameObject__AddComponent_object_
                             (__this_00,
                              (MethodInfo_6F4D60 *)
                              MethodInfo_UnityEngine_GameObject_AddComponent_TitanProjectileDetection);
          if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
          }
          UnityEngine_GameObject__set_layer
                    (__this_00,TypeInfo_Utility_PhysicsLayer->static_fields->ProjectileDetection,
                     (MethodInfo *)0x0);
          pUVar4 = __this->klass;
          bVar1 = (TypeInfo_UnityEngine_CapsuleCollider->_2).typeHierarchyDepth;
          if ((bVar1 <= (pUVar4->_2).typeHierarchyDepth) &&
             ((pUVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
              (Il2CppClass *)TypeInfo_UnityEngine_CapsuleCollider)) {
            bVar1 = (TypeInfo_UnityEngine_CapsuleCollider->_2).typeHierarchyDepth;
            if (((pUVar4->_2).typeHierarchyDepth < bVar1) ||
               ((pUVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_UnityEngine_CapsuleCollider)) {
              il2cpp_codegen_raise_invalid_cast_exception(__this);
            }
            __this_01 = UnityEngine_GameObject__AddComponent_object_
                                  (__this_00,
                                   (MethodInfo_6F4D60 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_SphereCollider);
            pUVar7 = UnityEngine_CapsuleCollider__get_center
                               (&local_18,(UnityEngine_CapsuleCollider_o *)__this,(MethodInfo *)0x0);
            if (__this_01 == (UnityEngine_SphereCollider_o *)0x0) goto label_1821cd2c6;
            local_28.z = (pUVar7->fields).z;
            local_28.x = (pUVar7->fields).x;
            local_28.y = (pUVar7->fields).y;
            UnityEngine_SphereCollider__set_center
                      (__this_01,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
            value = UnityEngine_CapsuleCollider__get_height
                              ((UnityEngine_CapsuleCollider_o *)__this,(MethodInfo *)0x0);
            UnityEngine_SphereCollider__set_radius(__this_01,value,(MethodInfo *)0x0);
            UnityEngine_Collider__set_isTrigger((UnityEngine_Collider_o *)__this_01,true,(MethodInfo *)0x0);
          }
          if (pCVar6 != (Characters_TitanProjectileDetection_o *)0x0) {
            (pCVar6->fields).Owner = owner;
            Il2CppCodeGenWriteBarrier(&(pCVar6->fields).Owner,owner);
            return pCVar6;
          }
        }
      }
    }
  }
label_1821cd2c6:
  ThrowNullReferenceException();
}


// Characters.TitanProjectileDetection$$RegisterHook
// il2cpp: void Characters_TitanProjectileDetection__RegisterHook (Characters_TitanProjectileDetection_o* __this, Characters_Hook_o* hook, const MethodInfo* method);
// 0x1821cd6c0

void Characters_TitanProjectileDetection__RegisterHook
               (Characters_TitanProjectileDetection_o *__this,Characters_Hook_o *hook,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (Il2CppMethodInitialized_184346e9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Hook_Add);
    Il2CppMethodInitialized_184346e9a = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._hooks;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              (__this_00,(Il2CppObject *)hook,
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_Hook_Add);
    (__this->fields).Detect = true;
    return;
  }
  ThrowNullReferenceException();
}


// Characters.TitanProjectileDetection$$OnTriggerEnter
// il2cpp: void Characters_TitanProjectileDetection__OnTriggerEnter (Characters_TitanProjectileDetection_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x1821cd4c0

void Characters_TitanProjectileDetection__OnTriggerEnter
               (Characters_TitanProjectileDetection_o *__this,UnityEngine_Collider_o *other,MethodInfo *method
               )

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *__this_01;
  Projectiles_BaseProjectile_o *__this_02;
  
  if (Il2CppMethodInitialized_184346e9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_BaseProjectile)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346e9b = '\x01';
  }
  if (other != (UnityEngine_Collider_o *)0x0) {
    pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Transform__GetRoot(pUVar2,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0)
        ;
        if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
          __this_02 = UnityEngine_GameObject__GetComponent_object_
                                (__this_01,
                                 (MethodInfo_6F5650 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_BaseProjectile);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar1) {
            if (__this_02 == (Projectiles_BaseProjectile_o *)0x0) goto label_1821cd5c1;
            bVar1 = Projectiles_BaseProjectile__IsMine(__this_02,(MethodInfo *)0x0);
            if (bVar1) {
              __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._entities;
              if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1821cd5c1;
              System_Collections_Generic_HashSet_object___Add
                        (__this_00,(Il2CppObject *)__this_01,
                         (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_GameObject_Add);
              (__this->fields).Detect = true;
            }
          }
          return;
        }
      }
    }
  }
label_1821cd5c1:
  ThrowNullReferenceException();
}


// Characters.TitanProjectileDetection$$OnTriggerExit
// il2cpp: void Characters_TitanProjectileDetection__OnTriggerExit (Characters_TitanProjectileDetection_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x1821cd5d0

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
  
  if (Il2CppMethodInitialized_184346e9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_GameObject_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_GameObject_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Hook_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_GameObject_get_Count);
    Il2CppMethodInitialized_184346e9c = '\x01';
  }
  if (other != (UnityEngine_Collider_o *)0x0) {
    pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      pUVar5 = UnityEngine_Transform__GetRoot(pUVar5,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
        item = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
        pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._entities;
        if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          bVar4 = System_Collections_Generic_HashSet_object___Contains
                            (pSVar1,(Il2CppObject *)item,
                             (MethodInfo_1759E40 *)
                             MethodInfo_System_Collections_Generic_HashSet_GameObject_Contains);
          if (bVar4) {
            pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._entities;
            if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1821cd6b5;
            System_Collections_Generic_HashSet_object___Remove
                      (pSVar1,(Il2CppObject *)item,
                       (MethodInfo_1766930 *)MethodInfo_System_Collections_Generic_HashSet_GameObject_Remove);
          }
          pSVar2 = (__this->fields)._entities;
          if (pSVar2 != (System_Collections_Generic_HashSet_GameObject__o *)0x0) {
            if ((pSVar2->fields)._count == 0) {
              pSVar3 = (__this->fields)._hooks;
              if (pSVar3 == (System_Collections_Generic_HashSet_Hook__o *)0x0) goto label_1821cd6b5;
              if ((pSVar3->fields)._count == 0) {
                (__this->fields).Detect = false;
              }
            }
            return;
          }
        }
      }
    }
  }
label_1821cd6b5:
  ThrowNullReferenceException();
}


// Characters.TitanProjectileDetection$$FixedUpdate
// il2cpp: void Characters_TitanProjectileDetection__FixedUpdate (Characters_TitanProjectileDetection_o* __this, const MethodInfo* method);
// 0x1821cd2e0

void Characters_TitanProjectileDetection__FixedUpdate
               (Characters_TitanProjectileDetection_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  Il2CppObject *object;
  System_Collections_Generic_HashSet_Hook__o *pSVar1;
  System_Collections_Generic_HashSet_GameObject__o *pSVar2;
  System_Predicate_T__o *match;
  
  if (Il2CppMethodInitialized_184346e9d == '\0') {
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
    Il2CppMethodInitialized_184346e9d = '\x01';
  }
  pSVar2 = (__this->fields)._entities;
  if (pSVar2 != (System_Collections_Generic_HashSet_GameObject__o *)0x0) {
    if (0 < ((System_Collections_Generic_HashSet_T__Fields *)&pSVar2->fields)->_count) {
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      pSVar2 = (System_Collections_Generic_HashSet_GameObject__o *)
               Utility_Util__RemoveNullOrDeadDetections_object_
                         ((System_Collections_Generic_HashSet_T__o *)pSVar2,
                          (MethodInfo_86B5C0 *)MethodInfo_Utility_Util_RemoveNull_GameObject);
      (__this->fields)._entities = pSVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._entities,pSVar2);
    }
    __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._hooks;
    if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      if (0 < (__this_00->fields)._count) {
        if ((TypeInfo_Characters_TitanProjectileDetection_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanProjectileDetection_c);
        }
        match = (System_Predicate_T__o *)
                TypeInfo_Characters_TitanProjectileDetection_c->static_fields->__9__8_0;
        if (match == (System_Predicate_T__o *)0x0) {
          if ((TypeInfo_Characters_TitanProjectileDetection_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanProjectileDetection_c);
          }
          object = (Il2CppObject *)TypeInfo_Characters_TitanProjectileDetection_c->static_fields->__9;
          match = (System_Predicate_T__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_Hook);
          System_Predicate_object____ctor
                    ((System_Predicate_object__o *)match,object,
                     (intptr_t)MethodInfo_Characters_TitanProjectileDetection_c_FixedUpdate_b__8_0,
                     (MethodInfo_B61EB0 *)0x0);
          TypeInfo_Characters_TitanProjectileDetection_c->static_fields->__9__8_0 =
               (System_Predicate_Hook__o *)match;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_Characters_TitanProjectileDetection_c->static_fields->__9__8_0,match);
        }
        System_Collections_Generic_HashSet_object___RemoveWhere
                  (__this_00,match,
                   (MethodInfo_1766120 *)MethodInfo_System_Collections_Generic_HashSet_Hook_RemoveWhere);
      }
      pSVar2 = (__this->fields)._entities;
      if (pSVar2 != (System_Collections_Generic_HashSet_GameObject__o *)0x0) {
        if ((pSVar2->fields)._count == 0) {
          pSVar1 = (__this->fields)._hooks;
          if (pSVar1 == (System_Collections_Generic_HashSet_Hook__o *)0x0) goto label_1821cd4af;
          if ((pSVar1->fields)._count == 0) {
            (__this->fields).Detect = false;
          }
        }
        return;
      }
    }
  }
label_1821cd4af:
  ThrowNullReferenceException();
}


// Characters.TitanProjectileDetection$$.ctor
// il2cpp: void Characters_TitanProjectileDetection___ctor (Characters_TitanProjectileDetection_o* __this, const MethodInfo* method);
// 0x1821cd720

void Characters_TitanProjectileDetection___ctor
               (Characters_TitanProjectileDetection_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_GameObject__o *__this_00;
  System_Collections_Generic_HashSet_Hook__o *__this_01;
  
  if (Il2CppMethodInitialized_184346e9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_GameObject_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Hook_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_Hook);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_GameObject);
    Il2CppMethodInitialized_184346e9e = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_GameObject)
  ;
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_GameObject_ctor);
  (__this->fields)._entities = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._entities,__this_00);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Hook);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_01,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_Hook_ctor);
  (__this->fields)._hooks = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._hooks,__this_01);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


