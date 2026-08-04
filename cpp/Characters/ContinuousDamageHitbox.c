// Type: Characters.ContinuousDamageHitbox
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/ContinuousDamageHitbox.cs
// Prior real C# source: none
// --------------------------------

// Characters.ContinuousDamageHitbox$$CreateContinuous
// il2cpp: Characters_ContinuousDamageHitbox_o* Characters_ContinuousDamageHitbox__CreateContinuous (Characters_BaseCharacter_o* owner, UnityEngine_GameObject_o* obj, UnityEngine_Collider_o* collider, int32_t damagePerSecond, float damageInterval, const MethodInfo* method);
// 0x42aa800

Characters_ContinuousDamageHitbox_o *
Characters_ContinuousDamageHitbox__CreateContinuous
          (Characters_BaseCharacter_o *owner,UnityEngine_GameObject_o *obj,UnityEngine_Collider_o *collider,
          int32_t damagePerSecond,float damageInterval,MethodInfo *method)

{
  int *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar3;
  System_Collections_Generic_HashSet_object__o *pSVar4;
  UnityEngine_Collider_o *__this;
  long lVar5;
  long lVar6;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_08;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_09;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_10;
  MethodInfo_3104DF0 *pMVar7;
  UnityEngine_Object_o *pUVar8;
  bool_conflict bVar9;
  Characters_ContinuousDamageHitbox_o *__this_11;
  Characters_ContinuousDamageHitbox_o *extraout_RAX;
  Characters_ContinuousDamageHitbox_o *extraout_RAX_00;
  Characters_BaseCharacter_o *pCVar10;
  Characters_BaseCharacter_o *__this_12;
  UnityEngine_GameObject_o *pUVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  Characters_ContinuousDamageHitbox_o *extraout_RAX_01;
  Characters_BaseCharacter_o *pCVar12;
  Characters_BaseCharacter_o *pCVar13;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  Characters_ContinuousDamageHitbox_o *extraout_RAX_02;
  Characters_BaseCharacter_o *pCVar14;
  Characters_BaseCharacter_o *x;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined4 extraout_var_07;
  undefined4 extraout_var_08;
  Il2CppObject *pIVar15;
  Characters_ContinuousDamageHitbox_o *extraout_RAX_03;
  MethodInfo_3106630 *method_00;
  long *__this_13;
  long *plVar16;
  MethodInfo *pMVar17;
  Characters_BaseCharacter_o **__this_14;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  System_Collections_Generic_Dictionary_object__object__o *pSVar21;
  MethodInfo_33E10B0 **unaff_R12;
  Characters_BaseCharacter_o *unaff_R13;
  float fVar22;
  float in_XMM1_Da;
  undefined1 auVar23 [12];
  undefined8 in_stack_fffffffffffffe48;
  undefined4 in_stack_fffffffffffffe58;
  float in_stack_fffffffffffffe5c;
  _union_332950 _Stack_1a0;
  undefined8 uStack_198;
  UnityEngine_Object_o *pUStack_190;
  _union_332950 _Stack_188;
  undefined8 uStack_180;
  UnityEngine_Object_o *pUStack_178;
  _union_332950 _Stack_168;
  undefined8 uStack_160;
  UnityEngine_Object_o *pUStack_158;
  _union_332950 _Stack_148;
  undefined8 uStack_140;
  UnityEngine_Object_o *pUStack_138;
  _union_332950 _Stack_128;
  undefined8 uStack_120;
  UnityEngine_Object_o *pUStack_118;
  Characters_BaseCharacter_o *pCStack_110;
  Characters_BaseCharacter_o *pCStack_108;
  Characters_BaseCharacter_o *pCStack_100;
  Characters_BaseCharacter_o *pCStack_f8;
  Characters_BaseCharacter_o *pCStack_f0;
  Characters_BaseCharacter_o *pCStack_e8;
  undefined8 uStack_e0;
  Characters_BaseCharacter_o *pCStack_d8;
  Characters_BaseCharacter_o *pCStack_d0;
  Characters_BaseCharacter_o *pCStack_c8;
  Characters_BaseCharacter_o *pCStack_c0;
  undefined8 uStack_b8;
  Characters_BaseCharacter_o *pCStack_b0;
  Characters_BaseCharacter_o *pCStack_a8;
  Characters_BaseCharacter_o *pCStack_a0;
  Characters_BaseCharacter_o *pCStack_98;
  Characters_BaseCharacter_o *pCStack_90;
  Characters_BaseCharacter_o *pCStack_88;
  undefined8 uStack_80;
  Characters_BaseCharacter_o *pCStack_78;
  
  pCVar12 = (Characters_BaseCharacter_o *)obj;
  __this_14 = (Characters_BaseCharacter_o **)owner;
  if (g_data_057add86 == '\0') {
    __this_14 = &MethodInfo_ContinuousDamageHitbox_AddComponent_ContinuousDamageHitb;
    il2cpp_runtime_helper_023445d0();
    g_data_057add86 = '\x01';
  }
  if ((obj != (UnityEngine_GameObject_o *)0x0) &&
     (pCVar12 = MethodInfo_ContinuousDamageHitbox_AddComponent_ContinuousDamageHitb,
     __this_11 = (Characters_ContinuousDamageHitbox_o *)
                 UnityEngine_GameObject__AddComponent_object_(obj,(MethodInfo_255A020 *)MethodInfo_ContinuousDamageHitbox_AddComponent_ContinuousDamageHitb),
     __this_14 = (Characters_BaseCharacter_o **)obj, __this_11 != (Characters_ContinuousDamageHitbox_o *)0x0))
  {
    (__this_11->fields).Owner = owner;
    il2cpp_runtime_helper_022b4080(&(__this_11->fields).Owner,owner);
    (__this_11->fields)._collider = collider;
    il2cpp_runtime_helper_022b4080(&(__this_11->fields)._collider);
    (__this_11->fields).DamagePerSecond = damagePerSecond;
    (__this_11->fields).DamageInterval = damageInterval;
    Characters_ContinuousDamageHitbox__Deactivate(__this_11,(MethodInfo *)collider);
    return __this_11;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add88 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057add88 = '\x01';
  }
  pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
           (((Characters_BaseCharacter_o *)__this_14)->fields).FeedVictimName;
  if (pSVar3 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    pCVar12 = MethodInfo_Void_Clear;
    System_Collections_Generic_Dictionary_object__float___Clear(pSVar3,(MethodInfo_310C5C0 *)MethodInfo_Void_Clear);
    pSVar21 = *(System_Collections_Generic_Dictionary_object__object__o **)
               &(((Characters_BaseCharacter_o *)__this_14)->fields).Dead;
    if (pSVar21 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pCVar12 = MethodInfo_Void_Clear;
      System_Collections_Generic_Dictionary_object__object___Clear(pSVar21,(MethodInfo_3104FC0 *)MethodInfo_Void_Clear)
      ;
      pSVar4 = *(System_Collections_Generic_HashSet_object__o **)
                &(((Characters_BaseCharacter_o *)__this_14)->fields).CustomDamage;
      if (pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        pCVar12 = MethodInfo_Void_Clear;
        System_Collections_Generic_HashSet_object___Clear(pSVar4,(MethodInfo_33E0DA0 *)MethodInfo_Void_Clear);
        pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 (((Characters_BaseCharacter_o *)__this_14)->fields).Cache;
        if (pSVar3 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
          pCVar12 = MethodInfo_Void_Clear;
          System_Collections_Generic_Dictionary_object__float___Clear
                    (pSVar3,(MethodInfo_310C5C0 *)MethodInfo_Void_Clear);
          pSVar21 = *(System_Collections_Generic_Dictionary_object__object__o **)
                     &(((Characters_BaseCharacter_o *)__this_14)->fields).AI;
          if (pSVar21 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            pCVar12 = MethodInfo_Void_Clear;
            System_Collections_Generic_Dictionary_object__object___Clear
                      (pSVar21,(MethodInfo_3104FC0 *)MethodInfo_Void_Clear);
            pSVar4 = *(System_Collections_Generic_HashSet_object__o **)
                      &(((Characters_BaseCharacter_o *)__this_14)->fields).CurrentHealth;
            if (pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0) {
              pMVar17 = MethodInfo_Void_Clear;
              System_Collections_Generic_HashSet_object___Clear(pSVar4,(MethodInfo_33E0DA0 *)MethodInfo_Void_Clear);
              Characters_BaseHitbox__Deactivate((Characters_BaseHitbox_o *)__this_14,pMVar17);
              return extraout_RAX;
            }
          }
        }
      }
    }
  }
  pCVar14 = (Characters_BaseCharacter_o *)0x0;
  fVar22 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057add87 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057add87 = '\x01';
  }
  pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(pCVar14->fields).FeedVictimName;
  if (pSVar3 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    pCVar12 = MethodInfo_Void_Clear;
    System_Collections_Generic_Dictionary_object__float___Clear(pSVar3,(MethodInfo_310C5C0 *)MethodInfo_Void_Clear);
    pSVar21 = *(System_Collections_Generic_Dictionary_object__object__o **)&(pCVar14->fields).Dead;
    if (pSVar21 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pCVar12 = MethodInfo_Void_Clear;
      System_Collections_Generic_Dictionary_object__object___Clear(pSVar21,(MethodInfo_3104FC0 *)MethodInfo_Void_Clear)
      ;
      pSVar4 = *(System_Collections_Generic_HashSet_object__o **)&(pCVar14->fields).CustomDamage;
      if (pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        pCVar12 = MethodInfo_Void_Clear;
        System_Collections_Generic_HashSet_object___Clear(pSVar4,(MethodInfo_33E0DA0 *)MethodInfo_Void_Clear);
        pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(pCVar14->fields).Cache;
        if (pSVar3 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
          pCVar12 = MethodInfo_Void_Clear;
          System_Collections_Generic_Dictionary_object__float___Clear
                    (pSVar3,(MethodInfo_310C5C0 *)MethodInfo_Void_Clear);
          pSVar21 = *(System_Collections_Generic_Dictionary_object__object__o **)&(pCVar14->fields).AI;
          if (pSVar21 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            pCVar12 = MethodInfo_Void_Clear;
            System_Collections_Generic_Dictionary_object__object___Clear
                      (pSVar21,(MethodInfo_3104FC0 *)MethodInfo_Void_Clear);
            pSVar4 = *(System_Collections_Generic_HashSet_object__o **)&(pCVar14->fields).CurrentHealth;
            if (pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0) {
              pMVar17 = MethodInfo_Void_Clear;
              System_Collections_Generic_HashSet_object___Clear(pSVar4,(MethodInfo_33E0DA0 *)MethodInfo_Void_Clear);
              Characters_BaseHitbox__Activate((Characters_BaseHitbox_o *)pCVar14,fVar22,in_XMM1_Da,pMVar17);
              return extraout_RAX_00;
            }
          }
        }
      }
    }
  }
  pCVar13 = (Characters_BaseCharacter_o *)0x0;
  uStack_80 = il2cpp_runtime_helper_022b2c90();
  x = pCVar12;
  plVar18 = (long *)pCVar13;
  pCStack_78 = pCVar14;
  if (g_data_057add89 == '\0') {
    pCStack_88 = (Characters_BaseCharacter_o *)0x42aab1a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pCStack_88 = (Characters_BaseCharacter_o *)0x42aab26;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pCStack_88 = (Characters_BaseCharacter_o *)0x42aab32;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pCStack_88 = (Characters_BaseCharacter_o *)0x42aab3e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pCStack_88 = (Characters_BaseCharacter_o *)0x42aab4a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    pCStack_88 = (Characters_BaseCharacter_o *)0x42aab56;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
    pCStack_88 = (Characters_BaseCharacter_o *)0x42aab62;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    pCStack_88 = (Characters_BaseCharacter_o *)0x42aab6e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    pCStack_88 = (Characters_BaseCharacter_o *)0x42aab7a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    pCStack_88 = (Characters_BaseCharacter_o *)0x42aab86;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    pCStack_88 = (Characters_BaseCharacter_o *)0x42aab92;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    plVar18 = &TypeInfo_TeamInfo;
    pCStack_88 = (Characters_BaseCharacter_o *)0x42aab9e;
    il2cpp_runtime_helper_023445d0();
    g_data_057add89 = '\x01';
  }
  plVar16 = (long *)owner;
  if (pCVar12 != (Characters_BaseCharacter_o *)0x0) {
    x = (Characters_BaseCharacter_o *)0x0;
    pCStack_88 = (Characters_BaseCharacter_o *)0x42aabb8;
    plVar18 = (long *)pCVar12;
    pCVar10 = (Characters_BaseCharacter_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar12,(MethodInfo *)0x0);
    if (pCVar10 != (Characters_BaseCharacter_o *)0x0) {
      x = (Characters_BaseCharacter_o *)0x0;
      pCStack_88 = (Characters_BaseCharacter_o *)0x42aabcb;
      __this_12 = (Characters_BaseCharacter_o *)
                  UnityEngine_Transform__get_root((UnityEngine_Transform_o *)pCVar10,(MethodInfo *)0x0);
      plVar18 = (long *)pCVar10;
      if (__this_12 != (Characters_BaseCharacter_o *)0x0) {
        x = (Characters_BaseCharacter_o *)0x0;
        pCStack_88 = (Characters_BaseCharacter_o *)0x42aabde;
        pUVar11 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_12,(MethodInfo *)0x0);
        plVar18 = (long *)__this_12;
        if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
          pCStack_88 = (Characters_BaseCharacter_o *)0x42aabf9;
          unaff_R13 = (Characters_BaseCharacter_o *)
                      UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
          x = (Characters_BaseCharacter_o *)0x0;
          pCStack_88 = (Characters_BaseCharacter_o *)0x42aac06;
          plVar18 = (long *)pCVar12;
          pUVar11 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pCVar12,(MethodInfo *)0x0);
          if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
            pCStack_88 = (Characters_BaseCharacter_o *)0x42aac21;
            unaff_R12 = (MethodInfo_33E10B0 **)
                        UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
            plVar16 = &TypeInfo_Object;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              pCStack_88 = (Characters_BaseCharacter_o *)0x42aac3d;
              il2cpp_runtime_helper_02337ed0();
            }
            pCStack_88 = (Characters_BaseCharacter_o *)0x42aac49;
            bVar9 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)unaff_R13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            if ((char)bVar9 == '\0') {
label_042aac7e:
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                pCStack_88 = (Characters_BaseCharacter_o *)0x42aac90;
                il2cpp_runtime_helper_02337ed0();
              }
              x = (Characters_BaseCharacter_o *)0x0;
              pCStack_88 = (Characters_BaseCharacter_o *)0x42aac9c;
              bVar9 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)unaff_R12,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if ((char)bVar9 == '\0') {
                return (Characters_ContinuousDamageHitbox_o *)CONCAT44(extraout_var,bVar9);
              }
              pSVar4 = *(System_Collections_Generic_HashSet_object__o **)&(pCVar13->fields).CurrentHealth;
              plVar18 = (long *)0x0;
              if (pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                pCStack_88 = (Characters_BaseCharacter_o *)0x42aacc6;
                x = (Characters_BaseCharacter_o *)unaff_R12;
                bVar9 = System_Collections_Generic_HashSet_object___Contains
                                  (pSVar4,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Contains);
                if ((char)bVar9 != '\0') {
                  return (Characters_ContinuousDamageHitbox_o *)CONCAT44(extraout_var_00,bVar9);
                }
                pSVar4 = *(System_Collections_Generic_HashSet_object__o **)&(pCVar13->fields).CurrentHealth;
                plVar18 = (long *)0x0;
                if (pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                  pCStack_88 = (Characters_BaseCharacter_o *)0x42aacf0;
                  x = (Characters_BaseCharacter_o *)unaff_R12;
                  System_Collections_Generic_HashSet_object___Add
                            (pSVar4,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Add);
                  pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(pCVar13->fields).Cache;
                  plVar18 = (long *)0x0;
                  if (pSVar3 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                    pCStack_88 = (Characters_BaseCharacter_o *)0x42aad15;
                    x = (Characters_BaseCharacter_o *)unaff_R12;
                    System_Collections_Generic_Dictionary_object__float___set_Item
                              (pSVar3,(Il2CppObject *)unaff_R12,0.0,MethodInfo_Void_set_Item);
                    pSVar21 = *(System_Collections_Generic_Dictionary_object__object__o **)
                               &(pCVar13->fields).AI;
                    pCVar10 = (Characters_BaseCharacter_o *)unaff_R12;
                    pMVar7 = MethodInfo_Void_set_Item;
                    goto joined_r0x042aada9;
                  }
                }
              }
            }
            else {
              pCVar14 = (Characters_BaseCharacter_o *)(pCVar13->fields).pvCache;
              if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
                pCStack_88 = (Characters_BaseCharacter_o *)0x42aac69;
                il2cpp_runtime_helper_02337ed0();
              }
              pCStack_88 = (Characters_BaseCharacter_o *)0x42aac76;
              x = unaff_R13;
              bVar9 = GameManagers_TeamInfo__SameTeam_446fee0(pCVar14,unaff_R13,(MethodInfo *)0x0);
              if ((char)bVar9 != '\0') goto label_042aac7e;
              pSVar4 = *(System_Collections_Generic_HashSet_object__o **)&(pCVar13->fields).CustomDamage;
              plVar18 = (long *)0x0;
              if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042aadce;
              pCStack_88 = (Characters_BaseCharacter_o *)0x42aad56;
              x = unaff_R13;
              bVar9 = System_Collections_Generic_HashSet_object___Contains
                                (pSVar4,(Il2CppObject *)unaff_R13,MethodInfo_Boolean_Contains);
              if ((char)bVar9 != '\0') {
                return (Characters_ContinuousDamageHitbox_o *)CONCAT44(extraout_var_01,bVar9);
              }
              pSVar4 = *(System_Collections_Generic_HashSet_object__o **)&(pCVar13->fields).CustomDamage;
              plVar18 = (long *)0x0;
              if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042aadce;
              pCStack_88 = (Characters_BaseCharacter_o *)0x42aad84;
              x = unaff_R13;
              System_Collections_Generic_HashSet_object___Add(pSVar4,(Il2CppObject *)unaff_R13,MethodInfo_Boolean_Add);
              pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                       (pCVar13->fields).FeedVictimName;
              plVar18 = (long *)0x0;
              if (pSVar3 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042aadce;
              pCStack_88 = (Characters_BaseCharacter_o *)0x42aada2;
              x = unaff_R13;
              System_Collections_Generic_Dictionary_object__float___set_Item
                        (pSVar3,(Il2CppObject *)unaff_R13,0.0,MethodInfo_Void_set_Item);
              pSVar21 = *(System_Collections_Generic_Dictionary_object__object__o **)&(pCVar13->fields).Dead;
              pCVar10 = unaff_R13;
              pMVar7 = MethodInfo_Void_set_Item;
joined_r0x042aada9:
              plVar18 = (long *)0x0;
              if (pSVar21 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                System_Collections_Generic_Dictionary_object__object___set_Item
                          (pSVar21,(Il2CppObject *)pCVar10,(Il2CppObject *)pCVar12,pMVar7);
                return extraout_RAX_01;
              }
            }
          }
        }
      }
    }
  }
label_042aadce:
  pCStack_88 = (Characters_BaseCharacter_o *)0x42aadd3;
  uStack_b8 = il2cpp_runtime_helper_022b2c90();
  __this_13 = (long *)x;
  plVar19 = plVar18;
  pCStack_b0 = pCVar14;
  pCStack_a8 = (Characters_BaseCharacter_o *)unaff_R12;
  pCStack_a0 = unaff_R13;
  pCStack_98 = pCVar13;
  pCStack_90 = pCVar12;
  pCStack_88 = (Characters_BaseCharacter_o *)plVar16;
  if (g_data_057add8a == '\0') {
    pCStack_c0 = (Characters_BaseCharacter_o *)0x42aae0a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pCStack_c0 = (Characters_BaseCharacter_o *)0x42aae16;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pCStack_c0 = (Characters_BaseCharacter_o *)0x42aae22;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pCStack_c0 = (Characters_BaseCharacter_o *)0x42aae2e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pCStack_c0 = (Characters_BaseCharacter_o *)0x42aae3a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    pCStack_c0 = (Characters_BaseCharacter_o *)0x42aae46;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
    pCStack_c0 = (Characters_BaseCharacter_o *)0x42aae52;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    pCStack_c0 = (Characters_BaseCharacter_o *)0x42aae5e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    pCStack_c0 = (Characters_BaseCharacter_o *)0x42aae6a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    pCStack_c0 = (Characters_BaseCharacter_o *)0x42aae76;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    pCStack_c0 = (Characters_BaseCharacter_o *)0x42aae82;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    plVar19 = &TypeInfo_TeamInfo;
    pCStack_c0 = (Characters_BaseCharacter_o *)0x42aae8e;
    il2cpp_runtime_helper_023445d0();
    g_data_057add8a = '\x01';
  }
  if (x != (Characters_BaseCharacter_o *)0x0) {
    __this_13 = (long *)0x0;
    pCStack_c0 = (Characters_BaseCharacter_o *)0x42aaea8;
    plVar19 = (long *)x;
    pCVar12 = (Characters_BaseCharacter_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
    if (pCVar12 != (Characters_BaseCharacter_o *)0x0) {
      __this_13 = (long *)0x0;
      pCStack_c0 = (Characters_BaseCharacter_o *)0x42aaebb;
      pCVar13 = (Characters_BaseCharacter_o *)
                UnityEngine_Transform__get_root((UnityEngine_Transform_o *)pCVar12,(MethodInfo *)0x0);
      plVar19 = (long *)pCVar12;
      if (pCVar13 != (Characters_BaseCharacter_o *)0x0) {
        __this_13 = (long *)0x0;
        pCStack_c0 = (Characters_BaseCharacter_o *)0x42aaece;
        pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pCVar13,(MethodInfo *)0x0);
        plVar19 = (long *)pCVar13;
        if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
          pCStack_c0 = (Characters_BaseCharacter_o *)0x42aaee9;
          unaff_R13 = (Characters_BaseCharacter_o *)
                      UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
          __this_13 = (long *)0x0;
          pCStack_c0 = (Characters_BaseCharacter_o *)0x42aaef6;
          plVar19 = (long *)x;
          pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
          if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
            pCStack_c0 = (Characters_BaseCharacter_o *)0x42aaf11;
            unaff_R12 = (MethodInfo_33E10B0 **)
                        UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
            plVar16 = &TypeInfo_Object;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              pCStack_c0 = (Characters_BaseCharacter_o *)0x42aaf2d;
              il2cpp_runtime_helper_02337ed0();
            }
            pCStack_c0 = (Characters_BaseCharacter_o *)0x42aaf39;
            bVar9 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)unaff_R13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            if ((char)bVar9 == '\0') {
label_042aaf6e:
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                pCStack_c0 = (Characters_BaseCharacter_o *)0x42aaf80;
                il2cpp_runtime_helper_02337ed0();
              }
              __this_13 = (long *)0x0;
              pCStack_c0 = (Characters_BaseCharacter_o *)0x42aaf8c;
              bVar9 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)unaff_R12,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if ((char)bVar9 == '\0') {
                return (Characters_ContinuousDamageHitbox_o *)CONCAT44(extraout_var_02,bVar9);
              }
              pSVar4 = *(System_Collections_Generic_HashSet_object__o **)
                        &(((Characters_BaseCharacter_o *)plVar18)->fields).CurrentHealth;
              plVar19 = (long *)0x0;
              if (pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                pCStack_c0 = (Characters_BaseCharacter_o *)0x42aafb6;
                __this_13 = (long *)unaff_R12;
                bVar9 = System_Collections_Generic_HashSet_object___Contains
                                  (pSVar4,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Contains);
                if ((char)bVar9 != '\0') {
                  return (Characters_ContinuousDamageHitbox_o *)CONCAT44(extraout_var_03,bVar9);
                }
                pSVar4 = *(System_Collections_Generic_HashSet_object__o **)
                          &(((Characters_BaseCharacter_o *)plVar18)->fields).CurrentHealth;
                plVar19 = (long *)0x0;
                if (pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                  pCStack_c0 = (Characters_BaseCharacter_o *)0x42aafe0;
                  __this_13 = (long *)unaff_R12;
                  System_Collections_Generic_HashSet_object___Add
                            (pSVar4,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Add);
                  pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                           (((Characters_BaseCharacter_o *)plVar18)->fields).Cache;
                  plVar19 = (long *)0x0;
                  if (pSVar3 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                    pCStack_c0 = (Characters_BaseCharacter_o *)0x42ab005;
                    __this_13 = (long *)unaff_R12;
                    System_Collections_Generic_Dictionary_object__float___set_Item
                              (pSVar3,(Il2CppObject *)unaff_R12,0.0,MethodInfo_Void_set_Item);
                    pSVar21 = *(System_Collections_Generic_Dictionary_object__object__o **)
                               &(((Characters_BaseCharacter_o *)plVar18)->fields).AI;
                    pCVar12 = (Characters_BaseCharacter_o *)unaff_R12;
                    pMVar7 = MethodInfo_Void_set_Item;
                    goto joined_r0x042ab099;
                  }
                }
              }
            }
            else {
              pCVar14 = (Characters_BaseCharacter_o *)
                        (((Characters_BaseCharacter_o *)plVar18)->fields).pvCache;
              if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
                pCStack_c0 = (Characters_BaseCharacter_o *)0x42aaf59;
                il2cpp_runtime_helper_02337ed0();
              }
              pCStack_c0 = (Characters_BaseCharacter_o *)0x42aaf66;
              __this_13 = (long *)unaff_R13;
              bVar9 = GameManagers_TeamInfo__SameTeam_446fee0(pCVar14,unaff_R13,(MethodInfo *)0x0);
              if ((char)bVar9 != '\0') goto label_042aaf6e;
              pSVar4 = *(System_Collections_Generic_HashSet_object__o **)
                        &(((Characters_BaseCharacter_o *)plVar18)->fields).CustomDamage;
              plVar19 = (long *)0x0;
              if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042ab0be;
              pCStack_c0 = (Characters_BaseCharacter_o *)0x42ab046;
              __this_13 = (long *)unaff_R13;
              bVar9 = System_Collections_Generic_HashSet_object___Contains
                                (pSVar4,(Il2CppObject *)unaff_R13,MethodInfo_Boolean_Contains);
              if ((char)bVar9 != '\0') {
                return (Characters_ContinuousDamageHitbox_o *)CONCAT44(extraout_var_04,bVar9);
              }
              pSVar4 = *(System_Collections_Generic_HashSet_object__o **)
                        &(((Characters_BaseCharacter_o *)plVar18)->fields).CustomDamage;
              plVar19 = (long *)0x0;
              if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042ab0be;
              pCStack_c0 = (Characters_BaseCharacter_o *)0x42ab074;
              __this_13 = (long *)unaff_R13;
              System_Collections_Generic_HashSet_object___Add(pSVar4,(Il2CppObject *)unaff_R13,MethodInfo_Boolean_Add);
              pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                       (((Characters_BaseCharacter_o *)plVar18)->fields).FeedVictimName;
              plVar19 = (long *)0x0;
              if (pSVar3 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042ab0be;
              pCStack_c0 = (Characters_BaseCharacter_o *)0x42ab092;
              __this_13 = (long *)unaff_R13;
              System_Collections_Generic_Dictionary_object__float___set_Item
                        (pSVar3,(Il2CppObject *)unaff_R13,0.0,MethodInfo_Void_set_Item);
              pSVar21 = *(System_Collections_Generic_Dictionary_object__object__o **)
                         &(((Characters_BaseCharacter_o *)plVar18)->fields).Dead;
              pCVar12 = unaff_R13;
              pMVar7 = MethodInfo_Void_set_Item;
joined_r0x042ab099:
              plVar19 = (long *)0x0;
              if (pSVar21 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                System_Collections_Generic_Dictionary_object__object___set_Item
                          (pSVar21,(Il2CppObject *)pCVar12,(Il2CppObject *)x,pMVar7);
                return extraout_RAX_02;
              }
            }
          }
        }
      }
    }
  }
label_042ab0be:
  pCStack_c0 = (Characters_BaseCharacter_o *)0x42ab0c3;
  uStack_e0 = il2cpp_runtime_helper_022b2c90();
  plVar20 = plVar19;
  pCStack_d8 = pCVar14;
  pCStack_d0 = (Characters_BaseCharacter_o *)unaff_R12;
  pCStack_c8 = (Characters_BaseCharacter_o *)plVar18;
  pCStack_c0 = x;
  if (g_data_057add8b == '\0') {
    pCStack_e8 = (Characters_BaseCharacter_o *)0x42ab0f7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    pCStack_e8 = (Characters_BaseCharacter_o *)0x42ab103;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    pCStack_e8 = (Characters_BaseCharacter_o *)0x42ab10f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    pCStack_e8 = (Characters_BaseCharacter_o *)0x42ab11b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    pCStack_e8 = (Characters_BaseCharacter_o *)0x42ab127;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    pCStack_e8 = (Characters_BaseCharacter_o *)0x42ab133;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
    pCStack_e8 = (Characters_BaseCharacter_o *)0x42ab13f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    pCStack_e8 = (Characters_BaseCharacter_o *)0x42ab14b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    pCStack_e8 = (Characters_BaseCharacter_o *)0x42ab157;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    pCStack_e8 = (Characters_BaseCharacter_o *)0x42ab163;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    plVar20 = &TypeInfo_Object;
    pCStack_e8 = (Characters_BaseCharacter_o *)0x42ab16f;
    il2cpp_runtime_helper_023445d0();
    g_data_057add8b = '\x01';
  }
  if ((Characters_BaseCharacter_o *)__this_13 != (Characters_BaseCharacter_o *)0x0) {
    pCStack_e8 = (Characters_BaseCharacter_o *)0x42ab189;
    plVar20 = __this_13;
    pCVar12 = (Characters_BaseCharacter_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_13,(MethodInfo *)0x0);
    if (pCVar12 == (Characters_BaseCharacter_o *)0x0) goto label_042ab35d;
    pCStack_e8 = (Characters_BaseCharacter_o *)0x42ab19c;
    pCVar14 = (Characters_BaseCharacter_o *)
              UnityEngine_Transform__get_root((UnityEngine_Transform_o *)pCVar12,(MethodInfo *)0x0);
    plVar20 = (long *)pCVar12;
    if (pCVar14 == (Characters_BaseCharacter_o *)0x0) goto label_042ab35d;
    pCStack_e8 = (Characters_BaseCharacter_o *)0x42ab1af;
    pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pCVar14,(MethodInfo *)0x0);
    plVar20 = (long *)pCVar14;
    if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_042ab35d;
    pCStack_e8 = (Characters_BaseCharacter_o *)0x42ab1ca;
    x = (Characters_BaseCharacter_o *)UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    pCStack_e8 = (Characters_BaseCharacter_o *)0x42ab1d7;
    plVar20 = __this_13;
    pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_13,(MethodInfo *)0x0);
    if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_042ab35d;
    pCStack_e8 = (Characters_BaseCharacter_o *)0x42ab1f2;
    unaff_R12 = (MethodInfo_33E10B0 **)UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
    __this_13 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pCStack_e8 = (Characters_BaseCharacter_o *)0x42ab20d;
      il2cpp_runtime_helper_02337ed0();
    }
    pCStack_e8 = (Characters_BaseCharacter_o *)0x42ab219;
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      pSVar4 = *(System_Collections_Generic_HashSet_object__o **)
                &(((Characters_BaseCharacter_o *)plVar19)->fields).CustomDamage;
      plVar20 = (long *)0x0;
      if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042ab35d;
      pCStack_e8 = (Characters_BaseCharacter_o *)0x42ab240;
      bVar9 = System_Collections_Generic_HashSet_object___Contains(pSVar4,(Il2CppObject *)x,MethodInfo_Boolean_Contains);
      if ((char)bVar9 != '\0') {
        pSVar4 = *(System_Collections_Generic_HashSet_object__o **)
                  &(((Characters_BaseCharacter_o *)plVar19)->fields).CustomDamage;
        plVar20 = (long *)0x0;
        if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042ab35d;
        pCStack_e8 = (Characters_BaseCharacter_o *)0x42ab263;
        System_Collections_Generic_HashSet_object___Remove(pSVar4,(Il2CppObject *)x,MethodInfo_Boolean_Remove);
        pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 (((Characters_BaseCharacter_o *)plVar19)->fields).FeedVictimName;
        plVar20 = (long *)0x0;
        if (pSVar3 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042ab35d;
        pCStack_e8 = (Characters_BaseCharacter_o *)0x42ab282;
        System_Collections_Generic_Dictionary_object__float___Remove(pSVar3,(Il2CppObject *)x,MethodInfo_Boolean_Remove);
        pSVar21 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   &(((Characters_BaseCharacter_o *)plVar19)->fields).Dead;
        plVar20 = (long *)0x0;
        method_00 = MethodInfo_Boolean_Remove;
        pCVar12 = x;
        if (pSVar21 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042ab35d;
        goto label_042ab341;
      }
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pCStack_e8 = (Characters_BaseCharacter_o *)0x42ab2b2;
      il2cpp_runtime_helper_02337ed0();
    }
    pCStack_e8 = (Characters_BaseCharacter_o *)0x42ab2be;
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)unaff_R12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      return (Characters_ContinuousDamageHitbox_o *)CONCAT44(extraout_var_05,bVar9);
    }
    pSVar4 = *(System_Collections_Generic_HashSet_object__o **)
              &(((Characters_BaseCharacter_o *)plVar19)->fields).CurrentHealth;
    plVar20 = (long *)0x0;
    if (pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      pCStack_e8 = (Characters_BaseCharacter_o *)0x42ab2e8;
      bVar9 = System_Collections_Generic_HashSet_object___Contains
                        (pSVar4,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Contains);
      if ((char)bVar9 == '\0') {
        return (Characters_ContinuousDamageHitbox_o *)CONCAT44(extraout_var_06,bVar9);
      }
      pSVar4 = *(System_Collections_Generic_HashSet_object__o **)
                &(((Characters_BaseCharacter_o *)plVar19)->fields).CurrentHealth;
      plVar20 = (long *)0x0;
      if (pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        pCStack_e8 = (Characters_BaseCharacter_o *)0x42ab30a;
        System_Collections_Generic_HashSet_object___Remove(pSVar4,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Remove);
        pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 (((Characters_BaseCharacter_o *)plVar19)->fields).Cache;
        plVar20 = (long *)0x0;
        if (pSVar3 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
          pCStack_e8 = (Characters_BaseCharacter_o *)0x42ab328;
          System_Collections_Generic_Dictionary_object__float___Remove
                    (pSVar3,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Remove);
          pSVar21 = *(System_Collections_Generic_Dictionary_object__object__o **)
                     &(((Characters_BaseCharacter_o *)plVar19)->fields).AI;
          plVar20 = (long *)0x0;
          method_00 = MethodInfo_Boolean_Remove;
          pCVar12 = (Characters_BaseCharacter_o *)unaff_R12;
          if (pSVar21 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_042ab341:
            bVar9 = System_Collections_Generic_Dictionary_object__object___Remove
                              (pSVar21,(Il2CppObject *)pCVar12,method_00);
            return (Characters_ContinuousDamageHitbox_o *)CONCAT44(extraout_var_07,bVar9);
          }
        }
      }
    }
  }
label_042ab35d:
  pCStack_e8 = (Characters_BaseCharacter_o *)0x42ab362;
  il2cpp_runtime_helper_022b2c90();
  pCStack_110 = (Characters_BaseCharacter_o *)__this_13;
  pCStack_108 = (Characters_BaseCharacter_o *)unaff_R12;
  pCStack_100 = unaff_R13;
  pCStack_f8 = (Characters_BaseCharacter_o *)plVar19;
  pCStack_f0 = x;
  pCStack_e8 = (Characters_BaseCharacter_o *)plVar16;
  if (g_data_057add8c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_CustomLogic_CustomLogicCollisionH);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Characters_BaseCharacter_GetEnume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicCollisionHand);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Characters_BaseCharacter_GetEnumerat);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Characters_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_CustomLogic_CustomLogicCollisionHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_CustomLogicCollisionHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057add8c = '\x01';
  }
  _Stack_128.genericMethod = (void *)0x0;
  uStack_120 = 0;
  pUStack_118 = (UnityEngine_Object_o *)0x0;
  _Stack_148.genericMethod = (void *)0x0;
  uStack_140 = 0;
  pUStack_138 = (UnityEngine_Object_o *)0x0;
  _Stack_168.genericMethod = (void *)0x0;
  uStack_160 = 0;
  pUStack_158 = (UnityEngine_Object_o *)0x0;
  _Stack_188.genericMethod = (void *)0x0;
  uStack_180 = 0;
  pUStack_178 = (UnityEngine_Object_o *)0x0;
  __this = *(UnityEngine_Collider_o **)&(((Characters_BaseCharacter_o *)plVar20)->fields).HasExplicitNameTag;
  if (__this == (UnityEngine_Collider_o *)0x0) goto label_042abd2d;
  bVar9 = UnityEngine_Collider__get_enabled(__this,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return (Characters_ContinuousDamageHitbox_o *)CONCAT44(extraout_var_08,bVar9);
  }
  unaff_R12 = (MethodInfo_33E10B0 **)il2cpp_runtime_helper_023052d0(TypeInfo_List_BaseCharacter);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)unaff_R12,MethodInfo_List_1_Characters_BaseCharacter);
  pSVar4 = *(System_Collections_Generic_HashSet_object__o **)
            &(((Characters_BaseCharacter_o *)plVar20)->fields).CustomDamage;
  if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042abd2d;
  System_Collections_Generic_HashSet_object___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)&_Stack_1a0,pSVar4,MethodInfo_HashSet_1_T_Enumerator_Characters_BaseCharacter_GetEnume);
  pUStack_118 = pUStack_190;
  _Stack_128 = _Stack_1a0;
  uStack_120 = uStack_198;
  while (__this_00.fields._8_8_ = plVar20,
        __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffe48,
        __this_00.fields._current._0_4_ = in_stack_fffffffffffffe58,
        __this_00.fields._current._4_4_ = in_stack_fffffffffffffe5c,
        bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_3219C40 *)&_Stack_128), pUVar8 = pUStack_118,
        (char)bVar9 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar9 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    lVar6 = MethodInfo_Void_Add;
    if ((char)bVar9 == '\0') {
      if (pUVar8 == (UnityEngine_Object_o *)0x0) goto label_042abd0f;
      if (*(char *)&pUVar8[4].monitor != '\0') goto label_042ab6bc;
      pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
               (((Characters_BaseCharacter_o *)plVar20)->fields).FeedVictimName;
      if (pSVar3 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd32;
      bVar9 = System_Collections_Generic_Dictionary_object__float___ContainsKey
                        (pSVar3,(Il2CppObject *)pUVar8,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar9 != '\0') {
        pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 (((Characters_BaseCharacter_o *)plVar20)->fields).FeedVictimName;
        if (pSVar3 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd4b;
        in_stack_fffffffffffffe5c =
             System_Collections_Generic_Dictionary_object__float___get_Item
                       (pSVar3,(Il2CppObject *)pUVar8,MethodInfo_Single_get_Item);
        fVar22 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        System_Collections_Generic_Dictionary_object__float___set_Item
                  (pSVar3,(Il2CppObject *)pUVar8,in_stack_fffffffffffffe5c + fVar22,MethodInfo_Void_set_Item);
        pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 (((Characters_BaseCharacter_o *)plVar20)->fields).FeedVictimName;
        if (pSVar3 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd46;
        fVar22 = System_Collections_Generic_Dictionary_object__float___get_Item
                           (pSVar3,(Il2CppObject *)pUVar8,MethodInfo_Single_get_Item);
        if (*(float *)((long)&(((Characters_BaseCharacter_o *)plVar20)->fields).FeedKillerName + 4) <= fVar22)
        {
          pSVar21 = *(System_Collections_Generic_Dictionary_object__object__o **)
                     &(((Characters_BaseCharacter_o *)plVar20)->fields).Dead;
          if (pSVar21 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042abd41;
          bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                            (pSVar21,(Il2CppObject *)pUVar8,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar9 != '\0') {
            pSVar21 = *(System_Collections_Generic_Dictionary_object__object__o **)
                       &(((Characters_BaseCharacter_o *)plVar20)->fields).Dead;
            if (pSVar21 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042abd55;
            pIVar15 = System_Collections_Generic_Dictionary_object__object___get_Item
                                (pSVar21,(Il2CppObject *)pUVar8,MethodInfo_Collider_get_Item);
            (*(((Characters_BaseCharacter_o *)plVar20)->klass->vtable)._7_unknown.methodPtr)
                      (plVar20,pUVar8,pIVar15,
                       (((Characters_BaseCharacter_o *)plVar20)->klass->vtable)._7_unknown.method);
          }
          pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                   (((Characters_BaseCharacter_o *)plVar20)->fields).FeedVictimName;
          if (pSVar3 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd50;
          System_Collections_Generic_Dictionary_object__float___set_Item
                    (pSVar3,(Il2CppObject *)pUVar8,0.0,MethodInfo_Void_set_Item);
        }
      }
    }
    else {
label_042ab6bc:
      if ((Characters_BaseCharacter_o *)unaff_R12 == (Characters_BaseCharacter_o *)0x0) goto label_042abd05;
      piVar1 = (int *)((long)&(((Characters_BaseCharacter_o *)unaff_R12)->fields).m_CancellationTokenSource +
                      4);
      *piVar1 = *piVar1 + 1;
      lVar5 = (((Characters_BaseCharacter_o *)unaff_R12)->fields).m_CachedPtr;
      if (lVar5 == 0) goto label_042abd0a;
      uVar2 = *(uint *)&(((Characters_BaseCharacter_o *)unaff_R12)->fields).m_CancellationTokenSource;
      if (uVar2 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)&(((Characters_BaseCharacter_o *)unaff_R12)->fields).m_CancellationTokenSource = uVar2 + 1;
        *(UnityEngine_Object_o **)(lVar5 + 0x20 + (long)(int)uVar2 * 8) = pUVar8;
        il2cpp_runtime_helper_022b4080(lVar5 + 0x20 + (long)(int)uVar2 * 8,pUVar8);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)unaff_R12,(Il2CppObject *)pUVar8,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  __this_01.fields._8_8_ = plVar20;
  __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffe48;
  __this_01.fields._current._0_4_ = in_stack_fffffffffffffe58;
  __this_01.fields._current._4_4_ = in_stack_fffffffffffffe5c;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_01,(MethodInfo_3219C30 *)&_Stack_128);
  if ((Characters_BaseCharacter_o *)unaff_R12 == (Characters_BaseCharacter_o *)0x0) goto label_042abd2d;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_1a0,
             (System_Collections_Generic_List_object__o *)unaff_R12,MethodInfo_List_1_T_Enumerator_Characters_BaseCharacter_GetEnumerat);
  pUStack_138 = pUStack_190;
  _Stack_148 = _Stack_1a0;
  uStack_140 = uStack_198;
  unaff_R12 = &MethodInfo_Boolean_Remove;
  while( true ) {
    __this_02.fields._8_8_ = plVar20;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe48;
    __this_02.fields._current._0_4_ = in_stack_fffffffffffffe58;
    __this_02.fields._current._4_4_ = in_stack_fffffffffffffe5c;
    bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_02,(MethodInfo_321A1D0 *)&_Stack_148);
    pUVar8 = pUStack_138;
    if ((char)bVar9 == '\0') {
      __this_03.fields._8_8_ = plVar20;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe48;
      __this_03.fields._current._0_4_ = in_stack_fffffffffffffe58;
      __this_03.fields._current._4_4_ = in_stack_fffffffffffffe5c;
      System_Collections_Generic_List_Enumerator_object___Dispose(__this_03,(MethodInfo_321A1C0 *)&_Stack_148)
      ;
      unaff_R12 = (MethodInfo_33E10B0 **)il2cpp_runtime_helper_023052d0(TypeInfo_List_CustomLogicCollisionHandler);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)unaff_R12,MethodInfo_List_1_CustomLogic_CustomLogicCollisionHandler);
      pSVar4 = *(System_Collections_Generic_HashSet_object__o **)
                &(((Characters_BaseCharacter_o *)plVar20)->fields).CurrentHealth;
      if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042abd2d;
      System_Collections_Generic_HashSet_object___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)&_Stack_1a0,pSVar4,MethodInfo_HashSet_1_T_Enumerator_CustomLogic_CustomLogicCollisionH);
      pUStack_158 = pUStack_190;
      _Stack_168 = _Stack_1a0;
      uStack_160 = uStack_198;
      while (__this_04.fields._8_8_ = plVar20,
            __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffe48,
            __this_04.fields._current._0_4_ = in_stack_fffffffffffffe58,
            __this_04.fields._current._4_4_ = in_stack_fffffffffffffe5c,
            bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                              (__this_04,(MethodInfo_3219C40 *)&_Stack_168), pUVar8 = pUStack_158,
            (char)bVar9 != '\0') {
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar9 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        lVar6 = MethodInfo_Void_Add;
        if ((char)bVar9 == '\0') {
          pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                   (((Characters_BaseCharacter_o *)plVar20)->fields).Cache;
          if (pSVar3 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd14;
          bVar9 = System_Collections_Generic_Dictionary_object__float___ContainsKey
                            (pSVar3,(Il2CppObject *)pUVar8,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar9 != '\0') {
            pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                     (((Characters_BaseCharacter_o *)plVar20)->fields).Cache;
            if (pSVar3 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd28;
            in_stack_fffffffffffffe5c =
                 System_Collections_Generic_Dictionary_object__float___get_Item
                           (pSVar3,(Il2CppObject *)pUVar8,MethodInfo_Single_get_Item);
            fVar22 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            System_Collections_Generic_Dictionary_object__float___set_Item
                      (pSVar3,(Il2CppObject *)pUVar8,in_stack_fffffffffffffe5c + fVar22,MethodInfo_Void_set_Item);
            pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                     (((Characters_BaseCharacter_o *)plVar20)->fields).Cache;
            if (pSVar3 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd23;
            fVar22 = System_Collections_Generic_Dictionary_object__float___get_Item
                               (pSVar3,(Il2CppObject *)pUVar8,MethodInfo_Single_get_Item);
            if (*(float *)((long)&(((Characters_BaseCharacter_o *)plVar20)->fields).FeedKillerName + 4) <=
                fVar22) {
              pSVar21 = *(System_Collections_Generic_Dictionary_object__object__o **)
                         &(((Characters_BaseCharacter_o *)plVar20)->fields).AI;
              if (pSVar21 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto label_042abd37;
              bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                (pSVar21,(Il2CppObject *)pUVar8,MethodInfo_Boolean_ContainsKey);
              if ((char)bVar9 != '\0') {
                pSVar21 = *(System_Collections_Generic_Dictionary_object__object__o **)
                           &(((Characters_BaseCharacter_o *)plVar20)->fields).AI;
                if (pSVar21 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                goto label_042abd5a;
                pIVar15 = System_Collections_Generic_Dictionary_object__object___get_Item
                                    (pSVar21,(Il2CppObject *)pUVar8,MethodInfo_Collider_get_Item);
                (*(((Characters_BaseCharacter_o *)plVar20)->klass->vtable)._8_unknown.methodPtr)
                          (plVar20,pUVar8,pIVar15,
                           (((Characters_BaseCharacter_o *)plVar20)->klass->vtable)._8_unknown.method);
              }
              pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                       (((Characters_BaseCharacter_o *)plVar20)->fields).Cache;
              if (pSVar3 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd3c;
              System_Collections_Generic_Dictionary_object__float___set_Item
                        (pSVar3,(Il2CppObject *)pUVar8,0.0,MethodInfo_Void_set_Item);
            }
          }
        }
        else {
          if ((Characters_BaseCharacter_o *)unaff_R12 == (Characters_BaseCharacter_o *)0x0) goto label_042abd19;
          piVar1 = (int *)((long)&(((Characters_BaseCharacter_o *)unaff_R12)->fields).
                                  m_CancellationTokenSource + 4);
          *piVar1 = *piVar1 + 1;
          lVar5 = (((Characters_BaseCharacter_o *)unaff_R12)->fields).m_CachedPtr;
          if (lVar5 == 0) goto label_042abd1e;
          uVar2 = *(uint *)&(((Characters_BaseCharacter_o *)unaff_R12)->fields).m_CancellationTokenSource;
          if (uVar2 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)&(((Characters_BaseCharacter_o *)unaff_R12)->fields).m_CancellationTokenSource =
                 uVar2 + 1;
            *(UnityEngine_Object_o **)(lVar5 + 0x20 + (long)(int)uVar2 * 8) = pUVar8;
            il2cpp_runtime_helper_022b4080(lVar5 + 0x20 + (long)(int)uVar2 * 8,pUVar8);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)unaff_R12,(Il2CppObject *)pUVar8,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      __this_05.fields._8_8_ = plVar20;
      __this_05.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffe48;
      __this_05.fields._current._0_4_ = in_stack_fffffffffffffe58;
      __this_05.fields._current._4_4_ = in_stack_fffffffffffffe5c;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_05,(MethodInfo_3219C30 *)&_Stack_168);
      goto label_042abbee;
    }
    pSVar4 = *(System_Collections_Generic_HashSet_object__o **)
              &(((Characters_BaseCharacter_o *)plVar20)->fields).CustomDamage;
    if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) break;
    System_Collections_Generic_HashSet_object___Remove(pSVar4,(Il2CppObject *)pUStack_138,MethodInfo_Boolean_Remove);
    pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
             (((Characters_BaseCharacter_o *)plVar20)->fields).FeedVictimName;
    if (pSVar3 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abcec;
    System_Collections_Generic_Dictionary_object__float___Remove(pSVar3,(Il2CppObject *)pUVar8,MethodInfo_Boolean_Remove);
    pSVar21 = *(System_Collections_Generic_Dictionary_object__object__o **)
               &(((Characters_BaseCharacter_o *)plVar20)->fields).Dead;
    if (pSVar21 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042abcf1;
    System_Collections_Generic_Dictionary_object__object___Remove(pSVar21,(Il2CppObject *)pUVar8,MethodInfo_Boolean_Remove)
    ;
  }
  il2cpp_runtime_helper_022b2c90();
label_042abcec:
  il2cpp_runtime_helper_022b2c90();
label_042abcf1:
  il2cpp_runtime_helper_022b2c90();
label_042abcf6:
  il2cpp_runtime_helper_022b2c90();
label_042abcfb:
  il2cpp_runtime_helper_022b2c90();
  do {
    il2cpp_runtime_helper_022b2c90();
label_042abd05:
    il2cpp_runtime_helper_022b2c90();
label_042abd0a:
    il2cpp_runtime_helper_022b2c90();
label_042abd0f:
    il2cpp_runtime_helper_022b2c90();
label_042abd14:
    il2cpp_runtime_helper_022b2c90();
label_042abd19:
    il2cpp_runtime_helper_022b2c90();
label_042abd1e:
    il2cpp_runtime_helper_022b2c90();
label_042abd23:
    il2cpp_runtime_helper_022b2c90();
label_042abd28:
    il2cpp_runtime_helper_022b2c90();
label_042abd2d:
    do {
      il2cpp_runtime_helper_022b2c90();
label_042abd32:
      il2cpp_runtime_helper_022b2c90();
label_042abd37:
      il2cpp_runtime_helper_022b2c90();
label_042abd3c:
      il2cpp_runtime_helper_022b2c90();
label_042abd41:
      il2cpp_runtime_helper_022b2c90();
label_042abd46:
      il2cpp_runtime_helper_022b2c90();
label_042abd4b:
      il2cpp_runtime_helper_022b2c90();
label_042abd50:
      il2cpp_runtime_helper_022b2c90();
label_042abd55:
      il2cpp_runtime_helper_022b2c90();
label_042abd5a:
      auVar23 = il2cpp_runtime_helper_022b2c90();
      if (auVar23._8_4_ != 1) {
        __this_09.fields._8_8_ = plVar20;
        __this_09.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffe48;
        __this_09.fields._current._0_4_ = in_stack_fffffffffffffe58;
        __this_09.fields._current._4_4_ = in_stack_fffffffffffffe5c;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_09,(MethodInfo_3219C30 *)&_Stack_168);
label_042ac20c:
        _Unwind_Resume(auVar23._0_8_);
      }
      plVar18 = (long *)__cxa_begin_catch(auVar23._0_8_);
      lVar6 = *plVar18;
      __cxa_end_catch();
      __this_08.fields._8_8_ = plVar20;
      __this_08.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffe48;
      __this_08.fields._current._0_4_ = in_stack_fffffffffffffe58;
      __this_08.fields._current._4_4_ = in_stack_fffffffffffffe5c;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_08,(MethodInfo_3219C30 *)&_Stack_168);
      if (lVar6 != 0) {
        il2cpp_runtime_helper_022fefe0(lVar6);
        __this_10.fields._8_8_ = plVar20;
        __this_10.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffe48;
        __this_10.fields._current._0_4_ = in_stack_fffffffffffffe58;
        __this_10.fields._current._4_4_ = in_stack_fffffffffffffe5c;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_10,(MethodInfo_3219C30 *)&_Stack_128);
        goto label_042ac20c;
      }
label_042abbee:
    } while ((Characters_BaseCharacter_o *)unaff_R12 == (Characters_BaseCharacter_o *)0x0);
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_1a0,
               (System_Collections_Generic_List_object__o *)unaff_R12,MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicCollisionHand);
    pUStack_178 = pUStack_190;
    _Stack_188 = _Stack_1a0;
    uStack_180 = uStack_198;
    unaff_R12 = &MethodInfo_Boolean_Remove;
    while( true ) {
      __this_06.fields._8_8_ = plVar20;
      __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe48;
      __this_06.fields._current._0_4_ = in_stack_fffffffffffffe58;
      __this_06.fields._current._4_4_ = in_stack_fffffffffffffe5c;
      bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_06,(MethodInfo_321A1D0 *)&_Stack_188);
      pUVar8 = pUStack_178;
      if ((char)bVar9 == '\0') {
        __this_07.fields._8_8_ = plVar20;
        __this_07.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe48;
        __this_07.fields._current._0_4_ = in_stack_fffffffffffffe58;
        __this_07.fields._current._4_4_ = in_stack_fffffffffffffe5c;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_07,(MethodInfo_321A1C0 *)&_Stack_188);
        return extraout_RAX_03;
      }
      pSVar4 = *(System_Collections_Generic_HashSet_object__o **)
                &(((Characters_BaseCharacter_o *)plVar20)->fields).CurrentHealth;
      if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042abcf6;
      System_Collections_Generic_HashSet_object___Remove(pSVar4,(Il2CppObject *)pUStack_178,MethodInfo_Boolean_Remove);
      pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
               (((Characters_BaseCharacter_o *)plVar20)->fields).Cache;
      if (pSVar3 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abcfb;
      System_Collections_Generic_Dictionary_object__float___Remove(pSVar3,(Il2CppObject *)pUVar8,MethodInfo_Boolean_Remove)
      ;
      pSVar21 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 &(((Characters_BaseCharacter_o *)plVar20)->fields).AI;
      if (pSVar21 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      System_Collections_Generic_Dictionary_object__object___Remove
                (pSVar21,(Il2CppObject *)pUVar8,MethodInfo_Boolean_Remove);
    }
  } while( true );
}


// Characters.ContinuousDamageHitbox$$Activate
// il2cpp: void Characters_ContinuousDamageHitbox__Activate (Characters_ContinuousDamageHitbox_o* __this, float delay, float length, const MethodInfo* method);
// 0x42aa9c0

void Characters_ContinuousDamageHitbox__Activate
               (Characters_ContinuousDamageHitbox_o *__this,float delay,float length,MethodInfo *method)

{
  int *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_BaseCharacter__float__o *__this_00;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *__this_01;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar4;
  UnityEngine_Collider_o *__this_02;
  long lVar5;
  long lVar6;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_07;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  System_Collections_Generic_List_Enumerator_object__o __this_10;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_11;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_12;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_13;
  MethodInfo_3104DF0 *pMVar7;
  UnityEngine_Object_o *pUVar8;
  bool_conflict bVar9;
  Characters_BaseCharacter_o *pCVar10;
  Characters_BaseCharacter_o *__this_14;
  UnityEngine_GameObject_o *pUVar11;
  Characters_BaseCharacter_o *pCVar12;
  Characters_BaseCharacter_o *x;
  Il2CppObject *pIVar13;
  MethodInfo_3106630 *method_00;
  long *__this_15;
  long *unaff_RBP;
  MethodInfo *method_01;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  System_Collections_Generic_Dictionary_object__object__o *pSVar17;
  MethodInfo_33E10B0 **unaff_R12;
  Characters_BaseCharacter_o *unaff_R13;
  float fVar18;
  undefined1 auVar19 [12];
  undefined8 in_stack_fffffffffffffe78;
  undefined4 in_stack_fffffffffffffe88;
  float in_stack_fffffffffffffe8c;
  _union_332950 local_170;
  undefined8 uStack_168;
  UnityEngine_Object_o *local_160;
  _union_332950 local_158;
  undefined8 uStack_150;
  UnityEngine_Object_o *local_148;
  _union_332950 local_138;
  undefined8 uStack_130;
  UnityEngine_Object_o *local_128;
  _union_332950 local_118;
  undefined8 uStack_110;
  UnityEngine_Object_o *local_108;
  _union_332950 local_f8;
  undefined8 uStack_f0;
  UnityEngine_Object_o *local_e8;
  Characters_BaseCharacter_o *pCStack_e0;
  Characters_BaseCharacter_o *pCStack_d8;
  Characters_BaseCharacter_o *pCStack_d0;
  Characters_BaseCharacter_o *pCStack_c8;
  Characters_BaseCharacter_o *pCStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  Characters_BaseCharacter_o *pCStack_a8;
  Characters_BaseCharacter_o *pCStack_a0;
  Characters_BaseCharacter_o *pCStack_98;
  Characters_BaseCharacter_o *pCStack_90;
  undefined8 uStack_88;
  Characters_BaseCharacter_o *pCStack_80;
  Characters_BaseCharacter_o *pCStack_78;
  Characters_BaseCharacter_o *pCStack_70;
  Characters_BaseCharacter_o *pCStack_68;
  Characters_BaseCharacter_o *pCStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  Characters_ContinuousDamageHitbox_o *pCStack_48;
  
  if (g_data_057add87 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057add87 = '\x01';
  }
  __this_00 = (__this->fields)._characterDamageTimers;
  if (__this_00 != (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0) {
    method = (MethodInfo *)MethodInfo_Void_Clear;
    System_Collections_Generic_Dictionary_object__float___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_310C5C0 *)MethodInfo_Void_Clear);
    pSVar17 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._characterColliders;
    if (pSVar17 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      method = (MethodInfo *)MethodInfo_Void_Clear;
      System_Collections_Generic_Dictionary_object__object___Clear(pSVar17,(MethodInfo_3104FC0 *)MethodInfo_Void_Clear)
      ;
      pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._charactersInside;
      if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        method = (MethodInfo *)MethodInfo_Void_Clear;
        System_Collections_Generic_HashSet_object___Clear(pSVar3,(MethodInfo_33E0DA0 *)MethodInfo_Void_Clear);
        __this_01 = (__this->fields)._handlerDamageTimers;
        if (__this_01 != (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)0x0) {
          method = (MethodInfo *)MethodInfo_Void_Clear;
          System_Collections_Generic_Dictionary_object__float___Clear
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                     (MethodInfo_310C5C0 *)MethodInfo_Void_Clear);
          pSVar17 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (__this->fields)._handlerColliders;
          if (pSVar17 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            method = (MethodInfo *)MethodInfo_Void_Clear;
            System_Collections_Generic_Dictionary_object__object___Clear
                      (pSVar17,(MethodInfo_3104FC0 *)MethodInfo_Void_Clear);
            pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._handlersInside;
            if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
              method_01 = MethodInfo_Void_Clear;
              System_Collections_Generic_HashSet_object___Clear(pSVar3,(MethodInfo_33E0DA0 *)MethodInfo_Void_Clear);
              Characters_BaseHitbox__Activate((Characters_BaseHitbox_o *)__this,delay,length,method_01);
              return;
            }
          }
        }
      }
    }
  }
  pCVar12 = (Characters_BaseCharacter_o *)0x0;
  uStack_50 = il2cpp_runtime_helper_022b2c90();
  x = (Characters_BaseCharacter_o *)method;
  plVar14 = (long *)pCVar12;
  pCStack_48 = __this;
  if (g_data_057add89 == '\0') {
    plStack_58 = (long *)0x42aab1a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    plStack_58 = (long *)0x42aab26;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    plStack_58 = (long *)0x42aab32;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    plStack_58 = (long *)0x42aab3e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    plStack_58 = (long *)0x42aab4a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    plStack_58 = (long *)0x42aab56;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
    plStack_58 = (long *)0x42aab62;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    plStack_58 = (long *)0x42aab6e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    plStack_58 = (long *)0x42aab7a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    plStack_58 = (long *)0x42aab86;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    plStack_58 = (long *)0x42aab92;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    plVar14 = &TypeInfo_TeamInfo;
    plStack_58 = (long *)0x42aab9e;
    il2cpp_runtime_helper_023445d0();
    g_data_057add89 = '\x01';
  }
  if ((Characters_BaseCharacter_o *)method != (Characters_BaseCharacter_o *)0x0) {
    x = (Characters_BaseCharacter_o *)0x0;
    plStack_58 = (long *)0x42aabb8;
    plVar14 = (long *)method;
    pCVar10 = (Characters_BaseCharacter_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)method,(MethodInfo *)0x0);
    if (pCVar10 != (Characters_BaseCharacter_o *)0x0) {
      x = (Characters_BaseCharacter_o *)0x0;
      plStack_58 = (long *)0x42aabcb;
      __this_14 = (Characters_BaseCharacter_o *)
                  UnityEngine_Transform__get_root((UnityEngine_Transform_o *)pCVar10,(MethodInfo *)0x0);
      plVar14 = (long *)pCVar10;
      if (__this_14 != (Characters_BaseCharacter_o *)0x0) {
        x = (Characters_BaseCharacter_o *)0x0;
        plStack_58 = (long *)0x42aabde;
        pUVar11 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_14,(MethodInfo *)0x0);
        plVar14 = (long *)__this_14;
        if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
          plStack_58 = (long *)0x42aabf9;
          unaff_R13 = (Characters_BaseCharacter_o *)
                      UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
          x = (Characters_BaseCharacter_o *)0x0;
          plStack_58 = (long *)0x42aac06;
          plVar14 = (long *)method;
          pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)method,(MethodInfo *)0x0)
          ;
          if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
            plStack_58 = (long *)0x42aac21;
            unaff_R12 = (MethodInfo_33E10B0 **)
                        UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
            unaff_RBP = &TypeInfo_Object;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              plStack_58 = (long *)0x42aac3d;
              il2cpp_runtime_helper_02337ed0();
            }
            plStack_58 = (long *)0x42aac49;
            bVar9 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)unaff_R13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            if ((char)bVar9 == '\0') {
label_042aac7e:
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                plStack_58 = (long *)0x42aac90;
                il2cpp_runtime_helper_02337ed0();
              }
              x = (Characters_BaseCharacter_o *)0x0;
              plStack_58 = (long *)0x42aac9c;
              bVar9 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)unaff_R12,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if ((char)bVar9 == '\0') {
                return;
              }
              pSVar3 = *(System_Collections_Generic_HashSet_object__o **)&(pCVar12->fields).CurrentHealth;
              plVar14 = (long *)0x0;
              if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                plStack_58 = (long *)0x42aacc6;
                x = (Characters_BaseCharacter_o *)unaff_R12;
                bVar9 = System_Collections_Generic_HashSet_object___Contains
                                  (pSVar3,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Contains);
                if ((char)bVar9 != '\0') {
                  return;
                }
                pSVar3 = *(System_Collections_Generic_HashSet_object__o **)&(pCVar12->fields).CurrentHealth;
                plVar14 = (long *)0x0;
                if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                  plStack_58 = (long *)0x42aacf0;
                  x = (Characters_BaseCharacter_o *)unaff_R12;
                  System_Collections_Generic_HashSet_object___Add
                            (pSVar3,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Add);
                  pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(pCVar12->fields).Cache;
                  plVar14 = (long *)0x0;
                  if (pSVar4 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                    plStack_58 = (long *)0x42aad15;
                    x = (Characters_BaseCharacter_o *)unaff_R12;
                    System_Collections_Generic_Dictionary_object__float___set_Item
                              (pSVar4,(Il2CppObject *)unaff_R12,0.0,MethodInfo_Void_set_Item);
                    pSVar17 = *(System_Collections_Generic_Dictionary_object__object__o **)
                               &(pCVar12->fields).AI;
                    pCVar10 = (Characters_BaseCharacter_o *)unaff_R12;
                    pMVar7 = MethodInfo_Void_set_Item;
                    goto joined_r0x042aada9;
                  }
                }
              }
            }
            else {
              __this = (Characters_ContinuousDamageHitbox_o *)(pCVar12->fields).pvCache;
              if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
                plStack_58 = (long *)0x42aac69;
                il2cpp_runtime_helper_02337ed0();
              }
              plStack_58 = (long *)0x42aac76;
              x = unaff_R13;
              bVar9 = GameManagers_TeamInfo__SameTeam_446fee0
                                ((Characters_BaseCharacter_o *)__this,unaff_R13,(MethodInfo *)0x0);
              if ((char)bVar9 != '\0') goto label_042aac7e;
              pSVar3 = *(System_Collections_Generic_HashSet_object__o **)&(pCVar12->fields).CustomDamage;
              plVar14 = (long *)0x0;
              if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042aadce;
              plStack_58 = (long *)0x42aad56;
              x = unaff_R13;
              bVar9 = System_Collections_Generic_HashSet_object___Contains
                                (pSVar3,(Il2CppObject *)unaff_R13,MethodInfo_Boolean_Contains);
              if ((char)bVar9 != '\0') {
                return;
              }
              pSVar3 = *(System_Collections_Generic_HashSet_object__o **)&(pCVar12->fields).CustomDamage;
              plVar14 = (long *)0x0;
              if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042aadce;
              plStack_58 = (long *)0x42aad84;
              x = unaff_R13;
              System_Collections_Generic_HashSet_object___Add(pSVar3,(Il2CppObject *)unaff_R13,MethodInfo_Boolean_Add);
              pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                       (pCVar12->fields).FeedVictimName;
              plVar14 = (long *)0x0;
              if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042aadce;
              plStack_58 = (long *)0x42aada2;
              x = unaff_R13;
              System_Collections_Generic_Dictionary_object__float___set_Item
                        (pSVar4,(Il2CppObject *)unaff_R13,0.0,MethodInfo_Void_set_Item);
              pSVar17 = *(System_Collections_Generic_Dictionary_object__object__o **)&(pCVar12->fields).Dead;
              pCVar10 = unaff_R13;
              pMVar7 = MethodInfo_Void_set_Item;
joined_r0x042aada9:
              plVar14 = (long *)0x0;
              if (pSVar17 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                System_Collections_Generic_Dictionary_object__object___set_Item
                          (pSVar17,(Il2CppObject *)pCVar10,(Il2CppObject *)method,pMVar7);
                return;
              }
            }
          }
        }
      }
    }
  }
label_042aadce:
  plStack_58 = (long *)0x42aadd3;
  uStack_88 = il2cpp_runtime_helper_022b2c90();
  __this_15 = (long *)x;
  plVar15 = plVar14;
  pCStack_80 = (Characters_BaseCharacter_o *)__this;
  pCStack_78 = (Characters_BaseCharacter_o *)unaff_R12;
  pCStack_70 = unaff_R13;
  pCStack_68 = pCVar12;
  pCStack_60 = (Characters_BaseCharacter_o *)method;
  plStack_58 = unaff_RBP;
  if (g_data_057add8a == '\0') {
    pCStack_90 = (Characters_BaseCharacter_o *)0x42aae0a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pCStack_90 = (Characters_BaseCharacter_o *)0x42aae16;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pCStack_90 = (Characters_BaseCharacter_o *)0x42aae22;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pCStack_90 = (Characters_BaseCharacter_o *)0x42aae2e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pCStack_90 = (Characters_BaseCharacter_o *)0x42aae3a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    pCStack_90 = (Characters_BaseCharacter_o *)0x42aae46;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
    pCStack_90 = (Characters_BaseCharacter_o *)0x42aae52;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    pCStack_90 = (Characters_BaseCharacter_o *)0x42aae5e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    pCStack_90 = (Characters_BaseCharacter_o *)0x42aae6a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    pCStack_90 = (Characters_BaseCharacter_o *)0x42aae76;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    pCStack_90 = (Characters_BaseCharacter_o *)0x42aae82;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    plVar15 = &TypeInfo_TeamInfo;
    pCStack_90 = (Characters_BaseCharacter_o *)0x42aae8e;
    il2cpp_runtime_helper_023445d0();
    g_data_057add8a = '\x01';
  }
  if (x != (Characters_BaseCharacter_o *)0x0) {
    __this_15 = (long *)0x0;
    pCStack_90 = (Characters_BaseCharacter_o *)0x42aaea8;
    plVar15 = (long *)x;
    pCVar12 = (Characters_BaseCharacter_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
    if (pCVar12 != (Characters_BaseCharacter_o *)0x0) {
      __this_15 = (long *)0x0;
      pCStack_90 = (Characters_BaseCharacter_o *)0x42aaebb;
      pCVar10 = (Characters_BaseCharacter_o *)
                UnityEngine_Transform__get_root((UnityEngine_Transform_o *)pCVar12,(MethodInfo *)0x0);
      plVar15 = (long *)pCVar12;
      if (pCVar10 != (Characters_BaseCharacter_o *)0x0) {
        __this_15 = (long *)0x0;
        pCStack_90 = (Characters_BaseCharacter_o *)0x42aaece;
        pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pCVar10,(MethodInfo *)0x0);
        plVar15 = (long *)pCVar10;
        if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
          pCStack_90 = (Characters_BaseCharacter_o *)0x42aaee9;
          unaff_R13 = (Characters_BaseCharacter_o *)
                      UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
          __this_15 = (long *)0x0;
          pCStack_90 = (Characters_BaseCharacter_o *)0x42aaef6;
          plVar15 = (long *)x;
          pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
          if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
            pCStack_90 = (Characters_BaseCharacter_o *)0x42aaf11;
            unaff_R12 = (MethodInfo_33E10B0 **)
                        UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
            unaff_RBP = &TypeInfo_Object;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              pCStack_90 = (Characters_BaseCharacter_o *)0x42aaf2d;
              il2cpp_runtime_helper_02337ed0();
            }
            pCStack_90 = (Characters_BaseCharacter_o *)0x42aaf39;
            bVar9 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)unaff_R13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            if ((char)bVar9 == '\0') {
label_042aaf6e:
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                pCStack_90 = (Characters_BaseCharacter_o *)0x42aaf80;
                il2cpp_runtime_helper_02337ed0();
              }
              __this_15 = (long *)0x0;
              pCStack_90 = (Characters_BaseCharacter_o *)0x42aaf8c;
              bVar9 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)unaff_R12,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if ((char)bVar9 == '\0') {
                return;
              }
              pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
                        &(((Characters_BaseCharacter_o *)plVar14)->fields).CurrentHealth;
              plVar15 = (long *)0x0;
              if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                pCStack_90 = (Characters_BaseCharacter_o *)0x42aafb6;
                __this_15 = (long *)unaff_R12;
                bVar9 = System_Collections_Generic_HashSet_object___Contains
                                  (pSVar3,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Contains);
                if ((char)bVar9 != '\0') {
                  return;
                }
                pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
                          &(((Characters_BaseCharacter_o *)plVar14)->fields).CurrentHealth;
                plVar15 = (long *)0x0;
                if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                  pCStack_90 = (Characters_BaseCharacter_o *)0x42aafe0;
                  __this_15 = (long *)unaff_R12;
                  System_Collections_Generic_HashSet_object___Add
                            (pSVar3,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Add);
                  pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                           (((Characters_BaseCharacter_o *)plVar14)->fields).Cache;
                  plVar15 = (long *)0x0;
                  if (pSVar4 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                    pCStack_90 = (Characters_BaseCharacter_o *)0x42ab005;
                    __this_15 = (long *)unaff_R12;
                    System_Collections_Generic_Dictionary_object__float___set_Item
                              (pSVar4,(Il2CppObject *)unaff_R12,0.0,MethodInfo_Void_set_Item);
                    pSVar17 = *(System_Collections_Generic_Dictionary_object__object__o **)
                               &(((Characters_BaseCharacter_o *)plVar14)->fields).AI;
                    pCVar12 = (Characters_BaseCharacter_o *)unaff_R12;
                    pMVar7 = MethodInfo_Void_set_Item;
                    goto joined_r0x042ab099;
                  }
                }
              }
            }
            else {
              __this = (Characters_ContinuousDamageHitbox_o *)
                       (((Characters_BaseCharacter_o *)plVar14)->fields).pvCache;
              if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
                pCStack_90 = (Characters_BaseCharacter_o *)0x42aaf59;
                il2cpp_runtime_helper_02337ed0();
              }
              pCStack_90 = (Characters_BaseCharacter_o *)0x42aaf66;
              __this_15 = (long *)unaff_R13;
              bVar9 = GameManagers_TeamInfo__SameTeam_446fee0
                                ((Characters_BaseCharacter_o *)__this,unaff_R13,(MethodInfo *)0x0);
              if ((char)bVar9 != '\0') goto label_042aaf6e;
              pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
                        &(((Characters_BaseCharacter_o *)plVar14)->fields).CustomDamage;
              plVar15 = (long *)0x0;
              if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042ab0be;
              pCStack_90 = (Characters_BaseCharacter_o *)0x42ab046;
              __this_15 = (long *)unaff_R13;
              bVar9 = System_Collections_Generic_HashSet_object___Contains
                                (pSVar3,(Il2CppObject *)unaff_R13,MethodInfo_Boolean_Contains);
              if ((char)bVar9 != '\0') {
                return;
              }
              pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
                        &(((Characters_BaseCharacter_o *)plVar14)->fields).CustomDamage;
              plVar15 = (long *)0x0;
              if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042ab0be;
              pCStack_90 = (Characters_BaseCharacter_o *)0x42ab074;
              __this_15 = (long *)unaff_R13;
              System_Collections_Generic_HashSet_object___Add(pSVar3,(Il2CppObject *)unaff_R13,MethodInfo_Boolean_Add);
              pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                       (((Characters_BaseCharacter_o *)plVar14)->fields).FeedVictimName;
              plVar15 = (long *)0x0;
              if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042ab0be;
              pCStack_90 = (Characters_BaseCharacter_o *)0x42ab092;
              __this_15 = (long *)unaff_R13;
              System_Collections_Generic_Dictionary_object__float___set_Item
                        (pSVar4,(Il2CppObject *)unaff_R13,0.0,MethodInfo_Void_set_Item);
              pSVar17 = *(System_Collections_Generic_Dictionary_object__object__o **)
                         &(((Characters_BaseCharacter_o *)plVar14)->fields).Dead;
              pCVar12 = unaff_R13;
              pMVar7 = MethodInfo_Void_set_Item;
joined_r0x042ab099:
              plVar15 = (long *)0x0;
              if (pSVar17 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                System_Collections_Generic_Dictionary_object__object___set_Item
                          (pSVar17,(Il2CppObject *)pCVar12,(Il2CppObject *)x,pMVar7);
                return;
              }
            }
          }
        }
      }
    }
  }
label_042ab0be:
  pCStack_90 = (Characters_BaseCharacter_o *)0x42ab0c3;
  uStack_b0 = il2cpp_runtime_helper_022b2c90();
  plVar16 = plVar15;
  pCStack_a8 = (Characters_BaseCharacter_o *)__this;
  pCStack_a0 = (Characters_BaseCharacter_o *)unaff_R12;
  pCStack_98 = (Characters_BaseCharacter_o *)plVar14;
  pCStack_90 = x;
  if (g_data_057add8b == '\0') {
    plStack_b8 = (long *)0x42ab0f7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    plStack_b8 = (long *)0x42ab103;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    plStack_b8 = (long *)0x42ab10f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    plStack_b8 = (long *)0x42ab11b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    plStack_b8 = (long *)0x42ab127;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    plStack_b8 = (long *)0x42ab133;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
    plStack_b8 = (long *)0x42ab13f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    plStack_b8 = (long *)0x42ab14b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    plStack_b8 = (long *)0x42ab157;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    plStack_b8 = (long *)0x42ab163;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    plVar16 = &TypeInfo_Object;
    plStack_b8 = (long *)0x42ab16f;
    il2cpp_runtime_helper_023445d0();
    g_data_057add8b = '\x01';
  }
  if ((Characters_BaseCharacter_o *)__this_15 != (Characters_BaseCharacter_o *)0x0) {
    plStack_b8 = (long *)0x42ab189;
    plVar16 = __this_15;
    pCVar12 = (Characters_BaseCharacter_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_15,(MethodInfo *)0x0);
    if (pCVar12 == (Characters_BaseCharacter_o *)0x0) goto label_042ab35d;
    plStack_b8 = (long *)0x42ab19c;
    pCVar10 = (Characters_BaseCharacter_o *)
              UnityEngine_Transform__get_root((UnityEngine_Transform_o *)pCVar12,(MethodInfo *)0x0);
    plVar16 = (long *)pCVar12;
    if (pCVar10 == (Characters_BaseCharacter_o *)0x0) goto label_042ab35d;
    plStack_b8 = (long *)0x42ab1af;
    pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pCVar10,(MethodInfo *)0x0);
    plVar16 = (long *)pCVar10;
    if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_042ab35d;
    plStack_b8 = (long *)0x42ab1ca;
    x = (Characters_BaseCharacter_o *)UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    plStack_b8 = (long *)0x42ab1d7;
    plVar16 = __this_15;
    pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_15,(MethodInfo *)0x0);
    if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_042ab35d;
    plStack_b8 = (long *)0x42ab1f2;
    unaff_R12 = (MethodInfo_33E10B0 **)UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
    __this_15 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      plStack_b8 = (long *)0x42ab20d;
      il2cpp_runtime_helper_02337ed0();
    }
    plStack_b8 = (long *)0x42ab219;
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
                &(((Characters_BaseCharacter_o *)plVar15)->fields).CustomDamage;
      plVar16 = (long *)0x0;
      if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042ab35d;
      plStack_b8 = (long *)0x42ab240;
      bVar9 = System_Collections_Generic_HashSet_object___Contains(pSVar3,(Il2CppObject *)x,MethodInfo_Boolean_Contains);
      if ((char)bVar9 != '\0') {
        pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
                  &(((Characters_BaseCharacter_o *)plVar15)->fields).CustomDamage;
        plVar16 = (long *)0x0;
        if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042ab35d;
        plStack_b8 = (long *)0x42ab263;
        System_Collections_Generic_HashSet_object___Remove(pSVar3,(Il2CppObject *)x,MethodInfo_Boolean_Remove);
        pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 (((Characters_BaseCharacter_o *)plVar15)->fields).FeedVictimName;
        plVar16 = (long *)0x0;
        if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042ab35d;
        plStack_b8 = (long *)0x42ab282;
        System_Collections_Generic_Dictionary_object__float___Remove(pSVar4,(Il2CppObject *)x,MethodInfo_Boolean_Remove);
        pSVar17 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   &(((Characters_BaseCharacter_o *)plVar15)->fields).Dead;
        plVar16 = (long *)0x0;
        method_00 = MethodInfo_Boolean_Remove;
        pCVar12 = x;
        if (pSVar17 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042ab35d;
        goto label_042ab341;
      }
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      plStack_b8 = (long *)0x42ab2b2;
      il2cpp_runtime_helper_02337ed0();
    }
    plStack_b8 = (long *)0x42ab2be;
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)unaff_R12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      return;
    }
    pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
              &(((Characters_BaseCharacter_o *)plVar15)->fields).CurrentHealth;
    plVar16 = (long *)0x0;
    if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      plStack_b8 = (long *)0x42ab2e8;
      bVar9 = System_Collections_Generic_HashSet_object___Contains
                        (pSVar3,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Contains);
      if ((char)bVar9 == '\0') {
        return;
      }
      pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
                &(((Characters_BaseCharacter_o *)plVar15)->fields).CurrentHealth;
      plVar16 = (long *)0x0;
      if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        plStack_b8 = (long *)0x42ab30a;
        System_Collections_Generic_HashSet_object___Remove(pSVar3,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Remove);
        pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 (((Characters_BaseCharacter_o *)plVar15)->fields).Cache;
        plVar16 = (long *)0x0;
        if (pSVar4 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
          plStack_b8 = (long *)0x42ab328;
          System_Collections_Generic_Dictionary_object__float___Remove
                    (pSVar4,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Remove);
          pSVar17 = *(System_Collections_Generic_Dictionary_object__object__o **)
                     &(((Characters_BaseCharacter_o *)plVar15)->fields).AI;
          plVar16 = (long *)0x0;
          method_00 = MethodInfo_Boolean_Remove;
          pCVar12 = (Characters_BaseCharacter_o *)unaff_R12;
          if (pSVar17 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_042ab341:
            System_Collections_Generic_Dictionary_object__object___Remove
                      (pSVar17,(Il2CppObject *)pCVar12,method_00);
            return;
          }
        }
      }
    }
  }
label_042ab35d:
  plStack_b8 = (long *)0x42ab362;
  il2cpp_runtime_helper_022b2c90();
  pCStack_e0 = (Characters_BaseCharacter_o *)__this_15;
  pCStack_d8 = (Characters_BaseCharacter_o *)unaff_R12;
  pCStack_d0 = unaff_R13;
  pCStack_c8 = (Characters_BaseCharacter_o *)plVar15;
  pCStack_c0 = x;
  plStack_b8 = unaff_RBP;
  if (g_data_057add8c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_CustomLogic_CustomLogicCollisionH);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Characters_BaseCharacter_GetEnume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicCollisionHand);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Characters_BaseCharacter_GetEnumerat);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Characters_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_CustomLogic_CustomLogicCollisionHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_CustomLogicCollisionHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057add8c = '\x01';
  }
  local_f8.genericMethod = (void *)0x0;
  uStack_f0 = 0;
  local_e8 = (UnityEngine_Object_o *)0x0;
  local_118.genericMethod = (void *)0x0;
  uStack_110 = 0;
  local_108 = (UnityEngine_Object_o *)0x0;
  local_138.genericMethod = (void *)0x0;
  uStack_130 = 0;
  local_128 = (UnityEngine_Object_o *)0x0;
  local_158.genericMethod = (void *)0x0;
  uStack_150 = 0;
  local_148 = (UnityEngine_Object_o *)0x0;
  __this_02 = *(UnityEngine_Collider_o **)
               &(((Characters_BaseCharacter_o *)plVar16)->fields).HasExplicitNameTag;
  if (__this_02 == (UnityEngine_Collider_o *)0x0) goto label_042abd2d;
  bVar9 = UnityEngine_Collider__get_enabled(__this_02,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return;
  }
  unaff_R12 = (MethodInfo_33E10B0 **)il2cpp_runtime_helper_023052d0(TypeInfo_List_BaseCharacter);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)unaff_R12,MethodInfo_List_1_Characters_BaseCharacter);
  pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
            &(((Characters_BaseCharacter_o *)plVar16)->fields).CustomDamage;
  if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042abd2d;
  System_Collections_Generic_HashSet_object___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)&local_170,pSVar3,MethodInfo_HashSet_1_T_Enumerator_Characters_BaseCharacter_GetEnume);
  local_e8 = local_160;
  local_f8 = local_170;
  uStack_f0 = uStack_168;
  while (__this_03.fields._8_8_ = plVar16,
        __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffe78,
        __this_03.fields._current._0_4_ = in_stack_fffffffffffffe88,
        __this_03.fields._current._4_4_ = in_stack_fffffffffffffe8c,
        bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          (__this_03,(MethodInfo_3219C40 *)&local_f8), pUVar8 = local_e8, (char)bVar9 != '\0')
  {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar9 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    lVar6 = MethodInfo_Void_Add;
    if ((char)bVar9 == '\0') {
      if (pUVar8 == (UnityEngine_Object_o *)0x0) goto label_042abd0f;
      if (*(char *)&pUVar8[4].monitor != '\0') goto label_042ab6bc;
      pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
               (((Characters_BaseCharacter_o *)plVar16)->fields).FeedVictimName;
      if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd32;
      bVar9 = System_Collections_Generic_Dictionary_object__float___ContainsKey
                        (pSVar4,(Il2CppObject *)pUVar8,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar9 != '\0') {
        pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 (((Characters_BaseCharacter_o *)plVar16)->fields).FeedVictimName;
        if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd4b;
        in_stack_fffffffffffffe8c =
             System_Collections_Generic_Dictionary_object__float___get_Item
                       (pSVar4,(Il2CppObject *)pUVar8,MethodInfo_Single_get_Item);
        fVar18 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        System_Collections_Generic_Dictionary_object__float___set_Item
                  (pSVar4,(Il2CppObject *)pUVar8,in_stack_fffffffffffffe8c + fVar18,MethodInfo_Void_set_Item);
        pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 (((Characters_BaseCharacter_o *)plVar16)->fields).FeedVictimName;
        if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd46;
        fVar18 = System_Collections_Generic_Dictionary_object__float___get_Item
                           (pSVar4,(Il2CppObject *)pUVar8,MethodInfo_Single_get_Item);
        if (*(float *)((long)&(((Characters_BaseCharacter_o *)plVar16)->fields).FeedKillerName + 4) <= fVar18)
        {
          pSVar17 = *(System_Collections_Generic_Dictionary_object__object__o **)
                     &(((Characters_BaseCharacter_o *)plVar16)->fields).Dead;
          if (pSVar17 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042abd41;
          bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                            (pSVar17,(Il2CppObject *)pUVar8,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar9 != '\0') {
            pSVar17 = *(System_Collections_Generic_Dictionary_object__object__o **)
                       &(((Characters_BaseCharacter_o *)plVar16)->fields).Dead;
            if (pSVar17 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042abd55;
            pIVar13 = System_Collections_Generic_Dictionary_object__object___get_Item
                                (pSVar17,(Il2CppObject *)pUVar8,MethodInfo_Collider_get_Item);
            (*(((Characters_BaseCharacter_o *)plVar16)->klass->vtable)._7_unknown.methodPtr)
                      (plVar16,pUVar8,pIVar13,
                       (((Characters_BaseCharacter_o *)plVar16)->klass->vtable)._7_unknown.method);
          }
          pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                   (((Characters_BaseCharacter_o *)plVar16)->fields).FeedVictimName;
          if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd50;
          System_Collections_Generic_Dictionary_object__float___set_Item
                    (pSVar4,(Il2CppObject *)pUVar8,0.0,MethodInfo_Void_set_Item);
        }
      }
    }
    else {
label_042ab6bc:
      if ((Characters_BaseCharacter_o *)unaff_R12 == (Characters_BaseCharacter_o *)0x0) goto label_042abd05;
      piVar1 = (int *)((long)&(((Characters_BaseCharacter_o *)unaff_R12)->fields).m_CancellationTokenSource +
                      4);
      *piVar1 = *piVar1 + 1;
      lVar5 = (((Characters_BaseCharacter_o *)unaff_R12)->fields).m_CachedPtr;
      if (lVar5 == 0) goto label_042abd0a;
      uVar2 = *(uint *)&(((Characters_BaseCharacter_o *)unaff_R12)->fields).m_CancellationTokenSource;
      if (uVar2 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)&(((Characters_BaseCharacter_o *)unaff_R12)->fields).m_CancellationTokenSource = uVar2 + 1;
        *(UnityEngine_Object_o **)(lVar5 + 0x20 + (long)(int)uVar2 * 8) = pUVar8;
        il2cpp_runtime_helper_022b4080(lVar5 + 0x20 + (long)(int)uVar2 * 8,pUVar8);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)unaff_R12,(Il2CppObject *)pUVar8,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  __this_04.fields._8_8_ = plVar16;
  __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffe78;
  __this_04.fields._current._0_4_ = in_stack_fffffffffffffe88;
  __this_04.fields._current._4_4_ = in_stack_fffffffffffffe8c;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_04,(MethodInfo_3219C30 *)&local_f8);
  if ((Characters_BaseCharacter_o *)unaff_R12 == (Characters_BaseCharacter_o *)0x0) goto label_042abd2d;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&local_170,
             (System_Collections_Generic_List_object__o *)unaff_R12,MethodInfo_List_1_T_Enumerator_Characters_BaseCharacter_GetEnumerat);
  local_108 = local_160;
  local_118 = local_170;
  uStack_110 = uStack_168;
  unaff_R12 = &MethodInfo_Boolean_Remove;
  while( true ) {
    __this_05.fields._8_8_ = plVar16;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe78;
    __this_05.fields._current._0_4_ = in_stack_fffffffffffffe88;
    __this_05.fields._current._4_4_ = in_stack_fffffffffffffe8c;
    bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_05,(MethodInfo_321A1D0 *)&local_118);
    pUVar8 = local_108;
    if ((char)bVar9 == '\0') {
      __this_06.fields._8_8_ = plVar16;
      __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe78;
      __this_06.fields._current._0_4_ = in_stack_fffffffffffffe88;
      __this_06.fields._current._4_4_ = in_stack_fffffffffffffe8c;
      System_Collections_Generic_List_Enumerator_object___Dispose(__this_06,(MethodInfo_321A1C0 *)&local_118);
      unaff_R12 = (MethodInfo_33E10B0 **)il2cpp_runtime_helper_023052d0(TypeInfo_List_CustomLogicCollisionHandler);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)unaff_R12,MethodInfo_List_1_CustomLogic_CustomLogicCollisionHandler);
      pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
                &(((Characters_BaseCharacter_o *)plVar16)->fields).CurrentHealth;
      if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042abd2d;
      System_Collections_Generic_HashSet_object___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)&local_170,pSVar3,MethodInfo_HashSet_1_T_Enumerator_CustomLogic_CustomLogicCollisionH);
      local_128 = local_160;
      local_138 = local_170;
      uStack_130 = uStack_168;
      while (__this_07.fields._8_8_ = plVar16,
            __this_07.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffe78,
            __this_07.fields._current._0_4_ = in_stack_fffffffffffffe88,
            __this_07.fields._current._4_4_ = in_stack_fffffffffffffe8c,
            bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                              (__this_07,(MethodInfo_3219C40 *)&local_138), pUVar8 = local_128,
            (char)bVar9 != '\0') {
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar9 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        lVar6 = MethodInfo_Void_Add;
        if ((char)bVar9 == '\0') {
          pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                   (((Characters_BaseCharacter_o *)plVar16)->fields).Cache;
          if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd14;
          bVar9 = System_Collections_Generic_Dictionary_object__float___ContainsKey
                            (pSVar4,(Il2CppObject *)pUVar8,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar9 != '\0') {
            pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                     (((Characters_BaseCharacter_o *)plVar16)->fields).Cache;
            if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd28;
            in_stack_fffffffffffffe8c =
                 System_Collections_Generic_Dictionary_object__float___get_Item
                           (pSVar4,(Il2CppObject *)pUVar8,MethodInfo_Single_get_Item);
            fVar18 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            System_Collections_Generic_Dictionary_object__float___set_Item
                      (pSVar4,(Il2CppObject *)pUVar8,in_stack_fffffffffffffe8c + fVar18,MethodInfo_Void_set_Item);
            pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                     (((Characters_BaseCharacter_o *)plVar16)->fields).Cache;
            if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd23;
            fVar18 = System_Collections_Generic_Dictionary_object__float___get_Item
                               (pSVar4,(Il2CppObject *)pUVar8,MethodInfo_Single_get_Item);
            if (*(float *)((long)&(((Characters_BaseCharacter_o *)plVar16)->fields).FeedKillerName + 4) <=
                fVar18) {
              pSVar17 = *(System_Collections_Generic_Dictionary_object__object__o **)
                         &(((Characters_BaseCharacter_o *)plVar16)->fields).AI;
              if (pSVar17 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto label_042abd37;
              bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                (pSVar17,(Il2CppObject *)pUVar8,MethodInfo_Boolean_ContainsKey);
              if ((char)bVar9 != '\0') {
                pSVar17 = *(System_Collections_Generic_Dictionary_object__object__o **)
                           &(((Characters_BaseCharacter_o *)plVar16)->fields).AI;
                if (pSVar17 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                goto label_042abd5a;
                pIVar13 = System_Collections_Generic_Dictionary_object__object___get_Item
                                    (pSVar17,(Il2CppObject *)pUVar8,MethodInfo_Collider_get_Item);
                (*(((Characters_BaseCharacter_o *)plVar16)->klass->vtable)._8_unknown.methodPtr)
                          (plVar16,pUVar8,pIVar13,
                           (((Characters_BaseCharacter_o *)plVar16)->klass->vtable)._8_unknown.method);
              }
              pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                       (((Characters_BaseCharacter_o *)plVar16)->fields).Cache;
              if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd3c;
              System_Collections_Generic_Dictionary_object__float___set_Item
                        (pSVar4,(Il2CppObject *)pUVar8,0.0,MethodInfo_Void_set_Item);
            }
          }
        }
        else {
          if ((Characters_BaseCharacter_o *)unaff_R12 == (Characters_BaseCharacter_o *)0x0) goto label_042abd19;
          piVar1 = (int *)((long)&(((Characters_BaseCharacter_o *)unaff_R12)->fields).
                                  m_CancellationTokenSource + 4);
          *piVar1 = *piVar1 + 1;
          lVar5 = (((Characters_BaseCharacter_o *)unaff_R12)->fields).m_CachedPtr;
          if (lVar5 == 0) goto label_042abd1e;
          uVar2 = *(uint *)&(((Characters_BaseCharacter_o *)unaff_R12)->fields).m_CancellationTokenSource;
          if (uVar2 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)&(((Characters_BaseCharacter_o *)unaff_R12)->fields).m_CancellationTokenSource =
                 uVar2 + 1;
            *(UnityEngine_Object_o **)(lVar5 + 0x20 + (long)(int)uVar2 * 8) = pUVar8;
            il2cpp_runtime_helper_022b4080(lVar5 + 0x20 + (long)(int)uVar2 * 8,pUVar8);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)unaff_R12,(Il2CppObject *)pUVar8,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      __this_08.fields._8_8_ = plVar16;
      __this_08.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffe78;
      __this_08.fields._current._0_4_ = in_stack_fffffffffffffe88;
      __this_08.fields._current._4_4_ = in_stack_fffffffffffffe8c;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_08,(MethodInfo_3219C30 *)&local_138);
      goto label_042abbee;
    }
    pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
              &(((Characters_BaseCharacter_o *)plVar16)->fields).CustomDamage;
    if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) break;
    System_Collections_Generic_HashSet_object___Remove(pSVar3,(Il2CppObject *)local_108,MethodInfo_Boolean_Remove);
    pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
             (((Characters_BaseCharacter_o *)plVar16)->fields).FeedVictimName;
    if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abcec;
    System_Collections_Generic_Dictionary_object__float___Remove(pSVar4,(Il2CppObject *)pUVar8,MethodInfo_Boolean_Remove);
    pSVar17 = *(System_Collections_Generic_Dictionary_object__object__o **)
               &(((Characters_BaseCharacter_o *)plVar16)->fields).Dead;
    if (pSVar17 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042abcf1;
    System_Collections_Generic_Dictionary_object__object___Remove(pSVar17,(Il2CppObject *)pUVar8,MethodInfo_Boolean_Remove)
    ;
  }
  il2cpp_runtime_helper_022b2c90();
label_042abcec:
  il2cpp_runtime_helper_022b2c90();
label_042abcf1:
  il2cpp_runtime_helper_022b2c90();
label_042abcf6:
  il2cpp_runtime_helper_022b2c90();
label_042abcfb:
  il2cpp_runtime_helper_022b2c90();
  do {
    il2cpp_runtime_helper_022b2c90();
label_042abd05:
    il2cpp_runtime_helper_022b2c90();
label_042abd0a:
    il2cpp_runtime_helper_022b2c90();
label_042abd0f:
    il2cpp_runtime_helper_022b2c90();
label_042abd14:
    il2cpp_runtime_helper_022b2c90();
label_042abd19:
    il2cpp_runtime_helper_022b2c90();
label_042abd1e:
    il2cpp_runtime_helper_022b2c90();
label_042abd23:
    il2cpp_runtime_helper_022b2c90();
label_042abd28:
    il2cpp_runtime_helper_022b2c90();
label_042abd2d:
    do {
      il2cpp_runtime_helper_022b2c90();
label_042abd32:
      il2cpp_runtime_helper_022b2c90();
label_042abd37:
      il2cpp_runtime_helper_022b2c90();
label_042abd3c:
      il2cpp_runtime_helper_022b2c90();
label_042abd41:
      il2cpp_runtime_helper_022b2c90();
label_042abd46:
      il2cpp_runtime_helper_022b2c90();
label_042abd4b:
      il2cpp_runtime_helper_022b2c90();
label_042abd50:
      il2cpp_runtime_helper_022b2c90();
label_042abd55:
      il2cpp_runtime_helper_022b2c90();
label_042abd5a:
      auVar19 = il2cpp_runtime_helper_022b2c90();
      if (auVar19._8_4_ != 1) {
        __this_12.fields._8_8_ = plVar16;
        __this_12.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffe78;
        __this_12.fields._current._0_4_ = in_stack_fffffffffffffe88;
        __this_12.fields._current._4_4_ = in_stack_fffffffffffffe8c;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_12,(MethodInfo_3219C30 *)&local_138);
label_042ac20c:
        _Unwind_Resume(auVar19._0_8_);
      }
      plVar14 = (long *)__cxa_begin_catch(auVar19._0_8_);
      lVar6 = *plVar14;
      __cxa_end_catch();
      __this_11.fields._8_8_ = plVar16;
      __this_11.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffe78;
      __this_11.fields._current._0_4_ = in_stack_fffffffffffffe88;
      __this_11.fields._current._4_4_ = in_stack_fffffffffffffe8c;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_11,(MethodInfo_3219C30 *)&local_138);
      if (lVar6 != 0) {
        il2cpp_runtime_helper_022fefe0(lVar6);
        __this_13.fields._8_8_ = plVar16;
        __this_13.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffe78;
        __this_13.fields._current._0_4_ = in_stack_fffffffffffffe88;
        __this_13.fields._current._4_4_ = in_stack_fffffffffffffe8c;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_13,(MethodInfo_3219C30 *)&local_f8);
        goto label_042ac20c;
      }
label_042abbee:
    } while ((Characters_BaseCharacter_o *)unaff_R12 == (Characters_BaseCharacter_o *)0x0);
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&local_170,
               (System_Collections_Generic_List_object__o *)unaff_R12,MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicCollisionHand);
    local_148 = local_160;
    local_158 = local_170;
    uStack_150 = uStack_168;
    unaff_R12 = &MethodInfo_Boolean_Remove;
    while( true ) {
      __this_09.fields._8_8_ = plVar16;
      __this_09.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe78;
      __this_09.fields._current._0_4_ = in_stack_fffffffffffffe88;
      __this_09.fields._current._4_4_ = in_stack_fffffffffffffe8c;
      bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_09,(MethodInfo_321A1D0 *)&local_158);
      pUVar8 = local_148;
      if ((char)bVar9 == '\0') {
        __this_10.fields._8_8_ = plVar16;
        __this_10.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe78;
        __this_10.fields._current._0_4_ = in_stack_fffffffffffffe88;
        __this_10.fields._current._4_4_ = in_stack_fffffffffffffe8c;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_10,(MethodInfo_321A1C0 *)&local_158);
        return;
      }
      pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
                &(((Characters_BaseCharacter_o *)plVar16)->fields).CurrentHealth;
      if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042abcf6;
      System_Collections_Generic_HashSet_object___Remove(pSVar3,(Il2CppObject *)local_148,MethodInfo_Boolean_Remove);
      pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
               (((Characters_BaseCharacter_o *)plVar16)->fields).Cache;
      if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abcfb;
      System_Collections_Generic_Dictionary_object__float___Remove(pSVar4,(Il2CppObject *)pUVar8,MethodInfo_Boolean_Remove)
      ;
      pSVar17 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 &(((Characters_BaseCharacter_o *)plVar16)->fields).AI;
      if (pSVar17 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      System_Collections_Generic_Dictionary_object__object___Remove
                (pSVar17,(Il2CppObject *)pUVar8,MethodInfo_Boolean_Remove);
    }
  } while( true );
}


// Characters.ContinuousDamageHitbox$$Deactivate
// il2cpp: void Characters_ContinuousDamageHitbox__Deactivate (Characters_ContinuousDamageHitbox_o* __this, const MethodInfo* method);
// 0x42aa8b0

void Characters_ContinuousDamageHitbox__Deactivate
               (Characters_ContinuousDamageHitbox_o *__this,MethodInfo *method)

{
  int *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_BaseCharacter__float__o *__this_00;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *__this_01;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar4;
  UnityEngine_Collider_o *__this_02;
  long lVar5;
  long lVar6;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_07;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  System_Collections_Generic_List_Enumerator_object__o __this_10;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_11;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_12;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_13;
  MethodInfo_3104DF0 *pMVar7;
  UnityEngine_Object_o *pUVar8;
  bool_conflict bVar9;
  Characters_BaseCharacter_o *pCVar10;
  Characters_BaseCharacter_o *__this_14;
  UnityEngine_GameObject_o *pUVar11;
  Characters_BaseCharacter_o *pCVar12;
  Characters_BaseCharacter_o *pCVar13;
  Characters_BaseCharacter_o *x;
  Il2CppObject *pIVar14;
  MethodInfo_3106630 *method_00;
  long *__this_15;
  long *unaff_RBP;
  MethodInfo *pMVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  System_Collections_Generic_Dictionary_object__object__o *pSVar19;
  MethodInfo_33E10B0 **unaff_R12;
  Characters_BaseCharacter_o *unaff_R13;
  float fVar20;
  float in_XMM1_Da;
  undefined1 auVar21 [12];
  undefined8 in_stack_fffffffffffffe70;
  undefined4 in_stack_fffffffffffffe80;
  float in_stack_fffffffffffffe84;
  _union_332950 _Stack_178;
  undefined8 uStack_170;
  UnityEngine_Object_o *pUStack_168;
  _union_332950 _Stack_160;
  undefined8 uStack_158;
  UnityEngine_Object_o *pUStack_150;
  _union_332950 _Stack_140;
  undefined8 uStack_138;
  UnityEngine_Object_o *pUStack_130;
  _union_332950 _Stack_120;
  undefined8 uStack_118;
  UnityEngine_Object_o *pUStack_110;
  _union_332950 _Stack_100;
  undefined8 uStack_f8;
  UnityEngine_Object_o *pUStack_f0;
  Characters_BaseCharacter_o *pCStack_e8;
  Characters_BaseCharacter_o *pCStack_e0;
  Characters_BaseCharacter_o *pCStack_d8;
  Characters_BaseCharacter_o *pCStack_d0;
  Characters_BaseCharacter_o *pCStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  Characters_BaseCharacter_o *pCStack_b0;
  Characters_BaseCharacter_o *pCStack_a8;
  Characters_BaseCharacter_o *pCStack_a0;
  Characters_BaseCharacter_o *pCStack_98;
  undefined8 uStack_90;
  Characters_BaseCharacter_o *pCStack_88;
  Characters_BaseCharacter_o *pCStack_80;
  Characters_BaseCharacter_o *pCStack_78;
  Characters_BaseCharacter_o *pCStack_70;
  Characters_BaseCharacter_o *pCStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  Characters_BaseCharacter_o *pCStack_50;
  
  if (g_data_057add88 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057add88 = '\x01';
  }
  __this_00 = (__this->fields)._characterDamageTimers;
  if (__this_00 != (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0) {
    method = (MethodInfo *)MethodInfo_Void_Clear;
    System_Collections_Generic_Dictionary_object__float___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_310C5C0 *)MethodInfo_Void_Clear);
    pSVar19 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._characterColliders;
    if (pSVar19 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      method = (MethodInfo *)MethodInfo_Void_Clear;
      System_Collections_Generic_Dictionary_object__object___Clear(pSVar19,(MethodInfo_3104FC0 *)MethodInfo_Void_Clear)
      ;
      pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._charactersInside;
      if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        method = (MethodInfo *)MethodInfo_Void_Clear;
        System_Collections_Generic_HashSet_object___Clear(pSVar3,(MethodInfo_33E0DA0 *)MethodInfo_Void_Clear);
        __this_01 = (__this->fields)._handlerDamageTimers;
        if (__this_01 != (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)0x0) {
          method = (MethodInfo *)MethodInfo_Void_Clear;
          System_Collections_Generic_Dictionary_object__float___Clear
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                     (MethodInfo_310C5C0 *)MethodInfo_Void_Clear);
          pSVar19 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (__this->fields)._handlerColliders;
          if (pSVar19 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            method = (MethodInfo *)MethodInfo_Void_Clear;
            System_Collections_Generic_Dictionary_object__object___Clear
                      (pSVar19,(MethodInfo_3104FC0 *)MethodInfo_Void_Clear);
            pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._handlersInside;
            if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
              pMVar15 = MethodInfo_Void_Clear;
              System_Collections_Generic_HashSet_object___Clear(pSVar3,(MethodInfo_33E0DA0 *)MethodInfo_Void_Clear);
              Characters_BaseHitbox__Deactivate((Characters_BaseHitbox_o *)__this,pMVar15);
              return;
            }
          }
        }
      }
    }
  }
  pCVar13 = (Characters_BaseCharacter_o *)0x0;
  fVar20 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057add87 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057add87 = '\x01';
  }
  pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(pCVar13->fields).FeedVictimName;
  if (pSVar4 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    method = (MethodInfo *)MethodInfo_Void_Clear;
    System_Collections_Generic_Dictionary_object__float___Clear(pSVar4,(MethodInfo_310C5C0 *)MethodInfo_Void_Clear);
    pSVar19 = *(System_Collections_Generic_Dictionary_object__object__o **)&(pCVar13->fields).Dead;
    if (pSVar19 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      method = (MethodInfo *)MethodInfo_Void_Clear;
      System_Collections_Generic_Dictionary_object__object___Clear(pSVar19,(MethodInfo_3104FC0 *)MethodInfo_Void_Clear)
      ;
      pSVar3 = *(System_Collections_Generic_HashSet_object__o **)&(pCVar13->fields).CustomDamage;
      if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        method = (MethodInfo *)MethodInfo_Void_Clear;
        System_Collections_Generic_HashSet_object___Clear(pSVar3,(MethodInfo_33E0DA0 *)MethodInfo_Void_Clear);
        pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(pCVar13->fields).Cache;
        if (pSVar4 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
          method = (MethodInfo *)MethodInfo_Void_Clear;
          System_Collections_Generic_Dictionary_object__float___Clear
                    (pSVar4,(MethodInfo_310C5C0 *)MethodInfo_Void_Clear);
          pSVar19 = *(System_Collections_Generic_Dictionary_object__object__o **)&(pCVar13->fields).AI;
          if (pSVar19 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            method = (MethodInfo *)MethodInfo_Void_Clear;
            System_Collections_Generic_Dictionary_object__object___Clear
                      (pSVar19,(MethodInfo_3104FC0 *)MethodInfo_Void_Clear);
            pSVar3 = *(System_Collections_Generic_HashSet_object__o **)&(pCVar13->fields).CurrentHealth;
            if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
              pMVar15 = MethodInfo_Void_Clear;
              System_Collections_Generic_HashSet_object___Clear(pSVar3,(MethodInfo_33E0DA0 *)MethodInfo_Void_Clear);
              Characters_BaseHitbox__Activate((Characters_BaseHitbox_o *)pCVar13,fVar20,in_XMM1_Da,pMVar15);
              return;
            }
          }
        }
      }
    }
  }
  pCVar12 = (Characters_BaseCharacter_o *)0x0;
  uStack_58 = il2cpp_runtime_helper_022b2c90();
  x = (Characters_BaseCharacter_o *)method;
  plVar16 = (long *)pCVar12;
  pCStack_50 = pCVar13;
  if (g_data_057add89 == '\0') {
    plStack_60 = (long *)0x42aab1a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    plStack_60 = (long *)0x42aab26;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    plStack_60 = (long *)0x42aab32;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    plStack_60 = (long *)0x42aab3e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    plStack_60 = (long *)0x42aab4a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    plStack_60 = (long *)0x42aab56;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
    plStack_60 = (long *)0x42aab62;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    plStack_60 = (long *)0x42aab6e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    plStack_60 = (long *)0x42aab7a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    plStack_60 = (long *)0x42aab86;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    plStack_60 = (long *)0x42aab92;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    plVar16 = &TypeInfo_TeamInfo;
    plStack_60 = (long *)0x42aab9e;
    il2cpp_runtime_helper_023445d0();
    g_data_057add89 = '\x01';
  }
  if ((Characters_BaseCharacter_o *)method != (Characters_BaseCharacter_o *)0x0) {
    x = (Characters_BaseCharacter_o *)0x0;
    plStack_60 = (long *)0x42aabb8;
    plVar16 = (long *)method;
    pCVar10 = (Characters_BaseCharacter_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)method,(MethodInfo *)0x0);
    if (pCVar10 != (Characters_BaseCharacter_o *)0x0) {
      x = (Characters_BaseCharacter_o *)0x0;
      plStack_60 = (long *)0x42aabcb;
      __this_14 = (Characters_BaseCharacter_o *)
                  UnityEngine_Transform__get_root((UnityEngine_Transform_o *)pCVar10,(MethodInfo *)0x0);
      plVar16 = (long *)pCVar10;
      if (__this_14 != (Characters_BaseCharacter_o *)0x0) {
        x = (Characters_BaseCharacter_o *)0x0;
        plStack_60 = (long *)0x42aabde;
        pUVar11 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_14,(MethodInfo *)0x0);
        plVar16 = (long *)__this_14;
        if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
          plStack_60 = (long *)0x42aabf9;
          unaff_R13 = (Characters_BaseCharacter_o *)
                      UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
          x = (Characters_BaseCharacter_o *)0x0;
          plStack_60 = (long *)0x42aac06;
          plVar16 = (long *)method;
          pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)method,(MethodInfo *)0x0)
          ;
          if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
            plStack_60 = (long *)0x42aac21;
            unaff_R12 = (MethodInfo_33E10B0 **)
                        UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
            unaff_RBP = &TypeInfo_Object;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              plStack_60 = (long *)0x42aac3d;
              il2cpp_runtime_helper_02337ed0();
            }
            plStack_60 = (long *)0x42aac49;
            bVar9 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)unaff_R13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            if ((char)bVar9 == '\0') {
label_042aac7e:
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                plStack_60 = (long *)0x42aac90;
                il2cpp_runtime_helper_02337ed0();
              }
              x = (Characters_BaseCharacter_o *)0x0;
              plStack_60 = (long *)0x42aac9c;
              bVar9 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)unaff_R12,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if ((char)bVar9 == '\0') {
                return;
              }
              pSVar3 = *(System_Collections_Generic_HashSet_object__o **)&(pCVar12->fields).CurrentHealth;
              plVar16 = (long *)0x0;
              if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                plStack_60 = (long *)0x42aacc6;
                x = (Characters_BaseCharacter_o *)unaff_R12;
                bVar9 = System_Collections_Generic_HashSet_object___Contains
                                  (pSVar3,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Contains);
                if ((char)bVar9 != '\0') {
                  return;
                }
                pSVar3 = *(System_Collections_Generic_HashSet_object__o **)&(pCVar12->fields).CurrentHealth;
                plVar16 = (long *)0x0;
                if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                  plStack_60 = (long *)0x42aacf0;
                  x = (Characters_BaseCharacter_o *)unaff_R12;
                  System_Collections_Generic_HashSet_object___Add
                            (pSVar3,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Add);
                  pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(pCVar12->fields).Cache;
                  plVar16 = (long *)0x0;
                  if (pSVar4 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                    plStack_60 = (long *)0x42aad15;
                    x = (Characters_BaseCharacter_o *)unaff_R12;
                    System_Collections_Generic_Dictionary_object__float___set_Item
                              (pSVar4,(Il2CppObject *)unaff_R12,0.0,MethodInfo_Void_set_Item);
                    pSVar19 = *(System_Collections_Generic_Dictionary_object__object__o **)
                               &(pCVar12->fields).AI;
                    pCVar10 = (Characters_BaseCharacter_o *)unaff_R12;
                    pMVar7 = MethodInfo_Void_set_Item;
                    goto joined_r0x042aada9;
                  }
                }
              }
            }
            else {
              pCVar13 = (Characters_BaseCharacter_o *)(pCVar12->fields).pvCache;
              if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
                plStack_60 = (long *)0x42aac69;
                il2cpp_runtime_helper_02337ed0();
              }
              plStack_60 = (long *)0x42aac76;
              x = unaff_R13;
              bVar9 = GameManagers_TeamInfo__SameTeam_446fee0(pCVar13,unaff_R13,(MethodInfo *)0x0);
              if ((char)bVar9 != '\0') goto label_042aac7e;
              pSVar3 = *(System_Collections_Generic_HashSet_object__o **)&(pCVar12->fields).CustomDamage;
              plVar16 = (long *)0x0;
              if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042aadce;
              plStack_60 = (long *)0x42aad56;
              x = unaff_R13;
              bVar9 = System_Collections_Generic_HashSet_object___Contains
                                (pSVar3,(Il2CppObject *)unaff_R13,MethodInfo_Boolean_Contains);
              if ((char)bVar9 != '\0') {
                return;
              }
              pSVar3 = *(System_Collections_Generic_HashSet_object__o **)&(pCVar12->fields).CustomDamage;
              plVar16 = (long *)0x0;
              if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042aadce;
              plStack_60 = (long *)0x42aad84;
              x = unaff_R13;
              System_Collections_Generic_HashSet_object___Add(pSVar3,(Il2CppObject *)unaff_R13,MethodInfo_Boolean_Add);
              pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                       (pCVar12->fields).FeedVictimName;
              plVar16 = (long *)0x0;
              if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042aadce;
              plStack_60 = (long *)0x42aada2;
              x = unaff_R13;
              System_Collections_Generic_Dictionary_object__float___set_Item
                        (pSVar4,(Il2CppObject *)unaff_R13,0.0,MethodInfo_Void_set_Item);
              pSVar19 = *(System_Collections_Generic_Dictionary_object__object__o **)&(pCVar12->fields).Dead;
              pCVar10 = unaff_R13;
              pMVar7 = MethodInfo_Void_set_Item;
joined_r0x042aada9:
              plVar16 = (long *)0x0;
              if (pSVar19 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                System_Collections_Generic_Dictionary_object__object___set_Item
                          (pSVar19,(Il2CppObject *)pCVar10,(Il2CppObject *)method,pMVar7);
                return;
              }
            }
          }
        }
      }
    }
  }
label_042aadce:
  plStack_60 = (long *)0x42aadd3;
  uStack_90 = il2cpp_runtime_helper_022b2c90();
  __this_15 = (long *)x;
  plVar17 = plVar16;
  pCStack_88 = pCVar13;
  pCStack_80 = (Characters_BaseCharacter_o *)unaff_R12;
  pCStack_78 = unaff_R13;
  pCStack_70 = pCVar12;
  pCStack_68 = (Characters_BaseCharacter_o *)method;
  plStack_60 = unaff_RBP;
  if (g_data_057add8a == '\0') {
    pCStack_98 = (Characters_BaseCharacter_o *)0x42aae0a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pCStack_98 = (Characters_BaseCharacter_o *)0x42aae16;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pCStack_98 = (Characters_BaseCharacter_o *)0x42aae22;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pCStack_98 = (Characters_BaseCharacter_o *)0x42aae2e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pCStack_98 = (Characters_BaseCharacter_o *)0x42aae3a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    pCStack_98 = (Characters_BaseCharacter_o *)0x42aae46;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
    pCStack_98 = (Characters_BaseCharacter_o *)0x42aae52;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    pCStack_98 = (Characters_BaseCharacter_o *)0x42aae5e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    pCStack_98 = (Characters_BaseCharacter_o *)0x42aae6a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    pCStack_98 = (Characters_BaseCharacter_o *)0x42aae76;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    pCStack_98 = (Characters_BaseCharacter_o *)0x42aae82;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    plVar17 = &TypeInfo_TeamInfo;
    pCStack_98 = (Characters_BaseCharacter_o *)0x42aae8e;
    il2cpp_runtime_helper_023445d0();
    g_data_057add8a = '\x01';
  }
  if (x != (Characters_BaseCharacter_o *)0x0) {
    __this_15 = (long *)0x0;
    pCStack_98 = (Characters_BaseCharacter_o *)0x42aaea8;
    plVar17 = (long *)x;
    pCVar12 = (Characters_BaseCharacter_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
    if (pCVar12 != (Characters_BaseCharacter_o *)0x0) {
      __this_15 = (long *)0x0;
      pCStack_98 = (Characters_BaseCharacter_o *)0x42aaebb;
      pCVar10 = (Characters_BaseCharacter_o *)
                UnityEngine_Transform__get_root((UnityEngine_Transform_o *)pCVar12,(MethodInfo *)0x0);
      plVar17 = (long *)pCVar12;
      if (pCVar10 != (Characters_BaseCharacter_o *)0x0) {
        __this_15 = (long *)0x0;
        pCStack_98 = (Characters_BaseCharacter_o *)0x42aaece;
        pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pCVar10,(MethodInfo *)0x0);
        plVar17 = (long *)pCVar10;
        if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
          pCStack_98 = (Characters_BaseCharacter_o *)0x42aaee9;
          unaff_R13 = (Characters_BaseCharacter_o *)
                      UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
          __this_15 = (long *)0x0;
          pCStack_98 = (Characters_BaseCharacter_o *)0x42aaef6;
          plVar17 = (long *)x;
          pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
          if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
            pCStack_98 = (Characters_BaseCharacter_o *)0x42aaf11;
            unaff_R12 = (MethodInfo_33E10B0 **)
                        UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
            unaff_RBP = &TypeInfo_Object;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              pCStack_98 = (Characters_BaseCharacter_o *)0x42aaf2d;
              il2cpp_runtime_helper_02337ed0();
            }
            pCStack_98 = (Characters_BaseCharacter_o *)0x42aaf39;
            bVar9 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)unaff_R13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            if ((char)bVar9 == '\0') {
label_042aaf6e:
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                pCStack_98 = (Characters_BaseCharacter_o *)0x42aaf80;
                il2cpp_runtime_helper_02337ed0();
              }
              __this_15 = (long *)0x0;
              pCStack_98 = (Characters_BaseCharacter_o *)0x42aaf8c;
              bVar9 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)unaff_R12,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if ((char)bVar9 == '\0') {
                return;
              }
              pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
                        &(((Characters_BaseCharacter_o *)plVar16)->fields).CurrentHealth;
              plVar17 = (long *)0x0;
              if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                pCStack_98 = (Characters_BaseCharacter_o *)0x42aafb6;
                __this_15 = (long *)unaff_R12;
                bVar9 = System_Collections_Generic_HashSet_object___Contains
                                  (pSVar3,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Contains);
                if ((char)bVar9 != '\0') {
                  return;
                }
                pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
                          &(((Characters_BaseCharacter_o *)plVar16)->fields).CurrentHealth;
                plVar17 = (long *)0x0;
                if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                  pCStack_98 = (Characters_BaseCharacter_o *)0x42aafe0;
                  __this_15 = (long *)unaff_R12;
                  System_Collections_Generic_HashSet_object___Add
                            (pSVar3,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Add);
                  pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                           (((Characters_BaseCharacter_o *)plVar16)->fields).Cache;
                  plVar17 = (long *)0x0;
                  if (pSVar4 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                    pCStack_98 = (Characters_BaseCharacter_o *)0x42ab005;
                    __this_15 = (long *)unaff_R12;
                    System_Collections_Generic_Dictionary_object__float___set_Item
                              (pSVar4,(Il2CppObject *)unaff_R12,0.0,MethodInfo_Void_set_Item);
                    pSVar19 = *(System_Collections_Generic_Dictionary_object__object__o **)
                               &(((Characters_BaseCharacter_o *)plVar16)->fields).AI;
                    pCVar12 = (Characters_BaseCharacter_o *)unaff_R12;
                    pMVar7 = MethodInfo_Void_set_Item;
                    goto joined_r0x042ab099;
                  }
                }
              }
            }
            else {
              pCVar13 = (Characters_BaseCharacter_o *)
                        (((Characters_BaseCharacter_o *)plVar16)->fields).pvCache;
              if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
                pCStack_98 = (Characters_BaseCharacter_o *)0x42aaf59;
                il2cpp_runtime_helper_02337ed0();
              }
              pCStack_98 = (Characters_BaseCharacter_o *)0x42aaf66;
              __this_15 = (long *)unaff_R13;
              bVar9 = GameManagers_TeamInfo__SameTeam_446fee0(pCVar13,unaff_R13,(MethodInfo *)0x0);
              if ((char)bVar9 != '\0') goto label_042aaf6e;
              pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
                        &(((Characters_BaseCharacter_o *)plVar16)->fields).CustomDamage;
              plVar17 = (long *)0x0;
              if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042ab0be;
              pCStack_98 = (Characters_BaseCharacter_o *)0x42ab046;
              __this_15 = (long *)unaff_R13;
              bVar9 = System_Collections_Generic_HashSet_object___Contains
                                (pSVar3,(Il2CppObject *)unaff_R13,MethodInfo_Boolean_Contains);
              if ((char)bVar9 != '\0') {
                return;
              }
              pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
                        &(((Characters_BaseCharacter_o *)plVar16)->fields).CustomDamage;
              plVar17 = (long *)0x0;
              if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042ab0be;
              pCStack_98 = (Characters_BaseCharacter_o *)0x42ab074;
              __this_15 = (long *)unaff_R13;
              System_Collections_Generic_HashSet_object___Add(pSVar3,(Il2CppObject *)unaff_R13,MethodInfo_Boolean_Add);
              pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                       (((Characters_BaseCharacter_o *)plVar16)->fields).FeedVictimName;
              plVar17 = (long *)0x0;
              if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042ab0be;
              pCStack_98 = (Characters_BaseCharacter_o *)0x42ab092;
              __this_15 = (long *)unaff_R13;
              System_Collections_Generic_Dictionary_object__float___set_Item
                        (pSVar4,(Il2CppObject *)unaff_R13,0.0,MethodInfo_Void_set_Item);
              pSVar19 = *(System_Collections_Generic_Dictionary_object__object__o **)
                         &(((Characters_BaseCharacter_o *)plVar16)->fields).Dead;
              pCVar12 = unaff_R13;
              pMVar7 = MethodInfo_Void_set_Item;
joined_r0x042ab099:
              plVar17 = (long *)0x0;
              if (pSVar19 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                System_Collections_Generic_Dictionary_object__object___set_Item
                          (pSVar19,(Il2CppObject *)pCVar12,(Il2CppObject *)x,pMVar7);
                return;
              }
            }
          }
        }
      }
    }
  }
label_042ab0be:
  pCStack_98 = (Characters_BaseCharacter_o *)0x42ab0c3;
  uStack_b8 = il2cpp_runtime_helper_022b2c90();
  plVar18 = plVar17;
  pCStack_b0 = pCVar13;
  pCStack_a8 = (Characters_BaseCharacter_o *)unaff_R12;
  pCStack_a0 = (Characters_BaseCharacter_o *)plVar16;
  pCStack_98 = x;
  if (g_data_057add8b == '\0') {
    plStack_c0 = (long *)0x42ab0f7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    plStack_c0 = (long *)0x42ab103;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    plStack_c0 = (long *)0x42ab10f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    plStack_c0 = (long *)0x42ab11b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    plStack_c0 = (long *)0x42ab127;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    plStack_c0 = (long *)0x42ab133;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
    plStack_c0 = (long *)0x42ab13f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    plStack_c0 = (long *)0x42ab14b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    plStack_c0 = (long *)0x42ab157;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    plStack_c0 = (long *)0x42ab163;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    plVar18 = &TypeInfo_Object;
    plStack_c0 = (long *)0x42ab16f;
    il2cpp_runtime_helper_023445d0();
    g_data_057add8b = '\x01';
  }
  if ((Characters_BaseCharacter_o *)__this_15 != (Characters_BaseCharacter_o *)0x0) {
    plStack_c0 = (long *)0x42ab189;
    plVar18 = __this_15;
    pCVar13 = (Characters_BaseCharacter_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_15,(MethodInfo *)0x0);
    if (pCVar13 == (Characters_BaseCharacter_o *)0x0) goto label_042ab35d;
    plStack_c0 = (long *)0x42ab19c;
    pCVar12 = (Characters_BaseCharacter_o *)
              UnityEngine_Transform__get_root((UnityEngine_Transform_o *)pCVar13,(MethodInfo *)0x0);
    plVar18 = (long *)pCVar13;
    if (pCVar12 == (Characters_BaseCharacter_o *)0x0) goto label_042ab35d;
    plStack_c0 = (long *)0x42ab1af;
    pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pCVar12,(MethodInfo *)0x0);
    plVar18 = (long *)pCVar12;
    if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_042ab35d;
    plStack_c0 = (long *)0x42ab1ca;
    x = (Characters_BaseCharacter_o *)UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    plStack_c0 = (long *)0x42ab1d7;
    plVar18 = __this_15;
    pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_15,(MethodInfo *)0x0);
    if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_042ab35d;
    plStack_c0 = (long *)0x42ab1f2;
    unaff_R12 = (MethodInfo_33E10B0 **)UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
    __this_15 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      plStack_c0 = (long *)0x42ab20d;
      il2cpp_runtime_helper_02337ed0();
    }
    plStack_c0 = (long *)0x42ab219;
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
                &(((Characters_BaseCharacter_o *)plVar17)->fields).CustomDamage;
      plVar18 = (long *)0x0;
      if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042ab35d;
      plStack_c0 = (long *)0x42ab240;
      bVar9 = System_Collections_Generic_HashSet_object___Contains(pSVar3,(Il2CppObject *)x,MethodInfo_Boolean_Contains);
      if ((char)bVar9 != '\0') {
        pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
                  &(((Characters_BaseCharacter_o *)plVar17)->fields).CustomDamage;
        plVar18 = (long *)0x0;
        if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042ab35d;
        plStack_c0 = (long *)0x42ab263;
        System_Collections_Generic_HashSet_object___Remove(pSVar3,(Il2CppObject *)x,MethodInfo_Boolean_Remove);
        pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 (((Characters_BaseCharacter_o *)plVar17)->fields).FeedVictimName;
        plVar18 = (long *)0x0;
        if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042ab35d;
        plStack_c0 = (long *)0x42ab282;
        System_Collections_Generic_Dictionary_object__float___Remove(pSVar4,(Il2CppObject *)x,MethodInfo_Boolean_Remove);
        pSVar19 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   &(((Characters_BaseCharacter_o *)plVar17)->fields).Dead;
        plVar18 = (long *)0x0;
        method_00 = MethodInfo_Boolean_Remove;
        pCVar13 = x;
        if (pSVar19 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042ab35d;
        goto label_042ab341;
      }
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      plStack_c0 = (long *)0x42ab2b2;
      il2cpp_runtime_helper_02337ed0();
    }
    plStack_c0 = (long *)0x42ab2be;
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)unaff_R12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      return;
    }
    pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
              &(((Characters_BaseCharacter_o *)plVar17)->fields).CurrentHealth;
    plVar18 = (long *)0x0;
    if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      plStack_c0 = (long *)0x42ab2e8;
      bVar9 = System_Collections_Generic_HashSet_object___Contains
                        (pSVar3,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Contains);
      if ((char)bVar9 == '\0') {
        return;
      }
      pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
                &(((Characters_BaseCharacter_o *)plVar17)->fields).CurrentHealth;
      plVar18 = (long *)0x0;
      if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        plStack_c0 = (long *)0x42ab30a;
        System_Collections_Generic_HashSet_object___Remove(pSVar3,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Remove);
        pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 (((Characters_BaseCharacter_o *)plVar17)->fields).Cache;
        plVar18 = (long *)0x0;
        if (pSVar4 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
          plStack_c0 = (long *)0x42ab328;
          System_Collections_Generic_Dictionary_object__float___Remove
                    (pSVar4,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Remove);
          pSVar19 = *(System_Collections_Generic_Dictionary_object__object__o **)
                     &(((Characters_BaseCharacter_o *)plVar17)->fields).AI;
          plVar18 = (long *)0x0;
          method_00 = MethodInfo_Boolean_Remove;
          pCVar13 = (Characters_BaseCharacter_o *)unaff_R12;
          if (pSVar19 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_042ab341:
            System_Collections_Generic_Dictionary_object__object___Remove
                      (pSVar19,(Il2CppObject *)pCVar13,method_00);
            return;
          }
        }
      }
    }
  }
label_042ab35d:
  plStack_c0 = (long *)0x42ab362;
  il2cpp_runtime_helper_022b2c90();
  pCStack_e8 = (Characters_BaseCharacter_o *)__this_15;
  pCStack_e0 = (Characters_BaseCharacter_o *)unaff_R12;
  pCStack_d8 = unaff_R13;
  pCStack_d0 = (Characters_BaseCharacter_o *)plVar17;
  pCStack_c8 = x;
  plStack_c0 = unaff_RBP;
  if (g_data_057add8c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_CustomLogic_CustomLogicCollisionH);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Characters_BaseCharacter_GetEnume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicCollisionHand);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Characters_BaseCharacter_GetEnumerat);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Characters_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_CustomLogic_CustomLogicCollisionHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_CustomLogicCollisionHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057add8c = '\x01';
  }
  _Stack_100.genericMethod = (void *)0x0;
  uStack_f8 = 0;
  pUStack_f0 = (UnityEngine_Object_o *)0x0;
  _Stack_120.genericMethod = (void *)0x0;
  uStack_118 = 0;
  pUStack_110 = (UnityEngine_Object_o *)0x0;
  _Stack_140.genericMethod = (void *)0x0;
  uStack_138 = 0;
  pUStack_130 = (UnityEngine_Object_o *)0x0;
  _Stack_160.genericMethod = (void *)0x0;
  uStack_158 = 0;
  pUStack_150 = (UnityEngine_Object_o *)0x0;
  __this_02 = *(UnityEngine_Collider_o **)
               &(((Characters_BaseCharacter_o *)plVar18)->fields).HasExplicitNameTag;
  if (__this_02 == (UnityEngine_Collider_o *)0x0) goto label_042abd2d;
  bVar9 = UnityEngine_Collider__get_enabled(__this_02,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return;
  }
  unaff_R12 = (MethodInfo_33E10B0 **)il2cpp_runtime_helper_023052d0(TypeInfo_List_BaseCharacter);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)unaff_R12,MethodInfo_List_1_Characters_BaseCharacter);
  pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
            &(((Characters_BaseCharacter_o *)plVar18)->fields).CustomDamage;
  if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042abd2d;
  System_Collections_Generic_HashSet_object___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)&_Stack_178,pSVar3,MethodInfo_HashSet_1_T_Enumerator_Characters_BaseCharacter_GetEnume);
  pUStack_f0 = pUStack_168;
  _Stack_100 = _Stack_178;
  uStack_f8 = uStack_170;
  while (__this_03.fields._8_8_ = plVar18,
        __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffe70,
        __this_03.fields._current._0_4_ = in_stack_fffffffffffffe80,
        __this_03.fields._current._4_4_ = in_stack_fffffffffffffe84,
        bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          (__this_03,(MethodInfo_3219C40 *)&_Stack_100), pUVar8 = pUStack_f0,
        (char)bVar9 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar9 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    lVar6 = MethodInfo_Void_Add;
    if ((char)bVar9 == '\0') {
      if (pUVar8 == (UnityEngine_Object_o *)0x0) goto label_042abd0f;
      if (*(char *)&pUVar8[4].monitor != '\0') goto label_042ab6bc;
      pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
               (((Characters_BaseCharacter_o *)plVar18)->fields).FeedVictimName;
      if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd32;
      bVar9 = System_Collections_Generic_Dictionary_object__float___ContainsKey
                        (pSVar4,(Il2CppObject *)pUVar8,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar9 != '\0') {
        pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 (((Characters_BaseCharacter_o *)plVar18)->fields).FeedVictimName;
        if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd4b;
        in_stack_fffffffffffffe84 =
             System_Collections_Generic_Dictionary_object__float___get_Item
                       (pSVar4,(Il2CppObject *)pUVar8,MethodInfo_Single_get_Item);
        fVar20 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        System_Collections_Generic_Dictionary_object__float___set_Item
                  (pSVar4,(Il2CppObject *)pUVar8,in_stack_fffffffffffffe84 + fVar20,MethodInfo_Void_set_Item);
        pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 (((Characters_BaseCharacter_o *)plVar18)->fields).FeedVictimName;
        if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd46;
        fVar20 = System_Collections_Generic_Dictionary_object__float___get_Item
                           (pSVar4,(Il2CppObject *)pUVar8,MethodInfo_Single_get_Item);
        if (*(float *)((long)&(((Characters_BaseCharacter_o *)plVar18)->fields).FeedKillerName + 4) <= fVar20)
        {
          pSVar19 = *(System_Collections_Generic_Dictionary_object__object__o **)
                     &(((Characters_BaseCharacter_o *)plVar18)->fields).Dead;
          if (pSVar19 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042abd41;
          bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                            (pSVar19,(Il2CppObject *)pUVar8,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar9 != '\0') {
            pSVar19 = *(System_Collections_Generic_Dictionary_object__object__o **)
                       &(((Characters_BaseCharacter_o *)plVar18)->fields).Dead;
            if (pSVar19 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042abd55;
            pIVar14 = System_Collections_Generic_Dictionary_object__object___get_Item
                                (pSVar19,(Il2CppObject *)pUVar8,MethodInfo_Collider_get_Item);
            (*(((Characters_BaseCharacter_o *)plVar18)->klass->vtable)._7_unknown.methodPtr)
                      (plVar18,pUVar8,pIVar14,
                       (((Characters_BaseCharacter_o *)plVar18)->klass->vtable)._7_unknown.method);
          }
          pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                   (((Characters_BaseCharacter_o *)plVar18)->fields).FeedVictimName;
          if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd50;
          System_Collections_Generic_Dictionary_object__float___set_Item
                    (pSVar4,(Il2CppObject *)pUVar8,0.0,MethodInfo_Void_set_Item);
        }
      }
    }
    else {
label_042ab6bc:
      if ((Characters_BaseCharacter_o *)unaff_R12 == (Characters_BaseCharacter_o *)0x0) goto label_042abd05;
      piVar1 = (int *)((long)&(((Characters_BaseCharacter_o *)unaff_R12)->fields).m_CancellationTokenSource +
                      4);
      *piVar1 = *piVar1 + 1;
      lVar5 = (((Characters_BaseCharacter_o *)unaff_R12)->fields).m_CachedPtr;
      if (lVar5 == 0) goto label_042abd0a;
      uVar2 = *(uint *)&(((Characters_BaseCharacter_o *)unaff_R12)->fields).m_CancellationTokenSource;
      if (uVar2 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)&(((Characters_BaseCharacter_o *)unaff_R12)->fields).m_CancellationTokenSource = uVar2 + 1;
        *(UnityEngine_Object_o **)(lVar5 + 0x20 + (long)(int)uVar2 * 8) = pUVar8;
        il2cpp_runtime_helper_022b4080(lVar5 + 0x20 + (long)(int)uVar2 * 8,pUVar8);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)unaff_R12,(Il2CppObject *)pUVar8,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  __this_04.fields._8_8_ = plVar18;
  __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffe70;
  __this_04.fields._current._0_4_ = in_stack_fffffffffffffe80;
  __this_04.fields._current._4_4_ = in_stack_fffffffffffffe84;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_04,(MethodInfo_3219C30 *)&_Stack_100);
  if ((Characters_BaseCharacter_o *)unaff_R12 == (Characters_BaseCharacter_o *)0x0) goto label_042abd2d;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_178,
             (System_Collections_Generic_List_object__o *)unaff_R12,MethodInfo_List_1_T_Enumerator_Characters_BaseCharacter_GetEnumerat);
  pUStack_110 = pUStack_168;
  _Stack_120 = _Stack_178;
  uStack_118 = uStack_170;
  unaff_R12 = &MethodInfo_Boolean_Remove;
  while( true ) {
    __this_05.fields._8_8_ = plVar18;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe70;
    __this_05.fields._current._0_4_ = in_stack_fffffffffffffe80;
    __this_05.fields._current._4_4_ = in_stack_fffffffffffffe84;
    bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_05,(MethodInfo_321A1D0 *)&_Stack_120);
    pUVar8 = pUStack_110;
    if ((char)bVar9 == '\0') {
      __this_06.fields._8_8_ = plVar18;
      __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe70;
      __this_06.fields._current._0_4_ = in_stack_fffffffffffffe80;
      __this_06.fields._current._4_4_ = in_stack_fffffffffffffe84;
      System_Collections_Generic_List_Enumerator_object___Dispose(__this_06,(MethodInfo_321A1C0 *)&_Stack_120)
      ;
      unaff_R12 = (MethodInfo_33E10B0 **)il2cpp_runtime_helper_023052d0(TypeInfo_List_CustomLogicCollisionHandler);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)unaff_R12,MethodInfo_List_1_CustomLogic_CustomLogicCollisionHandler);
      pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
                &(((Characters_BaseCharacter_o *)plVar18)->fields).CurrentHealth;
      if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042abd2d;
      System_Collections_Generic_HashSet_object___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)&_Stack_178,pSVar3,MethodInfo_HashSet_1_T_Enumerator_CustomLogic_CustomLogicCollisionH);
      pUStack_130 = pUStack_168;
      _Stack_140 = _Stack_178;
      uStack_138 = uStack_170;
      while (__this_07.fields._8_8_ = plVar18,
            __this_07.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffe70,
            __this_07.fields._current._0_4_ = in_stack_fffffffffffffe80,
            __this_07.fields._current._4_4_ = in_stack_fffffffffffffe84,
            bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                              (__this_07,(MethodInfo_3219C40 *)&_Stack_140), pUVar8 = pUStack_130,
            (char)bVar9 != '\0') {
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar9 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        lVar6 = MethodInfo_Void_Add;
        if ((char)bVar9 == '\0') {
          pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                   (((Characters_BaseCharacter_o *)plVar18)->fields).Cache;
          if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd14;
          bVar9 = System_Collections_Generic_Dictionary_object__float___ContainsKey
                            (pSVar4,(Il2CppObject *)pUVar8,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar9 != '\0') {
            pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                     (((Characters_BaseCharacter_o *)plVar18)->fields).Cache;
            if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd28;
            in_stack_fffffffffffffe84 =
                 System_Collections_Generic_Dictionary_object__float___get_Item
                           (pSVar4,(Il2CppObject *)pUVar8,MethodInfo_Single_get_Item);
            fVar20 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            System_Collections_Generic_Dictionary_object__float___set_Item
                      (pSVar4,(Il2CppObject *)pUVar8,in_stack_fffffffffffffe84 + fVar20,MethodInfo_Void_set_Item);
            pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                     (((Characters_BaseCharacter_o *)plVar18)->fields).Cache;
            if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd23;
            fVar20 = System_Collections_Generic_Dictionary_object__float___get_Item
                               (pSVar4,(Il2CppObject *)pUVar8,MethodInfo_Single_get_Item);
            if (*(float *)((long)&(((Characters_BaseCharacter_o *)plVar18)->fields).FeedKillerName + 4) <=
                fVar20) {
              pSVar19 = *(System_Collections_Generic_Dictionary_object__object__o **)
                         &(((Characters_BaseCharacter_o *)plVar18)->fields).AI;
              if (pSVar19 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto label_042abd37;
              bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                (pSVar19,(Il2CppObject *)pUVar8,MethodInfo_Boolean_ContainsKey);
              if ((char)bVar9 != '\0') {
                pSVar19 = *(System_Collections_Generic_Dictionary_object__object__o **)
                           &(((Characters_BaseCharacter_o *)plVar18)->fields).AI;
                if (pSVar19 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                goto label_042abd5a;
                pIVar14 = System_Collections_Generic_Dictionary_object__object___get_Item
                                    (pSVar19,(Il2CppObject *)pUVar8,MethodInfo_Collider_get_Item);
                (*(((Characters_BaseCharacter_o *)plVar18)->klass->vtable)._8_unknown.methodPtr)
                          (plVar18,pUVar8,pIVar14,
                           (((Characters_BaseCharacter_o *)plVar18)->klass->vtable)._8_unknown.method);
              }
              pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                       (((Characters_BaseCharacter_o *)plVar18)->fields).Cache;
              if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd3c;
              System_Collections_Generic_Dictionary_object__float___set_Item
                        (pSVar4,(Il2CppObject *)pUVar8,0.0,MethodInfo_Void_set_Item);
            }
          }
        }
        else {
          if ((Characters_BaseCharacter_o *)unaff_R12 == (Characters_BaseCharacter_o *)0x0) goto label_042abd19;
          piVar1 = (int *)((long)&(((Characters_BaseCharacter_o *)unaff_R12)->fields).
                                  m_CancellationTokenSource + 4);
          *piVar1 = *piVar1 + 1;
          lVar5 = (((Characters_BaseCharacter_o *)unaff_R12)->fields).m_CachedPtr;
          if (lVar5 == 0) goto label_042abd1e;
          uVar2 = *(uint *)&(((Characters_BaseCharacter_o *)unaff_R12)->fields).m_CancellationTokenSource;
          if (uVar2 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)&(((Characters_BaseCharacter_o *)unaff_R12)->fields).m_CancellationTokenSource =
                 uVar2 + 1;
            *(UnityEngine_Object_o **)(lVar5 + 0x20 + (long)(int)uVar2 * 8) = pUVar8;
            il2cpp_runtime_helper_022b4080(lVar5 + 0x20 + (long)(int)uVar2 * 8,pUVar8);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)unaff_R12,(Il2CppObject *)pUVar8,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      __this_08.fields._8_8_ = plVar18;
      __this_08.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffe70;
      __this_08.fields._current._0_4_ = in_stack_fffffffffffffe80;
      __this_08.fields._current._4_4_ = in_stack_fffffffffffffe84;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_08,(MethodInfo_3219C30 *)&_Stack_140);
      goto label_042abbee;
    }
    pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
              &(((Characters_BaseCharacter_o *)plVar18)->fields).CustomDamage;
    if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) break;
    System_Collections_Generic_HashSet_object___Remove(pSVar3,(Il2CppObject *)pUStack_110,MethodInfo_Boolean_Remove);
    pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
             (((Characters_BaseCharacter_o *)plVar18)->fields).FeedVictimName;
    if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abcec;
    System_Collections_Generic_Dictionary_object__float___Remove(pSVar4,(Il2CppObject *)pUVar8,MethodInfo_Boolean_Remove);
    pSVar19 = *(System_Collections_Generic_Dictionary_object__object__o **)
               &(((Characters_BaseCharacter_o *)plVar18)->fields).Dead;
    if (pSVar19 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042abcf1;
    System_Collections_Generic_Dictionary_object__object___Remove(pSVar19,(Il2CppObject *)pUVar8,MethodInfo_Boolean_Remove)
    ;
  }
  il2cpp_runtime_helper_022b2c90();
label_042abcec:
  il2cpp_runtime_helper_022b2c90();
label_042abcf1:
  il2cpp_runtime_helper_022b2c90();
label_042abcf6:
  il2cpp_runtime_helper_022b2c90();
label_042abcfb:
  il2cpp_runtime_helper_022b2c90();
  do {
    il2cpp_runtime_helper_022b2c90();
label_042abd05:
    il2cpp_runtime_helper_022b2c90();
label_042abd0a:
    il2cpp_runtime_helper_022b2c90();
label_042abd0f:
    il2cpp_runtime_helper_022b2c90();
label_042abd14:
    il2cpp_runtime_helper_022b2c90();
label_042abd19:
    il2cpp_runtime_helper_022b2c90();
label_042abd1e:
    il2cpp_runtime_helper_022b2c90();
label_042abd23:
    il2cpp_runtime_helper_022b2c90();
label_042abd28:
    il2cpp_runtime_helper_022b2c90();
label_042abd2d:
    do {
      il2cpp_runtime_helper_022b2c90();
label_042abd32:
      il2cpp_runtime_helper_022b2c90();
label_042abd37:
      il2cpp_runtime_helper_022b2c90();
label_042abd3c:
      il2cpp_runtime_helper_022b2c90();
label_042abd41:
      il2cpp_runtime_helper_022b2c90();
label_042abd46:
      il2cpp_runtime_helper_022b2c90();
label_042abd4b:
      il2cpp_runtime_helper_022b2c90();
label_042abd50:
      il2cpp_runtime_helper_022b2c90();
label_042abd55:
      il2cpp_runtime_helper_022b2c90();
label_042abd5a:
      auVar21 = il2cpp_runtime_helper_022b2c90();
      if (auVar21._8_4_ != 1) {
        __this_12.fields._8_8_ = plVar18;
        __this_12.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffe70;
        __this_12.fields._current._0_4_ = in_stack_fffffffffffffe80;
        __this_12.fields._current._4_4_ = in_stack_fffffffffffffe84;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_12,(MethodInfo_3219C30 *)&_Stack_140);
label_042ac20c:
        _Unwind_Resume(auVar21._0_8_);
      }
      plVar16 = (long *)__cxa_begin_catch(auVar21._0_8_);
      lVar6 = *plVar16;
      __cxa_end_catch();
      __this_11.fields._8_8_ = plVar18;
      __this_11.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffe70;
      __this_11.fields._current._0_4_ = in_stack_fffffffffffffe80;
      __this_11.fields._current._4_4_ = in_stack_fffffffffffffe84;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_11,(MethodInfo_3219C30 *)&_Stack_140);
      if (lVar6 != 0) {
        il2cpp_runtime_helper_022fefe0(lVar6);
        __this_13.fields._8_8_ = plVar18;
        __this_13.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffe70;
        __this_13.fields._current._0_4_ = in_stack_fffffffffffffe80;
        __this_13.fields._current._4_4_ = in_stack_fffffffffffffe84;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_13,(MethodInfo_3219C30 *)&_Stack_100);
        goto label_042ac20c;
      }
label_042abbee:
    } while ((Characters_BaseCharacter_o *)unaff_R12 == (Characters_BaseCharacter_o *)0x0);
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_178,
               (System_Collections_Generic_List_object__o *)unaff_R12,MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicCollisionHand);
    pUStack_150 = pUStack_168;
    _Stack_160 = _Stack_178;
    uStack_158 = uStack_170;
    unaff_R12 = &MethodInfo_Boolean_Remove;
    while( true ) {
      __this_09.fields._8_8_ = plVar18;
      __this_09.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe70;
      __this_09.fields._current._0_4_ = in_stack_fffffffffffffe80;
      __this_09.fields._current._4_4_ = in_stack_fffffffffffffe84;
      bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_09,(MethodInfo_321A1D0 *)&_Stack_160);
      pUVar8 = pUStack_150;
      if ((char)bVar9 == '\0') {
        __this_10.fields._8_8_ = plVar18;
        __this_10.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe70;
        __this_10.fields._current._0_4_ = in_stack_fffffffffffffe80;
        __this_10.fields._current._4_4_ = in_stack_fffffffffffffe84;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_10,(MethodInfo_321A1C0 *)&_Stack_160);
        return;
      }
      pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
                &(((Characters_BaseCharacter_o *)plVar18)->fields).CurrentHealth;
      if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042abcf6;
      System_Collections_Generic_HashSet_object___Remove(pSVar3,(Il2CppObject *)pUStack_150,MethodInfo_Boolean_Remove);
      pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
               (((Characters_BaseCharacter_o *)plVar18)->fields).Cache;
      if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abcfb;
      System_Collections_Generic_Dictionary_object__float___Remove(pSVar4,(Il2CppObject *)pUVar8,MethodInfo_Boolean_Remove)
      ;
      pSVar19 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 &(((Characters_BaseCharacter_o *)plVar18)->fields).AI;
      if (pSVar19 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      System_Collections_Generic_Dictionary_object__object___Remove
                (pSVar19,(Il2CppObject *)pUVar8,MethodInfo_Boolean_Remove);
    }
  } while( true );
}


// Characters.ContinuousDamageHitbox$$OnTriggerEnter
// il2cpp: void Characters_ContinuousDamageHitbox__OnTriggerEnter (Characters_ContinuousDamageHitbox_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x42aaaf0

void Characters_ContinuousDamageHitbox__OnTriggerEnter
               (Characters_ContinuousDamageHitbox_o *__this,UnityEngine_Collider_o *other,MethodInfo *method)

{
  int *piVar1;
  uint uVar2;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *__this_00;
  System_Collections_Generic_Dictionary_BaseCharacter__float__o *__this_01;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar4;
  UnityEngine_Collider_o *__this_02;
  long lVar5;
  long lVar6;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_07;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  System_Collections_Generic_List_Enumerator_object__o __this_10;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_11;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_12;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_13;
  MethodInfo_3104DF0 *pMVar7;
  UnityEngine_Object_o *pUVar8;
  bool_conflict bVar9;
  Characters_BaseCharacter_o *pCVar10;
  Characters_BaseCharacter_o *pCVar11;
  UnityEngine_GameObject_o *pUVar12;
  Characters_BaseCharacter_o *x;
  Il2CppObject *pIVar13;
  MethodInfo_3106630 *method_00;
  Characters_BaseCharacter_o *unaff_RBX;
  long *__this_14;
  long *unaff_RBP;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  System_Collections_Generic_Dictionary_object__object__o *pSVar17;
  MethodInfo_33E10B0 **unaff_R12;
  Characters_BaseCharacter_o *unaff_R13;
  float fVar18;
  undefined1 auVar19 [12];
  undefined8 in_stack_fffffffffffffe90;
  undefined4 in_stack_fffffffffffffea0;
  float in_stack_fffffffffffffea4;
  _union_332950 _Stack_158;
  undefined8 uStack_150;
  UnityEngine_Object_o *pUStack_148;
  _union_332950 _Stack_140;
  undefined8 uStack_138;
  UnityEngine_Object_o *pUStack_130;
  _union_332950 _Stack_120;
  undefined8 uStack_118;
  UnityEngine_Object_o *pUStack_110;
  _union_332950 _Stack_100;
  undefined8 uStack_f8;
  UnityEngine_Object_o *pUStack_f0;
  _union_332950 _Stack_e0;
  undefined8 uStack_d8;
  UnityEngine_Object_o *pUStack_d0;
  Characters_BaseCharacter_o *pCStack_c8;
  Characters_BaseCharacter_o *pCStack_c0;
  Characters_BaseCharacter_o *pCStack_b8;
  Characters_BaseCharacter_o *pCStack_b0;
  Characters_BaseCharacter_o *pCStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  Characters_BaseCharacter_o *pCStack_90;
  Characters_BaseCharacter_o *pCStack_88;
  Characters_BaseCharacter_o *pCStack_80;
  Characters_BaseCharacter_o *pCStack_78;
  undefined8 uStack_70;
  Characters_BaseCharacter_o *pCStack_68;
  Characters_BaseCharacter_o *pCStack_60;
  Characters_BaseCharacter_o *pCStack_58;
  Characters_ContinuousDamageHitbox_o *pCStack_50;
  UnityEngine_Collider_o *pUStack_48;
  long *plStack_40;
  
  x = (Characters_BaseCharacter_o *)other;
  plVar14 = (long *)__this;
  if (g_data_057add89 == '\0') {
    plStack_40 = (long *)0x42aab1a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    plStack_40 = (long *)0x42aab26;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    plStack_40 = (long *)0x42aab32;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    plStack_40 = (long *)0x42aab3e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    plStack_40 = (long *)0x42aab4a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    plStack_40 = (long *)0x42aab56;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
    plStack_40 = (long *)0x42aab62;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    plStack_40 = (long *)0x42aab6e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    plStack_40 = (long *)0x42aab7a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    plStack_40 = (long *)0x42aab86;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    plStack_40 = (long *)0x42aab92;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    plVar14 = &TypeInfo_TeamInfo;
    plStack_40 = (long *)0x42aab9e;
    il2cpp_runtime_helper_023445d0();
    g_data_057add89 = '\x01';
  }
  if (other != (UnityEngine_Collider_o *)0x0) {
    x = (Characters_BaseCharacter_o *)0x0;
    plStack_40 = (long *)0x42aabb8;
    plVar14 = (long *)other;
    pCVar10 = (Characters_BaseCharacter_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
    if (pCVar10 != (Characters_BaseCharacter_o *)0x0) {
      x = (Characters_BaseCharacter_o *)0x0;
      plStack_40 = (long *)0x42aabcb;
      pCVar11 = (Characters_BaseCharacter_o *)
                UnityEngine_Transform__get_root((UnityEngine_Transform_o *)pCVar10,(MethodInfo *)0x0);
      plVar14 = (long *)pCVar10;
      if (pCVar11 != (Characters_BaseCharacter_o *)0x0) {
        x = (Characters_BaseCharacter_o *)0x0;
        plStack_40 = (long *)0x42aabde;
        pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pCVar11,(MethodInfo *)0x0);
        plVar14 = (long *)pCVar11;
        if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
          plStack_40 = (long *)0x42aabf9;
          unaff_R13 = (Characters_BaseCharacter_o *)
                      UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
          x = (Characters_BaseCharacter_o *)0x0;
          plStack_40 = (long *)0x42aac06;
          plVar14 = (long *)other;
          pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
          if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
            plStack_40 = (long *)0x42aac21;
            unaff_R12 = (MethodInfo_33E10B0 **)
                        UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
            unaff_RBP = &TypeInfo_Object;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              plStack_40 = (long *)0x42aac3d;
              il2cpp_runtime_helper_02337ed0();
            }
            plStack_40 = (long *)0x42aac49;
            bVar9 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)unaff_R13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            if ((char)bVar9 == '\0') {
label_042aac7e:
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                plStack_40 = (long *)0x42aac90;
                il2cpp_runtime_helper_02337ed0();
              }
              x = (Characters_BaseCharacter_o *)0x0;
              plStack_40 = (long *)0x42aac9c;
              bVar9 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)unaff_R12,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if ((char)bVar9 == '\0') {
                return;
              }
              pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._handlersInside;
              plVar14 = (long *)0x0;
              if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                plStack_40 = (long *)0x42aacc6;
                x = (Characters_BaseCharacter_o *)unaff_R12;
                bVar9 = System_Collections_Generic_HashSet_object___Contains
                                  (pSVar3,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Contains);
                if ((char)bVar9 != '\0') {
                  return;
                }
                pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._handlersInside;
                plVar14 = (long *)0x0;
                if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                  plStack_40 = (long *)0x42aacf0;
                  x = (Characters_BaseCharacter_o *)unaff_R12;
                  System_Collections_Generic_HashSet_object___Add
                            (pSVar3,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Add);
                  __this_00 = (__this->fields)._handlerDamageTimers;
                  plVar14 = (long *)0x0;
                  if (__this_00 !=
                      (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)0x0) {
                    plStack_40 = (long *)0x42aad15;
                    x = (Characters_BaseCharacter_o *)unaff_R12;
                    System_Collections_Generic_Dictionary_object__float___set_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                               (Il2CppObject *)unaff_R12,0.0,MethodInfo_Void_set_Item);
                    pSVar17 = (System_Collections_Generic_Dictionary_object__object__o *)
                              (__this->fields)._handlerColliders;
                    pCVar10 = (Characters_BaseCharacter_o *)unaff_R12;
                    pMVar7 = MethodInfo_Void_set_Item;
                    goto joined_r0x042aada9;
                  }
                }
              }
            }
            else {
              unaff_RBX = (__this->fields).Owner;
              if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
                plStack_40 = (long *)0x42aac69;
                il2cpp_runtime_helper_02337ed0();
              }
              plStack_40 = (long *)0x42aac76;
              x = unaff_R13;
              bVar9 = GameManagers_TeamInfo__SameTeam_446fee0(unaff_RBX,unaff_R13,(MethodInfo *)0x0);
              if ((char)bVar9 != '\0') goto label_042aac7e;
              pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._charactersInside;
              plVar14 = (long *)0x0;
              if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042aadce;
              plStack_40 = (long *)0x42aad56;
              x = unaff_R13;
              bVar9 = System_Collections_Generic_HashSet_object___Contains
                                (pSVar3,(Il2CppObject *)unaff_R13,MethodInfo_Boolean_Contains);
              if ((char)bVar9 != '\0') {
                return;
              }
              pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._charactersInside;
              plVar14 = (long *)0x0;
              if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042aadce;
              plStack_40 = (long *)0x42aad84;
              x = unaff_R13;
              System_Collections_Generic_HashSet_object___Add(pSVar3,(Il2CppObject *)unaff_R13,MethodInfo_Boolean_Add);
              __this_01 = (__this->fields)._characterDamageTimers;
              plVar14 = (long *)0x0;
              if (__this_01 == (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0)
              goto label_042aadce;
              plStack_40 = (long *)0x42aada2;
              x = unaff_R13;
              System_Collections_Generic_Dictionary_object__float___set_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                         (Il2CppObject *)unaff_R13,0.0,MethodInfo_Void_set_Item);
              pSVar17 = (System_Collections_Generic_Dictionary_object__object__o *)
                        (__this->fields)._characterColliders;
              pCVar10 = unaff_R13;
              pMVar7 = MethodInfo_Void_set_Item;
joined_r0x042aada9:
              plVar14 = (long *)0x0;
              if (pSVar17 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                System_Collections_Generic_Dictionary_object__object___set_Item
                          (pSVar17,(Il2CppObject *)pCVar10,(Il2CppObject *)other,pMVar7);
                return;
              }
            }
          }
        }
      }
    }
  }
label_042aadce:
  plStack_40 = (long *)0x42aadd3;
  uStack_70 = il2cpp_runtime_helper_022b2c90();
  __this_14 = (long *)x;
  plVar15 = plVar14;
  pCStack_68 = unaff_RBX;
  pCStack_60 = (Characters_BaseCharacter_o *)unaff_R12;
  pCStack_58 = unaff_R13;
  pCStack_50 = __this;
  pUStack_48 = other;
  plStack_40 = unaff_RBP;
  if (g_data_057add8a == '\0') {
    pCStack_78 = (Characters_BaseCharacter_o *)0x42aae0a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pCStack_78 = (Characters_BaseCharacter_o *)0x42aae16;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pCStack_78 = (Characters_BaseCharacter_o *)0x42aae22;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pCStack_78 = (Characters_BaseCharacter_o *)0x42aae2e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pCStack_78 = (Characters_BaseCharacter_o *)0x42aae3a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    pCStack_78 = (Characters_BaseCharacter_o *)0x42aae46;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
    pCStack_78 = (Characters_BaseCharacter_o *)0x42aae52;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    pCStack_78 = (Characters_BaseCharacter_o *)0x42aae5e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    pCStack_78 = (Characters_BaseCharacter_o *)0x42aae6a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    pCStack_78 = (Characters_BaseCharacter_o *)0x42aae76;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    pCStack_78 = (Characters_BaseCharacter_o *)0x42aae82;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    plVar15 = &TypeInfo_TeamInfo;
    pCStack_78 = (Characters_BaseCharacter_o *)0x42aae8e;
    il2cpp_runtime_helper_023445d0();
    g_data_057add8a = '\x01';
  }
  if (x != (Characters_BaseCharacter_o *)0x0) {
    __this_14 = (long *)0x0;
    pCStack_78 = (Characters_BaseCharacter_o *)0x42aaea8;
    plVar15 = (long *)x;
    pCVar10 = (Characters_BaseCharacter_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
    if (pCVar10 != (Characters_BaseCharacter_o *)0x0) {
      __this_14 = (long *)0x0;
      pCStack_78 = (Characters_BaseCharacter_o *)0x42aaebb;
      pCVar11 = (Characters_BaseCharacter_o *)
                UnityEngine_Transform__get_root((UnityEngine_Transform_o *)pCVar10,(MethodInfo *)0x0);
      plVar15 = (long *)pCVar10;
      if (pCVar11 != (Characters_BaseCharacter_o *)0x0) {
        __this_14 = (long *)0x0;
        pCStack_78 = (Characters_BaseCharacter_o *)0x42aaece;
        pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pCVar11,(MethodInfo *)0x0);
        plVar15 = (long *)pCVar11;
        if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
          pCStack_78 = (Characters_BaseCharacter_o *)0x42aaee9;
          unaff_R13 = (Characters_BaseCharacter_o *)
                      UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
          __this_14 = (long *)0x0;
          pCStack_78 = (Characters_BaseCharacter_o *)0x42aaef6;
          plVar15 = (long *)x;
          pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
          if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
            pCStack_78 = (Characters_BaseCharacter_o *)0x42aaf11;
            unaff_R12 = (MethodInfo_33E10B0 **)
                        UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
            unaff_RBP = &TypeInfo_Object;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              pCStack_78 = (Characters_BaseCharacter_o *)0x42aaf2d;
              il2cpp_runtime_helper_02337ed0();
            }
            pCStack_78 = (Characters_BaseCharacter_o *)0x42aaf39;
            bVar9 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)unaff_R13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            if ((char)bVar9 == '\0') {
label_042aaf6e:
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                pCStack_78 = (Characters_BaseCharacter_o *)0x42aaf80;
                il2cpp_runtime_helper_02337ed0();
              }
              __this_14 = (long *)0x0;
              pCStack_78 = (Characters_BaseCharacter_o *)0x42aaf8c;
              bVar9 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)unaff_R12,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if ((char)bVar9 == '\0') {
                return;
              }
              pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
                        &(((Characters_BaseCharacter_o *)plVar14)->fields).CurrentHealth;
              plVar15 = (long *)0x0;
              if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                pCStack_78 = (Characters_BaseCharacter_o *)0x42aafb6;
                __this_14 = (long *)unaff_R12;
                bVar9 = System_Collections_Generic_HashSet_object___Contains
                                  (pSVar3,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Contains);
                if ((char)bVar9 != '\0') {
                  return;
                }
                pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
                          &(((Characters_BaseCharacter_o *)plVar14)->fields).CurrentHealth;
                plVar15 = (long *)0x0;
                if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                  pCStack_78 = (Characters_BaseCharacter_o *)0x42aafe0;
                  __this_14 = (long *)unaff_R12;
                  System_Collections_Generic_HashSet_object___Add
                            (pSVar3,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Add);
                  pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                           (((Characters_BaseCharacter_o *)plVar14)->fields).Cache;
                  plVar15 = (long *)0x0;
                  if (pSVar4 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                    pCStack_78 = (Characters_BaseCharacter_o *)0x42ab005;
                    __this_14 = (long *)unaff_R12;
                    System_Collections_Generic_Dictionary_object__float___set_Item
                              (pSVar4,(Il2CppObject *)unaff_R12,0.0,MethodInfo_Void_set_Item);
                    pSVar17 = *(System_Collections_Generic_Dictionary_object__object__o **)
                               &(((Characters_BaseCharacter_o *)plVar14)->fields).AI;
                    pCVar10 = (Characters_BaseCharacter_o *)unaff_R12;
                    pMVar7 = MethodInfo_Void_set_Item;
                    goto joined_r0x042ab099;
                  }
                }
              }
            }
            else {
              unaff_RBX = (Characters_BaseCharacter_o *)
                          (((Characters_BaseCharacter_o *)plVar14)->fields).pvCache;
              if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
                pCStack_78 = (Characters_BaseCharacter_o *)0x42aaf59;
                il2cpp_runtime_helper_02337ed0();
              }
              pCStack_78 = (Characters_BaseCharacter_o *)0x42aaf66;
              __this_14 = (long *)unaff_R13;
              bVar9 = GameManagers_TeamInfo__SameTeam_446fee0(unaff_RBX,unaff_R13,(MethodInfo *)0x0);
              if ((char)bVar9 != '\0') goto label_042aaf6e;
              pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
                        &(((Characters_BaseCharacter_o *)plVar14)->fields).CustomDamage;
              plVar15 = (long *)0x0;
              if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042ab0be;
              pCStack_78 = (Characters_BaseCharacter_o *)0x42ab046;
              __this_14 = (long *)unaff_R13;
              bVar9 = System_Collections_Generic_HashSet_object___Contains
                                (pSVar3,(Il2CppObject *)unaff_R13,MethodInfo_Boolean_Contains);
              if ((char)bVar9 != '\0') {
                return;
              }
              pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
                        &(((Characters_BaseCharacter_o *)plVar14)->fields).CustomDamage;
              plVar15 = (long *)0x0;
              if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042ab0be;
              pCStack_78 = (Characters_BaseCharacter_o *)0x42ab074;
              __this_14 = (long *)unaff_R13;
              System_Collections_Generic_HashSet_object___Add(pSVar3,(Il2CppObject *)unaff_R13,MethodInfo_Boolean_Add);
              pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                       (((Characters_BaseCharacter_o *)plVar14)->fields).FeedVictimName;
              plVar15 = (long *)0x0;
              if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042ab0be;
              pCStack_78 = (Characters_BaseCharacter_o *)0x42ab092;
              __this_14 = (long *)unaff_R13;
              System_Collections_Generic_Dictionary_object__float___set_Item
                        (pSVar4,(Il2CppObject *)unaff_R13,0.0,MethodInfo_Void_set_Item);
              pSVar17 = *(System_Collections_Generic_Dictionary_object__object__o **)
                         &(((Characters_BaseCharacter_o *)plVar14)->fields).Dead;
              pCVar10 = unaff_R13;
              pMVar7 = MethodInfo_Void_set_Item;
joined_r0x042ab099:
              plVar15 = (long *)0x0;
              if (pSVar17 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                System_Collections_Generic_Dictionary_object__object___set_Item
                          (pSVar17,(Il2CppObject *)pCVar10,(Il2CppObject *)x,pMVar7);
                return;
              }
            }
          }
        }
      }
    }
  }
label_042ab0be:
  pCStack_78 = (Characters_BaseCharacter_o *)0x42ab0c3;
  uStack_98 = il2cpp_runtime_helper_022b2c90();
  plVar16 = plVar15;
  pCStack_90 = unaff_RBX;
  pCStack_88 = (Characters_BaseCharacter_o *)unaff_R12;
  pCStack_80 = (Characters_BaseCharacter_o *)plVar14;
  pCStack_78 = x;
  if (g_data_057add8b == '\0') {
    plStack_a0 = (long *)0x42ab0f7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    plStack_a0 = (long *)0x42ab103;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    plStack_a0 = (long *)0x42ab10f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    plStack_a0 = (long *)0x42ab11b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    plStack_a0 = (long *)0x42ab127;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    plStack_a0 = (long *)0x42ab133;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
    plStack_a0 = (long *)0x42ab13f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    plStack_a0 = (long *)0x42ab14b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    plStack_a0 = (long *)0x42ab157;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    plStack_a0 = (long *)0x42ab163;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    plVar16 = &TypeInfo_Object;
    plStack_a0 = (long *)0x42ab16f;
    il2cpp_runtime_helper_023445d0();
    g_data_057add8b = '\x01';
  }
  if ((Characters_BaseCharacter_o *)__this_14 != (Characters_BaseCharacter_o *)0x0) {
    plStack_a0 = (long *)0x42ab189;
    plVar16 = __this_14;
    pCVar10 = (Characters_BaseCharacter_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_14,(MethodInfo *)0x0);
    if (pCVar10 == (Characters_BaseCharacter_o *)0x0) goto label_042ab35d;
    plStack_a0 = (long *)0x42ab19c;
    pCVar11 = (Characters_BaseCharacter_o *)
              UnityEngine_Transform__get_root((UnityEngine_Transform_o *)pCVar10,(MethodInfo *)0x0);
    plVar16 = (long *)pCVar10;
    if (pCVar11 == (Characters_BaseCharacter_o *)0x0) goto label_042ab35d;
    plStack_a0 = (long *)0x42ab1af;
    pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pCVar11,(MethodInfo *)0x0);
    plVar16 = (long *)pCVar11;
    if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto label_042ab35d;
    plStack_a0 = (long *)0x42ab1ca;
    x = (Characters_BaseCharacter_o *)UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    plStack_a0 = (long *)0x42ab1d7;
    plVar16 = __this_14;
    pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_14,(MethodInfo *)0x0);
    if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto label_042ab35d;
    plStack_a0 = (long *)0x42ab1f2;
    unaff_R12 = (MethodInfo_33E10B0 **)UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
    __this_14 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      plStack_a0 = (long *)0x42ab20d;
      il2cpp_runtime_helper_02337ed0();
    }
    plStack_a0 = (long *)0x42ab219;
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
                &(((Characters_BaseCharacter_o *)plVar15)->fields).CustomDamage;
      plVar16 = (long *)0x0;
      if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042ab35d;
      plStack_a0 = (long *)0x42ab240;
      bVar9 = System_Collections_Generic_HashSet_object___Contains(pSVar3,(Il2CppObject *)x,MethodInfo_Boolean_Contains);
      if ((char)bVar9 != '\0') {
        pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
                  &(((Characters_BaseCharacter_o *)plVar15)->fields).CustomDamage;
        plVar16 = (long *)0x0;
        if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042ab35d;
        plStack_a0 = (long *)0x42ab263;
        System_Collections_Generic_HashSet_object___Remove(pSVar3,(Il2CppObject *)x,MethodInfo_Boolean_Remove);
        pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 (((Characters_BaseCharacter_o *)plVar15)->fields).FeedVictimName;
        plVar16 = (long *)0x0;
        if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042ab35d;
        plStack_a0 = (long *)0x42ab282;
        System_Collections_Generic_Dictionary_object__float___Remove(pSVar4,(Il2CppObject *)x,MethodInfo_Boolean_Remove);
        pSVar17 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   &(((Characters_BaseCharacter_o *)plVar15)->fields).Dead;
        plVar16 = (long *)0x0;
        method_00 = MethodInfo_Boolean_Remove;
        pCVar10 = x;
        if (pSVar17 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042ab35d;
        goto label_042ab341;
      }
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      plStack_a0 = (long *)0x42ab2b2;
      il2cpp_runtime_helper_02337ed0();
    }
    plStack_a0 = (long *)0x42ab2be;
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)unaff_R12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      return;
    }
    pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
              &(((Characters_BaseCharacter_o *)plVar15)->fields).CurrentHealth;
    plVar16 = (long *)0x0;
    if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      plStack_a0 = (long *)0x42ab2e8;
      bVar9 = System_Collections_Generic_HashSet_object___Contains
                        (pSVar3,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Contains);
      if ((char)bVar9 == '\0') {
        return;
      }
      pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
                &(((Characters_BaseCharacter_o *)plVar15)->fields).CurrentHealth;
      plVar16 = (long *)0x0;
      if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        plStack_a0 = (long *)0x42ab30a;
        System_Collections_Generic_HashSet_object___Remove(pSVar3,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Remove);
        pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 (((Characters_BaseCharacter_o *)plVar15)->fields).Cache;
        plVar16 = (long *)0x0;
        if (pSVar4 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
          plStack_a0 = (long *)0x42ab328;
          System_Collections_Generic_Dictionary_object__float___Remove
                    (pSVar4,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Remove);
          pSVar17 = *(System_Collections_Generic_Dictionary_object__object__o **)
                     &(((Characters_BaseCharacter_o *)plVar15)->fields).AI;
          plVar16 = (long *)0x0;
          method_00 = MethodInfo_Boolean_Remove;
          pCVar10 = (Characters_BaseCharacter_o *)unaff_R12;
          if (pSVar17 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_042ab341:
            System_Collections_Generic_Dictionary_object__object___Remove
                      (pSVar17,(Il2CppObject *)pCVar10,method_00);
            return;
          }
        }
      }
    }
  }
label_042ab35d:
  plStack_a0 = (long *)0x42ab362;
  il2cpp_runtime_helper_022b2c90();
  pCStack_c8 = (Characters_BaseCharacter_o *)__this_14;
  pCStack_c0 = (Characters_BaseCharacter_o *)unaff_R12;
  pCStack_b8 = unaff_R13;
  pCStack_b0 = (Characters_BaseCharacter_o *)plVar15;
  pCStack_a8 = x;
  plStack_a0 = unaff_RBP;
  if (g_data_057add8c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_CustomLogic_CustomLogicCollisionH);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Characters_BaseCharacter_GetEnume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicCollisionHand);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Characters_BaseCharacter_GetEnumerat);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Characters_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_CustomLogic_CustomLogicCollisionHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_CustomLogicCollisionHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057add8c = '\x01';
  }
  _Stack_e0.genericMethod = (void *)0x0;
  uStack_d8 = 0;
  pUStack_d0 = (UnityEngine_Object_o *)0x0;
  _Stack_100.genericMethod = (void *)0x0;
  uStack_f8 = 0;
  pUStack_f0 = (UnityEngine_Object_o *)0x0;
  _Stack_120.genericMethod = (void *)0x0;
  uStack_118 = 0;
  pUStack_110 = (UnityEngine_Object_o *)0x0;
  _Stack_140.genericMethod = (void *)0x0;
  uStack_138 = 0;
  pUStack_130 = (UnityEngine_Object_o *)0x0;
  __this_02 = *(UnityEngine_Collider_o **)
               &(((Characters_BaseCharacter_o *)plVar16)->fields).HasExplicitNameTag;
  if (__this_02 == (UnityEngine_Collider_o *)0x0) goto label_042abd2d;
  bVar9 = UnityEngine_Collider__get_enabled(__this_02,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return;
  }
  unaff_R12 = (MethodInfo_33E10B0 **)il2cpp_runtime_helper_023052d0(TypeInfo_List_BaseCharacter);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)unaff_R12,MethodInfo_List_1_Characters_BaseCharacter);
  pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
            &(((Characters_BaseCharacter_o *)plVar16)->fields).CustomDamage;
  if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042abd2d;
  System_Collections_Generic_HashSet_object___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)&_Stack_158,pSVar3,MethodInfo_HashSet_1_T_Enumerator_Characters_BaseCharacter_GetEnume);
  pUStack_d0 = pUStack_148;
  _Stack_e0 = _Stack_158;
  uStack_d8 = uStack_150;
  while (__this_03.fields._8_8_ = plVar16,
        __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffe90,
        __this_03.fields._current._0_4_ = in_stack_fffffffffffffea0,
        __this_03.fields._current._4_4_ = in_stack_fffffffffffffea4,
        bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          (__this_03,(MethodInfo_3219C40 *)&_Stack_e0), pUVar8 = pUStack_d0,
        (char)bVar9 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar9 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    lVar6 = MethodInfo_Void_Add;
    if ((char)bVar9 == '\0') {
      if (pUVar8 == (UnityEngine_Object_o *)0x0) goto label_042abd0f;
      if (*(char *)&pUVar8[4].monitor != '\0') goto label_042ab6bc;
      pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
               (((Characters_BaseCharacter_o *)plVar16)->fields).FeedVictimName;
      if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd32;
      bVar9 = System_Collections_Generic_Dictionary_object__float___ContainsKey
                        (pSVar4,(Il2CppObject *)pUVar8,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar9 != '\0') {
        pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 (((Characters_BaseCharacter_o *)plVar16)->fields).FeedVictimName;
        if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd4b;
        in_stack_fffffffffffffea4 =
             System_Collections_Generic_Dictionary_object__float___get_Item
                       (pSVar4,(Il2CppObject *)pUVar8,MethodInfo_Single_get_Item);
        fVar18 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        System_Collections_Generic_Dictionary_object__float___set_Item
                  (pSVar4,(Il2CppObject *)pUVar8,in_stack_fffffffffffffea4 + fVar18,MethodInfo_Void_set_Item);
        pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 (((Characters_BaseCharacter_o *)plVar16)->fields).FeedVictimName;
        if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd46;
        fVar18 = System_Collections_Generic_Dictionary_object__float___get_Item
                           (pSVar4,(Il2CppObject *)pUVar8,MethodInfo_Single_get_Item);
        if (*(float *)((long)&(((Characters_BaseCharacter_o *)plVar16)->fields).FeedKillerName + 4) <= fVar18)
        {
          pSVar17 = *(System_Collections_Generic_Dictionary_object__object__o **)
                     &(((Characters_BaseCharacter_o *)plVar16)->fields).Dead;
          if (pSVar17 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042abd41;
          bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                            (pSVar17,(Il2CppObject *)pUVar8,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar9 != '\0') {
            pSVar17 = *(System_Collections_Generic_Dictionary_object__object__o **)
                       &(((Characters_BaseCharacter_o *)plVar16)->fields).Dead;
            if (pSVar17 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042abd55;
            pIVar13 = System_Collections_Generic_Dictionary_object__object___get_Item
                                (pSVar17,(Il2CppObject *)pUVar8,MethodInfo_Collider_get_Item);
            (*(((Characters_BaseCharacter_o *)plVar16)->klass->vtable)._7_unknown.methodPtr)
                      (plVar16,pUVar8,pIVar13,
                       (((Characters_BaseCharacter_o *)plVar16)->klass->vtable)._7_unknown.method);
          }
          pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                   (((Characters_BaseCharacter_o *)plVar16)->fields).FeedVictimName;
          if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd50;
          System_Collections_Generic_Dictionary_object__float___set_Item
                    (pSVar4,(Il2CppObject *)pUVar8,0.0,MethodInfo_Void_set_Item);
        }
      }
    }
    else {
label_042ab6bc:
      if ((Characters_BaseCharacter_o *)unaff_R12 == (Characters_BaseCharacter_o *)0x0) goto label_042abd05;
      piVar1 = (int *)((long)&(((Characters_BaseCharacter_o *)unaff_R12)->fields).m_CancellationTokenSource +
                      4);
      *piVar1 = *piVar1 + 1;
      lVar5 = (((Characters_BaseCharacter_o *)unaff_R12)->fields).m_CachedPtr;
      if (lVar5 == 0) goto label_042abd0a;
      uVar2 = *(uint *)&(((Characters_BaseCharacter_o *)unaff_R12)->fields).m_CancellationTokenSource;
      if (uVar2 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)&(((Characters_BaseCharacter_o *)unaff_R12)->fields).m_CancellationTokenSource = uVar2 + 1;
        *(UnityEngine_Object_o **)(lVar5 + 0x20 + (long)(int)uVar2 * 8) = pUVar8;
        il2cpp_runtime_helper_022b4080(lVar5 + 0x20 + (long)(int)uVar2 * 8,pUVar8);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)unaff_R12,(Il2CppObject *)pUVar8,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  __this_04.fields._8_8_ = plVar16;
  __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffe90;
  __this_04.fields._current._0_4_ = in_stack_fffffffffffffea0;
  __this_04.fields._current._4_4_ = in_stack_fffffffffffffea4;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_04,(MethodInfo_3219C30 *)&_Stack_e0);
  if ((Characters_BaseCharacter_o *)unaff_R12 == (Characters_BaseCharacter_o *)0x0) goto label_042abd2d;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_158,
             (System_Collections_Generic_List_object__o *)unaff_R12,MethodInfo_List_1_T_Enumerator_Characters_BaseCharacter_GetEnumerat);
  pUStack_f0 = pUStack_148;
  _Stack_100 = _Stack_158;
  uStack_f8 = uStack_150;
  unaff_R12 = &MethodInfo_Boolean_Remove;
  while( true ) {
    __this_05.fields._8_8_ = plVar16;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe90;
    __this_05.fields._current._0_4_ = in_stack_fffffffffffffea0;
    __this_05.fields._current._4_4_ = in_stack_fffffffffffffea4;
    bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_05,(MethodInfo_321A1D0 *)&_Stack_100);
    pUVar8 = pUStack_f0;
    if ((char)bVar9 == '\0') {
      __this_06.fields._8_8_ = plVar16;
      __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe90;
      __this_06.fields._current._0_4_ = in_stack_fffffffffffffea0;
      __this_06.fields._current._4_4_ = in_stack_fffffffffffffea4;
      System_Collections_Generic_List_Enumerator_object___Dispose(__this_06,(MethodInfo_321A1C0 *)&_Stack_100)
      ;
      unaff_R12 = (MethodInfo_33E10B0 **)il2cpp_runtime_helper_023052d0(TypeInfo_List_CustomLogicCollisionHandler);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)unaff_R12,MethodInfo_List_1_CustomLogic_CustomLogicCollisionHandler);
      pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
                &(((Characters_BaseCharacter_o *)plVar16)->fields).CurrentHealth;
      if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042abd2d;
      System_Collections_Generic_HashSet_object___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)&_Stack_158,pSVar3,MethodInfo_HashSet_1_T_Enumerator_CustomLogic_CustomLogicCollisionH);
      pUStack_110 = pUStack_148;
      _Stack_120 = _Stack_158;
      uStack_118 = uStack_150;
      while (__this_07.fields._8_8_ = plVar16,
            __this_07.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffe90,
            __this_07.fields._current._0_4_ = in_stack_fffffffffffffea0,
            __this_07.fields._current._4_4_ = in_stack_fffffffffffffea4,
            bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                              (__this_07,(MethodInfo_3219C40 *)&_Stack_120), pUVar8 = pUStack_110,
            (char)bVar9 != '\0') {
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar9 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        lVar6 = MethodInfo_Void_Add;
        if ((char)bVar9 == '\0') {
          pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                   (((Characters_BaseCharacter_o *)plVar16)->fields).Cache;
          if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd14;
          bVar9 = System_Collections_Generic_Dictionary_object__float___ContainsKey
                            (pSVar4,(Il2CppObject *)pUVar8,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar9 != '\0') {
            pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                     (((Characters_BaseCharacter_o *)plVar16)->fields).Cache;
            if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd28;
            in_stack_fffffffffffffea4 =
                 System_Collections_Generic_Dictionary_object__float___get_Item
                           (pSVar4,(Il2CppObject *)pUVar8,MethodInfo_Single_get_Item);
            fVar18 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            System_Collections_Generic_Dictionary_object__float___set_Item
                      (pSVar4,(Il2CppObject *)pUVar8,in_stack_fffffffffffffea4 + fVar18,MethodInfo_Void_set_Item);
            pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                     (((Characters_BaseCharacter_o *)plVar16)->fields).Cache;
            if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd23;
            fVar18 = System_Collections_Generic_Dictionary_object__float___get_Item
                               (pSVar4,(Il2CppObject *)pUVar8,MethodInfo_Single_get_Item);
            if (*(float *)((long)&(((Characters_BaseCharacter_o *)plVar16)->fields).FeedKillerName + 4) <=
                fVar18) {
              pSVar17 = *(System_Collections_Generic_Dictionary_object__object__o **)
                         &(((Characters_BaseCharacter_o *)plVar16)->fields).AI;
              if (pSVar17 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto label_042abd37;
              bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                (pSVar17,(Il2CppObject *)pUVar8,MethodInfo_Boolean_ContainsKey);
              if ((char)bVar9 != '\0') {
                pSVar17 = *(System_Collections_Generic_Dictionary_object__object__o **)
                           &(((Characters_BaseCharacter_o *)plVar16)->fields).AI;
                if (pSVar17 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                goto label_042abd5a;
                pIVar13 = System_Collections_Generic_Dictionary_object__object___get_Item
                                    (pSVar17,(Il2CppObject *)pUVar8,MethodInfo_Collider_get_Item);
                (*(((Characters_BaseCharacter_o *)plVar16)->klass->vtable)._8_unknown.methodPtr)
                          (plVar16,pUVar8,pIVar13,
                           (((Characters_BaseCharacter_o *)plVar16)->klass->vtable)._8_unknown.method);
              }
              pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                       (((Characters_BaseCharacter_o *)plVar16)->fields).Cache;
              if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd3c;
              System_Collections_Generic_Dictionary_object__float___set_Item
                        (pSVar4,(Il2CppObject *)pUVar8,0.0,MethodInfo_Void_set_Item);
            }
          }
        }
        else {
          if ((Characters_BaseCharacter_o *)unaff_R12 == (Characters_BaseCharacter_o *)0x0) goto label_042abd19;
          piVar1 = (int *)((long)&(((Characters_BaseCharacter_o *)unaff_R12)->fields).
                                  m_CancellationTokenSource + 4);
          *piVar1 = *piVar1 + 1;
          lVar5 = (((Characters_BaseCharacter_o *)unaff_R12)->fields).m_CachedPtr;
          if (lVar5 == 0) goto label_042abd1e;
          uVar2 = *(uint *)&(((Characters_BaseCharacter_o *)unaff_R12)->fields).m_CancellationTokenSource;
          if (uVar2 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)&(((Characters_BaseCharacter_o *)unaff_R12)->fields).m_CancellationTokenSource =
                 uVar2 + 1;
            *(UnityEngine_Object_o **)(lVar5 + 0x20 + (long)(int)uVar2 * 8) = pUVar8;
            il2cpp_runtime_helper_022b4080(lVar5 + 0x20 + (long)(int)uVar2 * 8,pUVar8);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)unaff_R12,(Il2CppObject *)pUVar8,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      __this_08.fields._8_8_ = plVar16;
      __this_08.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffe90;
      __this_08.fields._current._0_4_ = in_stack_fffffffffffffea0;
      __this_08.fields._current._4_4_ = in_stack_fffffffffffffea4;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_08,(MethodInfo_3219C30 *)&_Stack_120);
      goto label_042abbee;
    }
    pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
              &(((Characters_BaseCharacter_o *)plVar16)->fields).CustomDamage;
    if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) break;
    System_Collections_Generic_HashSet_object___Remove(pSVar3,(Il2CppObject *)pUStack_f0,MethodInfo_Boolean_Remove);
    pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
             (((Characters_BaseCharacter_o *)plVar16)->fields).FeedVictimName;
    if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abcec;
    System_Collections_Generic_Dictionary_object__float___Remove(pSVar4,(Il2CppObject *)pUVar8,MethodInfo_Boolean_Remove);
    pSVar17 = *(System_Collections_Generic_Dictionary_object__object__o **)
               &(((Characters_BaseCharacter_o *)plVar16)->fields).Dead;
    if (pSVar17 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042abcf1;
    System_Collections_Generic_Dictionary_object__object___Remove(pSVar17,(Il2CppObject *)pUVar8,MethodInfo_Boolean_Remove)
    ;
  }
  il2cpp_runtime_helper_022b2c90();
label_042abcec:
  il2cpp_runtime_helper_022b2c90();
label_042abcf1:
  il2cpp_runtime_helper_022b2c90();
label_042abcf6:
  il2cpp_runtime_helper_022b2c90();
label_042abcfb:
  il2cpp_runtime_helper_022b2c90();
  do {
    il2cpp_runtime_helper_022b2c90();
label_042abd05:
    il2cpp_runtime_helper_022b2c90();
label_042abd0a:
    il2cpp_runtime_helper_022b2c90();
label_042abd0f:
    il2cpp_runtime_helper_022b2c90();
label_042abd14:
    il2cpp_runtime_helper_022b2c90();
label_042abd19:
    il2cpp_runtime_helper_022b2c90();
label_042abd1e:
    il2cpp_runtime_helper_022b2c90();
label_042abd23:
    il2cpp_runtime_helper_022b2c90();
label_042abd28:
    il2cpp_runtime_helper_022b2c90();
label_042abd2d:
    do {
      il2cpp_runtime_helper_022b2c90();
label_042abd32:
      il2cpp_runtime_helper_022b2c90();
label_042abd37:
      il2cpp_runtime_helper_022b2c90();
label_042abd3c:
      il2cpp_runtime_helper_022b2c90();
label_042abd41:
      il2cpp_runtime_helper_022b2c90();
label_042abd46:
      il2cpp_runtime_helper_022b2c90();
label_042abd4b:
      il2cpp_runtime_helper_022b2c90();
label_042abd50:
      il2cpp_runtime_helper_022b2c90();
label_042abd55:
      il2cpp_runtime_helper_022b2c90();
label_042abd5a:
      auVar19 = il2cpp_runtime_helper_022b2c90();
      if (auVar19._8_4_ != 1) {
        __this_12.fields._8_8_ = plVar16;
        __this_12.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffe90;
        __this_12.fields._current._0_4_ = in_stack_fffffffffffffea0;
        __this_12.fields._current._4_4_ = in_stack_fffffffffffffea4;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_12,(MethodInfo_3219C30 *)&_Stack_120);
label_042ac20c:
        _Unwind_Resume(auVar19._0_8_);
      }
      plVar14 = (long *)__cxa_begin_catch(auVar19._0_8_);
      lVar6 = *plVar14;
      __cxa_end_catch();
      __this_11.fields._8_8_ = plVar16;
      __this_11.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffe90;
      __this_11.fields._current._0_4_ = in_stack_fffffffffffffea0;
      __this_11.fields._current._4_4_ = in_stack_fffffffffffffea4;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_11,(MethodInfo_3219C30 *)&_Stack_120);
      if (lVar6 != 0) {
        il2cpp_runtime_helper_022fefe0(lVar6);
        __this_13.fields._8_8_ = plVar16;
        __this_13.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffe90;
        __this_13.fields._current._0_4_ = in_stack_fffffffffffffea0;
        __this_13.fields._current._4_4_ = in_stack_fffffffffffffea4;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_13,(MethodInfo_3219C30 *)&_Stack_e0);
        goto label_042ac20c;
      }
label_042abbee:
    } while ((Characters_BaseCharacter_o *)unaff_R12 == (Characters_BaseCharacter_o *)0x0);
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_158,
               (System_Collections_Generic_List_object__o *)unaff_R12,MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicCollisionHand);
    pUStack_130 = pUStack_148;
    _Stack_140 = _Stack_158;
    uStack_138 = uStack_150;
    unaff_R12 = &MethodInfo_Boolean_Remove;
    while( true ) {
      __this_09.fields._8_8_ = plVar16;
      __this_09.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe90;
      __this_09.fields._current._0_4_ = in_stack_fffffffffffffea0;
      __this_09.fields._current._4_4_ = in_stack_fffffffffffffea4;
      bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_09,(MethodInfo_321A1D0 *)&_Stack_140);
      pUVar8 = pUStack_130;
      if ((char)bVar9 == '\0') {
        __this_10.fields._8_8_ = plVar16;
        __this_10.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe90;
        __this_10.fields._current._0_4_ = in_stack_fffffffffffffea0;
        __this_10.fields._current._4_4_ = in_stack_fffffffffffffea4;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_10,(MethodInfo_321A1C0 *)&_Stack_140);
        return;
      }
      pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
                &(((Characters_BaseCharacter_o *)plVar16)->fields).CurrentHealth;
      if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042abcf6;
      System_Collections_Generic_HashSet_object___Remove(pSVar3,(Il2CppObject *)pUStack_130,MethodInfo_Boolean_Remove);
      pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
               (((Characters_BaseCharacter_o *)plVar16)->fields).Cache;
      if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abcfb;
      System_Collections_Generic_Dictionary_object__float___Remove(pSVar4,(Il2CppObject *)pUVar8,MethodInfo_Boolean_Remove)
      ;
      pSVar17 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 &(((Characters_BaseCharacter_o *)plVar16)->fields).AI;
      if (pSVar17 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      System_Collections_Generic_Dictionary_object__object___Remove
                (pSVar17,(Il2CppObject *)pUVar8,MethodInfo_Boolean_Remove);
    }
  } while( true );
}


// Characters.ContinuousDamageHitbox$$OnTriggerStay
// il2cpp: void Characters_ContinuousDamageHitbox__OnTriggerStay (Characters_ContinuousDamageHitbox_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x42aade0

void Characters_ContinuousDamageHitbox__OnTriggerStay
               (Characters_ContinuousDamageHitbox_o *__this,UnityEngine_Collider_o *other,MethodInfo *method)

{
  int *piVar1;
  uint uVar2;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *__this_00;
  System_Collections_Generic_Dictionary_BaseCharacter__float__o *__this_01;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar4;
  UnityEngine_Collider_o *__this_02;
  long lVar5;
  long lVar6;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_07;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  System_Collections_Generic_List_Enumerator_object__o __this_10;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_11;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_12;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_13;
  MethodInfo_3104DF0 *method_00;
  UnityEngine_Object_o *pUVar7;
  bool_conflict bVar8;
  Characters_BaseCharacter_o *pCVar9;
  Characters_BaseCharacter_o *pCVar10;
  UnityEngine_GameObject_o *pUVar11;
  Il2CppObject *pIVar12;
  MethodInfo_3106630 *method_01;
  Characters_BaseCharacter_o *unaff_RBX;
  long *__this_14;
  long *unaff_RBP;
  long *plVar13;
  long *plVar14;
  System_Collections_Generic_Dictionary_object__object__o *pSVar15;
  MethodInfo_33E10B0 **unaff_R12;
  Characters_BaseCharacter_o *unaff_R13;
  float fVar16;
  undefined1 auVar17 [12];
  undefined8 in_stack_fffffffffffffec8;
  undefined4 in_stack_fffffffffffffed8;
  float in_stack_fffffffffffffedc;
  _union_332950 _Stack_120;
  undefined8 uStack_118;
  UnityEngine_Object_o *pUStack_110;
  _union_332950 _Stack_108;
  undefined8 uStack_100;
  UnityEngine_Object_o *pUStack_f8;
  _union_332950 _Stack_e8;
  undefined8 uStack_e0;
  UnityEngine_Object_o *pUStack_d8;
  _union_332950 _Stack_c8;
  undefined8 uStack_c0;
  UnityEngine_Object_o *pUStack_b8;
  _union_332950 _Stack_a8;
  undefined8 uStack_a0;
  UnityEngine_Object_o *pUStack_98;
  Characters_BaseCharacter_o *pCStack_90;
  Characters_BaseCharacter_o *pCStack_88;
  Characters_BaseCharacter_o *pCStack_80;
  Characters_BaseCharacter_o *pCStack_78;
  Characters_BaseCharacter_o *pCStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  Characters_BaseCharacter_o *pCStack_58;
  Characters_BaseCharacter_o *pCStack_50;
  Characters_ContinuousDamageHitbox_o *pCStack_48;
  UnityEngine_Collider_o *pUStack_40;
  
  __this_14 = (long *)other;
  plVar13 = (long *)__this;
  if (g_data_057add8a == '\0') {
    pUStack_40 = (UnityEngine_Collider_o *)0x42aae0a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pUStack_40 = (UnityEngine_Collider_o *)0x42aae16;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pUStack_40 = (UnityEngine_Collider_o *)0x42aae22;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pUStack_40 = (UnityEngine_Collider_o *)0x42aae2e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pUStack_40 = (UnityEngine_Collider_o *)0x42aae3a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    pUStack_40 = (UnityEngine_Collider_o *)0x42aae46;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
    pUStack_40 = (UnityEngine_Collider_o *)0x42aae52;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    pUStack_40 = (UnityEngine_Collider_o *)0x42aae5e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    pUStack_40 = (UnityEngine_Collider_o *)0x42aae6a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    pUStack_40 = (UnityEngine_Collider_o *)0x42aae76;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    pUStack_40 = (UnityEngine_Collider_o *)0x42aae82;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    plVar13 = &TypeInfo_TeamInfo;
    pUStack_40 = (UnityEngine_Collider_o *)0x42aae8e;
    il2cpp_runtime_helper_023445d0();
    g_data_057add8a = '\x01';
  }
  if (other != (UnityEngine_Collider_o *)0x0) {
    __this_14 = (long *)0x0;
    pUStack_40 = (UnityEngine_Collider_o *)0x42aaea8;
    plVar13 = (long *)other;
    pCVar9 = (Characters_BaseCharacter_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
    if (pCVar9 != (Characters_BaseCharacter_o *)0x0) {
      __this_14 = (long *)0x0;
      pUStack_40 = (UnityEngine_Collider_o *)0x42aaebb;
      pCVar10 = (Characters_BaseCharacter_o *)
                UnityEngine_Transform__get_root((UnityEngine_Transform_o *)pCVar9,(MethodInfo *)0x0);
      plVar13 = (long *)pCVar9;
      if (pCVar10 != (Characters_BaseCharacter_o *)0x0) {
        __this_14 = (long *)0x0;
        pUStack_40 = (UnityEngine_Collider_o *)0x42aaece;
        pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pCVar10,(MethodInfo *)0x0);
        plVar13 = (long *)pCVar10;
        if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
          pUStack_40 = (UnityEngine_Collider_o *)0x42aaee9;
          unaff_R13 = (Characters_BaseCharacter_o *)
                      UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
          __this_14 = (long *)0x0;
          pUStack_40 = (UnityEngine_Collider_o *)0x42aaef6;
          plVar13 = (long *)other;
          pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
          if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
            pUStack_40 = (UnityEngine_Collider_o *)0x42aaf11;
            unaff_R12 = (MethodInfo_33E10B0 **)
                        UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
            unaff_RBP = &TypeInfo_Object;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              pUStack_40 = (UnityEngine_Collider_o *)0x42aaf2d;
              il2cpp_runtime_helper_02337ed0();
            }
            pUStack_40 = (UnityEngine_Collider_o *)0x42aaf39;
            bVar8 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)unaff_R13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            if ((char)bVar8 == '\0') {
label_042aaf6e:
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                pUStack_40 = (UnityEngine_Collider_o *)0x42aaf80;
                il2cpp_runtime_helper_02337ed0();
              }
              __this_14 = (long *)0x0;
              pUStack_40 = (UnityEngine_Collider_o *)0x42aaf8c;
              bVar8 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)unaff_R12,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if ((char)bVar8 == '\0') {
                return;
              }
              pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._handlersInside;
              plVar13 = (long *)0x0;
              if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                pUStack_40 = (UnityEngine_Collider_o *)0x42aafb6;
                __this_14 = (long *)unaff_R12;
                bVar8 = System_Collections_Generic_HashSet_object___Contains
                                  (pSVar3,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Contains);
                if ((char)bVar8 != '\0') {
                  return;
                }
                pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._handlersInside;
                plVar13 = (long *)0x0;
                if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                  pUStack_40 = (UnityEngine_Collider_o *)0x42aafe0;
                  __this_14 = (long *)unaff_R12;
                  System_Collections_Generic_HashSet_object___Add
                            (pSVar3,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Add);
                  __this_00 = (__this->fields)._handlerDamageTimers;
                  plVar13 = (long *)0x0;
                  if (__this_00 !=
                      (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)0x0) {
                    pUStack_40 = (UnityEngine_Collider_o *)0x42ab005;
                    __this_14 = (long *)unaff_R12;
                    System_Collections_Generic_Dictionary_object__float___set_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                               (Il2CppObject *)unaff_R12,0.0,MethodInfo_Void_set_Item);
                    pSVar15 = (System_Collections_Generic_Dictionary_object__object__o *)
                              (__this->fields)._handlerColliders;
                    pCVar9 = (Characters_BaseCharacter_o *)unaff_R12;
                    method_00 = MethodInfo_Void_set_Item;
                    goto joined_r0x042ab099;
                  }
                }
              }
            }
            else {
              unaff_RBX = (__this->fields).Owner;
              if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
                pUStack_40 = (UnityEngine_Collider_o *)0x42aaf59;
                il2cpp_runtime_helper_02337ed0();
              }
              pUStack_40 = (UnityEngine_Collider_o *)0x42aaf66;
              __this_14 = (long *)unaff_R13;
              bVar8 = GameManagers_TeamInfo__SameTeam_446fee0(unaff_RBX,unaff_R13,(MethodInfo *)0x0);
              if ((char)bVar8 != '\0') goto label_042aaf6e;
              pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._charactersInside;
              plVar13 = (long *)0x0;
              if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042ab0be;
              pUStack_40 = (UnityEngine_Collider_o *)0x42ab046;
              __this_14 = (long *)unaff_R13;
              bVar8 = System_Collections_Generic_HashSet_object___Contains
                                (pSVar3,(Il2CppObject *)unaff_R13,MethodInfo_Boolean_Contains);
              if ((char)bVar8 != '\0') {
                return;
              }
              pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._charactersInside;
              plVar13 = (long *)0x0;
              if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042ab0be;
              pUStack_40 = (UnityEngine_Collider_o *)0x42ab074;
              __this_14 = (long *)unaff_R13;
              System_Collections_Generic_HashSet_object___Add(pSVar3,(Il2CppObject *)unaff_R13,MethodInfo_Boolean_Add);
              __this_01 = (__this->fields)._characterDamageTimers;
              plVar13 = (long *)0x0;
              if (__this_01 == (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0)
              goto label_042ab0be;
              pUStack_40 = (UnityEngine_Collider_o *)0x42ab092;
              __this_14 = (long *)unaff_R13;
              System_Collections_Generic_Dictionary_object__float___set_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                         (Il2CppObject *)unaff_R13,0.0,MethodInfo_Void_set_Item);
              pSVar15 = (System_Collections_Generic_Dictionary_object__object__o *)
                        (__this->fields)._characterColliders;
              pCVar9 = unaff_R13;
              method_00 = MethodInfo_Void_set_Item;
joined_r0x042ab099:
              plVar13 = (long *)0x0;
              if (pSVar15 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                System_Collections_Generic_Dictionary_object__object___set_Item
                          (pSVar15,(Il2CppObject *)pCVar9,(Il2CppObject *)other,method_00);
                return;
              }
            }
          }
        }
      }
    }
  }
label_042ab0be:
  pUStack_40 = (UnityEngine_Collider_o *)0x42ab0c3;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  plVar14 = plVar13;
  pCStack_58 = unaff_RBX;
  pCStack_50 = (Characters_BaseCharacter_o *)unaff_R12;
  pCStack_48 = __this;
  pUStack_40 = other;
  if (g_data_057add8b == '\0') {
    plStack_68 = (long *)0x42ab0f7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    plStack_68 = (long *)0x42ab103;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    plStack_68 = (long *)0x42ab10f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    plStack_68 = (long *)0x42ab11b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    plStack_68 = (long *)0x42ab127;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    plStack_68 = (long *)0x42ab133;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
    plStack_68 = (long *)0x42ab13f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    plStack_68 = (long *)0x42ab14b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    plStack_68 = (long *)0x42ab157;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    plStack_68 = (long *)0x42ab163;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    plVar14 = &TypeInfo_Object;
    plStack_68 = (long *)0x42ab16f;
    il2cpp_runtime_helper_023445d0();
    g_data_057add8b = '\x01';
  }
  if ((Characters_BaseCharacter_o *)__this_14 != (Characters_BaseCharacter_o *)0x0) {
    plStack_68 = (long *)0x42ab189;
    plVar14 = __this_14;
    pCVar9 = (Characters_BaseCharacter_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_14,(MethodInfo *)0x0);
    if (pCVar9 == (Characters_BaseCharacter_o *)0x0) goto label_042ab35d;
    plStack_68 = (long *)0x42ab19c;
    pCVar10 = (Characters_BaseCharacter_o *)
              UnityEngine_Transform__get_root((UnityEngine_Transform_o *)pCVar9,(MethodInfo *)0x0);
    plVar14 = (long *)pCVar9;
    if (pCVar10 == (Characters_BaseCharacter_o *)0x0) goto label_042ab35d;
    plStack_68 = (long *)0x42ab1af;
    pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pCVar10,(MethodInfo *)0x0);
    plVar14 = (long *)pCVar10;
    if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_042ab35d;
    plStack_68 = (long *)0x42ab1ca;
    other = (UnityEngine_Collider_o *)UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    plStack_68 = (long *)0x42ab1d7;
    plVar14 = __this_14;
    pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_14,(MethodInfo *)0x0);
    if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_042ab35d;
    plStack_68 = (long *)0x42ab1f2;
    unaff_R12 = (MethodInfo_33E10B0 **)UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
    __this_14 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      plStack_68 = (long *)0x42ab20d;
      il2cpp_runtime_helper_02337ed0();
    }
    plStack_68 = (long *)0x42ab219;
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)other,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
                &(((Characters_BaseCharacter_o *)plVar13)->fields).CustomDamage;
      plVar14 = (long *)0x0;
      if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042ab35d;
      plStack_68 = (long *)0x42ab240;
      bVar8 = System_Collections_Generic_HashSet_object___Contains(pSVar3,(Il2CppObject *)other,MethodInfo_Boolean_Contains);
      if ((char)bVar8 != '\0') {
        pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
                  &(((Characters_BaseCharacter_o *)plVar13)->fields).CustomDamage;
        plVar14 = (long *)0x0;
        if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042ab35d;
        plStack_68 = (long *)0x42ab263;
        System_Collections_Generic_HashSet_object___Remove(pSVar3,(Il2CppObject *)other,MethodInfo_Boolean_Remove);
        pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 (((Characters_BaseCharacter_o *)plVar13)->fields).FeedVictimName;
        plVar14 = (long *)0x0;
        if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042ab35d;
        plStack_68 = (long *)0x42ab282;
        System_Collections_Generic_Dictionary_object__float___Remove
                  (pSVar4,(Il2CppObject *)other,MethodInfo_Boolean_Remove);
        pSVar15 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   &(((Characters_BaseCharacter_o *)plVar13)->fields).Dead;
        plVar14 = (long *)0x0;
        method_01 = MethodInfo_Boolean_Remove;
        pCVar9 = (Characters_BaseCharacter_o *)other;
        if (pSVar15 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042ab35d;
        goto label_042ab341;
      }
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      plStack_68 = (long *)0x42ab2b2;
      il2cpp_runtime_helper_02337ed0();
    }
    plStack_68 = (long *)0x42ab2be;
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)unaff_R12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return;
    }
    pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
              &(((Characters_BaseCharacter_o *)plVar13)->fields).CurrentHealth;
    plVar14 = (long *)0x0;
    if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      plStack_68 = (long *)0x42ab2e8;
      bVar8 = System_Collections_Generic_HashSet_object___Contains
                        (pSVar3,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Contains);
      if ((char)bVar8 == '\0') {
        return;
      }
      pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
                &(((Characters_BaseCharacter_o *)plVar13)->fields).CurrentHealth;
      plVar14 = (long *)0x0;
      if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        plStack_68 = (long *)0x42ab30a;
        System_Collections_Generic_HashSet_object___Remove(pSVar3,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Remove);
        pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 (((Characters_BaseCharacter_o *)plVar13)->fields).Cache;
        plVar14 = (long *)0x0;
        if (pSVar4 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
          plStack_68 = (long *)0x42ab328;
          System_Collections_Generic_Dictionary_object__float___Remove
                    (pSVar4,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Remove);
          pSVar15 = *(System_Collections_Generic_Dictionary_object__object__o **)
                     &(((Characters_BaseCharacter_o *)plVar13)->fields).AI;
          plVar14 = (long *)0x0;
          method_01 = MethodInfo_Boolean_Remove;
          pCVar9 = (Characters_BaseCharacter_o *)unaff_R12;
          if (pSVar15 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_042ab341:
            System_Collections_Generic_Dictionary_object__object___Remove
                      (pSVar15,(Il2CppObject *)pCVar9,method_01);
            return;
          }
        }
      }
    }
  }
label_042ab35d:
  plStack_68 = (long *)0x42ab362;
  il2cpp_runtime_helper_022b2c90();
  pCStack_90 = (Characters_BaseCharacter_o *)__this_14;
  pCStack_88 = (Characters_BaseCharacter_o *)unaff_R12;
  pCStack_80 = unaff_R13;
  pCStack_78 = (Characters_BaseCharacter_o *)plVar13;
  pCStack_70 = (Characters_BaseCharacter_o *)other;
  plStack_68 = unaff_RBP;
  if (g_data_057add8c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_CustomLogic_CustomLogicCollisionH);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Characters_BaseCharacter_GetEnume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicCollisionHand);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Characters_BaseCharacter_GetEnumerat);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Characters_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_CustomLogic_CustomLogicCollisionHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_CustomLogicCollisionHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057add8c = '\x01';
  }
  _Stack_a8.genericMethod = (void *)0x0;
  uStack_a0 = 0;
  pUStack_98 = (UnityEngine_Object_o *)0x0;
  _Stack_c8.genericMethod = (void *)0x0;
  uStack_c0 = 0;
  pUStack_b8 = (UnityEngine_Object_o *)0x0;
  _Stack_e8.genericMethod = (void *)0x0;
  uStack_e0 = 0;
  pUStack_d8 = (UnityEngine_Object_o *)0x0;
  _Stack_108.genericMethod = (void *)0x0;
  uStack_100 = 0;
  pUStack_f8 = (UnityEngine_Object_o *)0x0;
  __this_02 = *(UnityEngine_Collider_o **)
               &(((Characters_BaseCharacter_o *)plVar14)->fields).HasExplicitNameTag;
  if (__this_02 == (UnityEngine_Collider_o *)0x0) goto label_042abd2d;
  bVar8 = UnityEngine_Collider__get_enabled(__this_02,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    return;
  }
  unaff_R12 = (MethodInfo_33E10B0 **)il2cpp_runtime_helper_023052d0(TypeInfo_List_BaseCharacter);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)unaff_R12,MethodInfo_List_1_Characters_BaseCharacter);
  pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
            &(((Characters_BaseCharacter_o *)plVar14)->fields).CustomDamage;
  if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042abd2d;
  System_Collections_Generic_HashSet_object___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)&_Stack_120,pSVar3,MethodInfo_HashSet_1_T_Enumerator_Characters_BaseCharacter_GetEnume);
  pUStack_98 = pUStack_110;
  _Stack_a8 = _Stack_120;
  uStack_a0 = uStack_118;
  while (__this_03.fields._8_8_ = plVar14,
        __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffec8,
        __this_03.fields._current._0_4_ = in_stack_fffffffffffffed8,
        __this_03.fields._current._4_4_ = in_stack_fffffffffffffedc,
        bVar8 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          (__this_03,(MethodInfo_3219C40 *)&_Stack_a8), pUVar7 = pUStack_98,
        (char)bVar8 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar8 = UnityEngine_Object__op_Equality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    lVar6 = MethodInfo_Void_Add;
    if ((char)bVar8 == '\0') {
      if (pUVar7 == (UnityEngine_Object_o *)0x0) goto label_042abd0f;
      if (*(char *)&pUVar7[4].monitor != '\0') goto label_042ab6bc;
      pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
               (((Characters_BaseCharacter_o *)plVar14)->fields).FeedVictimName;
      if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd32;
      bVar8 = System_Collections_Generic_Dictionary_object__float___ContainsKey
                        (pSVar4,(Il2CppObject *)pUVar7,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar8 != '\0') {
        pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 (((Characters_BaseCharacter_o *)plVar14)->fields).FeedVictimName;
        if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd4b;
        in_stack_fffffffffffffedc =
             System_Collections_Generic_Dictionary_object__float___get_Item
                       (pSVar4,(Il2CppObject *)pUVar7,MethodInfo_Single_get_Item);
        fVar16 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        System_Collections_Generic_Dictionary_object__float___set_Item
                  (pSVar4,(Il2CppObject *)pUVar7,in_stack_fffffffffffffedc + fVar16,MethodInfo_Void_set_Item);
        pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 (((Characters_BaseCharacter_o *)plVar14)->fields).FeedVictimName;
        if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd46;
        fVar16 = System_Collections_Generic_Dictionary_object__float___get_Item
                           (pSVar4,(Il2CppObject *)pUVar7,MethodInfo_Single_get_Item);
        if (*(float *)((long)&(((Characters_BaseCharacter_o *)plVar14)->fields).FeedKillerName + 4) <= fVar16)
        {
          pSVar15 = *(System_Collections_Generic_Dictionary_object__object__o **)
                     &(((Characters_BaseCharacter_o *)plVar14)->fields).Dead;
          if (pSVar15 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042abd41;
          bVar8 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                            (pSVar15,(Il2CppObject *)pUVar7,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar8 != '\0') {
            pSVar15 = *(System_Collections_Generic_Dictionary_object__object__o **)
                       &(((Characters_BaseCharacter_o *)plVar14)->fields).Dead;
            if (pSVar15 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042abd55;
            pIVar12 = System_Collections_Generic_Dictionary_object__object___get_Item
                                (pSVar15,(Il2CppObject *)pUVar7,MethodInfo_Collider_get_Item);
            (*(((Characters_BaseCharacter_o *)plVar14)->klass->vtable)._7_unknown.methodPtr)
                      (plVar14,pUVar7,pIVar12,
                       (((Characters_BaseCharacter_o *)plVar14)->klass->vtable)._7_unknown.method);
          }
          pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                   (((Characters_BaseCharacter_o *)plVar14)->fields).FeedVictimName;
          if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd50;
          System_Collections_Generic_Dictionary_object__float___set_Item
                    (pSVar4,(Il2CppObject *)pUVar7,0.0,MethodInfo_Void_set_Item);
        }
      }
    }
    else {
label_042ab6bc:
      if ((Characters_BaseCharacter_o *)unaff_R12 == (Characters_BaseCharacter_o *)0x0) goto label_042abd05;
      piVar1 = (int *)((long)&(((Characters_BaseCharacter_o *)unaff_R12)->fields).m_CancellationTokenSource +
                      4);
      *piVar1 = *piVar1 + 1;
      lVar5 = (((Characters_BaseCharacter_o *)unaff_R12)->fields).m_CachedPtr;
      if (lVar5 == 0) goto label_042abd0a;
      uVar2 = *(uint *)&(((Characters_BaseCharacter_o *)unaff_R12)->fields).m_CancellationTokenSource;
      if (uVar2 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)&(((Characters_BaseCharacter_o *)unaff_R12)->fields).m_CancellationTokenSource = uVar2 + 1;
        *(UnityEngine_Object_o **)(lVar5 + 0x20 + (long)(int)uVar2 * 8) = pUVar7;
        il2cpp_runtime_helper_022b4080(lVar5 + 0x20 + (long)(int)uVar2 * 8,pUVar7);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)unaff_R12,(Il2CppObject *)pUVar7,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  __this_04.fields._8_8_ = plVar14;
  __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffec8;
  __this_04.fields._current._0_4_ = in_stack_fffffffffffffed8;
  __this_04.fields._current._4_4_ = in_stack_fffffffffffffedc;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_04,(MethodInfo_3219C30 *)&_Stack_a8);
  if ((Characters_BaseCharacter_o *)unaff_R12 == (Characters_BaseCharacter_o *)0x0) goto label_042abd2d;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_120,
             (System_Collections_Generic_List_object__o *)unaff_R12,MethodInfo_List_1_T_Enumerator_Characters_BaseCharacter_GetEnumerat);
  pUStack_b8 = pUStack_110;
  _Stack_c8 = _Stack_120;
  uStack_c0 = uStack_118;
  unaff_R12 = &MethodInfo_Boolean_Remove;
  while( true ) {
    __this_05.fields._8_8_ = plVar14;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec8;
    __this_05.fields._current._0_4_ = in_stack_fffffffffffffed8;
    __this_05.fields._current._4_4_ = in_stack_fffffffffffffedc;
    bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_05,(MethodInfo_321A1D0 *)&_Stack_c8);
    pUVar7 = pUStack_b8;
    if ((char)bVar8 == '\0') {
      __this_06.fields._8_8_ = plVar14;
      __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec8;
      __this_06.fields._current._0_4_ = in_stack_fffffffffffffed8;
      __this_06.fields._current._4_4_ = in_stack_fffffffffffffedc;
      System_Collections_Generic_List_Enumerator_object___Dispose(__this_06,(MethodInfo_321A1C0 *)&_Stack_c8);
      unaff_R12 = (MethodInfo_33E10B0 **)il2cpp_runtime_helper_023052d0(TypeInfo_List_CustomLogicCollisionHandler);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)unaff_R12,MethodInfo_List_1_CustomLogic_CustomLogicCollisionHandler);
      pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
                &(((Characters_BaseCharacter_o *)plVar14)->fields).CurrentHealth;
      if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042abd2d;
      System_Collections_Generic_HashSet_object___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)&_Stack_120,pSVar3,MethodInfo_HashSet_1_T_Enumerator_CustomLogic_CustomLogicCollisionH);
      pUStack_d8 = pUStack_110;
      _Stack_e8 = _Stack_120;
      uStack_e0 = uStack_118;
      while (__this_07.fields._8_8_ = plVar14,
            __this_07.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffec8,
            __this_07.fields._current._0_4_ = in_stack_fffffffffffffed8,
            __this_07.fields._current._4_4_ = in_stack_fffffffffffffedc,
            bVar8 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                              (__this_07,(MethodInfo_3219C40 *)&_Stack_e8), pUVar7 = pUStack_d8,
            (char)bVar8 != '\0') {
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar8 = UnityEngine_Object__op_Equality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        lVar6 = MethodInfo_Void_Add;
        if ((char)bVar8 == '\0') {
          pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                   (((Characters_BaseCharacter_o *)plVar14)->fields).Cache;
          if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd14;
          bVar8 = System_Collections_Generic_Dictionary_object__float___ContainsKey
                            (pSVar4,(Il2CppObject *)pUVar7,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar8 != '\0') {
            pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                     (((Characters_BaseCharacter_o *)plVar14)->fields).Cache;
            if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd28;
            in_stack_fffffffffffffedc =
                 System_Collections_Generic_Dictionary_object__float___get_Item
                           (pSVar4,(Il2CppObject *)pUVar7,MethodInfo_Single_get_Item);
            fVar16 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            System_Collections_Generic_Dictionary_object__float___set_Item
                      (pSVar4,(Il2CppObject *)pUVar7,in_stack_fffffffffffffedc + fVar16,MethodInfo_Void_set_Item);
            pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                     (((Characters_BaseCharacter_o *)plVar14)->fields).Cache;
            if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd23;
            fVar16 = System_Collections_Generic_Dictionary_object__float___get_Item
                               (pSVar4,(Il2CppObject *)pUVar7,MethodInfo_Single_get_Item);
            if (*(float *)((long)&(((Characters_BaseCharacter_o *)plVar14)->fields).FeedKillerName + 4) <=
                fVar16) {
              pSVar15 = *(System_Collections_Generic_Dictionary_object__object__o **)
                         &(((Characters_BaseCharacter_o *)plVar14)->fields).AI;
              if (pSVar15 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto label_042abd37;
              bVar8 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                (pSVar15,(Il2CppObject *)pUVar7,MethodInfo_Boolean_ContainsKey);
              if ((char)bVar8 != '\0') {
                pSVar15 = *(System_Collections_Generic_Dictionary_object__object__o **)
                           &(((Characters_BaseCharacter_o *)plVar14)->fields).AI;
                if (pSVar15 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                goto label_042abd5a;
                pIVar12 = System_Collections_Generic_Dictionary_object__object___get_Item
                                    (pSVar15,(Il2CppObject *)pUVar7,MethodInfo_Collider_get_Item);
                (*(((Characters_BaseCharacter_o *)plVar14)->klass->vtable)._8_unknown.methodPtr)
                          (plVar14,pUVar7,pIVar12,
                           (((Characters_BaseCharacter_o *)plVar14)->klass->vtable)._8_unknown.method);
              }
              pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                       (((Characters_BaseCharacter_o *)plVar14)->fields).Cache;
              if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abd3c;
              System_Collections_Generic_Dictionary_object__float___set_Item
                        (pSVar4,(Il2CppObject *)pUVar7,0.0,MethodInfo_Void_set_Item);
            }
          }
        }
        else {
          if ((Characters_BaseCharacter_o *)unaff_R12 == (Characters_BaseCharacter_o *)0x0) goto label_042abd19;
          piVar1 = (int *)((long)&(((Characters_BaseCharacter_o *)unaff_R12)->fields).
                                  m_CancellationTokenSource + 4);
          *piVar1 = *piVar1 + 1;
          lVar5 = (((Characters_BaseCharacter_o *)unaff_R12)->fields).m_CachedPtr;
          if (lVar5 == 0) goto label_042abd1e;
          uVar2 = *(uint *)&(((Characters_BaseCharacter_o *)unaff_R12)->fields).m_CancellationTokenSource;
          if (uVar2 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)&(((Characters_BaseCharacter_o *)unaff_R12)->fields).m_CancellationTokenSource =
                 uVar2 + 1;
            *(UnityEngine_Object_o **)(lVar5 + 0x20 + (long)(int)uVar2 * 8) = pUVar7;
            il2cpp_runtime_helper_022b4080(lVar5 + 0x20 + (long)(int)uVar2 * 8,pUVar7);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)unaff_R12,(Il2CppObject *)pUVar7,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      __this_08.fields._8_8_ = plVar14;
      __this_08.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffec8;
      __this_08.fields._current._0_4_ = in_stack_fffffffffffffed8;
      __this_08.fields._current._4_4_ = in_stack_fffffffffffffedc;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_08,(MethodInfo_3219C30 *)&_Stack_e8);
      goto label_042abbee;
    }
    pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
              &(((Characters_BaseCharacter_o *)plVar14)->fields).CustomDamage;
    if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) break;
    System_Collections_Generic_HashSet_object___Remove(pSVar3,(Il2CppObject *)pUStack_b8,MethodInfo_Boolean_Remove);
    pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
             (((Characters_BaseCharacter_o *)plVar14)->fields).FeedVictimName;
    if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abcec;
    System_Collections_Generic_Dictionary_object__float___Remove(pSVar4,(Il2CppObject *)pUVar7,MethodInfo_Boolean_Remove);
    pSVar15 = *(System_Collections_Generic_Dictionary_object__object__o **)
               &(((Characters_BaseCharacter_o *)plVar14)->fields).Dead;
    if (pSVar15 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042abcf1;
    System_Collections_Generic_Dictionary_object__object___Remove(pSVar15,(Il2CppObject *)pUVar7,MethodInfo_Boolean_Remove)
    ;
  }
  il2cpp_runtime_helper_022b2c90();
label_042abcec:
  il2cpp_runtime_helper_022b2c90();
label_042abcf1:
  il2cpp_runtime_helper_022b2c90();
label_042abcf6:
  il2cpp_runtime_helper_022b2c90();
label_042abcfb:
  il2cpp_runtime_helper_022b2c90();
  do {
    il2cpp_runtime_helper_022b2c90();
label_042abd05:
    il2cpp_runtime_helper_022b2c90();
label_042abd0a:
    il2cpp_runtime_helper_022b2c90();
label_042abd0f:
    il2cpp_runtime_helper_022b2c90();
label_042abd14:
    il2cpp_runtime_helper_022b2c90();
label_042abd19:
    il2cpp_runtime_helper_022b2c90();
label_042abd1e:
    il2cpp_runtime_helper_022b2c90();
label_042abd23:
    il2cpp_runtime_helper_022b2c90();
label_042abd28:
    il2cpp_runtime_helper_022b2c90();
label_042abd2d:
    do {
      il2cpp_runtime_helper_022b2c90();
label_042abd32:
      il2cpp_runtime_helper_022b2c90();
label_042abd37:
      il2cpp_runtime_helper_022b2c90();
label_042abd3c:
      il2cpp_runtime_helper_022b2c90();
label_042abd41:
      il2cpp_runtime_helper_022b2c90();
label_042abd46:
      il2cpp_runtime_helper_022b2c90();
label_042abd4b:
      il2cpp_runtime_helper_022b2c90();
label_042abd50:
      il2cpp_runtime_helper_022b2c90();
label_042abd55:
      il2cpp_runtime_helper_022b2c90();
label_042abd5a:
      auVar17 = il2cpp_runtime_helper_022b2c90();
      if (auVar17._8_4_ != 1) {
        __this_12.fields._8_8_ = plVar14;
        __this_12.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffec8;
        __this_12.fields._current._0_4_ = in_stack_fffffffffffffed8;
        __this_12.fields._current._4_4_ = in_stack_fffffffffffffedc;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_12,(MethodInfo_3219C30 *)&_Stack_e8);
label_042ac20c:
        _Unwind_Resume(auVar17._0_8_);
      }
      plVar13 = (long *)__cxa_begin_catch(auVar17._0_8_);
      lVar6 = *plVar13;
      __cxa_end_catch();
      __this_11.fields._8_8_ = plVar14;
      __this_11.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffec8;
      __this_11.fields._current._0_4_ = in_stack_fffffffffffffed8;
      __this_11.fields._current._4_4_ = in_stack_fffffffffffffedc;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_11,(MethodInfo_3219C30 *)&_Stack_e8);
      if (lVar6 != 0) {
        il2cpp_runtime_helper_022fefe0(lVar6);
        __this_13.fields._8_8_ = plVar14;
        __this_13.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffec8;
        __this_13.fields._current._0_4_ = in_stack_fffffffffffffed8;
        __this_13.fields._current._4_4_ = in_stack_fffffffffffffedc;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_13,(MethodInfo_3219C30 *)&_Stack_a8);
        goto label_042ac20c;
      }
label_042abbee:
    } while ((Characters_BaseCharacter_o *)unaff_R12 == (Characters_BaseCharacter_o *)0x0);
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_120,
               (System_Collections_Generic_List_object__o *)unaff_R12,MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicCollisionHand);
    pUStack_f8 = pUStack_110;
    _Stack_108 = _Stack_120;
    uStack_100 = uStack_118;
    unaff_R12 = &MethodInfo_Boolean_Remove;
    while( true ) {
      __this_09.fields._8_8_ = plVar14;
      __this_09.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec8;
      __this_09.fields._current._0_4_ = in_stack_fffffffffffffed8;
      __this_09.fields._current._4_4_ = in_stack_fffffffffffffedc;
      bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_09,(MethodInfo_321A1D0 *)&_Stack_108);
      pUVar7 = pUStack_f8;
      if ((char)bVar8 == '\0') {
        __this_10.fields._8_8_ = plVar14;
        __this_10.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec8;
        __this_10.fields._current._0_4_ = in_stack_fffffffffffffed8;
        __this_10.fields._current._4_4_ = in_stack_fffffffffffffedc;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_10,(MethodInfo_321A1C0 *)&_Stack_108);
        return;
      }
      pSVar3 = *(System_Collections_Generic_HashSet_object__o **)
                &(((Characters_BaseCharacter_o *)plVar14)->fields).CurrentHealth;
      if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042abcf6;
      System_Collections_Generic_HashSet_object___Remove(pSVar3,(Il2CppObject *)pUStack_f8,MethodInfo_Boolean_Remove);
      pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
               (((Characters_BaseCharacter_o *)plVar14)->fields).Cache;
      if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_042abcfb;
      System_Collections_Generic_Dictionary_object__float___Remove(pSVar4,(Il2CppObject *)pUVar7,MethodInfo_Boolean_Remove)
      ;
      pSVar15 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 &(((Characters_BaseCharacter_o *)plVar14)->fields).AI;
      if (pSVar15 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      System_Collections_Generic_Dictionary_object__object___Remove
                (pSVar15,(Il2CppObject *)pUVar7,MethodInfo_Boolean_Remove);
    }
  } while( true );
}


// Characters.ContinuousDamageHitbox$$OnTriggerExit
// il2cpp: void Characters_ContinuousDamageHitbox__OnTriggerExit (Characters_ContinuousDamageHitbox_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x42ab0d0

void Characters_ContinuousDamageHitbox__OnTriggerExit
               (Characters_ContinuousDamageHitbox_o *__this,UnityEngine_Collider_o *other,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  System_Collections_Generic_Dictionary_BaseCharacter__float__o *pSVar4;
  UnityEngine_Collider_o *__this_00;
  System_Object_array *pSVar5;
  System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *pSVar6;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  long lVar8;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_09;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_10;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_11;
  UnityEngine_Object_o *pUVar9;
  bool_conflict bVar10;
  Characters_ContinuousDamageHitbox_o *__this_12;
  Characters_ContinuousDamageHitbox_o *__this_13;
  UnityEngine_GameObject_o *pUVar11;
  System_Collections_Generic_List_object__o *x;
  Il2CppObject *pIVar12;
  long *plVar13;
  MethodInfo_3106630 *method_00;
  long *plVar14;
  System_Collections_Generic_Dictionary_BaseCharacter__Collider__o *__this_14;
  MethodInfo_33E10B0 **unaff_R12;
  float fVar15;
  undefined1 auVar16 [12];
  undefined8 in_stack_ffffffffffffff00;
  undefined4 in_stack_ffffffffffffff10;
  float in_stack_ffffffffffffff14;
  _union_332950 _Stack_e8;
  undefined8 uStack_e0;
  UnityEngine_Object_o *pUStack_d8;
  _union_332950 _Stack_d0;
  undefined8 uStack_c8;
  UnityEngine_Object_o *pUStack_c0;
  _union_332950 _Stack_b0;
  undefined8 uStack_a8;
  UnityEngine_Object_o *pUStack_a0;
  _union_332950 _Stack_90;
  undefined8 uStack_88;
  UnityEngine_Object_o *pUStack_80;
  _union_332950 _Stack_70;
  undefined8 uStack_68;
  UnityEngine_Object_o *pUStack_60;
  UnityEngine_Collider_o *pUStack_58;
  System_Collections_Generic_List_object__o *pSStack_50;
  
  plVar14 = (long *)__this;
  if (g_data_057add8b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    plVar14 = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057add8b = '\x01';
  }
  if ((((other != (UnityEngine_Collider_o *)0x0) &&
       (plVar14 = (long *)other,
       __this_12 = (Characters_ContinuousDamageHitbox_o *)
                   UnityEngine_Component__get_transform((UnityEngine_Component_o *)other,(MethodInfo *)0x0),
       __this_12 != (Characters_ContinuousDamageHitbox_o *)0x0)) &&
      (__this_13 = (Characters_ContinuousDamageHitbox_o *)
                   UnityEngine_Transform__get_root((UnityEngine_Transform_o *)__this_12,(MethodInfo *)0x0),
      plVar14 = (long *)__this_12, __this_13 != (Characters_ContinuousDamageHitbox_o *)0x0)) &&
     (pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_13,(MethodInfo *)0x0),
     plVar14 = (long *)__this_13, pUVar11 != (UnityEngine_GameObject_o *)0x0)) {
    x = (System_Collections_Generic_List_object__o *)
        UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    plVar14 = (long *)other;
    pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
    if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_042ab35d;
    unaff_R12 = (MethodInfo_33E10B0 **)UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar10 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    other = (UnityEngine_Collider_o *)&TypeInfo_Object;
    if ((char)bVar10 != '\0') {
      pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._charactersInside;
      plVar14 = (long *)0x0;
      if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042ab35d;
      bVar10 = System_Collections_Generic_HashSet_object___Contains(pSVar3,(Il2CppObject *)x,MethodInfo_Boolean_Contains);
      if ((char)bVar10 != '\0') {
        pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._charactersInside;
        plVar14 = (long *)0x0;
        if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042ab35d;
        System_Collections_Generic_HashSet_object___Remove(pSVar3,(Il2CppObject *)x,MethodInfo_Boolean_Remove);
        pSVar4 = (__this->fields)._characterDamageTimers;
        plVar14 = (long *)0x0;
        if (pSVar4 == (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0) goto label_042ab35d;
        System_Collections_Generic_Dictionary_object__float___Remove
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,(Il2CppObject *)x,
                   MethodInfo_Boolean_Remove);
        __this_14 = (__this->fields)._characterColliders;
        plVar14 = (long *)0x0;
        method_00 = MethodInfo_Boolean_Remove;
        if (__this_14 == (System_Collections_Generic_Dictionary_BaseCharacter__Collider__o *)0x0)
        goto label_042ab35d;
        goto label_042ab341;
      }
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar10 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)unaff_R12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      return;
    }
    pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._handlersInside;
    plVar14 = (long *)0x0;
    if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar10 = System_Collections_Generic_HashSet_object___Contains
                         (pSVar3,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Contains);
      if ((char)bVar10 == '\0') {
        return;
      }
      pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._handlersInside;
      plVar14 = (long *)0x0;
      if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Remove(pSVar3,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Remove);
        pSVar6 = (__this->fields)._handlerDamageTimers;
        plVar14 = (long *)0x0;
        if (pSVar6 != (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)0x0) {
          System_Collections_Generic_Dictionary_object__float___Remove
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,(Il2CppObject *)unaff_R12
                     ,MethodInfo_Boolean_Remove);
          __this_14 = (System_Collections_Generic_Dictionary_BaseCharacter__Collider__o *)
                      (__this->fields)._handlerColliders;
          plVar14 = (long *)0x0;
          method_00 = MethodInfo_Boolean_Remove;
          x = (System_Collections_Generic_List_object__o *)unaff_R12;
          if (__this_14 != (System_Collections_Generic_Dictionary_BaseCharacter__Collider__o *)0x0) {
label_042ab341:
            System_Collections_Generic_Dictionary_object__object___Remove
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_14,(Il2CppObject *)x,
                       method_00);
            return;
          }
        }
      }
    }
  }
label_042ab35d:
  il2cpp_runtime_helper_022b2c90();
  pUStack_58 = other;
  pSStack_50 = (System_Collections_Generic_List_object__o *)unaff_R12;
  if (g_data_057add8c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_CustomLogic_CustomLogicCollisionH);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Characters_BaseCharacter_GetEnume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicCollisionHand);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Characters_BaseCharacter_GetEnumerat);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Characters_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_CustomLogic_CustomLogicCollisionHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_CustomLogicCollisionHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057add8c = '\x01';
  }
  _Stack_70.genericMethod = (void *)0x0;
  uStack_68 = 0;
  pUStack_60 = (UnityEngine_Object_o *)0x0;
  _Stack_90.genericMethod = (void *)0x0;
  uStack_88 = 0;
  pUStack_80 = (UnityEngine_Object_o *)0x0;
  _Stack_b0.genericMethod = (void *)0x0;
  uStack_a8 = 0;
  pUStack_a0 = (UnityEngine_Object_o *)0x0;
  _Stack_d0.genericMethod = (void *)0x0;
  uStack_c8 = 0;
  pUStack_c0 = (UnityEngine_Object_o *)0x0;
  __this_00 = (((Characters_ContinuousDamageHitbox_o *)plVar14)->fields)._collider;
  if (__this_00 == (UnityEngine_Collider_o *)0x0) goto label_042abd2d;
  bVar10 = UnityEngine_Collider__get_enabled(__this_00,(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    return;
  }
  unaff_R12 = (MethodInfo_33E10B0 **)il2cpp_runtime_helper_023052d0(TypeInfo_List_BaseCharacter);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)unaff_R12,MethodInfo_List_1_Characters_BaseCharacter);
  pSVar3 = (System_Collections_Generic_HashSet_object__o *)
           (((Characters_ContinuousDamageHitbox_o *)plVar14)->fields)._charactersInside;
  if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042abd2d;
  System_Collections_Generic_HashSet_object___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)&_Stack_e8,pSVar3,MethodInfo_HashSet_1_T_Enumerator_Characters_BaseCharacter_GetEnume);
  pUStack_60 = pUStack_d8;
  _Stack_70 = _Stack_e8;
  uStack_68 = uStack_e0;
  while (__this_01.fields._8_8_ = plVar14,
        __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff00,
        __this_01.fields._current._0_4_ = in_stack_ffffffffffffff10,
        __this_01.fields._current._4_4_ = in_stack_ffffffffffffff14,
        bVar10 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                           (__this_01,(MethodInfo_3219C40 *)&_Stack_70), pUVar9 = pUStack_60,
        (char)bVar10 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar10 = UnityEngine_Object__op_Equality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    lVar8 = MethodInfo_Void_Add;
    if ((char)bVar10 == '\0') {
      if (pUVar9 == (UnityEngine_Object_o *)0x0) goto label_042abd0f;
      if (*(char *)&pUVar9[4].monitor != '\0') goto label_042ab6bc;
      pSVar4 = (((Characters_ContinuousDamageHitbox_o *)plVar14)->fields)._characterDamageTimers;
      if (pSVar4 == (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0) goto label_042abd32;
      bVar10 = System_Collections_Generic_Dictionary_object__float___ContainsKey
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
                          (Il2CppObject *)pUVar9,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar10 != '\0') {
        pSVar4 = (((Characters_ContinuousDamageHitbox_o *)plVar14)->fields)._characterDamageTimers;
        if (pSVar4 == (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0) goto label_042abd4b;
        in_stack_ffffffffffffff14 =
             System_Collections_Generic_Dictionary_object__float___get_Item
                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,(Il2CppObject *)pUVar9
                        ,MethodInfo_Single_get_Item);
        fVar15 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        System_Collections_Generic_Dictionary_object__float___set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,(Il2CppObject *)pUVar9,
                   in_stack_ffffffffffffff14 + fVar15,MethodInfo_Void_set_Item);
        pSVar4 = (((Characters_ContinuousDamageHitbox_o *)plVar14)->fields)._characterDamageTimers;
        if (pSVar4 == (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0) goto label_042abd46;
        fVar15 = System_Collections_Generic_Dictionary_object__float___get_Item
                           ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
                            (Il2CppObject *)pUVar9,MethodInfo_Single_get_Item);
        if ((((Characters_ContinuousDamageHitbox_o *)plVar14)->fields).DamageInterval <= fVar15) {
          pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (((Characters_ContinuousDamageHitbox_o *)plVar14)->fields)._characterColliders;
          if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042abd41;
          bVar10 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                             (pSVar7,(Il2CppObject *)pUVar9,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar10 != '\0') {
            pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (((Characters_ContinuousDamageHitbox_o *)plVar14)->fields)._characterColliders;
            if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042abd55;
            pIVar12 = System_Collections_Generic_Dictionary_object__object___get_Item
                                (pSVar7,(Il2CppObject *)pUVar9,MethodInfo_Collider_get_Item);
            (*(((Characters_ContinuousDamageHitbox_o *)plVar14)->klass->vtable)._7_OnHit.methodPtr)
                      (plVar14,pUVar9,pIVar12,
                       (((Characters_ContinuousDamageHitbox_o *)plVar14)->klass->vtable)._7_OnHit.method);
          }
          pSVar4 = (((Characters_ContinuousDamageHitbox_o *)plVar14)->fields)._characterDamageTimers;
          if (pSVar4 == (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0)
          goto label_042abd50;
          System_Collections_Generic_Dictionary_object__float___set_Item
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,(Il2CppObject *)pUVar9,
                     0.0,MethodInfo_Void_set_Item);
        }
      }
    }
    else {
label_042ab6bc:
      if ((System_Collections_Generic_List_object__o *)unaff_R12 ==
          (System_Collections_Generic_List_object__o *)0x0) goto label_042abd05;
      piVar1 = &(((System_Collections_Generic_List_object__o *)unaff_R12)->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar5 = (((System_Collections_Generic_List_object__o *)unaff_R12)->fields)._items;
      if (pSVar5 == (System_Object_array *)0x0) goto label_042abd0a;
      uVar2 = (((System_Collections_Generic_List_object__o *)unaff_R12)->fields)._size;
      if (uVar2 < (uint)pSVar5->max_length) {
        (((System_Collections_Generic_List_object__o *)unaff_R12)->fields)._size = uVar2 + 1;
        pSVar5->m_Items[(int)uVar2] = (Il2CppObject *)pUVar9;
        il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar2,pUVar9);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)unaff_R12,(Il2CppObject *)pUVar9,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  __this_02.fields._8_8_ = plVar14;
  __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff00;
  __this_02.fields._current._0_4_ = in_stack_ffffffffffffff10;
  __this_02.fields._current._4_4_ = in_stack_ffffffffffffff14;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_02,(MethodInfo_3219C30 *)&_Stack_70);
  if ((System_Collections_Generic_List_object__o *)unaff_R12 ==
      (System_Collections_Generic_List_object__o *)0x0) goto label_042abd2d;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_e8,
             (System_Collections_Generic_List_object__o *)unaff_R12,MethodInfo_List_1_T_Enumerator_Characters_BaseCharacter_GetEnumerat);
  pUStack_80 = pUStack_d8;
  _Stack_90 = _Stack_e8;
  uStack_88 = uStack_e0;
  unaff_R12 = &MethodInfo_Boolean_Remove;
  while( true ) {
    __this_03.fields._8_8_ = plVar14;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff00;
    __this_03.fields._current._0_4_ = in_stack_ffffffffffffff10;
    __this_03.fields._current._4_4_ = in_stack_ffffffffffffff14;
    bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                       (__this_03,(MethodInfo_321A1D0 *)&_Stack_90);
    pUVar9 = pUStack_80;
    if ((char)bVar10 == '\0') {
      __this_04.fields._8_8_ = plVar14;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff00;
      __this_04.fields._current._0_4_ = in_stack_ffffffffffffff10;
      __this_04.fields._current._4_4_ = in_stack_ffffffffffffff14;
      System_Collections_Generic_List_Enumerator_object___Dispose(__this_04,(MethodInfo_321A1C0 *)&_Stack_90);
      unaff_R12 = (MethodInfo_33E10B0 **)il2cpp_runtime_helper_023052d0(TypeInfo_List_CustomLogicCollisionHandler);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)unaff_R12,MethodInfo_List_1_CustomLogic_CustomLogicCollisionHandler);
      pSVar3 = (System_Collections_Generic_HashSet_object__o *)
               (((Characters_ContinuousDamageHitbox_o *)plVar14)->fields)._handlersInside;
      if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042abd2d;
      System_Collections_Generic_HashSet_object___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)&_Stack_e8,pSVar3,MethodInfo_HashSet_1_T_Enumerator_CustomLogic_CustomLogicCollisionH);
      pUStack_a0 = pUStack_d8;
      _Stack_b0 = _Stack_e8;
      uStack_a8 = uStack_e0;
      while (__this_05.fields._8_8_ = plVar14,
            __this_05.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff00,
            __this_05.fields._current._0_4_ = in_stack_ffffffffffffff10,
            __this_05.fields._current._4_4_ = in_stack_ffffffffffffff14,
            bVar10 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                               (__this_05,(MethodInfo_3219C40 *)&_Stack_b0), pUVar9 = pUStack_a0,
            (char)bVar10 != '\0') {
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar10 = UnityEngine_Object__op_Equality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        lVar8 = MethodInfo_Void_Add;
        if ((char)bVar10 == '\0') {
          pSVar6 = (((Characters_ContinuousDamageHitbox_o *)plVar14)->fields)._handlerDamageTimers;
          if (pSVar6 == (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)0x0)
          goto label_042abd14;
          bVar10 = System_Collections_Generic_Dictionary_object__float___ContainsKey
                             ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,
                              (Il2CppObject *)pUVar9,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar10 != '\0') {
            pSVar6 = (((Characters_ContinuousDamageHitbox_o *)plVar14)->fields)._handlerDamageTimers;
            if (pSVar6 == (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)0x0)
            goto label_042abd28;
            in_stack_ffffffffffffff14 =
                 System_Collections_Generic_Dictionary_object__float___get_Item
                           ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,
                            (Il2CppObject *)pUVar9,MethodInfo_Single_get_Item);
            fVar15 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            System_Collections_Generic_Dictionary_object__float___set_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,(Il2CppObject *)pUVar9,
                       in_stack_ffffffffffffff14 + fVar15,MethodInfo_Void_set_Item);
            pSVar6 = (((Characters_ContinuousDamageHitbox_o *)plVar14)->fields)._handlerDamageTimers;
            if (pSVar6 == (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)0x0)
            goto label_042abd23;
            fVar15 = System_Collections_Generic_Dictionary_object__float___get_Item
                               ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,
                                (Il2CppObject *)pUVar9,MethodInfo_Single_get_Item);
            if ((((Characters_ContinuousDamageHitbox_o *)plVar14)->fields).DamageInterval <= fVar15) {
              pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (((Characters_ContinuousDamageHitbox_o *)plVar14)->fields)._handlerColliders;
              if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042abd37;
              bVar10 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                 (pSVar7,(Il2CppObject *)pUVar9,MethodInfo_Boolean_ContainsKey);
              if ((char)bVar10 != '\0') {
                pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)
                         (((Characters_ContinuousDamageHitbox_o *)plVar14)->fields)._handlerColliders;
                if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                goto label_042abd5a;
                pIVar12 = System_Collections_Generic_Dictionary_object__object___get_Item
                                    (pSVar7,(Il2CppObject *)pUVar9,MethodInfo_Collider_get_Item);
                (*(((Characters_ContinuousDamageHitbox_o *)plVar14)->klass->vtable)._8_OnHit.methodPtr)
                          (plVar14,pUVar9,pIVar12,
                           (((Characters_ContinuousDamageHitbox_o *)plVar14)->klass->vtable)._8_OnHit.method);
              }
              pSVar6 = (((Characters_ContinuousDamageHitbox_o *)plVar14)->fields)._handlerDamageTimers;
              if (pSVar6 == (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)0x0
                 ) goto label_042abd3c;
              System_Collections_Generic_Dictionary_object__float___set_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,
                         (Il2CppObject *)pUVar9,0.0,MethodInfo_Void_set_Item);
            }
          }
        }
        else {
          if ((System_Collections_Generic_List_object__o *)unaff_R12 ==
              (System_Collections_Generic_List_object__o *)0x0) goto label_042abd19;
          piVar1 = &(((System_Collections_Generic_List_object__o *)unaff_R12)->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (((System_Collections_Generic_List_object__o *)unaff_R12)->fields)._items;
          if (pSVar5 == (System_Object_array *)0x0) goto label_042abd1e;
          uVar2 = (((System_Collections_Generic_List_object__o *)unaff_R12)->fields)._size;
          if (uVar2 < (uint)pSVar5->max_length) {
            (((System_Collections_Generic_List_object__o *)unaff_R12)->fields)._size = uVar2 + 1;
            pSVar5->m_Items[(int)uVar2] = (Il2CppObject *)pUVar9;
            il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar2,pUVar9);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)unaff_R12,(Il2CppObject *)pUVar9,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      __this_06.fields._8_8_ = plVar14;
      __this_06.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff00;
      __this_06.fields._current._0_4_ = in_stack_ffffffffffffff10;
      __this_06.fields._current._4_4_ = in_stack_ffffffffffffff14;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_06,(MethodInfo_3219C30 *)&_Stack_b0);
      goto label_042abbee;
    }
    pSVar3 = (System_Collections_Generic_HashSet_object__o *)
             (((Characters_ContinuousDamageHitbox_o *)plVar14)->fields)._charactersInside;
    if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) break;
    System_Collections_Generic_HashSet_object___Remove(pSVar3,(Il2CppObject *)pUStack_80,MethodInfo_Boolean_Remove);
    pSVar4 = (((Characters_ContinuousDamageHitbox_o *)plVar14)->fields)._characterDamageTimers;
    if (pSVar4 == (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0) goto label_042abcec;
    System_Collections_Generic_Dictionary_object__float___Remove
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,(Il2CppObject *)pUVar9,
               MethodInfo_Boolean_Remove);
    pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)
             (((Characters_ContinuousDamageHitbox_o *)plVar14)->fields)._characterColliders;
    if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042abcf1;
    System_Collections_Generic_Dictionary_object__object___Remove(pSVar7,(Il2CppObject *)pUVar9,MethodInfo_Boolean_Remove);
  }
  il2cpp_runtime_helper_022b2c90();
label_042abcec:
  il2cpp_runtime_helper_022b2c90();
label_042abcf1:
  il2cpp_runtime_helper_022b2c90();
label_042abcf6:
  il2cpp_runtime_helper_022b2c90();
label_042abcfb:
  il2cpp_runtime_helper_022b2c90();
  do {
    il2cpp_runtime_helper_022b2c90();
label_042abd05:
    il2cpp_runtime_helper_022b2c90();
label_042abd0a:
    il2cpp_runtime_helper_022b2c90();
label_042abd0f:
    il2cpp_runtime_helper_022b2c90();
label_042abd14:
    il2cpp_runtime_helper_022b2c90();
label_042abd19:
    il2cpp_runtime_helper_022b2c90();
label_042abd1e:
    il2cpp_runtime_helper_022b2c90();
label_042abd23:
    il2cpp_runtime_helper_022b2c90();
label_042abd28:
    il2cpp_runtime_helper_022b2c90();
label_042abd2d:
    do {
      il2cpp_runtime_helper_022b2c90();
label_042abd32:
      il2cpp_runtime_helper_022b2c90();
label_042abd37:
      il2cpp_runtime_helper_022b2c90();
label_042abd3c:
      il2cpp_runtime_helper_022b2c90();
label_042abd41:
      il2cpp_runtime_helper_022b2c90();
label_042abd46:
      il2cpp_runtime_helper_022b2c90();
label_042abd4b:
      il2cpp_runtime_helper_022b2c90();
label_042abd50:
      il2cpp_runtime_helper_022b2c90();
label_042abd55:
      il2cpp_runtime_helper_022b2c90();
label_042abd5a:
      auVar16 = il2cpp_runtime_helper_022b2c90();
      if (auVar16._8_4_ != 1) {
        __this_10.fields._8_8_ = plVar14;
        __this_10.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff00;
        __this_10.fields._current._0_4_ = in_stack_ffffffffffffff10;
        __this_10.fields._current._4_4_ = in_stack_ffffffffffffff14;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_10,(MethodInfo_3219C30 *)&_Stack_b0);
label_042ac20c:
        _Unwind_Resume(auVar16._0_8_);
      }
      plVar13 = (long *)__cxa_begin_catch(auVar16._0_8_);
      lVar8 = *plVar13;
      __cxa_end_catch();
      __this_09.fields._8_8_ = plVar14;
      __this_09.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff00;
      __this_09.fields._current._0_4_ = in_stack_ffffffffffffff10;
      __this_09.fields._current._4_4_ = in_stack_ffffffffffffff14;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_09,(MethodInfo_3219C30 *)&_Stack_b0);
      if (lVar8 != 0) {
        il2cpp_runtime_helper_022fefe0(lVar8);
        __this_11.fields._8_8_ = plVar14;
        __this_11.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff00;
        __this_11.fields._current._0_4_ = in_stack_ffffffffffffff10;
        __this_11.fields._current._4_4_ = in_stack_ffffffffffffff14;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_11,(MethodInfo_3219C30 *)&_Stack_70);
        goto label_042ac20c;
      }
label_042abbee:
    } while ((System_Collections_Generic_List_object__o *)unaff_R12 ==
             (System_Collections_Generic_List_object__o *)0x0);
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_e8,
               (System_Collections_Generic_List_object__o *)unaff_R12,MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicCollisionHand);
    pUStack_c0 = pUStack_d8;
    _Stack_d0 = _Stack_e8;
    uStack_c8 = uStack_e0;
    unaff_R12 = &MethodInfo_Boolean_Remove;
    while( true ) {
      __this_07.fields._8_8_ = plVar14;
      __this_07.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff00;
      __this_07.fields._current._0_4_ = in_stack_ffffffffffffff10;
      __this_07.fields._current._4_4_ = in_stack_ffffffffffffff14;
      bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                         (__this_07,(MethodInfo_321A1D0 *)&_Stack_d0);
      pUVar9 = pUStack_c0;
      if ((char)bVar10 == '\0') {
        __this_08.fields._8_8_ = plVar14;
        __this_08.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff00;
        __this_08.fields._current._0_4_ = in_stack_ffffffffffffff10;
        __this_08.fields._current._4_4_ = in_stack_ffffffffffffff14;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_08,(MethodInfo_321A1C0 *)&_Stack_d0);
        return;
      }
      pSVar3 = (System_Collections_Generic_HashSet_object__o *)
               (((Characters_ContinuousDamageHitbox_o *)plVar14)->fields)._handlersInside;
      if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042abcf6;
      System_Collections_Generic_HashSet_object___Remove(pSVar3,(Il2CppObject *)pUStack_c0,MethodInfo_Boolean_Remove);
      pSVar6 = (((Characters_ContinuousDamageHitbox_o *)plVar14)->fields)._handlerDamageTimers;
      if (pSVar6 == (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)0x0)
      goto label_042abcfb;
      System_Collections_Generic_Dictionary_object__float___Remove
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,(Il2CppObject *)pUVar9,
                 MethodInfo_Boolean_Remove);
      pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)
               (((Characters_ContinuousDamageHitbox_o *)plVar14)->fields)._handlerColliders;
      if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      System_Collections_Generic_Dictionary_object__object___Remove
                (pSVar7,(Il2CppObject *)pUVar9,MethodInfo_Boolean_Remove);
    }
  } while( true );
}


// Characters.ContinuousDamageHitbox$$Update
// il2cpp: void Characters_ContinuousDamageHitbox__Update (Characters_ContinuousDamageHitbox_o* __this, const MethodInfo* method);
// 0x42ab370

void Characters_ContinuousDamageHitbox__Update(Characters_ContinuousDamageHitbox_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Collider_o *__this_00;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  System_Object_array *pSVar4;
  System_Collections_Generic_Dictionary_BaseCharacter__float__o *pSVar5;
  System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *pSVar6;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  long lVar8;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_09;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_10;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_11;
  UnityEngine_Object_o *pUVar9;
  bool_conflict bVar10;
  Il2CppObject *pIVar11;
  long *plVar12;
  MethodInfo_33E10B0 **unaff_R12;
  float fVar13;
  undefined1 auVar14 [12];
  undefined8 in_stack_ffffffffffffff28;
  undefined4 in_stack_ffffffffffffff38;
  float in_stack_ffffffffffffff3c;
  _union_332932 _Stack_c0;
  undefined8 uStack_b8;
  UnityEngine_Object_o *pUStack_b0;
  _union_332932 _Stack_a8;
  undefined8 uStack_a0;
  UnityEngine_Object_o *pUStack_98;
  _union_332932 _Stack_88;
  undefined8 uStack_80;
  UnityEngine_Object_o *pUStack_78;
  _union_332932 _Stack_68;
  undefined8 uStack_60;
  UnityEngine_Object_o *pUStack_58;
  _union_332932 _Stack_48;
  undefined8 uStack_40;
  UnityEngine_Object_o *pUStack_38;
  
  if (g_data_057add8c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_CustomLogic_CustomLogicCollisionH);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Characters_BaseCharacter_GetEnume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicCollisionHand);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Characters_BaseCharacter_GetEnumerat);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Characters_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_CustomLogic_CustomLogicCollisionHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_CustomLogicCollisionHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057add8c = '\x01';
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
  if (__this_00 == (UnityEngine_Collider_o *)0x0) goto label_042abd2d;
  bVar10 = UnityEngine_Collider__get_enabled(__this_00,(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    return;
  }
  unaff_R12 = (MethodInfo_33E10B0 **)il2cpp_runtime_helper_023052d0(TypeInfo_List_BaseCharacter);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)unaff_R12,MethodInfo_List_1_Characters_BaseCharacter);
  pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._charactersInside;
  if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042abd2d;
  System_Collections_Generic_HashSet_object___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)&_Stack_c0,pSVar3,MethodInfo_HashSet_1_T_Enumerator_Characters_BaseCharacter_GetEnume);
  pUStack_38 = pUStack_b0;
  _Stack_48 = _Stack_c0;
  uStack_40 = uStack_b8;
  while (__this_01.fields._8_8_ = __this,
        __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff28,
        __this_01.fields._current._0_4_ = in_stack_ffffffffffffff38,
        __this_01.fields._current._4_4_ = in_stack_ffffffffffffff3c,
        bVar10 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                           (__this_01,(MethodInfo_3219C40 *)&_Stack_48), pUVar9 = pUStack_38,
        (char)bVar10 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar10 = UnityEngine_Object__op_Equality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    lVar8 = MethodInfo_Void_Add;
    if ((char)bVar10 == '\0') {
      if (pUVar9 == (UnityEngine_Object_o *)0x0) goto label_042abd0f;
      if (*(char *)&pUVar9[4].monitor != '\0') goto label_042ab6bc;
      pSVar5 = (__this->fields)._characterDamageTimers;
      if (pSVar5 == (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0) goto label_042abd32;
      bVar10 = System_Collections_Generic_Dictionary_object__float___ContainsKey
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,
                          (Il2CppObject *)pUVar9,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar10 != '\0') {
        pSVar5 = (__this->fields)._characterDamageTimers;
        if (pSVar5 == (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0) goto label_042abd4b;
        in_stack_ffffffffffffff3c =
             System_Collections_Generic_Dictionary_object__float___get_Item
                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,(Il2CppObject *)pUVar9
                        ,MethodInfo_Single_get_Item);
        fVar13 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        System_Collections_Generic_Dictionary_object__float___set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,(Il2CppObject *)pUVar9,
                   in_stack_ffffffffffffff3c + fVar13,MethodInfo_Void_set_Item);
        pSVar5 = (__this->fields)._characterDamageTimers;
        if (pSVar5 == (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0) goto label_042abd46;
        fVar13 = System_Collections_Generic_Dictionary_object__float___get_Item
                           ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,
                            (Il2CppObject *)pUVar9,MethodInfo_Single_get_Item);
        if ((__this->fields).DamageInterval <= fVar13) {
          pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._characterColliders;
          if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042abd41;
          bVar10 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                             (pSVar7,(Il2CppObject *)pUVar9,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar10 != '\0') {
            pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__this->fields)._characterColliders;
            if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042abd55;
            pIVar11 = System_Collections_Generic_Dictionary_object__object___get_Item
                                (pSVar7,(Il2CppObject *)pUVar9,MethodInfo_Collider_get_Item);
            (*(__this->klass->vtable)._7_OnHit.methodPtr)
                      (__this,pUVar9,pIVar11,(__this->klass->vtable)._7_OnHit.method);
          }
          pSVar5 = (__this->fields)._characterDamageTimers;
          if (pSVar5 == (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0)
          goto label_042abd50;
          System_Collections_Generic_Dictionary_object__float___set_Item
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,(Il2CppObject *)pUVar9,
                     0.0,MethodInfo_Void_set_Item);
        }
      }
    }
    else {
label_042ab6bc:
      if ((System_Collections_Generic_List_object__o *)unaff_R12 ==
          (System_Collections_Generic_List_object__o *)0x0) goto label_042abd05;
      piVar1 = &(((System_Collections_Generic_List_object__o *)unaff_R12)->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar4 = (((System_Collections_Generic_List_object__o *)unaff_R12)->fields)._items;
      if (pSVar4 == (System_Object_array *)0x0) goto label_042abd0a;
      uVar2 = (((System_Collections_Generic_List_object__o *)unaff_R12)->fields)._size;
      if (uVar2 < (uint)pSVar4->max_length) {
        (((System_Collections_Generic_List_object__o *)unaff_R12)->fields)._size = uVar2 + 1;
        pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pUVar9;
        il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,pUVar9);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)unaff_R12,(Il2CppObject *)pUVar9,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  __this_02.fields._8_8_ = __this;
  __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff28;
  __this_02.fields._current._0_4_ = in_stack_ffffffffffffff38;
  __this_02.fields._current._4_4_ = in_stack_ffffffffffffff3c;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_02,(MethodInfo_3219C30 *)&_Stack_48);
  if ((System_Collections_Generic_List_object__o *)unaff_R12 ==
      (System_Collections_Generic_List_object__o *)0x0) goto label_042abd2d;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_c0,
             (System_Collections_Generic_List_object__o *)unaff_R12,MethodInfo_List_1_T_Enumerator_Characters_BaseCharacter_GetEnumerat);
  pUStack_58 = pUStack_b0;
  _Stack_68 = _Stack_c0;
  uStack_60 = uStack_b8;
  unaff_R12 = &MethodInfo_Boolean_Remove;
  while( true ) {
    __this_03.fields._8_8_ = __this;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
    __this_03.fields._current._0_4_ = in_stack_ffffffffffffff38;
    __this_03.fields._current._4_4_ = in_stack_ffffffffffffff3c;
    bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                       (__this_03,(MethodInfo_321A1D0 *)&_Stack_68);
    pUVar9 = pUStack_58;
    if ((char)bVar10 == '\0') {
      __this_04.fields._8_8_ = __this;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
      __this_04.fields._current._0_4_ = in_stack_ffffffffffffff38;
      __this_04.fields._current._4_4_ = in_stack_ffffffffffffff3c;
      System_Collections_Generic_List_Enumerator_object___Dispose(__this_04,(MethodInfo_321A1C0 *)&_Stack_68);
      unaff_R12 = (MethodInfo_33E10B0 **)il2cpp_runtime_helper_023052d0(TypeInfo_List_CustomLogicCollisionHandler);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)unaff_R12,MethodInfo_List_1_CustomLogic_CustomLogicCollisionHandler);
      pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._handlersInside;
      if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042abd2d;
      System_Collections_Generic_HashSet_object___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)&_Stack_c0,pSVar3,MethodInfo_HashSet_1_T_Enumerator_CustomLogic_CustomLogicCollisionH);
      pUStack_78 = pUStack_b0;
      _Stack_88 = _Stack_c0;
      uStack_80 = uStack_b8;
      while (__this_05.fields._8_8_ = __this,
            __this_05.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff28,
            __this_05.fields._current._0_4_ = in_stack_ffffffffffffff38,
            __this_05.fields._current._4_4_ = in_stack_ffffffffffffff3c,
            bVar10 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                               (__this_05,(MethodInfo_3219C40 *)&_Stack_88), pUVar9 = pUStack_78,
            (char)bVar10 != '\0') {
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar10 = UnityEngine_Object__op_Equality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        lVar8 = MethodInfo_Void_Add;
        if ((char)bVar10 == '\0') {
          pSVar6 = (__this->fields)._handlerDamageTimers;
          if (pSVar6 == (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)0x0)
          goto label_042abd14;
          bVar10 = System_Collections_Generic_Dictionary_object__float___ContainsKey
                             ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,
                              (Il2CppObject *)pUVar9,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar10 != '\0') {
            pSVar6 = (__this->fields)._handlerDamageTimers;
            if (pSVar6 == (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)0x0)
            goto label_042abd28;
            in_stack_ffffffffffffff3c =
                 System_Collections_Generic_Dictionary_object__float___get_Item
                           ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,
                            (Il2CppObject *)pUVar9,MethodInfo_Single_get_Item);
            fVar13 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            System_Collections_Generic_Dictionary_object__float___set_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,(Il2CppObject *)pUVar9,
                       in_stack_ffffffffffffff3c + fVar13,MethodInfo_Void_set_Item);
            pSVar6 = (__this->fields)._handlerDamageTimers;
            if (pSVar6 == (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)0x0)
            goto label_042abd23;
            fVar13 = System_Collections_Generic_Dictionary_object__float___get_Item
                               ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,
                                (Il2CppObject *)pUVar9,MethodInfo_Single_get_Item);
            if ((__this->fields).DamageInterval <= fVar13) {
              pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields)._handlerColliders;
              if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042abd37;
              bVar10 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                 (pSVar7,(Il2CppObject *)pUVar9,MethodInfo_Boolean_ContainsKey);
              if ((char)bVar10 != '\0') {
                pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)
                         (__this->fields)._handlerColliders;
                if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                goto label_042abd5a;
                pIVar11 = System_Collections_Generic_Dictionary_object__object___get_Item
                                    (pSVar7,(Il2CppObject *)pUVar9,MethodInfo_Collider_get_Item);
                (*(__this->klass->vtable)._8_OnHit.methodPtr)
                          (__this,pUVar9,pIVar11,(__this->klass->vtable)._8_OnHit.method);
              }
              pSVar6 = (__this->fields)._handlerDamageTimers;
              if (pSVar6 == (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)0x0
                 ) goto label_042abd3c;
              System_Collections_Generic_Dictionary_object__float___set_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,
                         (Il2CppObject *)pUVar9,0.0,MethodInfo_Void_set_Item);
            }
          }
        }
        else {
          if ((System_Collections_Generic_List_object__o *)unaff_R12 ==
              (System_Collections_Generic_List_object__o *)0x0) goto label_042abd19;
          piVar1 = &(((System_Collections_Generic_List_object__o *)unaff_R12)->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (((System_Collections_Generic_List_object__o *)unaff_R12)->fields)._items;
          if (pSVar4 == (System_Object_array *)0x0) goto label_042abd1e;
          uVar2 = (((System_Collections_Generic_List_object__o *)unaff_R12)->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (((System_Collections_Generic_List_object__o *)unaff_R12)->fields)._size = uVar2 + 1;
            pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pUVar9;
            il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,pUVar9);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)unaff_R12,(Il2CppObject *)pUVar9,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      __this_06.fields._8_8_ = __this;
      __this_06.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff28;
      __this_06.fields._current._0_4_ = in_stack_ffffffffffffff38;
      __this_06.fields._current._4_4_ = in_stack_ffffffffffffff3c;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_06,(MethodInfo_3219C30 *)&_Stack_88);
      goto label_042abbee;
    }
    pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._charactersInside;
    if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) break;
    System_Collections_Generic_HashSet_object___Remove(pSVar3,(Il2CppObject *)pUStack_58,MethodInfo_Boolean_Remove);
    pSVar5 = (__this->fields)._characterDamageTimers;
    if (pSVar5 == (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)0x0) goto label_042abcec;
    System_Collections_Generic_Dictionary_object__float___Remove
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,(Il2CppObject *)pUVar9,
               MethodInfo_Boolean_Remove);
    pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._characterColliders;
    if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042abcf1;
    System_Collections_Generic_Dictionary_object__object___Remove(pSVar7,(Il2CppObject *)pUVar9,MethodInfo_Boolean_Remove);
  }
  il2cpp_runtime_helper_022b2c90();
label_042abcec:
  il2cpp_runtime_helper_022b2c90();
label_042abcf1:
  il2cpp_runtime_helper_022b2c90();
label_042abcf6:
  il2cpp_runtime_helper_022b2c90();
label_042abcfb:
  il2cpp_runtime_helper_022b2c90();
  do {
    il2cpp_runtime_helper_022b2c90();
label_042abd05:
    il2cpp_runtime_helper_022b2c90();
label_042abd0a:
    il2cpp_runtime_helper_022b2c90();
label_042abd0f:
    il2cpp_runtime_helper_022b2c90();
label_042abd14:
    il2cpp_runtime_helper_022b2c90();
label_042abd19:
    il2cpp_runtime_helper_022b2c90();
label_042abd1e:
    il2cpp_runtime_helper_022b2c90();
label_042abd23:
    il2cpp_runtime_helper_022b2c90();
label_042abd28:
    il2cpp_runtime_helper_022b2c90();
label_042abd2d:
    do {
      il2cpp_runtime_helper_022b2c90();
label_042abd32:
      il2cpp_runtime_helper_022b2c90();
label_042abd37:
      il2cpp_runtime_helper_022b2c90();
label_042abd3c:
      il2cpp_runtime_helper_022b2c90();
label_042abd41:
      il2cpp_runtime_helper_022b2c90();
label_042abd46:
      il2cpp_runtime_helper_022b2c90();
label_042abd4b:
      il2cpp_runtime_helper_022b2c90();
label_042abd50:
      il2cpp_runtime_helper_022b2c90();
label_042abd55:
      il2cpp_runtime_helper_022b2c90();
label_042abd5a:
      auVar14 = il2cpp_runtime_helper_022b2c90();
      if (auVar14._8_4_ != 1) {
        __this_10.fields._8_8_ = __this;
        __this_10.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff28;
        __this_10.fields._current._0_4_ = in_stack_ffffffffffffff38;
        __this_10.fields._current._4_4_ = in_stack_ffffffffffffff3c;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_10,(MethodInfo_3219C30 *)&_Stack_88);
label_042ac20c:
        _Unwind_Resume(auVar14._0_8_);
      }
      plVar12 = (long *)__cxa_begin_catch(auVar14._0_8_);
      lVar8 = *plVar12;
      __cxa_end_catch();
      __this_09.fields._8_8_ = __this;
      __this_09.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff28;
      __this_09.fields._current._0_4_ = in_stack_ffffffffffffff38;
      __this_09.fields._current._4_4_ = in_stack_ffffffffffffff3c;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_09,(MethodInfo_3219C30 *)&_Stack_88);
      if (lVar8 != 0) {
        il2cpp_runtime_helper_022fefe0(lVar8);
        __this_11.fields._8_8_ = __this;
        __this_11.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff28;
        __this_11.fields._current._0_4_ = in_stack_ffffffffffffff38;
        __this_11.fields._current._4_4_ = in_stack_ffffffffffffff3c;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_11,(MethodInfo_3219C30 *)&_Stack_48);
        goto label_042ac20c;
      }
label_042abbee:
    } while ((System_Collections_Generic_List_object__o *)unaff_R12 ==
             (System_Collections_Generic_List_object__o *)0x0);
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_c0,
               (System_Collections_Generic_List_object__o *)unaff_R12,MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicCollisionHand);
    pUStack_98 = pUStack_b0;
    _Stack_a8 = _Stack_c0;
    uStack_a0 = uStack_b8;
    unaff_R12 = &MethodInfo_Boolean_Remove;
    while( true ) {
      __this_07.fields._8_8_ = __this;
      __this_07.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
      __this_07.fields._current._0_4_ = in_stack_ffffffffffffff38;
      __this_07.fields._current._4_4_ = in_stack_ffffffffffffff3c;
      bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                         (__this_07,(MethodInfo_321A1D0 *)&_Stack_a8);
      pUVar9 = pUStack_98;
      if ((char)bVar10 == '\0') {
        __this_08.fields._8_8_ = __this;
        __this_08.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
        __this_08.fields._current._0_4_ = in_stack_ffffffffffffff38;
        __this_08.fields._current._4_4_ = in_stack_ffffffffffffff3c;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_08,(MethodInfo_321A1C0 *)&_Stack_a8);
        return;
      }
      pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._handlersInside;
      if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042abcf6;
      System_Collections_Generic_HashSet_object___Remove(pSVar3,(Il2CppObject *)pUStack_98,MethodInfo_Boolean_Remove);
      pSVar6 = (__this->fields)._handlerDamageTimers;
      if (pSVar6 == (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)0x0)
      goto label_042abcfb;
      System_Collections_Generic_Dictionary_object__float___Remove
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,(Il2CppObject *)pUVar9,
                 MethodInfo_Boolean_Remove);
      pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._handlerColliders;
      if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      System_Collections_Generic_Dictionary_object__object___Remove
                (pSVar7,(Il2CppObject *)pUVar9,MethodInfo_Boolean_Remove);
    }
  } while( true );
}


// Characters.ContinuousDamageHitbox$$OnHit
// il2cpp: void Characters_ContinuousDamageHitbox__OnHit (Characters_ContinuousDamageHitbox_o* __this, Characters_BaseCharacter_o* victim, UnityEngine_Collider_o* collider, const MethodInfo* method);
// 0x42ac230

void Characters_ContinuousDamageHitbox__OnHit
               (Characters_ContinuousDamageHitbox_o *__this,Characters_BaseCharacter_o *victim,
               UnityEngine_Collider_o *collider,MethodInfo *method)

{
  System_Object_array *__this_00;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  undefined8 extraout_RDX;
  Characters_BaseCharacter_o *pCVar4;
  Characters_BaseCharacter_o *pCVar5;
  Photon_Pun_PhotonView_o *__this_01;
  
  pCVar4 = victim;
  if (g_data_057add8d == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057add8d = '\x01';
  }
  pCVar5 = (__this->fields).Owner;
  if (pCVar5 != (Characters_BaseCharacter_o *)0x0) {
    (*(pCVar5->klass->vtable)._79_OnHit.methodPtr)
              (pCVar5,__this,victim,collider,"",1,(pCVar5->klass->vtable)._79_OnHit.method);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add8e == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057add8e = '\x01';
  }
  __this_01 = (pCVar5->fields).pvCache;
  if (__this_01 != (Photon_Pun_PhotonView_o *)0x0) {
    (*(code *)__this_01->klass[4]._1.castClass)
              (__this_01,pCVar5,pCVar4,extraout_RDX,"",1,__this_01->klass[4]._1.declaringType);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add8f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Characters_BaseCharacter_UnityEngine_Collid);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_CustomLogic_CustomLogicCollisionHandler_Uni);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_CustomLogic_CustomLogicCollisionHandler_Sys);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Characters_BaseCharacter_System_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_CustomLogicCollisionHandler_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_BaseCharacter_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_BaseCharacter_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_CustomLogicCollisionHandler_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_CustomLogic_CustomLogicCollisionHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Characters_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_CustomLogicCollisionHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_BaseCharacter);
    g_data_057add8f = '\x01';
  }
  (__this_01->fields).RpcMonoBehaviours = (UnityEngine_MonoBehaviour_array *)0x3dcccccd00000064;
  pSVar1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_BaseCharacter_float);
  System_Collections_Generic_Dictionary_object__float____ctor(pSVar1,MethodInfo_Dictionary_2_Characters_BaseCharacter_System_Single);
  *(System_Collections_Generic_Dictionary_TKey__TValue__o **)&(__this_01->fields)._IsMine_k__BackingField =
       pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields)._IsMine_k__BackingField,pSVar1);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_BaseCharacter_Collider);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar2,MethodInfo_Dictionary_2_Characters_BaseCharacter_UnityEngine_Collid);
  (__this_01->fields)._Controller_k__BackingField = (Photon_Realtime_Player_o *)pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields)._Controller_k__BackingField,pSVar2);
  pSVar3 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_BaseCharacter);
  System_Collections_Generic_HashSet_object____ctor(pSVar3,MethodInfo_HashSet_1_Characters_BaseCharacter);
  *(System_Collections_Generic_HashSet_object__o **)&(__this_01->fields)._CreatorActorNr_k__BackingField =
       pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields)._CreatorActorNr_k__BackingField,pSVar3);
  pSVar1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_CustomLogicCollisionHandler_float);
  System_Collections_Generic_Dictionary_object__float____ctor(pSVar1,MethodInfo_Dictionary_2_CustomLogic_CustomLogicCollisionHandler_Sys);
  (__this_01->fields)._Owner_k__BackingField = (Photon_Realtime_Player_o *)pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields)._Owner_k__BackingField,pSVar1);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_CustomLogicCollisionHandler_Collider);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar2,MethodInfo_Dictionary_2_CustomLogic_CustomLogicCollisionHandler_Uni);
  *(System_Collections_Generic_Dictionary_object__object__o **)&(__this_01->fields).ownerActorNr = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields).ownerActorNr,pSVar2);
  pSVar3 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_CustomLogicCollisionHandler);
  System_Collections_Generic_HashSet_object____ctor(pSVar3,MethodInfo_HashSet_1_CustomLogic_CustomLogicCollisionHandler);
  *(System_Collections_Generic_HashSet_object__o **)&(__this_01->fields).sceneViewId = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields).sceneViewId,pSVar3);
  if (g_data_057add79 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_CustomLogic_CustomLogicCollisionHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Characters_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_CustomLogicCollisionHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_BaseCharacter);
    g_data_057add79 = '\x01';
  }
  pSVar3 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_GameObject);
  System_Collections_Generic_HashSet_object____ctor(pSVar3,MethodInfo_HashSet_1_UnityEngine_GameObject);
  (__this_01->fields).lastOnSerializeDataSent = (System_Collections_Generic_List_object__o *)pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields).lastOnSerializeDataSent,pSVar3);
  pSVar3 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_Collider);
  System_Collections_Generic_HashSet_object____ctor(pSVar3,MethodInfo_HashSet_1_UnityEngine_Collider);
  (__this_01->fields).syncValues = (System_Collections_Generic_List_object__o *)pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields).syncValues,pSVar3);
  __this_00 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_BaseCharacter);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,MethodInfo_HashSet_1_Characters_BaseCharacter);
  (__this_01->fields).lastOnSerializeDataReceived = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields).lastOnSerializeDataReceived,__this_00);
  pSVar3 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_CustomLogicCollisionHandler);
  System_Collections_Generic_HashSet_object____ctor(pSVar3,MethodInfo_HashSet_1_CustomLogic_CustomLogicCollisionHandler);
  *(System_Collections_Generic_HashSet_object__o **)&(__this_01->fields).Synchronization = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields).Synchronization);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// Characters.ContinuousDamageHitbox$$OnHit
// il2cpp: void Characters_ContinuousDamageHitbox__OnHit (Characters_ContinuousDamageHitbox_o* __this, CustomLogic_CustomLogicCollisionHandler_o* handler, UnityEngine_Collider_o* collider, const MethodInfo* method);
// 0x42ac2b0

void Characters_ContinuousDamageHitbox__OnHit_41ac2b0
               (Characters_ContinuousDamageHitbox_o *__this,CustomLogic_CustomLogicCollisionHandler_o *handler
               ,UnityEngine_Collider_o *collider,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  Characters_BaseCharacter_o *__this_00;
  
  if (g_data_057add8e == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057add8e = '\x01';
  }
  __this_00 = (__this->fields).Owner;
  if (__this_00 != (Characters_BaseCharacter_o *)0x0) {
    (*(__this_00->klass->vtable)._79_OnHit.methodPtr)
              (__this_00,__this,handler,collider,"",1,(__this_00->klass->vtable)._79_OnHit.method);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add8f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Characters_BaseCharacter_UnityEngine_Collid);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_CustomLogic_CustomLogicCollisionHandler_Uni);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_CustomLogic_CustomLogicCollisionHandler_Sys);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Characters_BaseCharacter_System_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_CustomLogicCollisionHandler_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_BaseCharacter_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_BaseCharacter_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_CustomLogicCollisionHandler_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_CustomLogic_CustomLogicCollisionHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Characters_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_CustomLogicCollisionHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_BaseCharacter);
    g_data_057add8f = '\x01';
  }
  (__this_00->fields).FeedKillerName = (System_String_o *)0x3dcccccd00000064;
  pSVar1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_BaseCharacter_float);
  System_Collections_Generic_Dictionary_object__float____ctor(pSVar1,MethodInfo_Dictionary_2_Characters_BaseCharacter_System_Single);
  (__this_00->fields).FeedVictimName = (System_String_o *)pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).FeedVictimName,pSVar1);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_BaseCharacter_Collider);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar2,MethodInfo_Dictionary_2_Characters_BaseCharacter_UnityEngine_Collid);
  *(System_Collections_Generic_Dictionary_object__object__o **)&(__this_00->fields).Dead = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).Dead,pSVar2);
  pSVar3 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_BaseCharacter);
  System_Collections_Generic_HashSet_object____ctor(pSVar3,MethodInfo_HashSet_1_Characters_BaseCharacter);
  *(System_Collections_Generic_HashSet_object__o **)&(__this_00->fields).CustomDamage = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).CustomDamage,pSVar3);
  pSVar1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_CustomLogicCollisionHandler_float);
  System_Collections_Generic_Dictionary_object__float____ctor(pSVar1,MethodInfo_Dictionary_2_CustomLogic_CustomLogicCollisionHandler_Sys);
  (__this_00->fields).Cache = (Utility_BaseComponentCache_o *)pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).Cache,pSVar1);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_CustomLogicCollisionHandler_Collider);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar2,MethodInfo_Dictionary_2_CustomLogic_CustomLogicCollisionHandler_Uni);
  *(System_Collections_Generic_Dictionary_object__object__o **)&(__this_00->fields).AI = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).AI,pSVar2);
  pSVar3 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_CustomLogicCollisionHandler);
  System_Collections_Generic_HashSet_object____ctor(pSVar3,MethodInfo_HashSet_1_CustomLogic_CustomLogicCollisionHandler);
  *(System_Collections_Generic_HashSet_object__o **)&(__this_00->fields).CurrentHealth = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).CurrentHealth,pSVar3);
  if (g_data_057add79 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_CustomLogic_CustomLogicCollisionHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Characters_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_CustomLogicCollisionHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_BaseCharacter);
    g_data_057add79 = '\x01';
  }
  pSVar3 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_GameObject);
  System_Collections_Generic_HashSet_object____ctor(pSVar3,MethodInfo_HashSet_1_UnityEngine_GameObject);
  *(System_Collections_Generic_HashSet_object__o **)&(__this_00->fields).MaxFootstepDistance = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).MaxFootstepDistance,pSVar3);
  pSVar3 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_Collider);
  System_Collections_Generic_HashSet_object____ctor(pSVar3,MethodInfo_HashSet_1_UnityEngine_Collider);
  *(System_Collections_Generic_HashSet_object__o **)&(__this_00->fields)._disableKinematicTimeLeft = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields)._disableKinematicTimeLeft,pSVar3);
  pSVar3 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_BaseCharacter);
  System_Collections_Generic_HashSet_object____ctor(pSVar3,MethodInfo_HashSet_1_Characters_BaseCharacter);
  (__this_00->fields).RichTextName = (System_String_o *)pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).RichTextName,pSVar3);
  pSVar3 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_CustomLogicCollisionHandler);
  System_Collections_Generic_HashSet_object____ctor(pSVar3,MethodInfo_HashSet_1_CustomLogic_CustomLogicCollisionHandler);
  (__this_00->fields).VisibleName = (System_String_o *)pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).VisibleName);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// Characters.ContinuousDamageHitbox$$.ctor
// il2cpp: void Characters_ContinuousDamageHitbox___ctor (Characters_ContinuousDamageHitbox_o* __this, const MethodInfo* method);
// 0x42ac330

void Characters_ContinuousDamageHitbox___ctor(Characters_ContinuousDamageHitbox_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_BaseCharacter__float__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *__this_01;
  
  if (g_data_057add8f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Characters_BaseCharacter_UnityEngine_Collid);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_CustomLogic_CustomLogicCollisionHandler_Uni);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_CustomLogic_CustomLogicCollisionHandler_Sys);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Characters_BaseCharacter_System_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_CustomLogicCollisionHandler_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_BaseCharacter_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_BaseCharacter_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_CustomLogicCollisionHandler_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_CustomLogic_CustomLogicCollisionHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Characters_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_CustomLogicCollisionHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_BaseCharacter);
    g_data_057add8f = '\x01';
  }
  (__this->fields).DamagePerSecond = 100;
  (__this->fields).DamageInterval = 0.1;
  __this_00 = (System_Collections_Generic_Dictionary_BaseCharacter__float__o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_BaseCharacter_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,MethodInfo_Dictionary_2_Characters_BaseCharacter_System_Single);
  (__this->fields)._characterDamageTimers = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._characterDamageTimers,__this_00);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_BaseCharacter_Collider);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar1,MethodInfo_Dictionary_2_Characters_BaseCharacter_UnityEngine_Collid);
  (__this->fields)._characterColliders =
       (System_Collections_Generic_Dictionary_BaseCharacter__Collider__o *)pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._characterColliders,pSVar1);
  pSVar2 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_BaseCharacter);
  System_Collections_Generic_HashSet_object____ctor(pSVar2,MethodInfo_HashSet_1_Characters_BaseCharacter);
  (__this->fields)._charactersInside = (System_Collections_Generic_HashSet_BaseCharacter__o *)pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._charactersInside,pSVar2);
  __this_01 = (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__float__o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_CustomLogicCollisionHandler_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,MethodInfo_Dictionary_2_CustomLogic_CustomLogicCollisionHandler_Sys);
  (__this->fields)._handlerDamageTimers = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._handlerDamageTimers,__this_01);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_CustomLogicCollisionHandler_Collider);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar1,MethodInfo_Dictionary_2_CustomLogic_CustomLogicCollisionHandler_Uni);
  (__this->fields)._handlerColliders =
       (System_Collections_Generic_Dictionary_CustomLogicCollisionHandler__Collider__o *)pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._handlerColliders,pSVar1);
  pSVar2 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_CustomLogicCollisionHandler);
  System_Collections_Generic_HashSet_object____ctor(pSVar2,MethodInfo_HashSet_1_CustomLogic_CustomLogicCollisionHandler);
  (__this->fields)._handlersInside =
       (System_Collections_Generic_HashSet_CustomLogicCollisionHandler__o *)pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._handlersInside,pSVar2);
  if (g_data_057add79 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_CustomLogic_CustomLogicCollisionHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Characters_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_CustomLogicCollisionHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_BaseCharacter);
    g_data_057add79 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_GameObject);
  System_Collections_Generic_HashSet_object____ctor(pSVar2,MethodInfo_HashSet_1_UnityEngine_GameObject);
  (__this->fields)._hitGameObjects = (System_Collections_Generic_HashSet_GameObject__o *)pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._hitGameObjects,pSVar2);
  pSVar2 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_Collider);
  System_Collections_Generic_HashSet_object____ctor(pSVar2,MethodInfo_HashSet_1_UnityEngine_Collider);
  (__this->fields)._firstFrameColliders = (System_Collections_Generic_HashSet_Collider__o *)pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._firstFrameColliders,pSVar2);
  pSVar2 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_BaseCharacter);
  System_Collections_Generic_HashSet_object____ctor(pSVar2,MethodInfo_HashSet_1_Characters_BaseCharacter);
  (__this->fields)._firstHitCharacters = (System_Collections_Generic_HashSet_BaseCharacter__o *)pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._firstHitCharacters,pSVar2);
  pSVar2 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_CustomLogicCollisionHandler);
  System_Collections_Generic_HashSet_object____ctor(pSVar2,MethodInfo_HashSet_1_CustomLogic_CustomLogicCollisionHandler);
  (__this->fields)._firstHitHandlers =
       (System_Collections_Generic_HashSet_CustomLogicCollisionHandler__o *)pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._firstHitHandlers);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


