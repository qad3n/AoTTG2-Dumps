// Type: Characters.WallColossalSteamWarningZone
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/WallColossalSteamWarningZone.cs
// Prior real C# source: none
// --------------------------------

// Characters.WallColossalSteamWarningZone.<>c$$.cctor
// il2cpp: void Characters_WallColossalSteamWarningZone___c___cctor (const MethodInfo* method);
// 0x430bb20

void Characters_WallColossalSteamWarningZone___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057adf72 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adf72 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Characters.WallColossalSteamWarningZone.<>c$$.ctor
// il2cpp: void Characters_WallColossalSteamWarningZone___c___ctor (Characters_WallColossalSteamWarningZone___c_o* __this, const MethodInfo* method);
// 0x430bb90

void Characters_WallColossalSteamWarningZone___c___ctor
               (Characters_WallColossalSteamWarningZone___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.WallColossalSteamWarningZone.<>c$$<Update>b__16_0
// il2cpp: bool Characters_WallColossalSteamWarningZone___c___Update_b__16_0 (Characters_WallColossalSteamWarningZone___c_o* __this, Characters_Human_o* h, const MethodInfo* method);
// 0x430bba0

bool_conflict
Characters_WallColossalSteamWarningZone___c___Update_b__16_0
          (Characters_WallColossalSteamWarningZone___c_o *__this,Characters_Human_o *h,MethodInfo *method)

{
  uint3 uVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  UnityEngine_Object_o *x;
  
  if (g_data_057adf73 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adf73 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = (UnityEngine_Object_o *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)h,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  uVar1 = (uint3)((uint)bVar2 >> 8);
  bVar3 = (bool_conflict)CONCAT71((uint7)uVar1,1);
  if ((char)bVar2 == '\0') {
    if (h == (Characters_Human_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057adf74 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057adf74 = '\x01';
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      return bVar3;
    }
    bVar3 = CONCAT31(uVar1,*(char *)&(h->fields).FeedVictimName != '\0');
  }
  return bVar3;
}


// Characters.WallColossalSteamWarningZone.<>c$$<Update>b__16_1
// il2cpp: bool Characters_WallColossalSteamWarningZone___c___Update_b__16_1 (Characters_WallColossalSteamWarningZone___c_o* __this, UnityEngine_Rigidbody_o* rb, const MethodInfo* method);
// 0x430bc00

bool_conflict
Characters_WallColossalSteamWarningZone___c___Update_b__16_1
          (Characters_WallColossalSteamWarningZone___c_o *__this,UnityEngine_Rigidbody_o *rb,
          MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057adf74 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adf74 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rb,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// Characters.WallColossalSteamWarningZone.<>c__DisplayClass17_0$$.ctor
// il2cpp: void Characters_WallColossalSteamWarningZone___c__DisplayClass17_0___ctor (Characters_WallColossalSteamWarningZone___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x430ba30

void Characters_WallColossalSteamWarningZone___c__DisplayClass17_0___ctor
               (Characters_WallColossalSteamWarningZone___c__DisplayClass17_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.WallColossalSteamWarningZone.<>c__DisplayClass17_0$$<CheckForProjectiles>b__0
// il2cpp: bool Characters_WallColossalSteamWarningZone___c__DisplayClass17_0___CheckForProjectiles_b__0 (Characters_WallColossalSteamWarningZone___c__DisplayClass17_0_o* __this, UnityEngine_Rigidbody_o* rb, const MethodInfo* method);
// 0x430bc50

bool_conflict
Characters_WallColossalSteamWarningZone___c__DisplayClass17_0___CheckForProjectiles_b__0
          (Characters_WallColossalSteamWarningZone___c__DisplayClass17_0_o *__this,UnityEngine_Rigidbody_o *rb
          ,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  uint uVar1;
  bool_conflict bVar2;
  
  if (g_data_057adf75 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    g_data_057adf75 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).currentProjectiles;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    uVar1 = System_Collections_Generic_HashSet_object___Contains(__this_00,(Il2CppObject *)rb,MethodInfo_Boolean_Contains);
    return uVar1 ^ 1;
  }
  bVar2 = il2cpp_runtime_helper_022b2c90();
  return bVar2;
}


// Characters.WallColossalSteamWarningZone$$Initialize
// il2cpp: void Characters_WallColossalSteamWarningZone__Initialize (Characters_WallColossalSteamWarningZone_o* __this, Characters_WallColossalShifter_o* owner, const MethodInfo* method);
// 0x4307e90

void Characters_WallColossalSteamWarningZone__Initialize
               (Characters_WallColossalSteamWarningZone_o *__this,Characters_WallColossalShifter_o *owner,
               MethodInfo *method)

{
  UnityEngine_BoxCollider_o *pUVar1;
  MethodInfo *extraout_RDX;
  
  if (g_data_057adf69 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BoxCollider_GetComponent_BoxCollider);
    g_data_057adf69 = '\x01';
    method = extraout_RDX;
  }
  (__this->fields)._owner = owner;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._owner,owner,method);
  pUVar1 = (UnityEngine_BoxCollider_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_BoxCollider_GetComponent_BoxCollider);
  (__this->fields)._boxCollider = pUVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._boxCollider,pUVar1);
  return;
}


// Characters.WallColossalSteamWarningZone$$SetActive
// il2cpp: void Characters_WallColossalSteamWarningZone__SetActive (Characters_WallColossalSteamWarningZone_o* __this, bool active, const MethodInfo* method);
// 0x4307c60

void Characters_WallColossalSteamWarningZone__SetActive
               (Characters_WallColossalSteamWarningZone_o *__this,bool_conflict active,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  long lVar2;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  bool_conflict bVar3;
  long *plVar4;
  undefined1 auVar5 [12];
  System_Collections_Generic_HashSet_T__o *pSVar6;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar7;
  Characters_Human_o *pCVar8;
  Characters_Human_o *__this_04;
  undefined1 local_40 [16];
  Characters_Human_o *local_30;
  
  if (g_data_057adf6a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Human_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Characters_Human_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adf6a = '\x01';
  }
  pSVar6 = (System_Collections_Generic_HashSet_T__o *)0x0;
  pSVar7 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pCVar8 = (Characters_Human_o *)0x0;
  *(char *)&(__this->fields)._isActive = (char)active;
  if ((char)active == '\0') {
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._humansInZone;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_40,pSVar1,MethodInfo_HashSet_1_T_Enumerator_Characters_Human_GetEnumerator);
      pSVar6 = (System_Collections_Generic_HashSet_T__o *)local_40._0_8_;
      pSVar7 = (System_Collections_Generic_HashSet_Enumerator_T__c *)local_40._8_8_;
      while( true ) {
        do {
          __this_04 = local_30;
          __this_00.fields._8_8_ = pSVar7;
          __this_00.fields._set = pSVar6;
          __this_00.fields._current = (Il2CppObject *)__this_04;
          bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_3219C40 *)&stack0xffffffffffffffa8);
          if ((char)bVar3 == '\0') {
            __this_01.fields._8_8_ = pSVar7;
            __this_01.fields._set = pSVar6;
            __this_01.fields._current = (Il2CppObject *)__this_04;
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      (__this_01,(MethodInfo_3219C30 *)&stack0xffffffffffffffa8);
            pCVar8 = __this_04;
            goto label_04307da2;
          }
          pCVar8 = __this_04;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          local_30 = pCVar8;
        } while ((char)bVar3 == '\0');
        if (__this_04 == (Characters_Human_o *)0x0) break;
        if (*(char *)&(__this_04->fields).FeedVictimName == '\0') {
          Characters_Human__ToggleFire1(__this_04,0,(MethodInfo *)0x0);
          local_30 = pCVar8;
        }
      }
      il2cpp_runtime_helper_022b2c90();
    }
    do {
      do {
        auVar5 = il2cpp_runtime_helper_022b2c90();
        if (auVar5._8_4_ != 1) {
label_04307e4d:
          __this_03.fields._8_8_ = pSVar7;
          __this_03.fields._set = pSVar6;
          __this_03.fields._current = (Il2CppObject *)pCVar8;
          System_Collections_Generic_HashSet_Enumerator_object___Dispose
                    (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffffa8);
          _Unwind_Resume(auVar5._0_8_);
        }
        plVar4 = (long *)__cxa_begin_catch(auVar5._0_8_);
        lVar2 = *plVar4;
        __cxa_end_catch();
        __this_02.fields._8_8_ = pSVar7;
        __this_02.fields._set = pSVar6;
        __this_02.fields._current = (Il2CppObject *)pCVar8;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffffa8);
        if (lVar2 != 0) {
          il2cpp_runtime_helper_022fefe0(lVar2);
          goto label_04307e4d;
        }
label_04307da2:
        pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._humansInZone;
      } while (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0);
      System_Collections_Generic_HashSet_object___Clear(pSVar1,MethodInfo_Void_Clear);
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._rigidbodiesInZone;
    } while (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0);
    System_Collections_Generic_HashSet_object___Clear(pSVar1,MethodInfo_Void_Clear);
  }
  return;
}


// Characters.WallColossalSteamWarningZone$$OnTriggerEnter
// il2cpp: void Characters_WallColossalSteamWarningZone__OnTriggerEnter (Characters_WallColossalSteamWarningZone_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x430a8f0

void Characters_WallColossalSteamWarningZone__OnTriggerEnter
               (Characters_WallColossalSteamWarningZone_o *__this,UnityEngine_Collider_o *other,
               MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  Photon_Pun_PhotonView_o *__this_01;
  long lVar2;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  bool_conflict bVar3;
  int32_t iVar4;
  UnityEngine_GameObject_o *pUVar5;
  Characters_Human_o *pCVar6;
  long *plVar7;
  Il2CppRGCTXData *__this_06;
  Il2CppRGCTXData *__this_07;
  undefined1 auVar8 [12];
  System_Collections_Generic_HashSet_T__o *pSVar9;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar10;
  Characters_Human_o *pCVar11;
  undefined1 auStack_90 [16];
  Characters_Human_o *pCStack_80;
  Characters_Human_o *pCStack_78;
  Il2CppRGCTXData *pIStack_70;
  
  if (g_data_057adf6b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Human_GetComponent_Human);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    g_data_057adf6b = '\x01';
  }
  if ((char)(__this->fields)._isActive != '\0') {
    pCVar11 = (Characters_Human_o *)(__this->fields)._owner;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_06 = (Il2CppRGCTXData *)0x0;
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pCVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (other != (UnityEngine_Collider_o *)0x0) {
        __this_06 = (Il2CppRGCTXData *)0x0;
        pCVar11 = (Characters_Human_o *)other;
        pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
          iVar4 = UnityEngine_GameObject__get_layer(pUVar5,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            iVar1 = *(int *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0xc);
          }
          else {
            iVar1 = *(int *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0xc);
          }
          if (iVar4 != iVar1) {
            return;
          }
          pCVar6 = (Characters_Human_o *)
                   UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)other,MethodInfo_Human_GetComponent_Human);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_06 = (Il2CppRGCTXData *)0x0;
          pCVar11 = pCVar6;
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar3 == '\0') {
            return;
          }
          if (pCVar6 != (Characters_Human_o *)0x0) {
            if (*(char *)&(pCVar6->fields).FeedVictimName != '\0') {
              return;
            }
            __this_06 = (Il2CppRGCTXData *)0x0;
            bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar6,(MethodInfo *)0x0);
            if ((char)bVar3 == '\0') {
              return;
            }
            __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._humansInZone;
            pCVar11 = (Characters_Human_o *)0x0;
            if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
              System_Collections_Generic_HashSet_object___Add(__this_00,(Il2CppObject *)pCVar6,MethodInfo_Boolean_Add);
              Characters_Human__ToggleFire1(pCVar6,1,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057adf6c == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Human_GetComponent_Human);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
        g_data_057adf6c = '\x01';
      }
      __this_07 = *(Il2CppRGCTXData **)&(pCVar11->fields).MaxFootstepDistance;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this_07,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        if ((__this_06 == (Il2CppRGCTXData *)0x0) ||
           (__this_07 = __this_06,
           pUVar5 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0),
           pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto label_0430ac04;
        iVar4 = UnityEngine_GameObject__get_layer(pUVar5,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          iVar1 = *(int *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0xc);
        }
        else {
          iVar1 = *(int *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0xc);
        }
        if (iVar4 == iVar1) {
          __this = (Characters_WallColossalSteamWarningZone_o *)
                   UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)__this_06,MethodInfo_Human_GetComponent_Human);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            __this_01 = (pCVar11->fields).pvCache;
            __this_07 = (Il2CppRGCTXData *)0x0;
            if (__this_01 == (Photon_Pun_PhotonView_o *)0x0) {
label_0430ac04:
              il2cpp_runtime_helper_022b2c90();
              pCStack_78 = (Characters_Human_o *)__this;
              pIStack_70 = __this_06;
              if (g_data_057adf6d == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
                il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
                il2cpp_runtime_helper_023445d0(&MethodInfo_Human_get_Current);
                il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
                il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
                il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Characters_Human_GetEnumerator);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                g_data_057adf6d = '\x01';
              }
              pSVar9 = (System_Collections_Generic_HashSet_T__o *)0x0;
              pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
              pCVar11 = (Characters_Human_o *)0x0;
              if (__this_07[4].method != (MethodInfo *)0x0) {
                System_Collections_Generic_HashSet_object___GetEnumerator
                          ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_90,
                           (System_Collections_Generic_HashSet_object__o *)__this_07[4].method,MethodInfo_HashSet_1_T_Enumerator_Characters_Human_GetEnumerator);
                pSVar9 = (System_Collections_Generic_HashSet_T__o *)auStack_90._0_8_;
                pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_90._8_8_;
                while( true ) {
                  do {
                    pCVar6 = pCStack_80;
                    __this_02.fields._8_8_ = pSVar10;
                    __this_02.fields._set = pSVar9;
                    __this_02.fields._current = (Il2CppObject *)pCVar6;
                    bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                      (__this_02,(MethodInfo_3219C40 *)&stack0xffffffffffffff58);
                    if ((char)bVar3 == '\0') {
                      __this_03.fields._8_8_ = pSVar10;
                      __this_03.fields._set = pSVar9;
                      __this_03.fields._current = (Il2CppObject *)pCVar6;
                      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                                (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff58);
                      pCVar11 = pCVar6;
                      goto label_0430ad50;
                    }
                    pCVar11 = pCVar6;
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    bVar3 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    pCStack_80 = pCVar11;
                  } while ((char)bVar3 == '\0');
                  if (pCVar6 == (Characters_Human_o *)0x0) break;
                  if ((*(char *)&(pCVar6->fields).FeedVictimName == '\0') &&
                     (bVar3 = Characters_BaseCharacter__IsMine
                                        ((Characters_BaseCharacter_o *)pCVar6,(MethodInfo *)0x0),
                     pCStack_80 = pCVar11, (char)bVar3 != '\0')) {
                    Characters_Human__ToggleFire1(pCVar6,0,(MethodInfo *)0x0);
                    pCStack_80 = pCVar11;
                  }
                }
                il2cpp_runtime_helper_022b2c90();
              }
              do {
                auVar8 = il2cpp_runtime_helper_022b2c90();
                if (auVar8._8_4_ != 1) {
label_0430ae05:
                  __this_05.fields._8_8_ = pSVar10;
                  __this_05.fields._set = pSVar9;
                  __this_05.fields._current = (Il2CppObject *)pCVar11;
                  System_Collections_Generic_HashSet_Enumerator_object___Dispose
                            (__this_05,(MethodInfo_3219C30 *)&stack0xffffffffffffff58);
                  _Unwind_Resume(auVar8._0_8_);
                }
                plVar7 = (long *)__cxa_begin_catch(auVar8._0_8_);
                lVar2 = *plVar7;
                __cxa_end_catch();
                __this_04.fields._8_8_ = pSVar10;
                __this_04.fields._set = pSVar9;
                __this_04.fields._current = (Il2CppObject *)pCVar11;
                System_Collections_Generic_HashSet_Enumerator_object___Dispose
                          (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffff58);
                if (lVar2 != 0) {
                  il2cpp_runtime_helper_022fefe0(lVar2);
                  goto label_0430ae05;
                }
label_0430ad50:
                if (__this_07[4].method != (MethodInfo *)0x0) {
                  System_Collections_Generic_HashSet_object___Clear
                            ((System_Collections_Generic_HashSet_object__o *)__this_07[4].method,MethodInfo_Void_Clear)
                  ;
                  if (__this_07[5].method != (MethodInfo *)0x0) {
                    System_Collections_Generic_HashSet_object___Clear
                              ((System_Collections_Generic_HashSet_object__o *)__this_07[5].method,
                               MethodInfo_Void_Clear);
                    return;
                  }
                }
              } while( true );
            }
            bVar3 = System_Collections_Generic_HashSet_object___Contains
                              ((System_Collections_Generic_HashSet_object__o *)__this_01,
                               (Il2CppObject *)__this,MethodInfo_Boolean_Contains);
            if ((char)bVar3 != '\0') {
              __this_07 = (Il2CppRGCTXData *)(pCVar11->fields).pvCache;
              if ((__this_07 == (Il2CppRGCTXData *)0x0) ||
                 (System_Collections_Generic_HashSet_object___Remove
                            ((System_Collections_Generic_HashSet_object__o *)__this_07,(Il2CppObject *)__this,
                             MethodInfo_Boolean_Remove), (Characters_Human_o *)__this == (Characters_Human_o *)0x0))
              goto label_0430ac04;
              if ((*(char *)&(((Characters_Human_o *)__this)->fields).FeedVictimName == '\0') &&
                 (bVar3 = Characters_BaseCharacter__IsMine
                                    ((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0),
                 (char)bVar3 != '\0')) {
                Characters_Human__ToggleFire1((Characters_Human_o *)__this,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      return;
    }
  }
  return;
}


// Characters.WallColossalSteamWarningZone$$OnTriggerExit
// il2cpp: void Characters_WallColossalSteamWarningZone__OnTriggerExit (Characters_WallColossalSteamWarningZone_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x430aa70

void Characters_WallColossalSteamWarningZone__OnTriggerExit
               (Characters_WallColossalSteamWarningZone_o *__this,UnityEngine_Collider_o *other,
               MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  long lVar4;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  bool_conflict bVar5;
  int32_t iVar6;
  UnityEngine_GameObject_o *__this_04;
  long *plVar7;
  Characters_Human_o *unaff_RBX;
  Characters_WallColossalShifter_o *__this_05;
  undefined1 auVar8 [12];
  System_Collections_Generic_HashSet_T__o *pSVar9;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar10;
  Characters_Human_o *pCVar11;
  Characters_Human_o *__this_06;
  undefined1 auStack_68 [16];
  Characters_Human_o *pCStack_58;
  Characters_Human_o *pCStack_50;
  Il2CppRGCTXData *pIStack_48;
  
  if (g_data_057adf6c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Human_GetComponent_Human);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    g_data_057adf6c = '\x01';
  }
  __this_05 = (__this->fields)._owner;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_05,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    if ((other == (UnityEngine_Collider_o *)0x0) ||
       (__this_05 = (Characters_WallColossalShifter_o *)other,
       __this_04 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)other,(MethodInfo *)0x0),
       __this_04 == (UnityEngine_GameObject_o *)0x0)) goto label_0430ac04;
    iVar6 = UnityEngine_GameObject__get_layer(__this_04,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      iVar1 = *(int *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0xc);
    }
    else {
      iVar1 = *(int *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0xc);
    }
    if (iVar6 == iVar1) {
      unaff_RBX = (Characters_Human_o *)
                  UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)other,MethodInfo_Human_GetComponent_Human);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        pSVar2 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._humansInZone;
        __this_05 = (Characters_WallColossalShifter_o *)0x0;
        if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) {
label_0430ac04:
          il2cpp_runtime_helper_022b2c90();
          pCStack_50 = unaff_RBX;
          pIStack_48 = (Il2CppRGCTXData *)other;
          if (g_data_057adf6d == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Human_get_Current);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
            il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Characters_Human_GetEnumerator);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057adf6d = '\x01';
          }
          pSVar9 = (System_Collections_Generic_HashSet_T__o *)0x0;
          pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
          pCVar11 = (Characters_Human_o *)0x0;
          pPVar3 = (__this_05->fields).pvCache;
          if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
            System_Collections_Generic_HashSet_object___GetEnumerator
                      ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_68,
                       (System_Collections_Generic_HashSet_object__o *)pPVar3,MethodInfo_HashSet_1_T_Enumerator_Characters_Human_GetEnumerator);
            pSVar9 = (System_Collections_Generic_HashSet_T__o *)auStack_68._0_8_;
            pSVar10 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_68._8_8_;
            while( true ) {
              do {
                __this_06 = pCStack_58;
                __this_00.fields._8_8_ = pSVar10;
                __this_00.fields._set = pSVar9;
                __this_00.fields._current = (Il2CppObject *)__this_06;
                bVar5 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                  (__this_00,(MethodInfo_3219C40 *)&stack0xffffffffffffff80);
                if ((char)bVar5 == '\0') {
                  __this_01.fields._8_8_ = pSVar10;
                  __this_01.fields._set = pSVar9;
                  __this_01.fields._current = (Il2CppObject *)__this_06;
                  System_Collections_Generic_HashSet_Enumerator_object___Dispose
                            (__this_01,(MethodInfo_3219C30 *)&stack0xffffffffffffff80);
                  pCVar11 = __this_06;
                  goto label_0430ad50;
                }
                pCVar11 = __this_06;
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar5 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)__this_06,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                pCStack_58 = pCVar11;
              } while ((char)bVar5 == '\0');
              if (__this_06 == (Characters_Human_o *)0x0) break;
              if ((*(char *)&(__this_06->fields).FeedVictimName == '\0') &&
                 (bVar5 = Characters_BaseCharacter__IsMine
                                    ((Characters_BaseCharacter_o *)__this_06,(MethodInfo *)0x0),
                 pCStack_58 = pCVar11, (char)bVar5 != '\0')) {
                Characters_Human__ToggleFire1(__this_06,0,(MethodInfo *)0x0);
                pCStack_58 = pCVar11;
              }
            }
            il2cpp_runtime_helper_022b2c90();
          }
          do {
            auVar8 = il2cpp_runtime_helper_022b2c90();
            if (auVar8._8_4_ != 1) {
label_0430ae05:
              __this_03.fields._8_8_ = pSVar10;
              __this_03.fields._set = pSVar9;
              __this_03.fields._current = (Il2CppObject *)pCVar11;
              System_Collections_Generic_HashSet_Enumerator_object___Dispose
                        (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff80);
              _Unwind_Resume(auVar8._0_8_);
            }
            plVar7 = (long *)__cxa_begin_catch(auVar8._0_8_);
            lVar4 = *plVar7;
            __cxa_end_catch();
            __this_02.fields._8_8_ = pSVar10;
            __this_02.fields._set = pSVar9;
            __this_02.fields._current = (Il2CppObject *)pCVar11;
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffff80);
            if (lVar4 != 0) {
              il2cpp_runtime_helper_022fefe0(lVar4);
              goto label_0430ae05;
            }
label_0430ad50:
            pPVar3 = (__this_05->fields).pvCache;
            if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
              System_Collections_Generic_HashSet_object___Clear
                        ((System_Collections_Generic_HashSet_object__o *)pPVar3,MethodInfo_Void_Clear);
              pSVar2 = *(System_Collections_Generic_HashSet_object__o **)&(__this_05->fields).FootstepsEnabled
              ;
              if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                System_Collections_Generic_HashSet_object___Clear(pSVar2,MethodInfo_Void_Clear);
                return;
              }
            }
          } while( true );
        }
        bVar5 = System_Collections_Generic_HashSet_object___Contains
                          (pSVar2,(Il2CppObject *)unaff_RBX,MethodInfo_Boolean_Contains);
        if ((char)bVar5 != '\0') {
          __this_05 = (Characters_WallColossalShifter_o *)(__this->fields)._humansInZone;
          if ((__this_05 == (Characters_WallColossalShifter_o *)0x0) ||
             (System_Collections_Generic_HashSet_object___Remove
                        ((System_Collections_Generic_HashSet_object__o *)__this_05,(Il2CppObject *)unaff_RBX,
                         MethodInfo_Boolean_Remove), unaff_RBX == (Characters_Human_o *)0x0)) goto label_0430ac04;
          if ((*(char *)&(unaff_RBX->fields).FeedVictimName == '\0') &&
             (bVar5 = Characters_BaseCharacter__IsMine
                                ((Characters_BaseCharacter_o *)unaff_RBX,(MethodInfo *)0x0),
             (char)bVar5 != '\0')) {
            Characters_Human__ToggleFire1(unaff_RBX,0,(MethodInfo *)0x0);
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
// 0x430ac10

void Characters_WallColossalSteamWarningZone__OnDestroy
               (Characters_WallColossalSteamWarningZone_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  long lVar2;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  bool_conflict bVar3;
  long *plVar4;
  undefined1 auVar5 [12];
  System_Collections_Generic_HashSet_T__o *pSVar6;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar7;
  Characters_Human_o *pCVar8;
  Characters_Human_o *__this_04;
  undefined1 local_40 [16];
  Characters_Human_o *local_30;
  
  if (g_data_057adf6d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Human_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Characters_Human_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adf6d = '\x01';
  }
  pSVar6 = (System_Collections_Generic_HashSet_T__o *)0x0;
  pSVar7 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pCVar8 = (Characters_Human_o *)0x0;
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._humansInZone;
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_40,pSVar1,MethodInfo_HashSet_1_T_Enumerator_Characters_Human_GetEnumerator);
    pSVar6 = (System_Collections_Generic_HashSet_T__o *)local_40._0_8_;
    pSVar7 = (System_Collections_Generic_HashSet_Enumerator_T__c *)local_40._8_8_;
    while( true ) {
      do {
        __this_04 = local_30;
        __this_00.fields._8_8_ = pSVar7;
        __this_00.fields._set = pSVar6;
        __this_00.fields._current = (Il2CppObject *)__this_04;
        bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_3219C40 *)&stack0xffffffffffffffa8);
        if ((char)bVar3 == '\0') {
          __this_01.fields._8_8_ = pSVar7;
          __this_01.fields._set = pSVar6;
          __this_01.fields._current = (Il2CppObject *)__this_04;
          System_Collections_Generic_HashSet_Enumerator_object___Dispose
                    (__this_01,(MethodInfo_3219C30 *)&stack0xffffffffffffffa8);
          pCVar8 = __this_04;
          goto label_0430ad50;
        }
        pCVar8 = __this_04;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        local_30 = pCVar8;
      } while ((char)bVar3 == '\0');
      if (__this_04 == (Characters_Human_o *)0x0) break;
      if ((*(char *)&(__this_04->fields).FeedVictimName == '\0') &&
         (bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this_04,(MethodInfo *)0x0),
         local_30 = pCVar8, (char)bVar3 != '\0')) {
        Characters_Human__ToggleFire1(__this_04,0,(MethodInfo *)0x0);
        local_30 = pCVar8;
      }
    }
    il2cpp_runtime_helper_022b2c90();
  }
  do {
    auVar5 = il2cpp_runtime_helper_022b2c90();
    if (auVar5._8_4_ != 1) {
label_0430ae05:
      __this_03.fields._8_8_ = pSVar7;
      __this_03.fields._set = pSVar6;
      __this_03.fields._current = (Il2CppObject *)pCVar8;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffffa8);
      _Unwind_Resume(auVar5._0_8_);
    }
    plVar4 = (long *)__cxa_begin_catch(auVar5._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pSVar7;
    __this_02.fields._set = pSVar6;
    __this_02.fields._current = (Il2CppObject *)pCVar8;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffffa8);
    if (lVar2 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar2);
      goto label_0430ae05;
    }
label_0430ad50:
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._humansInZone;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___Clear(pSVar1,MethodInfo_Void_Clear);
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._rigidbodiesInZone;
      if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Clear(pSVar1,MethodInfo_Void_Clear);
        return;
      }
    }
  } while( true );
}


// Characters.WallColossalSteamWarningZone$$Update
// il2cpp: void Characters_WallColossalSteamWarningZone__Update (Characters_WallColossalSteamWarningZone_o* __this, const MethodInfo* method);
// 0x430ae40

void Characters_WallColossalSteamWarningZone__Update
               (Characters_WallColossalSteamWarningZone_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  Characters_WallColossalShifter_o *x;
  UnityEngine_Object_o *x_00;
  long lVar2;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  bool_conflict bVar3;
  System_Predicate_T__o *pSVar4;
  long *plVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [12];
  undefined1 in_stack_ffffffffffffff98 [12];
  float in_stack_ffffffffffffffa4;
  System_Collections_Generic_HashSet_T__o *pSVar9;
  System_Collections_Generic_HashSet_Enumerator_T__o local_40;
  
  if (g_data_057adf6e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Rigidbody_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_UnityEngine_Rigidbody_GetEnumerat);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_RemoveWhere);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_RemoveWhere);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Predicate_Rigidbody);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Predicate_Human);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Update_b__16_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Update_b__16_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adf6e = '\x01';
  }
  pSVar9 = (System_Collections_Generic_HashSet_T__o *)0x0;
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._humansInZone;
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar4 = *(System_Predicate_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    pSVar4 = *(System_Predicate_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (pSVar4 == (System_Predicate_T__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = (System_Predicate_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Predicate_Human);
    System_Predicate_object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Predicate_T__o **)(lVar2 + 8) = pSVar4;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar4);
  }
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___RemoveWhere(pSVar1,pSVar4,MethodInfo_Int32_RemoveWhere);
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._rigidbodiesInZone;
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar4 = *(System_Predicate_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    }
    else {
      pSVar4 = *(System_Predicate_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    }
    if (pSVar4 == (System_Predicate_T__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar4 = (System_Predicate_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Predicate_Rigidbody);
      System_Predicate_object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Predicate_T__o **)(lVar2 + 0x10) = pSVar4;
      il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar4);
    }
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___RemoveWhere(pSVar1,pSVar4,MethodInfo_Int32_RemoveWhere);
      if ((char)(__this->fields)._isActive == '\0') {
        return;
      }
      x = (__this->fields)._owner;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      x_00 = (UnityEngine_Object_o *)(__this->fields)._boxCollider;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_01 = (MethodInfo *)0x0;
      bVar3 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      fVar7 = (__this->fields)._projectileCheckTimer;
      fVar6 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      (__this->fields)._projectileCheckTimer = fVar7 - fVar6;
      if (fVar7 - fVar6 <= 0.0) {
        Characters_WallColossalSteamWarningZone__CheckForProjectiles(__this,method_01);
        (__this->fields)._projectileCheckTimer = (__this->fields)._projectileCheckInterval;
      }
      in_stack_ffffffffffffffa4 = (__this->fields)._knockbackTimer;
      fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      (__this->fields)._knockbackTimer = in_stack_ffffffffffffffa4 - fVar7;
      if (0.0 < in_stack_ffffffffffffffa4 - fVar7) {
        return;
      }
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._rigidbodiesInZone;
      if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___GetEnumerator(&local_40,pSVar1,MethodInfo_HashSet_1_T_Enumerator_UnityEngine_Rigidbody_GetEnumerat);
        pSVar9 = local_40.fields._set;
        while (__this_00.fields._version = (int32_t)in_stack_ffffffffffffffa4,
              __this_00.fields._set =
                   (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff98._0_8_,
              __this_00.fields._index = in_stack_ffffffffffffff98._8_4_,
              __this_00.fields._current = (Il2CppObject *)pSVar9,
              bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                (__this_00,(MethodInfo_3219C40 *)&stack0xffffffffffffffa8),
              (char)bVar3 != '\0') {
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)local_40.fields._current,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            if ((UnityEngine_Object_o *)local_40.fields._current == (UnityEngine_Object_o *)0x0)
            goto label_0430b236;
            bVar3 = UnityEngine_Rigidbody__get_isKinematic
                              ((UnityEngine_Rigidbody_o *)local_40.fields._current,(MethodInfo *)0x0);
            if ((char)bVar3 == '\0') {
              Characters_WallColossalSteamWarningZone__ApplyKnockback
                        (__this,(UnityEngine_Rigidbody_o *)local_40.fields._current,method_00);
            }
          }
        }
        __this_01.fields._version = (int32_t)in_stack_ffffffffffffffa4;
        __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff98._0_8_;
        __this_01.fields._index = in_stack_ffffffffffffff98._8_4_;
        __this_01.fields._current = (Il2CppObject *)pSVar9;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_01,(MethodInfo_3219C30 *)&stack0xffffffffffffffa8);
        goto label_0430b21b;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0430b236:
  auVar8 = il2cpp_runtime_helper_022b2c90();
  if (auVar8._8_4_ == 1) {
    plVar5 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar2 = *plVar5;
    __cxa_end_catch();
    __this_02.fields._version = (int32_t)in_stack_ffffffffffffffa4;
    __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff98._0_8_;
    __this_02.fields._index = in_stack_ffffffffffffff98._8_4_;
    __this_02.fields._current = (Il2CppObject *)pSVar9;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffffa8);
    if (lVar2 == 0) {
label_0430b21b:
      (__this->fields)._knockbackTimer = (__this->fields).KnockbackInterval;
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_03.fields._version = (int32_t)in_stack_ffffffffffffffa4;
  __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff98._0_8_;
  __this_03.fields._index = in_stack_ffffffffffffff98._8_4_;
  __this_03.fields._current = (Il2CppObject *)pSVar9;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffffa8);
  _Unwind_Resume(auVar8._0_8_);
}


// Characters.WallColossalSteamWarningZone$$CheckForProjectiles
// il2cpp: void Characters_WallColossalSteamWarningZone__CheckForProjectiles (Characters_WallColossalSteamWarningZone_o* __this, const MethodInfo* method);
// 0x430b2f0

void Characters_WallColossalSteamWarningZone__CheckForProjectiles
               (Characters_WallColossalSteamWarningZone_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  UnityEngine_BoxCollider_o *__this_00;
  System_Int32_array *__this_01;
  System_Collections_Generic_HashSet_object__o *pSVar4;
  System_Collections_Generic_IEqualityComparer_T__c *pSVar5;
  undefined1 auVar6 [16];
  bool_conflict bVar7;
  System_Int32_array *pSVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Collider_array *pUVar10;
  System_Int32_array *pSVar11;
  System_Int32_array *x;
  System_String_o *pSVar12;
  MethodInfo *method_00;
  System_Int32_array *pSVar13;
  uint uVar14;
  System_Int32_array *__this_02;
  float fVar15;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar16 [16];
  UnityEngine_Quaternion_o orientation;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o UVar18;
  UnityEngine_Vector3_o UVar19;
  UnityEngine_Vector3_o halfExtents;
  float fStack_104;
  undefined8 uStack_100;
  float fStack_e0;
  float fStack_dc;
  float local_98;
  float fStack_94;
  float local_58;
  float fStack_54;
  
  if (g_data_057adf6f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Rigidbody_GetComponent_Rigidbody);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_RemoveWhere);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_Rigidbody);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_Rigidbody);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Predicate_Rigidbody);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_CheckForProjectiles_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass17_0);
    g_data_057adf6f = '\x01';
  }
  pSVar8 = (System_Int32_array *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass17_0);
  System_Object___ctor((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
  pSVar13 = (System_Int32_array *)0x0;
  pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_02 = (System_Int32_array *)(__this->fields)._boxCollider;
  if (__this_02 == (System_Int32_array *)0x0) {
label_0430b71a:
    il2cpp_runtime_helper_022b2c90();
    pSVar11 = pSVar13;
  }
  else {
    pSVar13 = (System_Int32_array *)0x0;
    UVar17 = UnityEngine_BoxCollider__get_center((UnityEngine_BoxCollider_o *)__this_02,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_0430b71a;
    pSVar13 = (System_Int32_array *)0x0;
    UVar17 = UnityEngine_Transform__TransformPoint(pUVar9,UVar17,(MethodInfo *)0x0);
    __this_00 = (__this->fields)._boxCollider;
    __this_02 = (System_Int32_array *)0x0;
    if (__this_00 == (UnityEngine_BoxCollider_o *)0x0) goto label_0430b71a;
    UVar18 = UnityEngine_BoxCollider__get_size(__this_00,(MethodInfo *)0x0);
    pSVar13 = (System_Int32_array *)0x0;
    __this_02 = (System_Int32_array *)__this;
    pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_0430b71a;
    UVar19 = UnityEngine_Transform__get_lossyScale(pUVar9,(MethodInfo *)0x0);
    pSVar13 = (System_Int32_array *)0x0;
    __this_02 = (System_Int32_array *)__this;
    pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_0430b71a;
    local_98 = UVar18.fields.x;
    fStack_94 = UVar18.fields.y;
    orientation = UnityEngine_Transform__get_rotation(pUVar9,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    local_58 = UVar19.fields.x;
    fStack_54 = UVar19.fields.y;
    halfExtents.fields.x = local_98 * 0.5 * local_58;
    halfExtents.fields.y = fStack_94 * 0.5 * fStack_54;
    halfExtents.fields.z = UVar18.fields.z * 0.5 * UVar19.fields.z;
    uVar1 = *(undefined4 *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x1c);
    if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
    pUVar10 = UnityEngine_Physics__OverlapBox_4e7ba20
                        (UVar17,halfExtents,orientation,1 << ((byte)uVar1 & 0x1f),(MethodInfo *)0x0);
    pSVar11 = (System_Int32_array *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_Rigidbody);
    pSVar13 = MethodInfo_HashSet_1_UnityEngine_Rigidbody;
    __this_02 = pSVar11;
    System_Collections_Generic_HashSet_object____ctor
              ((System_Collections_Generic_HashSet_object__o *)pSVar11,(MethodInfo_33E0570 *)MethodInfo_HashSet_1_UnityEngine_Rigidbody);
    if (pSVar8 == (System_Int32_array *)0x0) goto label_0430b71a;
    ((System_Collections_Generic_HashSet_object__Fields *)&pSVar8->bounds)->_buckets = pSVar11;
    __this_02 = (System_Int32_array *)&pSVar8->bounds;
    il2cpp_runtime_helper_022b4080();
    pSVar13 = pSVar11;
    if (pUVar10 == (UnityEngine_Collider_array *)0x0) goto label_0430b71a;
    iVar3 = (int)pUVar10->max_length;
    if (iVar3 < 1) {
label_0430b6be:
      pSVar4 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._rigidbodiesInZone;
      pSVar11 = (System_Int32_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Predicate_Rigidbody);
      __this_02 = pSVar11;
      System_Predicate_object____ctor();
      pSVar13 = pSVar8;
      if (pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___RemoveWhere
                  (pSVar4,(System_Predicate_T__o *)pSVar11,MethodInfo_Int32_RemoveWhere);
        return;
      }
      goto label_0430b71a;
    }
    uVar14 = 0;
    if (iVar3 != 0) {
      do {
        __this_02 = (System_Int32_array *)0x0;
        pSVar13 = pSVar11;
        if ((UnityEngine_Component_o *)pUVar10->m_Items[(int)uVar14] == (UnityEngine_Component_o *)0x0)
        goto label_0430b71a;
        x = (System_Int32_array *)
            UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)pUVar10->m_Items[(int)uVar14],MethodInfo_Rigidbody_GetComponent_Rigidbody);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar11 = (System_Int32_array *)0x0;
        __this_02 = x;
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          pSVar13 = pSVar11;
          if (x == (System_Int32_array *)0x0) goto label_0430b71a;
          pSVar11 = (System_Int32_array *)0x0;
          __this_02 = x;
          bVar7 = UnityEngine_Rigidbody__get_isKinematic((UnityEngine_Rigidbody_o *)x,(MethodInfo *)0x0);
          if ((char)bVar7 == '\0') {
            __this_01 = ((System_Collections_Generic_HashSet_object__Fields *)&pSVar8->bounds)->_buckets;
            __this_02 = (System_Int32_array *)0x0;
            pSVar13 = pSVar11;
            if (__this_01 == (System_Int32_array *)0x0) goto label_0430b71a;
            pSVar13 = x;
            System_Collections_Generic_HashSet_object___Add
                      ((System_Collections_Generic_HashSet_object__o *)__this_01,(Il2CppObject *)x,
                       MethodInfo_Boolean_Add);
            __this_02 = (System_Int32_array *)(__this->fields)._rigidbodiesInZone;
            if (__this_02 == (System_Int32_array *)0x0) goto label_0430b71a;
            pSVar11 = x;
            bVar7 = System_Collections_Generic_HashSet_object___Contains
                              ((System_Collections_Generic_HashSet_object__o *)__this_02,(Il2CppObject *)x,
                               MethodInfo_Boolean_Contains);
            if ((char)bVar7 == '\0') {
              pSVar4 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._rigidbodiesInZone;
              __this_02 = (System_Int32_array *)0x0;
              pSVar13 = pSVar11;
              if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0430b71a;
              System_Collections_Generic_HashSet_object___Add(pSVar4,(Il2CppObject *)x,MethodInfo_Boolean_Add);
              __this_02 = (System_Int32_array *)__this;
              Characters_WallColossalSteamWarningZone__ApplyKnockback
                        (__this,(UnityEngine_Rigidbody_o *)x,method_00);
              pSVar11 = x;
            }
          }
        }
        uVar14 = uVar14 + 1;
        uVar2 = (uint)pUVar10->max_length;
        if ((int)uVar2 <= (int)uVar14) goto label_0430b6be;
      } while (uVar14 < uVar2);
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adf70 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"ThunderSpear");
    il2cpp_runtime_helper_023445d0(&"Thunderspear");
    g_data_057adf70 = '\x01';
  }
  pSVar13 = *(System_Int32_array **)(__this_02->m_Items + 4);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pSVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return;
  }
  if (*(System_Collections_Generic_IEqualityComparer_T__o **)(__this_02->m_Items + 4) ==
      (System_Collections_Generic_IEqualityComparer_T__o *)0x0) goto label_0430ba26;
  pSVar5 = (*(System_Collections_Generic_IEqualityComparer_T__o **)(__this_02->m_Items + 4))[0x29].klass;
  if (pSVar5 == (System_Collections_Generic_IEqualityComparer_T__c *)0x0) {
    pSVar13 = (System_Int32_array *)0x0;
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pSVar13 = (pSVar5->_1).typeMetadataHandle;
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pSVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return;
  }
  if ((((*(System_Collections_Generic_IEqualityComparer_T__o **)(__this_02->m_Items + 4) ==
         (System_Collections_Generic_IEqualityComparer_T__o *)0x0) ||
       (pSVar5 = (*(System_Collections_Generic_IEqualityComparer_T__o **)(__this_02->m_Items + 4))[0x29].klass
       , pSVar5 == (System_Collections_Generic_IEqualityComparer_T__c *)0x0)) ||
      (pSVar13 = (pSVar5->_1).typeMetadataHandle, pSVar13 == (System_Int32_array *)0x0)) ||
     (pSVar8 = (System_Int32_array *)
               UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar13,(MethodInfo *)0x0),
     pSVar8 == (System_Int32_array *)0x0)) goto label_0430ba26;
  UVar17 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pSVar8,(MethodInfo *)0x0);
  pSVar13 = pSVar8;
  if (pSVar11 == (System_Int32_array *)0x0) goto label_0430ba26;
  UVar18 = UnityEngine_Rigidbody__get_position((UnityEngine_Rigidbody_o *)pSVar11,(MethodInfo *)0x0);
  if (g_data_057a6845 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
    g_data_057a6845 = '\x01';
  }
  fStack_e0 = UVar17.fields.x;
  fStack_dc = UVar17.fields.y;
  auVar16._0_4_ = UVar18.fields.x - fStack_e0;
  auVar16._4_4_ = UVar18.fields.y - fStack_dc;
  auVar16._8_4_ = extraout_XMM0_Dc_00 - extraout_XMM0_Dc;
  auVar16._12_4_ = extraout_XMM0_Dd_00 - extraout_XMM0_Dd;
  fStack_104 = UVar18.fields.z - UVar17.fields.z;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
  }
  fVar15 = fStack_104 * fStack_104 + auVar16._4_4_ * auVar16._4_4_ + auVar16._0_4_ * auVar16._0_4_;
  if (fVar15 < 0.0) {
    fVar15 = sqrtf(fVar15);
    in_XMM1_Dc = extraout_XMM0_Dc_01;
    in_XMM1_Dd = extraout_XMM0_Dd_01;
    if (fVar15 <= 1e-05) goto label_0430b8f2;
label_0430b971:
    fStack_104 = fStack_104 / fVar15;
    auVar6._4_4_ = fVar15;
    auVar6._0_4_ = fVar15;
    auVar6._8_4_ = in_XMM1_Dc;
    auVar6._12_4_ = in_XMM1_Dd;
    auVar16 = divps(auVar16,auVar6);
    uStack_100 = auVar16._0_8_;
  }
  else {
    fVar15 = SQRT(fVar15);
    if (1e-05 < fVar15) goto label_0430b971;
label_0430b8f2:
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    uStack_100 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fStack_104 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  fVar15 = (float)__this_02->m_Items[7];
  pSVar13 = pSVar11;
  pSVar12 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pSVar11,(MethodInfo *)0x0);
  if (pSVar12 == (System_String_o *)0x0) {
label_0430ba26:
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(&pSVar13->obj,(MethodInfo *)0x0);
    return;
  }
  bVar7 = System_String__Contains(pSVar12,"Thunderspear",(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    pSVar13 = pSVar11;
    pSVar12 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pSVar11,(MethodInfo *)0x0);
    if (pSVar12 == (System_String_o *)0x0) goto label_0430ba26;
    bVar7 = System_String__Contains(pSVar12,"ThunderSpear",(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') goto label_0430b9f6;
  }
  fVar15 = fVar15 * (float)__this_02->m_Items[8];
label_0430b9f6:
  UVar17.fields.z = fStack_104 * fVar15;
  UVar17.fields.x = (float)uStack_100 * fVar15;
  UVar17.fields.y = uStack_100._4_4_ * fVar15;
  UnityEngine_Rigidbody__AddForce((UnityEngine_Rigidbody_o *)pSVar11,UVar17,1,(MethodInfo *)0x0);
  return;
}


// Characters.WallColossalSteamWarningZone$$ApplyKnockback
// il2cpp: void Characters_WallColossalSteamWarningZone__ApplyKnockback (Characters_WallColossalSteamWarningZone_o* __this, UnityEngine_Rigidbody_o* rb, const MethodInfo* method);
// 0x430b730

void Characters_WallColossalSteamWarningZone__ApplyKnockback
               (Characters_WallColossalSteamWarningZone_o *__this,UnityEngine_Rigidbody_o *rb,
               MethodInfo *method)

{
  int iVar1;
  Characters_WallColossalShifter_o *pCVar2;
  System_Collections_Generic_Dictionary_string__string__o *pSVar3;
  undefined1 auVar4 [16];
  bool_conflict bVar5;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_00;
  System_String_o *pSVar6;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *x;
  float fVar7;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar8 [16];
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o UVar10;
  float local_5c;
  undefined8 local_58;
  float local_38;
  float fStack_34;
  
  if (g_data_057adf70 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"ThunderSpear");
    il2cpp_runtime_helper_023445d0(&"Thunderspear");
    g_data_057adf70 = '\x01';
  }
  x = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(__this->fields)._owner;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  pCVar2 = (__this->fields)._owner;
  if (pCVar2 == (Characters_WallColossalShifter_o *)0x0) goto label_0430ba26;
  pSVar3 = (pCVar2->fields).AttackAnimations;
  if (pSVar3 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
    x = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    x = pSVar3[1].fields._entries;
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  pCVar2 = (__this->fields)._owner;
  if ((((pCVar2 == (Characters_WallColossalShifter_o *)0x0) ||
       (pSVar3 = (pCVar2->fields).AttackAnimations,
       pSVar3 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)) ||
      (x = pSVar3[1].fields._entries,
      x == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) ||
     (__this_00 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
     __this_00 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) goto label_0430ba26;
  UVar9 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
  x = __this_00;
  if (rb == (UnityEngine_Rigidbody_o *)0x0) goto label_0430ba26;
  UVar10 = UnityEngine_Rigidbody__get_position(rb,(MethodInfo *)0x0);
  if (g_data_057a6845 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
    g_data_057a6845 = '\x01';
  }
  local_38 = UVar9.fields.x;
  fStack_34 = UVar9.fields.y;
  auVar8._0_4_ = UVar10.fields.x - local_38;
  auVar8._4_4_ = UVar10.fields.y - fStack_34;
  auVar8._8_4_ = extraout_XMM0_Dc_00 - extraout_XMM0_Dc;
  auVar8._12_4_ = extraout_XMM0_Dd_00 - extraout_XMM0_Dd;
  local_5c = UVar10.fields.z - UVar9.fields.z;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
  }
  fVar7 = local_5c * local_5c + auVar8._4_4_ * auVar8._4_4_ + auVar8._0_4_ * auVar8._0_4_;
  if (fVar7 < 0.0) {
    fVar7 = sqrtf(fVar7);
    in_XMM1_Dc = extraout_XMM0_Dc_01;
    in_XMM1_Dd = extraout_XMM0_Dd_01;
    if (fVar7 <= 1e-05) goto label_0430b8f2;
label_0430b971:
    local_5c = local_5c / fVar7;
    auVar4._4_4_ = fVar7;
    auVar4._0_4_ = fVar7;
    auVar4._8_4_ = in_XMM1_Dc;
    auVar4._12_4_ = in_XMM1_Dd;
    auVar8 = divps(auVar8,auVar4);
    local_58 = auVar8._0_8_;
  }
  else {
    fVar7 = SQRT(fVar7);
    if (1e-05 < fVar7) goto label_0430b971;
label_0430b8f2:
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    local_58 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    local_5c = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  fVar7 = (__this->fields).KnockbackForce;
  x = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)rb;
  pSVar6 = UnityEngine_Object__get_name((UnityEngine_Object_o *)rb,(MethodInfo *)0x0);
  if (pSVar6 == (System_String_o *)0x0) {
label_0430ba26:
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(&x->obj,(MethodInfo *)0x0);
    return;
  }
  bVar5 = System_String__Contains(pSVar6,"Thunderspear",(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    x = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)rb;
    pSVar6 = UnityEngine_Object__get_name((UnityEngine_Object_o *)rb,(MethodInfo *)0x0);
    if (pSVar6 == (System_String_o *)0x0) goto label_0430ba26;
    bVar5 = System_String__Contains(pSVar6,"ThunderSpear",(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') goto label_0430b9f6;
  }
  fVar7 = fVar7 * (__this->fields).ThunderspearKnockbackMultiplier;
label_0430b9f6:
  UVar9.fields.z = local_5c * fVar7;
  UVar9.fields.x = (float)local_58 * fVar7;
  UVar9.fields.y = local_58._4_4_ * fVar7;
  UnityEngine_Rigidbody__AddForce(rb,UVar9,1,(MethodInfo *)0x0);
  return;
}


// Characters.WallColossalSteamWarningZone$$.ctor
// il2cpp: void Characters_WallColossalSteamWarningZone___ctor (Characters_WallColossalSteamWarningZone_o* __this, const MethodInfo* method);
// 0x430ba40

void Characters_WallColossalSteamWarningZone___ctor
               (Characters_WallColossalSteamWarningZone_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  
  if (g_data_057adf71 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_Rigidbody);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Characters_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_Rigidbody);
    g_data_057adf71 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_Human);
  System_Collections_Generic_HashSet_object____ctor(pSVar1,MethodInfo_HashSet_1_Characters_Human);
  (__this->fields)._humansInZone = (System_Collections_Generic_HashSet_Human__o *)pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._humansInZone,pSVar1);
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_Rigidbody);
  System_Collections_Generic_HashSet_object____ctor(pSVar1,MethodInfo_HashSet_1_UnityEngine_Rigidbody);
  (__this->fields)._rigidbodiesInZone = (System_Collections_Generic_HashSet_Rigidbody__o *)pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._rigidbodiesInZone);
  (__this->fields).KnockbackForce = 100.0;
  (__this->fields).ThunderspearKnockbackMultiplier = 5.0;
  (__this->fields).KnockbackInterval = 0.1;
  (__this->fields)._projectileCheckInterval = 0.05;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


