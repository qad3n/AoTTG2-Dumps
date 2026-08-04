// Type: Characters.TitanColliderToggler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/TitanColliderToggler.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/TitanColliderToggler.cs
// --------------------------------

// Characters.TitanColliderToggler$$Create
// il2cpp: Characters_TitanColliderToggler_o* Characters_TitanColliderToggler__Create (Characters_BaseTitan_o* owner, const MethodInfo* method);
// 0x4320bc0

Characters_TitanColliderToggler_o *
Characters_TitanColliderToggler__Create(Characters_BaseTitan_o *owner,MethodInfo *method)

{
  byte bVar1;
  System_Action_Hashtable__o *pSVar2;
  UnityEngine_Component_o *__this;
  long lVar3;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar4;
  Characters_BaseTitan_o *__this_05;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  Characters_TitanColliderToggler_o *pCVar7;
  Characters_TitanProjectileDetection_o *pCVar8;
  UnityEngine_GameObject_o *__this_06;
  UnityEngine_GameObject_o *__this_07;
  long *plVar9;
  MethodInfo *method_00;
  uint value;
  Characters_BaseTitan_o *pCVar10;
  UnityEngine_GameObject_o *pUVar11;
  float value_00;
  UnityEngine_Vector3_o value_01;
  undefined1 auVar12 [12];
  undefined1 in_stack_ffffffffffffff68 [12];
  uint in_stack_ffffffffffffff74;
  Il2CppObject *pIVar13;
  
  if (g_data_057adff7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TitanColliderToggler_AddComponent_TitanColliderToggler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    g_data_057adff7 = '\x01';
  }
  __this_05 = (Characters_BaseTitan_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
  pCVar10 = __this_05;
  UnityEngine_GameObject___ctor_4dfc3c0((UnityEngine_GameObject_o *)__this_05,(MethodInfo *)0x0);
  if (((__this_05 != (Characters_BaseTitan_o *)0x0) &&
      (pCVar10 = __this_05,
      pUVar5 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_05,(MethodInfo *)0x0),
      owner != (Characters_BaseTitan_o *)0x0)) &&
     (pCVar10 = owner,
     pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)owner,(MethodInfo *)0x0),
     pUVar5 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__SetParent(pUVar5,pUVar6,(MethodInfo *)0x0);
    pCVar7 = (Characters_TitanColliderToggler_o *)
             UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)__this_05,MethodInfo_TitanColliderToggler_AddComponent_TitanColliderToggler);
    pCVar10 = __this_05;
    if (pCVar7 != (Characters_TitanColliderToggler_o *)0x0) {
      (pCVar7->fields).Owner = owner;
      pCVar10 = owner;
      il2cpp_runtime_helper_022b4080(&(pCVar7->fields).Owner);
      pCVar8 = Characters_TitanProjectileDetection__Create(owner,(MethodInfo *)pCVar10);
      (pCVar7->fields)._projectile = pCVar8;
      il2cpp_runtime_helper_022b4080(&(pCVar7->fields)._projectile);
      Characters_TitanColliderToggler__SetColliders(pCVar7,0,method_00);
      return pCVar7;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adffc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CapsuleCollider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SphereCollider_AddComponent_SphereCollider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TitanProjectileDetection_AddComponent_TitanProjectileDet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    g_data_057adffc = '\x01';
  }
  __this_06 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
  value = 0;
  pUVar11 = __this_06;
  UnityEngine_GameObject___ctor_4dfc3c0(__this_06,(MethodInfo *)0x0);
  if (((pCVar10 != (Characters_BaseTitan_o *)0x0) &&
      (pSVar2 = (pCVar10->fields).OnPlayerPropertiesChanged, pSVar2 != (System_Action_Hashtable__o *)0x0)) &&
     (__this_06 != (UnityEngine_GameObject_o *)0x0)) {
    __this = *(UnityEngine_Component_o **)&(pSVar2->fields).method_is_virtual;
    value = 0;
    pUVar11 = __this_06;
    pUVar5 = UnityEngine_GameObject__get_transform(__this_06,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Component_o *)0x0) {
      value = 0;
      pUVar11 = (UnityEngine_GameObject_o *)__this;
      pUVar6 = UnityEngine_Component__get_transform(__this,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(pUVar5,pUVar6,(MethodInfo *)0x0);
        value = 0;
        pUVar11 = __this_06;
        pUVar5 = UnityEngine_GameObject__get_transform(__this_06,(MethodInfo *)0x0);
        if (g_data_057a65d5 == '\0') {
          pUVar11 = (UnityEngine_GameObject_o *)&TypeInfo_Vector3;
          il2cpp_runtime_helper_023445d0();
          g_data_057a65d5 = '\x01';
        }
        if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_localPosition
                    (pUVar5,(UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
                     (MethodInfo *)0x0);
          pCVar7 = (Characters_TitanColliderToggler_o *)
                   UnityEngine_GameObject__AddComponent_object_(__this_06,MethodInfo_TitanProjectileDetection_AddComponent_TitanProjectileDet);
          if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          value = *(uint *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x20);
          __this_07 = __this_06;
          UnityEngine_GameObject__set_layer(__this_06,value,(MethodInfo *)0x0);
          bVar1 = (TypeInfo_CapsuleCollider->_2).naturalAligment;
          if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
             ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CapsuleCollider)) {
            __this_07 = (UnityEngine_GameObject_o *)
                        UnityEngine_GameObject__AddComponent_object_(__this_06,MethodInfo_SphereCollider_AddComponent_SphereCollider);
            value = 0;
            pUVar11 = (UnityEngine_GameObject_o *)__this;
            value_01 = UnityEngine_CapsuleCollider__get_center
                                 ((UnityEngine_CapsuleCollider_o *)__this,(MethodInfo *)0x0);
            if (__this_07 == (UnityEngine_GameObject_o *)0x0) goto label_04320eab;
            UnityEngine_SphereCollider__set_center
                      ((UnityEngine_SphereCollider_o *)__this_07,value_01,(MethodInfo *)0x0);
            value_00 = UnityEngine_CapsuleCollider__get_height
                                 ((UnityEngine_CapsuleCollider_o *)__this,(MethodInfo *)0x0);
            UnityEngine_SphereCollider__set_radius
                      ((UnityEngine_SphereCollider_o *)__this_07,value_00,(MethodInfo *)0x0);
            value = 1;
            UnityEngine_Collider__set_isTrigger((UnityEngine_Collider_o *)__this_07,1,(MethodInfo *)0x0);
          }
          pUVar11 = __this_07;
          if (pCVar7 != (Characters_TitanColliderToggler_o *)0x0) {
            (pCVar7->fields)._projectile = (Characters_TitanProjectileDetection_o *)pCVar10;
            il2cpp_runtime_helper_022b4080(&(pCVar7->fields)._projectile,pCVar10);
            return pCVar7;
          }
        }
      }
    }
  }
label_04320eab:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adffa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Collider_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adffa = '\x01';
  }
  pIVar13 = (Il2CppObject *)0x0;
  if (((((UnityEngine_Component_o *)(pUVar11 + 1))->monitor != (void *)0x0) &&
      (lVar3 = *(long *)((long)((UnityEngine_Component_o *)(pUVar11 + 1))->monitor + 0xf8), lVar3 != 0)) &&
     (__this_00 = *(System_Collections_Generic_List_object__o **)(lVar3 + 0xe8),
     __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff78,__this_00,
               MethodInfo_List_1_T_Enumerator_UnityEngine_Collider_GetEnumerator);
    do {
      __this_01.fields._version = value;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68._0_8_;
      __this_01.fields._index = in_stack_ffffffffffffff68._8_4_;
      __this_01.fields._current = pIVar13;
      bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78);
      if ((char)bVar4 == '\0') {
        __this_02.fields._version = value;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68._0_8_;
        __this_02.fields._index = in_stack_ffffffffffffff68._8_4_;
        __this_02.fields._current = pIVar13;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
        goto label_04320fdd;
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)0x0,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    } while ((char)bVar4 == '\0');
    il2cpp_runtime_helper_022b2c90();
    in_stack_ffffffffffffff74 = value;
  }
  auVar12 = il2cpp_runtime_helper_022b2c90();
  if (auVar12._8_4_ == 1) {
    plVar9 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar3 = *plVar9;
    __cxa_end_catch();
    __this_03.fields._version = in_stack_ffffffffffffff74;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68._0_8_;
    __this_03.fields._index = in_stack_ffffffffffffff68._8_4_;
    __this_03.fields._current = pIVar13;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
    value = in_stack_ffffffffffffff74;
    if (lVar3 == 0) {
label_04320fdd:
      *(char *)((long)&((UnityEngine_Component_o *)(pUVar11 + 2))->monitor + 1) = (char)value;
      return (Characters_TitanColliderToggler_o *)(ulong)value;
    }
    il2cpp_runtime_helper_022fefe0(lVar3);
  }
  __this_04.fields._version = in_stack_ffffffffffffff74;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68._0_8_;
  __this_04.fields._index = in_stack_ffffffffffffff68._8_4_;
  __this_04.fields._current = pIVar13;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
  _Unwind_Resume(auVar12._0_8_);
}


// Characters.TitanColliderToggler$$RegisterLook
// il2cpp: void Characters_TitanColliderToggler__RegisterLook (Characters_TitanColliderToggler_o* __this, const MethodInfo* method);
// 0x43210a0

void Characters_TitanColliderToggler__RegisterLook
               (Characters_TitanColliderToggler_o *__this,MethodInfo *method)

{
  *(undefined1 *)&(__this->fields)._look = 1;
  return;
}


// Characters.TitanColliderToggler$$SetNearby
// il2cpp: void Characters_TitanColliderToggler__SetNearby (Characters_TitanColliderToggler_o* __this, Characters_BaseCharacter_o* character, bool nearby, const MethodInfo* method);
// 0x43210b0

void Characters_TitanColliderToggler__SetNearby
               (Characters_TitanColliderToggler_o *__this,Characters_BaseCharacter_o *character,
               bool_conflict nearby,MethodInfo *method)

{
  char cVar1;
  System_Collections_Generic_IEqualityComparer_T__o *pSVar2;
  long lVar3;
  bool_conflict bVar4;
  System_Collections_Generic_HashSet_object__o *pSVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  System_Collections_Generic_HashSet_T__o *__this_00;
  System_Collections_Generic_HashSet_T__o *__this_01;
  System_Collections_Generic_HashSet_T__o *set;
  
  if (g_data_057adff8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    g_data_057adff8 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).NearbyCharacters;
  if (pSVar5 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    if ((char)nearby != '\0') {
      System_Collections_Generic_HashSet_object___Add(pSVar5,(Il2CppObject *)character,MethodInfo_Boolean_Add);
      return;
    }
    bVar4 = System_Collections_Generic_HashSet_object___Contains
                      (pSVar5,(Il2CppObject *)character,MethodInfo_Boolean_Contains);
    if ((char)bVar4 == '\0') {
      return;
    }
    pSVar5 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).NearbyCharacters;
    if (pSVar5 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___Remove(pSVar5,(Il2CppObject *)character,MethodInfo_Boolean_Remove);
      return;
    }
  }
  __this_00 = (System_Collections_Generic_HashSet_T__o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  method_00 = extraout_RDX;
  __this_01 = __this_00;
  if (g_data_057adff9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Characters_BaseCharacter_RemoveNullOrDead_Base);
    __this_01 = (System_Collections_Generic_HashSet_T__o *)&TypeInfo_Util;
    il2cpp_runtime_helper_023445d0();
    g_data_057adff9 = '\x01';
    method_00 = extraout_RDX_00;
  }
  set = *(System_Collections_Generic_HashSet_T__o **)&(__this_00->fields)._freeList;
  if (set == (System_Collections_Generic_HashSet_T__o *)0x0) goto label_04321248;
  if (0 < (set->fields)._count) {
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Utility_Util__RemoveNullOrDead_object_(set,MethodInfo_HashSet_1_Characters_BaseCharacter_RemoveNullOrDead_Base);
    method_00 = extraout_RDX_01;
    __this_01 = set;
  }
  cVar1 = (char)(__this_00->fields)._version;
  if (*(char *)((long)&(__this_00->fields)._version + 1) == '\0') {
    if (cVar1 == '\0') {
      pSVar2 = (__this_00->fields)._comparer;
      if (pSVar2 == (System_Collections_Generic_IEqualityComparer_T__o *)0x0) goto label_04321248;
      if (*(char *)&pSVar2[3].monitor == '\0') {
        lVar3 = *(long *)&(__this_00->fields)._freeList;
        if (lVar3 == 0) goto label_04321248;
        if (*(int *)(lVar3 + 0x20) < 1) goto label_0432123b;
      }
    }
    bVar4 = 1;
  }
  else {
    if (cVar1 != '\0') goto label_0432123b;
    pSVar2 = (__this_00->fields)._comparer;
    if (pSVar2 == (System_Collections_Generic_IEqualityComparer_T__o *)0x0) {
label_04321248:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057adffb == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Characters_BaseCharacter);
        il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_BaseCharacter);
        g_data_057adffb = '\x01';
      }
      pSVar5 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_BaseCharacter);
      System_Collections_Generic_HashSet_object____ctor(pSVar5,MethodInfo_HashSet_1_Characters_BaseCharacter);
      *(System_Collections_Generic_HashSet_object__o **)&(__this_01->fields)._freeList = pSVar5;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields)._freeList);
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_01,(MethodInfo *)0x0);
      return;
    }
    if (*(char *)&pSVar2[3].monitor != '\0') goto label_0432123b;
    lVar3 = *(long *)&(__this_00->fields)._freeList;
    if (lVar3 == 0) goto label_04321248;
    if (*(int *)(lVar3 + 0x20) != 0) goto label_0432123b;
    bVar4 = 0;
  }
  Characters_TitanColliderToggler__SetColliders
            ((Characters_TitanColliderToggler_o *)__this_00,bVar4,method_00);
label_0432123b:
  *(undefined1 *)&(__this_00->fields)._version = 0;
  return;
}


// Characters.TitanColliderToggler$$FixedUpdate
// il2cpp: void Characters_TitanColliderToggler__FixedUpdate (Characters_TitanColliderToggler_o* __this, const MethodInfo* method);
// 0x4321160

void Characters_TitanColliderToggler__FixedUpdate
               (Characters_TitanColliderToggler_o *__this,MethodInfo *method)

{
  char cVar1;
  Characters_TitanProjectileDetection_o *pCVar2;
  System_Collections_Generic_HashSet_object__o *__this_00;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  bool_conflict enable;
  System_Collections_Generic_HashSet_BaseCharacter__o *__this_01;
  System_Collections_Generic_HashSet_BaseCharacter__o *pSVar3;
  
  __this_01 = (System_Collections_Generic_HashSet_BaseCharacter__o *)__this;
  if (g_data_057adff9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Characters_BaseCharacter_RemoveNullOrDead_Base);
    __this_01 = (System_Collections_Generic_HashSet_BaseCharacter__o *)&TypeInfo_Util;
    il2cpp_runtime_helper_023445d0();
    g_data_057adff9 = '\x01';
    in_RDX = extraout_RDX;
  }
  pSVar3 = (__this->fields).NearbyCharacters;
  if (pSVar3 == (System_Collections_Generic_HashSet_BaseCharacter__o *)0x0) goto label_04321248;
  if (0 < ((System_Collections_Generic_HashSet_T__Fields *)&pSVar3->fields)->_count) {
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Utility_Util__RemoveNullOrDead_object_((System_Collections_Generic_HashSet_T__o *)pSVar3,MethodInfo_HashSet_1_Characters_BaseCharacter_RemoveNullOrDead_Base);
    in_RDX = extraout_RDX_00;
    __this_01 = pSVar3;
  }
  cVar1 = (char)(__this->fields)._look;
  if (*(char *)((long)&(__this->fields)._look + 1) == '\0') {
    if (cVar1 == '\0') {
      pCVar2 = (__this->fields)._projectile;
      if (pCVar2 == (Characters_TitanProjectileDetection_o *)0x0) goto label_04321248;
      if ((char)(pCVar2->fields).Detect == '\0') {
        pSVar3 = (__this->fields).NearbyCharacters;
        if (pSVar3 == (System_Collections_Generic_HashSet_BaseCharacter__o *)0x0) goto label_04321248;
        if ((pSVar3->fields)._count < 1) goto label_0432123b;
      }
    }
    enable = 1;
  }
  else {
    if (cVar1 != '\0') goto label_0432123b;
    pCVar2 = (__this->fields)._projectile;
    if (pCVar2 == (Characters_TitanProjectileDetection_o *)0x0) {
label_04321248:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057adffb == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Characters_BaseCharacter);
        il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_BaseCharacter);
        g_data_057adffb = '\x01';
      }
      __this_00 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_BaseCharacter);
      System_Collections_Generic_HashSet_object____ctor(__this_00,MethodInfo_HashSet_1_Characters_BaseCharacter);
      *(System_Collections_Generic_HashSet_object__o **)
       &((System_Collections_Generic_HashSet_T__Fields *)&__this_01->fields)->_freeList = __this_00;
      il2cpp_runtime_helper_022b4080(&((System_Collections_Generic_HashSet_T__Fields *)&__this_01->fields)->_freeList);
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_01,(MethodInfo *)0x0);
      return;
    }
    if ((char)(pCVar2->fields).Detect != '\0') goto label_0432123b;
    pSVar3 = (__this->fields).NearbyCharacters;
    if (pSVar3 == (System_Collections_Generic_HashSet_BaseCharacter__o *)0x0) goto label_04321248;
    if ((pSVar3->fields)._count != 0) goto label_0432123b;
    enable = 0;
  }
  Characters_TitanColliderToggler__SetColliders(__this,enable,in_RDX);
label_0432123b:
  *(undefined1 *)&(__this->fields)._look = 0;
  return;
}


// Characters.TitanColliderToggler$$SetColliders
// il2cpp: void Characters_TitanColliderToggler__SetColliders (Characters_TitanColliderToggler_o* __this, bool enable, const MethodInfo* method);
// 0x4320eb0

void Characters_TitanColliderToggler__SetColliders
               (Characters_TitanColliderToggler_o *__this,bool_conflict enable,MethodInfo *method)

{
  Characters_BaseTitan_o *pCVar1;
  System_Action_Hashtable__o *pSVar2;
  System_Collections_Generic_List_object__o *__this_00;
  long lVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar4;
  long *plVar5;
  undefined1 auVar6 [12];
  undefined1 in_stack_ffffffffffffffa8 [12];
  bool_conflict in_stack_ffffffffffffffb4;
  Il2CppObject *pIVar7;
  
  if (g_data_057adffa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Collider_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adffa = '\x01';
  }
  pIVar7 = (Il2CppObject *)0x0;
  pCVar1 = (__this->fields).Owner;
  if (((pCVar1 != (Characters_BaseTitan_o *)0x0) &&
      (pSVar2 = (pCVar1->fields).OnPlayerPropertiesChanged, pSVar2 != (System_Action_Hashtable__o *)0x0)) &&
     (__this_00 = (System_Collections_Generic_List_object__o *)pSVar2[1].fields.data,
     __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,__this_00,
               MethodInfo_List_1_T_Enumerator_UnityEngine_Collider_GetEnumerator);
    do {
      __this_01.fields._version = enable;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8._0_8_;
      __this_01.fields._index = in_stack_ffffffffffffffa8._8_4_;
      __this_01.fields._current = pIVar7;
      bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8);
      if ((char)bVar4 == '\0') {
        __this_02.fields._version = enable;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8._0_8_;
        __this_02.fields._index = in_stack_ffffffffffffffa8._8_4_;
        __this_02.fields._current = pIVar7;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
        goto label_04320fdd;
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)0x0,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    } while ((char)bVar4 == '\0');
    il2cpp_runtime_helper_022b2c90();
    in_stack_ffffffffffffffb4 = enable;
  }
  auVar6 = il2cpp_runtime_helper_022b2c90();
  if (auVar6._8_4_ == 1) {
    plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar3 = *plVar5;
    __cxa_end_catch();
    __this_03.fields._version = in_stack_ffffffffffffffb4;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8._0_8_;
    __this_03.fields._index = in_stack_ffffffffffffffa8._8_4_;
    __this_03.fields._current = pIVar7;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
    enable = in_stack_ffffffffffffffb4;
    if (lVar3 == 0) {
label_04320fdd:
      *(char *)((long)&(__this->fields)._look + 1) = (char)enable;
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar3);
  }
  __this_04.fields._version = in_stack_ffffffffffffffb4;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffa8._0_8_;
  __this_04.fields._index = in_stack_ffffffffffffffa8._8_4_;
  __this_04.fields._current = pIVar7;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  _Unwind_Resume(auVar6._0_8_);
}


// Characters.TitanColliderToggler$$.ctor
// il2cpp: void Characters_TitanColliderToggler___ctor (Characters_TitanColliderToggler_o* __this, const MethodInfo* method);
// 0x4321250

void Characters_TitanColliderToggler___ctor(Characters_TitanColliderToggler_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (g_data_057adffb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Characters_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_BaseCharacter);
    g_data_057adffb = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_BaseCharacter);
  System_Collections_Generic_HashSet_object____ctor(__this_00,MethodInfo_HashSet_1_Characters_BaseCharacter);
  (__this->fields).NearbyCharacters = (System_Collections_Generic_HashSet_BaseCharacter__o *)__this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).NearbyCharacters);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


