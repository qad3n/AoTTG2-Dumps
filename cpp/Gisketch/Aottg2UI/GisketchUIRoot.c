// Type: Gisketch.Aottg2UI.GisketchUIRoot
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI/GisketchUIRoot.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.GisketchUIRoot.<>c__DisplayClass70_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot___c__DisplayClass70_0___ctor (Gisketch_Aottg2UI_GisketchUIRoot___c__DisplayClass70_0_o* __this, const MethodInfo* method);
// 0x3ac23e0

void Gisketch_Aottg2UI_GisketchUIRoot_<>c__DisplayClass70_0___ctor
               (Gisketch_Aottg2UI_GisketchUIRoot___c__DisplayClass70_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<>c__DisplayClass70_0$$<Build>b__0
// il2cpp: Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* Gisketch_Aottg2UI_GisketchUIRoot___c__DisplayClass70_0___Build_b__0 (Gisketch_Aottg2UI_GisketchUIRoot___c__DisplayClass70_0_o* __this, System_String_o* id, const MethodInfo* method);
// 0x3ac3aa0

Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *
Gisketch_Aottg2UI_GisketchUIRoot_<>c__DisplayClass70_0__<Build>b__0
          (Gisketch_Aottg2UI_GisketchUIRoot___c__DisplayClass70_0_o *__this,System_String_o *id,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *pGVar2;
  
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialog
                       ((__this->fields).catalog,id,
                        (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)
                        (pGVar1->fields)._eventSystemObject,(MethodInfo *)0x0);
    return pGVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.GisketchUIRoot.<RunScreenPrewarmQueue>d__11$$.ctor
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11___ctor (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3ac0df0

void Gisketch_Aottg2UI_GisketchUIRoot_<RunScreenPrewarmQueue>d__11___ctor
               (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<RunScreenPrewarmQueue>d__11$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11__System_IDisposable_Dispose (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o* __this, const MethodInfo* method);
// 0x3ac3ad0

void Gisketch_Aottg2UI_GisketchUIRoot_<RunScreenPrewarmQueue>d__11__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o *__this,
               MethodInfo *method)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *vtable_dispatch;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == 2) || (iVar1 == -3)) {
    if (DAT_057012f0 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_IDisposable);
      DAT_057012f0 = '\x01';
    }
    (__this->fields).__1__state = -1;
    plVar4 = (long *)il2cpp_runtime_glue((__this->fields)._prewarm_5__3,TypeInfo_IDisposable);
    if (plVar4 != (long *)0x0) {
      lVar2 = *plVar4;
      if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
        lVar3 = *(long *)(lVar2 + 0xb0);
        lVar5 = 0;
        do {
          if (*(long *)(lVar3 + lVar5) == TypeInfo_IDisposable) {
            auVar6._8_8_ = lVar3;
            auVar6._0_8_ = lVar2 + (long)*(int *)(lVar3 + 8 + lVar5) * 0x10 + 0x138;
            goto LAB_03ac3b85;
          }
          lVar5 = lVar5 + 0x10;
        } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar5);
      }
      auVar6 = il2cpp_runtime_glue(plVar4,TypeInfo_IDisposable,0);
LAB_03ac3b85:
      vtable_dispatch = (code *)*auVar6._0_8_;
      (*vtable_dispatch)(plVar4,auVar6._0_8_[1],auVar6._8_8_,vtable_dispatch);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<RunScreenPrewarmQueue>d__11$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11__MoveNext (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o* __this, const MethodInfo* method);
// 0x3ac3ba0

bool_conflict
Gisketch_Aottg2UI_GisketchUIRoot_<RunScreenPrewarmQueue>d__11__MoveNext
          (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o *__this,
          MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  Il2CppClass *__this_00;
  System_Collections_IEnumerator_o *pSVar4;
  System_Collections_IEnumerator_c *pSVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *pGVar7;
  System_Collections_IEnumerator_o *pSVar8;
  System_Collections_Generic_HashSet_object__o *__this_01;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar9;
  System_Collections_Generic_List_string__o *pSVar10;
  char cVar11;
  bool_conflict bVar12;
  VirtualInvokeData *pVVar13;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *pGVar14;
  long *plVar15;
  undefined8 *puVar16;
  System_String_o *pSVar17;
  Il2CppObject *pIVar18;
  MethodInfo *method_00;
  long lVar19;
  long lVar20;
  
  if (DAT_057012ef == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&"input");
    DAT_057012ef = '\x01';
  }
  iVar3 = (__this->fields).__1__state;
  __this_00 = (Il2CppClass *)(__this->fields).__4__this;
  if (iVar3 == 0) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  else {
    if (iVar3 == 1) {
      (__this->fields).__1__state = -1;
      if (__this_00 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar17 = (__this->fields)._id_5__2;
      method_00 = (MethodInfo *)0x0;
      bVar12 = System_String__IsNullOrEmpty(pSVar17,(MethodInfo *)0x0);
      if (((((char)bVar12 != '\0') ||
           (bVar12 = Gisketch_Aottg2UI_GisketchUIRoot__CanWaitForScreenPrewarm
                               ((Gisketch_Aottg2UI_GisketchUIRoot_o *)__this_00,method_00),
           (char)bVar12 == '\0')) ||
          (pGVar7 = (__this_00->_1).methods,
          pGVar7 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0)) ||
         (((pGVar14 = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen
                                (pGVar7,pSVar17,(MethodInfo *)0x0),
           pGVar14 == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0 ||
           (pGVar7 = (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)
                     (__this_00->_1).implementedInterfaces,
           pGVar7 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0)) ||
          (bVar12 = System_String__Equals
                              ((System_String_o *)(pGVar7->fields).dialogs,pSVar17,5,
                               (MethodInfo *)0x0), (char)bVar12 != '\0')))) goto LAB_03ac3f0f;
      pGVar9 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)
               (__this_00->_1).implementedInterfaces;
      if (pGVar9 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      method = (MethodInfo *)
               Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen
                         (pGVar9,(__this->fields)._id_5__2,
                          *(int32_t *)((long)&(__this_00->_1).byval_arg.data + 4),(MethodInfo *)0x0)
      ;
      (__this->fields)._prewarm_5__3 = (System_Collections_IEnumerator_o *)method;
      il2cpp_runtime_glue(&(__this->fields)._prewarm_5__3);
      (__this->fields).__1__state = -3;
    }
    else {
      if (iVar3 != 2) {
        return 0;
      }
      (__this->fields).__1__state = -3;
      if (__this_00 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    bVar12 = Gisketch_Aottg2UI_GisketchUIRoot__CanContinueScreenPrewarm
                       ((Gisketch_Aottg2UI_GisketchUIRoot_o *)__this_00,method);
    if ((char)bVar12 != '\0') {
      pSVar4 = (__this->fields)._prewarm_5__3;
      if (pSVar4 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar5 = pSVar4->klass;
      uVar1._0_1_ = (pSVar5->_2).rank;
      uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar6 = (pSVar5->_1).interfaceOffsets;
        lVar19 = 0;
        do {
          if (*(long *)((long)&pIVar6->interfaceType + lVar19) == TypeInfo_IEnumerator) {
            pVVar13 = pSVar5->vtable + *(int *)((long)&pIVar6->offset + lVar19);
            goto LAB_03ac3d8e;
          }
          lVar19 = lVar19 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar19);
      }
      pVVar13 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar4,TypeInfo_IEnumerator,0);
LAB_03ac3d8e:
      method = pVVar13->method;
      cVar11 = (*pVVar13->methodPtr)();
      if (cVar11 != '\0') {
        pSVar8 = (__this->fields)._prewarm_5__3;
        if (pSVar8 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar5 = pSVar8->klass;
        uVar2._0_1_ = (pSVar5->_2).rank;
        uVar2._1_1_ = (pSVar5->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar6 = (pSVar5->_1).interfaceOffsets;
          lVar19 = 0;
          do {
            if (*(long *)((long)&pIVar6->interfaceType + lVar19) == TypeInfo_IEnumerator) {
              pVVar13 = pSVar5->vtable + (*(int *)((long)&pIVar6->offset + lVar19) + 1);
              goto LAB_03ac4015;
            }
            lVar19 = lVar19 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar19);
        }
        pVVar13 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar8,TypeInfo_IEnumerator,1);
LAB_03ac4015:
        pIVar18 = (Il2CppObject *)(*pVVar13->methodPtr)(pSVar8,pVVar13->method);
        (__this->fields).__2__current = pIVar18;
        il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar18);
        (__this->fields).__1__state = 2;
        return (bool_conflict)CONCAT71((int7)((ulong)pSVar4 >> 8),1);
      }
    }
    bVar12 = Gisketch_Aottg2UI_GisketchUIRoot__CanContinueScreenPrewarm
                       ((Gisketch_Aottg2UI_GisketchUIRoot_o *)__this_00,method);
    if (DAT_057012f0 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_IDisposable);
      DAT_057012f0 = '\x01';
    }
    (__this->fields).__1__state = -1;
    plVar15 = (long *)il2cpp_runtime_glue();
    if (plVar15 != (long *)0x0) {
      lVar19 = *plVar15;
      if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
        lVar20 = 0;
        do {
          if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar20) == TypeInfo_IDisposable) {
            puVar16 = (undefined8 *)
                      (lVar19 + (long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar20) * 0x10 + 0x138
                      );
            goto LAB_03ac3e9d;
          }
          lVar20 = lVar20 + 0x10;
        } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar20);
      }
      puVar16 = (undefined8 *)il2cpp_runtime_glue(plVar15,TypeInfo_IDisposable,0);
LAB_03ac3e9d:
      (*(code *)*puVar16)(plVar15);
    }
    if ((char)bVar12 == '\0') {
      pGVar9 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)
               (__this_00->_1).implementedInterfaces;
      if (pGVar9 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelPrewarm
                  (pGVar9,"input",(MethodInfo *)0x0);
      }
    }
    else {
      __this_01 = (__this_00->_1).this_arg.data;
      if (__this_01 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_HashSet<object>__Add
                (__this_01,(Il2CppObject *)(__this->fields)._id_5__2,MethodInfo_Boolean_Add);
    }
    (__this->fields)._id_5__2 = (System_String_o *)0x0;
    il2cpp_runtime_glue(&(__this->fields)._id_5__2);
    (__this->fields)._prewarm_5__3 = (System_Collections_IEnumerator_o *)0x0;
    il2cpp_runtime_glue();
  }
LAB_03ac3f0f:
  pSVar10 = *(System_Collections_Generic_List_string__o **)&(__this_00->_1).byval_arg.bits;
  if (pSVar10 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((pSVar10->fields)._size < 1) {
    *(UnityEngine_Coroutine_o **)&(__this_00->_1).this_arg.bits = (UnityEngine_Coroutine_o *)0x0;
    bVar12 = 0;
    il2cpp_runtime_glue(&(__this_00->_1).this_arg.bits,0);
  }
  else {
    pSVar17 = (System_String_o *)
              System_Collections_Generic_List<object>__get_Item
                        ((System_Collections_Generic_List_object__o *)pSVar10,0,MethodInfo_String_get_Item);
    (__this->fields)._id_5__2 = pSVar17;
    il2cpp_runtime_glue(&(__this->fields)._id_5__2);
    pSVar10 = *(System_Collections_Generic_List_string__o **)&(__this_00->_1).byval_arg.bits;
    if (pSVar10 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_List<object>__RemoveAt
              ((System_Collections_Generic_List_object__o *)pSVar10,0,MethodInfo_Void_RemoveAt);
    if (DAT_057012d9 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_WaitForScreenPrewarmIdle_d__12);
      DAT_057012d9 = '\x01';
    }
    pIVar18 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForScreenPrewarmIdle_d__12);
    System_Object___ctor(pIVar18,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar18[1].klass = 0;
    if (pIVar18 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar18[2].klass = __this_00;
    il2cpp_runtime_glue(pIVar18 + 2,__this_00);
    (__this->fields).__2__current = pIVar18;
    il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar18);
    (__this->fields).__1__state = 1;
    bVar12 = (bool_conflict)CONCAT71((int7)((ulong)pIVar18 >> 8),1);
  }
  return bVar12;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<RunScreenPrewarmQueue>d__11$$<>m__Finally1
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11____m__Finally1 (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o* __this, const MethodInfo* method);
// 0x3ac4180

void Gisketch_Aottg2UI_GisketchUIRoot_<RunScreenPrewarmQueue>d__11__<>m__Finally1
               (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o *__this,
               MethodInfo *method)

{
  long lVar1;
  long lVar2;
  code *vtable_dispatch;
  long *plVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if (DAT_057012f0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    DAT_057012f0 = '\x01';
  }
  (__this->fields).__1__state = -1;
  plVar3 = (long *)il2cpp_runtime_glue((__this->fields)._prewarm_5__3,TypeInfo_IDisposable);
  if (plVar3 == (long *)0x0) {
    return;
  }
  lVar1 = *plVar3;
  if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
    lVar2 = *(long *)(lVar1 + 0xb0);
    lVar4 = 0;
    do {
      if (*(long *)(lVar2 + lVar4) == TypeInfo_IDisposable) {
        auVar5._8_8_ = lVar2;
        auVar5._0_8_ = lVar1 + (long)*(int *)(lVar2 + 8 + lVar4) * 0x10 + 0x138;
        goto LAB_03ac4225;
      }
      lVar4 = lVar4 + 0x10;
    } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar4);
  }
  auVar5 = il2cpp_runtime_glue(plVar3,TypeInfo_IDisposable,0);
LAB_03ac4225:
  vtable_dispatch = (code *)*auVar5._0_8_;
  (*vtable_dispatch)(plVar3,auVar5._0_8_[1],auVar5._8_8_,vtable_dispatch);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<RunScreenPrewarmQueue>d__11$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o* __this, const MethodInfo* method);
// 0x3ac4240

Il2CppObject *
Gisketch_Aottg2UI_GisketchUIRoot_<RunScreenPrewarmQueue>d__11__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<RunScreenPrewarmQueue>d__11$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o* __this, const MethodInfo* method);
// 0x3ac4250

void Gisketch_Aottg2UI_GisketchUIRoot_<RunScreenPrewarmQueue>d__11__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o *__this,
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


// Gisketch.Aottg2UI.GisketchUIRoot.<RunScreenPrewarmQueue>d__11$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o* __this, const MethodInfo* method);
// 0x3ac4290

Il2CppObject *
Gisketch_Aottg2UI_GisketchUIRoot_<RunScreenPrewarmQueue>d__11__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<WaitForScreenPrewarmIdle>d__12$$.ctor
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12___ctor (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3ac0e80

void Gisketch_Aottg2UI_GisketchUIRoot_<WaitForScreenPrewarmIdle>d__12___ctor
               (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<WaitForScreenPrewarmIdle>d__12$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12__System_IDisposable_Dispose (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o* __this, const MethodInfo* method);
// 0x3ac42a0

void Gisketch_Aottg2UI_GisketchUIRoot_<WaitForScreenPrewarmIdle>d__12__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<WaitForScreenPrewarmIdle>d__12$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12__MoveNext (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o* __this, const MethodInfo* method);
// 0x3ac42b0

bool_conflict
Gisketch_Aottg2UI_GisketchUIRoot_<WaitForScreenPrewarmIdle>d__12__MoveNext
          (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o *__this,
          MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_00;
  bool_conflict bVar2;
  undefined8 uVar3;
  float fVar4;
  UnityEngine_Vector2_o UVar5;
  float fVar6;
  
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if ((__this->fields)._target_5__3 <= (__this->fields)._idleSeconds_5__2) {
      return 0;
    }
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    (__this->fields)._idleSeconds_5__2 = 0.0;
    if (__this_00 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto LAB_03ac43ce;
    fVar4 = (__this_00->fields)._screenPrewarmIdleDelay;
    fVar6 = 0.0;
    if (0.0 <= fVar4) {
      fVar6 = fVar4;
    }
    (__this->fields)._target_5__3 = fVar6;
    if (fVar6 <= 0.0) {
      return 0;
    }
  }
  if (__this_00 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    bVar2 = Gisketch_Aottg2UI_GisketchUIRoot__CanWaitForScreenPrewarm(__this_00,method);
    fVar4 = 0.0;
    if ((char)bVar2 != '\0') {
      bVar2 = UnityEngine_Input__get_anyKeyDown((MethodInfo *)0x0);
      if ((((char)bVar2 == '\0') &&
          (bVar2 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0), (char)bVar2 == '\0'))
         && (bVar2 = UnityEngine_Input__GetMouseButtonDown(1,(MethodInfo *)0x0), (char)bVar2 == '\0'
            )) {
        bVar2 = UnityEngine_Input__GetMouseButtonDown(2,(MethodInfo *)0x0);
        fVar4 = 0.0;
        if ((char)bVar2 == '\0') {
          UVar5 = UnityEngine_Input__get_mouseScrollDelta((MethodInfo *)0x0);
          fVar4 = 0.0;
          if (UVar5.fields.y * UVar5.fields.y + UVar5.fields.x * UVar5.fields.x <= 0.0) {
            fVar6 = (__this->fields)._idleSeconds_5__2;
            fVar4 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
            fVar4 = fVar4 + fVar6;
          }
        }
      }
      else {
        fVar4 = 0.0;
      }
    }
    (__this->fields)._idleSeconds_5__2 = fVar4;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    uVar3 = il2cpp_runtime_glue(&(__this->fields).__2__current,0);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)uVar3 >> 8),1);
  }
LAB_03ac43ce:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.GisketchUIRoot.<WaitForScreenPrewarmIdle>d__12$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o* __this, const MethodInfo* method);
// 0x3ac43e0

Il2CppObject *
Gisketch_Aottg2UI_GisketchUIRoot_<WaitForScreenPrewarmIdle>d__12__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<WaitForScreenPrewarmIdle>d__12$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o* __this, const MethodInfo* method);
// 0x3ac43f0

void Gisketch_Aottg2UI_GisketchUIRoot_<WaitForScreenPrewarmIdle>d__12__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o *__this,
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


// Gisketch.Aottg2UI.GisketchUIRoot.<WaitForScreenPrewarmIdle>d__12$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o* __this, const MethodInfo* method);
// 0x3ac4430

Il2CppObject *
Gisketch_Aottg2UI_GisketchUIRoot_<WaitForScreenPrewarmIdle>d__12__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$UpdateFocusInput
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__UpdateFocusInput (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3ac03e0

void Gisketch_Aottg2UI_GisketchUIRoot__UpdateFocusInput
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar1;
  UnityEngine_Object_o *x;
  bool_conflict bVar2;
  ulong in_RAX;
  UnityEngine_UI_Selectable_o *x_00;
  UnityEngine_EventSystems_EventSystem_o *pUVar3;
  uint backwards;
  MethodInfo *pMVar4;
  UnityEngine_GameObject_o *root;
  undefined1 auStack_28 [8];
  
  auStack_28 = (undefined1  [8])in_RAX;
  if (DAT_057012d2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EventSystem);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057012d2 = '\x01';
  }
  auStack_28 = (undefined1  [8])((ulong)auStack_28 & 0xffffffffffffff);
  pMVar4 = (MethodInfo *)(auStack_28 + 7);
  bVar2 = Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__TakeTab
                    ((bool_conflict *)pMVar4,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    x_00 = Gisketch_Aottg2UI_GisketchUIRoot__SelectedInput(pMVar4);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pMVar4 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__PollPointerOnly((MethodInfo *)0x0);
      return;
    }
    bVar2 = Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__Poll((MethodInfo *)0x0);
    if (DAT_0570136d == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
      DAT_0570136d = '\x01';
    }
    if (*(int *)(*(long *)(TypeInfo_GisketchFocusInputMode + 0xb8) + 0x18) == 0) {
      Gisketch_Aottg2UI_GisketchUIRoot__ClearPointerSelection(__this,pMVar4);
      return;
    }
    if ((char)bVar2 == '\0') {
      return;
    }
    pGVar1 = (__this->fields)._Theme_k__BackingField;
    if (pGVar1 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FocusTopFromNavigation
                ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)pGVar1,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar3 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar3 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_EventSystems_EventSystem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    x = (UnityEngine_Object_o *)(pUVar3->fields).m_CurrentSelected;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    root = *(UnityEngine_GameObject_o **)&(__this->fields)._motionScale;
    backwards = 0;
  }
  else {
    pGVar1 = (__this->fields)._Theme_k__BackingField;
    if (pGVar1 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
      bVar2 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CycleFocus
                        ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)pGVar1,
                         (uint)auStack_28[7],(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        return;
      }
    }
    root = *(UnityEngine_GameObject_o **)&(__this->fields)._motionScale;
    backwards = (uint)auStack_28[7];
  }
  Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Cycle(root,backwards,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$ClearPointerSelection
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__ClearPointerSelection (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3ac06f0

void Gisketch_Aottg2UI_GisketchUIRoot__ClearPointerSelection
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_EventSystems_EventSystem_o *pUVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *x;
  
  if (DAT_057012d3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EventSystem);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057012d3 = '\x01';
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  x = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto LAB_03ac080f;
    x = (MethodInfo *)(pUVar2->fields).m_CurrentSelected;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    method_01 = x;
    bVar1 = Gisketch_Aottg2UI_GisketchUIRoot__IsInsideGisketchCanvas
                      (__this,(UnityEngine_GameObject_o *)x,method_00);
    if ((char)bVar1 != '\0') {
      bVar1 = Gisketch_Aottg2UI_GisketchUIRoot__IsInput((UnityEngine_GameObject_o *)x,method_01);
      if ((char)bVar1 == '\0') {
        if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
          UnityEngine_EventSystems_EventSystem__SetSelectedGameObject
                    (pUVar2,(UnityEngine_GameObject_o *)0x0,(MethodInfo *)0x0);
          return;
        }
LAB_03ac080f:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$SelectedInput
// il2cpp: UnityEngine_UI_Selectable_o* Gisketch_Aottg2UI_GisketchUIRoot__SelectedInput (const MethodInfo* method);
// 0x3ac05a0

UnityEngine_UI_Selectable_o * Gisketch_Aottg2UI_GisketchUIRoot__SelectedInput(MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_EventSystems_EventSystem_o *pUVar2;
  UnityEngine_UI_Selectable_o *pUVar3;
  UnityEngine_Object_o *x;
  
  if (DAT_057012d4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EventSystem);
    il2cpp_init_method_metadata(&MethodInfo_InputField_GetComponent_InputField);
    il2cpp_init_method_metadata(&MethodInfo_TMP_InputField_GetComponent_TMP_InputField);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057012d4 = '\x01';
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  x = (UnityEngine_Object_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto LAB_03ac06e6;
    x = (UnityEngine_Object_o *)(pUVar2->fields).m_CurrentSelected;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar3 = (UnityEngine_UI_Selectable_o *)0x0;
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (x == (UnityEngine_Object_o *)0x0) {
LAB_03ac06e6:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar3 = (UnityEngine_UI_Selectable_o *)
             UnityEngine_GameObject__GetComponent<object>
                       ((UnityEngine_GameObject_o *)x,MethodInfo_TMP_InputField_GetComponent_TMP_InputField);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar1 == '\0') {
      pUVar3 = (UnityEngine_UI_Selectable_o *)
               UnityEngine_GameObject__GetComponent<object>
                         ((UnityEngine_GameObject_o *)x,MethodInfo_InputField_GetComponent_InputField);
      return pUVar3;
    }
  }
  return pUVar3;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$IsInsideGisketchCanvas
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__IsInsideGisketchCanvas (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, UnityEngine_GameObject_o* selected, const MethodInfo* method);
// 0x3ac0820

bool_conflict
Gisketch_Aottg2UI_GisketchUIRoot__IsInsideGisketchCanvas
          (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,UnityEngine_GameObject_o *selected,
          MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar1;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  
  if (DAT_057012d5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057012d5 = '\x01';
  }
  x = *(UnityEngine_Object_o **)&(__this->fields)._motionScale;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)selected,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (selected != (UnityEngine_GameObject_o *)0x0) {
        __this_01 = UnityEngine_GameObject__get_transform(selected,(MethodInfo *)0x0);
        __this_00 = *(UnityEngine_GameObject_o **)&(__this->fields)._motionScale;
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          parent = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_Transform_o *)0x0) {
            bVar1 = UnityEngine_Transform__IsChildOf(__this_01,parent,(MethodInfo *)0x0);
            return bVar1;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$IsInput
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__IsInput (UnityEngine_GameObject_o* selected, const MethodInfo* method);
// 0x3ac08f0

bool_conflict
Gisketch_Aottg2UI_GisketchUIRoot__IsInput(UnityEngine_GameObject_o *selected,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Object_o *pUVar2;
  
  if (DAT_057012d6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_InputField_GetComponent_InputField);
    il2cpp_init_method_metadata(&MethodInfo_TMP_InputField_GetComponent_TMP_InputField);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057012d6 = '\x01';
  }
  if (selected == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pUVar2 = (UnityEngine_Object_o *)
           UnityEngine_GameObject__GetComponent<object>(selected,MethodInfo_TMP_InputField_GetComponent_TMP_InputField);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar1 >> 8),1);
  }
  pUVar2 = (UnityEngine_Object_o *)
           UnityEngine_GameObject__GetComponent<object>(selected,MethodInfo_InputField_GetComponent_InputField);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$QueueScreenPrewarm
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__QueueScreenPrewarm (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, System_String_array* screenIds, const MethodInfo* method);
// 0x3ac09c0

/* WARNING: Type propagation algorithm not settling */

void Gisketch_Aottg2UI_GisketchUIRoot__QueueScreenPrewarm
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,System_String_array *screenIds,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_o *value;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_String_array *pSVar3;
  long lVar4;
  char cVar5;
  System_String_o *a;
  Il2CppObject *__this_01;
  UnityEngine_Coroutine_o *pUVar7;
  int iVar8;
  System_Collections_Generic_List_string__o *pSVar9;
  ulong uVar10;
  bool_conflict bVar6;
  
  if (DAT_057012d7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&"ScreenPrewarm.Queue");
    DAT_057012d7 = '\x01';
    iVar8 = *(int *)(TypeInfo_Application + 0xe4);
  }
  else {
    iVar8 = *(int *)(TypeInfo_Application + 0xe4);
  }
  if (iVar8 == 0) {
    il2cpp_init_class();
    bVar6 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    cVar5 = (char)bVar6;
  }
  else {
    bVar6 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    cVar5 = (char)bVar6;
  }
  if ((screenIds == (System_String_array *)0x0) || (cVar5 == '\0')) {
    return;
  }
  if (0 < (int)screenIds->max_length) {
    uVar10 = 0;
    if ((screenIds->max_length & 0xffffffff) != 0) {
      do {
        value = screenIds->m_Items[uVar10];
        bVar6 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          __this_00 = (System_Collections_Generic_HashSet_object__o *)
                      (__this->fields)._screenPrewarmed;
          if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03ac0cd1;
          bVar6 = System_Collections_Generic_HashSet<object>__Contains
                            (__this_00,(Il2CppObject *)value,MethodInfo_Boolean_Contains);
          if ((char)bVar6 == '\0') {
            if (DAT_057012da == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
              il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
              DAT_057012da = '\x01';
            }
            pSVar9 = (__this->fields)._screenPrewarmQueue;
            if (pSVar9 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_03ac0cd1;
            iVar8 = 0;
            while( true ) {
              lVar4 = MethodInfo_Void_Add;
              uVar2 = (pSVar9->fields)._size;
              if ((int)uVar2 <= iVar8) break;
              a = (System_String_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar9,iVar8,MethodInfo_String_get_Item)
              ;
              bVar6 = System_String__Equals(a,value,5,(MethodInfo *)0x0);
              if ((char)bVar6 != '\0') goto LAB_03ac0a50;
              iVar8 = iVar8 + 1;
              pSVar9 = (__this->fields)._screenPrewarmQueue;
              if (pSVar9 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_03ac0cd1;
            }
            piVar1 = &(pSVar9->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (pSVar9->fields)._items;
            if (pSVar3 == (System_String_array *)0x0) goto LAB_03ac0cd1;
            if (uVar2 < (uint)pSVar3->max_length) {
              (pSVar9->fields)._size = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = value;
              il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,value);
              iVar8 = *(int *)(TypeInfo_GisketchUiPerfLog + 0xe4);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)value,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70))
              ;
              iVar8 = *(int *)(TypeInfo_GisketchUiPerfLog + 0xe4);
            }
            if (iVar8 == 0) {
              il2cpp_init_class();
            }
            Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
                      ("ScreenPrewarm.Queue",value,(MethodInfo *)0x0);
          }
        }
LAB_03ac0a50:
        uVar10 = uVar10 + 1;
        uVar2 = (uint)screenIds->max_length;
        if ((long)(int)uVar2 <= (long)uVar10) goto LAB_03ac0c26;
      } while (uVar10 < uVar2);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03ac0c26:
  pSVar9 = (__this->fields)._screenPrewarmQueue;
  if (pSVar9 != (System_Collections_Generic_List_string__o *)0x0) {
    if ((pSVar9->fields)._size < 1) {
      return;
    }
    if ((__this->fields)._screenPrewarmRoutine != (UnityEngine_Coroutine_o *)0x0) {
      return;
    }
    if (DAT_057012d8 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_RunScreenPrewarmQueue_d__11);
      DAT_057012d8 = '\x01';
    }
    __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_RunScreenPrewarmQueue_d__11);
    System_Object___ctor(__this_01,(MethodInfo *)0x0);
    *(undefined4 *)&__this_01[1].klass = 0;
    if (__this_01 != (Il2CppObject *)0x0) {
      __this_01[2].klass = (Il2CppClass *)__this;
      il2cpp_runtime_glue(__this_01 + 2,__this);
      pUVar7 = UnityEngine_MonoBehaviour__StartCoroutine
                         ((UnityEngine_MonoBehaviour_o *)__this,
                          (System_Collections_IEnumerator_o *)__this_01,(MethodInfo *)0x0);
      (__this->fields)._screenPrewarmRoutine = pUVar7;
      il2cpp_runtime_glue(&(__this->fields)._screenPrewarmRoutine,pUVar7);
      return;
    }
  }
LAB_03ac0cd1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.GisketchUIRoot$$RunScreenPrewarmQueue
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3ac0d80

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue
          (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057012d8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_RunScreenPrewarmQueue_d__11);
    DAT_057012d8 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_RunScreenPrewarmQueue_d__11);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.GisketchUIRoot$$WaitForScreenPrewarmIdle
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3ac0e10

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle
          (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057012d9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitForScreenPrewarmIdle_d__12);
    DAT_057012d9 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForScreenPrewarmIdle_d__12);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.GisketchUIRoot$$CanStartScreenPrewarm
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__CanStartScreenPrewarm (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, System_String_o* id, const MethodInfo* method);
// 0x3ac0ea0

bool_conflict
Gisketch_Aottg2UI_GisketchUIRoot__CanStartScreenPrewarm
          (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *pGVar1;
  bool_conflict bVar2;
  uint uVar3;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *pGVar4;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)0x0;
  bVar2 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return 0;
  }
  bVar2 = Gisketch_Aottg2UI_GisketchUIRoot__CanWaitForScreenPrewarm(__this,method_00);
  if ((char)bVar2 != '\0') {
    pGVar1 = *(Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o **)
              &(__this->fields)._suppressNextBuildMotion;
    if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
      return 0;
    }
    pGVar4 = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen
                       (pGVar1,id,(MethodInfo *)0x0);
    if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
      return 0;
    }
    pGVar1 = (__this->fields)._Manifest_k__BackingField;
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
      uVar3 = System_String__Equals
                        ((System_String_o *)(pGVar1->fields).dialogs,id,5,(MethodInfo *)0x0);
      return uVar3 ^ 1;
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$IsScreenPrewarmQueued
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__IsScreenPrewarmQueued (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, System_String_o* id, const MethodInfo* method);
// 0x3ac0ce0

bool_conflict
Gisketch_Aottg2UI_GisketchUIRoot__IsScreenPrewarmQueued
          (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,System_String_o *id,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *a;
  int index;
  System_Collections_Generic_List_string__o *__this_00;
  
  if (DAT_057012da == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    DAT_057012da = '\x01';
  }
  __this_00 = (__this->fields)._screenPrewarmQueue;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        return 0;
      }
      a = (System_String_o *)
          System_Collections_Generic_List<object>__get_Item
                    ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_String_get_Item);
      bVar1 = System_String__Equals(a,id,5,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar1 >> 8),1);
      }
      index = index + 1;
      __this_00 = (__this->fields)._screenPrewarmQueue;
    } while (__this_00 != (System_Collections_Generic_List_string__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.GisketchUIRoot$$CanWaitForScreenPrewarm
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__CanWaitForScreenPrewarm (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3ac0f20

bool_conflict
Gisketch_Aottg2UI_GisketchUIRoot__CanWaitForScreenPrewarm
          (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  bool_conflict bVar2;
  uint uVar3;
  MethodInfo *method_00;
  
  if (DAT_057012db == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotionDriver);
    DAT_057012db = '\x01';
  }
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  uVar3 = 0;
  if ((char)bVar2 != '\0') {
    bVar2 = UnityEngine_Behaviour__get_isActiveAndEnabled
                      ((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
    uVar3 = 0;
    if ((char)bVar2 != '\0') {
      pGVar1 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)
               (__this->fields)._Manifest_k__BackingField;
      uVar3 = 0;
      if (pGVar1 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
        bVar2 = Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_IsTransitioning
                          (pGVar1,(MethodInfo *)0x0);
        uVar3 = 0;
        if ((char)bVar2 == '\0') {
          pGVar1 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)
                   (__this->fields)._Manifest_k__BackingField;
          if (pGVar1 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar3 = 0;
          bVar2 = Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_IsPrewarming
                            (pGVar1,(MethodInfo *)0x0);
          if ((char)bVar2 == '\0') {
            method_00 = TypeInfo_GisketchMotionDriver;
            if (*(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4) == 0) {
              il2cpp_init_class();
            }
            bVar2 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__get_HasActive(method_00);
            if ((char)bVar2 == '\0') {
              __this_00 = (__this->fields)._Theme_k__BackingField;
              if (__this_00 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                uVar3 = 1;
              }
              else {
                uVar3 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__get_HasOpenOverlays
                                  ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,
                                   (MethodInfo *)0x0);
                uVar3 = uVar3 ^ 1;
              }
            }
            else {
              uVar3 = 0;
            }
          }
        }
      }
    }
  }
  return uVar3;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$CanContinueScreenPrewarm
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__CanContinueScreenPrewarm (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3ac1220

bool_conflict
Gisketch_Aottg2UI_GisketchUIRoot__CanContinueScreenPrewarm
          (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_00;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_01;
  bool_conflict bVar1;
  uint uVar2;
  UnityEngine_Vector2_o UVar3;
  
  if (DAT_057012dc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    DAT_057012dc = '\x01';
  }
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  uVar2 = 0;
  if ((char)bVar1 != '\0') {
    bVar1 = UnityEngine_Behaviour__get_isActiveAndEnabled
                      ((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
    uVar2 = 0;
    if ((char)bVar1 != '\0') {
      __this_00 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)
                  (__this->fields)._Manifest_k__BackingField;
      uVar2 = 0;
      if (__this_00 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
        bVar1 = Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_IsTransitioning
                          (__this_00,(MethodInfo *)0x0);
        uVar2 = 0;
        if ((char)bVar1 == '\0') {
          uVar2 = 0;
          bVar1 = UnityEngine_Input__get_anyKeyDown((MethodInfo *)0x0);
          if ((char)bVar1 == '\0') {
            uVar2 = 0;
            bVar1 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0);
            if ((char)bVar1 == '\0') {
              uVar2 = 0;
              bVar1 = UnityEngine_Input__GetMouseButtonDown(1,(MethodInfo *)0x0);
              if ((char)bVar1 == '\0') {
                uVar2 = 0;
                bVar1 = UnityEngine_Input__GetMouseButtonDown(2,(MethodInfo *)0x0);
                if ((char)bVar1 == '\0') {
                  uVar2 = 0;
                  UVar3 = UnityEngine_Input__get_mouseScrollDelta((MethodInfo *)0x0);
                  if (UVar3.fields.y * UVar3.fields.y + UVar3.fields.x * UVar3.fields.x <= 0.0) {
                    __this_01 = (__this->fields)._Theme_k__BackingField;
                    if (__this_01 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                      uVar2 = 1;
                    }
                    else {
                      uVar2 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__get_HasOpenOverlays
                                        ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)
                                         __this_01,(MethodInfo *)0x0);
                      uVar2 = uVar2 ^ 1;
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
  return uVar2;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$ScreenPrewarmInput
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__ScreenPrewarmInput (const MethodInfo* method);
// 0x3ac1330

bool_conflict Gisketch_Aottg2UI_GisketchUIRoot__ScreenPrewarmInput(MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict bVar2;
  undefined8 unaff_RBX;
  UnityEngine_Vector2_o UVar4;
  undefined7 uVar3;
  
  bVar1 = UnityEngine_Input__get_anyKeyDown((MethodInfo *)0x0);
  uVar3 = (undefined7)((ulong)unaff_RBX >> 8);
  bVar2 = (bool_conflict)CONCAT71(uVar3,1);
  if ((char)bVar1 == '\0') {
    bVar1 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      bVar1 = UnityEngine_Input__GetMouseButtonDown(1,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        bVar1 = UnityEngine_Input__GetMouseButtonDown(2,(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          UVar4 = UnityEngine_Input__get_mouseScrollDelta((MethodInfo *)0x0);
          bVar2 = (bool_conflict)
                  CONCAT71(uVar3,0.0 < UVar4.fields.y * UVar4.fields.y +
                                       UVar4.fields.x * UVar4.fields.x);
        }
      }
    }
  }
  return bVar2;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$CancelScreenPrewarm
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__CancelScreenPrewarm (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, bool clearQueue, const MethodInfo* method);
// 0x3ac1390

void Gisketch_Aottg2UI_GisketchUIRoot__CancelScreenPrewarm
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,bool_conflict clearQueue,
               MethodInfo *method)

{
  UnityEngine_Coroutine_o **ppUVar1;
  int32_t *piVar2;
  int32_t length;
  UnityEngine_Coroutine_o *routine;
  System_Collections_Generic_List_string__o *pSVar3;
  System_Collections_Generic_HashSet_object__o *__this_00;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_01;
  
  if (DAT_057012dd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&"root cancel");
    DAT_057012dd = '\x01';
  }
  ppUVar1 = &(__this->fields)._screenPrewarmRoutine;
  routine = (__this->fields)._screenPrewarmRoutine;
  if (routine != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
  }
  *ppUVar1 = (UnityEngine_Coroutine_o *)0x0;
  il2cpp_runtime_glue(ppUVar1);
  if ((char)clearQueue != '\0') {
    pSVar3 = (__this->fields)._screenPrewarmQueue;
    if (pSVar3 != (System_Collections_Generic_List_string__o *)0x0) {
      piVar2 = &(pSVar3->fields)._version;
      *piVar2 = *piVar2 + 1;
      length = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
      }
      __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._screenPrewarmed;
      if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet<object>__Clear(__this_00,MethodInfo_Void_Clear);
        goto LAB_03ac143c;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03ac143c:
  __this_01 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)
              (__this->fields)._Manifest_k__BackingField;
  if (__this_01 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelPrewarm
              (__this_01,"root cancel",(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$get_ScalePreset
// il2cpp: int32_t Gisketch_Aottg2UI_GisketchUIRoot__get_ScalePreset (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3ac1470

int32_t Gisketch_Aottg2UI_GisketchUIRoot__get_ScalePreset
                  (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  return (__this->fields)._scalePreset;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$get_Scale
// il2cpp: float Gisketch_Aottg2UI_GisketchUIRoot__get_Scale (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3ac1480

float Gisketch_Aottg2UI_GisketchUIRoot__get_Scale
                (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  return (__this->fields)._scale;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$SetScale
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__SetScale (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, int32_t preset, const MethodInfo* method);
// 0x3ac1490

void Gisketch_Aottg2UI_GisketchUIRoot__SetScale
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,int32_t preset,MethodInfo *method)

{
  int32_t iVar1;
  undefined4 in_register_00000034;
  float scale;
  
  iVar1 = preset;
  if (DAT_057012de == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgUiScale);
    DAT_057012de = '\x01';
  }
  (__this->fields)._scalePreset = preset;
  if (*(int *)(TypeInfo_AottgUiScale + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((uint)preset < 5) {
    scale = *(float *)(&DAT_00d0b750 + (long)preset * 4);
  }
  else {
    scale = 1.0;
  }
  Gisketch_Aottg2UI_GisketchUIRoot__SetScale
            (__this,scale,(MethodInfo *)CONCAT44(in_register_00000034,iVar1));
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$SetScale
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__SetScale (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, float scale, const MethodInfo* method);
// 0x3ac1520

void Gisketch_Aottg2UI_GisketchUIRoot__SetScale
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,float scale,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *root;
  bool_conflict bVar1;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  float fVar2;
  
  if (DAT_057012df == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgUiScale);
    il2cpp_init_method_metadata(&TypeInfo_GisketchScreenBuilder);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057012df = '\x01';
    in_RDX = extraout_RDX;
  }
  if (*(int *)(TypeInfo_AottgUiScale + 0xe4) == 0) {
    il2cpp_init_class();
    in_RDX = extraout_RDX_00;
  }
  fVar2 = 1.5;
  if (scale <= 1.5) {
    fVar2 = scale;
  }
  (__this->fields)._scale =
       (float)(~-(uint)(0.75 <= scale) & 0x3f400000 | (uint)fVar2 & -(uint)(0.75 <= scale));
  Gisketch_Aottg2UI_GisketchUIRoot__ApplyScale(__this,(UnityEngine_UI_CanvasScaler_o *)0x0,in_RDX);
  x = *(UnityEngine_Object_o **)&(__this->fields)._motionScale;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    root = *(UnityEngine_GameObject_o **)&(__this->fields)._motionScale;
    if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout(root,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$ApplyScale
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__ApplyScale (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, UnityEngine_UI_CanvasScaler_o* scaler, const MethodInfo* method);
// 0x3ac1650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Gisketch_Aottg2UI_GisketchUIRoot__ApplyScale
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,UnityEngine_UI_CanvasScaler_o *scaler,
               MethodInfo *method)

{
  float fVar1;
  int iVar2;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  float fVar3;
  bool_conflict bVar4;
  undefined1 auVar5 [16];
  
  if (DAT_057012e0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgUiScale);
    il2cpp_init_method_metadata(&MethodInfo_CanvasScaler_GetComponent_CanvasScaler);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057012e0 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)scaler,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    x = *(UnityEngine_Object_o **)&(__this->fields)._motionScale;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    scaler = (UnityEngine_UI_CanvasScaler_o *)0x0;
    bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      __this_00 = *(UnityEngine_GameObject_o **)&(__this->fields)._motionScale;
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_03ac17fe;
      scaler = (UnityEngine_UI_CanvasScaler_o *)
               UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_CanvasScaler_GetComponent_CanvasScaler);
    }
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)scaler,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  fVar1 = (__this->fields)._scale;
  if (*(int *)(TypeInfo_AottgUiScale + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_057012f4 == '\0') goto LAB_03ac17cd;
LAB_03ac1751:
    iVar2 = *(int *)(TypeInfo_AottgUiScale + 0xe4);
  }
  else {
    if (DAT_057012f4 != '\0') goto LAB_03ac1751;
LAB_03ac17cd:
    il2cpp_init_method_metadata(&TypeInfo_AottgUiScale);
    DAT_057012f4 = '\x01';
    iVar2 = *(int *)(TypeInfo_AottgUiScale + 0xe4);
  }
  if (iVar2 == 0) {
                    /* WARNING: Read-only address (ram,0x00cd09a0) is written */
    il2cpp_init_class();
  }
  if (scaler != (UnityEngine_UI_CanvasScaler_o *)0x0) {
                    /* WARNING: Read-only address (ram,0x00cd09a0) is written */
    fVar3 = 1.5;
    if (fVar1 <= 1.5) {
      fVar3 = fVar1;
    }
    auVar5._0_4_ = ~-(uint)(0.75 <= fVar1) & 0x3f400000 | (uint)fVar3 & -(uint)(0.75 <= fVar1);
    auVar5._4_4_ = auVar5._0_4_;
    auVar5._8_8_ = 0;
    auVar5 = divps(_DAT_00cd09a0,auVar5);
    UnityEngine_UI_CanvasScaler__set_referenceResolution
              (scaler,(UnityEngine_Vector2_o)auVar5._0_8_,(MethodInfo *)0x0);
    return;
  }
LAB_03ac17fe:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.GisketchUIRoot$$get_State
// il2cpp: Gisketch_Aottg2UI_State_GisketchUIState_o* Gisketch_Aottg2UI_GisketchUIRoot__get_State (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3ac1890

Gisketch_Aottg2UI_State_GisketchUIState_o *
Gisketch_Aottg2UI_GisketchUIRoot__get_State
          (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  return (Gisketch_Aottg2UI_State_GisketchUIState_o *)(__this->fields)._codeActions;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$set_State
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__set_State (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_State_GisketchUIState_o* value, const MethodInfo* method);
// 0x3ac18a0

void Gisketch_Aottg2UI_GisketchUIRoot__set_State
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,
               Gisketch_Aottg2UI_State_GisketchUIState_o *value,MethodInfo *method)

{
  (__this->fields)._codeActions = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)value;
  il2cpp_runtime_glue(&(__this->fields)._codeActions);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$get_Manifest
// il2cpp: Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* Gisketch_Aottg2UI_GisketchUIRoot__get_Manifest (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3ac18c0

Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *
Gisketch_Aottg2UI_GisketchUIRoot__get_Manifest
          (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  return *(Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o **)
          &(__this->fields)._suppressNextBuildMotion;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$set_Manifest
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__set_Manifest (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* value, const MethodInfo* method);
// 0x3ac18d0

void Gisketch_Aottg2UI_GisketchUIRoot__set_Manifest
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,
               Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *value,MethodInfo *method)

{
  *(Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o **)
   &(__this->fields)._suppressNextBuildMotion = value;
  il2cpp_runtime_glue(&(__this->fields)._suppressNextBuildMotion);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$get_Theme
// il2cpp: Gisketch_Aottg2UI_Styling_GisketchTheme_o* Gisketch_Aottg2UI_GisketchUIRoot__get_Theme (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3ac18f0

Gisketch_Aottg2UI_Styling_GisketchTheme_o *
Gisketch_Aottg2UI_GisketchUIRoot__get_Theme
          (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  return (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)(__this->fields)._State_k__BackingField;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$set_Theme
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__set_Theme (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_Styling_GisketchTheme_o* value, const MethodInfo* method);
// 0x3ac1900

void Gisketch_Aottg2UI_GisketchUIRoot__set_Theme
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *value,MethodInfo *method)

{
  (__this->fields)._State_k__BackingField = (Gisketch_Aottg2UI_State_GisketchUIState_o *)value;
  il2cpp_runtime_glue(&(__this->fields)._State_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$get_Screens
// il2cpp: Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* Gisketch_Aottg2UI_GisketchUIRoot__get_Screens (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3ac1920

Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *
Gisketch_Aottg2UI_GisketchUIRoot__get_Screens
          (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  return (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)
         (__this->fields)._Manifest_k__BackingField;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$set_Screens
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__set_Screens (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* value, const MethodInfo* method);
// 0x3ac1930

void Gisketch_Aottg2UI_GisketchUIRoot__set_Screens
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,
               Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *value,MethodInfo *method)

{
  (__this->fields)._Manifest_k__BackingField =
       (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)value;
  il2cpp_runtime_glue(&(__this->fields)._Manifest_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$get_Overlays
// il2cpp: Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* Gisketch_Aottg2UI_GisketchUIRoot__get_Overlays (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3ac1950

Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *
Gisketch_Aottg2UI_GisketchUIRoot__get_Overlays
          (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  return (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)
         (__this->fields)._Theme_k__BackingField;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$set_Overlays
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__set_Overlays (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* value, const MethodInfo* method);
// 0x3ac1960

void Gisketch_Aottg2UI_GisketchUIRoot__set_Overlays
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,
               Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *value,MethodInfo *method)

{
  (__this->fields)._Theme_k__BackingField = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)value;
  il2cpp_runtime_glue(&(__this->fields)._Theme_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$get_Toasts
// il2cpp: Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* Gisketch_Aottg2UI_GisketchUIRoot__get_Toasts (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3ac1980

Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *
Gisketch_Aottg2UI_GisketchUIRoot__get_Toasts
          (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  return (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)
         (__this->fields)._Screens_k__BackingField;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$set_Toasts
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__set_Toasts (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* value, const MethodInfo* method);
// 0x3ac1990

void Gisketch_Aottg2UI_GisketchUIRoot__set_Toasts
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,
               Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *value,MethodInfo *method)

{
  (__this->fields)._Screens_k__BackingField =
       (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)value;
  il2cpp_runtime_glue(&(__this->fields)._Screens_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$Start
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__Start (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3ac19b0

void Gisketch_Aottg2UI_GisketchUIRoot__Start
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  int iVar1;
  char cVar2;
  bool_conflict bVar3;
  
  if (DAT_057012e1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    DAT_057012e1 = '\x01';
    iVar1 = *(int *)(TypeInfo_Application + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Application + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  else {
    bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  if (((cVar2 != '\0') && ((char)(__this->fields)._buildOnStart != '\0')) &&
     (*(char *)((long)&(__this->fields)._customActions + 1) == '\0')) {
    Gisketch_Aottg2UI_GisketchUIRoot__Build(__this,method);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$Update
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__Update (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3ac20d0

/* WARNING: Type propagation algorithm not settling */

void Gisketch_Aottg2UI_GisketchUIRoot__Update
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_01;
  char cVar2;
  bool_conflict bVar3;
  int32_t iVar4;
  MethodInfo *method_00;
  
  if (DAT_057012e2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotionDriver);
    DAT_057012e2 = '\x01';
    iVar1 = *(int *)(TypeInfo_Application + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Application + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  else {
    bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  if (cVar2 == '\0') {
    return;
  }
  Gisketch_Aottg2UI_GisketchUIRoot__UpdateFocusInput(__this,method);
  bVar3 = UnityEngine_Input__GetKeyDown(0x1b,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return;
  }
  if (*(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570132c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotionDriver);
    DAT_0570132c = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  iVar1 = *(int *)(TypeInfo_GisketchMotionDriver[2].virtualMethodPointer + 8);
  iVar4 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  if (iVar1 != iVar4) {
    if (*(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4) == 0) {
      method_00 = TypeInfo_GisketchMotionDriver;
      il2cpp_init_class();
      bVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__CompleteActiveForSkip(method_00);
      cVar2 = (char)bVar3;
    }
    else {
      bVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__CompleteActiveForSkip(TypeInfo_GisketchMotionDriver);
      cVar2 = (char)bVar3;
    }
    if ((cVar2 == '\0') &&
       (((__this_00 = (__this->fields)._Theme_k__BackingField,
         __this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0 &&
         (bVar3 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                            ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,1,
                             (MethodInfo *)0x0), (char)bVar3 != '\0')) ||
        ((__this_01 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)
                      (__this->fields)._Manifest_k__BackingField,
         __this_01 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0 &&
         (bVar3 = Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Back(__this_01,(MethodInfo *)0x0),
         (char)bVar3 != '\0')))))) {
      Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(1,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$Build
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__Build (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3ac1a30

void Gisketch_Aottg2UI_GisketchUIRoot__Build
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  byte *pbVar5;
  undefined8 uVar6;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *pGVar7;
  UnityEngine_Object_o *x;
  UnityEngine_TextAsset_o *__this_00;
  bool_conflict bVar8;
  Il2CppObject *__this_01;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar9;
  Il2CppClass *pIVar10;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *manifest;
  UnityEngine_GameObject_o *pUVar11;
  MethodInfo *pMVar12;
  UnityEngine_RectTransform_o *parent;
  UnityEngine_Transform_o *screenLayer;
  UnityEngine_Transform_o *layer;
  UnityEngine_Transform_o *layer_00;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar13;
  Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *localizer;
  System_Func_string__GisketchOverlayDefinition__o *dialogResolver;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *__this_02;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar14;
  System_String_o *json;
  Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *definition;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_Fields *pGVar15;
  byte bVar16;
  float fVar17;
  
  if (DAT_057012e3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Aottg2GisketchLocalizer);
    il2cpp_init_method_metadata(&TypeInfo_AottgActionRegistry);
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_Func_string__GisketchOverlayDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchBuildContext);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    il2cpp_init_method_metadata(&TypeInfo_GisketchOverlayManager);
    il2cpp_init_method_metadata(&TypeInfo_GisketchScreenBuilder);
    il2cpp_init_method_metadata(&TypeInfo_GisketchScreenRouter);
    il2cpp_init_method_metadata(&TypeInfo_GisketchTheme);
    il2cpp_init_method_metadata(&TypeInfo_GisketchToastManager);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIState);
    il2cpp_init_method_metadata(&TypeInfo_IGisketchActionHandler);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_GisketchOverlayDefinition__Build_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass70_0);
    il2cpp_init_method_metadata(&"AoTTG Toasts");
    il2cpp_init_method_metadata(&"AoTTG Screens");
    il2cpp_init_method_metadata(&"AoTTG Overlays");
    DAT_057012e3 = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass70_0);
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 == (Il2CppObject *)0x0) goto LAB_03ac20bb;
  __this_01[1].monitor = __this;
  il2cpp_runtime_glue(&__this_01[1].monitor);
  bVar2 = *(byte *)&(__this->fields)._customActions;
  *(undefined1 *)&(__this->fields)._customActions = 0;
  Gisketch_Aottg2UI_GisketchUIRoot__Clear(__this,0,method_00);
  pGVar9 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)il2cpp_runtime_glue(TypeInfo_AottgActionRegistry);
  Gisketch_Aottg2UI_Code_AottgActionRegistry___ctor(pGVar9,(MethodInfo *)0x0);
  (__this->fields)._eventSystemObject = (UnityEngine_GameObject_o *)pGVar9;
  il2cpp_runtime_glue(&(__this->fields)._eventSystemObject,pGVar9);
  pIVar10 = (Il2CppClass *)Gisketch_Aottg2UI_Code_AottgCodeCatalog__Discover((MethodInfo *)0x0);
  __this_01[1].klass = pIVar10;
  il2cpp_runtime_glue(__this_01 + 1,pIVar10);
  manifest = Gisketch_Aottg2UI_GisketchUIRoot__LoadCodeManifest
                       (__this,(Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)__this_01[1].klass,
                        method_01);
  if (manifest == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
    return;
  }
  *(Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o **)
   &(__this->fields)._suppressNextBuildMotion = manifest;
  il2cpp_runtime_glue(&(__this->fields)._suppressNextBuildMotion,manifest);
  bVar16 = bVar2 ^ 1;
  if (*(char *)((long)&(__this->fields)._buildOnStart + 3) == '\0') {
    bVar16 = 0;
  }
  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pbVar5 = *(byte **)(TypeInfo_GisketchMotion + 0xb8);
  *pbVar5 = bVar16;
  fVar1 = (float)(__this->fields)._previewInEditor;
  fVar17 = 0.0;
  if (0.0 <= fVar1) {
    fVar17 = fVar1;
  }
  *(float *)(pbVar5 + 4) = fVar17;
  uVar6._0_4_ = (__this->fields)._createEventSystem;
  uVar6._4_4_ = (__this->fields)._motionEnabled;
  pUVar11 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(uVar6,TypeInfo_IGisketchActionHandler);
  (__this->fields)._canvasObject = pUVar11;
  il2cpp_runtime_glue(uVar6,TypeInfo_IGisketchActionHandler);
  il2cpp_runtime_glue(&(__this->fields)._canvasObject);
  pMVar12 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_GisketchUIState);
  Gisketch_Aottg2UI_State_GisketchUIState___ctor
            ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pMVar12,(MethodInfo *)0x0);
  (__this->fields)._codeActions = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)pMVar12;
  il2cpp_runtime_glue(&(__this->fields)._codeActions);
  Gisketch_Aottg2UI_GisketchUIRoot__EnsureEventSystem(__this,pMVar12);
  parent = Gisketch_Aottg2UI_GisketchUIRoot__CreateCanvas(__this,pMVar12);
  screenLayer = Gisketch_Aottg2UI_GisketchUIRoot__CreateLayer
                          ((UnityEngine_Transform_o *)parent,"AoTTG Screens",method_02);
  layer = Gisketch_Aottg2UI_GisketchUIRoot__CreateLayer
                    ((UnityEngine_Transform_o *)parent,"AoTTG Overlays",method_03);
  layer_00 = Gisketch_Aottg2UI_GisketchUIRoot__CreateLayer
                       ((UnityEngine_Transform_o *)parent,"AoTTG Toasts",method_04);
  Gisketch_Aottg2UI_GisketchUIRoot__PromoteLayer(layer,900,method_05);
  Gisketch_Aottg2UI_GisketchUIRoot__PromoteLayer(layer_00,1000,method_06);
  pUVar11 = *(UnityEngine_GameObject_o **)&(__this->fields)._motionScale;
  if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pMVar12 = (MethodInfo *)0x0;
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout(pUVar11,(MethodInfo *)0x0);
  definition = (manifest->fields).theme;
  if (definition == (Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *)0x0) {
    x = (UnityEngine_Object_o *)(__this->fields)._themeJson;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar8 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      __this_00 = (__this->fields)._themeJson;
      if (__this_00 == (UnityEngine_TextAsset_o *)0x0) goto LAB_03ac20bb;
      json = UnityEngine_TextAsset__get_text(__this_00,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05701363 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_GisketchTheme);
        DAT_05701363 = '\x01';
      }
      pMVar12 = (MethodInfo *)0x0;
      definition = Gisketch_Aottg2UI_Data_GisketchThemeDefinition__FromJson(json,(MethodInfo *)0x0);
      iVar4 = *(int *)(TypeInfo_GisketchTheme + 0xe4);
      goto joined_r0x03ac1ff4;
    }
    if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pGVar13 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)**(undefined8 **)(TypeInfo_GisketchTheme + 0xb8);
  }
  else {
    iVar4 = *(int *)(TypeInfo_GisketchTheme + 0xe4);
joined_r0x03ac1ff4:
    if (iVar4 == 0) {
      il2cpp_init_class();
    }
    pGVar13 = Gisketch_Aottg2UI_Styling_GisketchTheme__FromDefinition(definition,pMVar12);
  }
  (__this->fields)._State_k__BackingField = (Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar13;
  il2cpp_runtime_glue(&(__this->fields)._State_k__BackingField);
  localizer = (Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *)
              il2cpp_runtime_glue(TypeInfo_Aottg2GisketchLocalizer);
  Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___ctor
            ((Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *)localizer,(MethodInfo *)0x0
            );
  pGVar9 = (__this->fields)._codeActions;
  dialogResolver =
       (System_Func_string__GisketchOverlayDefinition__o *)il2cpp_runtime_glue(TypeInfo_Func_string__GisketchOverlayDefinition);
  System_Func<object__object>___ctor();
  __this_02 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)il2cpp_runtime_glue(TypeInfo_GisketchBuildContext);
  Gisketch_Aottg2UI_Building_GisketchBuildContext___ctor
            (__this_02,manifest,pGVar13,localizer,
             (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)__this,
             (Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar9,
             (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0,dialogResolver,
             (MethodInfo *)0x0);
  pGVar14 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)il2cpp_runtime_glue(TypeInfo_GisketchScreenRouter);
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter___ctor
            (pGVar14,screenLayer,__this_02,(UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._Manifest_k__BackingField =
       (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)pGVar14;
  il2cpp_runtime_glue(&(__this->fields)._Manifest_k__BackingField,pGVar14);
  pGVar13 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)il2cpp_runtime_glue(TypeInfo_GisketchOverlayManager);
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___ctor
            ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)pGVar13,layer,__this_02,
             (MethodInfo *)0x0);
  (__this->fields)._Theme_k__BackingField = pGVar13;
  il2cpp_runtime_glue(&(__this->fields)._Theme_k__BackingField,pGVar13);
  pGVar14 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)il2cpp_runtime_glue(TypeInfo_GisketchToastManager);
  Gisketch_Aottg2UI_Overlays_GisketchToastManager___ctor
            ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)pGVar14,layer_00,__this_02,
             (MethodInfo *)0x0);
  (__this->fields)._Screens_k__BackingField = pGVar14;
  il2cpp_runtime_glue(&(__this->fields)._Screens_k__BackingField);
  pGVar14 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)
            (__this->fields)._Manifest_k__BackingField;
  bVar8 = System_String__IsNullOrEmpty((manifest->fields).initialScreen,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    pGVar15 = (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_Fields *)
              &(manifest->fields).initialScreen;
  }
  else {
    pGVar7 = (manifest->fields).screens;
    if ((pGVar7 == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *)0x0) ||
       (pGVar7->max_length == 0)) {
      pGVar15 = *(Gisketch_Aottg2UI_Data_GisketchScreenDefinition_Fields **)(DAT_057110b0 + 0xb8);
    }
    else {
      if ((int)pGVar7->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (pGVar7->m_Items[0] == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0)
      goto LAB_03ac20bb;
      pGVar15 = &pGVar7->m_Items[0]->fields;
    }
  }
  if (pGVar14 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen
              (pGVar14,pGVar15->id,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar8 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    *(char *)((long)&(__this->fields)._customActions + 1) = (char)bVar8;
    if (bVar2 != 0) {
      uVar3 = *(undefined1 *)((long)&(__this->fields)._buildOnStart + 3);
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        il2cpp_init_class();
      }
      **(undefined1 **)(TypeInfo_GisketchMotion + 0xb8) = uVar3;
    }
    return;
  }
LAB_03ac20bb:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.GisketchUIRoot$$Clear
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__Clear (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3ac3150

void Gisketch_Aottg2UI_GisketchUIRoot__Clear
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  Gisketch_Aottg2UI_GisketchUIRoot__Clear(__this,1,in_RDX);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$Clear
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__Clear (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, bool destroyEventSystem, const MethodInfo* method);
// 0x3ac23f0

void Gisketch_Aottg2UI_GisketchUIRoot__Clear
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,bool_conflict destroyEventSystem,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  MethodInfo *method_00;
  
  Gisketch_Aottg2UI_GisketchUIRoot__CancelScreenPrewarm(__this,1,method);
  pGVar1 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)
           (__this->fields)._Manifest_k__BackingField;
  if (pGVar1 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Clear(pGVar1,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields)._Theme_k__BackingField;
  if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Clear
              ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,(MethodInfo *)0x0);
  }
  pGVar1 = (__this->fields)._Screens_k__BackingField;
  if (pGVar1 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__Close
              ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)pGVar1,0,(MethodInfo *)0x0);
  }
  (__this->fields)._Manifest_k__BackingField =
       (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._Manifest_k__BackingField);
  (__this->fields)._Theme_k__BackingField = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._Theme_k__BackingField);
  (__this->fields)._Screens_k__BackingField =
       (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._Screens_k__BackingField);
  (__this->fields)._codeActions = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._codeActions);
  *(undefined1 *)((long)&(__this->fields)._customActions + 1) = 0;
  (__this->fields)._suppressNextBuildMotion = 0;
  (__this->fields)._runtimeBuilt = 0;
  il2cpp_runtime_glue(&(__this->fields)._suppressNextBuildMotion);
  (__this->fields)._State_k__BackingField = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._State_k__BackingField);
  (__this->fields)._eventSystemObject = (UnityEngine_GameObject_o *)0x0;
  method_00 = (MethodInfo *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._eventSystemObject);
  Gisketch_Aottg2UI_GisketchUIRoot__DestroyObject
            ((UnityEngine_GameObject_o **)&(__this->fields)._motionScale,method_00);
  if ((char)destroyEventSystem != '\0') {
    Gisketch_Aottg2UI_GisketchUIRoot__DestroyObject
              ((UnityEngine_GameObject_o **)&(__this->fields)._actionHandler,method_00);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$SetTheme
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__SetTheme (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, UnityEngine_TextAsset_o* themeJson, const MethodInfo* method);
// 0x3ac3240

void Gisketch_Aottg2UI_GisketchUIRoot__SetTheme
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,UnityEngine_TextAsset_o *themeJson,
               MethodInfo *method)

{
  UnityEngine_Object_o *y;
  bool_conflict bVar1;
  
  if (DAT_057012e4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057012e4 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)themeJson,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if ((char)bVar1 == '\0') {
    y = (UnityEngine_Object_o *)(__this->fields)._themeJson;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)themeJson,y,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      (__this->fields)._themeJson = themeJson;
      il2cpp_runtime_glue(&(__this->fields)._themeJson);
      Gisketch_Aottg2UI_GisketchUIRoot__Build(__this,(MethodInfo *)themeJson);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$SetSelectedScreen
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__SetSelectedScreen (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, System_String_o* screenId, const MethodInfo* method);
// 0x3ac32f0

void Gisketch_Aottg2UI_GisketchUIRoot__SetSelectedScreen
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,System_String_o *screenId,
               MethodInfo *method)

{
  bool_conflict bVar1;
  
  bVar1 = System_String__IsNullOrEmpty(screenId,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality
                      (screenId,(__this->fields)._selectedScreenId,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      (__this->fields)._selectedScreenId = screenId;
      il2cpp_runtime_glue(&(__this->fields)._selectedScreenId);
      if ((__this->fields)._Manifest_k__BackingField !=
          (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
        Gisketch_Aottg2UI_GisketchUIRoot__Build(__this,(MethodInfo *)screenId);
        return;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$RefreshActiveScreen
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3ac3350

void Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *pGVar1;
  bool_conflict bVar2;
  
  pGVar1 = (__this->fields)._Manifest_k__BackingField;
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
    method = (MethodInfo *)0x0;
    bVar2 = System_String__IsNullOrEmpty
                      ((System_String_o *)(pGVar1->fields).dialogs,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      pGVar1 = (__this->fields)._Manifest_k__BackingField;
      if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      method = (MethodInfo *)(pGVar1->fields).dialogs;
      (__this->fields)._selectedScreenId = (System_String_o *)method;
      il2cpp_runtime_glue(&(__this->fields)._selectedScreenId);
    }
  }
  *(undefined1 *)&(__this->fields)._customActions = 1;
  Gisketch_Aottg2UI_GisketchUIRoot__Build(__this,method);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$SetActionHandler
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__SetActionHandler (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, UnityEngine_MonoBehaviour_o* actionHandler, const MethodInfo* method);
// 0x3ac33b0

void Gisketch_Aottg2UI_GisketchUIRoot__SetActionHandler
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,
               UnityEngine_MonoBehaviour_o *actionHandler,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  undefined8 uVar2;
  MethodInfo *extraout_RDX;
  
  if (DAT_057012e5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IGisketchActionHandler);
    DAT_057012e5 = '\x01';
    method = extraout_RDX;
  }
  *(UnityEngine_MonoBehaviour_o **)&(__this->fields)._createEventSystem = actionHandler;
  il2cpp_runtime_glue(&(__this->fields)._createEventSystem,actionHandler,method);
  pUVar1 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(actionHandler,TypeInfo_IGisketchActionHandler);
  (__this->fields)._canvasObject = pUVar1;
  uVar2 = il2cpp_runtime_glue(actionHandler,TypeInfo_IGisketchActionHandler);
  il2cpp_runtime_glue(&(__this->fields)._canvasObject,uVar2);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$ShowToast
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__ShowToast (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, const MethodInfo* method);
// 0x3ac3420

void Gisketch_Aottg2UI_GisketchUIRoot__ShowToast
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,
               Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_00;
  
  __this_00 = (__this->fields)._Screens_k__BackingField;
  if (__this_00 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__Show
              ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)__this_00,toast,
               (MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$HandleAction
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__HandleAction (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, System_String_o* actionId, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x3ac3440

void Gisketch_Aottg2UI_GisketchUIRoot__HandleAction
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,System_String_o *actionId,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  ushort uVar1;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_00;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar2;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_01;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_GameObject_c *pUVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  VirtualInvokeData *pVVar8;
  long lVar9;
  
  if (DAT_057012e6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&TypeInfo_IGisketchActionHandler);
    il2cpp_init_method_metadata(&"dialog.");
    il2cpp_init_method_metadata(&"overlay.close");
    il2cpp_init_method_metadata(&"screen.");
    il2cpp_init_method_metadata(&"aottg-search-palette");
    il2cpp_init_method_metadata(&"popover.");
    il2cpp_init_method_metadata(&"Gisketch UI action: ");
    DAT_057012e6 = '\x01';
  }
  bVar6 = System_String__IsNullOrEmpty(actionId,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  if (actionId != (System_String_o *)0x0) {
    bVar6 = System_String__StartsWith(actionId,"screen.",5,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      bVar6 = System_String__StartsWith(actionId,"dialog.",5,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        bVar6 = System_String__StartsWith(actionId,"popover.",5,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          bVar6 = System_String__op_Equality(actionId,"overlay.close",(MethodInfo *)0x0);
          if ((char)bVar6 == '\0') {
            __this_01 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)
                        (__this->fields)._eventSystemObject;
            if ((__this_01 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) &&
               (bVar6 = Gisketch_Aottg2UI_Code_AottgActionRegistry__TryHandle
                                  (__this_01,actionId,context,(MethodInfo *)0x0),
               (char)bVar6 != '\0')) {
              return;
            }
            pUVar3 = (__this->fields)._canvasObject;
            if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
              pSVar7 = System_String__Concat("Gisketch UI action: ",actionId,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
                il2cpp_init_class();
              }
              UnityEngine_Debug__Log
                        ((Il2CppObject *)pSVar7,(UnityEngine_Object_o *)context.fields.GameObject,
                         (MethodInfo *)0x0);
              return;
            }
            pUVar4 = pUVar3->klass;
            uVar1._0_1_ = (pUVar4->_2).rank;
            uVar1._1_1_ = (pUVar4->_2).minimumAlignment;
            if ((ulong)uVar1 != 0) {
              pIVar5 = (pUVar4->_1).interfaceOffsets;
              lVar9 = 0;
              do {
                if (*(long *)((long)&pIVar5->interfaceType + lVar9) == TypeInfo_IGisketchActionHandler) {
                  pVVar8 = &(pUVar4->vtable)._0_Equals + *(int *)((long)&pIVar5->offset + lVar9);
                  goto LAB_03ac376f;
                }
                lVar9 = lVar9 + 0x10;
              } while ((ulong)uVar1 << 4 != lVar9);
            }
            pVVar8 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar3,TypeInfo_IGisketchActionHandler,0);
LAB_03ac376f:
            (*pVVar8->methodPtr)(pUVar3,actionId,pVVar8->method);
            return;
          }
          pGVar2 = (__this->fields)._Theme_k__BackingField;
          if (pGVar2 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
            Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                      ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)pGVar2,1,
                       (MethodInfo *)0x0);
            return;
          }
        }
        else if ("popover." != (System_String_o *)0x0) {
          pGVar2 = (__this->fields)._Theme_k__BackingField;
          pSVar7 = System_String__Substring
                             (actionId,("popover."->fields)._stringLength,(MethodInfo *)0x0);
          if (pGVar2 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
            Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowPopover
                      ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)pGVar2,pSVar7,
                       context.fields.GameObject,(uint)(context.fields.InputSource != 1),24.0,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
      else if ("dialog." != (System_String_o *)0x0) {
        pSVar7 = System_String__Substring
                           (actionId,("dialog."->fields)._stringLength,(MethodInfo *)0x0);
        pGVar2 = (__this->fields)._Theme_k__BackingField;
        bVar6 = System_String__op_Equality(pSVar7,"aottg-search-palette",(MethodInfo *)0x0);
        if (pGVar2 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                    ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)pGVar2,pSVar7,
                     (uint)(byte)((byte)bVar6 | context.fields.InputSource != 1),(MethodInfo *)0x0);
          return;
        }
      }
    }
    else if ("screen." != (System_String_o *)0x0) {
      __this_00 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)
                  (__this->fields)._Manifest_k__BackingField;
      pSVar7 = System_String__Substring
                         (actionId,("screen."->fields)._stringLength,(MethodInfo *)0x0);
      if (__this_00 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen
                  (__this_00,pSVar7,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.GisketchUIRoot$$LoadCodeManifest
// il2cpp: Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* Gisketch_Aottg2UI_GisketchUIRoot__LoadCodeManifest (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_Code_AottgCodeCatalog_o* catalog, const MethodInfo* method);
// 0x3ac2530

Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *
Gisketch_Aottg2UI_GisketchUIRoot__LoadCodeManifest
          (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,
          Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *catalog,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_TextAsset_o *__this_00;
  char cVar3;
  bool_conflict bVar4;
  System_String_o *json;
  Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *theme;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *pGVar5;
  
  if (DAT_057012e7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"GisketchUIRoot found no AoTTG code UI screens.");
    il2cpp_init_method_metadata(&"GisketchUIRoot has no theme JSON assigned; using readable default AoTTG UI theme.");
    DAT_057012e7 = '\x01';
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._themeJson;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_init_class();
      bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      cVar3 = (char)bVar4;
    }
    else {
      bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      cVar3 = (char)bVar4;
    }
    if (cVar3 != '\0') {
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Debug__LogWarning("GisketchUIRoot has no theme JSON assigned; using readable default AoTTG UI theme.",(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
      pUVar2 = (UnityEngine_Object_o *)(__this->fields)._themeJson;
      iVar1 = *(int *)(TypeInfo_Object + 0xe4);
      goto joined_r0x03ac2633;
    }
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._themeJson;
  iVar1 = *(int *)(TypeInfo_Object + 0xe4);
joined_r0x03ac2633:
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  theme = (Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *)0x0;
  bVar4 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    __this_00 = (__this->fields)._themeJson;
    if (__this_00 == (UnityEngine_TextAsset_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    json = UnityEngine_TextAsset__get_text(__this_00,(MethodInfo *)0x0);
    theme = Gisketch_Aottg2UI_Data_GisketchThemeDefinition__FromJson(json,(MethodInfo *)0x0);
  }
  pGVar5 = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Build
                     (catalog,(__this->fields)._selectedScreenId,theme,
                      (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)
                      (__this->fields)._eventSystemObject,(MethodInfo *)0x0);
  if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Debug__LogWarning("GisketchUIRoot found no AoTTG code UI screens.",(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
  }
  return pGVar5;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$EnsureEventSystem
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__EnsureEventSystem (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3ac26d0

void Gisketch_Aottg2UI_GisketchUIRoot__EnsureEventSystem
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o **ppUVar1;
  char cVar2;
  bool_conflict bVar3;
  UnityEngine_EventSystems_EventSystem_o *pUVar4;
  UnityEngine_MonoBehaviour_o *pUVar5;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  UnityEngine_Object_o *x;
  
  if (DAT_057012e8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_EventSystem);
    il2cpp_init_method_metadata(&MethodInfo_EventSystem_AddComponent_EventSystem);
    il2cpp_init_method_metadata(&MethodInfo_StandaloneInputModule_AddComponent_StandaloneInp);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"AoTTG EventSystem");
    DAT_057012e8 = '\x01';
    if (*(int *)(TypeInfo_Application + 0xe4) != 0) goto LAB_03ac26ff;
LAB_03ac2849:
    il2cpp_init_class();
    bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  else {
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) goto LAB_03ac2849;
LAB_03ac26ff:
    bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  if ((cVar2 != '\0') && (*(char *)((long)&(__this->fields)._buildOnStart + 2) != '\0')) {
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar4 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 == '\0') {
      pUVar5 = (UnityEngine_MonoBehaviour_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor
                ((UnityEngine_GameObject_o *)pUVar5,"AoTTG EventSystem",(MethodInfo *)0x0);
      ppUVar1 = &(__this->fields)._actionHandler;
      (__this->fields)._actionHandler = pUVar5;
      il2cpp_runtime_glue(ppUVar1);
      pUVar5 = (__this->fields)._actionHandler;
      if (pUVar5 != (UnityEngine_MonoBehaviour_o *)0x0) {
        __this_00 = UnityEngine_GameObject__get_transform
                              ((UnityEngine_GameObject_o *)pUVar5,(MethodInfo *)0x0);
        parent = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent(__this_00,parent,0,(MethodInfo *)0x0);
          if (*ppUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
            x = (UnityEngine_Object_o *)
                UnityEngine_GameObject__AddComponent<object>
                          ((UnityEngine_GameObject_o *)*ppUVar1,MethodInfo_EventSystem_AddComponent_EventSystem);
            if (DAT_057012e9 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Object);
              DAT_057012e9 = '\x01';
            }
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
            ;
            if ((char)bVar3 == '\0') {
              if (x == (UnityEngine_Object_o *)0x0) goto LAB_03ac295e;
              *(undefined1 *)&x[2].monitor = 1;
            }
            if (*ppUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
              UnityEngine_GameObject__AddComponent<object>
                        ((UnityEngine_GameObject_o *)*ppUVar1,MethodInfo_StandaloneInputModule_AddComponent_StandaloneInp);
              return;
            }
          }
        }
      }
LAB_03ac295e:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar4 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (DAT_057012e9 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Object);
      DAT_057012e9 = '\x01';
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 == '\0') {
      if (pUVar4 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto LAB_03ac295e;
      *(undefined1 *)&(pUVar4->fields).m_sendNavigationEvents = 1;
    }
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$ConfigureEventSystem
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__ConfigureEventSystem (UnityEngine_EventSystems_EventSystem_o* eventSystem, const MethodInfo* method);
// 0x3ac37b0

void Gisketch_Aottg2UI_GisketchUIRoot__ConfigureEventSystem
               (UnityEngine_EventSystems_EventSystem_o *eventSystem,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_057012e9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057012e9 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)eventSystem,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (eventSystem == (UnityEngine_EventSystems_EventSystem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    *(undefined1 *)&(eventSystem->fields).m_sendNavigationEvents = 1;
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$ShouldFocusOverlay
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__ShouldFocusOverlay (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x3ac37a0

bool_conflict
Gisketch_Aottg2UI_GisketchUIRoot__ShouldFocusOverlay
          (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),context.fields.InputSource != 1);
}


// Gisketch.Aottg2UI.GisketchUIRoot$$CreateCanvas
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_GisketchUIRoot__CreateCanvas (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3ac2970

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_GisketchUIRoot__CreateCanvas
          (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  float *pfVar1;
  System_RuntimeTypeHandle_o handle;
  System_Type_array *components;
  System_Type_o *pSVar2;
  long lVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  UnityEngine_Canvas_o *__this_01;
  UnityEngine_UI_CanvasScaler_o *scaler;
  UnityEngine_RectTransform_o *rect;
  undefined8 uVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (DAT_057012ea == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CanvasScaler_AddComponent_CanvasScaler);
    il2cpp_init_method_metadata(&MethodInfo_Canvas_AddComponent_Canvas);
    il2cpp_init_method_metadata(&MethodInfo_GraphicRaycaster_AddComponent_GraphicRaycaster);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&"AoTTG UI Canvas");
    DAT_057012ea = '\x01';
  }
  components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  handle.fields.value = TypeRef_RectTransform.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (pSVar2 != (System_Type_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pSVar2,(((components->obj).klass)->_1).element_class);
      if (lVar3 == 0) {
        uVar5 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar5,0);
      }
    }
    if ((int)components->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    components->m_Items[0] = pSVar2;
    il2cpp_runtime_glue(components->m_Items,pSVar2);
    pUVar4 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
    UnityEngine_GameObject___ctor(pUVar4,"AoTTG UI Canvas",components,(MethodInfo *)0x0);
    pfVar1 = &(__this->fields)._motionScale;
    *(UnityEngine_GameObject_o **)&(__this->fields)._motionScale = pUVar4;
    il2cpp_runtime_glue(pfVar1);
    pUVar4 = *(UnityEngine_GameObject_o **)&(__this->fields)._motionScale;
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
      parent = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(__this_00,parent,0,(MethodInfo *)0x0);
        if (*(UnityEngine_GameObject_o **)pfVar1 != (UnityEngine_GameObject_o *)0x0) {
          __this_01 = (UnityEngine_Canvas_o *)
                      UnityEngine_GameObject__AddComponent<object>
                                (*(UnityEngine_GameObject_o **)pfVar1,MethodInfo_Canvas_AddComponent_Canvas);
          if (__this_01 != (UnityEngine_Canvas_o *)0x0) {
            UnityEngine_Canvas__set_renderMode(__this_01,0,(MethodInfo *)0x0);
            if (*(UnityEngine_GameObject_o **)pfVar1 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__AddComponent<object>
                        (*(UnityEngine_GameObject_o **)pfVar1,MethodInfo_GraphicRaycaster_AddComponent_GraphicRaycaster);
              if (*(UnityEngine_GameObject_o **)pfVar1 != (UnityEngine_GameObject_o *)0x0) {
                scaler = (UnityEngine_UI_CanvasScaler_o *)
                         UnityEngine_GameObject__AddComponent<object>
                                   (*(UnityEngine_GameObject_o **)pfVar1,MethodInfo_CanvasScaler_AddComponent_CanvasScaler);
                if (scaler != (UnityEngine_UI_CanvasScaler_o *)0x0) {
                  (scaler->fields).m_UiScaleMode = 1;
                  (scaler->fields).m_MatchWidthOrHeight = 0.5;
                  Gisketch_Aottg2UI_GisketchUIRoot__ApplyScale(__this,scaler,method_00);
                  pUVar4 = *(UnityEngine_GameObject_o **)&(__this->fields)._motionScale;
                  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                    method_01 = MethodInfo_RectTransform_GetComponent_RectTransform;
                    rect = (UnityEngine_RectTransform_o *)
                           UnityEngine_GameObject__GetComponent<object>
                                     (pUVar4,(MethodInfo_24F0F80 *)MethodInfo_RectTransform_GetComponent_RectTransform);
                    Gisketch_Aottg2UI_GisketchUIRoot__Stretch(rect,method_01);
                    return rect;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.GisketchUIRoot$$CreateLayer
// il2cpp: UnityEngine_Transform_o* Gisketch_Aottg2UI_GisketchUIRoot__CreateLayer (UnityEngine_Transform_o* parent, System_String_o* name, const MethodInfo* method);
// 0x3ac2bb0

UnityEngine_Transform_o *
Gisketch_Aottg2UI_GisketchUIRoot__CreateLayer
          (UnityEngine_Transform_o *parent,System_String_o *name,MethodInfo *method)

{
  System_RuntimeTypeHandle_o handle;
  System_Type_array *components;
  System_Type_o *pSVar1;
  long lVar2;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_RectTransform_o *rect;
  undefined8 uVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  if (DAT_057012eb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    DAT_057012eb = '\x01';
    method = extraout_RDX;
  }
  components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type,1,method);
  handle.fields.value = TypeRef_RectTransform.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (pSVar1 != (System_Type_o *)0x0) {
      lVar2 = il2cpp_runtime_glue(pSVar1,(((components->obj).klass)->_1).element_class);
      if (lVar2 == 0) {
        uVar4 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar4,0);
      }
    }
    if ((int)components->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    components->m_Items[0] = pSVar1;
    il2cpp_runtime_glue(components->m_Items,pSVar1);
    __this = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
    UnityEngine_GameObject___ctor(__this,name,components,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      pUVar3 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(pUVar3,parent,0,(MethodInfo *)0x0);
        method_00 = MethodInfo_RectTransform_GetComponent_RectTransform;
        rect = (UnityEngine_RectTransform_o *)
               UnityEngine_GameObject__GetComponent<object>
                         (__this,(MethodInfo_24F0F80 *)MethodInfo_RectTransform_GetComponent_RectTransform);
        Gisketch_Aottg2UI_GisketchUIRoot__Stretch(rect,method_00);
        pUVar3 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
        return pUVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.GisketchUIRoot$$PromoteLayer
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__PromoteLayer (UnityEngine_Transform_o* layer, int32_t sortingOrder, const MethodInfo* method);
// 0x3ac2d20

void Gisketch_Aottg2UI_GisketchUIRoot__PromoteLayer
               (UnityEngine_Transform_o *layer,int32_t sortingOrder,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_Canvas_o *__this;
  
  if (DAT_057012ec == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Canvas_AddComponent_Canvas);
    il2cpp_init_method_metadata(&MethodInfo_GraphicRaycaster_AddComponent_GraphicRaycaster);
    DAT_057012ec = '\x01';
  }
  if (layer != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)layer,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      __this = (UnityEngine_Canvas_o *)
               UnityEngine_GameObject__AddComponent<object>(pUVar1,MethodInfo_Canvas_AddComponent_Canvas);
      if (__this != (UnityEngine_Canvas_o *)0x0) {
        UnityEngine_Canvas__set_overrideSorting(__this,1,(MethodInfo *)0x0);
        UnityEngine_Canvas__set_sortingOrder(__this,sortingOrder,(MethodInfo *)0x0);
        pUVar1 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)layer,(MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__AddComponent<object>(pUVar1,MethodInfo_GraphicRaycaster_AddComponent_GraphicRaycaster);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.GisketchUIRoot$$FirstScreenId
// il2cpp: System_String_o* Gisketch_Aottg2UI_GisketchUIRoot__FirstScreenId (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* manifest, const MethodInfo* method);
// 0x3ac30f0

System_String_o *
Gisketch_Aottg2UI_GisketchUIRoot__FirstScreenId
          (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *manifest,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *pGVar1;
  
  if (manifest != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
    pGVar1 = (manifest->fields).screens;
    if ((pGVar1 == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *)0x0) ||
       (pGVar1->max_length == 0)) {
      return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    if ((int)pGVar1->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pGVar1->m_Items[0] != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
      return (pGVar1->m_Items[0]->fields).id;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.GisketchUIRoot$$Stretch
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__Stretch (UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x3ac3820

void Gisketch_Aottg2UI_GisketchUIRoot__Stretch(UnityEngine_RectTransform_o *rect,MethodInfo *method)

{
  if (DAT_056fe093 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_056fe093 = '\x01';
  }
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchorMin
              (rect,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    if (DAT_0570136e == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector2);
      DAT_0570136e = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax
              (rect,(UnityEngine_Vector2_o)
                    *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
               (MethodInfo *)0x0);
    if (DAT_056fe093 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector2);
      DAT_056fe093 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMin
              (rect,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    if (DAT_056fe093 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector2);
      DAT_056fe093 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax
              (rect,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.GisketchUIRoot$$DestroyObject
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__DestroyObject (UnityEngine_GameObject_o** go, const MethodInfo* method);
// 0x3ac3160

void Gisketch_Aottg2UI_GisketchUIRoot__DestroyObject
               (UnityEngine_GameObject_o **go,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_057012ed == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057012ed = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)*go;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  pUVar1 = (UnityEngine_Object_o *)*go;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((char)bVar2 == '\0') {
    UnityEngine_Object__DestroyImmediate(pUVar1,(MethodInfo *)0x0);
  }
  else {
    UnityEngine_Object__Destroy(pUVar1,(MethodInfo *)0x0);
  }
  *go = (UnityEngine_GameObject_o *)0x0;
  il2cpp_runtime_glue(go,0);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$MarkEditorPreview
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__MarkEditorPreview (UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x3ac3810

void Gisketch_Aottg2UI_GisketchUIRoot__MarkEditorPreview
               (UnityEngine_GameObject_o *go,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$.ctor
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot___ctor (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3ac3920

void Gisketch_Aottg2UI_GisketchUIRoot___ctor
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_IEqualityComparer_T__o *comparer;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_HashSet_object__o *__this_01;
  
  if (DAT_057012ee == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_StringComparer);
    DAT_057012ee = '\x01';
  }
  (__this->fields)._screenPrewarmIdleDelay = 0.75;
  (__this->fields)._screenPrewarmKeepAliveFrames = 10;
  __this_00 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_String);
  (__this->fields)._screenPrewarmQueue = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._screenPrewarmQueue,__this_00);
  if (*(int *)(TypeInfo_StringComparer + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570136f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringComparer);
    DAT_0570136f = '\x01';
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  comparer = *(System_Collections_Generic_IEqualityComparer_T__o **)
              (*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
  __this_01 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this_01,comparer,MethodInfo_HashSet_1_System_String);
  (__this->fields)._screenPrewarmed = (System_Collections_Generic_HashSet_string__o *)__this_01;
  il2cpp_runtime_glue(&(__this->fields)._screenPrewarmed);
  (__this->fields)._scalePreset = 2;
  (__this->fields)._scale = 1.0;
  (__this->fields)._buildOnStart = 0x1010101;
  (__this->fields)._previewInEditor = 0x3f800000;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


