// Type: Characters.WallColossalSteamWarningZone
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/WallColossalSteamWarningZone.cs
// Prior source: NEW in this update
// --------------------------------

// Characters.WallColossalSteamWarningZone.<>c$$.cctor
// il2cpp: void Characters_WallColossalSteamWarningZone___c___cctor (const MethodInfo* method);
// 0x3fff260

void Characters_WallColossalSteamWarningZone_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704204 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704204 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Characters.WallColossalSteamWarningZone.<>c$$.ctor
// il2cpp: void Characters_WallColossalSteamWarningZone___c___ctor (Characters_WallColossalSteamWarningZone___c_o* __this, const MethodInfo* method);
// 0x3fff2d0

void Characters_WallColossalSteamWarningZone_<>c___ctor
               (Characters_WallColossalSteamWarningZone___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.WallColossalSteamWarningZone.<>c$$<Update>b__16_0
// il2cpp: bool Characters_WallColossalSteamWarningZone___c___Update_b__16_0 (Characters_WallColossalSteamWarningZone___c_o* __this, Characters_Human_o* h, const MethodInfo* method);
// 0x3fff2e0

bool_conflict
Characters_WallColossalSteamWarningZone_<>c__<Update>b__16_0
          (Characters_WallColossalSteamWarningZone___c_o *__this,Characters_Human_o *h,
          MethodInfo *method)

{
  uint3 uVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  
  if (DAT_05704205 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704205 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)h,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  uVar1 = (uint3)((uint)bVar2 >> 8);
  bVar3 = (bool_conflict)CONCAT71((uint7)uVar1,1);
  if ((char)bVar2 == '\0') {
    if (h == (Characters_Human_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar3 = CONCAT31(uVar1,*(char *)&(h->fields).FeedVictimName != '\0');
  }
  return bVar3;
}


// Characters.WallColossalSteamWarningZone.<>c$$<Update>b__16_1
// il2cpp: bool Characters_WallColossalSteamWarningZone___c___Update_b__16_1 (Characters_WallColossalSteamWarningZone___c_o* __this, UnityEngine_Rigidbody_o* rb, const MethodInfo* method);
// 0x3fff340

bool_conflict
Characters_WallColossalSteamWarningZone_<>c__<Update>b__16_1
          (Characters_WallColossalSteamWarningZone___c_o *__this,UnityEngine_Rigidbody_o *rb,
          MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_05704206 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704206 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rb,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// Characters.WallColossalSteamWarningZone.<>c__DisplayClass17_0$$.ctor
// il2cpp: void Characters_WallColossalSteamWarningZone___c__DisplayClass17_0___ctor (Characters_WallColossalSteamWarningZone___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x3fff170

void Characters_WallColossalSteamWarningZone_<>c__DisplayClass17_0___ctor
               (Characters_WallColossalSteamWarningZone___c__DisplayClass17_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.WallColossalSteamWarningZone.<>c__DisplayClass17_0$$<CheckForProjectiles>b__0
// il2cpp: bool Characters_WallColossalSteamWarningZone___c__DisplayClass17_0___CheckForProjectiles_b__0 (Characters_WallColossalSteamWarningZone___c__DisplayClass17_0_o* __this, UnityEngine_Rigidbody_o* rb, const MethodInfo* method);
// 0x3fff390

bool_conflict
Characters_WallColossalSteamWarningZone_<>c__DisplayClass17_0__<CheckForProjectiles>b__0
          (Characters_WallColossalSteamWarningZone___c__DisplayClass17_0_o *__this,
          UnityEngine_Rigidbody_o *rb,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  uint uVar1;
  
  if (DAT_05704207 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    DAT_05704207 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).currentProjectiles;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    uVar1 = System_Collections_Generic_HashSet<object>__Contains
                      (__this_00,(Il2CppObject *)rb,MethodInfo_Boolean_Contains);
    return uVar1 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.WallColossalSteamWarningZone$$Initialize
// il2cpp: void Characters_WallColossalSteamWarningZone__Initialize (Characters_WallColossalSteamWarningZone_o* __this, Characters_WallColossalShifter_o* owner, const MethodInfo* method);
// 0x3ffb5d0

void Characters_WallColossalSteamWarningZone__Initialize
               (Characters_WallColossalSteamWarningZone_o *__this,
               Characters_WallColossalShifter_o *owner,MethodInfo *method)

{
  UnityEngine_BoxCollider_o *pUVar1;
  MethodInfo *extraout_RDX;
  
  if (DAT_057041fb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BoxCollider_GetComponent_BoxCollider);
    DAT_057041fb = '\x01';
    method = extraout_RDX;
  }
  (__this->fields)._owner = owner;
  il2cpp_runtime_glue(&(__this->fields)._owner,owner,method);
  pUVar1 = (UnityEngine_BoxCollider_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_BoxCollider_GetComponent_BoxCollider);
  (__this->fields)._boxCollider = pUVar1;
  il2cpp_runtime_glue(&(__this->fields)._boxCollider,pUVar1);
  return;
}


// Characters.WallColossalSteamWarningZone$$SetActive
// il2cpp: void Characters_WallColossalSteamWarningZone__SetActive (Characters_WallColossalSteamWarningZone_o* __this, bool active, const MethodInfo* method);
// 0x3ffb3a0

void Characters_WallColossalSteamWarningZone__SetActive
               (Characters_WallColossalSteamWarningZone_o *__this,bool_conflict active,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  bool_conflict bVar2;
  System_Collections_Generic_HashSet_T__o *pSVar3;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar4;
  Characters_Human_o *__this_02;
  Characters_Human_o *pCVar5;
  undefined1 local_40 [16];
  Characters_Human_o *local_30;
  
  if (DAT_057041fc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Human_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_Human__GetEnu);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057041fc = '\x01';
  }
  *(char *)&(__this->fields)._isActive = (char)active;
  if ((char)active != '\0') {
    return;
  }
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._humansInZone;
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_40,pSVar1,MethodInfo_HashSet_1_T__Enumerator_Characters_Human__GetEnu);
    pSVar3 = (System_Collections_Generic_HashSet_T__o *)local_40._0_8_;
    pSVar4 = (System_Collections_Generic_HashSet_Enumerator_T__c *)local_40._8_8_;
    while (__this_02 = local_30, __this_00.fields._8_8_ = pSVar4, __this_00.fields._set = pSVar3,
          __this_00.fields._current = (Il2CppObject *)__this_02,
          bVar2 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                            (__this_00,(MethodInfo_3185890 *)&stack0xffffffffffffffa8),
          (char)bVar2 != '\0') {
      pCVar5 = __this_02;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      local_30 = pCVar5;
      if ((char)bVar2 != '\0') {
        if (__this_02 == (Characters_Human_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (*(char *)&(__this_02->fields).FeedVictimName == '\0') {
          Characters_Human__ToggleFire1(__this_02,0,(MethodInfo *)0x0);
          local_30 = pCVar5;
        }
      }
    }
    __this_01.fields._8_8_ = pSVar4;
    __this_01.fields._set = pSVar3;
    __this_01.fields._current = (Il2CppObject *)__this_02;
    System_Collections_Generic_HashSet_Enumerator<object>__Dispose
              (__this_01,(MethodInfo_3185880 *)&stack0xffffffffffffffa8);
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._humansInZone;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet<object>__Clear(pSVar1,MethodInfo_Void_Clear);
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._rigidbodiesInZone;
      if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet<object>__Clear(pSVar1,MethodInfo_Void_Clear);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.WallColossalSteamWarningZone$$OnTriggerEnter
// il2cpp: void Characters_WallColossalSteamWarningZone__OnTriggerEnter (Characters_WallColossalSteamWarningZone_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x3ffe030

void Characters_WallColossalSteamWarningZone__OnTriggerEnter
               (Characters_WallColossalSteamWarningZone_o *__this,UnityEngine_Collider_o *other,
               MethodInfo *method)

{
  int iVar1;
  Characters_WallColossalShifter_o *x;
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool_conflict bVar2;
  int32_t iVar3;
  UnityEngine_GameObject_o *__this_01;
  Characters_Human_o *__this_02;
  
  if (DAT_057041fd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Human_GetComponent_Human);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    DAT_057041fd = '\x01';
  }
  if ((char)(__this->fields)._isActive != '\0') {
    x = (__this->fields)._owner;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      if ((other == (UnityEngine_Collider_o *)0x0) ||
         (__this_01 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)other,(MethodInfo *)0x0),
         __this_01 == (UnityEngine_GameObject_o *)0x0)) {
LAB_03ffe1a9:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      iVar3 = UnityEngine_GameObject__get_layer(__this_01,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
        il2cpp_init_class();
        iVar1 = *(int *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0xc);
      }
      else {
        iVar1 = *(int *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0xc);
      }
      if (iVar3 == iVar1) {
        __this_02 = (Characters_Human_o *)
                    UnityEngine_Component__GetComponent<object>
                              ((UnityEngine_Component_o *)other,MethodInfo_Human_GetComponent_Human);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (__this_02 != (Characters_Human_o *)0x0) {
            if (*(char *)&(__this_02->fields).FeedVictimName != '\0') {
              return;
            }
            bVar2 = Characters_BaseCharacter__IsMine
                              ((Characters_BaseCharacter_o *)__this_02,(MethodInfo *)0x0);
            if ((char)bVar2 == '\0') {
              return;
            }
            __this_00 = (System_Collections_Generic_HashSet_object__o *)
                        (__this->fields)._humansInZone;
            if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
              System_Collections_Generic_HashSet<object>__Add
                        (__this_00,(Il2CppObject *)__this_02,MethodInfo_Boolean_Add);
              Characters_Human__ToggleFire1(__this_02,1,(MethodInfo *)0x0);
              return;
            }
          }
          goto LAB_03ffe1a9;
        }
      }
    }
  }
  return;
}


// Characters.WallColossalSteamWarningZone$$OnTriggerExit
// il2cpp: void Characters_WallColossalSteamWarningZone__OnTriggerExit (Characters_WallColossalSteamWarningZone_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x3ffe1b0

void Characters_WallColossalSteamWarningZone__OnTriggerExit
               (Characters_WallColossalSteamWarningZone_o *__this,UnityEngine_Collider_o *other,
               MethodInfo *method)

{
  int iVar1;
  Characters_WallColossalShifter_o *x;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  bool_conflict bVar3;
  int32_t iVar4;
  UnityEngine_GameObject_o *__this_00;
  Characters_Human_o *__this_01;
  
  if (DAT_057041fe == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Human_GetComponent_Human);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    DAT_057041fe = '\x01';
  }
  x = (__this->fields)._owner;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if ((other == (UnityEngine_Collider_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)other,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03ffe344;
    iVar4 = UnityEngine_GameObject__get_layer(__this_00,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
      il2cpp_init_class();
      iVar1 = *(int *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0xc);
    }
    else {
      iVar1 = *(int *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0xc);
    }
    if (iVar4 == iVar1) {
      __this_01 = (Characters_Human_o *)
                  UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)other,MethodInfo_Human_GetComponent_Human);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        pSVar2 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._humansInZone;
        if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) {
LAB_03ffe344:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar3 = System_Collections_Generic_HashSet<object>__Contains
                          (pSVar2,(Il2CppObject *)__this_01,MethodInfo_Boolean_Contains);
        if ((char)bVar3 != '\0') {
          pSVar2 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._humansInZone;
          if ((pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) ||
             (System_Collections_Generic_HashSet<object>__Remove
                        (pSVar2,(Il2CppObject *)__this_01,MethodInfo_Boolean_Remove),
             __this_01 == (Characters_Human_o *)0x0)) goto LAB_03ffe344;
          if ((*(char *)&(__this_01->fields).FeedVictimName == '\0') &&
             (bVar3 = Characters_BaseCharacter__IsMine
                                ((Characters_BaseCharacter_o *)__this_01,(MethodInfo *)0x0),
             (char)bVar3 != '\0')) {
            Characters_Human__ToggleFire1(__this_01,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  return;
}


// Characters.WallColossalSteamWarningZone$$OnDestroy
// il2cpp: void Characters_WallColossalSteamWarningZone__OnDestroy (Characters_WallColossalSteamWarningZone_o* __this, const MethodInfo* method);
// 0x3ffe350

void Characters_WallColossalSteamWarningZone__OnDestroy
               (Characters_WallColossalSteamWarningZone_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  bool_conflict bVar2;
  System_Collections_Generic_HashSet_T__o *pSVar3;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar4;
  Characters_Human_o *__this_02;
  Characters_Human_o *pCVar5;
  undefined1 local_40 [16];
  Characters_Human_o *local_30;
  
  if (DAT_057041ff == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Human_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_Human__GetEnu);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057041ff = '\x01';
  }
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._humansInZone;
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_40,pSVar1,MethodInfo_HashSet_1_T__Enumerator_Characters_Human__GetEnu);
    pSVar3 = (System_Collections_Generic_HashSet_T__o *)local_40._0_8_;
    pSVar4 = (System_Collections_Generic_HashSet_Enumerator_T__c *)local_40._8_8_;
    while( true ) {
      __this_02 = local_30;
      __this_00.fields._8_8_ = pSVar4;
      __this_00.fields._set = pSVar3;
      __this_00.fields._current = (Il2CppObject *)__this_02;
      bVar2 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                        (__this_00,(MethodInfo_3185890 *)&stack0xffffffffffffffa8);
      if ((char)bVar2 == '\0') break;
      pCVar5 = __this_02;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      local_30 = pCVar5;
      if ((char)bVar2 != '\0') {
        if (__this_02 == (Characters_Human_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (*(char *)&(__this_02->fields).FeedVictimName == '\0') {
          bVar2 = Characters_BaseCharacter__IsMine
                            ((Characters_BaseCharacter_o *)__this_02,(MethodInfo *)0x0);
          local_30 = pCVar5;
          if ((char)bVar2 != '\0') {
            Characters_Human__ToggleFire1(__this_02,0,(MethodInfo *)0x0);
            local_30 = pCVar5;
          }
        }
      }
    }
    __this_01.fields._8_8_ = pSVar4;
    __this_01.fields._set = pSVar3;
    __this_01.fields._current = (Il2CppObject *)__this_02;
    System_Collections_Generic_HashSet_Enumerator<object>__Dispose
              (__this_01,(MethodInfo_3185880 *)&stack0xffffffffffffffa8);
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._humansInZone;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet<object>__Clear(pSVar1,MethodInfo_Void_Clear);
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._rigidbodiesInZone;
      if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet<object>__Clear(pSVar1,MethodInfo_Void_Clear);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.WallColossalSteamWarningZone$$Update
// il2cpp: void Characters_WallColossalSteamWarningZone__Update (Characters_WallColossalSteamWarningZone_o* __this, const MethodInfo* method);
// 0x3ffe580

void Characters_WallColossalSteamWarningZone__Update
               (Characters_WallColossalSteamWarningZone_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  long lVar2;
  Characters_WallColossalShifter_o *x;
  UnityEngine_Object_o *x_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  bool_conflict bVar3;
  System_Predicate_T__o *pSVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar5;
  undefined1 in_stack_ffffffffffffff98 [12];
  float fVar6;
  System_Collections_Generic_HashSet_T__o *pSVar7;
  System_Collections_Generic_HashSet_Enumerator_T__o local_40;
  
  if (DAT_05704200 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Rigidbody_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_UnityEngine_Rigidbody__G);
    il2cpp_init_method_metadata(&MethodInfo_Int32_RemoveWhere);
    il2cpp_init_method_metadata(&MethodInfo_Int32_RemoveWhere);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Predicate_Rigidbody);
    il2cpp_init_method_metadata(&TypeInfo_Predicate_Human);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__Update_b__16_0);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__Update_b__16_1);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704200 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._humansInZone;
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
    pSVar4 = *(System_Predicate_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    pSVar4 = *(System_Predicate_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (pSVar4 == (System_Predicate_T__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar4 = (System_Predicate_T__o *)il2cpp_runtime_glue(TypeInfo_Predicate_Human);
    System_Predicate<object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Predicate_T__o **)(lVar2 + 8) = pSVar4;
    il2cpp_runtime_glue(lVar2 + 8,pSVar4);
  }
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__RemoveWhere(pSVar1,pSVar4,MethodInfo_Int32_RemoveWhere);
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._rigidbodiesInZone;
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
      pSVar4 = *(System_Predicate_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    }
    else {
      pSVar4 = *(System_Predicate_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    }
    if (pSVar4 == (System_Predicate_T__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar4 = (System_Predicate_T__o *)il2cpp_runtime_glue(TypeInfo_Predicate_Rigidbody);
      System_Predicate<object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Predicate_T__o **)(lVar2 + 0x10) = pSVar4;
      il2cpp_runtime_glue(lVar2 + 0x10,pSVar4);
    }
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet<object>__RemoveWhere(pSVar1,pSVar4,MethodInfo_Int32_RemoveWhere);
      if ((char)(__this->fields)._isActive != '\0') {
        x = (__this->fields)._owner;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          x_00 = (UnityEngine_Object_o *)(__this->fields)._boxCollider;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          method_01 = (MethodInfo *)0x0;
          bVar3 = UnityEngine_Object__op_Inequality
                            (x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            fVar6 = (__this->fields)._projectileCheckTimer;
            fVar5 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            (__this->fields)._projectileCheckTimer = fVar6 - fVar5;
            if (fVar6 - fVar5 <= 0.0) {
              Characters_WallColossalSteamWarningZone__CheckForProjectiles(__this,method_01);
              (__this->fields)._projectileCheckTimer = (__this->fields)._projectileCheckInterval;
            }
            fVar6 = (__this->fields)._knockbackTimer;
            fVar5 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            (__this->fields)._knockbackTimer = fVar6 - fVar5;
            if (fVar6 - fVar5 <= 0.0) {
              pSVar1 = (System_Collections_Generic_HashSet_object__o *)
                       (__this->fields)._rigidbodiesInZone;
              if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03ffe971;
              System_Collections_Generic_HashSet<object>__GetEnumerator
                        (&local_40,pSVar1,MethodInfo_HashSet_1_T__Enumerator_UnityEngine_Rigidbody__G);
              pSVar7 = local_40.fields._set;
              while (__this_00.fields._version = (int32_t)fVar6,
                    __this_00.fields._set =
                         (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff98._0_8_,
                    __this_00.fields._index = in_stack_ffffffffffffff98._8_4_,
                    __this_00.fields._current = (Il2CppObject *)pSVar7,
                    bVar3 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                                      (__this_00,(MethodInfo_3185890 *)&stack0xffffffffffffffa8),
                    (char)bVar3 != '\0') {
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                bVar3 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)local_40.fields._current,
                                   (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if ((char)bVar3 != '\0') {
                  if ((UnityEngine_Object_o *)local_40.fields._current ==
                      (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  bVar3 = UnityEngine_Rigidbody__get_isKinematic
                                    ((UnityEngine_Rigidbody_o *)local_40.fields._current,
                                     (MethodInfo *)0x0);
                  if ((char)bVar3 == '\0') {
                    Characters_WallColossalSteamWarningZone__ApplyKnockback
                              (__this,(UnityEngine_Rigidbody_o *)local_40.fields._current,method_00)
                    ;
                  }
                }
              }
              __this_01.fields._version = (int32_t)fVar6;
              __this_01.fields._set =
                   (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff98._0_8_;
              __this_01.fields._index = in_stack_ffffffffffffff98._8_4_;
              __this_01.fields._current = (Il2CppObject *)pSVar7;
              System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                        (__this_01,(MethodInfo_3185880 *)&stack0xffffffffffffffa8);
              (__this->fields)._knockbackTimer = (__this->fields).KnockbackInterval;
            }
          }
        }
      }
      return;
    }
  }
LAB_03ffe971:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.WallColossalSteamWarningZone$$CheckForProjectiles
// il2cpp: void Characters_WallColossalSteamWarningZone__CheckForProjectiles (Characters_WallColossalSteamWarningZone_o* __this, const MethodInfo* method);
// 0x3ffea30

void Characters_WallColossalSteamWarningZone__CheckForProjectiles
               (Characters_WallColossalSteamWarningZone_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  UnityEngine_BoxCollider_o *pUVar4;
  System_Collections_Generic_HashSet_object__o *pSVar5;
  bool_conflict bVar6;
  Il2CppObject *__this_00;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Collider_array *pUVar8;
  Il2CppClass *pIVar9;
  UnityEngine_Object_o *x;
  System_Predicate_T__o *match;
  MethodInfo *method_00;
  uint uVar10;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Quaternion_o orientation;
  UnityEngine_Vector3_o halfExtents;
  float local_98;
  float fStack_94;
  float local_58;
  float fStack_54;
  
  if (DAT_05704201 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Rigidbody_GetComponent_Rigidbody);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Int32_RemoveWhere);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_UnityEngine_Rigidbody);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_Rigidbody);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    il2cpp_init_method_metadata(&TypeInfo_Predicate_Rigidbody);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__CheckForProjectiles_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass17_0);
    DAT_05704201 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass17_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar4 = (__this->fields)._boxCollider;
  if ((pUVar4 != (UnityEngine_BoxCollider_o *)0x0) &&
     (UVar11 = UnityEngine_BoxCollider__get_center(pUVar4,(MethodInfo *)0x0),
     pUVar7 != (UnityEngine_Transform_o *)0x0)) {
    UVar11 = UnityEngine_Transform__TransformPoint(pUVar7,UVar11,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._boxCollider;
    if (pUVar4 != (UnityEngine_BoxCollider_o *)0x0) {
      UVar12 = UnityEngine_BoxCollider__get_size(pUVar4,(MethodInfo *)0x0);
      pUVar7 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        UVar13 = UnityEngine_Transform__get_lossyScale(pUVar7,(MethodInfo *)0x0);
        pUVar7 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
          local_98 = UVar12.fields.x;
          fStack_94 = UVar12.fields.y;
          orientation = UnityEngine_Transform__get_rotation(pUVar7,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
            il2cpp_init_class();
          }
          local_58 = UVar13.fields.x;
          fStack_54 = UVar13.fields.y;
          halfExtents.fields.x = local_98 * 0.5 * local_58;
          halfExtents.fields.y = fStack_94 * 0.5 * fStack_54;
          halfExtents.fields.z = UVar12.fields.z * 0.5 * UVar13.fields.z;
          uVar1 = *(undefined4 *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x1c);
          if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pUVar8 = UnityEngine_Physics__OverlapBox
                             (UVar11,halfExtents,orientation,1 << ((byte)uVar1 & 0x1f),
                              (MethodInfo *)0x0);
          pIVar9 = (Il2CppClass *)il2cpp_runtime_glue(TypeInfo_HashSet_Rigidbody);
          System_Collections_Generic_HashSet<object>___ctor
                    ((System_Collections_Generic_HashSet_object__o *)pIVar9,MethodInfo_HashSet_1_UnityEngine_Rigidbody);
          if (__this_00 != (Il2CppObject *)0x0) {
            __this_00[1].klass = pIVar9;
            il2cpp_runtime_glue(__this_00 + 1,pIVar9);
            if (pUVar8 != (UnityEngine_Collider_array *)0x0) {
              iVar2 = (int)pUVar8->max_length;
              if (0 < iVar2) {
                uVar10 = 0;
                if (iVar2 != 0) {
                  do {
                    if ((UnityEngine_Component_o *)pUVar8->m_Items[(int)uVar10] ==
                        (UnityEngine_Component_o *)0x0) goto LAB_03ffee5a;
                    x = (UnityEngine_Object_o *)
                        UnityEngine_Component__GetComponent<object>
                                  ((UnityEngine_Component_o *)pUVar8->m_Items[(int)uVar10],
                                   MethodInfo_Rigidbody_GetComponent_Rigidbody);
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    bVar6 = UnityEngine_Object__op_Inequality
                                      (x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    if ((char)bVar6 != '\0') {
                      if (x == (UnityEngine_Object_o *)0x0) goto LAB_03ffee5a;
                      bVar6 = UnityEngine_Rigidbody__get_isKinematic
                                        ((UnityEngine_Rigidbody_o *)x,(MethodInfo *)0x0);
                      if ((char)bVar6 == '\0') {
                        pIVar9 = __this_00[1].klass;
                        if (pIVar9 == (Il2CppClass *)0x0) goto LAB_03ffee5a;
                        System_Collections_Generic_HashSet<object>__Add
                                  ((System_Collections_Generic_HashSet_object__o *)pIVar9,
                                   (Il2CppObject *)x,MethodInfo_Boolean_Add);
                        pSVar5 = (System_Collections_Generic_HashSet_object__o *)
                                 (__this->fields)._rigidbodiesInZone;
                        if (pSVar5 == (System_Collections_Generic_HashSet_object__o *)0x0)
                        goto LAB_03ffee5a;
                        bVar6 = System_Collections_Generic_HashSet<object>__Contains
                                          (pSVar5,(Il2CppObject *)x,MethodInfo_Boolean_Contains);
                        if ((char)bVar6 == '\0') {
                          pSVar5 = (System_Collections_Generic_HashSet_object__o *)
                                   (__this->fields)._rigidbodiesInZone;
                          if (pSVar5 == (System_Collections_Generic_HashSet_object__o *)0x0)
                          goto LAB_03ffee5a;
                          System_Collections_Generic_HashSet<object>__Add
                                    (pSVar5,(Il2CppObject *)x,MethodInfo_Boolean_Add);
                          Characters_WallColossalSteamWarningZone__ApplyKnockback
                                    (__this,(UnityEngine_Rigidbody_o *)x,method_00);
                        }
                      }
                    }
                    uVar10 = uVar10 + 1;
                    uVar3 = (uint)pUVar8->max_length;
                    if ((int)uVar3 <= (int)uVar10) goto LAB_03ffedfe;
                  } while (uVar10 < uVar3);
                }
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
LAB_03ffedfe:
              pSVar5 = (System_Collections_Generic_HashSet_object__o *)
                       (__this->fields)._rigidbodiesInZone;
              match = (System_Predicate_T__o *)il2cpp_runtime_glue(TypeInfo_Predicate_Rigidbody);
              System_Predicate<object>___ctor();
              if (pSVar5 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                System_Collections_Generic_HashSet<object>__RemoveWhere(pSVar5,match,MethodInfo_Int32_RemoveWhere);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_03ffee5a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.WallColossalSteamWarningZone$$ApplyKnockback
// il2cpp: void Characters_WallColossalSteamWarningZone__ApplyKnockback (Characters_WallColossalSteamWarningZone_o* __this, UnityEngine_Rigidbody_o* rb, const MethodInfo* method);
// 0x3ffee70

void Characters_WallColossalSteamWarningZone__ApplyKnockback
               (Characters_WallColossalSteamWarningZone_o *__this,UnityEngine_Rigidbody_o *rb,
               MethodInfo *method)

{
  int iVar1;
  Characters_WallColossalShifter_o *pCVar2;
  System_Collections_Generic_Dictionary_string__string__o *pSVar3;
  undefined1 auVar4 [16];
  bool_conflict bVar5;
  UnityEngine_Transform_o *__this_00;
  System_String_o *pSVar6;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar7;
  float fVar8;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar9 [16];
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o UVar11;
  float local_5c;
  undefined8 local_58;
  float local_38;
  float fStack_34;
  
  if (DAT_05704202 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"ThunderSpear");
    il2cpp_init_method_metadata(&"Thunderspear");
    DAT_05704202 = '\x01';
  }
  pCVar2 = (__this->fields)._owner;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  pCVar2 = (__this->fields)._owner;
  if (pCVar2 == (Characters_WallColossalShifter_o *)0x0) goto LAB_03fff166;
  pSVar3 = (pCVar2->fields).AttackAnimations;
  if (pSVar3 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
    pSVar7 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pSVar7 = pSVar3[1].fields._entries;
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pSVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  pCVar2 = (__this->fields)._owner;
  if ((((pCVar2 == (Characters_WallColossalShifter_o *)0x0) ||
       (pSVar3 = (pCVar2->fields).AttackAnimations,
       pSVar3 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)) ||
      (pSVar7 = pSVar3[1].fields._entries,
      pSVar7 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) ||
     (__this_00 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)pSVar7,(MethodInfo *)0x0),
     __this_00 == (UnityEngine_Transform_o *)0x0)) goto LAB_03fff166;
  UVar10 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
  if (rb == (UnityEngine_Rigidbody_o *)0x0) goto LAB_03fff166;
  UVar11 = UnityEngine_Rigidbody__get_position(rb,(MethodInfo *)0x0);
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
    DAT_056fde20 = '\x01';
  }
  local_38 = UVar10.fields.x;
  fStack_34 = UVar10.fields.y;
  auVar9._0_4_ = UVar11.fields.x - local_38;
  auVar9._4_4_ = UVar11.fields.y - fStack_34;
  auVar9._8_4_ = extraout_XMM0_Dc_00 - extraout_XMM0_Dc;
  auVar9._12_4_ = extraout_XMM0_Dd_00 - extraout_XMM0_Dd;
  local_5c = UVar11.fields.z - UVar10.fields.z;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
  }
  fVar8 = local_5c * local_5c + auVar9._4_4_ * auVar9._4_4_ + auVar9._0_4_ * auVar9._0_4_;
  if (fVar8 < 0.0) {
    fVar8 = sqrtf(fVar8);
    in_XMM1_Dc = extraout_XMM0_Dc_01;
    in_XMM1_Dd = extraout_XMM0_Dd_01;
    if (fVar8 <= 1e-05) goto LAB_03fff032;
LAB_03fff0b1:
    local_5c = local_5c / fVar8;
    auVar4._4_4_ = fVar8;
    auVar4._0_4_ = fVar8;
    auVar4._8_4_ = in_XMM1_Dc;
    auVar4._12_4_ = in_XMM1_Dd;
    auVar9 = divps(auVar9,auVar4);
    local_58 = auVar9._0_8_;
  }
  else {
    fVar8 = SQRT(fVar8);
    if (1e-05 < fVar8) goto LAB_03fff0b1;
LAB_03fff032:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    local_58 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    local_5c = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  fVar8 = (__this->fields).KnockbackForce;
  pSVar6 = UnityEngine_Object__get_name((UnityEngine_Object_o *)rb,(MethodInfo *)0x0);
  if (pSVar6 == (System_String_o *)0x0) {
LAB_03fff166:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar5 = System_String__Contains(pSVar6,"Thunderspear",(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    pSVar6 = UnityEngine_Object__get_name((UnityEngine_Object_o *)rb,(MethodInfo *)0x0);
    if (pSVar6 == (System_String_o *)0x0) goto LAB_03fff166;
    bVar5 = System_String__Contains(pSVar6,"ThunderSpear",(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') goto LAB_03fff136;
  }
  fVar8 = fVar8 * (__this->fields).ThunderspearKnockbackMultiplier;
LAB_03fff136:
  UVar10.fields.z = local_5c * fVar8;
  UVar10.fields.x = (float)local_58 * fVar8;
  UVar10.fields.y = local_58._4_4_ * fVar8;
  UnityEngine_Rigidbody__AddForce(rb,UVar10,1,(MethodInfo *)0x0);
  return;
}


// Characters.WallColossalSteamWarningZone$$.ctor
// il2cpp: void Characters_WallColossalSteamWarningZone___ctor (Characters_WallColossalSteamWarningZone_o* __this, const MethodInfo* method);
// 0x3fff180

void Characters_WallColossalSteamWarningZone___ctor
               (Characters_WallColossalSteamWarningZone_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  
  if (DAT_05704203 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_UnityEngine_Rigidbody);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Characters_Human);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_Human);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_Rigidbody);
    DAT_05704203 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_Human);
  System_Collections_Generic_HashSet<object>___ctor(pSVar1,MethodInfo_HashSet_1_Characters_Human);
  (__this->fields)._humansInZone = (System_Collections_Generic_HashSet_Human__o *)pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._humansInZone,pSVar1);
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_Rigidbody);
  System_Collections_Generic_HashSet<object>___ctor(pSVar1,MethodInfo_HashSet_1_UnityEngine_Rigidbody);
  (__this->fields)._rigidbodiesInZone = (System_Collections_Generic_HashSet_Rigidbody__o *)pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._rigidbodiesInZone);
  (__this->fields).KnockbackForce = 100.0;
  (__this->fields).ThunderspearKnockbackMultiplier = 5.0;
  (__this->fields).KnockbackInterval = 0.1;
  (__this->fields)._projectileCheckInterval = 0.05;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


