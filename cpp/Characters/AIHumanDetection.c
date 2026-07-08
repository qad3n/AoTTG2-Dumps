// Type: Characters.AIHumanDetection
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/AIHumanDetection.cs
// Prior source: NEW in this update
// --------------------------------

// Characters.AIHumanDetection$$.ctor
// il2cpp: void Characters_AIHumanDetection___ctor (Characters_AIHumanDetection_o* __this, Characters_BaseCharacter_o* owner, bool enemiesOnly, bool titansOnly, const MethodInfo* method);
// 0x3fa0fe0

/* WARNING: Removing unreachable block (ram,0x03fa0240) */

void Characters_AIHumanDetection___ctor
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
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  GameManagers_InGameManager_o **ppGVar16;
  float fVar17;
  undefined1 auVar18 [16];
  
  if (DAT_05704022 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Characters_BaseCharacter);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_BaseCharacter);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_BaseCharacter);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_BaseCharacter);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_05704022 = '\x01';
  }
  pSVar9 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_BaseCharacter);
  System_Collections_Generic_HashSet<object>___ctor(pSVar9,MethodInfo_HashSet_1_Characters_BaseCharacter);
  (__this->fields)._recalculateFast = (System_Collections_Generic_HashSet_BaseCharacter__o *)pSVar9;
  il2cpp_runtime_glue(&(__this->fields)._recalculateFast,pSVar9);
  pSVar9 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_BaseCharacter);
  System_Collections_Generic_HashSet<object>___ctor(pSVar9,MethodInfo_HashSet_1_Characters_BaseCharacter);
  (__this->fields)._recalculateMedium =
       (System_Collections_Generic_HashSet_BaseCharacter__o *)pSVar9;
  il2cpp_runtime_glue(&(__this->fields)._recalculateMedium,pSVar9);
  pSVar9 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_BaseCharacter);
  System_Collections_Generic_HashSet<object>___ctor(pSVar9,MethodInfo_HashSet_1_Characters_BaseCharacter);
  (__this->fields)._recalculateSlow = (System_Collections_Generic_HashSet_BaseCharacter__o *)pSVar9;
  il2cpp_runtime_glue(&(__this->fields)._recalculateSlow,pSVar9);
  pSVar9 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_BaseCharacter);
  System_Collections_Generic_HashSet<object>___ctor(pSVar9,MethodInfo_HashSet_1_Characters_BaseCharacter);
  (__this->fields)._tempRecalculateFast =
       (System_Collections_Generic_HashSet_BaseCharacter__o *)pSVar9;
  il2cpp_runtime_glue(&(__this->fields)._tempRecalculateFast,pSVar9);
  pSVar9 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_BaseCharacter);
  System_Collections_Generic_HashSet<object>___ctor(pSVar9,MethodInfo_HashSet_1_Characters_BaseCharacter);
  (__this->fields)._tempRecalculateMedium =
       (System_Collections_Generic_HashSet_BaseCharacter__o *)pSVar9;
  il2cpp_runtime_glue(&(__this->fields)._tempRecalculateMedium,pSVar9);
  pSVar9 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_BaseCharacter);
  System_Collections_Generic_HashSet<object>___ctor(pSVar9,MethodInfo_HashSet_1_Characters_BaseCharacter);
  (__this->fields)._tempRecalculateSlow =
       (System_Collections_Generic_HashSet_BaseCharacter__o *)pSVar9;
  il2cpp_runtime_glue(&(__this->fields)._tempRecalculateSlow);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Owner = owner;
  il2cpp_runtime_glue(&(__this->fields).Owner,owner);
  *(char *)&(__this->fields)._enemiesOnly = (char)enemiesOnly;
  *(char *)((long)&(__this->fields)._enemiesOnly + 1) = (char)titansOnly;
  pIVar7 = TypeInfo_InGameManager;
  pGVar4 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pGVar4 == (GameManagers_InGameManager_o *)0x0) {
    (__this->fields)._inGameManager = (GameManagers_InGameManager_o *)0x0;
  }
  else {
    bVar2 = (TypeInfo_InGameManager->_2).naturalAligment;
    if (((pGVar4->klass->_2).naturalAligment < bVar2) ||
       ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_InGameManager)) {
LAB_03fa006c:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pGVar4,pIVar7);
    }
    (__this->fields)._inGameManager = pGVar4;
    if (((pGVar4->klass->_2).naturalAligment < bVar2) ||
       ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != pIVar7)) goto LAB_03fa006c;
  }
  ppGVar16 = &(__this->fields)._inGameManager;
  il2cpp_runtime_glue(ppGVar16);
  if ((*ppGVar16 != (GameManagers_InGameManager_o *)0x0) &&
     (pSVar10 = GameManagers_InGameManager__GetAllCharactersEnumerable(*ppGVar16,(MethodInfo *)0x0),
     pSVar10 != (System_Collections_Generic_IEnumerable_BaseCharacter__o *)0x0)) {
    pSVar5 = pSVar10->klass;
    uVar3._0_1_ = (pSVar5->_2).rank;
    uVar3._1_1_ = (pSVar5->_2).minimumAlignment;
    if ((ulong)uVar3 != 0) {
      pIVar6 = (pSVar5->_1).interfaceOffsets;
      lVar14 = 0;
      do {
        if (*(long *)((long)&pIVar6->interfaceType + lVar14) == TypeInfo_IEnumerable_BaseCharacter) {
          pVVar11 = pSVar5->vtable + *(int *)((long)&pIVar6->offset + lVar14);
          goto LAB_03f9ff61;
        }
        lVar14 = lVar14 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar14);
    }
    pVVar11 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar10,TypeInfo_IEnumerable_BaseCharacter,0);
LAB_03f9ff61:
    plVar12 = (long *)(*pVVar11->methodPtr)(pSVar10,pVVar11->method);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    do {
      lVar14 = *plVar12;
      if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
        lVar15 = 0;
        do {
          if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar15) == TypeInfo_IEnumerator) {
            puVar13 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar15) * 0x10 + lVar14 + 0x138
                      );
            goto LAB_03f9ffe3;
          }
          lVar15 = lVar15 + 0x10;
        } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar15);
      }
      puVar13 = (undefined8 *)il2cpp_runtime_glue(plVar12,TypeInfo_IEnumerator,0);
LAB_03f9ffe3:
      cVar8 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if (cVar8 == '\0') goto LAB_03fa00bf;
      lVar14 = *plVar12;
      if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
        lVar15 = 0;
        do {
          if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar15) == TypeInfo_IEnumerator_BaseCharacter) {
            puVar13 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar15) * 0x10 + lVar14 + 0x138
                      );
            goto LAB_03fa0053;
          }
          lVar15 = lVar15 + 0x10;
        } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar15);
      }
      puVar13 = (undefined8 *)il2cpp_runtime_glue(plVar12,TypeInfo_IEnumerator_BaseCharacter,0);
LAB_03fa0053:
      auVar18 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      Characters_BaseDetection__OnCharacterSpawned
                ((Characters_BaseDetection_o *)__this,auVar18._0_8_,auVar18._8_8_);
    } while( true );
  }
  goto LAB_03fa023b;
LAB_03fa00bf:
  if (plVar12 != (long *)0x0) {
    lVar14 = *plVar12;
    if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
      lVar15 = 0;
      do {
        if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar15) == TypeInfo_IDisposable) {
          puVar13 = (undefined8 *)
                    (lVar14 + (long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar15) * 0x10 + 0x138);
          goto LAB_03fa011d;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar15);
    }
    puVar13 = (undefined8 *)il2cpp_runtime_glue(plVar12,TypeInfo_IDisposable,0);
LAB_03fa011d:
    (*(code *)*puVar13)(plVar12,puVar13[1]);
  }
  if ((*ppGVar16 != (GameManagers_InGameManager_o *)0x0) &&
     (pSVar9 = *(System_Collections_Generic_HashSet_object__o **)
                &((*ppGVar16)->fields).PauseTimeLeft,
     pSVar9 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    System_Collections_Generic_HashSet<object>__Add(pSVar9,(Il2CppObject *)__this,MethodInfo_Boolean_Add);
    fVar1 = (float)(__this->fields)._titansOnly;
    fVar17 = UnityEngine_Random__Range(0.0,0.2,(MethodInfo *)0x0);
    (__this->fields)._titansOnly = (bool_conflict)(fVar17 + fVar1);
    fVar1 = (__this->fields)._currentMediumTime;
    fVar17 = UnityEngine_Random__Range(0.0,2.0,(MethodInfo *)0x0);
    (__this->fields)._currentMediumTime = fVar17 + fVar1;
    return;
  }
LAB_03fa023b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.AIHumanDetection$$OnRecalculate
// il2cpp: void Characters_AIHumanDetection__OnRecalculate (Characters_AIHumanDetection_o* __this, Characters_BaseCharacter_o* character, float distance, const MethodInfo* method);
// 0x3fa0ff0

void Characters_AIHumanDetection__OnRecalculate
               (Characters_AIHumanDetection_o *__this,Characters_BaseCharacter_o *character,
               float distance,MethodInfo *method)

{
  byte bVar1;
  System_Object_array *__this_00;
  float fVar2;
  
  if (DAT_0570402c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseTitan);
    DAT_0570402c = '\x01';
  }
  if (character != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_BaseTitan->_2).naturalAligment;
    if ((bVar1 <= (character->klass->_2).naturalAligment) &&
       ((character->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BaseTitan)) {
      if (character != (Characters_BaseCharacter_o *)0x0) {
        fVar2 = (float)(*(code *)character->klass[1].vtable._45_OnConnectedToMaster.method)
                                 (character,
                                  character->klass[1].vtable._46_OnRoomPropertiesUpdate.methodPtr);
        __this_00 = (character->fields).crossfadeCache;
        if (__this_00 != (System_Object_array *)0x0) {
          Characters_TitanColliderToggler__SetNearby
                    ((Characters_TitanColliderToggler_o *)__this_00,(__this->fields).Owner,
                     (uint)(distance < fVar2),(MethodInfo *)0x0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Characters.AIHumanDetection$$OnFixedUpdate
// il2cpp: void Characters_AIHumanDetection__OnFixedUpdate (Characters_AIHumanDetection_o* __this, const MethodInfo* method);
// 0x3fa10b0

void Characters_AIHumanDetection__OnFixedUpdate
               (Characters_AIHumanDetection_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o **ppCVar1;
  Characters_BaseCharacter_o *pCVar2;
  bool_conflict bVar3;
  MethodInfo *method_00;
  
  if (DAT_0570402d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570402d = '\x01';
  }
  pCVar2 = (__this->fields).ClosestEnemy;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    ppCVar1 = &(__this->fields).ClosestEnemy;
    pCVar2 = *ppCVar1;
    if (pCVar2 == (Characters_BaseCharacter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (*(char *)&(pCVar2->fields).FeedVictimName != '\0') {
      *ppCVar1 = (Characters_BaseCharacter_o *)0x0;
      method_00 = (MethodInfo *)0x0;
      il2cpp_runtime_glue();
    }
  }
  Characters_BaseDetection__OnFixedUpdate((Characters_BaseDetection_o *)__this,method_00);
  return;
}


