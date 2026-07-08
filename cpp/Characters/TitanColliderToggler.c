// Type: Characters.TitanColliderToggler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/TitanColliderToggler.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Titan/TitanColliderToggler.cs  [CHANGED since prior version]
// --------------------------------

// Characters.TitanColliderToggler$$Create
// il2cpp: Characters_TitanColliderToggler_o* Characters_TitanColliderToggler__Create (Characters_BaseTitan_o* owner, const MethodInfo* method);
// 0x40141c0

Characters_TitanColliderToggler_o *
Characters_TitanColliderToggler__Create(Characters_BaseTitan_o *owner,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *p;
  Characters_TitanColliderToggler_o *__this_01;
  Characters_TitanProjectileDetection_o *pCVar1;
  MethodInfo *method_00;
  Characters_BaseTitan_o *method_01;
  
  if (DAT_05704289 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TitanColliderToggler_AddComponent_TitanColliderT);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    DAT_05704289 = '\x01';
  }
  __this = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(__this,(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if (owner != (Characters_BaseTitan_o *)0x0) {
      p = UnityEngine_Component__get_transform((UnityEngine_Component_o *)owner,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(__this_00,p,(MethodInfo *)0x0);
        __this_01 = (Characters_TitanColliderToggler_o *)
                    UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_TitanColliderToggler_AddComponent_TitanColliderT);
        if (__this_01 != (Characters_TitanColliderToggler_o *)0x0) {
          (__this_01->fields).Owner = owner;
          method_01 = owner;
          il2cpp_runtime_glue(&(__this_01->fields).Owner);
          pCVar1 = Characters_TitanProjectileDetection__Create(owner,(MethodInfo *)method_01);
          (__this_01->fields)._projectile = pCVar1;
          il2cpp_runtime_glue(&(__this_01->fields)._projectile);
          Characters_TitanColliderToggler__SetColliders(__this_01,0,method_00);
          return __this_01;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.TitanColliderToggler$$RegisterLook
// il2cpp: void Characters_TitanColliderToggler__RegisterLook (Characters_TitanColliderToggler_o* __this, const MethodInfo* method);
// 0x40146a0

void Characters_TitanColliderToggler__RegisterLook
               (Characters_TitanColliderToggler_o *__this,MethodInfo *method)

{
  *(undefined1 *)&(__this->fields)._look = 1;
  return;
}


// Characters.TitanColliderToggler$$SetNearby
// il2cpp: void Characters_TitanColliderToggler__SetNearby (Characters_TitanColliderToggler_o* __this, Characters_BaseCharacter_o* character, bool nearby, const MethodInfo* method);
// 0x40146b0

void Characters_TitanColliderToggler__SetNearby
               (Characters_TitanColliderToggler_o *__this,Characters_BaseCharacter_o *character,
               bool_conflict nearby,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  bool_conflict bVar2;
  
  if (DAT_0570428a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    DAT_0570428a = '\x01';
  }
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).NearbyCharacters;
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    if ((char)nearby != '\0') {
      System_Collections_Generic_HashSet<object>__Add(pSVar1,(Il2CppObject *)character,MethodInfo_Boolean_Add)
      ;
      return;
    }
    bVar2 = System_Collections_Generic_HashSet<object>__Contains
                      (pSVar1,(Il2CppObject *)character,MethodInfo_Boolean_Contains);
    if ((char)bVar2 == '\0') {
      return;
    }
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).NearbyCharacters;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet<object>__Remove
                (pSVar1,(Il2CppObject *)character,MethodInfo_Boolean_Remove);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.TitanColliderToggler$$FixedUpdate
// il2cpp: void Characters_TitanColliderToggler__FixedUpdate (Characters_TitanColliderToggler_o* __this, const MethodInfo* method);
// 0x4014760

void Characters_TitanColliderToggler__FixedUpdate
               (Characters_TitanColliderToggler_o *__this,MethodInfo *method)

{
  char cVar1;
  System_Collections_Generic_HashSet_BaseCharacter__o *pSVar2;
  Characters_TitanProjectileDetection_o *pCVar3;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  bool_conflict enable;
  
  if (DAT_0570428b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Characters_BaseCharacter__RemoveNullOr);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_0570428b = '\x01';
    in_RDX = extraout_RDX;
  }
  pSVar2 = (__this->fields).NearbyCharacters;
  if (pSVar2 == (System_Collections_Generic_HashSet_BaseCharacter__o *)0x0) goto LAB_04014848;
  if (0 < ((System_Collections_Generic_HashSet_T__Fields *)&pSVar2->fields)->_count) {
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Utility_Util__RemoveNullOrDead<object>
              ((System_Collections_Generic_HashSet_T__o *)pSVar2,MethodInfo_HashSet_1_Characters_BaseCharacter__RemoveNullOr);
    in_RDX = extraout_RDX_00;
  }
  cVar1 = (char)(__this->fields)._look;
  if (*(char *)((long)&(__this->fields)._look + 1) == '\0') {
    if (cVar1 == '\0') {
      pCVar3 = (__this->fields)._projectile;
      if (pCVar3 == (Characters_TitanProjectileDetection_o *)0x0) goto LAB_04014848;
      if ((char)(pCVar3->fields).Detect == '\0') {
        pSVar2 = (__this->fields).NearbyCharacters;
        if (pSVar2 == (System_Collections_Generic_HashSet_BaseCharacter__o *)0x0) goto LAB_04014848;
        if ((pSVar2->fields)._count < 1) goto LAB_0401483b;
      }
    }
    enable = 1;
  }
  else {
    if (cVar1 != '\0') goto LAB_0401483b;
    pCVar3 = (__this->fields)._projectile;
    if (pCVar3 == (Characters_TitanProjectileDetection_o *)0x0) {
LAB_04014848:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((char)(pCVar3->fields).Detect != '\0') goto LAB_0401483b;
    pSVar2 = (__this->fields).NearbyCharacters;
    if (pSVar2 == (System_Collections_Generic_HashSet_BaseCharacter__o *)0x0) goto LAB_04014848;
    if ((pSVar2->fields)._count != 0) goto LAB_0401483b;
    enable = 0;
  }
  Characters_TitanColliderToggler__SetColliders(__this,enable,in_RDX);
LAB_0401483b:
  *(undefined1 *)&(__this->fields)._look = 0;
  return;
}


// Characters.TitanColliderToggler$$SetColliders
// il2cpp: void Characters_TitanColliderToggler__SetColliders (Characters_TitanColliderToggler_o* __this, bool enable, const MethodInfo* method);
// 0x40144b0

/* WARNING: Removing unreachable block (ram,0x040145bb) */

void Characters_TitanColliderToggler__SetColliders
               (Characters_TitanColliderToggler_o *__this,bool_conflict enable,MethodInfo *method)

{
  Characters_BaseTitan_o *pCVar1;
  System_Action_Hashtable__o *pSVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar3;
  undefined1 in_stack_ffffffffffffffa8 [12];
  Il2CppObject *pIVar4;
  
  if (DAT_0570428c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Collider_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_Collider__GetEn);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570428c = '\x01';
  }
  pIVar4 = (Il2CppObject *)0x0;
  pCVar1 = (__this->fields).Owner;
  if (((pCVar1 != (Characters_BaseTitan_o *)0x0) &&
      (pSVar2 = (pCVar1->fields).OnPlayerPropertiesChanged,
      pSVar2 != (System_Action_Hashtable__o *)0x0)) &&
     (__this_00 = (System_Collections_Generic_List_object__o *)pSVar2[1].fields.data,
     __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,__this_00
               ,MethodInfo_List_1_T__Enumerator_UnityEngine_Collider__GetEn);
    do {
      __this_01.fields._version = enable;
      __this_01.fields._list =
           (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8._0_8_;
      __this_01.fields._index = in_stack_ffffffffffffffa8._8_4_;
      __this_01.fields._current = pIVar4;
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffb8);
      if ((char)bVar3 == '\0') {
        __this_02.fields._version = enable;
        __this_02.fields._list =
             (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8._0_8_;
        __this_02.fields._index = in_stack_ffffffffffffffa8._8_4_;
        __this_02.fields._current = pIVar4;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffb8);
        *(char *)((long)&(__this->fields)._look + 1) = (char)enable;
        return;
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)0x0,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    } while ((char)bVar3 == '\0');
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.TitanColliderToggler$$.ctor
// il2cpp: void Characters_TitanColliderToggler___ctor (Characters_TitanColliderToggler_o* __this, const MethodInfo* method);
// 0x4014850

void Characters_TitanColliderToggler___ctor
               (Characters_TitanColliderToggler_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (DAT_0570428d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Characters_BaseCharacter);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_BaseCharacter);
    DAT_0570428d = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_BaseCharacter);
  System_Collections_Generic_HashSet<object>___ctor(__this_00,MethodInfo_HashSet_1_Characters_BaseCharacter);
  (__this->fields).NearbyCharacters =
       (System_Collections_Generic_HashSet_BaseCharacter__o *)__this_00;
  il2cpp_runtime_glue(&(__this->fields).NearbyCharacters);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


