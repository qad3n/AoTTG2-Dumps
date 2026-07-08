// Type: Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgBadgeIconRowRuntime.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__21$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__21___ctor (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__21_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x41cabb0

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_<BadgeIds>d__21___ctor
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__21_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  int32_t iVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__21$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__21__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__21_o* __this, const MethodInfo* method);
// 0x41cac00

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_<BadgeIds>d__21__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__21_o *__this,
               MethodInfo *method)

{
  ushort uVar1;
  int iVar2;
  System_Collections_Generic_IEnumerator_JSONNode__o *pSVar3;
  System_Collections_Generic_IEnumerator_JSONNode__c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  code *vtable_dispatch;
  long lVar6;
  undefined1 auVar7 [16];
  
  iVar2 = (__this->fields).__1__state;
  if ((iVar2 == 1) || (iVar2 == -3)) {
    if (DAT_05704e14 == '\0') {
      il2cpp_init_method_metadata();
      DAT_05704e14 = '\x01';
    }
    (__this->fields).__1__state = -1;
    pSVar3 = (__this->fields).__7__wrap1;
    if (pSVar3 != (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) {
      pSVar4 = pSVar3->klass;
      uVar1._0_1_ = (pSVar4->_2).rank;
      uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar5 = (pSVar4->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar5->interfaceType + lVar6) == TypeInfo_IDisposable) {
            auVar7._8_8_ = pIVar5;
            auVar7._0_8_ = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar6);
            goto LAB_041cac9f;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      auVar7 = il2cpp_runtime_glue(pSVar3,TypeInfo_IDisposable,0);
LAB_041cac9f:
      vtable_dispatch = (code *)*auVar7._0_8_;
      (*vtable_dispatch)(pSVar3,auVar7._0_8_[1],auVar7._8_8_,vtable_dispatch);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__21$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__21__MoveNext (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__21_o* __this, const MethodInfo* method);
// 0x41cacb0

bool_conflict
Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_<BadgeIds>d__21__MoveNext
          (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__21_o *__this,
          MethodInfo *method)

{
  System_Collections_Generic_IEnumerator_JSONNode__o **ppSVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  System_Collections_Generic_IEnumerator_JSONNode__c *pSVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  char cVar9;
  bool_conflict bVar10;
  long *plVar11;
  undefined8 *puVar12;
  System_Collections_Generic_IEnumerator_JSONNode__o *pSVar13;
  VirtualInvokeData *pVVar14;
  System_String_o *pSVar15;
  long lVar16;
  long lVar17;
  
  if (DAT_05704e13 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata();
    DAT_05704e13 = '\x01';
  }
  iVar5 = (__this->fields).__1__state;
  if (iVar5 == 1) {
LAB_041cadea:
    (__this->fields).__1__state = -3;
    ppSVar1 = &(__this->fields).__7__wrap1;
    do {
      pSVar13 = *ppSVar1;
      if (pSVar13 == (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar7 = pSVar13->klass;
      uVar2._0_1_ = (pSVar7->_2).rank;
      uVar2._1_1_ = (pSVar7->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar8 = (pSVar7->_1).interfaceOffsets;
        lVar17 = 0;
        do {
          if (*(long *)((long)&pIVar8->interfaceType + lVar17) == TypeInfo_IEnumerator) {
            pVVar14 = pSVar7->vtable + *(int *)((long)&pIVar8->offset + lVar17);
            goto LAB_041cae73;
          }
          lVar17 = lVar17 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar17);
      }
      pVVar14 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar13,TypeInfo_IEnumerator,0);
LAB_041cae73:
      cVar9 = (*pVVar14->methodPtr)(pSVar13,pVVar14->method);
      if (cVar9 == '\0') {
        if (DAT_05704e14 == '\0') {
          il2cpp_init_method_metadata();
          DAT_05704e14 = '\x01';
        }
        (__this->fields).__1__state = -1;
        pSVar13 = (__this->fields).__7__wrap1;
        if (pSVar13 == (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) goto LAB_041caff6;
        pSVar7 = pSVar13->klass;
        uVar4._0_1_ = (pSVar7->_2).rank;
        uVar4._1_1_ = (pSVar7->_2).minimumAlignment;
        if ((ulong)uVar4 == 0) goto LAB_041cafcf;
        pIVar8 = (pSVar7->_1).interfaceOffsets;
        lVar17 = 0;
        goto LAB_041cafc0;
      }
      pSVar13 = *ppSVar1;
      if (pSVar13 == (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar7 = pSVar13->klass;
      uVar3._0_1_ = (pSVar7->_2).rank;
      uVar3._1_1_ = (pSVar7->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar8 = (pSVar7->_1).interfaceOffsets;
        lVar17 = 0;
        do {
          if (*(long *)((long)&pIVar8->interfaceType + lVar17) == TypeInfo_IEnumerator_JSONNode) {
            pVVar14 = pSVar7->vtable + *(int *)((long)&pIVar8->offset + lVar17);
            goto LAB_041caef3;
          }
          lVar17 = lVar17 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar17);
      }
      pVVar14 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar13,TypeInfo_IEnumerator_JSONNode,0);
LAB_041caef3:
      plVar11 = (long *)(*pVVar14->methodPtr)(pSVar13,pVVar14->method);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar15 = (System_String_o *)(**(code **)(*plVar11 + 0x1c8))(plVar11);
      bVar10 = System_String__IsNullOrWhiteSpace(pSVar15,(MethodInfo *)0x0);
    } while ((char)bVar10 != '\0');
    pSVar15 = (System_String_o *)
              (**(code **)(*plVar11 + 0x1c8))(plVar11,*(undefined8 *)(*plVar11 + 0x1d0));
    (__this->fields).__2__current = pSVar15;
    il2cpp_runtime_glue(&(__this->fields).__2__current,pSVar15);
    (__this->fields).__1__state = 1;
    bVar10 = (bool_conflict)CONCAT71((int7)((ulong)plVar11 >> 8),1);
  }
  else {
    if (iVar5 == 0) {
      (__this->fields).__1__state = -1;
      pSVar6 = (__this->fields).badges;
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar10 = SimpleJSONFixed_JSONNode__op_Equality(pSVar6,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        pSVar6 = (__this->fields).badges;
        if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        plVar11 = (long *)(*(pSVar6->klass->vtable)._27_get_Children.methodPtr)
                                    (pSVar6,(pSVar6->klass->vtable)._27_get_Children.method);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        lVar17 = *plVar11;
        if ((ulong)*(ushort *)(lVar17 + 0x12e) != 0) {
          lVar16 = 0;
          do {
            if (*(long *)(*(long *)(lVar17 + 0xb0) + lVar16) == TypeInfo_IEnumerable_JSONNode) {
              puVar12 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar17 + 0xb0) + 8 + lVar16) * 0x10 + lVar17 +
                        0x138);
              goto LAB_041cadd1;
            }
            lVar16 = lVar16 + 0x10;
          } while ((ulong)*(ushort *)(lVar17 + 0x12e) << 4 != lVar16);
        }
        puVar12 = (undefined8 *)il2cpp_runtime_glue(plVar11,TypeInfo_IEnumerable_JSONNode,0);
LAB_041cadd1:
        pSVar13 = (System_Collections_Generic_IEnumerator_JSONNode__o *)
                  (*(code *)*puVar12)(plVar11,puVar12[1]);
        (__this->fields).__7__wrap1 = pSVar13;
        il2cpp_runtime_glue(&(__this->fields).__7__wrap1,pSVar13);
        goto LAB_041cadea;
      }
    }
    bVar10 = 0;
  }
  return bVar10;
  while (lVar17 = lVar17 + 0x10, (ulong)uVar4 << 4 != lVar17) {
LAB_041cafc0:
    if (*(long *)((long)&pIVar8->interfaceType + lVar17) == TypeInfo_IDisposable) {
      pVVar14 = pSVar7->vtable + *(int *)((long)&pIVar8->offset + lVar17);
      goto LAB_041cafed;
    }
  }
LAB_041cafcf:
  pVVar14 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar13,TypeInfo_IDisposable,0);
LAB_041cafed:
  (*pVVar14->methodPtr)(pSVar13,pVVar14->method);
LAB_041caff6:
  *ppSVar1 = (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0;
  il2cpp_runtime_glue(ppSVar1,0);
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__21$$<>m__Finally1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__21____m__Finally1 (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__21_o* __this, const MethodInfo* method);
// 0x41cb1b0

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_<BadgeIds>d__21__<>m__Finally1
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__21_o *__this,
               MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_IEnumerator_JSONNode__o *pSVar2;
  System_Collections_Generic_IEnumerator_JSONNode__c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *vtable_dispatch;
  long lVar5;
  undefined1 auVar6 [16];
  
  if (DAT_05704e14 == '\0') {
    il2cpp_init_method_metadata();
    DAT_05704e14 = '\x01';
  }
  (__this->fields).__1__state = -1;
  pSVar2 = (__this->fields).__7__wrap1;
  if (pSVar2 == (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) {
    return;
  }
  pSVar3 = pSVar2->klass;
  uVar1._0_1_ = (pSVar3->_2).rank;
  uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar4 = (pSVar3->_1).interfaceOffsets;
    lVar5 = 0;
    do {
      if (*(long *)((long)&pIVar4->interfaceType + lVar5) == TypeInfo_IDisposable) {
        auVar6._8_8_ = pIVar4;
        auVar6._0_8_ = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar5);
        goto LAB_041cb23f;
      }
      lVar5 = lVar5 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar5);
  }
  auVar6 = il2cpp_runtime_glue(pSVar2,TypeInfo_IDisposable,0);
LAB_041cb23f:
  vtable_dispatch = (code *)*auVar6._0_8_;
  (*vtable_dispatch)(pSVar2,auVar6._0_8_[1],auVar6._8_8_,vtable_dispatch);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__21$$System.Collections.Generic.IEnumerator<System.String>.get_Current
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__21__System_Collections_Generic_IEnumerator_System_String__get_Current (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__21_o* __this, const MethodInfo* method);
// 0x41cb250

System_String_o *
Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_<BadgeIds>d__21__System_Collections_Generic_IEnumerator<System_String>_get_Current
          (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__21_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__21$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__21__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__21_o* __this, const MethodInfo* method);
// 0x41cb260

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_<BadgeIds>d__21__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__21_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__21$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__21__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__21_o* __this, const MethodInfo* method);
// 0x41cb2a0

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_<BadgeIds>d__21__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__21_o *__this,
          MethodInfo *method)

{
  return (Il2CppObject *)(__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__21$$System.Collections.Generic.IEnumerable<System.String>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_string__o* Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__21__System_Collections_Generic_IEnumerable_System_String__GetEnumerator (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__21_o* __this, const MethodInfo* method);
// 0x41cb2b0

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_<BadgeIds>d__21__System_Collections_Generic_IEnumerable<System_String>_GetEnumerator
          (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__21_o *__this,
          MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__21_o *__this_00;
  
  if (DAT_05704e15 == '\0') {
    il2cpp_init_method_metadata();
    DAT_05704e15 = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      __this_00 = __this;
      goto LAB_041cb328;
    }
  }
  __this_00 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__21_o *)
              il2cpp_runtime_glue(TypeInfo_BadgeIds_d__21);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  if (__this_00 == (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__21_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_041cb328:
  (__this_00->fields).badges = (__this->fields).__3__badges;
  il2cpp_runtime_glue(&(__this_00->fields).badges);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__21$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__21__System_Collections_IEnumerable_GetEnumerator (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__21_o* __this, const MethodInfo* method);
// 0x41cb350

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_<BadgeIds>d__21__System_Collections_IEnumerable_GetEnumerator
          (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__21_o *__this,
          MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__21_o *__this_00;
  
  if (DAT_05704e15 == '\0') {
    il2cpp_init_method_metadata();
    DAT_05704e15 = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      __this_00 = __this;
      goto LAB_041cb328;
    }
  }
  __this_00 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__21_o *)
              il2cpp_runtime_glue(TypeInfo_BadgeIds_d__21);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  if (__this_00 == (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__21_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_041cb328:
  (__this_00->fields).badges = (__this->fields).__3__badges;
  il2cpp_runtime_glue(&(__this_00->fields).badges);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$get_HasBadges
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__get_HasBadges (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, const MethodInfo* method);
// 0x41c9fe0

bool_conflict
Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__get_HasBadges
          (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  *(undefined1 *)((long)&(__this->fields)._controlsActive + 1));
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$set_HasBadges
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__set_HasBadges (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, bool value, const MethodInfo* method);
// 0x41c9ff0

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__set_HasBadges
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,bool_conflict value,
               MethodInfo *method)

{
  *(char *)((long)&(__this->fields)._controlsActive + 1) = (char)value;
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Setup (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, float size, float gap, Gisketch_Aottg2UI_State_GisketchUIState_o* state, System_String_o* stateKey, bool controlsActive, const MethodInfo* method);
// 0x41c9d10

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Setup
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,float size,float gap,
               Gisketch_Aottg2UI_State_GisketchUIState_o *state,System_String_o *stateKey,
               bool_conflict controlsActive,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_01;
  UnityEngine_UI_ContentSizeFitter_o *__this_02;
  Il2CppObject *pIVar2;
  System_Action_string__o *value;
  float fVar3;
  
  if (DAT_05704e0a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnStateChanged);
    il2cpp_init_method_metadata(&MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter);
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLay);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_AddComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    DAT_05704e0a = '\x01';
  }
  fVar3 = 1.0;
  if (1.0 <= size) {
    fVar3 = size;
  }
  (__this->fields)._size = fVar3;
  (__this->fields)._state = state;
  il2cpp_runtime_glue(&(__this->fields)._state,state);
  (__this->fields)._stateKey = stateKey;
  il2cpp_runtime_glue(&(__this->fields)._stateKey);
  *(char *)&(__this->fields)._controlsActive = (char)controlsActive;
  pUVar1 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 == (UnityEngine_GameObject_o *)0x0) goto LAB_041c9fd4;
  __this_01 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
              UnityEngine_GameObject__GetComponent<object>(pUVar1,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
  if (__this_01 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
    pUVar1 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar1 == (UnityEngine_GameObject_o *)0x0) goto LAB_041c9fd4;
    __this_01 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                UnityEngine_GameObject__AddComponent<object>(pUVar1,MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLay);
    if (__this_01 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto LAB_041c9fd4;
  }
  UnityEngine_UI_LayoutGroup__set_childAlignment
            ((UnityEngine_UI_LayoutGroup_o *)__this_01,4,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
            (__this_01,1,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
            (__this_01,1,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
            (__this_01,0,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
            (__this_01,0,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_01,gap,(MethodInfo *)0x0);
  pUVar1 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 == (UnityEngine_GameObject_o *)0x0) goto LAB_041c9fd4;
  __this_02 = (UnityEngine_UI_ContentSizeFitter_o *)
              UnityEngine_GameObject__GetComponent<object>(pUVar1,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
  if (__this_02 == (UnityEngine_UI_ContentSizeFitter_o *)0x0) {
    pUVar1 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar1 == (UnityEngine_GameObject_o *)0x0) goto LAB_041c9fd4;
    __this_02 = (UnityEngine_UI_ContentSizeFitter_o *)
                UnityEngine_GameObject__AddComponent<object>(pUVar1,MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter);
    if (__this_02 == (UnityEngine_UI_ContentSizeFitter_o *)0x0) goto LAB_041c9fd4;
  }
  UnityEngine_UI_ContentSizeFitter__set_horizontalFit(__this_02,2,(MethodInfo *)0x0);
  UnityEngine_UI_ContentSizeFitter__set_verticalFit(__this_02,2,(MethodInfo *)0x0);
  pUVar1 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    pIVar2 = UnityEngine_GameObject__GetComponent<object>(pUVar1,MethodInfo_LayoutElement_GetComponent_LayoutElement);
    if (pIVar2 != (Il2CppObject *)0x0) {
LAB_041c9f69:
      value = (System_Action_string__o *)pIVar2->klass->vtable[0x26].method;
      (*pIVar2->klass->vtable[0x26].methodPtr)((__this->fields)._size,pIVar2);
      __this_00 = (__this->fields)._state;
      if (__this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        value = (System_Action_string__o *)il2cpp_runtime_glue(TypeInfo_Action_string);
        System_Action<object>___ctor();
        Gisketch_Aottg2UI_State_GisketchUIState__add_Changed(__this_00,value,(MethodInfo *)0x0);
      }
      Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Refresh(__this,(MethodInfo *)value);
      return;
    }
    pUVar1 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      pIVar2 = UnityEngine_GameObject__AddComponent<object>(pUVar1,MethodInfo_LayoutElement_AddComponent_LayoutElement);
      if (pIVar2 != (Il2CppObject *)0x0) goto LAB_041c9f69;
    }
  }
LAB_041c9fd4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$SetBadges
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetBadges (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, System_Collections_Generic_IEnumerable_string__o* ids, const MethodInfo* method);
// 0x41ca070

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetBadges
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,
               System_Collections_Generic_IEnumerable_string__o *ids,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_String_o *id;
  bool_conflict bVar3;
  System_String_array *second;
  UnityEngine_GameObject_o *pUVar4;
  System_String_o *resourcePath;
  UnityEngine_Object_o *x;
  MethodInfo *in_RCX;
  System_String_array *pSVar5;
  int iVar6;
  ulong uVar7;
  
  if (DAT_05704e0b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_SequenceEqual_String);
    DAT_05704e0b = '\x01';
  }
  second = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__OrderedBadgeIds
                     (ids,(MethodInfo *)0x0);
  pSVar5 = (__this->fields)._last;
  if ((pSVar5 != (System_String_array *)0x0) &&
     (bVar3 = System_Linq_Enumerable__SequenceEqual<object>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar5,
                         (System_Collections_Generic_IEnumerable_TSource__o *)second,MethodInfo_Boolean_SequenceEqual_String),
     (char)bVar3 != '\0')) {
    if ((char)(__this->fields)._controlsActive == '\0') {
      return;
    }
    bVar1 = *(byte *)((long)&(__this->fields)._controlsActive + 1);
    pUVar4 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UnityEngine_GameObject__SetActive(pUVar4,(uint)bVar1,(MethodInfo *)0x0);
    return;
  }
  (__this->fields)._last = second;
  il2cpp_runtime_glue(&(__this->fields)._last,second);
  pSVar5 = second;
  if (DAT_05704e0f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchSpriteLoader);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704e0f = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Clear(__this,(MethodInfo *)pSVar5);
  if (second != (System_String_array *)0x0) {
    if (0 < (int)second->max_length) {
      iVar6 = 0;
      uVar7 = 0;
      if ((second->max_length & 0xffffffff) != 0) {
        do {
          id = second->m_Items[uVar7];
          resourcePath = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__BadgeIcon
                                   (id,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_GisketchSpriteLoader + 0xe4) == 0) {
            il2cpp_init_class();
          }
          x = (UnityEngine_Object_o *)
              Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load(resourcePath,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar3 == '\0') {
            Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__AddIcon
                      (__this,id,(UnityEngine_Sprite_o *)x,in_RCX);
            iVar6 = iVar6 + 1;
          }
          uVar7 = uVar7 + 1;
          uVar2 = (uint)second->max_length;
          in_RCX = (MethodInfo *)(long)(int)uVar2;
          if ((long)in_RCX <= (long)uVar7) goto LAB_041ca258;
        } while (uVar7 < uVar2);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar6 = 0;
LAB_041ca258:
    *(bool *)((long)&(__this->fields)._controlsActive + 1) = 0 < iVar6;
    if ((char)(__this->fields)._controlsActive == '\0') {
      return;
    }
    pUVar4 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar4,(uint)(0 < iVar6),(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$SetFromCharacterInfo
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetFromCharacterInfo (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, SimpleJSONFixed_JSONNode_o* info, const MethodInfo* method);
// 0x41ca2b0

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetFromCharacterInfo
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,
               SimpleJSONFixed_JSONNode_o *info,MethodInfo *method)

{
  bool_conflict bVar1;
  int32_t iVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *__this_00;
  MethodInfo *method_00;
  
  if (DAT_05704e0c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&"badges");
    DAT_05704e0c = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar3 = (Il2CppClass *)0x0;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(info,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (info == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_041ca3ad;
    pIVar3 = (Il2CppClass *)
             (*(info->klass->vtable)._7_get_Item.methodPtr)
                       (info,"badges",(info->klass->vtable)._7_get_Item.method);
  }
  if (DAT_05704e12 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BadgeIds_d__21);
    DAT_05704e12 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_BadgeIds_d__21);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0xfffffffe;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this_00[2].klass = iVar2;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[3].klass = pIVar3;
    il2cpp_runtime_glue(__this_00 + 3,pIVar3);
    if (__this != (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetBadges
                (__this,(System_Collections_Generic_IEnumerable_string__o *)__this_00,method_00);
      return;
    }
  }
LAB_041ca3ad:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$SetFromCharacterInfoJson
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetFromCharacterInfoJson (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, System_String_o* json, System_Collections_Generic_IEnumerable_string__o* roles, const MethodInfo* method);
// 0x41ca440

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetFromCharacterInfoJson
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,System_String_o *json,
               System_Collections_Generic_IEnumerable_string__o *roles,MethodInfo *method)

{
  bool_conflict bVar1;
  int32_t iVar2;
  SimpleJSONFixed_JSONNode_o *a;
  SimpleJSONFixed_JSONNode_o *requested;
  Il2CppClass *pIVar3;
  Il2CppObject *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  method_01 = (MethodInfo *)json;
  if (DAT_05704e0d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&"badges");
    DAT_05704e0d = '\x01';
  }
  a = Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Parse(json,method_01);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  requested = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_041ca55f;
    requested = (SimpleJSONFixed_JSONNode_o *)
                (*(a->klass->vtable)._7_get_Item.methodPtr)
                          (a,"badges",(a->klass->vtable)._7_get_Item.method);
  }
  pIVar3 = (Il2CppClass *)
           Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges
                     (requested,roles,(MethodInfo *)0x0);
  if (DAT_05704e12 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BadgeIds_d__21);
    DAT_05704e12 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_BadgeIds_d__21);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0xfffffffe;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this_00[2].klass = iVar2;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[3].klass = pIVar3;
    il2cpp_runtime_glue(__this_00 + 3,pIVar3);
    Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetBadges
              (__this,(System_Collections_Generic_IEnumerable_string__o *)__this_00,method_00);
    return;
  }
LAB_041ca55f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Refresh (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, const MethodInfo* method);
// 0x41ca000

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Refresh
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  bool_conflict bVar1;
  System_String_o *json;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *pMVar3;
  
  pMVar3 = (MethodInfo *)(__this->fields)._stateKey;
  bVar1 = System_String__IsNullOrEmpty((System_String_o *)pMVar3,(MethodInfo *)0x0);
  if (((char)bVar1 == '\0') &&
     (__this_00 = (__this->fields)._state, pMVar3 = (MethodInfo *)0x0,
     __this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    pMVar3 = (MethodInfo *)(__this->fields)._stateKey;
    json = Gisketch_Aottg2UI_State_GisketchUIState__Get
                     (__this_00,(System_String_o *)pMVar3,
                      (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),(MethodInfo *)0x0);
    pSVar2 = Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Parse(json,pMVar3);
    Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetFromCharacterInfo(__this,pSVar2,method_00);
    return;
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Current(pMVar3);
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetFromCharacterInfo(__this,pSVar2,method_01);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__OnDestroy (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, const MethodInfo* method);
// 0x41ca610

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  System_Action_string__o *value;
  
  if (DAT_05704e0e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnStateChanged);
    DAT_05704e0e = '\x01';
  }
  __this_00 = (__this->fields)._state;
  if (__this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    value = (System_Action_string__o *)il2cpp_runtime_glue(TypeInfo_Action_string);
    System_Action<object>___ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$OnStateChanged
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__OnStateChanged (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, System_String_o* key, const MethodInfo* method);
// 0x41ca690

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__OnStateChanged
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,System_String_o *key,
               MethodInfo *method)

{
  bool_conflict bVar1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)0x0;
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._stateKey,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    method_00 = (MethodInfo *)(__this->fields)._stateKey;
    bVar1 = System_String__op_Equality(key,(System_String_o *)method_00,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return;
    }
  }
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Refresh(__this,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$Rebuild
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Rebuild (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, System_String_array* ids, const MethodInfo* method);
// 0x41ca150

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Rebuild
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,System_String_array *ids,
               MethodInfo *method)

{
  uint uVar1;
  System_String_o *id;
  bool_conflict bVar2;
  System_String_o *resourcePath;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *in_RCX;
  System_String_array *method_00;
  int iVar3;
  ulong uVar4;
  
  method_00 = ids;
  if (DAT_05704e0f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchSpriteLoader);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704e0f = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Clear(__this,(MethodInfo *)method_00);
  if (ids != (System_String_array *)0x0) {
    if (0 < (int)ids->max_length) {
      iVar3 = 0;
      uVar4 = 0;
      if ((ids->max_length & 0xffffffff) != 0) {
        do {
          id = ids->m_Items[uVar4];
          resourcePath = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__BadgeIcon
                                   (id,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_GisketchSpriteLoader + 0xe4) == 0) {
            il2cpp_init_class();
          }
          x = (UnityEngine_Object_o *)
              Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load(resourcePath,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar2 == '\0') {
            Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__AddIcon
                      (__this,id,(UnityEngine_Sprite_o *)x,in_RCX);
            iVar3 = iVar3 + 1;
          }
          uVar4 = uVar4 + 1;
          uVar1 = (uint)ids->max_length;
          in_RCX = (MethodInfo *)(long)(int)uVar1;
          if ((long)in_RCX <= (long)uVar4) goto LAB_041ca258;
        } while (uVar4 < uVar1);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar3 = 0;
LAB_041ca258:
    *(bool *)((long)&(__this->fields)._controlsActive + 1) = 0 < iVar3;
    if ((char)(__this->fields)._controlsActive == '\0') {
      return;
    }
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,(uint)(0 < iVar3),(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$SetActive
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetActive (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, bool active, const MethodInfo* method);
// 0x41ca120

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetActive
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,bool_conflict active,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  if ((char)(__this->fields)._controlsActive == '\0') {
    return;
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,active & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$AddIcon
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__AddIcon (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, System_String_o* id, UnityEngine_Sprite_o* sprite, const MethodInfo* method);
// 0x41ca810

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__AddIcon
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,System_String_o *id,
               UnityEngine_Sprite_o *sprite,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  System_RuntimeTypeHandle_o handle;
  System_String_o *pSVar1;
  System_Type_array *components;
  System_Type_o *pSVar2;
  long lVar3;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_Image_o *__this_02;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this_03;
  Il2CppObject *pIVar4;
  undefined8 uVar5;
  undefined8 extraout_RDX;
  
  if (DAT_05704e10 == '\0') {
    il2cpp_init_method_metadata(&TypeRef_CanvasRenderer);
    il2cpp_init_method_metadata(&MethodInfo_GisketchTooltipTrigger_AddComponent_GisketchTool);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_Image);
    il2cpp_init_method_metadata(&TypeRef_LayoutElement);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&"AoTTG Badge ");
    DAT_05704e10 = '\x01';
  }
  pSVar1 = System_String__Concat("AoTTG Badge ",id,(MethodInfo *)0x0);
  components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
LAB_041cab8a:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (pSVar2 != (System_Type_o *)0x0) {
    lVar3 = il2cpp_runtime_glue(pSVar2,(((components->obj).klass)->_1).element_class);
    if (lVar3 == 0) goto LAB_041cab94;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar2;
    il2cpp_runtime_glue(components->m_Items);
    pSVar2 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pSVar2,(((components->obj).klass)->_1).element_class);
      if (lVar3 == 0) goto LAB_041cab94;
    }
    if ((uint)components->max_length < 2) goto LAB_041cab8f;
    components->m_Items[1] = pSVar2;
    il2cpp_runtime_glue(components->m_Items + 1);
    pSVar2 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pSVar2,(((components->obj).klass)->_1).element_class);
      if (lVar3 == 0) goto LAB_041cab94;
    }
    if (2 < (uint)components->max_length) {
      components->m_Items[2] = pSVar2;
      il2cpp_runtime_glue(components->m_Items + 2);
      pSVar2 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if (pSVar2 != (System_Type_o *)0x0) {
        lVar3 = il2cpp_runtime_glue(pSVar2,(((components->obj).klass)->_1).element_class);
        if (lVar3 == 0) {
LAB_041cab94:
          uVar5 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar5,0);
        }
      }
      if (3 < (uint)components->max_length) {
        components->m_Items[3] = pSVar2;
        il2cpp_runtime_glue(components->m_Items + 3,pSVar2);
        __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor(__this_00,pSVar1,components,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
          parent = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent(__this_01,parent,0,(MethodInfo *)0x0);
            __this_02 = (UnityEngine_UI_Image_o *)
                        UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_Image_GetComponent_Image);
            if (__this_02 != (UnityEngine_UI_Image_o *)0x0) {
              UnityEngine_UI_Image__set_sprite(__this_02,sprite,(MethodInfo *)0x0);
              UnityEngine_UI_Image__set_preserveAspect(__this_02,1,(MethodInfo *)0x0);
              (*(__this_02->klass->vtable)._25_set_raycastTarget.methodPtr)
                        (__this_02,1,(__this_02->klass->vtable)._25_set_raycastTarget.method);
              (*(__this_02->klass->vtable)._23_set_color.methodPtr)
                        (0x3f800000,0x3f800000,__this_02,
                         (__this_02->klass->vtable)._23_set_color.method);
              __this_03 = (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)
                          UnityEngine_GameObject__AddComponent<object>(__this_00,MethodInfo_GisketchTooltipTrigger_AddComponent_GisketchTool);
              pSVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__BadgeLabel
                                 (id,(MethodInfo *)0x0);
              if (__this_03 != (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0) {
                Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__Setup
                          (__this_03,pSVar1,(Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0,
                           (MethodInfo *)0x0);
                pIVar4 = UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                if (pIVar4 != (Il2CppObject *)0x0) {
                  (*pIVar4->klass->vtable[0x24].methodPtr)
                            ((__this->fields)._size,pIVar4,pIVar4->klass->vtable[0x24].method);
                  vtable_dispatch = pIVar4->klass->vtable[0x26].methodPtr;
                  (*vtable_dispatch)
                            ((__this->fields)._size,pIVar4,pIVar4->klass->vtable[0x26].method,
                             extraout_RDX,vtable_dispatch);
                  return;
                }
              }
            }
          }
        }
        goto LAB_041cab8a;
      }
    }
  }
LAB_041cab8f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$Clear
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Clear (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, const MethodInfo* method);
// 0x41ca6e0

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Clear
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,MethodInfo *method)

{
  int index;
  bool_conflict bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Object_o *obj;
  
  if (DAT_05704e11 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704e11 = '\x01';
  }
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    index = UnityEngine_Transform__get_childCount(pUVar2,(MethodInfo *)0x0);
    while( true ) {
      index = index + -1;
      if (index < 0) {
        return;
      }
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_Transform_o *)0x0) break;
      pUVar2 = UnityEngine_Transform__GetChild(pUVar2,index,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_Transform_o *)0x0) break;
      obj = (UnityEngine_Object_o *)
            UnityEngine_Component__get_gameObject
                      ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if ((char)bVar1 == '\0') {
        UnityEngine_Object__DestroyImmediate(obj,(MethodInfo *)0x0);
      }
      else {
        UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$Parse
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Parse (System_String_o* json, const MethodInfo* method);
// 0x41ca570

SimpleJSONFixed_JSONNode_o *
Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Parse(System_String_o *json,MethodInfo *method)

{
  bool_conflict bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  
  pSVar2 = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar1 = System_String__IsNullOrWhiteSpace(json,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    pSVar2 = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
  }
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$BadgeIds
// il2cpp: System_Collections_Generic_IEnumerable_string__o* Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds (SimpleJSONFixed_JSONNode_o* badges, const MethodInfo* method);
// 0x41ca3c0

System_Collections_Generic_IEnumerable_string__o *
Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds
          (SimpleJSONFixed_JSONNode_o *badges,MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *__this;
  
  if (DAT_05704e12 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BadgeIds_d__21);
    DAT_05704e12 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_BadgeIds_d__21);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0xfffffffe;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this[2].klass = iVar1;
  if (__this != (Il2CppObject *)0x0) {
    __this[3].klass = (Il2CppClass *)badges;
    il2cpp_runtime_glue(__this + 3,badges);
    return (System_Collections_Generic_IEnumerable_string__o *)__this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime___ctor (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, const MethodInfo* method);
// 0x41cabe0

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime___ctor
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,MethodInfo *method)

{
  (__this->fields)._size = 20.0;
  *(undefined1 *)&(__this->fields)._controlsActive = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


