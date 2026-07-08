// Type: Characters.BaseDetection
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/BaseDetection.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Detection/BaseDetection.cs  [CHANGED since prior version]
// --------------------------------

// Characters.BaseDetection$$.ctor
// il2cpp: void Characters_BaseDetection___ctor (Characters_BaseDetection_o* __this, Characters_BaseCharacter_o* owner, bool enemiesOnly, bool titansOnly, const MethodInfo* method);
// 0x3f9fcb0

/* WARNING: Removing unreachable block (ram,0x03fa0240) */

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


// Characters.BaseDetection$$IsNullOrDead
// il2cpp: bool Characters_BaseDetection__IsNullOrDead (Characters_BaseDetection_o* __this, const MethodInfo* method);
// 0x3fa0380

bool_conflict
Characters_BaseDetection__IsNullOrDead(Characters_BaseDetection_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  
  if (DAT_05704023 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704023 = '\x01';
  }
  pCVar1 = (__this->fields).Owner;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  bVar3 = (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar2 >> 8),1);
  if ((char)bVar2 == '\0') {
    pCVar1 = (__this->fields).Owner;
    if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar3 = (bool_conflict)
            CONCAT71((int7)((ulong)pCVar1 >> 8),*(char *)&(pCVar1->fields).FeedVictimName != '\0');
  }
  return bVar3;
}


// Characters.BaseDetection$$OnTeamChanged
// il2cpp: void Characters_BaseDetection__OnTeamChanged (Characters_BaseDetection_o* __this, const MethodInfo* method);
// 0x3f93e20

/* WARNING: Removing unreachable block (ram,0x03f94205) */

void Characters_BaseDetection__OnTeamChanged(Characters_BaseDetection_o *__this,MethodInfo *method)

{
  ushort uVar1;
  GameManagers_InGameManager_o *pGVar2;
  System_Collections_Generic_IEnumerable_BaseCharacter__c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  char cVar5;
  bool_conflict bVar6;
  System_Collections_Generic_IEnumerable_BaseCharacter__o *pSVar7;
  VirtualInvokeData *pVVar8;
  long *plVar9;
  undefined8 *puVar10;
  MethodInfo *method_00;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  System_Collections_Generic_HashSet_T__o *pSVar14;
  Il2CppMethodPointer pIVar15;
  Characters_BaseDetection_o *__this_03;
  
  if (DAT_05704024 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BaseDetection_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_BaseDetection);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_BaseCharacter);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_BaseCharacter);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    DAT_05704024 = '\x01';
  }
  pSVar14 = (System_Collections_Generic_HashSet_T__o *)0x0;
  pIVar15 = (Il2CppMethodPointer)0x0;
  __this_03 = (Characters_BaseDetection_o *)0x0;
  pGVar2 = (__this->fields)._inGameManager;
  if ((pGVar2 != (GameManagers_InGameManager_o *)0x0) &&
     (pSVar7 = GameManagers_InGameManager__GetAllCharactersEnumerable(pGVar2,(MethodInfo *)0x0),
     pSVar7 != (System_Collections_Generic_IEnumerable_BaseCharacter__o *)0x0)) {
    pSVar3 = pSVar7->klass;
    uVar1._0_1_ = (pSVar3->_2).rank;
    uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar4 = (pSVar3->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(long *)((long)&pIVar4->interfaceType + lVar11) == TypeInfo_IEnumerable_BaseCharacter) {
          pVVar8 = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar11);
          goto LAB_03f93f31;
        }
        lVar11 = lVar11 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar11);
    }
    pVVar8 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar7,TypeInfo_IEnumerable_BaseCharacter,0);
LAB_03f93f31:
    plVar9 = (long *)(*pVVar8->methodPtr)(pSVar7,pVVar8->method);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    do {
      lVar11 = *plVar9;
      if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
        lVar12 = 0;
        do {
          if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IEnumerator) {
            puVar10 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + lVar11 + 0x138
                      );
            goto LAB_03f93fb3;
          }
          lVar12 = lVar12 + 0x10;
        } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
      }
      puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IEnumerator,0);
LAB_03f93fb3:
      cVar5 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if (cVar5 == '\0') goto LAB_03f94084;
      lVar11 = *plVar9;
      if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
        lVar12 = 0;
        do {
          if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IEnumerator_BaseCharacter) {
            puVar10 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + lVar11 + 0x138
                      );
            goto LAB_03f94023;
          }
          lVar12 = lVar12 + 0x10;
        } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
      }
      puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IEnumerator_BaseCharacter,0);
LAB_03f94023:
      auVar13 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      Characters_BaseDetection__OnCharacterSpawned(__this,auVar13._0_8_,auVar13._8_8_);
    } while( true );
  }
  goto LAB_03f94200;
LAB_03f94084:
  if (plVar9 != (long *)0x0) {
    lVar11 = *plVar9;
    if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
      lVar12 = 0;
      do {
        if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IDisposable) {
          puVar10 = (undefined8 *)
                    (lVar11 + (long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + 0x138);
          goto LAB_03f940dd;
        }
        lVar12 = lVar12 + 0x10;
      } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
    }
    puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IDisposable,0);
LAB_03f940dd:
    (*(code *)*puVar10)(plVar9,puVar10[1]);
  }
  pGVar2 = (__this->fields)._inGameManager;
  if ((pGVar2 != (GameManagers_InGameManager_o *)0x0) &&
     (__this_00 = *(System_Collections_Generic_HashSet_object__o **)&(pGVar2->fields).PauseTimeLeft,
     __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    System_Collections_Generic_HashSet<object>__GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)&stack0xffffffffffffffb8,
               __this_00,MethodInfo_HashSet_1_T__Enumerator_Characters_BaseDetection);
    while( true ) {
      __this_01.fields._8_8_ = pIVar15;
      __this_01.fields._set = pSVar14;
      __this_01.fields._current = (Il2CppObject *)__this_03;
      bVar6 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185890 *)&stack0xffffffffffffffb8);
      if ((char)bVar6 == '\0') {
        __this_02.fields._8_8_ = pIVar15;
        __this_02.fields._set = pSVar14;
        __this_02.fields._current = (Il2CppObject *)__this_03;
        System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                  (__this_02,(MethodInfo_3185880 *)&stack0xffffffffffffffb8);
        return;
      }
      if (__this_03 == (Characters_BaseDetection_o *)0x0) break;
      Characters_BaseDetection__OnCharacterSpawned(__this_03,(__this->fields).Owner,method_00);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03f94200:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseDetection$$OnCharacterSpawned
// il2cpp: void Characters_BaseDetection__OnCharacterSpawned (Characters_BaseDetection_o* __this, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x3fa0260

void Characters_BaseDetection__OnCharacterSpawned
               (Characters_BaseDetection_o *__this,Characters_BaseCharacter_o *character,
               MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *y;
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool_conflict bVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  if (DAT_05704025 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseTitan);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704025 = '\x01';
  }
  y = (__this->fields).Owner;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      if (character == (Characters_BaseCharacter_o *)0x0) {
LAB_03fa0370:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (*(char *)&(character->fields).FeedVictimName == '\0') {
        method_00 = extraout_RDX;
        if (*(char *)((long)&(__this->fields)._enemiesOnly + 1) != '\0') {
          bVar1 = (TypeInfo_BaseTitan->_2).naturalAligment;
          method_00 = (MethodInfo *)(ulong)bVar1;
          if ((character->klass->_2).naturalAligment < bVar1) {
            return;
          }
          if ((character->klass->_2).typeHierarchy[(long)&method_00[-1].field_0x57] != TypeInfo_BaseTitan)
          {
            return;
          }
        }
        bVar2 = Characters_BaseDetection__IsValidTeam(__this,character,method_00);
        if ((char)bVar2 != '\0') {
          __this_00 = (System_Collections_Generic_HashSet_object__o *)
                      (__this->fields)._recalculateFast;
          if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
            System_Collections_Generic_HashSet<object>__Add
                      (__this_00,(Il2CppObject *)character,MethodInfo_Boolean_Add);
            return;
          }
          goto LAB_03fa0370;
        }
      }
    }
  }
  return;
}


// Characters.BaseDetection$$IsValidTeam
// il2cpp: bool Characters_BaseDetection__IsValidTeam (Characters_BaseDetection_o* __this, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x3fa03f0

bool_conflict
Characters_BaseDetection__IsValidTeam
          (Characters_BaseDetection_o *__this,Characters_BaseCharacter_o *character,
          MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool_conflict bVar2;
  uint uVar3;
  undefined8 unaff_RBX;
  
  if (DAT_05704026 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    DAT_05704026 = '\x01';
  }
  uVar3 = (uint)CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
  if ((char)(__this->fields)._enemiesOnly != '\0') {
    pCVar1 = (__this->fields).Owner;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      pCVar1 = (__this->fields).Owner;
      if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar3 = GameManagers_TeamInfo__SameTeam(character,pCVar1,(MethodInfo *)0x0);
      uVar3 = uVar3 ^ 1;
    }
  }
  return uVar3;
}


// Characters.BaseDetection$$OnFixedUpdate
// il2cpp: void Characters_BaseDetection__OnFixedUpdate (Characters_BaseDetection_o* __this, const MethodInfo* method);
// 0x3fa04a0

void Characters_BaseDetection__OnFixedUpdate(Characters_BaseDetection_o *__this,MethodInfo *method)

{
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX;
  MethodInfo *method_02;
  Characters_BaseDetection_o *__this_00;
  float fVar1;
  float fVar2;
  float in_XMM1_Da;
  UnityEngine_Vector3_o myPosition;
  UnityEngine_Vector3_o myPosition_00;
  UnityEngine_Vector3_o myPosition_01;
  
  if (DAT_05704027 == '\0') {
    il2cpp_init_method_metadata();
    DAT_05704027 = '\x01';
  }
  fVar2 = (float)(__this->fields)._titansOnly;
  fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._titansOnly = (bool_conflict)(fVar1 + fVar2);
  fVar2 = (__this->fields)._currentMediumTime;
  fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._currentMediumTime = fVar1 + fVar2;
  fVar2 = (float)(*(__this->klass->vtable)._6_GetSpeed.methodPtr)
                           (__this,(__this->klass->vtable)._6_GetSpeed.method);
  myPosition.fields._0_8_ =
       (*(__this->klass->vtable)._7_GetPosition.methodPtr)
                 (__this,(__this->klass->vtable)._7_GetPosition.method);
  myPosition.fields.z = in_XMM1_Da;
  Characters_BaseDetection__Recalculate
            (__this,(__this->fields)._recalculateFast,myPosition,fVar2,method_00);
  __this_00 = (Characters_BaseDetection_o *)(__this->fields)._recalculateFast;
  if (__this_00 != (Characters_BaseDetection_o *)0x0) {
    System_Collections_Generic_HashSet<object>__Clear
              ((System_Collections_Generic_HashSet_object__o *)__this_00,MethodInfo_Void_Clear);
    method_02 = method_01;
    if (0.2 < (float)(__this->fields)._titansOnly) {
      (__this->fields)._titansOnly = 0;
      myPosition_00.fields.z = in_XMM1_Da;
      myPosition_00.fields.x = (float)(int)myPosition.fields._0_8_;
      myPosition_00.fields.y = (float)(int)((ulong)myPosition.fields._0_8_ >> 0x20);
      Characters_BaseDetection__Recalculate
                (__this,(__this->fields)._recalculateMedium,myPosition_00,fVar2,method_01);
      __this_00 = (Characters_BaseDetection_o *)(__this->fields)._recalculateMedium;
      if (__this_00 == (Characters_BaseDetection_o *)0x0) goto LAB_03fa0619;
      System_Collections_Generic_HashSet<object>__Clear
                ((System_Collections_Generic_HashSet_object__o *)__this_00,MethodInfo_Void_Clear);
      method_02 = extraout_RDX;
    }
    if (2.0 < (__this->fields)._currentMediumTime) {
      (__this->fields)._currentMediumTime = 0.0;
      myPosition_01.fields.z = in_XMM1_Da;
      myPosition_01.fields.x = (float)(int)myPosition.fields._0_8_;
      myPosition_01.fields.y = (float)(int)((ulong)myPosition.fields._0_8_ >> 0x20);
      Characters_BaseDetection__Recalculate
                (__this,(__this->fields)._recalculateSlow,myPosition_01,fVar2,method_02);
      __this_00 = (Characters_BaseDetection_o *)(__this->fields)._recalculateSlow;
      if (__this_00 == (Characters_BaseDetection_o *)0x0) goto LAB_03fa0619;
      System_Collections_Generic_HashSet<object>__Clear
                ((System_Collections_Generic_HashSet_object__o *)__this_00,MethodInfo_Void_Clear);
    }
    Characters_BaseDetection__MergeTemp
              (__this_00,(__this->fields)._recalculateFast,(__this->fields)._tempRecalculateFast,
               in_RCX);
    Characters_BaseDetection__MergeTemp
              (__this_00,(__this->fields)._recalculateMedium,(__this->fields)._tempRecalculateMedium
               ,in_RCX);
    Characters_BaseDetection__MergeTemp
              (__this_00,(__this->fields)._recalculateSlow,(__this->fields)._tempRecalculateSlow,
               in_RCX);
    return;
  }
LAB_03fa0619:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseDetection$$MergeTemp
// il2cpp: void Characters_BaseDetection__MergeTemp (Characters_BaseDetection_o* __this, System_Collections_Generic_HashSet_BaseCharacter__o* main, System_Collections_Generic_HashSet_BaseCharacter__o* temp, const MethodInfo* method);
// 0x3fa0b60

void Characters_BaseDetection__MergeTemp
               (Characters_BaseDetection_o *__this,
               System_Collections_Generic_HashSet_BaseCharacter__o *main,
               System_Collections_Generic_HashSet_BaseCharacter__o *temp,MethodInfo *method)

{
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  bool_conflict bVar1;
  System_Collections_Generic_HashSet_T__o *pSVar2;
  Il2CppMethodPointer pIVar3;
  Il2CppObject *item;
  
  if (DAT_05704028 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BaseCharacter_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_BaseCharacter);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_05704028 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_HashSet_T__o *)0x0;
  pIVar3 = (Il2CppMethodPointer)0x0;
  item = (Il2CppObject *)0x0;
  if (temp == (System_Collections_Generic_HashSet_BaseCharacter__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (0 < (temp->fields)._count) {
    System_Collections_Generic_HashSet<object>__GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)&stack0xffffffffffffffb8,
               (System_Collections_Generic_HashSet_object__o *)temp,MethodInfo_HashSet_1_T__Enumerator_Characters_BaseCharacter);
    if (main == (System_Collections_Generic_HashSet_BaseCharacter__o *)0x0) {
      __this_01.fields._8_8_ = pIVar3;
      __this_01.fields._set = pSVar2;
      __this_01.fields._current = item;
      bVar1 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185890 *)&stack0xffffffffffffffb8);
      if ((char)bVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else {
      while (__this_00.fields._8_8_ = pIVar3, __this_00.fields._set = pSVar2,
            __this_00.fields._current = item,
            bVar1 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                              (__this_00,(MethodInfo_3185890 *)&stack0xffffffffffffffb8),
            (char)bVar1 != '\0') {
        System_Collections_Generic_HashSet<object>__Add
                  ((System_Collections_Generic_HashSet_object__o *)main,item,MethodInfo_Boolean_Add);
      }
    }
    __this_02.fields._8_8_ = pIVar3;
    __this_02.fields._set = pSVar2;
    __this_02.fields._current = item;
    System_Collections_Generic_HashSet_Enumerator<object>__Dispose
              (__this_02,(MethodInfo_3185880 *)&stack0xffffffffffffffb8);
    System_Collections_Generic_HashSet<object>__Clear
              ((System_Collections_Generic_HashSet_object__o *)temp,MethodInfo_Void_Clear);
  }
  return;
}


// Characters.BaseDetection$$Recalculate
// il2cpp: void Characters_BaseDetection__Recalculate (Characters_BaseDetection_o* __this, System_Collections_Generic_HashSet_BaseCharacter__o* characters, UnityEngine_Vector3_o myPosition, float mySpeed, const MethodInfo* method);
// 0x3fa0620

void Characters_BaseDetection__Recalculate
               (Characters_BaseDetection_o *__this,
               System_Collections_Generic_HashSet_BaseCharacter__o *characters,
               UnityEngine_Vector3_o myPosition,float mySpeed,MethodInfo *method)

{
  int iVar1;
  Characters_BaseCharacter_o *pCVar2;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  undefined8 character;
  bool_conflict bVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar5;
  _union_329995 _Var6;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  float fVar7;
  undefined4 in_XMM1_Db;
  float fVar8;
  Characters_BaseCharacter_o **ppCVar9;
  undefined4 in_stack_ffffffffffffff50;
  float in_stack_ffffffffffffff58;
  float in_stack_ffffffffffffff5c;
  undefined1 local_98 [32];
  undefined1 local_78 [16];
  float local_68;
  float fStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  _union_329995 local_58 [2];
  undefined1 local_48 [16];
  Characters_BaseCharacter_o *local_38;
  
  local_68 = myPosition.fields.z;
  local_78._8_4_ = in_XMM0_Dc;
  local_78._0_8_ = myPosition.fields._0_8_;
  local_78._12_4_ = in_XMM0_Dd;
  fStack_64 = (float)in_XMM1_Db;
  if (DAT_05704029 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BaseCharacter_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_BaseCharacter);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704029 = '\x01';
  }
  local_98._0_8_ = (Il2CppMethodPointer)0x0;
  local_98._8_8_ = (Il2CppMethodPointer)0x0;
  local_98._16_8_ = (InvokerMethod)0x0;
  pCVar2 = (__this->fields).ClosestEnemy;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppCVar9 = &(__this->fields).ClosestEnemy;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar4 != '\0') &&
     (bVar4 = Characters_BaseDetection__IsValidTeam(__this,(__this->fields).ClosestEnemy,method_00),
     (char)bVar4 == '\0')) {
    *ppCVar9 = (Characters_BaseCharacter_o *)0x0;
    il2cpp_runtime_glue(ppCVar9,0);
  }
  if (characters == (System_Collections_Generic_HashSet_BaseCharacter__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_HashSet<object>__GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
             (System_Collections_Generic_HashSet_object__o *)characters,MethodInfo_HashSet_1_T__Enumerator_Characters_BaseCharacter);
  uStack_60 = fStack_64;
  local_98._16_8_ = local_38;
  local_98._0_8_ = local_48._0_8_;
  local_98._8_8_ = local_48._8_8_;
  fStack_64 = (float)local_78._0_4_;
  fStack_5c = (float)local_78._4_4_;
  local_78._0_4_ = local_78._4_4_;
  fVar7 = (float)local_78._4_4_;
  fVar8 = (float)local_78._4_4_;
  do {
    do {
      do {
        do {
          __this_00.fields._index = in_stack_ffffffffffffff50;
          __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)ppCVar9;
          __this_00.fields._version = (int32_t)mySpeed;
          __this_00.fields._current._0_4_ = in_stack_ffffffffffffff58;
          __this_00.fields._current._4_4_ = in_stack_ffffffffffffff5c;
          bVar4 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                            (__this_00,(MethodInfo_3185890 *)local_98);
          character = local_98._16_8_;
          if ((char)bVar4 == '\0') {
            __this_01.fields._index = in_stack_ffffffffffffff50;
            __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)ppCVar9;
            __this_01.fields._version = (int32_t)mySpeed;
            __this_01.fields._current._0_4_ = in_stack_ffffffffffffff58;
            __this_01.fields._current._4_4_ = in_stack_ffffffffffffff5c;
            System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                      (__this_01,(MethodInfo_3185880 *)local_98);
            return;
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar4 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
        } while ((char)bVar4 != '\0');
        if ((Characters_BaseCharacter_o *)character == (Characters_BaseCharacter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      } while (*(char *)&((Characters_BaseCharacter_Fields *)(character + 0x10))->FeedVictimName !=
               '\0');
      bVar4 = Characters_BaseDetection__IsValidTeam
                        (__this,(Characters_BaseCharacter_o *)character,method_01);
    } while ((char)bVar4 == '\0');
    _Var6.genericMethod =
         (void *)(*((*(Characters_BaseCharacter_c **)character)->vtable)._109_GetCenterPosition.
                   methodPtr)(character,
                              ((*(Characters_BaseCharacter_c **)character)->vtable).
                              _109_GetCenterPosition.method);
    local_58[0].genericMethod = _Var6.genericMethod;
    if (DAT_056fdea6 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fdea6 = '\x01';
      iVar1 = *(int *)(TypeInfo_Math + 0xe4);
      in_stack_ffffffffffffff5c = fVar8;
    }
    else {
      iVar1 = *(int *)(TypeInfo_Math + 0xe4);
      in_stack_ffffffffffffff5c = fVar8;
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
    }
    in_stack_ffffffffffffff58 =
         (fStack_64 - (float)local_58[0]._0_4_) * (fStack_64 - (float)local_58[0]._0_4_) +
         ((float)local_78._0_4_ - (float)local_58[0]._4_4_) *
         ((float)local_78._0_4_ - (float)local_58[0]._4_4_) +
         (local_68 - fVar7) * (local_68 - fVar7);
    if (in_stack_ffffffffffffff58 < 0.0) {
      in_stack_ffffffffffffff58 = sqrtf(in_stack_ffffffffffffff58);
    }
    else {
      in_stack_ffffffffffffff58 = SQRT(in_stack_ffffffffffffff58);
    }
    fVar8 = 0.0;
    fVar7 = *(float *)&((Characters_BaseCharacter_Fields *)(character + 0x10))->Animation + mySpeed
            + 100.0;
    fVar5 = (in_stack_ffffffffffffff58 + -200.0) / fVar7;
    if (fVar5 <= 2.0) {
      if (fVar5 <= 0.2) {
        pSVar3 = (System_Collections_Generic_HashSet_object__o *)
                 (__this->fields)._tempRecalculateFast;
        if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Generic_HashSet<object>__Add
                  (pSVar3,(Il2CppObject *)character,MethodInfo_Boolean_Add);
      }
      else {
        pSVar3 = (System_Collections_Generic_HashSet_object__o *)
                 (__this->fields)._tempRecalculateMedium;
        if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Generic_HashSet<object>__Add
                  (pSVar3,(Il2CppObject *)character,MethodInfo_Boolean_Add);
      }
    }
    else {
      pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._tempRecalculateSlow
      ;
      if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_HashSet<object>__Add(pSVar3,(Il2CppObject *)character,MethodInfo_Boolean_Add)
      ;
    }
    pCVar2 = *ppCVar9;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar4 == '\0') {
      pCVar2 = *ppCVar9;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)character,
                         (MethodInfo *)0x0);
      if (((char)bVar4 != '\0') ||
         (in_stack_ffffffffffffff58 < (__this->fields).ClosestEnemyDistance)) goto LAB_03fa0975;
    }
    else {
LAB_03fa0975:
      *ppCVar9 = (Characters_BaseCharacter_o *)character;
      il2cpp_runtime_glue(ppCVar9,character);
      (__this->fields).ClosestEnemyDistance = in_stack_ffffffffffffff58;
    }
    (*(__this->klass->vtable)._8_OnRecalculate.methodPtr)
              (in_stack_ffffffffffffff58,__this,character,
               (__this->klass->vtable)._8_OnRecalculate.method);
  } while( true );
}


// Characters.BaseDetection$$GetSpeed
// il2cpp: float Characters_BaseDetection__GetSpeed (Characters_BaseDetection_o* __this, const MethodInfo* method);
// 0x3fa0d30

float Characters_BaseDetection__GetSpeed(Characters_BaseDetection_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Owner;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    return *(float *)&(pCVar1->fields).Animation;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseDetection$$GetPosition
// il2cpp: UnityEngine_Vector3_o Characters_BaseDetection__GetPosition (Characters_BaseDetection_o* __this, const MethodInfo* method);
// 0x3fa0d50

UnityEngine_Vector3_o
Characters_BaseDetection__GetPosition(Characters_BaseDetection_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 in_RDX;
  float in_XMM1_Da;
  UnityEngine_Vector3_o UVar2;
  
  pCVar1 = (__this->fields).Owner;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    vtable_dispatch = (pCVar1->klass->vtable)._109_GetCenterPosition.methodPtr;
    UVar2.fields._0_8_ =
         (*vtable_dispatch)
                   (pCVar1,(pCVar1->klass->vtable)._109_GetCenterPosition.method,in_RDX,
                    vtable_dispatch);
    UVar2.fields.z = in_XMM1_Da;
    return (UnityEngine_Vector3_o)UVar2.fields;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseDetection$$OnRecalculate
// il2cpp: void Characters_BaseDetection__OnRecalculate (Characters_BaseDetection_o* __this, Characters_BaseCharacter_o* character, float distance, const MethodInfo* method);
// 0x3fa0d80

void Characters_BaseDetection__OnRecalculate
               (Characters_BaseDetection_o *__this,Characters_BaseCharacter_o *character,
               float distance,MethodInfo *method)

{
  return;
}


