// Type: Characters.BaseDetection
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/BaseDetection.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Detection/BaseDetection.cs
// --------------------------------

// Characters.BaseDetection$$.ctor
// il2cpp: void Characters_BaseDetection___ctor (Characters_BaseDetection_o* __this, Characters_BaseCharacter_o* owner, bool enemiesOnly, bool titansOnly, const MethodInfo* method);
// 0x42ac550

void Characters_BaseDetection___ctor
               (Characters_AIHumanDetection_o *__this,Characters_BaseCharacter_o *owner,
               bool_conflict enemiesOnly,bool_conflict titansOnly,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  ushort uVar3;
  GameManagers_InGameManager_o *pGVar4;
  System_Collections_Generic_IEnumerable_BaseCharacter__c *pSVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  Il2CppClass *pIVar7;
  char cVar8;
  System_Collections_Generic_HashSet_object__o *pSVar9;
  System_Collections_Generic_IEnumerable_BaseCharacter__o *pSVar10;
  VirtualInvokeData *pVVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  MethodInfo_33E0570 **ppMVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  
  uVar18 = (ulong)(uint)enemiesOnly;
  if (g_data_057add90 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Characters_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057add90 = '\x01';
  }
  plVar15 = &TypeInfo_HashSet_BaseCharacter;
  pSVar9 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_BaseCharacter);
  ppMVar19 = &MethodInfo_HashSet_1_Characters_BaseCharacter;
  System_Collections_Generic_HashSet_object____ctor(pSVar9,MethodInfo_HashSet_1_Characters_BaseCharacter);
  (__this->fields)._recalculateFast = (System_Collections_Generic_HashSet_BaseCharacter__o *)pSVar9;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._recalculateFast,pSVar9);
  pSVar9 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_BaseCharacter);
  System_Collections_Generic_HashSet_object____ctor(pSVar9,MethodInfo_HashSet_1_Characters_BaseCharacter);
  (__this->fields)._recalculateMedium = (System_Collections_Generic_HashSet_BaseCharacter__o *)pSVar9;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._recalculateMedium,pSVar9);
  pSVar9 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_BaseCharacter);
  System_Collections_Generic_HashSet_object____ctor(pSVar9,MethodInfo_HashSet_1_Characters_BaseCharacter);
  (__this->fields)._recalculateSlow = (System_Collections_Generic_HashSet_BaseCharacter__o *)pSVar9;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._recalculateSlow,pSVar9);
  pSVar9 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_BaseCharacter);
  System_Collections_Generic_HashSet_object____ctor(pSVar9,MethodInfo_HashSet_1_Characters_BaseCharacter);
  (__this->fields)._tempRecalculateFast = (System_Collections_Generic_HashSet_BaseCharacter__o *)pSVar9;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._tempRecalculateFast,pSVar9);
  pSVar9 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_BaseCharacter);
  System_Collections_Generic_HashSet_object____ctor(pSVar9,MethodInfo_HashSet_1_Characters_BaseCharacter);
  (__this->fields)._tempRecalculateMedium = (System_Collections_Generic_HashSet_BaseCharacter__o *)pSVar9;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._tempRecalculateMedium,pSVar9);
  pSVar9 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_BaseCharacter);
  System_Collections_Generic_HashSet_object____ctor(pSVar9,MethodInfo_HashSet_1_Characters_BaseCharacter);
  (__this->fields)._tempRecalculateSlow = (System_Collections_Generic_HashSet_BaseCharacter__o *)pSVar9;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._tempRecalculateSlow);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Owner = owner;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Owner,owner);
  *(char *)&(__this->fields)._enemiesOnly = (char)enemiesOnly;
  *(char *)((long)&(__this->fields)._enemiesOnly + 1) = (char)titansOnly;
  pIVar7 = TypeInfo_InGameManager;
  pGVar4 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pGVar4 == (GameManagers_InGameManager_o *)0x0) {
    (__this->fields)._inGameManager = (GameManagers_InGameManager_o *)0x0;
label_042ac77f:
    ppMVar19 = (MethodInfo_33E0570 **)&(__this->fields)._inGameManager;
    il2cpp_runtime_helper_022b4080(ppMVar19);
    if (((GameManagers_InGameManager_o *)*ppMVar19 == (GameManagers_InGameManager_o *)0x0) ||
       (pSVar10 = GameManagers_InGameManager__GetAllCharactersEnumerable
                            ((GameManagers_InGameManager_o *)*ppMVar19,(MethodInfo *)0x0),
       pSVar10 == (System_Collections_Generic_IEnumerable_BaseCharacter__o *)0x0)) goto label_042acadb;
    pSVar5 = pSVar10->klass;
    uVar3._0_1_ = (pSVar5->_2).rank;
    uVar3._1_1_ = (pSVar5->_2).minimumAlignment;
    if ((ulong)uVar3 != 0) {
      pIVar6 = (pSVar5->_1).interfaceOffsets;
      lVar16 = 0;
      do {
        if (*(long *)((long)&pIVar6->interfaceType + lVar16) == TypeInfo_IEnumerable_BaseCharacter) {
          pVVar11 = pSVar5->vtable + *(int *)((long)&pIVar6->offset + lVar16);
          goto label_042ac801;
        }
        lVar16 = lVar16 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar16);
    }
    pVVar11 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar10,TypeInfo_IEnumerable_BaseCharacter,0);
label_042ac801:
    plVar15 = (long *)(*pVVar11->methodPtr)(pSVar10,pVVar11->method);
    if (plVar15 != (long *)0x0) {
      uVar18 = 0;
      do {
        lVar16 = *plVar15;
        if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
          lVar17 = 0;
          do {
            if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IEnumerator) {
              puVar12 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + lVar16 + 0x138);
              goto label_042ac883;
            }
            lVar17 = lVar17 + 0x10;
          } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
        }
        puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar15,TypeInfo_IEnumerator,0);
label_042ac883:
        cVar8 = (*(code *)*puVar12)(plVar15,puVar12[1]);
        if (cVar8 == '\0') goto label_042ac95f;
        lVar16 = *plVar15;
        if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
          lVar17 = 0;
          do {
            if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IEnumerator_BaseCharacter) {
              puVar12 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + lVar16 + 0x138);
              goto label_042ac8f3;
            }
            lVar17 = lVar17 + 0x10;
          } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
        }
        puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar15,TypeInfo_IEnumerator_BaseCharacter,0);
label_042ac8f3:
        auVar21 = (*(code *)*puVar12)(plVar15,puVar12[1]);
        Characters_BaseDetection__OnCharacterSpawned
                  ((Characters_BaseDetection_o *)__this,auVar21._0_8_,auVar21._8_8_);
      } while( true );
    }
  }
  else {
    bVar2 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar2 <= (pGVar4->klass->_2).naturalAligment) &&
       ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_InGameManager)) {
      (__this->fields)._inGameManager = pGVar4;
      if ((bVar2 <= (pGVar4->klass->_2).naturalAligment) &&
         ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == pIVar7)) goto label_042ac77f;
    }
    il2cpp_runtime_helper_022b2fd0(pGVar4,pIVar7);
  }
  auVar22 = il2cpp_runtime_helper_022b2c90();
  uVar14 = auVar22._0_8_;
  if (auVar22._8_4_ != 1) {
    uVar18 = 0;
    if (plVar15 == (long *)0x0) goto label_042acac6;
    goto label_042aca68;
  }
  puVar13 = (ulong *)__cxa_begin_catch();
  uVar18 = *puVar13;
  __cxa_end_catch();
label_042ac95f:
  if (plVar15 != (long *)0x0) {
    lVar16 = *plVar15;
    if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
      lVar17 = 0;
      do {
        if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
          puVar12 = (undefined8 *)
                    (lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
          goto label_042ac9bd;
        }
        lVar17 = lVar17 + 0x10;
      } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
    }
    puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar15,TypeInfo_IDisposable,0);
label_042ac9bd:
    (*(code *)*puVar12)(plVar15,puVar12[1]);
  }
  if (uVar18 != 0) goto label_042acae0;
  if (((GameManagers_InGameManager_o *)*ppMVar19 != (GameManagers_InGameManager_o *)0x0) &&
     (pSVar9 = *(System_Collections_Generic_HashSet_object__o **)
                &(((GameManagers_InGameManager_o *)*ppMVar19)->fields).PauseTimeLeft,
     pSVar9 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    System_Collections_Generic_HashSet_object___Add(pSVar9,(Il2CppObject *)__this,MethodInfo_Boolean_Add);
    fVar1 = (float)(__this->fields)._titansOnly;
    fVar20 = UnityEngine_Random__Range(0.0,0.2,(MethodInfo *)0x0);
    (__this->fields)._titansOnly = (bool_conflict)(fVar20 + fVar1);
    fVar1 = (__this->fields)._currentMediumTime;
    fVar20 = UnityEngine_Random__Range(0.0,2.0,(MethodInfo *)0x0);
    (__this->fields)._currentMediumTime = fVar20 + fVar1;
    return;
  }
label_042acadb:
  do {
    il2cpp_runtime_helper_022b2c90();
label_042acae0:
    uVar14 = il2cpp_runtime_helper_022fefe0();
    if (plVar15 != (long *)0x0) {
label_042aca68:
      lVar16 = *plVar15;
      if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
        lVar17 = 0;
        do {
          if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
            puVar12 = (undefined8 *)
                      (lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
            goto label_042acabd;
          }
          lVar17 = lVar17 + 0x10;
        } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
      }
      puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar15,TypeInfo_IDisposable,0);
label_042acabd:
      (*(code *)*puVar12)(plVar15,puVar12[1]);
    }
label_042acac6:
    if (uVar18 == 0) {
      _Unwind_Resume(uVar14);
    }
    il2cpp_runtime_helper_022fefe0(uVar18);
  } while( true );
}


// Characters.BaseDetection$$IsNullOrDead
// il2cpp: bool Characters_BaseDetection__IsNullOrDead (Characters_BaseDetection_o* __this, const MethodInfo* method);
// 0x42acc20

bool_conflict Characters_BaseDetection__IsNullOrDead(Characters_BaseDetection_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Characters_BaseCharacter_o *pCVar2;
  UnityEngine_Object_o *x;
  bool_conflict bVar3;
  bool_conflict bVar4;
  uint uVar5;
  Characters_BaseCharacter_o *a;
  Characters_BaseCharacter_o *pCVar6;
  
  if (g_data_057add91 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057add91 = '\x01';
  }
  pCVar1 = (__this->fields).Owner;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  a = (Characters_BaseCharacter_o *)0x0;
  pCVar6 = pCVar1;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  bVar4 = (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar3 >> 8),1);
  if ((char)bVar3 == '\0') {
    pCVar2 = (__this->fields).Owner;
    if (pCVar2 == (Characters_BaseCharacter_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057add94 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
        g_data_057add94 = '\x01';
      }
      uVar5 = (uint)CONCAT71((int7)((ulong)pCVar1 >> 8),1);
      if (*(char *)&(pCVar6->fields).MaxFootstepDistance != '\0') {
        x = *(UnityEngine_Object_o **)&(pCVar6->fields).FootstepsEnabled;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          pCVar1 = *(Characters_BaseCharacter_o **)&(pCVar6->fields).FootstepsEnabled;
          if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          uVar5 = GameManagers_TeamInfo__SameTeam_446fee0(a,pCVar1,(MethodInfo *)0x0);
          uVar5 = uVar5 ^ 1;
        }
      }
      return uVar5;
    }
    bVar4 = (bool_conflict)
            CONCAT71((int7)((ulong)pCVar2 >> 8),*(char *)&(pCVar2->fields).FeedVictimName != '\0');
  }
  return bVar4;
}


// Characters.BaseDetection$$OnTeamChanged
// il2cpp: void Characters_BaseDetection__OnTeamChanged (Characters_BaseDetection_o* __this, const MethodInfo* method);
// 0x42a03c0

void Characters_BaseDetection__OnTeamChanged(Characters_BaseDetection_o *__this,MethodInfo *method)

{
  ushort uVar1;
  GameManagers_InGameManager_o *pGVar2;
  System_Collections_Generic_IEnumerable_BaseCharacter__c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  char cVar5;
  bool_conflict bVar6;
  System_Collections_Generic_IEnumerable_BaseCharacter__o *pSVar7;
  VirtualInvokeData *pVVar8;
  long *plVar9;
  undefined8 *puVar10;
  MethodInfo *method_00;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 *unaff_R15;
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  System_Collections_Generic_HashSet_T__o *pSVar16;
  Il2CppMethodPointer pIVar17;
  Characters_BaseDetection_o *__this_05;
  
  if (g_data_057add92 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseDetection_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Characters_BaseDetection_GetEnume);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    g_data_057add92 = '\x01';
  }
  pSVar16 = (System_Collections_Generic_HashSet_T__o *)0x0;
  pIVar17 = (Il2CppMethodPointer)0x0;
  __this_05 = (Characters_BaseDetection_o *)0x0;
  pGVar2 = (__this->fields)._inGameManager;
  if ((pGVar2 == (GameManagers_InGameManager_o *)0x0) ||
     (pSVar7 = GameManagers_InGameManager__GetAllCharactersEnumerable(pGVar2,(MethodInfo *)0x0),
     pSVar7 == (System_Collections_Generic_IEnumerable_BaseCharacter__o *)0x0)) {
label_042a07a0:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar3 = pSVar7->klass;
    uVar1._0_1_ = (pSVar3->_2).rank;
    uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar4 = (pSVar3->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(long *)((long)&pIVar4->interfaceType + lVar11) == TypeInfo_IEnumerable_BaseCharacter) {
          pVVar8 = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar11);
          goto label_042a04d1;
        }
        lVar11 = lVar11 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar11);
    }
    pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar7,TypeInfo_IEnumerable_BaseCharacter,0);
label_042a04d1:
    plVar9 = (long *)(*pVVar8->methodPtr)(pSVar7,pVVar8->method);
    if (plVar9 != (long *)0x0) {
      unaff_R15 = (undefined1 *)0x0;
      do {
        lVar11 = *plVar9;
        if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
          lVar12 = 0;
          do {
            if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IEnumerator) {
              puVar10 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + lVar11 + 0x138);
              goto label_042a0553;
            }
            lVar12 = lVar12 + 0x10;
          } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
        }
        puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_IEnumerator,0);
label_042a0553:
        cVar5 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if (cVar5 == '\0') goto label_042a0624;
        lVar11 = *plVar9;
        if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
          lVar12 = 0;
          do {
            if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IEnumerator_BaseCharacter) {
              puVar10 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + lVar11 + 0x138);
              goto label_042a05c3;
            }
            lVar12 = lVar12 + 0x10;
          } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
        }
        puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_IEnumerator_BaseCharacter,0);
label_042a05c3:
        auVar14 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        Characters_BaseDetection__OnCharacterSpawned(__this,auVar14._0_8_,auVar14._8_8_);
      } while( true );
    }
    auVar15 = il2cpp_runtime_helper_022b2c90();
    uVar13 = auVar15._0_8_;
    if (auVar15._8_4_ != 1) goto label_042a078b;
    puVar10 = (undefined8 *)__cxa_begin_catch();
    unaff_R15 = (undefined1 *)*puVar10;
    __cxa_end_catch();
label_042a0624:
    if (plVar9 != (long *)0x0) {
      lVar11 = *plVar9;
      if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
        lVar12 = 0;
        do {
          if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IDisposable) {
            puVar10 = (undefined8 *)
                      (lVar11 + (long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + 0x138);
            goto label_042a067d;
          }
          lVar12 = lVar12 + 0x10;
        } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
      }
      puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_IDisposable,0);
label_042a067d:
      (*(code *)*puVar10)(plVar9,puVar10[1]);
    }
    if (unaff_R15 == (undefined1 *)0x0) {
      pGVar2 = (__this->fields)._inGameManager;
      if ((pGVar2 != (GameManagers_InGameManager_o *)0x0) &&
         (__this_00 = *(System_Collections_Generic_HashSet_object__o **)&(pGVar2->fields).PauseTimeLeft,
         __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
        System_Collections_Generic_HashSet_object___GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)&stack0xffffffffffffffb8,__this_00,
                   MethodInfo_HashSet_1_T_Enumerator_Characters_BaseDetection_GetEnume);
        while( true ) {
          __this_01.fields._8_8_ = pIVar17;
          __this_01.fields._set = pSVar16;
          __this_01.fields._current = (Il2CppObject *)__this_05;
          bVar6 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_3219C40 *)&stack0xffffffffffffffb8);
          if ((char)bVar6 == '\0') {
            __this_02.fields._8_8_ = pIVar17;
            __this_02.fields._set = pSVar16;
            __this_02.fields._current = (Il2CppObject *)__this_05;
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffffb8);
            return;
          }
          if (__this_05 == (Characters_BaseDetection_o *)0x0) break;
          Characters_BaseDetection__OnCharacterSpawned(__this_05,(__this->fields).Owner,method_00);
        }
        il2cpp_runtime_helper_022b2c90();
        unaff_R15 = &stack0xffffffffffffffb8;
      }
      goto label_042a07a0;
    }
  }
  auVar15 = il2cpp_runtime_helper_022fefe0(unaff_R15);
  uVar13 = auVar15._0_8_;
  if (auVar15._8_4_ == 1) {
    plVar9 = (long *)__cxa_begin_catch(uVar13);
    lVar11 = *plVar9;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar17;
    __this_03.fields._set = pSVar16;
    __this_03.fields._current = (Il2CppObject *)__this_05;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffffb8);
    if (lVar11 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar11);
  }
  __this_04.fields._8_8_ = pIVar17;
  __this_04.fields._set = pSVar16;
  __this_04.fields._current = (Il2CppObject *)__this_05;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffffb8);
label_042a078b:
  _Unwind_Resume(uVar13);
}


// Characters.BaseDetection$$OnCharacterSpawned
// il2cpp: void Characters_BaseDetection__OnCharacterSpawned (Characters_BaseDetection_o* __this, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x42acb00

void Characters_BaseDetection__OnCharacterSpawned
               (Characters_BaseDetection_o *__this,Characters_BaseCharacter_o *character,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  long lVar2;
  UnityEngine_Object_o *x;
  bool_conflict bVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  Characters_BaseCharacter_o *a;
  Characters_BaseCharacter_o *pCVar4;
  UnityEngine_Object_o *x_00;
  
  if (g_data_057add93 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseTitan);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057add93 = '\x01';
  }
  pCVar4 = (__this->fields).Owner;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)pCVar4,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar4 = character;
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (character == (Characters_BaseCharacter_o *)0x0) {
label_042acc10:
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057add91 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057add91 = '\x01';
        }
        x_00 = *(UnityEngine_Object_o **)&(pCVar4->fields).FootstepsEnabled;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        a = (Characters_BaseCharacter_o *)0x0;
        bVar3 = UnityEngine_Object__op_Equality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (((char)bVar3 == '\0') &&
           (lVar2._0_4_ = (pCVar4->fields).FootstepsEnabled, lVar2._4_4_ = (pCVar4->fields).SoundsEnabled,
           lVar2 == 0)) {
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057add94 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
            g_data_057add94 = '\x01';
          }
          if (*(char *)&x_00[2].klass != '\0') {
            x = (UnityEngine_Object_o *)x_00[1].fields.m_CachedPtr;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar3 == '\0') {
              pCVar4 = (Characters_BaseCharacter_o *)x_00[1].fields.m_CachedPtr;
              if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              GameManagers_TeamInfo__SameTeam_446fee0(a,pCVar4,(MethodInfo *)0x0);
            }
          }
          return;
        }
        return;
      }
      if (*(char *)&(character->fields).FeedVictimName == '\0') {
        method_00 = extraout_RDX;
        if (*(char *)((long)&(__this->fields)._enemiesOnly + 1) != '\0') {
          bVar1 = (TypeInfo_BaseTitan->_2).naturalAligment;
          method_00 = (MethodInfo *)(ulong)bVar1;
          if ((character->klass->_2).naturalAligment < bVar1) {
            return;
          }
          if ((character->klass->_2).typeHierarchy[(long)&method_00[-1].field_0x57] != TypeInfo_BaseTitan) {
            return;
          }
        }
        bVar3 = Characters_BaseDetection__IsValidTeam(__this,character,method_00);
        if ((char)bVar3 != '\0') {
          __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._recalculateFast;
          pCVar4 = (Characters_BaseCharacter_o *)0x0;
          if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
            System_Collections_Generic_HashSet_object___Add(__this_00,(Il2CppObject *)character,MethodInfo_Boolean_Add);
            return;
          }
          goto label_042acc10;
        }
      }
    }
  }
  return;
}


// Characters.BaseDetection$$IsValidTeam
// il2cpp: bool Characters_BaseDetection__IsValidTeam (Characters_BaseDetection_o* __this, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x42acc90

bool_conflict
Characters_BaseDetection__IsValidTeam
          (Characters_BaseDetection_o *__this,Characters_BaseCharacter_o *character,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool_conflict bVar2;
  uint uVar3;
  undefined8 unaff_RBX;
  
  if (g_data_057add94 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    g_data_057add94 = '\x01';
  }
  uVar3 = (uint)CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
  if ((char)(__this->fields)._enemiesOnly != '\0') {
    pCVar1 = (__this->fields).Owner;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      pCVar1 = (__this->fields).Owner;
      if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar3 = GameManagers_TeamInfo__SameTeam_446fee0(character,pCVar1,(MethodInfo *)0x0);
      uVar3 = uVar3 ^ 1;
    }
  }
  return uVar3;
}


// Characters.BaseDetection$$OnFixedUpdate
// il2cpp: void Characters_BaseDetection__OnFixedUpdate (Characters_BaseDetection_o* __this, const MethodInfo* method);
// 0x42acd40

void Characters_BaseDetection__OnFixedUpdate(Characters_BaseDetection_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_BaseCharacter_o *pCVar2;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  long lVar4;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  undefined8 character;
  bool_conflict bVar5;
  long *plVar6;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  System_Collections_Generic_HashSet_BaseCharacter__o *characters;
  Characters_BaseDetection_o *pCVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  _union_332950 _Var11;
  float in_XMM1_Da;
  float in_XMM1_Db;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar12;
  UnityEngine_Vector3_o myPosition;
  UnityEngine_Vector3_o myPosition_00;
  UnityEngine_Vector3_o myPosition_01;
  undefined1 auVar13 [12];
  Characters_BaseCharacter_o **ppCVar14;
  undefined4 in_stack_ffffffffffffff18;
  float in_stack_ffffffffffffff20;
  float in_stack_ffffffffffffff24;
  undefined1 auStack_d0 [32];
  undefined8 uStack_b0;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  _union_332950 a_Stack_90 [2];
  undefined1 auStack_80 [16];
  Characters_BaseCharacter_o *pCStack_70;
  Characters_BaseDetection_o *pCStack_68;
  
  if (g_data_057add95 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057add95 = '\x01';
  }
  fVar12 = (float)(__this->fields)._titansOnly;
  fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._titansOnly = (bool_conflict)(fVar8 + fVar12);
  fVar12 = (__this->fields)._currentMediumTime;
  fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._currentMediumTime = fVar8 + fVar12;
  fVar9 = (float)(*(__this->klass->vtable)._6_GetSpeed.methodPtr)
                           (__this,(__this->klass->vtable)._6_GetSpeed.method);
  myPosition.fields._0_8_ =
       (*(__this->klass->vtable)._7_GetPosition.methodPtr)
                 (__this,(__this->klass->vtable)._7_GetPosition.method);
  characters = (__this->fields)._recalculateFast;
  myPosition.fields.z = in_XMM1_Da;
  fVar8 = in_XMM1_Da;
  fVar12 = fVar9;
  Characters_BaseDetection__Recalculate(__this,characters,myPosition,fVar9,method_00);
  pCVar7 = (Characters_BaseDetection_o *)(__this->fields)._recalculateFast;
  if (pCVar7 == (Characters_BaseDetection_o *)0x0) {
label_042aceb9:
    pCVar7 = (Characters_BaseDetection_o *)0x0;
    uStack_b0 = (System_Collections_Generic_HashSet_Enumerator_T__c *)il2cpp_runtime_helper_022b2c90();
    fStack_a0 = fVar8;
    fStack_9c = in_XMM1_Db;
    fStack_98 = in_XMM1_Dc;
    fStack_94 = in_XMM1_Dd;
    pCStack_68 = __this;
    if (g_data_057add97 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
      il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_get_Current);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
      il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Characters_BaseCharacter_GetEnume);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057add97 = '\x01';
    }
    auStack_d0._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    auStack_d0._8_8_ = (Il2CppMethodPointer)0x0;
    auStack_d0._16_8_ = (Characters_BaseCharacter_o *)0x0;
    pCVar2 = (pCVar7->fields).ClosestEnemy;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    ppCVar14 = &(pCVar7->fields).ClosestEnemy;
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      bVar5 = Characters_BaseDetection__IsValidTeam(pCVar7,(pCVar7->fields).ClosestEnemy,method_03);
      if ((char)bVar5 == '\0') {
        *ppCVar14 = (Characters_BaseCharacter_o *)0x0;
        il2cpp_runtime_helper_022b4080(ppCVar14,0);
      }
    }
    if (characters == (System_Collections_Generic_HashSet_BaseCharacter__o *)0x0) {
label_042ad28c:
      auVar13 = il2cpp_runtime_helper_022b2c90();
      if (auVar13._8_4_ == 1) {
        plVar6 = (long *)__cxa_begin_catch(auVar13._0_8_);
        lVar4 = *plVar6;
        __cxa_end_catch();
        __this_02.fields._index = in_stack_ffffffffffffff18;
        __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)ppCVar14;
        __this_02.fields._version = (int32_t)fVar12;
        __this_02.fields._current._0_4_ = in_stack_ffffffffffffff20;
        __this_02.fields._current._4_4_ = in_stack_ffffffffffffff24;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_3219C30 *)auStack_d0);
        if (lVar4 == 0) {
          return;
        }
        il2cpp_runtime_helper_022fefe0(lVar4);
      }
      __this_03.fields._index = in_stack_ffffffffffffff18;
      __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)ppCVar14;
      __this_03.fields._version = (int32_t)fVar12;
      __this_03.fields._current._0_4_ = in_stack_ffffffffffffff20;
      __this_03.fields._current._4_4_ = in_stack_ffffffffffffff24;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_03,(MethodInfo_3219C30 *)auStack_d0);
      _Unwind_Resume(auVar13._0_8_);
    }
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_80,
               (System_Collections_Generic_HashSet_object__o *)characters,MethodInfo_HashSet_1_T_Enumerator_Characters_BaseCharacter_GetEnume);
    fStack_98 = fStack_9c;
    auStack_d0._16_8_ = pCStack_70;
    auStack_d0._0_8_ = auStack_80._0_8_;
    auStack_d0._8_8_ = auStack_80._8_8_;
    fStack_9c = (float)uStack_b0;
    fStack_94 = uStack_b0._4_4_;
    uStack_b0._0_4_ = uStack_b0._4_4_;
    fVar8 = uStack_b0._4_4_;
    fVar9 = uStack_b0._4_4_;
label_042ad010:
    do {
      __this_00.fields._index = in_stack_ffffffffffffff18;
      __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)ppCVar14;
      __this_00.fields._version = (int32_t)fVar12;
      __this_00.fields._current._0_4_ = in_stack_ffffffffffffff20;
      __this_00.fields._current._4_4_ = in_stack_ffffffffffffff24;
      bVar5 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_00,(MethodInfo_3219C40 *)auStack_d0);
      character = auStack_d0._16_8_;
      if ((char)bVar5 == '\0') {
        __this_01.fields._index = in_stack_ffffffffffffff18;
        __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)ppCVar14;
        __this_01.fields._version = (int32_t)fVar12;
        __this_01.fields._current._0_4_ = in_stack_ffffffffffffff20;
        __this_01.fields._current._4_4_ = in_stack_ffffffffffffff24;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_01,(MethodInfo_3219C30 *)auStack_d0);
        return;
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    } while ((char)bVar5 != '\0');
    if ((Characters_BaseCharacter_o *)character != (Characters_BaseCharacter_o *)0x0) goto code_r0x042ad053;
    il2cpp_runtime_helper_022b2c90();
    goto label_042ad27d;
  }
  System_Collections_Generic_HashSet_object___Clear
            ((System_Collections_Generic_HashSet_object__o *)pCVar7,MethodInfo_Void_Clear);
  method_02 = method_01;
  if (0.2 < (float)(__this->fields)._titansOnly) {
    (__this->fields)._titansOnly = 0;
    characters = (__this->fields)._recalculateMedium;
    in_XMM1_Db = 0.0;
    in_XMM1_Dc = 0.0;
    in_XMM1_Dd = 0.0;
    myPosition_00.fields.z = in_XMM1_Da;
    myPosition_00.fields.x = (float)(int)myPosition.fields._0_8_;
    myPosition_00.fields.y = (float)(int)((ulong)myPosition.fields._0_8_ >> 0x20);
    fVar8 = in_XMM1_Da;
    fVar12 = fVar9;
    Characters_BaseDetection__Recalculate(__this,characters,myPosition_00,fVar9,method_01);
    pCVar7 = (Characters_BaseDetection_o *)(__this->fields)._recalculateMedium;
    if (pCVar7 == (Characters_BaseDetection_o *)0x0) goto label_042aceb9;
    System_Collections_Generic_HashSet_object___Clear
              ((System_Collections_Generic_HashSet_object__o *)pCVar7,MethodInfo_Void_Clear);
    method_02 = extraout_RDX;
  }
  if (2.0 < (__this->fields)._currentMediumTime) {
    (__this->fields)._currentMediumTime = 0.0;
    characters = (__this->fields)._recalculateSlow;
    in_XMM1_Db = 0.0;
    in_XMM1_Dc = 0.0;
    in_XMM1_Dd = 0.0;
    myPosition_01.fields.z = in_XMM1_Da;
    myPosition_01.fields.x = (float)(int)myPosition.fields._0_8_;
    myPosition_01.fields.y = (float)(int)((ulong)myPosition.fields._0_8_ >> 0x20);
    Characters_BaseDetection__Recalculate(__this,characters,myPosition_01,fVar9,method_02);
    pCVar7 = (Characters_BaseDetection_o *)(__this->fields)._recalculateSlow;
    fVar8 = in_XMM1_Da;
    fVar12 = fVar9;
    if (pCVar7 == (Characters_BaseDetection_o *)0x0) goto label_042aceb9;
    System_Collections_Generic_HashSet_object___Clear
              ((System_Collections_Generic_HashSet_object__o *)pCVar7,MethodInfo_Void_Clear);
  }
  Characters_BaseDetection__MergeTemp
            (pCVar7,(__this->fields)._recalculateFast,(__this->fields)._tempRecalculateFast,in_RCX);
  Characters_BaseDetection__MergeTemp
            (pCVar7,(__this->fields)._recalculateMedium,(__this->fields)._tempRecalculateMedium,in_RCX);
  Characters_BaseDetection__MergeTemp
            (pCVar7,(__this->fields)._recalculateSlow,(__this->fields)._tempRecalculateSlow,in_RCX);
  return;
code_r0x042ad053:
  if (*(char *)&((Characters_BaseCharacter_Fields *)(character + 0x10))->FeedVictimName != '\0')
  goto label_042ad010;
  bVar5 = Characters_BaseDetection__IsValidTeam(pCVar7,(Characters_BaseCharacter_o *)character,method_04);
  if ((char)bVar5 == '\0') goto label_042ad010;
  _Var11.genericMethod =
       (void *)(*((*(Characters_BaseCharacter_c **)character)->vtable)._109_GetCenterPosition.methodPtr)
                         (character,
                          ((*(Characters_BaseCharacter_c **)character)->vtable)._109_GetCenterPosition.method)
  ;
  a_Stack_90[0].genericMethod = _Var11.genericMethod;
  if (g_data_057a68cb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a68cb = '\x01';
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
    in_stack_ffffffffffffff24 = fVar9;
  }
  else {
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
    in_stack_ffffffffffffff24 = fVar9;
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  in_stack_ffffffffffffff20 =
       (fStack_9c - (float)a_Stack_90[0]._0_4_) * (fStack_9c - (float)a_Stack_90[0]._0_4_) +
       ((float)uStack_b0 - (float)a_Stack_90[0]._4_4_) * ((float)uStack_b0 - (float)a_Stack_90[0]._4_4_) +
       (fStack_a0 - fVar8) * (fStack_a0 - fVar8);
  if (in_stack_ffffffffffffff20 < 0.0) {
    in_stack_ffffffffffffff20 = sqrtf(in_stack_ffffffffffffff20);
  }
  else {
    in_stack_ffffffffffffff20 = SQRT(in_stack_ffffffffffffff20);
  }
  fVar9 = 0.0;
  fVar8 = *(float *)&((Characters_BaseCharacter_Fields *)(character + 0x10))->Animation + fVar12 + 100.0;
  fVar10 = (in_stack_ffffffffffffff20 + -200.0) / fVar8;
  if (fVar10 <= 2.0) {
    if (fVar10 <= 0.2) {
      pSVar3 = (System_Collections_Generic_HashSet_object__o *)(pCVar7->fields)._tempRecalculateFast;
      if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) {
label_042ad27d:
        il2cpp_runtime_helper_022b2c90();
        goto label_042ad282;
      }
      System_Collections_Generic_HashSet_object___Add(pSVar3,(Il2CppObject *)character,MethodInfo_Boolean_Add);
    }
    else {
      pSVar3 = (System_Collections_Generic_HashSet_object__o *)(pCVar7->fields)._tempRecalculateMedium;
      if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042ad287;
      System_Collections_Generic_HashSet_object___Add(pSVar3,(Il2CppObject *)character,MethodInfo_Boolean_Add);
    }
  }
  else {
    pSVar3 = (System_Collections_Generic_HashSet_object__o *)(pCVar7->fields)._tempRecalculateSlow;
    if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) {
label_042ad282:
      il2cpp_runtime_helper_022b2c90();
label_042ad287:
      il2cpp_runtime_helper_022b2c90();
      goto label_042ad28c;
    }
    System_Collections_Generic_HashSet_object___Add(pSVar3,(Il2CppObject *)character,MethodInfo_Boolean_Add);
  }
  pCVar2 = *ppCVar14;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    pCVar2 = *ppCVar14;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)character,(MethodInfo *)0x0);
    if (((char)bVar5 == '\0') && ((pCVar7->fields).ClosestEnemyDistance <= in_stack_ffffffffffffff20))
    goto label_042ad230;
  }
  *ppCVar14 = (Characters_BaseCharacter_o *)character;
  il2cpp_runtime_helper_022b4080(ppCVar14,character);
  (pCVar7->fields).ClosestEnemyDistance = in_stack_ffffffffffffff20;
label_042ad230:
  (*(pCVar7->klass->vtable)._8_OnRecalculate.methodPtr)
            (in_stack_ffffffffffffff20,pCVar7,character,(pCVar7->klass->vtable)._8_OnRecalculate.method);
  goto label_042ad010;
}


// Characters.BaseDetection$$MergeTemp
// il2cpp: void Characters_BaseDetection__MergeTemp (Characters_BaseDetection_o* __this, System_Collections_Generic_HashSet_BaseCharacter__o* main, System_Collections_Generic_HashSet_BaseCharacter__o* temp, const MethodInfo* method);
// 0x42ad400

void Characters_BaseDetection__MergeTemp
               (Characters_BaseDetection_o *__this,System_Collections_Generic_HashSet_BaseCharacter__o *main,
               System_Collections_Generic_HashSet_BaseCharacter__o *temp,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  bool_conflict bVar2;
  long *plVar3;
  undefined1 auVar4 [12];
  System_Collections_Generic_HashSet_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  Il2CppObject *item;
  
  if (g_data_057add96 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Characters_BaseCharacter_GetEnume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057add96 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_HashSet_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  item = (Il2CppObject *)0x0;
  if (temp != (System_Collections_Generic_HashSet_BaseCharacter__o *)0x0) {
    if ((temp->fields)._count < 1) {
      return;
    }
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)&stack0xffffffffffffffb8,
               (System_Collections_Generic_HashSet_object__o *)temp,MethodInfo_HashSet_1_T_Enumerator_Characters_BaseCharacter_GetEnume);
    if (main == (System_Collections_Generic_HashSet_BaseCharacter__o *)0x0) {
      __this_01.fields._8_8_ = pIVar6;
      __this_01.fields._set = pSVar5;
      __this_01.fields._current = item;
      bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_3219C40 *)&stack0xffffffffffffffb8);
      if ((char)bVar2 != '\0') goto label_042ad540;
    }
    else {
      while (__this_00.fields._8_8_ = pIVar6, __this_00.fields._set = pSVar5, __this_00.fields._current = item
            , bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                (__this_00,(MethodInfo_3219C40 *)&stack0xffffffffffffffb8),
            (char)bVar2 != '\0') {
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)main,item,MethodInfo_Boolean_Add);
      }
    }
    __this_02.fields._8_8_ = pIVar6;
    __this_02.fields._set = pSVar5;
    __this_02.fields._current = item;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffffb8);
label_042ad51b:
    System_Collections_Generic_HashSet_object___Clear
              ((System_Collections_Generic_HashSet_object__o *)temp,MethodInfo_Void_Clear);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
label_042ad540:
  auVar4 = il2cpp_runtime_helper_022b2c90();
  if (auVar4._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar6;
    __this_03.fields._set = pSVar5;
    __this_03.fields._current = item;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffffb8);
    if (lVar1 == 0) goto label_042ad51b;
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar6;
  __this_04.fields._set = pSVar5;
  __this_04.fields._current = item;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffffb8);
  _Unwind_Resume(auVar4._0_8_);
}


// Characters.BaseDetection$$Recalculate
// il2cpp: void Characters_BaseDetection__Recalculate (Characters_BaseDetection_o* __this, System_Collections_Generic_HashSet_BaseCharacter__o* characters, UnityEngine_Vector3_o myPosition, float mySpeed, const MethodInfo* method);
// 0x42acec0

void Characters_BaseDetection__Recalculate
               (Characters_BaseDetection_o *__this,
               System_Collections_Generic_HashSet_BaseCharacter__o *characters,
               UnityEngine_Vector3_o myPosition,float mySpeed,MethodInfo *method)

{
  int iVar1;
  Characters_BaseCharacter_o *pCVar2;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  long lVar4;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  undefined8 character;
  bool_conflict bVar5;
  long *plVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar7;
  _union_332950 _Var8;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  float fVar9;
  float in_XMM1_Db;
  float fVar10;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  undefined1 auVar11 [12];
  Characters_BaseCharacter_o **ppCVar12;
  undefined4 in_stack_ffffffffffffff50;
  float in_stack_ffffffffffffff58;
  float in_stack_ffffffffffffff5c;
  undefined1 local_98 [32];
  undefined1 local_78 [16];
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  _union_332950 local_58 [2];
  undefined1 local_48 [16];
  Characters_BaseCharacter_o *local_38;
  
  local_68 = myPosition.fields.z;
  local_78._8_4_ = in_XMM0_Dc;
  local_78._0_8_ = myPosition.fields._0_8_;
  local_78._12_4_ = in_XMM0_Dd;
  fStack_64 = in_XMM1_Db;
  fStack_60 = in_XMM1_Dc;
  fStack_5c = in_XMM1_Dd;
  if (g_data_057add97 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Characters_BaseCharacter_GetEnume);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057add97 = '\x01';
  }
  local_98._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_98._8_8_ = (Il2CppMethodPointer)0x0;
  local_98._16_8_ = (Characters_BaseCharacter_o *)0x0;
  pCVar2 = (__this->fields).ClosestEnemy;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppCVar12 = &(__this->fields).ClosestEnemy;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar5 != '\0') &&
     (bVar5 = Characters_BaseDetection__IsValidTeam(__this,(__this->fields).ClosestEnemy,method_00),
     (char)bVar5 == '\0')) {
    *ppCVar12 = (Characters_BaseCharacter_o *)0x0;
    il2cpp_runtime_helper_022b4080(ppCVar12,0);
  }
  if (characters == (System_Collections_Generic_HashSet_BaseCharacter__o *)0x0) {
label_042ad28c:
    auVar11 = il2cpp_runtime_helper_022b2c90();
    if (auVar11._8_4_ == 1) {
      plVar6 = (long *)__cxa_begin_catch(auVar11._0_8_);
      lVar4 = *plVar6;
      __cxa_end_catch();
      __this_02.fields._index = in_stack_ffffffffffffff50;
      __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)ppCVar12;
      __this_02.fields._version = (int32_t)mySpeed;
      __this_02.fields._current._0_4_ = in_stack_ffffffffffffff58;
      __this_02.fields._current._4_4_ = in_stack_ffffffffffffff5c;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_02,(MethodInfo_3219C30 *)local_98)
      ;
      if (lVar4 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar4);
    }
    __this_03.fields._index = in_stack_ffffffffffffff50;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)ppCVar12;
    __this_03.fields._version = (int32_t)mySpeed;
    __this_03.fields._current._0_4_ = in_stack_ffffffffffffff58;
    __this_03.fields._current._4_4_ = in_stack_ffffffffffffff5c;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_03,(MethodInfo_3219C30 *)local_98);
    _Unwind_Resume(auVar11._0_8_);
  }
  System_Collections_Generic_HashSet_object___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
             (System_Collections_Generic_HashSet_object__o *)characters,MethodInfo_HashSet_1_T_Enumerator_Characters_BaseCharacter_GetEnume);
  fStack_60 = fStack_64;
  local_98._16_8_ = local_38;
  local_98._0_8_ = local_48._0_8_;
  local_98._8_8_ = local_48._8_8_;
  fStack_64 = (float)local_78._0_4_;
  fStack_5c = (float)local_78._4_4_;
  local_78._0_4_ = local_78._4_4_;
  fVar9 = (float)local_78._4_4_;
  fVar10 = (float)local_78._4_4_;
label_042ad010:
  do {
    __this_00.fields._index = in_stack_ffffffffffffff50;
    __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)ppCVar12;
    __this_00.fields._version = (int32_t)mySpeed;
    __this_00.fields._current._0_4_ = in_stack_ffffffffffffff58;
    __this_00.fields._current._4_4_ = in_stack_ffffffffffffff5c;
    bVar5 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                      (__this_00,(MethodInfo_3219C40 *)local_98);
    character = local_98._16_8_;
    if ((char)bVar5 == '\0') {
      __this_01.fields._index = in_stack_ffffffffffffff50;
      __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)ppCVar12;
      __this_01.fields._version = (int32_t)mySpeed;
      __this_01.fields._current._0_4_ = in_stack_ffffffffffffff58;
      __this_01.fields._current._4_4_ = in_stack_ffffffffffffff5c;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_01,(MethodInfo_3219C30 *)local_98)
      ;
      return;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  } while ((char)bVar5 != '\0');
  if ((Characters_BaseCharacter_o *)character != (Characters_BaseCharacter_o *)0x0) goto code_r0x042ad053;
  il2cpp_runtime_helper_022b2c90();
  goto label_042ad27d;
code_r0x042ad053:
  if (*(char *)&((Characters_BaseCharacter_Fields *)(character + 0x10))->FeedVictimName != '\0')
  goto label_042ad010;
  bVar5 = Characters_BaseDetection__IsValidTeam(__this,(Characters_BaseCharacter_o *)character,method_01);
  if ((char)bVar5 == '\0') goto label_042ad010;
  _Var8.genericMethod =
       (void *)(*((*(Characters_BaseCharacter_c **)character)->vtable)._109_GetCenterPosition.methodPtr)
                         (character,
                          ((*(Characters_BaseCharacter_c **)character)->vtable)._109_GetCenterPosition.method)
  ;
  local_58[0].genericMethod = _Var8.genericMethod;
  if (g_data_057a68cb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a68cb = '\x01';
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
    in_stack_ffffffffffffff5c = fVar10;
  }
  else {
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
    in_stack_ffffffffffffff5c = fVar10;
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  in_stack_ffffffffffffff58 =
       (fStack_64 - (float)local_58[0]._0_4_) * (fStack_64 - (float)local_58[0]._0_4_) +
       ((float)local_78._0_4_ - (float)local_58[0]._4_4_) * ((float)local_78._0_4_ - (float)local_58[0]._4_4_)
       + (local_68 - fVar9) * (local_68 - fVar9);
  if (in_stack_ffffffffffffff58 < 0.0) {
    in_stack_ffffffffffffff58 = sqrtf(in_stack_ffffffffffffff58);
  }
  else {
    in_stack_ffffffffffffff58 = SQRT(in_stack_ffffffffffffff58);
  }
  fVar10 = 0.0;
  fVar9 = *(float *)&((Characters_BaseCharacter_Fields *)(character + 0x10))->Animation + mySpeed + 100.0;
  fVar7 = (in_stack_ffffffffffffff58 + -200.0) / fVar9;
  if (fVar7 <= 2.0) {
    if (fVar7 <= 0.2) {
      pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._tempRecalculateFast;
      if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) {
label_042ad27d:
        il2cpp_runtime_helper_022b2c90();
        goto label_042ad282;
      }
      System_Collections_Generic_HashSet_object___Add(pSVar3,(Il2CppObject *)character,MethodInfo_Boolean_Add);
    }
    else {
      pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._tempRecalculateMedium;
      if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042ad287;
      System_Collections_Generic_HashSet_object___Add(pSVar3,(Il2CppObject *)character,MethodInfo_Boolean_Add);
    }
  }
  else {
    pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._tempRecalculateSlow;
    if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) {
label_042ad282:
      il2cpp_runtime_helper_022b2c90();
label_042ad287:
      il2cpp_runtime_helper_022b2c90();
      goto label_042ad28c;
    }
    System_Collections_Generic_HashSet_object___Add(pSVar3,(Il2CppObject *)character,MethodInfo_Boolean_Add);
  }
  pCVar2 = *ppCVar12;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    pCVar2 = *ppCVar12;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)character,(MethodInfo *)0x0);
    if (((char)bVar5 == '\0') && ((__this->fields).ClosestEnemyDistance <= in_stack_ffffffffffffff58))
    goto label_042ad230;
  }
  *ppCVar12 = (Characters_BaseCharacter_o *)character;
  il2cpp_runtime_helper_022b4080(ppCVar12,character);
  (__this->fields).ClosestEnemyDistance = in_stack_ffffffffffffff58;
label_042ad230:
  (*(__this->klass->vtable)._8_OnRecalculate.methodPtr)
            (in_stack_ffffffffffffff58,__this,character,(__this->klass->vtable)._8_OnRecalculate.method);
  goto label_042ad010;
}


// Characters.BaseDetection$$GetSpeed
// il2cpp: float Characters_BaseDetection__GetSpeed (Characters_BaseDetection_o* __this, const MethodInfo* method);
// 0x42ad5d0

float Characters_BaseDetection__GetSpeed(Characters_BaseDetection_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Il2CppMethodPointer vtableDispatch;
  undefined8 extraout_RDX;
  float fVar2;
  
  pCVar1 = (__this->fields).Owner;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    return *(float *)&(pCVar1->fields).Animation;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar1 = (__this->fields).Owner;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    vtableDispatch = (pCVar1->klass->vtable)._109_GetCenterPosition.methodPtr;
    fVar2 = (float)(*vtableDispatch)
                             (pCVar1,(pCVar1->klass->vtable)._109_GetCenterPosition.method,extraout_RDX,
                              vtableDispatch);
    return fVar2;
  }
  fVar2 = (float)il2cpp_runtime_helper_022b2c90();
  return fVar2;
}


// Characters.BaseDetection$$GetPosition
// il2cpp: UnityEngine_Vector3_o Characters_BaseDetection__GetPosition (Characters_BaseDetection_o* __this, const MethodInfo* method);
// 0x42ad5f0

UnityEngine_Vector3_o
Characters_BaseDetection__GetPosition(Characters_BaseDetection_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Il2CppMethodPointer vtableDispatch;
  undefined8 in_RDX;
  float in_XMM1_Da;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o UVar3;
  
  pCVar1 = (__this->fields).Owner;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    vtableDispatch = (pCVar1->klass->vtable)._109_GetCenterPosition.methodPtr;
    UVar2.fields._0_8_ =
         (*vtableDispatch)
                   (pCVar1,(pCVar1->klass->vtable)._109_GetCenterPosition.method,in_RDX,vtableDispatch)
    ;
    UVar2.fields.z = in_XMM1_Da;
    return (UnityEngine_Vector3_o)UVar2.fields;
  }
  UVar3.fields._0_8_ = il2cpp_runtime_helper_022b2c90();
  UVar3.fields.z = in_XMM1_Da;
  return (UnityEngine_Vector3_o)UVar3.fields;
}


// Characters.BaseDetection$$OnRecalculate
// il2cpp: void Characters_BaseDetection__OnRecalculate (Characters_BaseDetection_o* __this, Characters_BaseCharacter_o* character, float distance, const MethodInfo* method);
// 0x42ad620

void Characters_BaseDetection__OnRecalculate
               (Characters_BaseDetection_o *__this,Characters_BaseCharacter_o *character,float distance,
               MethodInfo *method)

{
  return;
}


