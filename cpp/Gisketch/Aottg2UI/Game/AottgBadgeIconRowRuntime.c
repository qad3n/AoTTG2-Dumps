// Type: Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgBadgeIconRowRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__27$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27___ctor (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x44fc090

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27___ctor
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  int32_t iVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__27$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o* __this, const MethodInfo* method);
// 0x44fc0e0

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *__this,MethodInfo *method)

{
  ushort uVar1;
  int iVar2;
  System_Collections_Generic_IEnumerator_JSONNode__o *pSVar3;
  System_Collections_Generic_IEnumerator_JSONNode__c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  code *vtableDispatch;
  long lVar6;
  undefined1 auVar7 [16];
  
  iVar2 = (__this->fields).__1__state;
  if ((iVar2 == 1) || (iVar2 == -3)) {
    if (g_data_057aece9 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057aece9 = '\x01';
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
            goto label_044fc17f;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      auVar7 = il2cpp_runtime_helper_02300d20(pSVar3,TypeInfo_IDisposable,0);
label_044fc17f:
      vtableDispatch = (code *)*auVar7._0_8_;
      (*vtableDispatch)(pSVar3,auVar7._0_8_[1],auVar7._8_8_,vtableDispatch);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__27$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__MoveNext (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o* __this, const MethodInfo* method);
// 0x44fc190

bool_conflict
Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__MoveNext
          (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *__this,MethodInfo *method)

{
  System_Collections_Generic_IEnumerator_JSONNode__o **ppSVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  System_Collections_Generic_IEnumerator_JSONNode__c *pSVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  char cVar10;
  bool_conflict bVar11;
  long *plVar12;
  undefined8 *puVar13;
  System_Collections_Generic_IEnumerator_JSONNode__o *pSVar14;
  VirtualInvokeData *pVVar15;
  System_String_o *pSVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined1 auVar20 [12];
  
  if (g_data_057aece8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0();
    g_data_057aece8 = '\x01';
  }
  iVar6 = (__this->fields).__1__state;
  if (iVar6 == 1) {
label_044fc2ca:
    (__this->fields).__1__state = -3;
    ppSVar1 = &(__this->fields).__7__wrap1;
    do {
      pSVar14 = *ppSVar1;
      if (pSVar14 == (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
label_044fc4fb:
        il2cpp_runtime_helper_022b2c90();
label_044fc500:
        il2cpp_runtime_helper_022b2c90();
        goto label_044fc505;
      }
      pSVar8 = pSVar14->klass;
      uVar2._0_1_ = (pSVar8->_2).rank;
      uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar9 = (pSVar8->_1).interfaceOffsets;
        lVar19 = 0;
        do {
          if (*(long *)((long)&pIVar9->interfaceType + lVar19) == TypeInfo_IEnumerator) {
            pVVar15 = pSVar8->vtable + *(int *)((long)&pIVar9->offset + lVar19);
            goto label_044fc353;
          }
          lVar19 = lVar19 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar19);
      }
      pVVar15 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar14,TypeInfo_IEnumerator,0);
label_044fc353:
      cVar10 = (*pVVar15->methodPtr)(pSVar14,pVVar15->method);
      if (cVar10 == '\0') {
        if (g_data_057aece9 == '\0') {
          il2cpp_runtime_helper_023445d0();
          g_data_057aece9 = '\x01';
        }
        (__this->fields).__1__state = -1;
        pSVar14 = (__this->fields).__7__wrap1;
        if (pSVar14 == (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) goto label_044fc4d6;
        pSVar8 = pSVar14->klass;
        uVar4._0_1_ = (pSVar8->_2).rank;
        uVar4._1_1_ = (pSVar8->_2).minimumAlignment;
        if ((ulong)uVar4 == 0) goto label_044fc4af;
        pIVar9 = (pSVar8->_1).interfaceOffsets;
        lVar19 = 0;
        goto label_044fc4a0;
      }
      pSVar14 = *ppSVar1;
      if (pSVar14 == (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) goto label_044fc4fb;
      pSVar8 = pSVar14->klass;
      uVar3._0_1_ = (pSVar8->_2).rank;
      uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar9 = (pSVar8->_1).interfaceOffsets;
        lVar19 = 0;
        do {
          if (*(long *)((long)&pIVar9->interfaceType + lVar19) == TypeInfo_IEnumerator_JSONNode) {
            pVVar15 = pSVar8->vtable + *(int *)((long)&pIVar9->offset + lVar19);
            goto label_044fc3d3;
          }
          lVar19 = lVar19 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar19);
      }
      pVVar15 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar14,TypeInfo_IEnumerator_JSONNode,0);
label_044fc3d3:
      plVar12 = (long *)(*pVVar15->methodPtr)(pSVar14,pVVar15->method);
      if (plVar12 == (long *)0x0) goto label_044fc500;
      pSVar16 = (System_String_o *)(**(code **)(*plVar12 + 0x1c8))(plVar12);
      bVar11 = System_String__IsNullOrWhiteSpace(pSVar16,(MethodInfo *)0x0);
    } while ((char)bVar11 != '\0');
    pSVar16 = (System_String_o *)(**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
    (__this->fields).__2__current = pSVar16;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pSVar16);
    (__this->fields).__1__state = 1;
    bVar11 = (bool_conflict)CONCAT71((int7)((ulong)plVar12 >> 8),1);
  }
  else {
    if (iVar6 == 0) {
      (__this->fields).__1__state = -1;
      pSVar7 = (__this->fields).badges;
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar11 = SimpleJSONFixed_JSONNode__op_Equality(pSVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        pSVar7 = (__this->fields).badges;
        if (pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_044fc505:
          il2cpp_runtime_helper_022b2c90();
        }
        else {
          plVar12 = (long *)(*(pSVar7->klass->vtable)._27_get_Children.methodPtr)
                                      (pSVar7,(pSVar7->klass->vtable)._27_get_Children.method);
          if (plVar12 != (long *)0x0) {
            lVar19 = *plVar12;
            if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
              lVar18 = 0;
              do {
                if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar18) == TypeInfo_IEnumerable_JSONNode) {
                  puVar13 = (undefined8 *)
                            ((long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar18) * 0x10 + lVar19 + 0x138);
                  goto label_044fc2b1;
                }
                lVar18 = lVar18 + 0x10;
              } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar18);
            }
            puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar12,TypeInfo_IEnumerable_JSONNode,0);
label_044fc2b1:
            pSVar14 = (System_Collections_Generic_IEnumerator_JSONNode__o *)
                      (*(code *)*puVar13)(plVar12,puVar13[1]);
            (__this->fields).__7__wrap1 = pSVar14;
            il2cpp_runtime_helper_022b4080(&(__this->fields).__7__wrap1,pSVar14);
            goto label_044fc2ca;
          }
        }
        auVar20 = il2cpp_runtime_helper_022b2c90();
        uVar17 = auVar20._0_8_;
        if (auVar20._8_4_ != 1) {
label_044fc673:
          _Unwind_Resume(uVar17);
        }
        plVar12 = (long *)__cxa_begin_catch(uVar17);
        lVar19 = *plVar12;
        __cxa_end_catch();
        if (lVar19 != 0) {
          il2cpp_runtime_helper_02236330(__this);
          uVar17 = il2cpp_runtime_helper_022fefe0();
          if (lVar19 != 0) {
            iVar6 = (__this->fields).__1__state;
            if ((iVar6 == 1) || (iVar6 == -3)) {
              if (g_data_057aece9 == '\0') {
                il2cpp_runtime_helper_023445d0();
                g_data_057aece9 = '\x01';
              }
              (__this->fields).__1__state = -1;
              pSVar14 = (__this->fields).__7__wrap1;
              if (pSVar14 != (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) {
                pSVar8 = pSVar14->klass;
                uVar5._0_1_ = (pSVar8->_2).rank;
                uVar5._1_1_ = (pSVar8->_2).minimumAlignment;
                if ((ulong)uVar5 != 0) {
                  pIVar9 = (pSVar8->_1).interfaceOffsets;
                  lVar18 = 0;
                  do {
                    if (*(long *)((long)&pIVar9->interfaceType + lVar18) == TypeInfo_IDisposable) {
                      pVVar15 = pSVar8->vtable + *(int *)((long)&pIVar9->offset + lVar18);
                      goto label_044fc662;
                    }
                    lVar18 = lVar18 + 0x10;
                  } while ((ulong)uVar5 << 4 != lVar18);
                }
                pVVar15 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar14,TypeInfo_IDisposable,0);
label_044fc662:
                (*pVVar15->methodPtr)(pSVar14,pVVar15->method);
              }
            }
            uVar17 = il2cpp_runtime_helper_022fefe0(lVar19);
          }
          goto label_044fc673;
        }
      }
    }
    bVar11 = 0;
  }
  return bVar11;
  while (lVar19 = lVar19 + 0x10, (ulong)uVar4 << 4 != lVar19) {
label_044fc4a0:
    if (*(long *)((long)&pIVar9->interfaceType + lVar19) == TypeInfo_IDisposable) {
      pVVar15 = pSVar8->vtable + *(int *)((long)&pIVar9->offset + lVar19);
      goto label_044fc4cd;
    }
  }
label_044fc4af:
  pVVar15 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar14,TypeInfo_IDisposable,0);
label_044fc4cd:
  (*pVVar15->methodPtr)(pSVar14,pVVar15->method);
label_044fc4d6:
  *ppSVar1 = (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0;
  il2cpp_runtime_helper_022b4080(ppSVar1,0);
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__27$$<>m__Finally1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27____m__Finally1 (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o* __this, const MethodInfo* method);
// 0x44fc690

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27____m__Finally1
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *__this,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_IEnumerator_JSONNode__o *pSVar2;
  System_Collections_Generic_IEnumerator_JSONNode__c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *vtableDispatch;
  long lVar5;
  undefined1 auVar6 [16];
  
  if (g_data_057aece9 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057aece9 = '\x01';
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
        goto label_044fc71f;
      }
      lVar5 = lVar5 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar5);
  }
  auVar6 = il2cpp_runtime_helper_02300d20(pSVar2,TypeInfo_IDisposable,0);
label_044fc71f:
  vtableDispatch = (code *)*auVar6._0_8_;
  (*vtableDispatch)(pSVar2,auVar6._0_8_[1],auVar6._8_8_,vtableDispatch);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__27$$System.Collections.Generic.IEnumerator<System.String>.get_Current
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__System_Collections_Generic_IEnumerator_System_String__get_Current (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o* __this, const MethodInfo* method);
// 0x44fc730

System_String_o *
Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__System_Collections_Generic_IEnumerator_System_String__get_Current
          (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__27$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o* __this, const MethodInfo* method);
// 0x44fc740

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__27$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o* __this, const MethodInfo* method);
// 0x44fc780

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *__this,MethodInfo *method)

{
  return (Il2CppObject *)(__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__27$$System.Collections.Generic.IEnumerable<System.String>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_string__o* Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__System_Collections_Generic_IEnumerable_System_String__GetEnumerator (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o* __this, const MethodInfo* method);
// 0x44fc790

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__System_Collections_Generic_IEnumerable_System_String__GetEnumerator
          (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  undefined8 in_RAX;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *__this_00;
  undefined8 unaff_RBX;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *pGVar3;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *unaff_R14;
  
  do {
    pGVar3 = __this;
    *(Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o **)((long)register0x00000020 + -8) =
         unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
    if (g_data_057aecea == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44fc7ac;
      il2cpp_runtime_helper_023445d0();
      g_data_057aecea = '\x01';
    }
    if ((pGVar3->fields).__1__state == -2) {
      iVar1 = (pGVar3->fields).__l__initialThreadId;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44fc7c5;
      iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
      if (iVar1 == iVar2) {
        (pGVar3->fields).__1__state = 0;
        __this_00 = pGVar3;
label_044fc808:
        (__this_00->fields).badges = (pGVar3->fields).__3__badges;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44fc819;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).badges);
        return (System_Collections_IEnumerator_o *)__this_00;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44fc7e5;
    __this_00 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *)
                il2cpp_runtime_helper_023052d0(TypeInfo_BadgeIds_d__27);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44fc7f2;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).__1__state = 0;
    __this = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44fc800;
    iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    (__this_00->fields).__l__initialThreadId = iVar2;
    if (__this_00 != (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *)0x0)
    goto label_044fc808;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44fc829;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    unaff_RBX = 0;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    unaff_R14 = pGVar3;
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__27$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__System_Collections_IEnumerable_GetEnumerator (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o* __this, const MethodInfo* method);
// 0x44fc830

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__System_Collections_IEnumerable_GetEnumerator
          (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *__this_00;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *pGVar3;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *unaff_R14;
  
  do {
    pGVar3 = __this;
    *(Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o **)((long)register0x00000020 + -8) =
         unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
    if (g_data_057aecea == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44fc7ac;
      il2cpp_runtime_helper_023445d0();
      g_data_057aecea = '\x01';
    }
    if ((pGVar3->fields).__1__state == -2) {
      iVar1 = (pGVar3->fields).__l__initialThreadId;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44fc7c5;
      iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
      if (iVar1 == iVar2) {
        (pGVar3->fields).__1__state = 0;
        __this_00 = pGVar3;
label_044fc808:
        (__this_00->fields).badges = (pGVar3->fields).__3__badges;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44fc819;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).badges);
        return (System_Collections_IEnumerator_o *)__this_00;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44fc7e5;
    __this_00 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *)
                il2cpp_runtime_helper_023052d0(TypeInfo_BadgeIds_d__27);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44fc7f2;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).__1__state = 0;
    __this = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44fc800;
    iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    (__this_00->fields).__l__initialThreadId = iVar2;
    if (__this_00 != (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *)0x0)
    goto label_044fc808;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44fc829;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    unaff_RBX = 0;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    unaff_R14 = pGVar3;
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$get_HasBadges
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__get_HasBadges (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, const MethodInfo* method);
// 0x44fb0c0

bool_conflict
Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__get_HasBadges
          (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)((long)&(__this->fields)._controlsActive + 3));
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$set_HasBadges
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__set_HasBadges (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, bool value, const MethodInfo* method);
// 0x44fb0d0

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__set_HasBadges
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,bool_conflict value,
               MethodInfo *method)

{
  *(char *)((long)&(__this->fields)._controlsActive + 3) = (char)value;
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Setup (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, float size, float gap, Gisketch_Aottg2UI_State_GisketchUIState_o* state, System_String_o* stateKey, bool controlsActive, const MethodInfo* method);
// 0x44fadd0

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Setup
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,float size,float gap,
               Gisketch_Aottg2UI_State_GisketchUIState_o *state,System_String_o *stateKey,
               bool_conflict controlsActive,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o **ppGVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_01;
  UnityEngine_UI_ContentSizeFitter_o *__this_02;
  Il2CppObject *pIVar3;
  System_Action_string__o *value;
  float fVar4;
  
  if (g_data_057aecdb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_AddComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    g_data_057aecdb = '\x01';
  }
  fVar4 = 1.0;
  if (1.0 <= size) {
    fVar4 = size;
  }
  (__this->fields)._size = fVar4;
  ppGVar1 = &(__this->fields)._state;
  (__this->fields)._state = state;
  il2cpp_runtime_helper_022b4080(ppGVar1,state);
  (__this->fields)._stateKey = stateKey;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._stateKey);
  *(char *)&(__this->fields)._controlsActive = (char)controlsActive;
  pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_044fb0b7;
  __this_01 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
              UnityEngine_GameObject__GetComponent_object_(pUVar2,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
  if (__this_01 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
    pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_044fb0b7;
    __this_01 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                UnityEngine_GameObject__AddComponent_object_(pUVar2,MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup);
    if (__this_01 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto label_044fb0b7;
  }
  UnityEngine_UI_LayoutGroup__set_childAlignment
            ((UnityEngine_UI_LayoutGroup_o *)__this_01,4,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth(__this_01,1,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight(__this_01,1,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth(__this_01,0,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight(__this_01,0,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_01,gap,(MethodInfo *)0x0);
  pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_044fb0b7;
  __this_02 = (UnityEngine_UI_ContentSizeFitter_o *)
              UnityEngine_GameObject__GetComponent_object_(pUVar2,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
  if (__this_02 == (UnityEngine_UI_ContentSizeFitter_o *)0x0) {
    pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_044fb0b7;
    __this_02 = (UnityEngine_UI_ContentSizeFitter_o *)
                UnityEngine_GameObject__AddComponent_object_(pUVar2,MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter);
    if (__this_02 == (UnityEngine_UI_ContentSizeFitter_o *)0x0) goto label_044fb0b7;
  }
  UnityEngine_UI_ContentSizeFitter__set_horizontalFit(__this_02,2,(MethodInfo *)0x0);
  UnityEngine_UI_ContentSizeFitter__set_verticalFit(__this_02,2,(MethodInfo *)0x0);
  pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_044fb0b7;
  pIVar3 = UnityEngine_GameObject__GetComponent_object_(pUVar2,MethodInfo_LayoutElement_GetComponent_LayoutElement);
  if (pIVar3 == (Il2CppObject *)0x0) {
    pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) {
label_044fb0b7:
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    pIVar3 = UnityEngine_GameObject__AddComponent_object_(pUVar2,MethodInfo_LayoutElement_AddComponent_LayoutElement);
    if (pIVar3 == (Il2CppObject *)0x0) goto label_044fb0b7;
  }
  value = (System_Action_string__o *)pIVar3->klass->vtable[0x26].method;
  (*pIVar3->klass->vtable[0x26].methodPtr)((__this->fields)._size,pIVar3);
  *(undefined1 *)((long)&(__this->fields)._controlsActive + 1) = 1;
  if (g_data_057aece5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    g_data_057aece5 = '\x01';
    if (*(char *)((long)&(__this->fields)._controlsActive + 1) == '\0') goto label_044fb0a3;
  }
  if ((*(char *)((long)&(__this->fields)._controlsActive + 2) == '\0') &&
     (__this_00 = *ppGVar1, __this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    value = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    System_Action_object____ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__add_Changed(__this_00,value,(MethodInfo *)0x0);
    *(undefined1 *)((long)&(__this->fields)._controlsActive + 2) = 1;
  }
label_044fb0a3:
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Refresh(__this,(MethodInfo *)value);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$SetBadges
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetBadges (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, System_Collections_Generic_IEnumerable_string__o* ids, const MethodInfo* method);
// 0x44fb220

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetBadges
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,
               System_Collections_Generic_IEnumerable_string__o *ids,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_String_array *first;
  System_String_c *pSVar3;
  Il2CppMethodPointer pIVar4;
  bool_conflict bVar5;
  int32_t iVar6;
  System_String_array *second;
  ulong uVar7;
  UnityEngine_GameObject_o *__this_00;
  undefined8 uVar8;
  Il2CppClass *pIVar9;
  Il2CppObject *pIVar10;
  System_String_o *pSVar11;
  SimpleJSONFixed_JSONNode_o *requested;
  Il2CppClass *pIVar12;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *unaff_RBX;
  int iVar13;
  ulong unaff_RBP;
  MethodInfo *pMVar14;
  MethodInfo *method_02;
  Il2CppClass *pIVar15;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *pGVar16;
  System_String_o *value;
  Il2CppClass *unaff_R12;
  undefined8 unaff_R13;
  ulong uVar17;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined1 auVar18 [16];
  undefined4 extraout_var;
  
  if (g_data_057aecdc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_SequenceEqual_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aecdc = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  second = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__OrderedBadgeIds(ids,(MethodInfo *)0x0);
  first = (__this->fields)._last;
  if (first == (System_String_array *)0x0) {
label_044fb2be:
    (__this->fields)._last = second;
    uVar8 = il2cpp_runtime_helper_022b4080(&(__this->fields)._last,second);
    goto Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Rebuild;
  }
  bVar5 = System_Linq_Enumerable__SequenceEqual_object_
                    ((System_Collections_Generic_IEnumerable_TSource__o *)first,
                     (System_Collections_Generic_IEnumerable_TSource__o *)second,MethodInfo_Boolean_SequenceEqual_String);
  uVar7 = CONCAT44(extraout_var,bVar5);
  if ((char)bVar5 == '\0') goto label_044fb2be;
  bVar1 = *(byte *)((long)&(__this->fields)._controlsActive + 3);
  pGVar16 = __this;
Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetActive:
  *(ulong *)((long)register0x00000020 + -8) = unaff_RBP;
  *(Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(ulong *)((long)register0x00000020 + -0x18) = uVar7;
  if (g_data_057aece2 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44fb2fd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aece2 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44fb31c;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44fb328;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar5 == '\0') || ((char)(pGVar16->fields)._controlsActive == '\0')) {
    return;
  }
  second = (System_String_array *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44fb33c;
  __this = pGVar16;
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pGVar16,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,(uint)bVar1,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44fb361;
  uVar8 = il2cpp_runtime_helper_022b2c90();
  unaff_RBX = pGVar16;
  register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
  unaff_RBP = (ulong)bVar1;
Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Rebuild:
  *(ulong *)((long)register0x00000020 + -8) = unaff_RBP;
  *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R15;
  *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_R14;
  *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R13;
  *(Il2CppClass **)((long)register0x00000020 + -0x28) = unaff_R12;
  *(Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o **)((long)register0x00000020 + -0x30) = unaff_RBX;
  *(undefined8 *)((long)register0x00000020 + -0x38) = uVar8;
  if (g_data_057aece1 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44fb396;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSpriteLoader);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44fb3a2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aece1 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44fb3c1;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar12 = (Il2CppClass *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44fb3cd;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44fb3e8;
  pGVar16 = __this;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Clear(__this,(MethodInfo *)pIVar12);
  if (second == (System_String_array *)0x0) goto label_044fb4ce;
  uVar7 = second->max_length;
  if ((int)uVar7 < 1) {
    iVar13 = 0;
label_044fb4a6:
    bVar1 = 0 < iVar13;
    *(bool *)((long)&(__this->fields)._controlsActive + 3) = 0 < iVar13;
    unaff_RBX = *(Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o **)((long)register0x00000020 + -0x30);
    unaff_R12 = *(Il2CppClass **)((long)register0x00000020 + -0x28);
    unaff_R13 = *(undefined8 *)((long)register0x00000020 + -0x20);
    unaff_R14 = *(undefined8 *)((long)register0x00000020 + -0x18);
    unaff_R15 = *(undefined8 *)((long)register0x00000020 + -0x10);
    unaff_RBP = *(ulong *)((long)register0x00000020 + -8);
    pGVar16 = __this;
    goto Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetActive;
  }
  iVar13 = 0;
  uVar17 = 0;
  if ((uVar7 & 0xffffffff) != 0) {
    while( true ) {
      unaff_R12 = (Il2CppClass *)second->m_Items[uVar17];
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44fb43e;
      pSVar11 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__BadgeIcon
                          ((System_String_o *)unaff_R12,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GisketchSpriteLoader + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44fb459;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44fb463;
      unaff_RBX = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)
                  Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load(pSVar11,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44fb47e;
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar12 = (Il2CppClass *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44fb48a;
      pGVar16 = unaff_RBX;
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44fb49c;
        pIVar12 = unaff_R12;
        pGVar16 = __this;
        Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__AddIcon
                  (__this,(System_String_o *)unaff_R12,(UnityEngine_Sprite_o *)unaff_RBX,in_RCX);
        iVar13 = iVar13 + 1;
      }
      uVar17 = uVar17 + 1;
      uVar2 = (uint)second->max_length;
      uVar7 = (ulong)uVar2;
      in_RCX = (MethodInfo *)(long)(int)uVar2;
      if ((long)in_RCX <= (long)uVar17) break;
      if (uVar2 <= uVar17) goto label_044fb4c9;
    }
    goto label_044fb4a6;
  }
label_044fb4c9:
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44fb4ce;
  il2cpp_runtime_helper_022b2ca0();
label_044fb4ce:
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44fb4d3;
  il2cpp_runtime_helper_022b2c90();
  *(System_String_array **)((long)register0x00000020 + -0x40) = second;
  *(Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o **)((long)register0x00000020 + -0x48) = __this;
  *(Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o **)((long)register0x00000020 + -0x50) = unaff_RBX;
  if (g_data_057aecdd == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44fb500;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44fb50c;
    il2cpp_runtime_helper_023445d0(&"badges");
    g_data_057aecdd = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44fb52b;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar9 = (Il2CppClass *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44fb53a;
  pIVar15 = pIVar12;
  bVar5 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pIVar12,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_044fb567:
    if (g_data_057aece7 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44fb57c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BadgeIds_d__27);
      g_data_057aece7 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44fb592;
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_BadgeIds_d__27);
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44fb59f;
    System_Object___ctor(pIVar10,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar10[1].klass = 0xfffffffe;
    pIVar15 = (Il2CppClass *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44fb5ad;
    iVar6 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    *(int32_t *)&pIVar10[2].klass = iVar6;
    if (pIVar10 != (Il2CppObject *)0x0) {
      pIVar15 = (Il2CppClass *)(pIVar10 + 3);
      pIVar10[3].klass = pIVar9;
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44fb5c8;
      il2cpp_runtime_helper_022b4080();
      if (pGVar16 != (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetBadges
                  (pGVar16,(System_Collections_Generic_IEnumerable_string__o *)pIVar10,method_00);
        return;
      }
    }
  }
  else {
    pIVar10 = (Il2CppObject *)0x0;
    if (pIVar12 != (Il2CppClass *)0x0) {
      pSVar3 = (pIVar12->_1).image;
      pMVar14 = (pSVar3->vtable)._7_CompareTo.method;
      pIVar4 = (pSVar3->vtable)._7_CompareTo.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44fb564;
      pIVar9 = (Il2CppClass *)(*pIVar4)(pIVar12,"badges",pMVar14);
      goto label_044fb567;
    }
  }
  *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44fb5e2;
  uVar8 = il2cpp_runtime_helper_022b2c90();
  *(Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o **)((long)register0x00000020 + -0x58) = pGVar16;
  *(Il2CppObject **)((long)register0x00000020 + -0x60) = pIVar10;
  *(undefined8 *)((long)register0x00000020 + -0x68) = uVar8;
  if (g_data_057aece7 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44fb60c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BadgeIds_d__27);
    g_data_057aece7 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44fb622;
  pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_BadgeIds_d__27);
  pMVar14 = (MethodInfo *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44fb62f;
  System_Object___ctor(pIVar10,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar10[1].klass = 0xfffffffe;
  pGVar16 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44fb63d;
  iVar6 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&pIVar10[2].klass = iVar6;
  if (pIVar10 != (Il2CppObject *)0x0) {
    pIVar10[3].klass = pIVar15;
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44fb658;
    il2cpp_runtime_helper_022b4080(pIVar10 + 3,pIVar15);
    return;
  }
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44fb668;
  auVar18 = il2cpp_runtime_helper_022b2c90();
  *(Il2CppClass **)((long)register0x00000020 + -0x70) = pIVar9;
  *(Il2CppClass **)((long)register0x00000020 + -0x78) = pIVar15;
  *(Il2CppClass **)((long)register0x00000020 + -0x80) = unaff_R12;
  *(undefined8 *)((long)register0x00000020 + -0x88) = 0;
  *(long *)((long)register0x00000020 + -0x90) = auVar18._0_8_;
  method_02 = pMVar14;
  if (g_data_057aecde == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x98) = 0x44fb696;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    *(undefined8 *)((long)register0x00000020 + -0x98) = 0x44fb6a2;
    il2cpp_runtime_helper_023445d0(&"badges");
    g_data_057aecde = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x44fb6b1;
  pSVar11 = (System_String_o *)
            Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Parse((System_String_o *)pMVar14,method_02);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x98) = 0x44fb6cc;
    il2cpp_runtime_helper_02337ed0();
  }
  requested = (SimpleJSONFixed_JSONNode_o *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x44fb6db;
  value = pSVar11;
  bVar5 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar11,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    if (pSVar11 == (System_String_o *)0x0) goto label_044fb78f;
    pMVar14 = (((SimpleJSONFixed_JSONNode_c *)pSVar11->klass)->vtable)._7_get_Item.method;
    pIVar4 = (((SimpleJSONFixed_JSONNode_c *)pSVar11->klass)->vtable)._7_get_Item.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x98) = 0x44fb705;
    requested = (SimpleJSONFixed_JSONNode_o *)(*pIVar4)(pSVar11,"badges",pMVar14);
  }
  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x44fb715;
  pIVar12 = (Il2CppClass *)
            Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges_4424170
                      (requested,auVar18._8_8_,(MethodInfo *)0x0);
  if (g_data_057aece7 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x98) = 0x44fb72d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BadgeIds_d__27);
    g_data_057aece7 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x44fb743;
  pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_BadgeIds_d__27);
  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x44fb750;
  System_Object___ctor(pIVar10,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar10[1].klass = 0xfffffffe;
  value = (System_String_o *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x44fb75e;
  iVar6 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&pIVar10[2].klass = iVar6;
  if (pIVar10 != (Il2CppObject *)0x0) {
    pIVar10[3].klass = pIVar12;
    *(undefined8 *)((long)register0x00000020 + -0x98) = 0x44fb779;
    il2cpp_runtime_helper_022b4080(pIVar10 + 3,pIVar12);
    Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetBadges
              (pGVar16,(System_Collections_Generic_IEnumerable_string__o *)pIVar10,method_01);
    return;
  }
label_044fb78f:
  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x44fb794;
  uVar8 = il2cpp_runtime_helper_022b2c90();
  *(Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o **)((long)register0x00000020 + -0x98) = pGVar16;
  *(undefined8 *)((long)register0x00000020 + -0xa0) = 0;
  *(undefined8 *)((long)register0x00000020 + -0xa8) = uVar8;
  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44fb7b1;
  bVar5 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44fb7bf;
    SimpleJSONFixed_JSON__Parse(value,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$SetFromCharacterInfo
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetFromCharacterInfo (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, SimpleJSONFixed_JSONNode_o* info, const MethodInfo* method);
// 0x44fb4e0

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetFromCharacterInfo
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,SimpleJSONFixed_JSONNode_o *info,
               MethodInfo *method)

{
  bool_conflict bVar1;
  int32_t iVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *pIVar4;
  System_String_o *a;
  SimpleJSONFixed_JSONNode_o *requested;
  Il2CppClass *pIVar5;
  MethodInfo *method_00;
  System_Collections_Generic_IEnumerable_string__o *roles;
  MethodInfo *method_01;
  MethodInfo *json;
  MethodInfo *method_02;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this_00;
  System_String_o *value;
  
  if (g_data_057aecdd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"badges");
    g_data_057aecdd = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar3 = (Il2CppClass *)0x0;
  pIVar5 = (Il2CppClass *)info;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(info,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
label_044fb567:
    if (g_data_057aece7 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BadgeIds_d__27);
      g_data_057aece7 = '\x01';
    }
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_BadgeIds_d__27);
    System_Object___ctor(pIVar4,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar4[1].klass = 0xfffffffe;
    pIVar5 = (Il2CppClass *)0x0;
    iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    *(int32_t *)&pIVar4[2].klass = iVar2;
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar5 = (Il2CppClass *)(pIVar4 + 3);
      pIVar4[3].klass = pIVar3;
      il2cpp_runtime_helper_022b4080();
      if (__this != (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetBadges
                  (__this,(System_Collections_Generic_IEnumerable_string__o *)pIVar4,method_00);
        return;
      }
    }
  }
  else if (info != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pIVar3 = (Il2CppClass *)
             (*(info->klass->vtable)._7_get_Item.methodPtr)
                       (info,"badges",(info->klass->vtable)._7_get_Item.method);
    goto label_044fb567;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aece7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BadgeIds_d__27);
    g_data_057aece7 = '\x01';
  }
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_BadgeIds_d__27);
  json = (MethodInfo *)0x0;
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar4[1].klass = 0xfffffffe;
  __this_00 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&pIVar4[2].klass = iVar2;
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar4[3].klass = pIVar5;
    il2cpp_runtime_helper_022b4080(pIVar4 + 3,pIVar5);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  method_02 = json;
  if (g_data_057aecde == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"badges");
    g_data_057aecde = '\x01';
  }
  a = (System_String_o *)
      Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Parse((System_String_o *)json,method_02);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  requested = (SimpleJSONFixed_JSONNode_o *)0x0;
  value = a;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (a == (System_String_o *)0x0) goto label_044fb78f;
    requested = (SimpleJSONFixed_JSONNode_o *)
                (*(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._7_get_Item.methodPtr)
                          (a,"badges",
                           (((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._7_get_Item.method);
  }
  pIVar5 = (Il2CppClass *)
           Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges_4424170
                     (requested,roles,(MethodInfo *)0x0);
  if (g_data_057aece7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BadgeIds_d__27);
    g_data_057aece7 = '\x01';
  }
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_BadgeIds_d__27);
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar4[1].klass = 0xfffffffe;
  value = (System_String_o *)0x0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&pIVar4[2].klass = iVar2;
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar4[3].klass = pIVar5;
    il2cpp_runtime_helper_022b4080(pIVar4 + 3,pIVar5);
    Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetBadges
              (__this_00,(System_Collections_Generic_IEnumerable_string__o *)pIVar4,method_01);
    return;
  }
label_044fb78f:
  il2cpp_runtime_helper_022b2c90();
  bVar1 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    SimpleJSONFixed_JSON__Parse(value,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$SetFromCharacterInfoJson
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetFromCharacterInfoJson (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, System_String_o* json, System_Collections_Generic_IEnumerable_string__o* roles, const MethodInfo* method);
// 0x44fb670

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetFromCharacterInfoJson
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,System_String_o *json,
               System_Collections_Generic_IEnumerable_string__o *roles,MethodInfo *method)

{
  bool_conflict bVar1;
  int32_t iVar2;
  System_String_o *a;
  SimpleJSONFixed_JSONNode_o *requested;
  Il2CppClass *pIVar3;
  Il2CppObject *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_o *value;
  
  method_01 = (MethodInfo *)json;
  if (g_data_057aecde == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"badges");
    g_data_057aecde = '\x01';
  }
  a = (System_String_o *)Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Parse(json,method_01);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  requested = (SimpleJSONFixed_JSONNode_o *)0x0;
  value = a;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (a == (System_String_o *)0x0) goto label_044fb78f;
    requested = (SimpleJSONFixed_JSONNode_o *)
                (*(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._7_get_Item.methodPtr)
                          (a,"badges",
                           (((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._7_get_Item.method);
  }
  pIVar3 = (Il2CppClass *)
           Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges_4424170
                     (requested,roles,(MethodInfo *)0x0);
  if (g_data_057aece7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BadgeIds_d__27);
    g_data_057aece7 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_BadgeIds_d__27);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0xfffffffe;
  value = (System_String_o *)0x0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this_00[2].klass = iVar2;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[3].klass = pIVar3;
    il2cpp_runtime_helper_022b4080(__this_00 + 3,pIVar3);
    Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetBadges
              (__this,(System_Collections_Generic_IEnumerable_string__o *)__this_00,method_00);
    return;
  }
label_044fb78f:
  il2cpp_runtime_helper_022b2c90();
  bVar1 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    SimpleJSONFixed_JSON__Parse(value,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Refresh (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, const MethodInfo* method);
// 0x44fb170

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
  
  if (g_data_057aecdf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aecdf = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar1 == '\0') && (*(char *)((long)&(__this->fields)._controlsActive + 1) != '\0')) {
    pMVar3 = (MethodInfo *)(__this->fields)._stateKey;
    bVar1 = System_String__IsNullOrEmpty((System_String_o *)pMVar3,(MethodInfo *)0x0);
    if (((char)bVar1 == '\0') &&
       (__this_00 = (__this->fields)._state, pMVar3 = (MethodInfo *)0x0,
       __this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
      pMVar3 = (MethodInfo *)(__this->fields)._stateKey;
      json = Gisketch_Aottg2UI_State_GisketchUIState__Get
                       (__this_00,(System_String_o *)pMVar3,
                        (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
      pSVar2 = Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Parse(json,pMVar3);
      Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetFromCharacterInfo(__this,pSVar2,method_00);
      return;
    }
    pSVar2 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Current(pMVar3);
    Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetFromCharacterInfo(__this,pSVar2,method_01);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$OnEnable
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__OnEnable (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, const MethodInfo* method);
// 0x44fb840

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__OnEnable
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  
  if (g_data_057aece5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    g_data_057aece5 = '\x01';
  }
  if (((*(char *)((long)&(__this->fields)._controlsActive + 1) != '\0') &&
      (*(char *)((long)&(__this->fields)._controlsActive + 2) == '\0')) &&
     (__this_00 = (__this->fields)._state, __this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    method = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    System_Action_object____ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__add_Changed
              (__this_00,(System_Action_string__o *)method,(MethodInfo *)0x0);
    *(undefined1 *)((long)&(__this->fields)._controlsActive + 2) = 1;
  }
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Refresh(__this,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__OnDisable (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, const MethodInfo* method);
// 0x44fb8d0

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__OnDisable
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  System_Action_string__o *value;
  
  if (g_data_057aece6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    g_data_057aece6 = '\x01';
  }
  if ((*(char *)((long)&(__this->fields)._controlsActive + 2) != '\0') &&
     (__this_00 = (__this->fields)._state, __this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    value = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    System_Action_object____ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(__this_00,value,(MethodInfo *)0x0);
    *(undefined1 *)((long)&(__this->fields)._controlsActive + 2) = 0;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__OnDestroy (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, const MethodInfo* method);
// 0x44fb9d0

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  System_Action_string__o *value;
  
  if (g_data_057aece6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    g_data_057aece6 = '\x01';
  }
  if ((*(char *)((long)&(__this->fields)._controlsActive + 2) != '\0') &&
     (__this_00 = (__this->fields)._state, __this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    value = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    System_Action_object____ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(__this_00,value,(MethodInfo *)0x0);
    *(undefined1 *)((long)&(__this->fields)._controlsActive + 2) = 0;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$OnStateChanged
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__OnStateChanged (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, System_String_o* key, const MethodInfo* method);
// 0x44fba50

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__OnStateChanged
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,System_String_o *key,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  bool_conflict bVar1;
  System_Action_string__o *value;
  MethodInfo *method_00;
  
  if (g_data_057aece0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aece0 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar1 == '\0') && (*(char *)((long)&(__this->fields)._controlsActive + 1) != '\0')) {
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
  if (g_data_057aece6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    g_data_057aece6 = '\x01';
  }
  if ((*(char *)((long)&(__this->fields)._controlsActive + 2) != '\0') &&
     (__this_00 = (__this->fields)._state, __this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    value = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    System_Action_object____ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(__this_00,value,(MethodInfo *)0x0);
    *(undefined1 *)((long)&(__this->fields)._controlsActive + 2) = 0;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$Rebuild
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Rebuild (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, System_String_array* ids, const MethodInfo* method);
// 0x44fb370

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Rebuild
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,System_String_array *ids,
               MethodInfo *method)

{
  uint uVar1;
  System_String_c *pSVar2;
  Il2CppMethodPointer pIVar3;
  bool_conflict bVar4;
  int32_t iVar5;
  UnityEngine_GameObject_o *__this_00;
  undefined8 in_RAX;
  ulong uVar6;
  Il2CppClass *pIVar7;
  Il2CppObject *pIVar8;
  undefined8 uVar9;
  System_String_o *pSVar10;
  SimpleJSONFixed_JSONNode_o *requested;
  Il2CppClass *pIVar11;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *unaff_RBX;
  int iVar12;
  ulong unaff_RBP;
  MethodInfo *pMVar13;
  MethodInfo *method_02;
  Il2CppClass *pIVar14;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *pGVar15;
  System_String_o *value;
  Il2CppClass *unaff_R12;
  undefined8 unaff_R13;
  ulong uVar16;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined1 auVar17 [16];
  
  while( true ) {
    *(ulong *)((long)register0x00000020 + -8) = unaff_RBP;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R15;
    *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R13;
    *(Il2CppClass **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o **)((long)register0x00000020 + -0x30) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x38) = in_RAX;
    if (g_data_057aece1 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44fb396;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSpriteLoader);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44fb3a2;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aece1 = '\x01';
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44fb3c1;
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar11 = (Il2CppClass *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44fb3cd;
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44fb3e8;
    pGVar15 = __this;
    Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Clear(__this,(MethodInfo *)pIVar11);
    if (ids == (System_String_array *)0x0) break;
    uVar6 = ids->max_length;
    if ((int)uVar6 < 1) {
      iVar12 = 0;
    }
    else {
      iVar12 = 0;
      uVar16 = 0;
      if ((uVar6 & 0xffffffff) == 0) {
label_044fb4c9:
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44fb4ce;
        il2cpp_runtime_helper_022b2ca0();
        break;
      }
      while( true ) {
        unaff_R12 = (Il2CppClass *)ids->m_Items[uVar16];
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44fb43e;
        pSVar10 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__BadgeIcon
                            ((System_String_o *)unaff_R12,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_GisketchSpriteLoader + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44fb459;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44fb463;
        unaff_RBX = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)
                    Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load(pSVar10,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44fb47e;
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar11 = (Il2CppClass *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44fb48a;
        pGVar15 = unaff_RBX;
        bVar4 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44fb49c;
          pIVar11 = unaff_R12;
          pGVar15 = __this;
          Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__AddIcon
                    (__this,(System_String_o *)unaff_R12,(UnityEngine_Sprite_o *)unaff_RBX,in_RCX);
          iVar12 = iVar12 + 1;
        }
        uVar16 = uVar16 + 1;
        uVar1 = (uint)ids->max_length;
        uVar6 = (ulong)uVar1;
        in_RCX = (MethodInfo *)(long)(int)uVar1;
        if ((long)in_RCX <= (long)uVar16) break;
        if (uVar1 <= uVar16) goto label_044fb4c9;
      }
    }
    unaff_RBP = (ulong)(0 < iVar12);
    *(bool *)((long)&(__this->fields)._controlsActive + 3) = 0 < iVar12;
    unaff_R12 = *(Il2CppClass **)((long)register0x00000020 + -0x28);
    unaff_R13 = *(undefined8 *)((long)register0x00000020 + -0x20);
    unaff_R14 = *(undefined8 *)((long)register0x00000020 + -0x18);
    unaff_R15 = *(undefined8 *)((long)register0x00000020 + -0x10);
    *(undefined8 *)((long)register0x00000020 + -8) = *(undefined8 *)((long)register0x00000020 + -8);
    *(undefined8 *)((long)register0x00000020 + -0x10) = *(undefined8 *)((long)register0x00000020 + -0x30);
    *(ulong *)((long)register0x00000020 + -0x18) = uVar6;
    if (g_data_057aece2 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44fb2fd;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aece2 = '\x01';
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44fb31c;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44fb328;
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (((char)bVar4 == '\0') || ((char)(__this->fields)._controlsActive == '\0')) {
      return;
    }
    ids = (System_String_array *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44fb33c;
    pGVar15 = __this;
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,(uint)(0 < iVar12),(MethodInfo *)0x0);
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44fb361;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    unaff_RBX = __this;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    __this = pGVar15;
  }
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44fb4d3;
  il2cpp_runtime_helper_022b2c90();
  *(System_String_array **)((long)register0x00000020 + -0x40) = ids;
  *(Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o **)((long)register0x00000020 + -0x48) = __this;
  *(Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o **)((long)register0x00000020 + -0x50) = unaff_RBX;
  if (g_data_057aecdd == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44fb500;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44fb50c;
    il2cpp_runtime_helper_023445d0(&"badges");
    g_data_057aecdd = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44fb52b;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar7 = (Il2CppClass *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44fb53a;
  pIVar14 = pIVar11;
  bVar4 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pIVar11,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
label_044fb567:
    if (g_data_057aece7 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44fb57c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BadgeIds_d__27);
      g_data_057aece7 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44fb592;
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_BadgeIds_d__27);
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44fb59f;
    System_Object___ctor(pIVar8,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar8[1].klass = 0xfffffffe;
    pIVar14 = (Il2CppClass *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44fb5ad;
    iVar5 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    *(int32_t *)&pIVar8[2].klass = iVar5;
    if (pIVar8 != (Il2CppObject *)0x0) {
      pIVar14 = (Il2CppClass *)(pIVar8 + 3);
      pIVar8[3].klass = pIVar7;
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44fb5c8;
      il2cpp_runtime_helper_022b4080();
      if (pGVar15 != (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetBadges
                  (pGVar15,(System_Collections_Generic_IEnumerable_string__o *)pIVar8,method_00);
        return;
      }
    }
  }
  else {
    pIVar8 = (Il2CppObject *)0x0;
    if (pIVar11 != (Il2CppClass *)0x0) {
      pSVar2 = (pIVar11->_1).image;
      pMVar13 = (pSVar2->vtable)._7_CompareTo.method;
      pIVar3 = (pSVar2->vtable)._7_CompareTo.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44fb564;
      pIVar7 = (Il2CppClass *)(*pIVar3)(pIVar11,"badges",pMVar13);
      goto label_044fb567;
    }
  }
  *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44fb5e2;
  uVar9 = il2cpp_runtime_helper_022b2c90();
  *(Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o **)((long)register0x00000020 + -0x58) = pGVar15;
  *(Il2CppObject **)((long)register0x00000020 + -0x60) = pIVar8;
  *(undefined8 *)((long)register0x00000020 + -0x68) = uVar9;
  if (g_data_057aece7 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44fb60c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BadgeIds_d__27);
    g_data_057aece7 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44fb622;
  pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_BadgeIds_d__27);
  pMVar13 = (MethodInfo *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44fb62f;
  System_Object___ctor(pIVar8,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar8[1].klass = 0xfffffffe;
  pGVar15 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44fb63d;
  iVar5 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&pIVar8[2].klass = iVar5;
  if (pIVar8 != (Il2CppObject *)0x0) {
    pIVar8[3].klass = pIVar14;
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44fb658;
    il2cpp_runtime_helper_022b4080(pIVar8 + 3,pIVar14);
    return;
  }
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44fb668;
  auVar17 = il2cpp_runtime_helper_022b2c90();
  *(Il2CppClass **)((long)register0x00000020 + -0x70) = pIVar7;
  *(Il2CppClass **)((long)register0x00000020 + -0x78) = pIVar14;
  *(Il2CppClass **)((long)register0x00000020 + -0x80) = unaff_R12;
  *(undefined8 *)((long)register0x00000020 + -0x88) = 0;
  *(long *)((long)register0x00000020 + -0x90) = auVar17._0_8_;
  method_02 = pMVar13;
  if (g_data_057aecde == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x98) = 0x44fb696;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    *(undefined8 *)((long)register0x00000020 + -0x98) = 0x44fb6a2;
    il2cpp_runtime_helper_023445d0(&"badges");
    g_data_057aecde = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x44fb6b1;
  pSVar10 = (System_String_o *)
            Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Parse((System_String_o *)pMVar13,method_02);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x98) = 0x44fb6cc;
    il2cpp_runtime_helper_02337ed0();
  }
  requested = (SimpleJSONFixed_JSONNode_o *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x44fb6db;
  value = pSVar10;
  bVar4 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (pSVar10 == (System_String_o *)0x0) goto label_044fb78f;
    pMVar13 = (((SimpleJSONFixed_JSONNode_c *)pSVar10->klass)->vtable)._7_get_Item.method;
    pIVar3 = (((SimpleJSONFixed_JSONNode_c *)pSVar10->klass)->vtable)._7_get_Item.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x98) = 0x44fb705;
    requested = (SimpleJSONFixed_JSONNode_o *)(*pIVar3)(pSVar10,"badges",pMVar13);
  }
  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x44fb715;
  pIVar11 = (Il2CppClass *)
            Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges_4424170
                      (requested,auVar17._8_8_,(MethodInfo *)0x0);
  if (g_data_057aece7 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x98) = 0x44fb72d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BadgeIds_d__27);
    g_data_057aece7 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x44fb743;
  pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_BadgeIds_d__27);
  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x44fb750;
  System_Object___ctor(pIVar8,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar8[1].klass = 0xfffffffe;
  value = (System_String_o *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x44fb75e;
  iVar5 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&pIVar8[2].klass = iVar5;
  if (pIVar8 != (Il2CppObject *)0x0) {
    pIVar8[3].klass = pIVar11;
    *(undefined8 *)((long)register0x00000020 + -0x98) = 0x44fb779;
    il2cpp_runtime_helper_022b4080(pIVar8 + 3,pIVar11);
    Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetBadges
              (pGVar15,(System_Collections_Generic_IEnumerable_string__o *)pIVar8,method_01);
    return;
  }
label_044fb78f:
  *(undefined8 *)((long)register0x00000020 + -0x98) = 0x44fb794;
  uVar9 = il2cpp_runtime_helper_022b2c90();
  *(Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o **)((long)register0x00000020 + -0x98) = pGVar15;
  *(undefined8 *)((long)register0x00000020 + -0xa0) = 0;
  *(undefined8 *)((long)register0x00000020 + -0xa8) = uVar9;
  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44fb7b1;
  bVar4 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44fb7bf;
    SimpleJSONFixed_JSON__Parse(value,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$SetActive
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetActive (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, bool active, const MethodInfo* method);
// 0x44fb2e0

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetActive
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,bool_conflict active,
               MethodInfo *method)

{
  uint uVar1;
  System_String_c *pSVar2;
  Il2CppMethodPointer pIVar3;
  bool_conflict bVar4;
  int32_t iVar5;
  ulong in_RAX;
  UnityEngine_GameObject_o *__this_00;
  undefined8 uVar6;
  Il2CppClass *pIVar7;
  Il2CppObject *pIVar8;
  System_String_o *pSVar9;
  SimpleJSONFixed_JSONNode_o *requested;
  Il2CppClass *pIVar10;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined8 unaff_RBX;
  int iVar11;
  undefined8 unaff_RBP;
  long lVar12;
  MethodInfo *pMVar13;
  MethodInfo *method_02;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this_01;
  Il2CppClass *pIVar14;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *pGVar15;
  System_String_o *value;
  Il2CppClass *unaff_R12;
  undefined8 unaff_R13;
  ulong uVar16;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined1 auVar17 [16];
  
code_r0x044fb2e0:
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
  *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(ulong *)((long)register0x00000020 + -0x18) = in_RAX;
  if (g_data_057aece2 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44fb2fd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aece2 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44fb31c;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44fb328;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar4 == '\0') || ((char)(__this->fields)._controlsActive == '\0')) {
    return;
  }
  lVar12 = 0;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44fb33c;
  pGVar15 = __this;
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,active & 0xff,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44fb361;
  uVar6 = il2cpp_runtime_helper_022b2c90();
  *(ulong *)((long)register0x00000020 + -0x20) = (ulong)(uint)active;
  *(undefined8 *)((long)register0x00000020 + -0x28) = unaff_R15;
  *(undefined8 *)((long)register0x00000020 + -0x30) = unaff_R14;
  *(undefined8 *)((long)register0x00000020 + -0x38) = unaff_R13;
  *(Il2CppClass **)((long)register0x00000020 + -0x40) = unaff_R12;
  *(Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o **)((long)register0x00000020 + -0x48) = __this;
  *(undefined8 *)((long)register0x00000020 + -0x50) = uVar6;
  if (g_data_057aece1 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44fb396;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSpriteLoader);
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44fb3a2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aece1 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44fb3c1;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar10 = (Il2CppClass *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44fb3cd;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44fb3e8;
  __this_01 = pGVar15;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Clear(pGVar15,(MethodInfo *)pIVar10);
  if (lVar12 == 0) goto label_044fb4ce;
  in_RAX = *(ulong *)(lVar12 + 0x18);
  if ((int)in_RAX < 1) {
    iVar11 = 0;
label_044fb4a6:
    active = (bool_conflict)(0 < iVar11);
    *(bool *)((long)&(pGVar15->fields)._controlsActive + 3) = 0 < iVar11;
    unaff_RBX = *(undefined8 *)((long)register0x00000020 + -0x48);
    unaff_R12 = *(Il2CppClass **)((long)register0x00000020 + -0x40);
    unaff_R13 = *(undefined8 *)((long)register0x00000020 + -0x38);
    unaff_R14 = *(undefined8 *)((long)register0x00000020 + -0x30);
    unaff_R15 = *(undefined8 *)((long)register0x00000020 + -0x28);
    unaff_RBP = *(undefined8 *)((long)register0x00000020 + -0x20);
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    __this = pGVar15;
    goto code_r0x044fb2e0;
  }
  iVar11 = 0;
  uVar16 = 0;
  if ((in_RAX & 0xffffffff) != 0) {
    while( true ) {
      unaff_R12 = *(Il2CppClass **)(lVar12 + 0x20 + uVar16 * 8);
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44fb43e;
      pSVar9 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__BadgeIcon
                         ((System_String_o *)unaff_R12,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GisketchSpriteLoader + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44fb459;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44fb463;
      __this = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)
               Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load(pSVar9,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44fb47e;
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar10 = (Il2CppClass *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44fb48a;
      __this_01 = __this;
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44fb49c;
        pIVar10 = unaff_R12;
        __this_01 = pGVar15;
        Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__AddIcon
                  (pGVar15,(System_String_o *)unaff_R12,(UnityEngine_Sprite_o *)__this,in_RCX);
        iVar11 = iVar11 + 1;
      }
      uVar16 = uVar16 + 1;
      uVar1 = *(uint *)(lVar12 + 0x18);
      in_RAX = (ulong)uVar1;
      in_RCX = (MethodInfo *)(long)(int)uVar1;
      if ((long)in_RCX <= (long)uVar16) break;
      if (uVar1 <= uVar16) goto label_044fb4c9;
    }
    goto label_044fb4a6;
  }
label_044fb4c9:
  *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44fb4ce;
  il2cpp_runtime_helper_022b2ca0();
label_044fb4ce:
  *(undefined8 *)((long)register0x00000020 + -0x58) = 0x44fb4d3;
  il2cpp_runtime_helper_022b2c90();
  *(long *)((long)register0x00000020 + -0x58) = lVar12;
  *(Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o **)((long)register0x00000020 + -0x60) = pGVar15;
  *(Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o **)((long)register0x00000020 + -0x68) = __this;
  if (g_data_057aecdd == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44fb500;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44fb50c;
    il2cpp_runtime_helper_023445d0(&"badges");
    g_data_057aecdd = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44fb52b;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar7 = (Il2CppClass *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44fb53a;
  pIVar14 = pIVar10;
  bVar4 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pIVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
label_044fb567:
    if (g_data_057aece7 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44fb57c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BadgeIds_d__27);
      g_data_057aece7 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44fb592;
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_BadgeIds_d__27);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44fb59f;
    System_Object___ctor(pIVar8,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar8[1].klass = 0xfffffffe;
    pIVar14 = (Il2CppClass *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44fb5ad;
    iVar5 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    *(int32_t *)&pIVar8[2].klass = iVar5;
    if (pIVar8 != (Il2CppObject *)0x0) {
      pIVar14 = (Il2CppClass *)(pIVar8 + 3);
      pIVar8[3].klass = pIVar7;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44fb5c8;
      il2cpp_runtime_helper_022b4080();
      if (__this_01 != (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetBadges
                  (__this_01,(System_Collections_Generic_IEnumerable_string__o *)pIVar8,method_00);
        return;
      }
    }
  }
  else {
    pIVar8 = (Il2CppObject *)0x0;
    if (pIVar10 != (Il2CppClass *)0x0) {
      pSVar2 = (pIVar10->_1).image;
      pMVar13 = (pSVar2->vtable)._7_CompareTo.method;
      pIVar3 = (pSVar2->vtable)._7_CompareTo.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44fb564;
      pIVar7 = (Il2CppClass *)(*pIVar3)(pIVar10,"badges",pMVar13);
      goto label_044fb567;
    }
  }
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x44fb5e2;
  uVar6 = il2cpp_runtime_helper_022b2c90();
  *(Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o **)((long)register0x00000020 + -0x70) = __this_01;
  *(Il2CppObject **)((long)register0x00000020 + -0x78) = pIVar8;
  *(undefined8 *)((long)register0x00000020 + -0x80) = uVar6;
  if (g_data_057aece7 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x44fb60c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BadgeIds_d__27);
    g_data_057aece7 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x88) = 0x44fb622;
  pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_BadgeIds_d__27);
  pMVar13 = (MethodInfo *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x88) = 0x44fb62f;
  System_Object___ctor(pIVar8,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar8[1].klass = 0xfffffffe;
  pGVar15 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x88) = 0x44fb63d;
  iVar5 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&pIVar8[2].klass = iVar5;
  if (pIVar8 != (Il2CppObject *)0x0) {
    pIVar8[3].klass = pIVar14;
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x44fb658;
    il2cpp_runtime_helper_022b4080(pIVar8 + 3,pIVar14);
    return;
  }
  *(undefined8 *)((long)register0x00000020 + -0x88) = 0x44fb668;
  auVar17 = il2cpp_runtime_helper_022b2c90();
  *(Il2CppClass **)((long)register0x00000020 + -0x88) = pIVar7;
  *(Il2CppClass **)((long)register0x00000020 + -0x90) = pIVar14;
  *(Il2CppClass **)((long)register0x00000020 + -0x98) = unaff_R12;
  *(undefined8 *)((long)register0x00000020 + -0xa0) = 0;
  *(long *)((long)register0x00000020 + -0xa8) = auVar17._0_8_;
  method_02 = pMVar13;
  if (g_data_057aecde == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44fb696;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44fb6a2;
    il2cpp_runtime_helper_023445d0(&"badges");
    g_data_057aecde = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44fb6b1;
  pSVar9 = (System_String_o *)
           Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Parse((System_String_o *)pMVar13,method_02);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44fb6cc;
    il2cpp_runtime_helper_02337ed0();
  }
  requested = (SimpleJSONFixed_JSONNode_o *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44fb6db;
  value = pSVar9;
  bVar4 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar9,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (pSVar9 == (System_String_o *)0x0) goto label_044fb78f;
    pMVar13 = (((SimpleJSONFixed_JSONNode_c *)pSVar9->klass)->vtable)._7_get_Item.method;
    pIVar3 = (((SimpleJSONFixed_JSONNode_c *)pSVar9->klass)->vtable)._7_get_Item.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44fb705;
    requested = (SimpleJSONFixed_JSONNode_o *)(*pIVar3)(pSVar9,"badges",pMVar13);
  }
  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44fb715;
  pIVar10 = (Il2CppClass *)
            Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges_4424170
                      (requested,auVar17._8_8_,(MethodInfo *)0x0);
  if (g_data_057aece7 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44fb72d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BadgeIds_d__27);
    g_data_057aece7 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44fb743;
  pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_BadgeIds_d__27);
  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44fb750;
  System_Object___ctor(pIVar8,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar8[1].klass = 0xfffffffe;
  value = (System_String_o *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44fb75e;
  iVar5 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&pIVar8[2].klass = iVar5;
  if (pIVar8 != (Il2CppObject *)0x0) {
    pIVar8[3].klass = pIVar10;
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44fb779;
    il2cpp_runtime_helper_022b4080(pIVar8 + 3,pIVar10);
    Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetBadges
              (pGVar15,(System_Collections_Generic_IEnumerable_string__o *)pIVar8,method_01);
    return;
  }
label_044fb78f:
  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x44fb794;
  uVar6 = il2cpp_runtime_helper_022b2c90();
  *(Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o **)((long)register0x00000020 + -0xb0) = pGVar15;
  *(undefined8 *)((long)register0x00000020 + -0xb8) = 0;
  *(undefined8 *)((long)register0x00000020 + -0xc0) = uVar6;
  *(undefined8 *)((long)register0x00000020 + -200) = 0x44fb7b1;
  bVar4 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -200) = 0x44fb7bf;
    SimpleJSONFixed_JSON__Parse(value,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$AddIcon
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__AddIcon (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, System_String_o* id, UnityEngine_Sprite_o* sprite, const MethodInfo* method);
// 0x44fbcb0

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__AddIcon
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,System_String_o *id,
               UnityEngine_Sprite_o *sprite,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  System_Type_array *components;
  System_Type_o *pSVar4;
  long lVar5;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_Image_o *__this_02;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this_03;
  Il2CppObject *pIVar6;
  undefined8 extraout_RDX;
  undefined4 uVar7;
  
  if (g_data_057aece3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_CanvasRenderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchTooltipTrigger_AddComponent_GisketchTooltipTrigg);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"AoTTG Badge ");
    g_data_057aece3 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  pSVar3 = System_String__Concat_3ae5ba0("AoTTG Badge ",id,(MethodInfo *)0x0);
  components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_044fc071:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (pSVar4 != (System_Type_o *)0x0) {
      lVar5 = il2cpp_runtime_helper_023051f0(pSVar4);
      if (lVar5 == 0) goto label_044fc07b;
    }
    if ((int)components->max_length != 0) {
      components->m_Items[0] = pSVar4;
      il2cpp_runtime_helper_022b4080(components->m_Items);
      pSVar4 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
      if (pSVar4 != (System_Type_o *)0x0) {
        lVar5 = il2cpp_runtime_helper_023051f0(pSVar4);
        if (lVar5 == 0) goto label_044fc07b;
      }
      if (1 < (uint)components->max_length) {
        components->m_Items[1] = pSVar4;
        il2cpp_runtime_helper_022b4080(components->m_Items + 1);
        pSVar4 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
        if (pSVar4 != (System_Type_o *)0x0) {
          lVar5 = il2cpp_runtime_helper_023051f0(pSVar4);
          if (lVar5 == 0) goto label_044fc07b;
        }
        if (2 < (uint)components->max_length) {
          components->m_Items[2] = pSVar4;
          il2cpp_runtime_helper_022b4080(components->m_Items + 2);
          pSVar4 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
          if (pSVar4 != (System_Type_o *)0x0) {
            lVar5 = il2cpp_runtime_helper_023051f0(pSVar4);
            if (lVar5 == 0) goto label_044fc07b;
          }
          if (3 < (uint)components->max_length) {
            components->m_Items[3] = pSVar4;
            il2cpp_runtime_helper_022b4080(components->m_Items + 3,pSVar4);
            __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
            UnityEngine_GameObject___ctor_4dfc440(__this_00,pSVar3,components,(MethodInfo *)0x0);
            if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
              __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
              parent = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (__this_01 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__SetParent_4e09e30(__this_01,parent,0,(MethodInfo *)0x0);
                __this_02 = (UnityEngine_UI_Image_o *)
                            UnityEngine_GameObject__GetComponent_object_(__this_00,MethodInfo_Image_GetComponent_Image);
                if (__this_02 != (UnityEngine_UI_Image_o *)0x0) {
                  UnityEngine_UI_Image__set_sprite(__this_02,sprite,(MethodInfo *)0x0);
                  UnityEngine_UI_Image__set_preserveAspect(__this_02,1,(MethodInfo *)0x0);
                  (*(__this_02->klass->vtable)._25_set_raycastTarget.methodPtr)
                            (__this_02,1,(__this_02->klass->vtable)._25_set_raycastTarget.method);
                  (*(__this_02->klass->vtable)._23_set_color.methodPtr)
                            (0x3f800000,0x3f800000,__this_02,(__this_02->klass->vtable)._23_set_color.method);
                  __this_03 = (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)
                              UnityEngine_GameObject__AddComponent_object_(__this_00,MethodInfo_GisketchTooltipTrigger_AddComponent_GisketchTooltipTrigg);
                  pSVar3 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__BadgeLabel
                                     (id,(MethodInfo *)0x0);
                  if (__this_03 != (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0) {
                    Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__Setup
                              (__this_03,pSVar3,(Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0,
                               (MethodInfo *)0x0);
                    pIVar6 = UnityEngine_GameObject__GetComponent_object_(__this_00,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                    if (pIVar6 != (Il2CppObject *)0x0) {
                      (*pIVar6->klass->vtable[0x24].methodPtr)
                                ((__this->fields)._size,pIVar6,pIVar6->klass->vtable[0x24].method);
                      vtableDispatch = pIVar6->klass->vtable[0x26].methodPtr;
                      (*vtableDispatch)
                                ((__this->fields)._size,pIVar6,pIVar6->klass->vtable[0x26].method,extraout_RDX
                                 ,vtableDispatch);
                      return;
                    }
                  }
                }
              }
            }
            goto label_044fc071;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_044fc07b:
  pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_0231b270();
  uVar7 = 0;
  il2cpp_runtime_helper_022b2b10();
  System_Object___ctor(pIVar6,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar6[1].klass = uVar7;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&pIVar6[2].klass = iVar2;
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$Clear
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Clear (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, const MethodInfo* method);
// 0x44fbb50

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Clear
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  uint index;
  int32_t iVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Object_o *obj;
  System_String_o *pSVar4;
  System_Type_array *components;
  System_Type_o *pSVar5;
  long lVar6;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_Image_o *__this_01;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this_02;
  System_String_o *pSVar7;
  Il2CppObject *pIVar8;
  UnityEngine_Sprite_o *value;
  undefined8 extraout_RDX;
  undefined4 uVar9;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *x;
  
  if (g_data_057aece4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aece4 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  pSVar7 = (System_String_o *)0x0;
  x = __this;
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
    index = UnityEngine_Transform__get_childCount(pUVar3,(MethodInfo *)0x0);
    do {
      index = index - 1;
      if ((int)index < 0) {
        return;
      }
      while( true ) {
        pSVar4 = (System_String_o *)(ulong)index;
        pSVar7 = (System_String_o *)0x0;
        x = __this;
        pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_044fbca3;
        pUVar3 = UnityEngine_Transform__GetChild(pUVar3,index,(MethodInfo *)0x0);
        pSVar7 = pSVar4;
        if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar7 = pSVar4;
        }
        x = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0;
        bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_044fbca3;
        obj = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if ((char)bVar1 == '\0') break;
        UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
        index = index - 1;
        if ((int)index < 0) {
          return;
        }
      }
      UnityEngine_Object__DestroyImmediate_4e01e00(obj,(MethodInfo *)0x0);
    } while( true );
  }
label_044fbca3:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aece3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_CanvasRenderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchTooltipTrigger_AddComponent_GisketchTooltipTrigg);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"AoTTG Badge ");
    g_data_057aece3 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  pSVar4 = System_String__Concat_3ae5ba0("AoTTG Badge ",pSVar7,(MethodInfo *)0x0);
  components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_044fc071:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((pSVar5 != (System_Type_o *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pSVar5), lVar6 == 0))
    goto label_044fc07b;
    if ((int)components->max_length != 0) {
      components->m_Items[0] = pSVar5;
      il2cpp_runtime_helper_022b4080(components->m_Items);
      pSVar5 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
      if ((pSVar5 != (System_Type_o *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pSVar5), lVar6 == 0))
      goto label_044fc07b;
      if (1 < (uint)components->max_length) {
        components->m_Items[1] = pSVar5;
        il2cpp_runtime_helper_022b4080(components->m_Items + 1);
        pSVar5 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
        if ((pSVar5 != (System_Type_o *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pSVar5), lVar6 == 0))
        goto label_044fc07b;
        if (2 < (uint)components->max_length) {
          components->m_Items[2] = pSVar5;
          il2cpp_runtime_helper_022b4080(components->m_Items + 2);
          pSVar5 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
          if ((pSVar5 != (System_Type_o *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pSVar5), lVar6 == 0))
          goto label_044fc07b;
          if (3 < (uint)components->max_length) {
            components->m_Items[3] = pSVar5;
            il2cpp_runtime_helper_022b4080(components->m_Items + 3,pSVar5);
            __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
            UnityEngine_GameObject___ctor_4dfc440(__this_00,pSVar4,components,(MethodInfo *)0x0);
            if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
              pUVar3 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
              parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
              if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__SetParent_4e09e30(pUVar3,parent,0,(MethodInfo *)0x0);
                __this_01 = (UnityEngine_UI_Image_o *)
                            UnityEngine_GameObject__GetComponent_object_(__this_00,MethodInfo_Image_GetComponent_Image);
                if (__this_01 != (UnityEngine_UI_Image_o *)0x0) {
                  UnityEngine_UI_Image__set_sprite(__this_01,value,(MethodInfo *)0x0);
                  UnityEngine_UI_Image__set_preserveAspect(__this_01,1,(MethodInfo *)0x0);
                  (*(__this_01->klass->vtable)._25_set_raycastTarget.methodPtr)
                            (__this_01,1,(__this_01->klass->vtable)._25_set_raycastTarget.method);
                  (*(__this_01->klass->vtable)._23_set_color.methodPtr)
                            (0x3f800000,0x3f800000,__this_01,(__this_01->klass->vtable)._23_set_color.method);
                  __this_02 = (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)
                              UnityEngine_GameObject__AddComponent_object_(__this_00,MethodInfo_GisketchTooltipTrigger_AddComponent_GisketchTooltipTrigg);
                  pSVar7 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__BadgeLabel
                                     (pSVar7,(MethodInfo *)0x0);
                  if (__this_02 != (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0) {
                    Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__Setup
                              (__this_02,pSVar7,(Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0,
                               (MethodInfo *)0x0);
                    pIVar8 = UnityEngine_GameObject__GetComponent_object_(__this_00,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                    if (pIVar8 != (Il2CppObject *)0x0) {
                      (*pIVar8->klass->vtable[0x24].methodPtr)
                                ((x->fields)._size,pIVar8,pIVar8->klass->vtable[0x24].method);
                      vtableDispatch = pIVar8->klass->vtable[0x26].methodPtr;
                      (*vtableDispatch)
                                ((x->fields)._size,pIVar8,pIVar8->klass->vtable[0x26].method,extraout_RDX,
                                 vtableDispatch);
                      return;
                    }
                  }
                }
              }
            }
            goto label_044fc071;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_044fc07b:
  pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_0231b270();
  uVar9 = 0;
  il2cpp_runtime_helper_022b2b10();
  System_Object___ctor(pIVar8,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar8[1].klass = uVar9;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&pIVar8[2].klass = iVar2;
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$Subscribe
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Subscribe (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, const MethodInfo* method);
// 0x44fb0e0

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Subscribe
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  System_Action_string__o *value;
  
  if (g_data_057aece5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    g_data_057aece5 = '\x01';
  }
  if (((*(char *)((long)&(__this->fields)._controlsActive + 1) != '\0') &&
      (*(char *)((long)&(__this->fields)._controlsActive + 2) == '\0')) &&
     (__this_00 = (__this->fields)._state, __this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    value = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    System_Action_object____ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__add_Changed(__this_00,value,(MethodInfo *)0x0);
    *(undefined1 *)((long)&(__this->fields)._controlsActive + 2) = 1;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$Unsubscribe
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Unsubscribe (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, const MethodInfo* method);
// 0x44fb950

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Unsubscribe
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  System_Action_string__o *value;
  
  if (g_data_057aece6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    g_data_057aece6 = '\x01';
  }
  if ((*(char *)((long)&(__this->fields)._controlsActive + 2) != '\0') &&
     (__this_00 = (__this->fields)._state, __this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    value = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    System_Action_object____ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(__this_00,value,(MethodInfo *)0x0);
    *(undefined1 *)((long)&(__this->fields)._controlsActive + 2) = 0;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$Parse
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Parse (System_String_o* json, const MethodInfo* method);
// 0x44fb7a0

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
// 0x44fb5f0

System_Collections_Generic_IEnumerable_string__o *
Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds
          (SimpleJSONFixed_JSONNode_o *badges,MethodInfo *method)

{
  int32_t iVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  System_String_o *a;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  Il2CppClass *pIVar5;
  System_Collections_Generic_IEnumerable_string__o *extraout_RAX;
  System_Collections_Generic_IEnumerable_string__o *roles;
  MethodInfo *method_00;
  MethodInfo *json;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this;
  System_String_o *value;
  
  if (g_data_057aece7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BadgeIds_d__27);
    g_data_057aece7 = '\x01';
  }
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_BadgeIds_d__27);
  json = (MethodInfo *)0x0;
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar3[1].klass = 0xfffffffe;
  __this = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&pIVar3[2].klass = iVar1;
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar3[3].klass = (Il2CppClass *)badges;
    il2cpp_runtime_helper_022b4080(pIVar3 + 3,badges);
    return (System_Collections_Generic_IEnumerable_string__o *)pIVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  method_01 = json;
  if (g_data_057aecde == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"badges");
    g_data_057aecde = '\x01';
  }
  a = (System_String_o *)
      Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Parse((System_String_o *)json,method_01);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = (SimpleJSONFixed_JSONNode_o *)0x0;
  value = a;
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (a == (System_String_o *)0x0) goto label_044fb78f;
    pSVar4 = (SimpleJSONFixed_JSONNode_o *)
             (*(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._7_get_Item.methodPtr)
                       (a,"badges",(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._7_get_Item.method);
  }
  pIVar5 = (Il2CppClass *)
           Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges_4424170
                     (pSVar4,roles,(MethodInfo *)0x0);
  if (g_data_057aece7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BadgeIds_d__27);
    g_data_057aece7 = '\x01';
  }
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_BadgeIds_d__27);
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar3[1].klass = 0xfffffffe;
  value = (System_String_o *)0x0;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&pIVar3[2].klass = iVar1;
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar3[3].klass = pIVar5;
    il2cpp_runtime_helper_022b4080(pIVar3 + 3,pIVar5);
    Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetBadges
              (__this,(System_Collections_Generic_IEnumerable_string__o *)pIVar3,method_00);
    return extraout_RAX;
  }
label_044fb78f:
  il2cpp_runtime_helper_022b2c90();
  pSVar4 = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar2 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pSVar4 = SimpleJSONFixed_JSON__Parse(value,(MethodInfo *)0x0);
  }
  return (System_Collections_Generic_IEnumerable_string__o *)pSVar4;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime___ctor (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, const MethodInfo* method);
// 0x44fc0c0

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime___ctor
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,MethodInfo *method)

{
  int iVar1;
  
  (__this->fields)._size = 20.0;
  *(undefined1 *)&(__this->fields)._controlsActive = 1;
  if (g_data_057b4c9f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057b4c9f = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 != 0) {
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


