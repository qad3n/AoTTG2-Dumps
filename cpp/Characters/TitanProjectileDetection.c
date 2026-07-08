// Type: Characters.TitanProjectileDetection
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/TitanProjectileDetection.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Titan/TitanProjectileDetection.cs  [CHANGED since prior version]
// --------------------------------

// Characters.TitanProjectileDetection.<>c$$.cctor
// il2cpp: void Characters_TitanProjectileDetection___c___cctor (const MethodInfo* method);
// 0x4014dc0

void Characters_TitanProjectileDetection_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704294 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704294 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Characters.TitanProjectileDetection.<>c$$.ctor
// il2cpp: void Characters_TitanProjectileDetection___c___ctor (Characters_TitanProjectileDetection___c_o* __this, const MethodInfo* method);
// 0x4014e30

void Characters_TitanProjectileDetection_<>c___ctor
               (Characters_TitanProjectileDetection___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.TitanProjectileDetection.<>c$$<FixedUpdate>b__8_0
// il2cpp: bool Characters_TitanProjectileDetection___c___FixedUpdate_b__8_0 (Characters_TitanProjectileDetection___c_o* __this, Characters_Hook_o* hook, const MethodInfo* method);
// 0x4014e40

bool_conflict
Characters_TitanProjectileDetection_<>c__<FixedUpdate>b__8_0
          (Characters_TitanProjectileDetection___c_o *__this,Characters_Hook_o *hook,
          MethodInfo *method)

{
  bool_conflict bVar1;
  uint uVar2;
  
  if (DAT_05704295 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704295 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)hook,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (hook != (Characters_Hook_o *)0x0) {
      uVar2 = (hook->fields).State - 1;
      return CONCAT31((int3)(uVar2 >> 8),1 < uVar2);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar1 >> 8),1);
}


// Characters.TitanProjectileDetection$$Create
// il2cpp: Characters_TitanProjectileDetection_o* Characters_TitanProjectileDetection__Create (Characters_BaseTitan_o* owner, const MethodInfo* method);
// 0x40142a0

Characters_TitanProjectileDetection_o *
Characters_TitanProjectileDetection__Create(Characters_BaseTitan_o *owner,MethodInfo *method)

{
  byte bVar1;
  System_Action_Hashtable__o *pSVar2;
  UnityEngine_Component_o *__this;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *p;
  Characters_TitanProjectileDetection_o *pCVar4;
  UnityEngine_SphereCollider_o *__this_01;
  float value;
  UnityEngine_Vector3_o value_00;
  
  if (DAT_0570428e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CapsuleCollider);
    il2cpp_init_method_metadata(&MethodInfo_SphereCollider_AddComponent_SphereCollider);
    il2cpp_init_method_metadata(&MethodInfo_TitanProjectileDetection_AddComponent_TitanProje);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    DAT_0570428e = '\x01';
  }
  __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(__this_00,(MethodInfo *)0x0);
  if (((owner != (Characters_BaseTitan_o *)0x0) &&
      (pSVar2 = (owner->fields).OnPlayerPropertiesChanged,
      pSVar2 != (System_Action_Hashtable__o *)0x0)) &&
     (__this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this = *(UnityEngine_Component_o **)&(pSVar2->fields).method_is_virtual;
    pUVar3 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Component_o *)0x0) {
      p = UnityEngine_Component__get_transform(__this,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(pUVar3,p,(MethodInfo *)0x0);
        pUVar3 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        if (DAT_056fdd15 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fdd15 = '\x01';
        }
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_localPosition
                    (pUVar3,(UnityEngine_Vector3_o)
                            **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),(MethodInfo *)0x0
                    );
          pCVar4 = (Characters_TitanProjectileDetection_o *)
                   UnityEngine_GameObject__AddComponent<object>(__this_00,MethodInfo_TitanProjectileDetection_AddComponent_TitanProje);
          if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
            il2cpp_init_class();
          }
          UnityEngine_GameObject__set_layer
                    (__this_00,*(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x20),(MethodInfo *)0x0
                    );
          bVar1 = (TypeInfo_CapsuleCollider->_2).naturalAligment;
          if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
             ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CapsuleCollider)) {
            __this_01 = (UnityEngine_SphereCollider_o *)
                        UnityEngine_GameObject__AddComponent<object>(__this_00,MethodInfo_SphereCollider_AddComponent_SphereCollider);
            value_00 = UnityEngine_CapsuleCollider__get_center
                                 ((UnityEngine_CapsuleCollider_o *)__this,(MethodInfo *)0x0);
            if (__this_01 == (UnityEngine_SphereCollider_o *)0x0) goto LAB_040144ab;
            UnityEngine_SphereCollider__set_center(__this_01,value_00,(MethodInfo *)0x0);
            value = UnityEngine_CapsuleCollider__get_height
                              ((UnityEngine_CapsuleCollider_o *)__this,(MethodInfo *)0x0);
            UnityEngine_SphereCollider__set_radius(__this_01,value,(MethodInfo *)0x0);
            UnityEngine_Collider__set_isTrigger
                      ((UnityEngine_Collider_o *)__this_01,1,(MethodInfo *)0x0);
          }
          if (pCVar4 != (Characters_TitanProjectileDetection_o *)0x0) {
            (pCVar4->fields).Owner = owner;
            il2cpp_runtime_glue(&(pCVar4->fields).Owner,owner);
            return pCVar4;
          }
        }
      }
    }
  }
LAB_040144ab:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.TitanProjectileDetection$$RegisterHook
// il2cpp: void Characters_TitanProjectileDetection__RegisterHook (Characters_TitanProjectileDetection_o* __this, Characters_Hook_o* hook, const MethodInfo* method);
// 0x40148d0

void Characters_TitanProjectileDetection__RegisterHook
               (Characters_TitanProjectileDetection_o *__this,Characters_Hook_o *hook,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (DAT_0570428f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    DAT_0570428f = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._hooks;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this_00,(Il2CppObject *)hook,MethodInfo_Boolean_Add);
    *(undefined1 *)&(__this->fields).Detect = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.TitanProjectileDetection$$OnTriggerEnter
// il2cpp: void Characters_TitanProjectileDetection__OnTriggerEnter (Characters_TitanProjectileDetection_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x4014930

void Characters_TitanProjectileDetection__OnTriggerEnter
               (Characters_TitanProjectileDetection_o *__this,UnityEngine_Collider_o *other,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool_conflict bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *__this_01;
  Projectiles_BaseProjectile_o *__this_02;
  
  if (DAT_05704290 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseProjectile_GetComponent_BaseProjectile);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704290 = '\x01';
  }
  if (other != (UnityEngine_Collider_o *)0x0) {
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Transform__get_root(pUVar2,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        __this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
          __this_02 = (Projectiles_BaseProjectile_o *)
                      UnityEngine_GameObject__GetComponent<object>(__this_01,MethodInfo_BaseProjectile_GetComponent_BaseProjectile);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar1 != '\0') {
            if (__this_02 == (Projectiles_BaseProjectile_o *)0x0) goto LAB_04014a26;
            bVar1 = Projectiles_BaseProjectile__IsMine(__this_02,(MethodInfo *)0x0);
            if ((char)bVar1 != '\0') {
              __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._entities
              ;
              if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0)
              goto LAB_04014a26;
              System_Collections_Generic_HashSet<object>__Add
                        (__this_00,(Il2CppObject *)__this_01,MethodInfo_Boolean_Add);
              *(undefined1 *)&(__this->fields).Detect = 1;
            }
          }
          return;
        }
      }
    }
  }
LAB_04014a26:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.TitanProjectileDetection$$OnTriggerExit
// il2cpp: void Characters_TitanProjectileDetection__OnTriggerExit (Characters_TitanProjectileDetection_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x4014a30

void Characters_TitanProjectileDetection__OnTriggerExit
               (Characters_TitanProjectileDetection_o *__this,UnityEngine_Collider_o *other,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  System_Collections_Generic_HashSet_GameObject__o *pSVar2;
  System_Collections_Generic_HashSet_Hook__o *pSVar3;
  bool_conflict bVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *item;
  
  if (DAT_05704291 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_05704291 = '\x01';
  }
  if (other != (UnityEngine_Collider_o *)0x0) {
    pUVar5 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      pUVar5 = UnityEngine_Transform__get_root(pUVar5,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
        item = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
        pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._entities;
        if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          bVar4 = System_Collections_Generic_HashSet<object>__Contains
                            (pSVar1,(Il2CppObject *)item,MethodInfo_Boolean_Contains);
          if ((char)bVar4 != '\0') {
            pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._entities;
            if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_04014b1f;
            System_Collections_Generic_HashSet<object>__Remove
                      (pSVar1,(Il2CppObject *)item,MethodInfo_Boolean_Remove);
          }
          pSVar2 = (__this->fields)._entities;
          if (pSVar2 != (System_Collections_Generic_HashSet_GameObject__o *)0x0) {
            if ((pSVar2->fields)._count == 0) {
              pSVar3 = (__this->fields)._hooks;
              if (pSVar3 == (System_Collections_Generic_HashSet_Hook__o *)0x0) goto LAB_04014b1f;
              if ((pSVar3->fields)._count == 0) {
                *(undefined1 *)&(__this->fields).Detect = 0;
                return;
              }
            }
            return;
          }
        }
      }
    }
  }
LAB_04014b1f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.TitanProjectileDetection$$FixedUpdate
// il2cpp: void Characters_TitanProjectileDetection__FixedUpdate (Characters_TitanProjectileDetection_o* __this, const MethodInfo* method);
// 0x4014b30

void Characters_TitanProjectileDetection__FixedUpdate
               (Characters_TitanProjectileDetection_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_GameObject__o **ppSVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  long lVar2;
  System_Collections_Generic_HashSet_Hook__o *pSVar3;
  System_Collections_Generic_HashSet_GameObject__o *pSVar4;
  System_Predicate_T__o *match;
  
  if (DAT_05704292 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_RemoveWhere);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_Predicate_Hook);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__FixedUpdate_b__8_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_UnityEngine_GameObject__RemoveNull_Gam);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05704292 = '\x01';
  }
  pSVar4 = (__this->fields)._entities;
  if (pSVar4 != (System_Collections_Generic_HashSet_GameObject__o *)0x0) {
    ppSVar1 = &(__this->fields)._entities;
    if (0 < ((System_Collections_Generic_HashSet_T__Fields *)&pSVar4->fields)->_count) {
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar4 = (System_Collections_Generic_HashSet_GameObject__o *)
               Utility_Util__RemoveNull<object>
                         ((System_Collections_Generic_HashSet_T__o *)pSVar4,MethodInfo_HashSet_1_UnityEngine_GameObject__RemoveNull_Gam);
      *ppSVar1 = pSVar4;
      il2cpp_runtime_glue(ppSVar1,pSVar4);
    }
    __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._hooks;
    if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      if (0 < (__this_00->fields)._count) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
          match = *(System_Predicate_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        else {
          match = *(System_Predicate_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        if (match == (System_Predicate_T__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          match = (System_Predicate_T__o *)il2cpp_runtime_glue(TypeInfo_Predicate_Hook);
          System_Predicate<object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Predicate_T__o **)(lVar2 + 8) = match;
          il2cpp_runtime_glue(lVar2 + 8,match);
        }
        System_Collections_Generic_HashSet<object>__RemoveWhere(__this_00,match,MethodInfo_Int32_RemoveWhere);
      }
      if (*ppSVar1 != (System_Collections_Generic_HashSet_GameObject__o *)0x0) {
        if (((*ppSVar1)->fields)._count == 0) {
          pSVar3 = (__this->fields)._hooks;
          if (pSVar3 == (System_Collections_Generic_HashSet_Hook__o *)0x0) goto LAB_04014cfb;
          if ((pSVar3->fields)._count == 0) {
            *(undefined1 *)&(__this->fields).Detect = 0;
          }
        }
        return;
      }
    }
  }
LAB_04014cfb:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.TitanProjectileDetection$$.ctor
// il2cpp: void Characters_TitanProjectileDetection___ctor (Characters_TitanProjectileDetection_o* __this, const MethodInfo* method);
// 0x4014d00

void Characters_TitanProjectileDetection___ctor
               (Characters_TitanProjectileDetection_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  
  if (DAT_05704293 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_UnityEngine_GameObject);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Characters_Hook);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_Hook);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_GameObject);
    DAT_05704293 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_GameObject);
  System_Collections_Generic_HashSet<object>___ctor(pSVar1,MethodInfo_HashSet_1_UnityEngine_GameObject);
  (__this->fields)._entities = (System_Collections_Generic_HashSet_GameObject__o *)pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._entities,pSVar1);
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_Hook);
  System_Collections_Generic_HashSet<object>___ctor(pSVar1,MethodInfo_HashSet_1_Characters_Hook);
  (__this->fields)._hooks = (System_Collections_Generic_HashSet_Hook__o *)pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._hooks);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


