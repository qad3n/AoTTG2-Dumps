// Type: Characters.TitanProjectileDetection
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/TitanProjectileDetection.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/TitanProjectileDetection.cs
// --------------------------------

// Characters.TitanProjectileDetection.<>c$$.cctor
// il2cpp: void Characters_TitanProjectileDetection___c___cctor (const MethodInfo* method);
// 0x43217c0

void Characters_TitanProjectileDetection___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ae002 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae002 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Characters.TitanProjectileDetection.<>c$$.ctor
// il2cpp: void Characters_TitanProjectileDetection___c___ctor (Characters_TitanProjectileDetection___c_o* __this, const MethodInfo* method);
// 0x4321830

void Characters_TitanProjectileDetection___c___ctor
               (Characters_TitanProjectileDetection___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.TitanProjectileDetection.<>c$$<FixedUpdate>b__8_0
// il2cpp: bool Characters_TitanProjectileDetection___c___FixedUpdate_b__8_0 (Characters_TitanProjectileDetection___c_o* __this, Characters_Hook_o* hook, const MethodInfo* method);
// 0x4321840

bool_conflict
Characters_TitanProjectileDetection___c___FixedUpdate_b__8_0
          (Characters_TitanProjectileDetection___c_o *__this,Characters_Hook_o *hook,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  uint uVar3;
  bool_conflict extraout_EAX;
  long lVar4;
  Characters_Hook_o *pCVar5;
  Characters_Hook_o *pCVar6;
  Il2CppObject *__this_00;
  
  if (g_data_057ae003 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae003 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar5 = hook;
  bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)hook,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (hook != (Characters_Hook_o *)0x0) {
      uVar3 = (hook->fields).State - 1;
      return CONCAT31((int3)(uVar3 >> 8),1 < uVar3);
    }
    il2cpp_runtime_helper_022b2c90();
    if (pCVar5 == (Characters_Hook_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      pCVar6 = pCVar5;
    }
    else {
      pCVar6 = (Characters_Hook_o *)0x0;
      uVar3 = UnityEngine_Random__Range_4df2410
                        (0,*(int32_t *)&(pCVar5->fields).m_CancellationTokenSource,(MethodInfo *)0x0);
      if (uVar3 < *(uint *)&(pCVar5->fields).m_CancellationTokenSource) {
        return (bool_conflict)*(undefined8 *)(&(pCVar5->fields).State + (long)(int)uVar3 * 2);
      }
    }
    il2cpp_runtime_helper_022b2ca0();
    if (pCVar6 == (Characters_Hook_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      uVar3 = UnityEngine_Random__Range_4df2410
                        (0,*(int32_t *)&(pCVar6->fields).m_CancellationTokenSource,(MethodInfo *)0x0);
      if (uVar3 < *(uint *)&(pCVar6->fields).m_CancellationTokenSource) {
        return (bool_conflict)*(undefined8 *)(&(pCVar6->fields).State + (long)(int)uVar3 * 2);
      }
    }
    il2cpp_runtime_helper_022b2ca0();
    if (g_data_057ae004 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
      g_data_057ae004 = '\x01';
      iVar1 = *(int *)((long)&TypeInfo_TitanSounds[0xe].klass + 4);
    }
    else {
      iVar1 = *(int *)((long)&TypeInfo_TitanSounds[0xe].klass + 4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar4 = *(long *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x158);
    }
    else {
      lVar4 = *(long *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x158);
    }
    if (lVar4 == 0) {
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      uVar3 = UnityEngine_Random__Range_4df2410(0,*(int32_t *)(lVar4 + 0x18),(MethodInfo *)0x0);
      if (uVar3 < *(uint *)(lVar4 + 0x18)) {
        return (bool_conflict)*(undefined8 *)(lVar4 + 0x20 + (long)(int)uVar3 * 8);
      }
    }
    il2cpp_runtime_helper_022b2ca0();
    if (g_data_057ae005 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_string);
      il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
      g_data_057ae005 = '\x01';
    }
    lVar4 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,8);
    if (*(int *)((long)&TypeInfo_TitanSounds[0xe].klass + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x18) != 0) {
        *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x30);
        il2cpp_runtime_helper_022b4080(lVar4 + 0x20);
        if (1 < *(uint *)(lVar4 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x38);
          il2cpp_runtime_helper_022b4080(lVar4 + 0x28);
          if (2 < *(uint *)(lVar4 + 0x18)) {
            *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x40);
            il2cpp_runtime_helper_022b4080(lVar4 + 0x30);
            if (3 < *(uint *)(lVar4 + 0x18)) {
              *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x48);
              il2cpp_runtime_helper_022b4080(lVar4 + 0x38);
              if (4 < *(uint *)(lVar4 + 0x18)) {
                *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x50);
                il2cpp_runtime_helper_022b4080(lVar4 + 0x40);
                if (5 < *(uint *)(lVar4 + 0x18)) {
                  *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x58);
                  il2cpp_runtime_helper_022b4080(lVar4 + 0x48);
                  if (6 < *(uint *)(lVar4 + 0x18)) {
                    *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x60);
                    il2cpp_runtime_helper_022b4080(lVar4 + 0x50);
                    if (7 < *(uint *)(lVar4 + 0x18)) {
                      *(undefined8 *)(lVar4 + 0x58) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x68);
                      il2cpp_runtime_helper_022b4080();
                      uVar3 = UnityEngine_Random__Range_4df2410
                                        (0,*(int32_t *)(lVar4 + 0x18),(MethodInfo *)0x0);
                      if (uVar3 < *(uint *)(lVar4 + 0x18)) {
                        return (bool_conflict)*(undefined8 *)(lVar4 + 0x20 + (long)(int)uVar3 * 8);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2ca0();
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae006 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_string);
      il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
      g_data_057ae006 = '\x01';
    }
    lVar4 = il2cpp_runtime_helper_022b2a40(TypeInfo_string);
    if (*(int *)((long)&TypeInfo_TitanSounds[0xe].klass + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = TypeInfo_TitanSounds;
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x18) != 0) {
        __this_00 = (Il2CppObject *)(lVar4 + 0x20);
        *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x70);
        il2cpp_runtime_helper_022b4080();
        if (1 < *(uint *)(lVar4 + 0x18)) {
          __this_00 = (Il2CppObject *)(lVar4 + 0x28);
          *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x78);
          il2cpp_runtime_helper_022b4080();
          if (2 < *(uint *)(lVar4 + 0x18)) {
            __this_00 = (Il2CppObject *)(lVar4 + 0x30);
            *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x80);
            il2cpp_runtime_helper_022b4080();
            if (3 < *(uint *)(lVar4 + 0x18)) {
              __this_00 = (Il2CppObject *)(lVar4 + 0x38);
              *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x88);
              il2cpp_runtime_helper_022b4080();
              if (4 < *(uint *)(lVar4 + 0x18)) {
                __this_00 = (Il2CppObject *)(lVar4 + 0x40);
                *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x90);
                il2cpp_runtime_helper_022b4080();
                if (5 < *(uint *)(lVar4 + 0x18)) {
                  __this_00 = (Il2CppObject *)(lVar4 + 0x48);
                  *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0x98);
                  il2cpp_runtime_helper_022b4080();
                  if (6 < *(uint *)(lVar4 + 0x18)) {
                    __this_00 = (Il2CppObject *)(lVar4 + 0x50);
                    *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0xa0);
                    il2cpp_runtime_helper_022b4080();
                    if (7 < *(uint *)(lVar4 + 0x18)) {
                      __this_00 = (Il2CppObject *)(lVar4 + 0x58);
                      *(undefined8 *)(lVar4 + 0x58) = *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0xa8);
                      il2cpp_runtime_helper_022b4080();
                      if (8 < *(uint *)(lVar4 + 0x18)) {
                        __this_00 = (Il2CppObject *)(lVar4 + 0x60);
                        *(undefined8 *)(lVar4 + 0x60) =
                             *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0xb0);
                        il2cpp_runtime_helper_022b4080();
                        if (9 < *(uint *)(lVar4 + 0x18)) {
                          *(undefined8 *)(lVar4 + 0x68) =
                               *(undefined8 *)((long)TypeInfo_TitanSounds[0xb].monitor + 0xb8);
                          il2cpp_runtime_helper_022b4080();
                          __this_00 = (Il2CppObject *)0x0;
                          uVar3 = UnityEngine_Random__Range_4df2410
                                            (0,*(int32_t *)(lVar4 + 0x18),(MethodInfo *)0x0);
                          if (uVar3 < *(uint *)(lVar4 + 0x18)) {
                            return (bool_conflict)*(undefined8 *)(lVar4 + 0x20 + (long)(int)uVar3 * 8);
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
      }
      il2cpp_runtime_helper_022b2ca0();
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar2 >> 8),1);
}


// Characters.TitanProjectileDetection$$Create
// il2cpp: Characters_TitanProjectileDetection_o* Characters_TitanProjectileDetection__Create (Characters_BaseTitan_o* owner, const MethodInfo* method);
// 0x4320ca0

Characters_TitanProjectileDetection_o *
Characters_TitanProjectileDetection__Create(Characters_BaseTitan_o *owner,MethodInfo *method)

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
  UnityEngine_GameObject_o *__this_05;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Transform_o *p;
  Characters_TitanProjectileDetection_o *pCVar6;
  UnityEngine_GameObject_o *__this_06;
  long *plVar7;
  uint value;
  UnityEngine_GameObject_o *pUVar8;
  float value_00;
  UnityEngine_Vector3_o value_01;
  undefined1 auVar9 [12];
  undefined1 in_stack_ffffffffffffff80 [12];
  uint in_stack_ffffffffffffff8c;
  Il2CppObject *pIVar10;
  
  if (g_data_057adffc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CapsuleCollider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SphereCollider_AddComponent_SphereCollider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TitanProjectileDetection_AddComponent_TitanProjectileDet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    g_data_057adffc = '\x01';
  }
  __this_05 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
  value = 0;
  pUVar8 = __this_05;
  UnityEngine_GameObject___ctor_4dfc3c0(__this_05,(MethodInfo *)0x0);
  if (((owner != (Characters_BaseTitan_o *)0x0) &&
      (pSVar2 = (owner->fields).OnPlayerPropertiesChanged, pSVar2 != (System_Action_Hashtable__o *)0x0)) &&
     (__this_05 != (UnityEngine_GameObject_o *)0x0)) {
    __this = *(UnityEngine_Component_o **)&(pSVar2->fields).method_is_virtual;
    value = 0;
    pUVar8 = __this_05;
    pUVar5 = UnityEngine_GameObject__get_transform(__this_05,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Component_o *)0x0) {
      value = 0;
      pUVar8 = (UnityEngine_GameObject_o *)__this;
      p = UnityEngine_Component__get_transform(__this,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(pUVar5,p,(MethodInfo *)0x0);
        value = 0;
        pUVar8 = __this_05;
        pUVar5 = UnityEngine_GameObject__get_transform(__this_05,(MethodInfo *)0x0);
        if (g_data_057a65d5 == '\0') {
          pUVar8 = (UnityEngine_GameObject_o *)&TypeInfo_Vector3;
          il2cpp_runtime_helper_023445d0();
          g_data_057a65d5 = '\x01';
        }
        if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_localPosition
                    (pUVar5,(UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
                     (MethodInfo *)0x0);
          pCVar6 = (Characters_TitanProjectileDetection_o *)
                   UnityEngine_GameObject__AddComponent_object_(__this_05,MethodInfo_TitanProjectileDetection_AddComponent_TitanProjectileDet);
          if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          value = *(uint *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x20);
          __this_06 = __this_05;
          UnityEngine_GameObject__set_layer(__this_05,value,(MethodInfo *)0x0);
          bVar1 = (TypeInfo_CapsuleCollider->_2).naturalAligment;
          if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
             ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CapsuleCollider)) {
            __this_06 = (UnityEngine_GameObject_o *)
                        UnityEngine_GameObject__AddComponent_object_(__this_05,MethodInfo_SphereCollider_AddComponent_SphereCollider);
            value = 0;
            pUVar8 = (UnityEngine_GameObject_o *)__this;
            value_01 = UnityEngine_CapsuleCollider__get_center
                                 ((UnityEngine_CapsuleCollider_o *)__this,(MethodInfo *)0x0);
            if (__this_06 == (UnityEngine_GameObject_o *)0x0) goto label_04320eab;
            UnityEngine_SphereCollider__set_center
                      ((UnityEngine_SphereCollider_o *)__this_06,value_01,(MethodInfo *)0x0);
            value_00 = UnityEngine_CapsuleCollider__get_height
                                 ((UnityEngine_CapsuleCollider_o *)__this,(MethodInfo *)0x0);
            UnityEngine_SphereCollider__set_radius
                      ((UnityEngine_SphereCollider_o *)__this_06,value_00,(MethodInfo *)0x0);
            value = 1;
            UnityEngine_Collider__set_isTrigger((UnityEngine_Collider_o *)__this_06,1,(MethodInfo *)0x0);
          }
          pUVar8 = __this_06;
          if (pCVar6 != (Characters_TitanProjectileDetection_o *)0x0) {
            (pCVar6->fields).Owner = owner;
            il2cpp_runtime_helper_022b4080(&(pCVar6->fields).Owner,owner);
            return pCVar6;
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
  pIVar10 = (Il2CppObject *)0x0;
  if (((((UnityEngine_Component_o *)(pUVar8 + 1))->monitor != (void *)0x0) &&
      (lVar3 = *(long *)((long)((UnityEngine_Component_o *)(pUVar8 + 1))->monitor + 0xf8), lVar3 != 0)) &&
     (__this_00 = *(System_Collections_Generic_List_object__o **)(lVar3 + 0xe8),
     __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff90,__this_00,
               MethodInfo_List_1_T_Enumerator_UnityEngine_Collider_GetEnumerator);
    do {
      __this_01.fields._version = value;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff80._0_8_;
      __this_01.fields._index = in_stack_ffffffffffffff80._8_4_;
      __this_01.fields._current = pIVar10;
      bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff90);
      if ((char)bVar4 == '\0') {
        __this_02.fields._version = value;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff80._0_8_;
        __this_02.fields._index = in_stack_ffffffffffffff80._8_4_;
        __this_02.fields._current = pIVar10;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff90);
        goto label_04320fdd;
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)0x0,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    } while ((char)bVar4 == '\0');
    il2cpp_runtime_helper_022b2c90();
    in_stack_ffffffffffffff8c = value;
  }
  auVar9 = il2cpp_runtime_helper_022b2c90();
  if (auVar9._8_4_ == 1) {
    plVar7 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar3 = *plVar7;
    __cxa_end_catch();
    __this_03.fields._version = in_stack_ffffffffffffff8c;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff80._0_8_;
    __this_03.fields._index = in_stack_ffffffffffffff80._8_4_;
    __this_03.fields._current = pIVar10;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff90);
    value = in_stack_ffffffffffffff8c;
    if (lVar3 == 0) {
label_04320fdd:
      *(char *)((long)&((UnityEngine_Component_o *)(pUVar8 + 2))->monitor + 1) = (char)value;
      return (Characters_TitanProjectileDetection_o *)(ulong)value;
    }
    il2cpp_runtime_helper_022fefe0(lVar3);
  }
  __this_04.fields._version = in_stack_ffffffffffffff8c;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff80._0_8_;
  __this_04.fields._index = in_stack_ffffffffffffff80._8_4_;
  __this_04.fields._current = pIVar10;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff90);
  _Unwind_Resume(auVar9._0_8_);
}


// Characters.TitanProjectileDetection$$RegisterHook
// il2cpp: void Characters_TitanProjectileDetection__RegisterHook (Characters_TitanProjectileDetection_o* __this, Characters_Hook_o* hook, const MethodInfo* method);
// 0x43212d0

void Characters_TitanProjectileDetection__RegisterHook
               (Characters_TitanProjectileDetection_o *__this,Characters_Hook_o *hook,MethodInfo *method)

{
  Photon_Pun_PhotonView_o **ppPVar1;
  long lVar2;
  bool_conflict bVar3;
  Projectiles_BaseProjectile_o *__this_00;
  Projectiles_BaseProjectile_o *pPVar4;
  UnityEngine_GameObject_o *pUVar5;
  Projectiles_BaseProjectile_o *pPVar6;
  UnityEngine_Transform_o *__this_01;
  Photon_Pun_PhotonView_o *pPVar7;
  System_Predicate_T__o *match;
  System_Collections_Generic_HashSet_object__o *__this_02;
  Projectiles_BaseProjectile_o *__this_03;
  Projectiles_BaseProjectile_o *pPVar8;
  
  pPVar4 = (Projectiles_BaseProjectile_o *)hook;
  if (g_data_057adffd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    g_data_057adffd = '\x01';
  }
  pPVar6 = (Projectiles_BaseProjectile_o *)(__this->fields)._hooks;
  if (pPVar6 != (Projectiles_BaseProjectile_o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)pPVar6,(Il2CppObject *)hook,MethodInfo_Boolean_Add);
    *(undefined1 *)&(__this->fields).Detect = 1;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_03 = pPVar4;
  pPVar8 = pPVar6;
  if (g_data_057adffe == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseProjectile_GetComponent_BaseProjectile);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    pPVar8 = (Projectiles_BaseProjectile_o *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057adffe = '\x01';
  }
  if (pPVar4 != (Projectiles_BaseProjectile_o *)0x0) {
    __this_03 = (Projectiles_BaseProjectile_o *)0x0;
    __this_00 = (Projectiles_BaseProjectile_o *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)pPVar4,(MethodInfo *)0x0);
    pPVar8 = pPVar4;
    if (__this_00 != (Projectiles_BaseProjectile_o *)0x0) {
      __this_03 = (Projectiles_BaseProjectile_o *)0x0;
      pPVar4 = (Projectiles_BaseProjectile_o *)
               UnityEngine_Transform__get_root((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
      pPVar8 = __this_00;
      if (pPVar4 != (Projectiles_BaseProjectile_o *)0x0) {
        __this_03 = (Projectiles_BaseProjectile_o *)0x0;
        pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pPVar4,(MethodInfo *)0x0);
        pPVar8 = pPVar4;
        if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
          pPVar4 = (Projectiles_BaseProjectile_o *)
                   UnityEngine_GameObject__GetComponent_object_(pUVar5,MethodInfo_BaseProjectile_GetComponent_BaseProjectile);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_03 = (Projectiles_BaseProjectile_o *)0x0;
          pPVar8 = pPVar4;
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pPVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar3 == '\0') {
            return;
          }
          if (pPVar4 != (Projectiles_BaseProjectile_o *)0x0) {
            __this_03 = (Projectiles_BaseProjectile_o *)0x0;
            bVar3 = Projectiles_BaseProjectile__IsMine(pPVar4,(MethodInfo *)0x0);
            if ((char)bVar3 == '\0') {
              return;
            }
            pPVar7 = (pPVar6->fields).pvCache;
            pPVar8 = (Projectiles_BaseProjectile_o *)0x0;
            if (pPVar7 != (Photon_Pun_PhotonView_o *)0x0) {
              System_Collections_Generic_HashSet_object___Add
                        ((System_Collections_Generic_HashSet_object__o *)pPVar7,(Il2CppObject *)pUVar5,
                         MethodInfo_Boolean_Add);
              *(undefined1 *)&(pPVar6->fields)._correctRotation.fields.x = 1;
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pPVar4 = pPVar8;
  if (g_data_057adfff == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pPVar4 = (Projectiles_BaseProjectile_o *)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057adfff = '\x01';
  }
  if (((__this_03 != (Projectiles_BaseProjectile_o *)0x0) &&
      (pPVar6 = (Projectiles_BaseProjectile_o *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0),
      pPVar4 = __this_03, pPVar6 != (Projectiles_BaseProjectile_o *)0x0)) &&
     (__this_01 = UnityEngine_Transform__get_root((UnityEngine_Transform_o *)pPVar6,(MethodInfo *)0x0),
     pPVar4 = pPVar6, __this_01 != (UnityEngine_Transform_o *)0x0)) {
    pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
    pPVar4 = (Projectiles_BaseProjectile_o *)(pPVar8->fields).pvCache;
    if (pPVar4 != (Projectiles_BaseProjectile_o *)0x0) {
      bVar3 = System_Collections_Generic_HashSet_object___Contains
                        ((System_Collections_Generic_HashSet_object__o *)pPVar4,(Il2CppObject *)pUVar5,
                         MethodInfo_Boolean_Contains);
      if ((char)bVar3 != '\0') {
        pPVar4 = (Projectiles_BaseProjectile_o *)(pPVar8->fields).pvCache;
        if (pPVar4 == (Projectiles_BaseProjectile_o *)0x0) goto label_0432151f;
        System_Collections_Generic_HashSet_object___Remove
                  ((System_Collections_Generic_HashSet_object__o *)pPVar4,(Il2CppObject *)pUVar5,MethodInfo_Boolean_Remove)
        ;
      }
      pPVar7 = (pPVar8->fields).pvCache;
      if (pPVar7 != (Photon_Pun_PhotonView_o *)0x0) {
        if (*(int *)&(pPVar7->fields).Group != 0) {
          return;
        }
        lVar2 = *(long *)&(pPVar8->fields).Disabled;
        if (lVar2 != 0) {
          if (*(int *)(lVar2 + 0x20) != 0) {
            return;
          }
          *(undefined1 *)&(pPVar8->fields)._correctRotation.fields.x = 0;
          return;
        }
      }
    }
  }
label_0432151f:
  il2cpp_runtime_helper_022b2c90();
  pPVar6 = pPVar4;
  if (g_data_057ae000 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_RemoveWhere);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Predicate_Hook);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_FixedUpdate_b__8_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_GameObject_RemoveNull_GameObject);
    pPVar6 = (Projectiles_BaseProjectile_o *)&TypeInfo_Util;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae000 = '\x01';
  }
  pPVar7 = (pPVar4->fields).pvCache;
  if (pPVar7 != (Photon_Pun_PhotonView_o *)0x0) {
    ppPVar1 = &(pPVar4->fields).pvCache;
    if (0 < *(int *)&(pPVar7->fields).Group) {
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pPVar7 = (Photon_Pun_PhotonView_o *)
               Utility_Util__RemoveNull_object_
                         ((System_Collections_Generic_HashSet_T__o *)pPVar7,MethodInfo_HashSet_1_UnityEngine_GameObject_RemoveNull_GameObject);
      *ppPVar1 = pPVar7;
      pPVar6 = (Projectiles_BaseProjectile_o *)ppPVar1;
      il2cpp_runtime_helper_022b4080(ppPVar1,pPVar7);
    }
    pPVar8 = *(Projectiles_BaseProjectile_o **)&(pPVar4->fields).Disabled;
    if (pPVar8 != (Projectiles_BaseProjectile_o *)0x0) {
      if (0 < *(int *)&(pPVar8->fields).pvCache) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          match = *(System_Predicate_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        else {
          match = *(System_Predicate_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        if (match == (System_Predicate_T__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          match = (System_Predicate_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Predicate_Hook);
          System_Predicate_object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Predicate_T__o **)(lVar2 + 8) = match;
          il2cpp_runtime_helper_022b4080(lVar2 + 8,match);
        }
        System_Collections_Generic_HashSet_object___RemoveWhere
                  ((System_Collections_Generic_HashSet_object__o *)pPVar8,match,MethodInfo_Int32_RemoveWhere);
        pPVar6 = pPVar8;
      }
      if (*ppPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
        if (*(int *)&((*ppPVar1)->fields).Group == 0) {
          lVar2 = *(long *)&(pPVar4->fields).Disabled;
          if (lVar2 == 0) goto label_043216fb;
          if (*(int *)(lVar2 + 0x20) == 0) {
            *(undefined1 *)&(pPVar4->fields)._correctRotation.fields.x = 0;
          }
        }
        return;
      }
    }
  }
label_043216fb:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae001 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Characters_Hook);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_Hook);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_GameObject);
    g_data_057ae001 = '\x01';
  }
  pPVar7 = (Photon_Pun_PhotonView_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_GameObject);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pPVar7,MethodInfo_HashSet_1_UnityEngine_GameObject);
  (pPVar6->fields).pvCache = pPVar7;
  il2cpp_runtime_helper_022b4080(&(pPVar6->fields).pvCache,pPVar7);
  __this_02 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_Hook);
  System_Collections_Generic_HashSet_object____ctor(__this_02,_DAT_0558db78);
  *(System_Collections_Generic_HashSet_object__o **)&(pPVar6->fields).Disabled = __this_02;
  il2cpp_runtime_helper_022b4080(&(pPVar6->fields).Disabled);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pPVar6,(MethodInfo *)0x0);
  return;
}


// Characters.TitanProjectileDetection$$OnTriggerEnter
// il2cpp: void Characters_TitanProjectileDetection__OnTriggerEnter (Characters_TitanProjectileDetection_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x4321330

void Characters_TitanProjectileDetection__OnTriggerEnter
               (Characters_TitanProjectileDetection_o *__this,UnityEngine_Collider_o *other,MethodInfo *method
               )

{
  Photon_Pun_PhotonView_o **ppPVar1;
  long lVar2;
  bool_conflict bVar3;
  Projectiles_BaseProjectile_o *pPVar4;
  Projectiles_BaseProjectile_o *pPVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Transform_o *__this_00;
  Photon_Pun_PhotonView_o *pPVar7;
  System_Predicate_T__o *match;
  System_Collections_Generic_HashSet_object__o *pSVar8;
  Projectiles_BaseProjectile_o *pPVar9;
  Projectiles_BaseProjectile_o *pPVar10;
  
  pPVar9 = (Projectiles_BaseProjectile_o *)other;
  pPVar10 = (Projectiles_BaseProjectile_o *)__this;
  if (g_data_057adffe == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseProjectile_GetComponent_BaseProjectile);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    pPVar10 = (Projectiles_BaseProjectile_o *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057adffe = '\x01';
  }
  if (other != (UnityEngine_Collider_o *)0x0) {
    pPVar9 = (Projectiles_BaseProjectile_o *)0x0;
    pPVar4 = (Projectiles_BaseProjectile_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
    pPVar10 = (Projectiles_BaseProjectile_o *)other;
    if (pPVar4 != (Projectiles_BaseProjectile_o *)0x0) {
      pPVar9 = (Projectiles_BaseProjectile_o *)0x0;
      pPVar5 = (Projectiles_BaseProjectile_o *)
               UnityEngine_Transform__get_root((UnityEngine_Transform_o *)pPVar4,(MethodInfo *)0x0);
      pPVar10 = pPVar4;
      if (pPVar5 != (Projectiles_BaseProjectile_o *)0x0) {
        pPVar9 = (Projectiles_BaseProjectile_o *)0x0;
        pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pPVar5,(MethodInfo *)0x0);
        pPVar10 = pPVar5;
        if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
          pPVar4 = (Projectiles_BaseProjectile_o *)
                   UnityEngine_GameObject__GetComponent_object_(pUVar6,MethodInfo_BaseProjectile_GetComponent_BaseProjectile);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pPVar9 = (Projectiles_BaseProjectile_o *)0x0;
          pPVar10 = pPVar4;
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pPVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar3 == '\0') {
            return;
          }
          if (pPVar4 != (Projectiles_BaseProjectile_o *)0x0) {
            pPVar9 = (Projectiles_BaseProjectile_o *)0x0;
            bVar3 = Projectiles_BaseProjectile__IsMine(pPVar4,(MethodInfo *)0x0);
            if ((char)bVar3 == '\0') {
              return;
            }
            pSVar8 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._entities;
            pPVar10 = (Projectiles_BaseProjectile_o *)0x0;
            if (pSVar8 != (System_Collections_Generic_HashSet_object__o *)0x0) {
              System_Collections_Generic_HashSet_object___Add(pSVar8,(Il2CppObject *)pUVar6,MethodInfo_Boolean_Add);
              *(undefined1 *)&(__this->fields).Detect = 1;
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pPVar4 = pPVar10;
  if (g_data_057adfff == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pPVar4 = (Projectiles_BaseProjectile_o *)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057adfff = '\x01';
  }
  if (((pPVar9 != (Projectiles_BaseProjectile_o *)0x0) &&
      (pPVar5 = (Projectiles_BaseProjectile_o *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)pPVar9,(MethodInfo *)0x0),
      pPVar4 = pPVar9, pPVar5 != (Projectiles_BaseProjectile_o *)0x0)) &&
     (__this_00 = UnityEngine_Transform__get_root((UnityEngine_Transform_o *)pPVar5,(MethodInfo *)0x0),
     pPVar4 = pPVar5, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    pPVar4 = (Projectiles_BaseProjectile_o *)(pPVar10->fields).pvCache;
    if (pPVar4 != (Projectiles_BaseProjectile_o *)0x0) {
      bVar3 = System_Collections_Generic_HashSet_object___Contains
                        ((System_Collections_Generic_HashSet_object__o *)pPVar4,(Il2CppObject *)pUVar6,
                         MethodInfo_Boolean_Contains);
      if ((char)bVar3 != '\0') {
        pPVar4 = (Projectiles_BaseProjectile_o *)(pPVar10->fields).pvCache;
        if (pPVar4 == (Projectiles_BaseProjectile_o *)0x0) goto label_0432151f;
        System_Collections_Generic_HashSet_object___Remove
                  ((System_Collections_Generic_HashSet_object__o *)pPVar4,(Il2CppObject *)pUVar6,MethodInfo_Boolean_Remove)
        ;
      }
      pPVar7 = (pPVar10->fields).pvCache;
      if (pPVar7 != (Photon_Pun_PhotonView_o *)0x0) {
        if (*(int *)&(pPVar7->fields).Group != 0) {
          return;
        }
        lVar2 = *(long *)&(pPVar10->fields).Disabled;
        if (lVar2 != 0) {
          if (*(int *)(lVar2 + 0x20) != 0) {
            return;
          }
          *(undefined1 *)&(pPVar10->fields)._correctRotation.fields.x = 0;
          return;
        }
      }
    }
  }
label_0432151f:
  il2cpp_runtime_helper_022b2c90();
  pPVar10 = pPVar4;
  if (g_data_057ae000 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_RemoveWhere);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Predicate_Hook);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_FixedUpdate_b__8_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_GameObject_RemoveNull_GameObject);
    pPVar10 = (Projectiles_BaseProjectile_o *)&TypeInfo_Util;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae000 = '\x01';
  }
  pPVar7 = (pPVar4->fields).pvCache;
  if (pPVar7 != (Photon_Pun_PhotonView_o *)0x0) {
    ppPVar1 = &(pPVar4->fields).pvCache;
    if (0 < *(int *)&(pPVar7->fields).Group) {
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pPVar7 = (Photon_Pun_PhotonView_o *)
               Utility_Util__RemoveNull_object_
                         ((System_Collections_Generic_HashSet_T__o *)pPVar7,MethodInfo_HashSet_1_UnityEngine_GameObject_RemoveNull_GameObject);
      *ppPVar1 = pPVar7;
      pPVar10 = (Projectiles_BaseProjectile_o *)ppPVar1;
      il2cpp_runtime_helper_022b4080(ppPVar1,pPVar7);
    }
    pPVar9 = *(Projectiles_BaseProjectile_o **)&(pPVar4->fields).Disabled;
    if (pPVar9 != (Projectiles_BaseProjectile_o *)0x0) {
      if (0 < *(int *)&(pPVar9->fields).pvCache) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          match = *(System_Predicate_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        else {
          match = *(System_Predicate_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        if (match == (System_Predicate_T__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          match = (System_Predicate_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Predicate_Hook);
          System_Predicate_object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Predicate_T__o **)(lVar2 + 8) = match;
          il2cpp_runtime_helper_022b4080(lVar2 + 8,match);
        }
        System_Collections_Generic_HashSet_object___RemoveWhere
                  ((System_Collections_Generic_HashSet_object__o *)pPVar9,match,MethodInfo_Int32_RemoveWhere);
        pPVar10 = pPVar9;
      }
      if (*ppPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
        if (*(int *)&((*ppPVar1)->fields).Group == 0) {
          lVar2 = *(long *)&(pPVar4->fields).Disabled;
          if (lVar2 == 0) goto label_043216fb;
          if (*(int *)(lVar2 + 0x20) == 0) {
            *(undefined1 *)&(pPVar4->fields)._correctRotation.fields.x = 0;
          }
        }
        return;
      }
    }
  }
label_043216fb:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae001 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Characters_Hook);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_Hook);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_GameObject);
    g_data_057ae001 = '\x01';
  }
  pPVar7 = (Photon_Pun_PhotonView_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_GameObject);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pPVar7,MethodInfo_HashSet_1_UnityEngine_GameObject);
  (pPVar10->fields).pvCache = pPVar7;
  il2cpp_runtime_helper_022b4080(&(pPVar10->fields).pvCache,pPVar7);
  pSVar8 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_Hook);
  System_Collections_Generic_HashSet_object____ctor(pSVar8,_DAT_0558db78);
  *(System_Collections_Generic_HashSet_object__o **)&(pPVar10->fields).Disabled = pSVar8;
  il2cpp_runtime_helper_022b4080(&(pPVar10->fields).Disabled);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pPVar10,(MethodInfo *)0x0);
  return;
}


// Characters.TitanProjectileDetection$$OnTriggerExit
// il2cpp: void Characters_TitanProjectileDetection__OnTriggerExit (Characters_TitanProjectileDetection_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x4321430

void Characters_TitanProjectileDetection__OnTriggerExit
               (Characters_TitanProjectileDetection_o *__this,UnityEngine_Collider_o *other,MethodInfo *method
               )

{
  int32_t *piVar1;
  System_Collections_Generic_HashSet_GameObject__o *pSVar2;
  System_Collections_Generic_HashSet_Hook__o *pSVar3;
  long lVar4;
  bool_conflict bVar5;
  System_Collections_Generic_HashSet_object__o *pSVar6;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_GameObject_o *item;
  System_Collections_Generic_HashSet_T__o *pSVar7;
  System_Predicate_T__o *match;
  System_Collections_Generic_HashSet_object__o *pSVar8;
  System_Collections_Generic_HashSet_object__o *__this_01;
  
  pSVar8 = (System_Collections_Generic_HashSet_object__o *)__this;
  if (g_data_057adfff == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pSVar8 = (System_Collections_Generic_HashSet_object__o *)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057adfff = '\x01';
  }
  if (((other != (UnityEngine_Collider_o *)0x0) &&
      (pSVar6 = (System_Collections_Generic_HashSet_object__o *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)other,(MethodInfo *)0x0),
      pSVar8 = (System_Collections_Generic_HashSet_object__o *)other,
      pSVar6 != (System_Collections_Generic_HashSet_object__o *)0x0)) &&
     (__this_00 = UnityEngine_Transform__get_root((UnityEngine_Transform_o *)pSVar6,(MethodInfo *)0x0),
     pSVar8 = pSVar6, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    item = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    pSVar8 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._entities;
    if (pSVar8 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar5 = System_Collections_Generic_HashSet_object___Contains(pSVar8,(Il2CppObject *)item,MethodInfo_Boolean_Contains);
      if ((char)bVar5 != '\0') {
        pSVar8 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._entities;
        if (pSVar8 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0432151f;
        System_Collections_Generic_HashSet_object___Remove(pSVar8,(Il2CppObject *)item,MethodInfo_Boolean_Remove);
      }
      pSVar2 = (__this->fields)._entities;
      if (pSVar2 != (System_Collections_Generic_HashSet_GameObject__o *)0x0) {
        if ((pSVar2->fields)._count != 0) {
          return;
        }
        pSVar3 = (__this->fields)._hooks;
        if (pSVar3 != (System_Collections_Generic_HashSet_Hook__o *)0x0) {
          if ((pSVar3->fields)._count != 0) {
            return;
          }
          *(undefined1 *)&(__this->fields).Detect = 0;
          return;
        }
      }
    }
  }
label_0432151f:
  il2cpp_runtime_helper_022b2c90();
  pSVar6 = pSVar8;
  if (g_data_057ae000 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_RemoveWhere);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Predicate_Hook);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_FixedUpdate_b__8_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_GameObject_RemoveNull_GameObject);
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)&TypeInfo_Util;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae000 = '\x01';
  }
  pSVar7 = *(System_Collections_Generic_HashSet_T__o **)&(pSVar8->fields)._count;
  if (pSVar7 != (System_Collections_Generic_HashSet_T__o *)0x0) {
    piVar1 = &(pSVar8->fields)._count;
    if (0 < (pSVar7->fields)._count) {
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = Utility_Util__RemoveNull_object_(pSVar7,MethodInfo_HashSet_1_UnityEngine_GameObject_RemoveNull_GameObject);
      *(System_Collections_Generic_HashSet_T__o **)piVar1 = pSVar7;
      pSVar6 = (System_Collections_Generic_HashSet_object__o *)piVar1;
      il2cpp_runtime_helper_022b4080(piVar1,pSVar7);
    }
    __this_01 = *(System_Collections_Generic_HashSet_object__o **)&(pSVar8->fields)._freeList;
    if (__this_01 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      if (0 < (__this_01->fields)._count) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          match = *(System_Predicate_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        else {
          match = *(System_Predicate_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        if (match == (System_Predicate_T__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          match = (System_Predicate_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Predicate_Hook);
          System_Predicate_object____ctor();
          lVar4 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Predicate_T__o **)(lVar4 + 8) = match;
          il2cpp_runtime_helper_022b4080(lVar4 + 8,match);
        }
        System_Collections_Generic_HashSet_object___RemoveWhere(__this_01,match,MethodInfo_Int32_RemoveWhere);
        pSVar6 = __this_01;
      }
      if (*(long *)piVar1 != 0) {
        if (*(int *)(*(long *)piVar1 + 0x20) == 0) {
          lVar4 = *(long *)&(pSVar8->fields)._freeList;
          if (lVar4 == 0) goto label_043216fb;
          if (*(int *)(lVar4 + 0x20) == 0) {
            *(undefined1 *)&(pSVar8->fields)._version = 0;
          }
        }
        return;
      }
    }
  }
label_043216fb:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae001 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Characters_Hook);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_Hook);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_GameObject);
    g_data_057ae001 = '\x01';
  }
  pSVar8 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_GameObject);
  System_Collections_Generic_HashSet_object____ctor(pSVar8,MethodInfo_HashSet_1_UnityEngine_GameObject);
  *(System_Collections_Generic_HashSet_object__o **)&(pSVar6->fields)._count = pSVar8;
  il2cpp_runtime_helper_022b4080(&(pSVar6->fields)._count,pSVar8);
  pSVar8 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_Hook);
  System_Collections_Generic_HashSet_object____ctor(pSVar8,_DAT_0558db78);
  *(System_Collections_Generic_HashSet_object__o **)&(pSVar6->fields)._freeList = pSVar8;
  il2cpp_runtime_helper_022b4080(&(pSVar6->fields)._freeList);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pSVar6,(MethodInfo *)0x0);
  return;
}


// Characters.TitanProjectileDetection$$FixedUpdate
// il2cpp: void Characters_TitanProjectileDetection__FixedUpdate (Characters_TitanProjectileDetection_o* __this, const MethodInfo* method);
// 0x4321530

void Characters_TitanProjectileDetection__FixedUpdate
               (Characters_TitanProjectileDetection_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_GameObject__o **ppSVar1;
  long lVar2;
  System_Collections_Generic_HashSet_Hook__o *pSVar3;
  System_Collections_Generic_HashSet_GameObject__o *pSVar4;
  System_Predicate_T__o *match;
  System_Collections_Generic_HashSet_object__o *pSVar5;
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  __this_00 = (System_Collections_Generic_HashSet_object__o *)__this;
  if (g_data_057ae000 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_RemoveWhere);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Predicate_Hook);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_FixedUpdate_b__8_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_GameObject_RemoveNull_GameObject);
    __this_00 = (System_Collections_Generic_HashSet_object__o *)&TypeInfo_Util;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae000 = '\x01';
  }
  pSVar4 = (__this->fields)._entities;
  if (pSVar4 != (System_Collections_Generic_HashSet_GameObject__o *)0x0) {
    ppSVar1 = &(__this->fields)._entities;
    if (0 < ((System_Collections_Generic_HashSet_T__Fields *)&pSVar4->fields)->_count) {
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar4 = (System_Collections_Generic_HashSet_GameObject__o *)
               Utility_Util__RemoveNull_object_
                         ((System_Collections_Generic_HashSet_T__o *)pSVar4,MethodInfo_HashSet_1_UnityEngine_GameObject_RemoveNull_GameObject);
      *ppSVar1 = pSVar4;
      __this_00 = (System_Collections_Generic_HashSet_object__o *)ppSVar1;
      il2cpp_runtime_helper_022b4080(ppSVar1,pSVar4);
    }
    pSVar5 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._hooks;
    if (pSVar5 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      if (0 < (pSVar5->fields)._count) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          match = *(System_Predicate_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        else {
          match = *(System_Predicate_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        if (match == (System_Predicate_T__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          match = (System_Predicate_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Predicate_Hook);
          System_Predicate_object____ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Predicate_T__o **)(lVar2 + 8) = match;
          il2cpp_runtime_helper_022b4080(lVar2 + 8,match);
        }
        System_Collections_Generic_HashSet_object___RemoveWhere(pSVar5,match,MethodInfo_Int32_RemoveWhere);
        __this_00 = pSVar5;
      }
      if (*ppSVar1 != (System_Collections_Generic_HashSet_GameObject__o *)0x0) {
        if (((*ppSVar1)->fields)._count == 0) {
          pSVar3 = (__this->fields)._hooks;
          if (pSVar3 == (System_Collections_Generic_HashSet_Hook__o *)0x0) goto label_043216fb;
          if ((pSVar3->fields)._count == 0) {
            *(undefined1 *)&(__this->fields).Detect = 0;
          }
        }
        return;
      }
    }
  }
label_043216fb:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae001 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Characters_Hook);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_Hook);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_GameObject);
    g_data_057ae001 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_GameObject);
  System_Collections_Generic_HashSet_object____ctor(pSVar5,MethodInfo_HashSet_1_UnityEngine_GameObject);
  *(System_Collections_Generic_HashSet_object__o **)&(__this_00->fields)._count = pSVar5;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields)._count,pSVar5);
  pSVar5 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_Hook);
  System_Collections_Generic_HashSet_object____ctor(pSVar5,_DAT_0558db78);
  *(System_Collections_Generic_HashSet_object__o **)&(__this_00->fields)._freeList = pSVar5;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields)._freeList);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// Characters.TitanProjectileDetection$$.ctor
// il2cpp: void Characters_TitanProjectileDetection___ctor (Characters_TitanProjectileDetection_o* __this, const MethodInfo* method);
// 0x4321700

void Characters_TitanProjectileDetection___ctor
               (Characters_TitanProjectileDetection_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  
  if (g_data_057ae001 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Characters_Hook);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_Hook);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_GameObject);
    g_data_057ae001 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_GameObject);
  System_Collections_Generic_HashSet_object____ctor(pSVar1,MethodInfo_HashSet_1_UnityEngine_GameObject);
  (__this->fields)._entities = (System_Collections_Generic_HashSet_GameObject__o *)pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._entities,pSVar1);
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_Hook);
  System_Collections_Generic_HashSet_object____ctor(pSVar1,_DAT_0558db78);
  (__this->fields)._hooks = (System_Collections_Generic_HashSet_Hook__o *)pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._hooks);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


