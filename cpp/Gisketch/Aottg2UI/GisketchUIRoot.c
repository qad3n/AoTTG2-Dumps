// Type: Gisketch.Aottg2UI.GisketchUIRoot
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI/GisketchUIRoot.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.GisketchUIRoot.<>c__DisplayClass42_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot___c__DisplayClass42_0___ctor (Gisketch_Aottg2UI_GisketchUIRoot___c__DisplayClass42_0_o* __this, const MethodInfo* method);
// 0x3b2a2e0

void Gisketch_Aottg2UI_GisketchUIRoot___c__DisplayClass42_0___ctor
               (Gisketch_Aottg2UI_GisketchUIRoot___c__DisplayClass42_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<>c__DisplayClass42_0$$<Build>b__0
// il2cpp: Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* Gisketch_Aottg2UI_GisketchUIRoot___c__DisplayClass42_0___Build_b__0 (Gisketch_Aottg2UI_GisketchUIRoot___c__DisplayClass42_0_o* __this, System_String_o* id, const MethodInfo* method);
// 0x3b2cca0

Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *
Gisketch_Aottg2UI_GisketchUIRoot___c__DisplayClass42_0___Build_b__0
          (Gisketch_Aottg2UI_GisketchUIRoot___c__DisplayClass42_0_o *__this,System_String_o *id,
          MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar3;
  Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *pGVar4;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  long lVar5;
  System_Collections_Generic_List_AottgDialogEntry__c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  code *vtableDispatch;
  bool_conflict bVar8;
  int iVar9;
  long *plVar10;
  Il2CppMethodPointer *ppIVar11;
  Il2CppObject *__this_01;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *pGVar12;
  MethodInfo *method_00;
  System_Collections_Generic_List_AottgDialogEntry__o *pSVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  
  pGVar3 = (__this->fields).__4__this;
  if (pGVar3 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    uVar16 = *(uint *)&(__this->fields).catalog;
    pGVar12 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)(ulong)uVar16;
    if ((uVar16 == 2) || (uVar16 == 0xfffffffd)) {
      if (g_data_057a9c08 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
        g_data_057a9c08 = '\x01';
      }
      *(undefined4 *)&(__this->fields).catalog = 0xffffffff;
      plVar10 = (long *)il2cpp_runtime_helper_023051f0(__this[1].fields.catalog,TypeInfo_IDisposable);
      pGVar12 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0;
      if (plVar10 != (long *)0x0) {
        lVar15 = *plVar10;
        if ((ulong)*(ushort *)(lVar15 + 0x12e) != 0) {
          lVar5 = *(long *)(lVar15 + 0xb0);
          lVar14 = 0;
          do {
            if (*(long *)(lVar5 + lVar14) == TypeInfo_IDisposable) {
              auVar17._8_8_ = lVar5;
              auVar17._0_8_ = lVar15 + (long)*(int *)(lVar5 + 8 + lVar14) * 0x10 + 0x138;
              goto label_03b2cd75;
            }
            lVar14 = lVar14 + 0x10;
          } while ((ulong)*(ushort *)(lVar15 + 0x12e) << 4 != lVar14);
        }
        auVar17 = il2cpp_runtime_helper_02300d20(plVar10,TypeInfo_IDisposable,0);
label_03b2cd75:
        vtableDispatch = (code *)*auVar17._0_8_;
        pGVar12 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)
                  (*vtableDispatch)(plVar10,auVar17._0_8_[1],auVar17._8_8_,vtableDispatch);
        return pGVar12;
      }
    }
    return pGVar12;
  }
  pGVar4 = (__this->fields).catalog;
  __this_00 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)(pGVar3->fields)._eventSystemObject;
  if (g_data_057a9d56 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgDialog_Instance_AottgDialog,id,__this_00,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgDialogEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyList_AottgDialogEntry);
    g_data_057a9d56 = '\x01';
  }
  if ((pGVar4 == (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)0x0) ||
     (bVar8 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0), (char)bVar8 != '\0')) {
    return (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0;
  }
  pSVar13 = (pGVar4->fields)._dialogs;
  if (pSVar13 != (System_Collections_Generic_List_AottgDialogEntry__o *)0x0) {
    uVar16 = 0;
    do {
      pSVar6 = pSVar13->klass;
      uVar1._0_1_ = (pSVar6->_2).rank;
      uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar7 = (pSVar6->_1).interfaceOffsets;
        lVar15 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar15) == TypeInfo_IReadOnlyCollection_AottgDialogEntry) {
            ppIVar11 = &(&(pSVar6->vtable)._0_Equals)[*(int *)((long)&pIVar7->offset + lVar15)].methodPtr;
            goto label_03b5de63;
          }
          lVar15 = lVar15 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar15);
      }
      ppIVar11 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar13,TypeInfo_IReadOnlyCollection_AottgDialogEntry,0);
label_03b5de63:
      iVar9 = (**ppIVar11)(pSVar13,(MethodInfo *)ppIVar11[1]);
      if (iVar9 <= (int)uVar16) {
        return (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0;
      }
      pSVar13 = (pGVar4->fields)._dialogs;
      if (pSVar13 == (System_Collections_Generic_List_AottgDialogEntry__o *)0x0) break;
      pSVar6 = pSVar13->klass;
      uVar2._0_1_ = (pSVar6->_2).rank;
      uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar7 = (pSVar6->_1).interfaceOffsets;
        lVar15 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar15) == TypeInfo_IReadOnlyList_AottgDialogEntry) {
            ppIVar11 = &(&(pSVar6->vtable)._0_Equals)[*(int *)((long)&pIVar7->offset + lVar15)].methodPtr;
            goto label_03b5dee3;
          }
          lVar15 = lVar15 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar15);
      }
      ppIVar11 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar13,TypeInfo_IReadOnlyList_AottgDialogEntry,0);
label_03b5dee3:
      lVar15 = (**ppIVar11)(pSVar13,(ulong)uVar16,(MethodInfo *)ppIVar11[1]);
      if (lVar15 == 0) break;
      bVar8 = System_String__Equals_3af50f0(*(System_String_o **)(lVar15 + 0x10),id,5,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        if (__this_00 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgActionRegistry__ClearOwner(__this_00,id,method_00);
        }
        __this_01 = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance_object_
                              (*(System_Type_o **)(lVar15 + 0x18),MethodInfo_AottgDialog_Instance_AottgDialog);
        if (__this_01 != (Il2CppObject *)0x0) {
          pGVar12 = Gisketch_Aottg2UI_Code_AottgDialog__BuildDefinition
                              ((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this_01,
                               *(System_String_o **)(lVar15 + 0x10),
                               *(Gisketch_Aottg2UI_Code_AottgDialogAttribute_o **)(lVar15 + 0x20),__this_00,
                               (MethodInfo *)0x0);
          return pGVar12;
        }
        break;
      }
      uVar16 = uVar16 + 1;
      pSVar13 = (pGVar4->fields)._dialogs;
    } while (pSVar13 != (System_Collections_Generic_List_AottgDialogEntry__o *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  vtableDispatch = (code *)swi(3);
  pGVar12 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)(*vtableDispatch)();
  return pGVar12;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<RunScreenPrewarmQueue>d__73$$.ctor
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__73___ctor (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__73_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3b2c310

void Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__73___ctor
               (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__73_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<RunScreenPrewarmQueue>d__73$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__73__System_IDisposable_Dispose (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__73_o* __this, const MethodInfo* method);
// 0x3b2ccc0

void Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__73__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__73_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *vtableDispatch;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == 2) || (iVar1 == -3)) {
    if (g_data_057a9c08 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
      g_data_057a9c08 = '\x01';
    }
    (__this->fields).__1__state = -1;
    plVar4 = (long *)il2cpp_runtime_helper_023051f0((__this->fields)._prewarm_5__3,TypeInfo_IDisposable);
    if (plVar4 != (long *)0x0) {
      lVar2 = *plVar4;
      if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
        lVar3 = *(long *)(lVar2 + 0xb0);
        lVar5 = 0;
        do {
          if (*(long *)(lVar3 + lVar5) == TypeInfo_IDisposable) {
            auVar6._8_8_ = lVar3;
            auVar6._0_8_ = lVar2 + (long)*(int *)(lVar3 + 8 + lVar5) * 0x10 + 0x138;
            goto label_03b2cd75;
          }
          lVar5 = lVar5 + 0x10;
        } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar5);
      }
      auVar6 = il2cpp_runtime_helper_02300d20(plVar4,TypeInfo_IDisposable,0);
label_03b2cd75:
      vtableDispatch = (code *)*auVar6._0_8_;
      (*vtableDispatch)(plVar4,auVar6._0_8_[1],auVar6._8_8_,vtableDispatch);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<RunScreenPrewarmQueue>d__73$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__73__MoveNext (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__73_o* __this, const MethodInfo* method);
// 0x3b2cd90

bool_conflict
Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__73__MoveNext
          (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__73_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  Il2CppClass *__this_00;
  System_Collections_IEnumerator_c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *pGVar6;
  System_Collections_IEnumerator_o *pSVar7;
  System_Collections_Generic_HashSet_object__o *__this_01;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar8;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *pGVar9;
  code *vtableDispatch;
  char cVar10;
  bool_conflict bVar11;
  undefined8 *puVar12;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *pGVar13;
  Il2CppMethodPointer *ppIVar14;
  Il2CppObject *pIVar15;
  long *plVar16;
  undefined8 uVar17;
  System_Collections_IEnumerator_o *unaff_RBP;
  MethodInfo *method_00;
  System_String_o **ppSVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long *unaff_R15;
  undefined1 auVar22 [12];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  ppSVar18 = (System_String_o **)__this;
  if (g_data_057a9c07 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    ppSVar18 = &"input";
    il2cpp_runtime_helper_023445d0();
    g_data_057a9c07 = '\x01';
  }
  iVar3 = (__this->fields).__1__state;
  __this_00 = (Il2CppClass *)(__this->fields).__4__this;
  if (iVar3 == 0) {
    (__this->fields).__1__state = -1;
    if (__this_00 != (Il2CppClass *)0x0) {
label_03b2d102:
      pGVar9 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)(__this_00->_1).nestedTypes;
      if (pGVar9 == (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
label_03b2d242:
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        if (*(int *)&(pGVar9->fields)._context < 1) {
          (__this_00->_1).interfaceOffsets = (Il2CppRuntimeInterfaceOffsetPair *)0x0;
          il2cpp_runtime_helper_022b4080(&(__this_00->_1).interfaceOffsets,0);
          return 0;
        }
        method = (MethodInfo *)
                 System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pGVar9,0,MethodInfo_String_get_Item);
        (__this->fields)._id_5__2 = (System_String_o *)method;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._id_5__2);
        pGVar9 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)(__this_00->_1).nestedTypes;
        if (pGVar9 == (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) goto label_03b2d242;
        System_Collections_Generic_List_object___RemoveAt
                  ((System_Collections_Generic_List_object__o *)pGVar9,0,MethodInfo_Void_RemoveAt);
        if (g_data_057a9bfe == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_WaitForScreenPrewarmIdle_d__74);
          g_data_057a9bfe = '\x01';
        }
        pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForScreenPrewarmIdle_d__74);
        method = (MethodInfo *)0x0;
        System_Object___ctor(pIVar15,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar15[1].klass = 0;
        if (pIVar15 != (Il2CppObject *)0x0) {
          pIVar15[2].klass = __this_00;
          il2cpp_runtime_helper_022b4080(pIVar15 + 2,__this_00);
          (__this->fields).__2__current = pIVar15;
          il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar15);
          (__this->fields).__1__state = 1;
          return (bool_conflict)CONCAT71((int7)((ulong)pIVar15 >> 8),1);
        }
      }
      il2cpp_runtime_helper_022b2c90();
      goto label_03b2d24c;
    }
    auVar23 = il2cpp_runtime_helper_022b2c90();
label_03b2cf6b:
    puVar12 = (undefined8 *)
              ((long)*(int *)((long)&((Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__73_o *)
                                     ppSVar18)->monitor + auVar23._8_8_) * 0x10 + auVar23._0_8_ + 0x138);
label_03b2cf7e:
    method = (MethodInfo *)puVar12[1];
    cVar10 = (*(code *)*puVar12)();
    if (cVar10 == '\0') {
label_03b2cfe8:
      bVar11 = Gisketch_Aottg2UI_GisketchUIRoot__CanContinueScreenPrewarm
                         ((Gisketch_Aottg2UI_GisketchUIRoot_o *)__this_00,method);
      if (g_data_057a9c08 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
        g_data_057a9c08 = '\x01';
      }
      (__this->fields).__1__state = -1;
      method = TypeInfo_IDisposable;
      plVar16 = (long *)il2cpp_runtime_helper_023051f0();
      if (plVar16 != (long *)0x0) {
        lVar19 = *plVar16;
        if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
          lVar20 = 0;
          do {
            if (*(MethodInfo **)(*(long *)(lVar19 + 0xb0) + lVar20) == TypeInfo_IDisposable) {
              puVar12 = (undefined8 *)
                        (lVar19 + (long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar20) * 0x10 + 0x138);
              goto label_03b2d08d;
            }
            lVar20 = lVar20 + 0x10;
          } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar20);
        }
        puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar16,TypeInfo_IDisposable,0);
label_03b2d08d:
        method = (MethodInfo *)puVar12[1];
        (*(code *)*puVar12)(plVar16);
      }
      if ((char)bVar11 == '\0') {
        pGVar8 = (__this_00->_1).fields;
        if (pGVar8 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
          Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelPrewarm(pGVar8,"input",(MethodInfo *)0x0)
          ;
        }
label_03b2d0dd:
        (__this->fields)._id_5__2 = (System_String_o *)0x0;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._id_5__2);
        (__this->fields)._prewarm_5__3 = (System_Collections_IEnumerator_o *)0x0;
        method = (MethodInfo *)0x0;
        il2cpp_runtime_helper_022b4080();
        goto label_03b2d102;
      }
      __this_01 = (System_Collections_Generic_HashSet_object__o *)(__this_00->_1).implementedInterfaces;
      if (__this_01 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Add
                  (__this_01,(Il2CppObject *)(__this->fields)._id_5__2,MethodInfo_Boolean_Add);
        goto label_03b2d0dd;
      }
      goto label_03b2d25b;
    }
    pSVar7 = (__this->fields)._prewarm_5__3;
    method_00 = method;
    if (pSVar7 != (System_Collections_IEnumerator_o *)0x0) {
      pSVar4 = pSVar7->klass;
      uVar2._0_1_ = (pSVar4->_2).rank;
      uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar5 = (pSVar4->_1).interfaceOffsets;
        lVar19 = 0;
        do {
          if (*(long *)((long)&pIVar5->interfaceType + lVar19) == *unaff_R15) {
            ppIVar14 = &pSVar4->vtable[*(int *)((long)&pIVar5->offset + lVar19) + 1].methodPtr;
            goto label_03b2d214;
          }
          lVar19 = lVar19 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar19);
      }
      ppIVar14 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar7,*unaff_R15,1);
label_03b2d214:
      pIVar15 = (Il2CppObject *)(**ppIVar14)(pSVar7,(MethodInfo *)ppIVar14[1]);
      (__this->fields).__2__current = pIVar15;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar15);
      (__this->fields).__1__state = 2;
      return (bool_conflict)CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
    }
  }
  else {
    if (iVar3 == 1) {
      (__this->fields).__1__state = -1;
      if (__this_00 == (Il2CppClass *)0x0) goto label_03b2d251;
      method_00 = (MethodInfo *)(__this->fields)._id_5__2;
      method = (MethodInfo *)0x0;
      bVar11 = System_String__IsNullOrEmpty((System_String_o *)method_00,(MethodInfo *)0x0);
      if (((((char)bVar11 != '\0') ||
           (bVar11 = Gisketch_Aottg2UI_GisketchUIRoot__CanWaitForScreenPrewarm
                               ((Gisketch_Aottg2UI_GisketchUIRoot_o *)__this_00,method), (char)bVar11 == '\0')
           ) || (pGVar6 = (__this_00->_1).interopData,
                pGVar6 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0)) ||
         (((method = method_00,
           pGVar13 = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen
                               (pGVar6,(System_String_o *)method_00,(MethodInfo *)0x0),
           pGVar13 == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0 ||
           (pGVar6 = (__this_00->_1).fields,
           pGVar6 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0)) ||
          (bVar11 = System_String__Equals_3af50f0
                              ((System_String_o *)(pGVar6->fields).dialogs,(System_String_o *)method_00,5,
                               (MethodInfo *)0x0), method = method_00, (char)bVar11 != '\0'))))
      goto label_03b2d102;
      pGVar8 = (__this_00->_1).fields;
      if (pGVar8 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) goto label_03b2d265;
      method = (MethodInfo *)
               Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen
                         (pGVar8,(__this->fields)._id_5__2,*(int32_t *)((long)&(__this_00->_1).methods + 4),
                          (MethodInfo *)0x0);
      (__this->fields)._prewarm_5__3 = (System_Collections_IEnumerator_o *)method;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._prewarm_5__3);
      (__this->fields).__1__state = -3;
label_03b2ce26:
      bVar11 = Gisketch_Aottg2UI_GisketchUIRoot__CanContinueScreenPrewarm
                         ((Gisketch_Aottg2UI_GisketchUIRoot_o *)__this_00,method);
      if ((char)bVar11 == '\0') goto label_03b2cfe8;
      unaff_RBP = (__this->fields)._prewarm_5__3;
      if (unaff_RBP != (System_Collections_IEnumerator_o *)0x0) {
        unaff_R15 = &TypeInfo_IEnumerator;
        pSVar4 = unaff_RBP->klass;
        uVar1._0_1_ = (pSVar4->_2).rank;
        uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar5 = (pSVar4->_1).interfaceOffsets;
          auVar23._8_8_ = pIVar5;
          auVar23._0_8_ = pSVar4;
          ppSVar18 = (System_String_o **)0x0;
          do {
            if (*(long *)((long)&((Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__73_o *)ppSVar18)
                                 ->klass + (long)pIVar5) == TypeInfo_IEnumerator) goto label_03b2cf6b;
            ppSVar18 = (System_String_o **)
                       &((Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__73_o *)ppSVar18)->fields;
          } while ((System_String_o **)((ulong)uVar1 << 4) != ppSVar18);
        }
        puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_RBP,TypeInfo_IEnumerator,0);
        goto label_03b2cf7e;
      }
    }
    else {
      if (iVar3 != 2) {
        return 0;
      }
      (__this->fields).__1__state = -3;
      if (__this_00 != (Il2CppClass *)0x0) goto label_03b2ce26;
label_03b2d24c:
      il2cpp_runtime_helper_022b2c90();
label_03b2d251:
      il2cpp_runtime_helper_022b2c90();
    }
    il2cpp_runtime_helper_022b2c90();
label_03b2d25b:
    il2cpp_runtime_helper_022b2c90();
    method_00 = method;
  }
  il2cpp_runtime_helper_022b2c90();
label_03b2d265:
  auVar22 = il2cpp_runtime_helper_022b2c90();
  uVar17 = auVar22._0_8_;
  if (auVar22._8_4_ == 1) {
    plVar16 = (long *)__cxa_begin_catch(uVar17);
    lVar19 = *plVar16;
    __cxa_end_catch();
    if (lVar19 == 0) {
      return 0;
    }
    Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__73__System_IDisposable_Dispose
              (__this,method_00);
    uVar17 = il2cpp_runtime_helper_022fefe0(lVar19);
    if (lVar19 != 0) {
      Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__73__System_IDisposable_Dispose
                (__this,method_00);
      lVar19 = il2cpp_runtime_helper_022fefe0(lVar19);
      il2cpp_runtime_helper_01f66400();
      if (g_data_057a9c08 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
        g_data_057a9c08 = '\x01';
      }
      *(undefined4 *)(lVar19 + 0x10) = 0xffffffff;
      plVar16 = (long *)il2cpp_runtime_helper_023051f0(*(undefined8 *)(lVar19 + 0x30),TypeInfo_IDisposable);
      if (plVar16 == (long *)0x0) {
        return 0;
      }
      lVar19 = *plVar16;
      if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
        lVar20 = *(long *)(lVar19 + 0xb0);
        lVar21 = 0;
        do {
          if (*(MethodInfo **)(lVar20 + lVar21) == TypeInfo_IDisposable) {
            auVar24._8_8_ = lVar20;
            auVar24._0_8_ = lVar19 + (long)*(int *)(lVar20 + 8 + lVar21) * 0x10 + 0x138;
            goto label_03b2d425;
          }
          lVar21 = lVar21 + 0x10;
        } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar21);
      }
      auVar24 = il2cpp_runtime_helper_02300d20(plVar16,TypeInfo_IDisposable,0);
label_03b2d425:
      vtableDispatch = (code *)*auVar24._0_8_;
      bVar11 = (*vtableDispatch)(plVar16,auVar24._0_8_[1],auVar24._8_8_,vtableDispatch);
      return bVar11;
    }
  }
  _Unwind_Resume(uVar17);
}


// Gisketch.Aottg2UI.GisketchUIRoot.<RunScreenPrewarmQueue>d__73$$<>m__Finally1
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__73____m__Finally1 (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__73_o* __this, const MethodInfo* method);
// 0x3b2d380

void Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__73____m__Finally1
               (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__73_o *__this,MethodInfo *method)

{
  long lVar1;
  long lVar2;
  code *vtableDispatch;
  long *plVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if (g_data_057a9c08 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    g_data_057a9c08 = '\x01';
  }
  (__this->fields).__1__state = -1;
  plVar3 = (long *)il2cpp_runtime_helper_023051f0((__this->fields)._prewarm_5__3,TypeInfo_IDisposable);
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
        goto label_03b2d425;
      }
      lVar4 = lVar4 + 0x10;
    } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar4);
  }
  auVar5 = il2cpp_runtime_helper_02300d20(plVar3,TypeInfo_IDisposable,0);
label_03b2d425:
  vtableDispatch = (code *)*auVar5._0_8_;
  (*vtableDispatch)(plVar3,auVar5._0_8_[1],auVar5._8_8_,vtableDispatch);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<RunScreenPrewarmQueue>d__73$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__73__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__73_o* __this, const MethodInfo* method);
// 0x3b2d440

Il2CppObject *
Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__73__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__73_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<RunScreenPrewarmQueue>d__73$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__73__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__73_o* __this, const MethodInfo* method);
// 0x3b2d450

void Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__73__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__73_o *__this,MethodInfo *method)

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


// Gisketch.Aottg2UI.GisketchUIRoot.<RunScreenPrewarmQueue>d__73$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__73__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__73_o* __this, const MethodInfo* method);
// 0x3b2d490

Il2CppObject *
Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__73__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__73_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<WaitForScreenPrewarmIdle>d__74$$.ctor
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__74___ctor (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__74_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3b2c3a0

void Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__74___ctor
               (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__74_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<WaitForScreenPrewarmIdle>d__74$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__74__System_IDisposable_Dispose (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__74_o* __this, const MethodInfo* method);
// 0x3b2d4a0

void Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__74__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__74_o *__this,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<WaitForScreenPrewarmIdle>d__74$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__74__MoveNext (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__74_o* __this, const MethodInfo* method);
// 0x3b2d4b0

bool_conflict
Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__74__MoveNext
          (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__74_o *__this,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  undefined8 uVar3;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_00;
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
    if (__this_00 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_03b2d5d1;
    fVar4 = *(float *)&(__this_00->fields)._Overlays_k__BackingField;
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
          (bVar2 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0), (char)bVar2 == '\0')) &&
         (bVar2 = UnityEngine_Input__GetMouseButtonDown(1,(MethodInfo *)0x0), (char)bVar2 == '\0')) {
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
    uVar3 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)uVar3 >> 8),1);
  }
label_03b2d5d1:
  il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)(__this_00->fields).m_CancellationTokenSource;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<WaitForScreenPrewarmIdle>d__74$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__74__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__74_o* __this, const MethodInfo* method);
// 0x3b2d5e0

Il2CppObject *
Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__74__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__74_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<WaitForScreenPrewarmIdle>d__74$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__74__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__74_o* __this, const MethodInfo* method);
// 0x3b2d5f0

void Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__74__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__74_o *__this,MethodInfo *method)

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


// Gisketch.Aottg2UI.GisketchUIRoot.<WaitForScreenPrewarmIdle>d__74$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__74__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__74_o* __this, const MethodInfo* method);
// 0x3b2d630

Il2CppObject *
Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__74__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__74_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$get_State
// il2cpp: Gisketch_Aottg2UI_State_GisketchUIState_o* Gisketch_Aottg2UI_GisketchUIRoot__get_State (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3b29630

Gisketch_Aottg2UI_State_GisketchUIState_o *
Gisketch_Aottg2UI_GisketchUIRoot__get_State(Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  return (Gisketch_Aottg2UI_State_GisketchUIState_o *)(__this->fields)._codeActions;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$set_State
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__set_State (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_State_GisketchUIState_o* value, const MethodInfo* method);
// 0x3b29640

void Gisketch_Aottg2UI_GisketchUIRoot__set_State
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,Gisketch_Aottg2UI_State_GisketchUIState_o *value,
               MethodInfo *method)

{
  (__this->fields)._codeActions = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._codeActions);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$get_Manifest
// il2cpp: Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* Gisketch_Aottg2UI_GisketchUIRoot__get_Manifest (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3b29650

Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *
Gisketch_Aottg2UI_GisketchUIRoot__get_Manifest(Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  return *(Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o **)&(__this->fields)._suppressNextBuildMotion;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$set_Manifest
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__set_Manifest (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* value, const MethodInfo* method);
// 0x3b29660

void Gisketch_Aottg2UI_GisketchUIRoot__set_Manifest
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,
               Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *value,MethodInfo *method)

{
  *(Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o **)&(__this->fields)._suppressNextBuildMotion = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._suppressNextBuildMotion);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$get_Theme
// il2cpp: Gisketch_Aottg2UI_Styling_GisketchTheme_o* Gisketch_Aottg2UI_GisketchUIRoot__get_Theme (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3b29670

Gisketch_Aottg2UI_Styling_GisketchTheme_o *
Gisketch_Aottg2UI_GisketchUIRoot__get_Theme(Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  return (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)(__this->fields)._State_k__BackingField;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$set_Theme
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__set_Theme (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_Styling_GisketchTheme_o* value, const MethodInfo* method);
// 0x3b29680

void Gisketch_Aottg2UI_GisketchUIRoot__set_Theme
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,Gisketch_Aottg2UI_Styling_GisketchTheme_o *value,
               MethodInfo *method)

{
  (__this->fields)._State_k__BackingField = (Gisketch_Aottg2UI_State_GisketchUIState_o *)value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._State_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$get_Screens
// il2cpp: Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* Gisketch_Aottg2UI_GisketchUIRoot__get_Screens (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3b29690

Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *
Gisketch_Aottg2UI_GisketchUIRoot__get_Screens(Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  return (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)(__this->fields)._Manifest_k__BackingField;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$set_Screens
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__set_Screens (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* value, const MethodInfo* method);
// 0x3b296a0

void Gisketch_Aottg2UI_GisketchUIRoot__set_Screens
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,
               Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *value,MethodInfo *method)

{
  (__this->fields)._Manifest_k__BackingField = (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Manifest_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$get_Overlays
// il2cpp: Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* Gisketch_Aottg2UI_GisketchUIRoot__get_Overlays (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3b296b0

Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *
Gisketch_Aottg2UI_GisketchUIRoot__get_Overlays(Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  return (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)(__this->fields)._Theme_k__BackingField;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$set_Overlays
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__set_Overlays (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* value, const MethodInfo* method);
// 0x3b296c0

void Gisketch_Aottg2UI_GisketchUIRoot__set_Overlays
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,
               Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *value,MethodInfo *method)

{
  (__this->fields)._Theme_k__BackingField = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Theme_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$get_Toasts
// il2cpp: Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* Gisketch_Aottg2UI_GisketchUIRoot__get_Toasts (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3b296e0

Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *
Gisketch_Aottg2UI_GisketchUIRoot__get_Toasts(Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  return (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)(__this->fields)._Screens_k__BackingField;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$set_Toasts
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__set_Toasts (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* value, const MethodInfo* method);
// 0x3b296f0

void Gisketch_Aottg2UI_GisketchUIRoot__set_Toasts
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,
               Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *value,MethodInfo *method)

{
  (__this->fields)._Screens_k__BackingField = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Screens_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$Start
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__Start (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3b29710

void Gisketch_Aottg2UI_GisketchUIRoot__Start(Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  int iVar1;
  char cVar2;
  bool_conflict bVar3;
  
  if (g_data_057a9bea == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    g_data_057a9bea = '\x01';
    iVar1 = *(int *)(TypeInfo_Application + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Application + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
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
// 0x3b29e10

void Gisketch_Aottg2UI_GisketchUIRoot__Update(Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_01;
  char cVar2;
  bool_conflict bVar3;
  int32_t iVar4;
  MethodInfo *method_00;
  
  if (g_data_057a9beb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
    g_data_057a9beb = '\x01';
    iVar1 = *(int *)(TypeInfo_Application + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Application + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
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
  bVar3 = Gisketch_Aottg2UI_Actions_GisketchInputCapture__get_IsActive((MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  bVar3 = UnityEngine_Input__GetKeyDown(0x1b,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return;
  }
  if (*(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057a9c44 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
    g_data_057a9c44 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar1 = *(int *)(TypeInfo_GisketchMotionDriver[2].virtualMethodPointer + 8);
  iVar4 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  if (iVar1 != iVar4) {
    method_00 = TypeInfo_GisketchMotionDriver;
    if (*(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__CompleteActiveForSkip(method_00);
    if (((char)bVar3 == '\0') &&
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
// 0x3b29790

void Gisketch_Aottg2UI_GisketchUIRoot__Build(Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

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
  char cVar8;
  bool_conflict bVar9;
  int32_t iVar10;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_01;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar11;
  Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *pGVar12;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *manifest;
  UnityEngine_GameObject_o *pUVar13;
  MethodInfo *pMVar14;
  UnityEngine_RectTransform_o *parent;
  UnityEngine_Transform_o *screenLayer;
  UnityEngine_Transform_o *layer;
  UnityEngine_Transform_o *layer_00;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar15;
  Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *localizer;
  System_Func_string__GisketchOverlayDefinition__o *dialogResolver;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *__this_02;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar16;
  System_String_o *json;
  Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *definition;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_03;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_Fields *pGVar17;
  byte bVar18;
  float fVar19;
  
  if (g_data_057a9bec == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Aottg2GisketchLocalizer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgActionRegistry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_GisketchOverlayDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchBuildContext);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchOverlayManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchScreenBuilder);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchScreenRouter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTheme);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchToastManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIState);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IGisketchActionHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchOverlayDefinition_Build_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass42_0);
    il2cpp_runtime_helper_023445d0(&"AoTTG Toasts");
    il2cpp_runtime_helper_023445d0(&"AoTTG Screens");
    il2cpp_runtime_helper_023445d0(&"AoTTG Overlays");
    g_data_057a9bec = '\x01';
  }
  __this_01 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass42_0);
  pMVar14 = (MethodInfo *)0x0;
  __this_03 = __this_01;
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    (__this_01->fields).m_CancellationTokenSource = (System_Threading_CancellationTokenSource_o *)__this;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).m_CancellationTokenSource);
    bVar2 = *(byte *)&(__this->fields)._customActions;
    *(undefined1 *)&(__this->fields)._customActions = 0;
    Gisketch_Aottg2UI_GisketchUIRoot__Clear_3a2a2f0(__this,0,method_00);
    pGVar11 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgActionRegistry);
    Gisketch_Aottg2UI_Code_AottgActionRegistry___ctor(pGVar11,(MethodInfo *)0x0);
    (__this->fields)._eventSystemObject = (UnityEngine_GameObject_o *)pGVar11;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._eventSystemObject,pGVar11);
    pGVar12 = Gisketch_Aottg2UI_Code_AottgCodeCatalog__Discover((MethodInfo *)0x0);
    (__this_01->fields).m_CachedPtr = (intptr_t)pGVar12;
    il2cpp_runtime_helper_022b4080(&__this_01->fields,pGVar12);
    manifest = Gisketch_Aottg2UI_GisketchUIRoot__LoadCodeManifest
                         (__this,(Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)(__this_01->fields).m_CachedPtr,
                          method_01);
    if (manifest == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
      return;
    }
    *(Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o **)&(__this->fields)._suppressNextBuildMotion =
         manifest;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._suppressNextBuildMotion,manifest);
    bVar18 = bVar2 ^ 1;
    if (*(char *)((long)&(__this->fields)._buildOnStart + 3) == '\0') {
      bVar18 = 0;
    }
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pbVar5 = *(byte **)(TypeInfo_GisketchMotion + 0xb8);
    *pbVar5 = bVar18;
    fVar1 = (float)(__this->fields)._previewInEditor;
    fVar19 = 0.0;
    if (0.0 <= fVar1) {
      fVar19 = fVar1;
    }
    *(float *)(pbVar5 + 4) = fVar19;
    uVar6._0_4_ = (__this->fields)._createEventSystem;
    uVar6._4_4_ = (__this->fields)._motionEnabled;
    pUVar13 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023051f0(uVar6,TypeInfo_IGisketchActionHandler);
    (__this->fields)._canvasObject = pUVar13;
    il2cpp_runtime_helper_023051f0(uVar6,TypeInfo_IGisketchActionHandler);
    il2cpp_runtime_helper_022b4080(&(__this->fields)._canvasObject);
    pMVar14 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIState);
    Gisketch_Aottg2UI_State_GisketchUIState___ctor
              ((Gisketch_Aottg2UI_State_GisketchUIState_o *)pMVar14,(MethodInfo *)0x0);
    (__this->fields)._codeActions = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)pMVar14;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._codeActions);
    Gisketch_Aottg2UI_GisketchUIRoot__EnsureEventSystem(__this,pMVar14);
    parent = Gisketch_Aottg2UI_GisketchUIRoot__CreateCanvas(__this,pMVar14);
    screenLayer = Gisketch_Aottg2UI_GisketchUIRoot__CreateLayer
                            ((UnityEngine_Transform_o *)parent,"AoTTG Screens",method_02);
    layer = Gisketch_Aottg2UI_GisketchUIRoot__CreateLayer
                      ((UnityEngine_Transform_o *)parent,"AoTTG Overlays",method_03);
    layer_00 = Gisketch_Aottg2UI_GisketchUIRoot__CreateLayer
                         ((UnityEngine_Transform_o *)parent,"AoTTG Toasts",method_04);
    Gisketch_Aottg2UI_GisketchUIRoot__PromoteLayer(layer,900,method_05);
    Gisketch_Aottg2UI_GisketchUIRoot__PromoteLayer(layer_00,1000,method_06);
    pUVar13 = *(UnityEngine_GameObject_o **)&(__this->fields)._motionScale;
    if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar14 = (MethodInfo *)0x0;
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout(pUVar13,(MethodInfo *)0x0);
    definition = (manifest->fields).theme;
    if (definition == (Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *)0x0) {
      x = (UnityEngine_Object_o *)(__this->fields)._themeJson;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar14 = (MethodInfo *)0x0;
      bVar9 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        __this_00 = (__this->fields)._themeJson;
        __this_03 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
        if (__this_00 == (UnityEngine_TextAsset_o *)0x0) goto label_03b29df7;
        json = UnityEngine_TextAsset__get_text(__this_00,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057a9c6f == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTheme);
          g_data_057a9c6f = '\x01';
        }
        pMVar14 = (MethodInfo *)0x0;
        definition = Gisketch_Aottg2UI_Data_GisketchThemeDefinition__FromJson(json,(MethodInfo *)0x0);
        iVar4 = *(int *)(TypeInfo_GisketchTheme + 0xe4);
        goto joined_r0x03b29d33;
      }
      if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pGVar15 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)**(undefined8 **)(TypeInfo_GisketchTheme + 0xb8);
    }
    else {
      iVar4 = *(int *)(TypeInfo_GisketchTheme + 0xe4);
joined_r0x03b29d33:
      if (iVar4 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pGVar15 = Gisketch_Aottg2UI_Styling_GisketchTheme__FromDefinition(definition,pMVar14);
    }
    (__this->fields)._State_k__BackingField = (Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar15;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._State_k__BackingField);
    localizer = (Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Aottg2GisketchLocalizer);
    Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___ctor
              ((Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *)localizer,(MethodInfo *)0x0);
    pGVar11 = (__this->fields)._codeActions;
    dialogResolver = (System_Func_string__GisketchOverlayDefinition__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_GisketchOverlayDefinition);
    System_Func_object__object____ctor();
    __this_02 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchBuildContext);
    Gisketch_Aottg2UI_Building_GisketchBuildContext___ctor
              (__this_02,manifest,pGVar15,localizer,
               (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)__this,
               (Gisketch_Aottg2UI_State_GisketchUIState_o *)pGVar11,
               (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0,dialogResolver,(MethodInfo *)0x0)
    ;
    pGVar16 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchScreenRouter);
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter___ctor
              (pGVar16,screenLayer,__this_02,(UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    (__this->fields)._Manifest_k__BackingField =
         (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)pGVar16;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._Manifest_k__BackingField,pGVar16);
    pGVar15 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchOverlayManager);
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___ctor
              ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)pGVar15,layer,__this_02,
               (MethodInfo *)0x0);
    (__this->fields)._Theme_k__BackingField = pGVar15;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._Theme_k__BackingField,pGVar15);
    pGVar16 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)il2cpp_runtime_helper_023052d0(_DAT_05579530);
    Gisketch_Aottg2UI_Overlays_GisketchToastManager___ctor
              ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)pGVar16,layer_00,__this_02,
               (MethodInfo *)0x0);
    (__this->fields)._Screens_k__BackingField = pGVar16;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._Screens_k__BackingField);
    pGVar16 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)(__this->fields)._Manifest_k__BackingField;
    __this_03 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)(manifest->fields).initialScreen;
    pMVar14 = (MethodInfo *)0x0;
    bVar9 = System_String__IsNullOrEmpty((System_String_o *)__this_03,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      pGVar17 = (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_Fields *)&(manifest->fields).initialScreen;
    }
    else {
      pGVar7 = (manifest->fields).screens;
      if ((pGVar7 == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *)0x0) ||
         (pGVar7->max_length == 0)) {
        pGVar17 = *(Gisketch_Aottg2UI_Data_GisketchScreenDefinition_Fields **)(g_data_057b9c00 + 0xb8);
      }
      else {
        if ((int)pGVar7->max_length == 0) goto label_03b29dfc;
        if (pGVar7->m_Items[0] == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) goto label_03b29df7;
        pGVar17 = &pGVar7->m_Items[0]->fields;
      }
    }
    if (pGVar16 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
      Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen(pGVar16,pGVar17->id,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar9 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      *(char *)((long)&(__this->fields)._customActions + 1) = (char)bVar9;
      if (bVar2 != 0) {
        uVar3 = *(undefined1 *)((long)&(__this->fields)._buildOnStart + 3);
        if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        **(undefined1 **)(TypeInfo_GisketchMotion + 0xb8) = uVar3;
      }
      return;
    }
  }
label_03b29df7:
  il2cpp_runtime_helper_022b2c90();
label_03b29dfc:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057a9beb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
    g_data_057a9beb = '\x01';
    iVar4 = *(int *)(TypeInfo_Application + 0xe4);
  }
  else {
    iVar4 = *(int *)(TypeInfo_Application + 0xe4);
  }
  if (iVar4 == 0) {
    il2cpp_runtime_helper_02337ed0();
    bVar9 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    cVar8 = (char)bVar9;
  }
  else {
    bVar9 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    cVar8 = (char)bVar9;
  }
  if (cVar8 == '\0') {
    return;
  }
  Gisketch_Aottg2UI_GisketchUIRoot__UpdateFocusInput(__this_03,pMVar14);
  bVar9 = Gisketch_Aottg2UI_Actions_GisketchInputCapture__get_IsActive((MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    return;
  }
  bVar9 = UnityEngine_Input__GetKeyDown(0x1b,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return;
  }
  if (*(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057a9c44 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
    g_data_057a9c44 = '\x01';
    iVar4 = *(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4);
  }
  else {
    iVar4 = *(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4);
  }
  if (iVar4 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar4 = *(int *)(TypeInfo_GisketchMotionDriver[2].virtualMethodPointer + 8);
  iVar10 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  if (iVar4 != iVar10) {
    pMVar14 = TypeInfo_GisketchMotionDriver;
    if (*(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar9 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__CompleteActiveForSkip(pMVar14);
    if (((char)bVar9 == '\0') &&
       (((pGVar15 = (__this_03->fields)._Theme_k__BackingField,
         pGVar15 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0 &&
         (bVar9 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                            ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)pGVar15,1,
                             (MethodInfo *)0x0), (char)bVar9 != '\0')) ||
        ((pGVar16 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)
                    (__this_03->fields)._Manifest_k__BackingField,
         pGVar16 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0 &&
         (bVar9 = Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Back(pGVar16,(MethodInfo *)0x0),
         (char)bVar9 != '\0')))))) {
      Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(1,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$Clear
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__Clear (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3b2b040

void Gisketch_Aottg2UI_GisketchUIRoot__Clear(Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  Gisketch_Aottg2UI_GisketchUIRoot__Clear_3a2a2f0(__this,1,in_RDX);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$Clear
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__Clear (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, bool destroyEventSystem, const MethodInfo* method);
// 0x3b2a2f0

void Gisketch_Aottg2UI_GisketchUIRoot__Clear_3a2a2f0
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,bool_conflict destroyEventSystem,MethodInfo *method
               )

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  MethodInfo *method_00;
  
  Gisketch_Aottg2UI_GisketchUIRoot__CancelScreenPrewarm(__this,1,method);
  pGVar1 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)(__this->fields)._Manifest_k__BackingField;
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
  (__this->fields)._Manifest_k__BackingField = (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Manifest_k__BackingField);
  (__this->fields)._Theme_k__BackingField = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Theme_k__BackingField);
  (__this->fields)._Screens_k__BackingField = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Screens_k__BackingField);
  (__this->fields)._codeActions = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._codeActions);
  *(undefined1 *)((long)&(__this->fields)._customActions + 1) = 0;
  (__this->fields)._suppressNextBuildMotion = 0;
  (__this->fields)._runtimeBuilt = 0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._suppressNextBuildMotion);
  (__this->fields)._State_k__BackingField = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._State_k__BackingField);
  (__this->fields)._eventSystemObject = (UnityEngine_GameObject_o *)0x0;
  method_00 = (MethodInfo *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._eventSystemObject);
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
// 0x3b2b220

void Gisketch_Aottg2UI_GisketchUIRoot__SetTheme
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,UnityEngine_TextAsset_o *themeJson,
               MethodInfo *method)

{
  UnityEngine_Object_o *y;
  bool_conflict bVar1;
  
  if (g_data_057a9bed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9bed = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)themeJson,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    y = (UnityEngine_Object_o *)(__this->fields)._themeJson;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)themeJson,y,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      (__this->fields)._themeJson = themeJson;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._themeJson);
      Gisketch_Aottg2UI_GisketchUIRoot__Build(__this,(MethodInfo *)themeJson);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$SetSelectedScreen
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__SetSelectedScreen (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, System_String_o* screenId, const MethodInfo* method);
// 0x3b2b2d0

void Gisketch_Aottg2UI_GisketchUIRoot__SetSelectedScreen
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,System_String_o *screenId,MethodInfo *method)

{
  bool_conflict bVar1;
  
  bVar1 = System_String__IsNullOrEmpty(screenId,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(screenId,(__this->fields)._selectedScreenId,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      (__this->fields)._selectedScreenId = screenId;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._selectedScreenId);
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
// 0x3b2b330

void Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *pGVar1;
  bool_conflict bVar2;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *pGVar3;
  undefined8 uVar4;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *value;
  
  pGVar1 = (__this->fields)._Manifest_k__BackingField;
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
    value = (pGVar1->fields).dialogs;
    method = (MethodInfo *)0x0;
    bVar2 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      pGVar1 = (__this->fields)._Manifest_k__BackingField;
      if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057a9bee == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_IGisketchActionHandler);
          g_data_057a9bee = '\x01';
        }
        value->m_Items[3] = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)method;
        il2cpp_runtime_helper_022b4080(value->m_Items + 3,method);
        pGVar3 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)il2cpp_runtime_helper_023051f0(method,TypeInfo_IGisketchActionHandler)
        ;
        value->m_Items[6] = pGVar3;
        uVar4 = il2cpp_runtime_helper_023051f0(method,TypeInfo_IGisketchActionHandler);
        il2cpp_runtime_helper_022b4080(value->m_Items + 6,uVar4);
        return;
      }
      method = (MethodInfo *)(pGVar1->fields).dialogs;
      (__this->fields)._selectedScreenId = (System_String_o *)method;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._selectedScreenId);
    }
  }
  *(undefined1 *)&(__this->fields)._customActions = 1;
  Gisketch_Aottg2UI_GisketchUIRoot__Build(__this,method);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$SetActionHandler
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__SetActionHandler (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, UnityEngine_MonoBehaviour_o* actionHandler, const MethodInfo* method);
// 0x3b2b380

void Gisketch_Aottg2UI_GisketchUIRoot__SetActionHandler
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,UnityEngine_MonoBehaviour_o *actionHandler,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  undefined8 uVar2;
  MethodInfo *extraout_RDX;
  
  if (g_data_057a9bee == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IGisketchActionHandler);
    g_data_057a9bee = '\x01';
    method = extraout_RDX;
  }
  *(UnityEngine_MonoBehaviour_o **)&(__this->fields)._createEventSystem = actionHandler;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._createEventSystem,actionHandler,method);
  pUVar1 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023051f0(actionHandler,TypeInfo_IGisketchActionHandler);
  (__this->fields)._canvasObject = pUVar1;
  uVar2 = il2cpp_runtime_helper_023051f0(actionHandler,TypeInfo_IGisketchActionHandler);
  il2cpp_runtime_helper_022b4080(&(__this->fields)._canvasObject,uVar2);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$ShowToast
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__ShowToast (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, const MethodInfo* method);
// 0x3b2b3f0

void Gisketch_Aottg2UI_GisketchUIRoot__ShowToast
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,
               Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_00;
  
  __this_00 = (__this->fields)._Screens_k__BackingField;
  if (__this_00 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__Show
              ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)__this_00,toast,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$HandleAction
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__HandleAction (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, System_String_o* actionId, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x3b2b410

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
  
  if (g_data_057a9bef == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IGisketchActionHandler);
    il2cpp_runtime_helper_023445d0(&"dialog.");
    il2cpp_runtime_helper_023445d0(&"overlay.close");
    il2cpp_runtime_helper_023445d0(&"screen.");
    il2cpp_runtime_helper_023445d0(&"aottg-search-palette");
    il2cpp_runtime_helper_023445d0(&"popover.");
    il2cpp_runtime_helper_023445d0(&"Gisketch UI action: ");
    g_data_057a9bef = '\x01';
  }
  bVar6 = System_String__IsNullOrEmpty(actionId,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  if (actionId != (System_String_o *)0x0) {
    bVar6 = System_String__StartsWith_3af5570(actionId,"screen.",5,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      bVar6 = System_String__StartsWith_3af5570(actionId,"dialog.",5,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        bVar6 = System_String__StartsWith_3af5570(actionId,"popover.",5,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          bVar6 = System_String__op_Equality(actionId,"overlay.close",(MethodInfo *)0x0);
          if ((char)bVar6 == '\0') {
            __this_01 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)(__this->fields)._eventSystemObject;
            if ((__this_01 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) &&
               (bVar6 = Gisketch_Aottg2UI_Code_AottgActionRegistry__TryHandle
                                  (__this_01,actionId,context,(MethodInfo *)0x0), (char)bVar6 != '\0')) {
              return;
            }
            pUVar3 = (__this->fields)._canvasObject;
            if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
              pSVar7 = System_String__Concat_3ae5ba0("Gisketch UI action: ",actionId,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              UnityEngine_Debug__Log_4db6ac0
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
                  goto label_03b2b73c;
                }
                lVar9 = lVar9 + 0x10;
              } while ((ulong)uVar1 << 4 != lVar9);
            }
            pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pUVar3,TypeInfo_IGisketchActionHandler,0);
label_03b2b73c:
            (*pVVar8->methodPtr)(pUVar3,actionId,pVVar8->method);
            return;
          }
          pGVar2 = (__this->fields)._Theme_k__BackingField;
          if (pGVar2 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
            Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                      ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)pGVar2,1,(MethodInfo *)0x0);
            return;
          }
        }
        else if ("popover." != (System_String_o *)0x0) {
          pGVar2 = (__this->fields)._Theme_k__BackingField;
          pSVar7 = System_String__Substring(actionId,("popover."->fields)._stringLength,(MethodInfo *)0x0);
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
        pSVar7 = System_String__Substring(actionId,("dialog."->fields)._stringLength,(MethodInfo *)0x0);
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
      pSVar7 = System_String__Substring(actionId,("screen."->fields)._stringLength,(MethodInfo *)0x0);
      if (__this_00 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen(__this_00,pSVar7,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$LoadCodeManifest
// il2cpp: Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* Gisketch_Aottg2UI_GisketchUIRoot__LoadCodeManifest (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_Code_AottgCodeCatalog_o* catalog, const MethodInfo* method);
// 0x3b2a420

Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *
Gisketch_Aottg2UI_GisketchUIRoot__LoadCodeManifest
          (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *catalog,
          MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o **ppUVar1;
  float *pfVar2;
  int iVar3;
  UnityEngine_Object_o *pUVar4;
  System_RuntimeTypeHandle_o SVar5;
  char cVar6;
  bool_conflict bVar7;
  System_String_o *pSVar8;
  Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *pGVar10;
  undefined4 extraout_var;
  UnityEngine_EventSystems_EventSystem_o *x;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar11;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  UnityEngine_MonoBehaviour_o *pUVar12;
  System_Type_array *pSVar13;
  System_Type_o *pSVar14;
  long lVar15;
  UnityEngine_GameObject_o *pUVar16;
  UnityEngine_Transform_o *pUVar17;
  UnityEngine_Transform_o *pUVar18;
  UnityEngine_Canvas_o *pUVar19;
  UnityEngine_UI_CanvasScaler_o *scaler;
  UnityEngine_RectTransform_o *rect;
  System_String_o *__this_00;
  System_String_o *__this_01;
  MethodInfo *method_00;
  int32_t value;
  MethodInfo *pMVar20;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_02;
  
  if (g_data_057a9bf0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"GisketchUIRoot found no AoTTG code UI screens.");
    il2cpp_runtime_helper_023445d0(&"GisketchUIRoot has no theme JSON assigned; using readable default AoTTG UI theme.");
    g_data_057a9bf0 = '\x01';
  }
  pUVar4 = (UnityEngine_Object_o *)(__this->fields)._themeJson;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
label_03b2a514:
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._themeJson;
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      bVar7 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      cVar6 = (char)bVar7;
    }
    else {
      bVar7 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      cVar6 = (char)bVar7;
    }
    if (cVar6 == '\0') goto label_03b2a514;
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Debug__LogWarning_4db7c80("GisketchUIRoot has no theme JSON assigned; using readable default AoTTG UI theme.",(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._themeJson;
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar9 = (Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *)0x0;
  bVar7 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
label_03b2a55a:
    pGVar10 = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Build_3a5d500
                        (catalog,(__this->fields)._selectedScreenId,pGVar9,
                         (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)(__this->fields)._eventSystemObject,
                         (MethodInfo *)0x0);
    if (pGVar10 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Debug__LogWarning_4db7c80("GisketchUIRoot found no AoTTG code UI screens.",(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
    }
    return pGVar10;
  }
  pGVar11 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)(__this->fields)._themeJson;
  if (pGVar11 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    pSVar8 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)pGVar11,(MethodInfo *)0x0);
    pGVar9 = Gisketch_Aottg2UI_Data_GisketchThemeDefinition__FromJson(pSVar8,(MethodInfo *)0x0);
    goto label_03b2a55a;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9bf1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EventSystem_AddComponent_EventSystem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_StandaloneInputModule_AddComponent_StandaloneInputModule);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"AoTTG EventSystem");
    g_data_057a9bf1 = '\x01';
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) goto label_03b2a739;
label_03b2a5ef:
    bVar7 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    pGVar10 = (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)CONCAT44(extraout_var,bVar7);
    cVar6 = (char)bVar7;
  }
  else {
    if (*(int *)(TypeInfo_Application + 0xe4) != 0) goto label_03b2a5ef;
label_03b2a739:
    il2cpp_runtime_helper_02337ed0();
    bVar7 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    pGVar10 = (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)CONCAT44(extraout_var_01,bVar7);
    cVar6 = (char)bVar7;
  }
  if (cVar6 == '\0') {
    return pGVar10;
  }
  if (*(char *)((long)&(pGVar11->fields)._buildOnStart + 2) == '\0') {
    return pGVar10;
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    pUVar12 = (UnityEngine_MonoBehaviour_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
    UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)pUVar12,"AoTTG EventSystem",(MethodInfo *)0x0);
    ppUVar1 = &(pGVar11->fields)._actionHandler;
    (pGVar11->fields)._actionHandler = pUVar12;
    il2cpp_runtime_helper_022b4080(ppUVar1);
    pUVar12 = (pGVar11->fields)._actionHandler;
    __this_02 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
    if (pUVar12 != (UnityEngine_MonoBehaviour_o *)0x0) {
      pUVar17 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar12,(MethodInfo *)0x0);
      pUVar18 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pGVar11,(MethodInfo *)0x0);
      __this_02 = pGVar11;
      if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_4e09e30(pUVar17,pUVar18,0,(MethodInfo *)0x0);
        __this_02 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
        if (*ppUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
          pGVar11 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                    UnityEngine_GameObject__AddComponent_object_
                              ((UnityEngine_GameObject_o *)*ppUVar1,MethodInfo_EventSystem_AddComponent_EventSystem);
          if (g_data_057a9bf2 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057a9bf2 = '\x01';
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_02 = pGVar11;
          bVar7 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pGVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar7 == '\0') {
            if (pGVar11 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_03b2a84e;
            *(undefined1 *)&(pGVar11->fields)._createEventSystem = 1;
          }
          __this_02 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
          if (*ppUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
            pGVar10 = (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)
                      UnityEngine_GameObject__AddComponent_object_
                                ((UnityEngine_GameObject_o *)*ppUVar1,MethodInfo_StandaloneInputModule_AddComponent_StandaloneInputModule);
            return pGVar10;
          }
        }
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pGVar11 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
              UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (g_data_057a9bf2 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9bf2 = '\x01';
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_02 = pGVar11;
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pGVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      return (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)CONCAT44(extraout_var_00,bVar7);
    }
    if (pGVar11 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      *(undefined1 *)&(pGVar11->fields)._createEventSystem = 1;
      return (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)CONCAT44(extraout_var_00,bVar7);
    }
  }
label_03b2a84e:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9bf3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasScaler_AddComponent_CanvasScaler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_AddComponent_Canvas);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GraphicRaycaster_AddComponent_GraphicRaycaster);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"AoTTG UI Canvas");
    g_data_057a9bf3 = '\x01';
  }
  pSVar13 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar5.fields.value = TypeRef_RectTransform.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar14 = System_Type__GetTypeFromHandle(SVar5,(MethodInfo *)0x0);
  if (pSVar13 == (System_Type_array *)0x0) {
label_03b2aa83:
    il2cpp_runtime_helper_022b2c90();
label_03b2aa88:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pSVar14 == (System_Type_o *)0x0) || (lVar15 = il2cpp_runtime_helper_023051f0(pSVar14), lVar15 != 0)) {
    if ((int)pSVar13->max_length != 0) {
      pSVar13->m_Items[0] = pSVar14;
      il2cpp_runtime_helper_022b4080(pSVar13->m_Items,pSVar14);
      pUVar16 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor_4dfc440(pUVar16,"AoTTG UI Canvas",pSVar13,(MethodInfo *)0x0);
      pfVar2 = &(__this_02->fields)._motionScale;
      *(UnityEngine_GameObject_o **)&(__this_02->fields)._motionScale = pUVar16;
      il2cpp_runtime_helper_022b4080(pfVar2);
      pUVar16 = *(UnityEngine_GameObject_o **)&(__this_02->fields)._motionScale;
      if (pUVar16 != (UnityEngine_GameObject_o *)0x0) {
        pUVar17 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
        pUVar18 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0)
        ;
        if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_4e09e30(pUVar17,pUVar18,0,(MethodInfo *)0x0);
          if ((*(UnityEngine_GameObject_o **)pfVar2 != (UnityEngine_GameObject_o *)0x0) &&
             (pUVar19 = (UnityEngine_Canvas_o *)
                        UnityEngine_GameObject__AddComponent_object_
                                  (*(UnityEngine_GameObject_o **)pfVar2,MethodInfo_Canvas_AddComponent_Canvas),
             pUVar19 != (UnityEngine_Canvas_o *)0x0)) {
            UnityEngine_Canvas__set_renderMode(pUVar19,0,(MethodInfo *)0x0);
            if (*(UnityEngine_GameObject_o **)pfVar2 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__AddComponent_object_(*(UnityEngine_GameObject_o **)pfVar2,MethodInfo_GraphicRaycaster_AddComponent_GraphicRaycaster);
              if ((*(UnityEngine_GameObject_o **)pfVar2 != (UnityEngine_GameObject_o *)0x0) &&
                 (scaler = (UnityEngine_UI_CanvasScaler_o *)
                           UnityEngine_GameObject__AddComponent_object_
                                     (*(UnityEngine_GameObject_o **)pfVar2,MethodInfo_CanvasScaler_AddComponent_CanvasScaler),
                 scaler != (UnityEngine_UI_CanvasScaler_o *)0x0)) {
                (scaler->fields).m_UiScaleMode = 1;
                (scaler->fields).m_MatchWidthOrHeight = 0.5;
                Gisketch_Aottg2UI_GisketchUIRoot__ApplyScale(__this_02,scaler,method_00);
                pUVar16 = *(UnityEngine_GameObject_o **)&(__this_02->fields)._motionScale;
                if (pUVar16 != (UnityEngine_GameObject_o *)0x0) {
                  pMVar20 = MethodInfo_RectTransform_GetComponent_RectTransform;
                  pGVar10 = (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)
                            UnityEngine_GameObject__GetComponent_object_
                                      (pUVar16,(MethodInfo_255A0F0 *)MethodInfo_RectTransform_GetComponent_RectTransform);
                  Gisketch_Aottg2UI_GisketchUIRoot__Stretch((UnityEngine_RectTransform_o *)pGVar10,pMVar20);
                  return pGVar10;
                }
              }
            }
          }
        }
      }
      goto label_03b2aa83;
    }
    goto label_03b2aa88;
  }
  pUVar17 = (UnityEngine_Transform_o *)il2cpp_runtime_helper_0231b270();
  pSVar8 = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057a9bf4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    g_data_057a9bf4 = '\x01';
  }
  pSVar13 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar5.fields.value = TypeRef_RectTransform.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar14 = System_Type__GetTypeFromHandle(SVar5,(MethodInfo *)0x0);
  if (pSVar13 == (System_Type_array *)0x0) {
label_03b2abf3:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((pSVar14 != (System_Type_o *)0x0) && (lVar15 = il2cpp_runtime_helper_023051f0(pSVar14), lVar15 == 0))
    goto label_03b2abfd;
    if ((int)pSVar13->max_length != 0) {
      pSVar13->m_Items[0] = pSVar14;
      il2cpp_runtime_helper_022b4080(pSVar13->m_Items,pSVar14);
      pUVar16 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor_4dfc440(pUVar16,pSVar8,pSVar13,(MethodInfo *)0x0);
      if ((pUVar16 != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar18 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0),
         pUVar18 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent_4e09e30(pUVar18,pUVar17,0,(MethodInfo *)0x0);
        pMVar20 = MethodInfo_RectTransform_GetComponent_RectTransform;
        rect = (UnityEngine_RectTransform_o *)
               UnityEngine_GameObject__GetComponent_object_(pUVar16,(MethodInfo_255A0F0 *)MethodInfo_RectTransform_GetComponent_RectTransform);
        Gisketch_Aottg2UI_GisketchUIRoot__Stretch(rect,pMVar20);
        pGVar10 = (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)
                  UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
        return pGVar10;
      }
      goto label_03b2abf3;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_03b2abfd:
  __this_00 = (System_String_o *)il2cpp_runtime_helper_0231b270();
  value = 0;
  il2cpp_runtime_helper_022b2b10();
  pSVar8 = __this_00;
  if (g_data_057a9bf5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_AddComponent_Canvas);
    pSVar8 = (System_String_o *)&MethodInfo_GraphicRaycaster_AddComponent_GraphicRaycaster;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9bf5 = '\x01';
  }
  if (((__this_00 != (System_String_o *)0x0) &&
      (pSVar8 = __this_00,
      __this_01 = (System_String_o *)
                  UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
      __this_01 != (System_String_o *)0x0)) &&
     (pUVar19 = (UnityEngine_Canvas_o *)
                UnityEngine_GameObject__AddComponent_object_
                          ((UnityEngine_GameObject_o *)__this_01,MethodInfo_Canvas_AddComponent_Canvas), pSVar8 = __this_01,
     pUVar19 != (UnityEngine_Canvas_o *)0x0)) {
    UnityEngine_Canvas__set_overrideSorting(pUVar19,1,(MethodInfo *)0x0);
    UnityEngine_Canvas__set_sortingOrder(pUVar19,value,(MethodInfo *)0x0);
    pUVar16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    pSVar8 = __this_00;
    if (pUVar16 != (UnityEngine_GameObject_o *)0x0) {
      pGVar10 = (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)
                UnityEngine_GameObject__AddComponent_object_(pUVar16,MethodInfo_GraphicRaycaster_AddComponent_GraphicRaycaster);
      return pGVar10;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c6f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTheme);
    g_data_057a9c6f = '\x01';
  }
  pMVar20 = (MethodInfo *)0x0;
  pGVar9 = Gisketch_Aottg2UI_Data_GisketchThemeDefinition__FromJson(pSVar8,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchTheme + 0xe4) != 0) {
    pGVar10 = (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)
              Gisketch_Aottg2UI_Styling_GisketchTheme__FromDefinition(pGVar9,pMVar20);
    return pGVar10;
  }
  il2cpp_runtime_helper_02337ed0();
  pGVar10 = (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)
            Gisketch_Aottg2UI_Styling_GisketchTheme__FromDefinition(pGVar9,pMVar20);
  return pGVar10;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$EnsureEventSystem
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__EnsureEventSystem (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3b2a5c0

void Gisketch_Aottg2UI_GisketchUIRoot__EnsureEventSystem
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o **ppUVar1;
  float *pfVar2;
  System_RuntimeTypeHandle_o SVar3;
  char cVar4;
  bool_conflict bVar5;
  UnityEngine_EventSystems_EventSystem_o *x;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar6;
  UnityEngine_MonoBehaviour_o *pUVar7;
  System_Type_array *pSVar8;
  System_Type_o *pSVar9;
  long lVar10;
  UnityEngine_GameObject_o *pUVar11;
  UnityEngine_Transform_o *pUVar12;
  UnityEngine_Transform_o *pUVar13;
  UnityEngine_Canvas_o *pUVar14;
  UnityEngine_UI_CanvasScaler_o *scaler;
  UnityEngine_RectTransform_o *pUVar15;
  System_String_o *__this_00;
  System_String_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *definition;
  MethodInfo *method_00;
  int32_t value;
  MethodInfo *pMVar16;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_02;
  System_String_o *pSVar17;
  
  if (g_data_057a9bf1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EventSystem_AddComponent_EventSystem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_StandaloneInputModule_AddComponent_StandaloneInputModule);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"AoTTG EventSystem");
    g_data_057a9bf1 = '\x01';
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) goto label_03b2a739;
label_03b2a5ef:
    bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    cVar4 = (char)bVar5;
  }
  else {
    if (*(int *)(TypeInfo_Application + 0xe4) != 0) goto label_03b2a5ef;
label_03b2a739:
    il2cpp_runtime_helper_02337ed0();
    bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    cVar4 = (char)bVar5;
  }
  if (cVar4 == '\0') {
    return;
  }
  if (*(char *)((long)&(__this->fields)._buildOnStart + 2) == '\0') {
    return;
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    pUVar7 = (UnityEngine_MonoBehaviour_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
    UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)pUVar7,"AoTTG EventSystem",(MethodInfo *)0x0);
    ppUVar1 = &(__this->fields)._actionHandler;
    (__this->fields)._actionHandler = pUVar7;
    il2cpp_runtime_helper_022b4080(ppUVar1);
    pUVar7 = (__this->fields)._actionHandler;
    __this_02 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
    if (pUVar7 != (UnityEngine_MonoBehaviour_o *)0x0) {
      pUVar12 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar7,(MethodInfo *)0x0);
      pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      __this_02 = __this;
      if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_4e09e30(pUVar12,pUVar13,0,(MethodInfo *)0x0);
        __this_02 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
        if (*ppUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
          pGVar6 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                   UnityEngine_GameObject__AddComponent_object_
                             ((UnityEngine_GameObject_o *)*ppUVar1,MethodInfo_EventSystem_AddComponent_EventSystem);
          if (g_data_057a9bf2 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057a9bf2 = '\x01';
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_02 = pGVar6;
          bVar5 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pGVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar5 == '\0') {
            if (pGVar6 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_03b2a84e;
            *(undefined1 *)&(pGVar6->fields)._createEventSystem = 1;
          }
          __this_02 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
          if (*ppUVar1 != (UnityEngine_MonoBehaviour_o *)0x0) {
            UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)*ppUVar1,MethodInfo_StandaloneInputModule_AddComponent_StandaloneInputModule);
            return;
          }
        }
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pGVar6 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
             UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (g_data_057a9bf2 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9bf2 = '\x01';
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_02 = pGVar6;
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pGVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return;
    }
    if (pGVar6 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      *(undefined1 *)&(pGVar6->fields)._createEventSystem = 1;
      return;
    }
  }
label_03b2a84e:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9bf3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasScaler_AddComponent_CanvasScaler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_AddComponent_Canvas);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GraphicRaycaster_AddComponent_GraphicRaycaster);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"AoTTG UI Canvas");
    g_data_057a9bf3 = '\x01';
  }
  pSVar8 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar3.fields.value = TypeRef_RectTransform.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
  if (pSVar8 == (System_Type_array *)0x0) {
label_03b2aa83:
    il2cpp_runtime_helper_022b2c90();
label_03b2aa88:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pSVar9 == (System_Type_o *)0x0) || (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 != 0)) {
    if ((int)pSVar8->max_length != 0) {
      pSVar8->m_Items[0] = pSVar9;
      il2cpp_runtime_helper_022b4080(pSVar8->m_Items,pSVar9);
      pUVar11 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor_4dfc440(pUVar11,"AoTTG UI Canvas",pSVar8,(MethodInfo *)0x0);
      pfVar2 = &(__this_02->fields)._motionScale;
      *(UnityEngine_GameObject_o **)&(__this_02->fields)._motionScale = pUVar11;
      il2cpp_runtime_helper_022b4080(pfVar2);
      pUVar11 = *(UnityEngine_GameObject_o **)&(__this_02->fields)._motionScale;
      if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
        pUVar12 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0);
        pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0)
        ;
        if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_4e09e30(pUVar12,pUVar13,0,(MethodInfo *)0x0);
          if ((*(UnityEngine_GameObject_o **)pfVar2 != (UnityEngine_GameObject_o *)0x0) &&
             (pUVar14 = (UnityEngine_Canvas_o *)
                        UnityEngine_GameObject__AddComponent_object_
                                  (*(UnityEngine_GameObject_o **)pfVar2,MethodInfo_Canvas_AddComponent_Canvas),
             pUVar14 != (UnityEngine_Canvas_o *)0x0)) {
            UnityEngine_Canvas__set_renderMode(pUVar14,0,(MethodInfo *)0x0);
            if (*(UnityEngine_GameObject_o **)pfVar2 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__AddComponent_object_(*(UnityEngine_GameObject_o **)pfVar2,MethodInfo_GraphicRaycaster_AddComponent_GraphicRaycaster);
              if ((*(UnityEngine_GameObject_o **)pfVar2 != (UnityEngine_GameObject_o *)0x0) &&
                 (scaler = (UnityEngine_UI_CanvasScaler_o *)
                           UnityEngine_GameObject__AddComponent_object_
                                     (*(UnityEngine_GameObject_o **)pfVar2,MethodInfo_CanvasScaler_AddComponent_CanvasScaler),
                 scaler != (UnityEngine_UI_CanvasScaler_o *)0x0)) {
                (scaler->fields).m_UiScaleMode = 1;
                (scaler->fields).m_MatchWidthOrHeight = 0.5;
                Gisketch_Aottg2UI_GisketchUIRoot__ApplyScale(__this_02,scaler,method_00);
                pUVar11 = *(UnityEngine_GameObject_o **)&(__this_02->fields)._motionScale;
                if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
                  pMVar16 = MethodInfo_RectTransform_GetComponent_RectTransform;
                  pUVar15 = (UnityEngine_RectTransform_o *)
                            UnityEngine_GameObject__GetComponent_object_
                                      (pUVar11,(MethodInfo_255A0F0 *)MethodInfo_RectTransform_GetComponent_RectTransform);
                  Gisketch_Aottg2UI_GisketchUIRoot__Stretch(pUVar15,pMVar16);
                  return;
                }
              }
            }
          }
        }
      }
      goto label_03b2aa83;
    }
    goto label_03b2aa88;
  }
  pUVar12 = (UnityEngine_Transform_o *)il2cpp_runtime_helper_0231b270();
  pSVar17 = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057a9bf4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    g_data_057a9bf4 = '\x01';
  }
  pSVar8 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar3.fields.value = TypeRef_RectTransform.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
  if (pSVar8 == (System_Type_array *)0x0) {
label_03b2abf3:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((pSVar9 != (System_Type_o *)0x0) && (lVar10 = il2cpp_runtime_helper_023051f0(pSVar9), lVar10 == 0))
    goto label_03b2abfd;
    if ((int)pSVar8->max_length != 0) {
      pSVar8->m_Items[0] = pSVar9;
      il2cpp_runtime_helper_022b4080(pSVar8->m_Items,pSVar9);
      pUVar11 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor_4dfc440(pUVar11,pSVar17,pSVar8,(MethodInfo *)0x0);
      if ((pUVar11 != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar13 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0),
         pUVar13 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent_4e09e30(pUVar13,pUVar12,0,(MethodInfo *)0x0);
        pMVar16 = MethodInfo_RectTransform_GetComponent_RectTransform;
        pUVar15 = (UnityEngine_RectTransform_o *)
                  UnityEngine_GameObject__GetComponent_object_(pUVar11,(MethodInfo_255A0F0 *)MethodInfo_RectTransform_GetComponent_RectTransform);
        Gisketch_Aottg2UI_GisketchUIRoot__Stretch(pUVar15,pMVar16);
        UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0);
        return;
      }
      goto label_03b2abf3;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_03b2abfd:
  __this_00 = (System_String_o *)il2cpp_runtime_helper_0231b270();
  value = 0;
  il2cpp_runtime_helper_022b2b10();
  pSVar17 = __this_00;
  if (g_data_057a9bf5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_AddComponent_Canvas);
    pSVar17 = (System_String_o *)&MethodInfo_GraphicRaycaster_AddComponent_GraphicRaycaster;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9bf5 = '\x01';
  }
  if (((__this_00 != (System_String_o *)0x0) &&
      (pSVar17 = __this_00,
      __this_01 = (System_String_o *)
                  UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
      __this_01 != (System_String_o *)0x0)) &&
     (pUVar14 = (UnityEngine_Canvas_o *)
                UnityEngine_GameObject__AddComponent_object_
                          ((UnityEngine_GameObject_o *)__this_01,MethodInfo_Canvas_AddComponent_Canvas), pSVar17 = __this_01,
     pUVar14 != (UnityEngine_Canvas_o *)0x0)) {
    UnityEngine_Canvas__set_overrideSorting(pUVar14,1,(MethodInfo *)0x0);
    UnityEngine_Canvas__set_sortingOrder(pUVar14,value,(MethodInfo *)0x0);
    pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    pSVar17 = __this_00;
    if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__AddComponent_object_(pUVar11,MethodInfo_GraphicRaycaster_AddComponent_GraphicRaycaster);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c6f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTheme);
    g_data_057a9c6f = '\x01';
  }
  pMVar16 = (MethodInfo *)0x0;
  definition = Gisketch_Aottg2UI_Data_GisketchThemeDefinition__FromJson(pSVar17,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchTheme + 0xe4) != 0) {
    Gisketch_Aottg2UI_Styling_GisketchTheme__FromDefinition(definition,pMVar16);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  Gisketch_Aottg2UI_Styling_GisketchTheme__FromDefinition(definition,pMVar16);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$ConfigureEventSystem
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__ConfigureEventSystem (UnityEngine_EventSystems_EventSystem_o* eventSystem, const MethodInfo* method);
// 0x3b2b780

void Gisketch_Aottg2UI_GisketchUIRoot__ConfigureEventSystem
               (UnityEngine_EventSystems_EventSystem_o *eventSystem,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057a9bf2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9bf2 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)eventSystem,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (eventSystem == (UnityEngine_EventSystems_EventSystem_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    *(undefined1 *)&(eventSystem->fields).m_sendNavigationEvents = 1;
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$ShouldFocusOverlay
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__ShouldFocusOverlay (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x3b2b770

bool_conflict
Gisketch_Aottg2UI_GisketchUIRoot__ShouldFocusOverlay
          (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),context.fields.InputSource != 1);
}


// Gisketch.Aottg2UI.GisketchUIRoot$$CreateCanvas
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_GisketchUIRoot__CreateCanvas (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3b2a860

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_GisketchUIRoot__CreateCanvas(Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  float *pfVar1;
  System_RuntimeTypeHandle_o SVar2;
  System_Type_array *pSVar3;
  System_Type_o *pSVar4;
  long lVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Canvas_o *pUVar9;
  UnityEngine_UI_CanvasScaler_o *scaler;
  UnityEngine_RectTransform_o *pUVar10;
  System_String_o *__this_00;
  System_String_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *definition;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar11;
  MethodInfo *method_00;
  int32_t value;
  MethodInfo *pMVar12;
  System_String_o *pSVar13;
  
  if (g_data_057a9bf3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasScaler_AddComponent_CanvasScaler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_AddComponent_Canvas);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GraphicRaycaster_AddComponent_GraphicRaycaster);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"AoTTG UI Canvas");
    g_data_057a9bf3 = '\x01';
  }
  pSVar3 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar2.fields.value = TypeRef_RectTransform.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
  if (pSVar3 == (System_Type_array *)0x0) {
label_03b2aa83:
    il2cpp_runtime_helper_022b2c90();
label_03b2aa88:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    if (pSVar4 == (System_Type_o *)0x0) {
label_03b2a948:
      if ((int)pSVar3->max_length != 0) {
        pSVar3->m_Items[0] = pSVar4;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items,pSVar4);
        pUVar6 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor_4dfc440(pUVar6,"AoTTG UI Canvas",pSVar3,(MethodInfo *)0x0);
        pfVar1 = &(__this->fields)._motionScale;
        *(UnityEngine_GameObject_o **)&(__this->fields)._motionScale = pUVar6;
        il2cpp_runtime_helper_022b4080(pfVar1);
        pUVar6 = *(UnityEngine_GameObject_o **)&(__this->fields)._motionScale;
        if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
          pUVar7 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
          pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_4e09e30(pUVar7,pUVar8,0,(MethodInfo *)0x0);
            if (*(UnityEngine_GameObject_o **)pfVar1 != (UnityEngine_GameObject_o *)0x0) {
              pUVar9 = (UnityEngine_Canvas_o *)
                       UnityEngine_GameObject__AddComponent_object_
                                 (*(UnityEngine_GameObject_o **)pfVar1,MethodInfo_Canvas_AddComponent_Canvas);
              if (pUVar9 != (UnityEngine_Canvas_o *)0x0) {
                UnityEngine_Canvas__set_renderMode(pUVar9,0,(MethodInfo *)0x0);
                if (*(UnityEngine_GameObject_o **)pfVar1 != (UnityEngine_GameObject_o *)0x0) {
                  UnityEngine_GameObject__AddComponent_object_
                            (*(UnityEngine_GameObject_o **)pfVar1,MethodInfo_GraphicRaycaster_AddComponent_GraphicRaycaster);
                  if (*(UnityEngine_GameObject_o **)pfVar1 != (UnityEngine_GameObject_o *)0x0) {
                    scaler = (UnityEngine_UI_CanvasScaler_o *)
                             UnityEngine_GameObject__AddComponent_object_
                                       (*(UnityEngine_GameObject_o **)pfVar1,MethodInfo_CanvasScaler_AddComponent_CanvasScaler);
                    if (scaler != (UnityEngine_UI_CanvasScaler_o *)0x0) {
                      (scaler->fields).m_UiScaleMode = 1;
                      (scaler->fields).m_MatchWidthOrHeight = 0.5;
                      Gisketch_Aottg2UI_GisketchUIRoot__ApplyScale(__this,scaler,method_00);
                      pUVar6 = *(UnityEngine_GameObject_o **)&(__this->fields)._motionScale;
                      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                        pMVar12 = MethodInfo_RectTransform_GetComponent_RectTransform;
                        pUVar10 = (UnityEngine_RectTransform_o *)
                                  UnityEngine_GameObject__GetComponent_object_
                                            (pUVar6,(MethodInfo_255A0F0 *)MethodInfo_RectTransform_GetComponent_RectTransform);
                        Gisketch_Aottg2UI_GisketchUIRoot__Stretch(pUVar10,pMVar12);
                        return pUVar10;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto label_03b2aa83;
      }
      goto label_03b2aa88;
    }
    lVar5 = il2cpp_runtime_helper_023051f0(pSVar4);
    if (lVar5 != 0) goto label_03b2a948;
  }
  pUVar7 = (UnityEngine_Transform_o *)il2cpp_runtime_helper_0231b270();
  pSVar13 = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057a9bf4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    g_data_057a9bf4 = '\x01';
  }
  pSVar3 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar2.fields.value = TypeRef_RectTransform.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
  if (pSVar3 == (System_Type_array *)0x0) {
label_03b2abf3:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (pSVar4 != (System_Type_o *)0x0) {
      lVar5 = il2cpp_runtime_helper_023051f0(pSVar4);
      if (lVar5 == 0) goto label_03b2abfd;
    }
    if ((int)pSVar3->max_length != 0) {
      pSVar3->m_Items[0] = pSVar4;
      il2cpp_runtime_helper_022b4080(pSVar3->m_Items,pSVar4);
      pUVar6 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor_4dfc440(pUVar6,pSVar13,pSVar3,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
        pUVar8 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
        if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_4e09e30(pUVar8,pUVar7,0,(MethodInfo *)0x0);
          pMVar12 = MethodInfo_RectTransform_GetComponent_RectTransform;
          pUVar10 = (UnityEngine_RectTransform_o *)
                    UnityEngine_GameObject__GetComponent_object_(pUVar6,(MethodInfo_255A0F0 *)MethodInfo_RectTransform_GetComponent_RectTransform);
          Gisketch_Aottg2UI_GisketchUIRoot__Stretch(pUVar10,pMVar12);
          pUVar10 = (UnityEngine_RectTransform_o *)
                    UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
          return pUVar10;
        }
      }
      goto label_03b2abf3;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_03b2abfd:
  __this_00 = (System_String_o *)il2cpp_runtime_helper_0231b270();
  value = 0;
  il2cpp_runtime_helper_022b2b10();
  pSVar13 = __this_00;
  if (g_data_057a9bf5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_AddComponent_Canvas);
    pSVar13 = (System_String_o *)&MethodInfo_GraphicRaycaster_AddComponent_GraphicRaycaster;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9bf5 = '\x01';
  }
  if (__this_00 != (System_String_o *)0x0) {
    pSVar13 = __this_00;
    __this_01 = (System_String_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 != (System_String_o *)0x0) {
      pUVar9 = (UnityEngine_Canvas_o *)
               UnityEngine_GameObject__AddComponent_object_
                         ((UnityEngine_GameObject_o *)__this_01,MethodInfo_Canvas_AddComponent_Canvas);
      pSVar13 = __this_01;
      if (pUVar9 != (UnityEngine_Canvas_o *)0x0) {
        UnityEngine_Canvas__set_overrideSorting(pUVar9,1,(MethodInfo *)0x0);
        UnityEngine_Canvas__set_sortingOrder(pUVar9,value,(MethodInfo *)0x0);
        pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0)
        ;
        pSVar13 = __this_00;
        if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
          pUVar10 = (UnityEngine_RectTransform_o *)
                    UnityEngine_GameObject__AddComponent_object_(pUVar6,MethodInfo_GraphicRaycaster_AddComponent_GraphicRaycaster);
          return pUVar10;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c6f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTheme);
    g_data_057a9c6f = '\x01';
  }
  pMVar12 = (MethodInfo *)0x0;
  definition = Gisketch_Aottg2UI_Data_GisketchThemeDefinition__FromJson(pSVar13,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchTheme + 0xe4) != 0) {
    pGVar11 = Gisketch_Aottg2UI_Styling_GisketchTheme__FromDefinition(definition,pMVar12);
    return (UnityEngine_RectTransform_o *)pGVar11;
  }
  il2cpp_runtime_helper_02337ed0();
  pGVar11 = Gisketch_Aottg2UI_Styling_GisketchTheme__FromDefinition(definition,pMVar12);
  return (UnityEngine_RectTransform_o *)pGVar11;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$CreateLayer
// il2cpp: UnityEngine_Transform_o* Gisketch_Aottg2UI_GisketchUIRoot__CreateLayer (UnityEngine_Transform_o* parent, System_String_o* name, const MethodInfo* method);
// 0x3b2aaa0

UnityEngine_Transform_o *
Gisketch_Aottg2UI_GisketchUIRoot__CreateLayer
          (UnityEngine_Transform_o *parent,System_String_o *name,MethodInfo *method)

{
  System_RuntimeTypeHandle_o handle;
  System_Type_array *components;
  System_Type_o *pSVar1;
  long lVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_RectTransform_o *rect;
  System_String_o *__this;
  System_String_o *__this_00;
  UnityEngine_Canvas_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *definition;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar5;
  MethodInfo *extraout_RDX;
  int32_t value;
  MethodInfo *pMVar6;
  System_String_o *json;
  
  if (g_data_057a9bf4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    g_data_057a9bf4 = '\x01';
    method = extraout_RDX;
  }
  components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type,1,method);
  handle.fields.value = TypeRef_RectTransform.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_03b2abf3:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (pSVar1 != (System_Type_o *)0x0) {
      lVar2 = il2cpp_runtime_helper_023051f0(pSVar1);
      if (lVar2 == 0) goto label_03b2abfd;
    }
    if ((int)components->max_length != 0) {
      components->m_Items[0] = pSVar1;
      il2cpp_runtime_helper_022b4080(components->m_Items,pSVar1);
      pUVar3 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor_4dfc440(pUVar3,name,components,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_4e09e30(pUVar4,parent,0,(MethodInfo *)0x0);
          pMVar6 = MethodInfo_RectTransform_GetComponent_RectTransform;
          rect = (UnityEngine_RectTransform_o *)
                 UnityEngine_GameObject__GetComponent_object_(pUVar3,(MethodInfo_255A0F0 *)MethodInfo_RectTransform_GetComponent_RectTransform);
          Gisketch_Aottg2UI_GisketchUIRoot__Stretch(rect,pMVar6);
          pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
          return pUVar4;
        }
      }
      goto label_03b2abf3;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_03b2abfd:
  __this = (System_String_o *)il2cpp_runtime_helper_0231b270();
  value = 0;
  il2cpp_runtime_helper_022b2b10();
  json = __this;
  if (g_data_057a9bf5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_AddComponent_Canvas);
    json = (System_String_o *)&MethodInfo_GraphicRaycaster_AddComponent_GraphicRaycaster;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9bf5 = '\x01';
  }
  if (__this != (System_String_o *)0x0) {
    json = __this;
    __this_00 = (System_String_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 != (System_String_o *)0x0) {
      __this_01 = (UnityEngine_Canvas_o *)
                  UnityEngine_GameObject__AddComponent_object_
                            ((UnityEngine_GameObject_o *)__this_00,MethodInfo_Canvas_AddComponent_Canvas);
      json = __this_00;
      if (__this_01 != (UnityEngine_Canvas_o *)0x0) {
        UnityEngine_Canvas__set_overrideSorting(__this_01,1,(MethodInfo *)0x0);
        UnityEngine_Canvas__set_sortingOrder(__this_01,value,(MethodInfo *)0x0);
        pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        json = __this;
        if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
          pUVar4 = (UnityEngine_Transform_o *)
                   UnityEngine_GameObject__AddComponent_object_(pUVar3,MethodInfo_GraphicRaycaster_AddComponent_GraphicRaycaster);
          return pUVar4;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c6f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTheme);
    g_data_057a9c6f = '\x01';
  }
  pMVar6 = (MethodInfo *)0x0;
  definition = Gisketch_Aottg2UI_Data_GisketchThemeDefinition__FromJson(json,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchTheme + 0xe4) != 0) {
    pGVar5 = Gisketch_Aottg2UI_Styling_GisketchTheme__FromDefinition(definition,pMVar6);
    return (UnityEngine_Transform_o *)pGVar5;
  }
  il2cpp_runtime_helper_02337ed0();
  pGVar5 = Gisketch_Aottg2UI_Styling_GisketchTheme__FromDefinition(definition,pMVar6);
  return (UnityEngine_Transform_o *)pGVar5;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$PromoteLayer
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__PromoteLayer (UnityEngine_Transform_o* layer, int32_t sortingOrder, const MethodInfo* method);
// 0x3b2ac10

void Gisketch_Aottg2UI_GisketchUIRoot__PromoteLayer
               (UnityEngine_Transform_o *layer,int32_t sortingOrder,MethodInfo *method)

{
  System_String_o *__this;
  UnityEngine_Canvas_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *definition;
  MethodInfo *method_00;
  System_String_o *json;
  
  json = (System_String_o *)layer;
  if (g_data_057a9bf5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_AddComponent_Canvas);
    json = (System_String_o *)&MethodInfo_GraphicRaycaster_AddComponent_GraphicRaycaster;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9bf5 = '\x01';
  }
  if (layer != (UnityEngine_Transform_o *)0x0) {
    json = (System_String_o *)layer;
    __this = (System_String_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)layer,(MethodInfo *)0x0);
    if (__this != (System_String_o *)0x0) {
      __this_00 = (UnityEngine_Canvas_o *)
                  UnityEngine_GameObject__AddComponent_object_
                            ((UnityEngine_GameObject_o *)__this,MethodInfo_Canvas_AddComponent_Canvas);
      json = __this;
      if (__this_00 != (UnityEngine_Canvas_o *)0x0) {
        UnityEngine_Canvas__set_overrideSorting(__this_00,1,(MethodInfo *)0x0);
        UnityEngine_Canvas__set_sortingOrder(__this_00,sortingOrder,(MethodInfo *)0x0);
        __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)layer,(MethodInfo *)0x0);
        json = (System_String_o *)layer;
        if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__AddComponent_object_(__this_01,MethodInfo_GraphicRaycaster_AddComponent_GraphicRaycaster);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c6f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTheme);
    g_data_057a9c6f = '\x01';
  }
  method_00 = (MethodInfo *)0x0;
  definition = Gisketch_Aottg2UI_Data_GisketchThemeDefinition__FromJson(json,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchTheme + 0xe4) != 0) {
    Gisketch_Aottg2UI_Styling_GisketchTheme__FromDefinition(definition,method_00);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  Gisketch_Aottg2UI_Styling_GisketchTheme__FromDefinition(definition,method_00);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$FirstScreenId
// il2cpp: System_String_o* Gisketch_Aottg2UI_GisketchUIRoot__FirstScreenId (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* manifest, const MethodInfo* method);
// 0x3b2afe0

System_String_o *
Gisketch_Aottg2UI_GisketchUIRoot__FirstScreenId
          (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *manifest,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *pGVar1;
  System_String_o *extraout_RAX;
  MethodInfo *method_00;
  
  if (manifest != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
    pGVar1 = (manifest->fields).screens;
    if ((pGVar1 == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *)0x0) || (pGVar1->max_length == 0))
    {
      return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    if ((int)pGVar1->max_length == 0) goto label_03b2b02d;
    if (pGVar1->m_Items[0] != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
      return (pGVar1->m_Items[0]->fields).id;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_03b2b02d:
  il2cpp_runtime_helper_022b2ca0();
  Gisketch_Aottg2UI_GisketchUIRoot__Clear_3a2a2f0((Gisketch_Aottg2UI_GisketchUIRoot_o *)manifest,1,method_00);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$Stretch
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__Stretch (UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x3b2b9b0

void Gisketch_Aottg2UI_GisketchUIRoot__Stretch(UnityEngine_RectTransform_o *rect,MethodInfo *method)

{
  int *piVar1;
  uint uVar2;
  System_Collections_Generic_HashSet_Slot_T__array *pSVar3;
  char cVar4;
  bool_conflict bVar5;
  UnityEngine_EventSystems_EventSystem_o *pUVar6;
  UnityEngine_Object_o *pUVar7;
  UnityEngine_Transform_o *__this;
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_object__o *pSVar8;
  UnityEngine_Coroutine_o *pUVar9;
  System_String_o *a;
  MethodInfo *method_00;
  int iVar10;
  System_Collections_Generic_HashSet_object__o *value;
  System_Collections_Generic_HashSet_object__o *pSVar11;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_01;
  long lVar12;
  MethodInfo *pMVar13;
  MethodInfo *pMVar14;
  System_Int32_array *pSVar15;
  ulong uVar16;
  Gisketch_Aottg2UI_GisketchUIRoot_o *x;
  
  if (g_data_057a694c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a694c = '\x01';
  }
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchorMin
              (rect,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    if (g_data_057a9c86 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a9c86 = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax
              (rect,(UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8)
               ,(MethodInfo *)0x0);
    if (g_data_057a694c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a694c = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMin
              (rect,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    if (g_data_057a694c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a694c = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax
              (rect,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9bf9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputField_GetComponent_InputField);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_GetComponent_TMP_InputField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9bf9 = '\x01';
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar6 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_03b2bb6c:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_01 = x;
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return;
    }
    if (x != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      pUVar7 = (UnityEngine_Object_o *)
               UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)x,MethodInfo_TMP_InputField_GetComponent_TMP_InputField);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)x,MethodInfo_InputField_GetComponent_InputField);
        return;
      }
      return;
    }
  }
  else {
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_01 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
    pUVar6 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
      x = (Gisketch_Aottg2UI_GisketchUIRoot_o *)(pUVar6->fields).m_CurrentSelected;
      goto label_03b2bb6c;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9bf8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9bf8 = '\x01';
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar6 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar13 = (MethodInfo *)0x0;
  pMVar14 = (MethodInfo *)0x0;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar12 = 0;
    pUVar6 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto label_03b2bd1f;
    pMVar13 = (MethodInfo *)(pUVar6->fields).m_CurrentSelected;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((((char)bVar5 == '\0') ||
      (pMVar14 = pMVar13,
      bVar5 = Gisketch_Aottg2UI_GisketchUIRoot__IsInsideGisketchCanvas
                        (__this_01,(UnityEngine_GameObject_o *)pMVar13,method_00), (char)bVar5 == '\0')) ||
     (bVar5 = Gisketch_Aottg2UI_GisketchUIRoot__IsInput((UnityEngine_GameObject_o *)pMVar13,pMVar14),
     (char)bVar5 != '\0')) {
    return;
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar12 = 0;
  pUVar6 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (pUVar6 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
    UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_50f16d0
              (pUVar6,(UnityEngine_GameObject_o *)0x0,(MethodInfo *)0x0);
    return;
  }
label_03b2bd1f:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9bfa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9bfa = '\x01';
  }
  pUVar7 = *(UnityEngine_Object_o **)(lVar12 + 0x40);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = (System_Collections_Generic_HashSet_object__o *)0x0;
  pMVar13 = pMVar14;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  if (pMVar14 != (MethodInfo *)0x0) {
    pSVar8 = (System_Collections_Generic_HashSet_object__o *)0x0;
    __this = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pMVar14,(MethodInfo *)0x0);
    pMVar13 = *(MethodInfo **)(lVar12 + 0x40);
    if (pMVar13 != (MethodInfo *)0x0) {
      pSVar8 = (System_Collections_Generic_HashSet_object__o *)0x0;
      parent = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pMVar13,(MethodInfo *)0x0);
      if (__this != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__IsChildOf(__this,parent,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar14 = pMVar13;
  if (g_data_057a9bfb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputField_GetComponent_InputField);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_GetComponent_TMP_InputField);
    pMVar14 = (MethodInfo *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9bfb = '\x01';
  }
  if (pMVar13 != (MethodInfo *)0x0) {
    pUVar7 = (UnityEngine_Object_o *)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pMVar13,MethodInfo_TMP_InputField_GetComponent_TMP_InputField);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return;
    }
    pUVar7 = (UnityEngine_Object_o *)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pMVar13,MethodInfo_InputField_GetComponent_InputField);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar11 = pSVar8;
  if (g_data_057a9bfc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&"ScreenPrewarm.Queue");
    g_data_057a9bfc = '\x01';
    iVar10 = *(int *)(TypeInfo_Application + 0xe4);
  }
  else {
    iVar10 = *(int *)(TypeInfo_Application + 0xe4);
  }
  if (iVar10 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this_00 = (System_Collections_Generic_HashSet_object__o *)0x0;
    bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    cVar4 = (char)bVar5;
  }
  else {
    __this_00 = (System_Collections_Generic_HashSet_object__o *)0x0;
    bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    cVar4 = (char)bVar5;
  }
  if ((pSVar8 == (System_Collections_Generic_HashSet_object__o *)0x0) || (cVar4 == '\0')) {
    return;
  }
  pSVar3 = (pSVar8->fields)._slots;
  if ((int)pSVar3 < 1) {
label_03b2c139:
    if (*(long *)&pMVar14[1].token != 0) {
      if (*(int *)(*(long *)&pMVar14[1].token + 0x18) < 1) {
        return;
      }
      if (pMVar14[2].methodPointer != (Il2CppMethodPointer)0x0) {
        return;
      }
      if (g_data_057a9bfd == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_RunScreenPrewarmQueue_d__73);
        g_data_057a9bfd = '\x01';
      }
      pSVar8 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_RunScreenPrewarmQueue_d__73);
      pSVar11 = (System_Collections_Generic_HashSet_object__o *)0x0;
      __this_00 = pSVar8;
      System_Object___ctor((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
      *(int32_t *)&(pSVar8->fields)._buckets = 0;
      if (pSVar8 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        *(MethodInfo **)&(pSVar8->fields)._count = pMVar14;
        il2cpp_runtime_helper_022b4080(&(pSVar8->fields)._count,pMVar14);
        pUVar9 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                           ((UnityEngine_MonoBehaviour_o *)pMVar14,(System_Collections_IEnumerator_o *)pSVar8,
                            (MethodInfo *)0x0);
        pMVar14[2].methodPointer = (Il2CppMethodPointer)pUVar9;
        il2cpp_runtime_helper_022b4080(pMVar14 + 2,pUVar9);
        return;
      }
    }
label_03b2c1f0:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar16 = 0;
    if (((ulong)pSVar3 & 0xffffffff) != 0) {
      do {
        value = *(System_Collections_Generic_HashSet_object__o **)(&(pSVar8->fields)._count + uVar16 * 2);
        pSVar11 = (System_Collections_Generic_HashSet_object__o *)0x0;
        __this_00 = value;
        bVar5 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          __this_00 = *(System_Collections_Generic_HashSet_object__o **)&pMVar14[1].slot;
          if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b2c1f0;
          pSVar11 = value;
          bVar5 = System_Collections_Generic_HashSet_object___Contains
                            (__this_00,(Il2CppObject *)value,MethodInfo_Boolean_Contains);
          if ((char)bVar5 == '\0') {
            if (g_data_057a9bff == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
              il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
              g_data_057a9bff = '\x01';
            }
            __this_00 = *(System_Collections_Generic_HashSet_object__o **)&pMVar14[1].token;
            if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b2c1f0;
            iVar10 = 0;
            while( true ) {
              lVar12 = MethodInfo_Void_Add;
              uVar2 = *(uint *)&(__this_00->fields)._slots;
              if ((int)uVar2 <= iVar10) break;
              __this_00 = (System_Collections_Generic_HashSet_object__o *)
                          System_Collections_Generic_List_object___get_Item
                                    ((System_Collections_Generic_List_object__o *)__this_00,iVar10,
                                     MethodInfo_String_get_Item);
              pSVar11 = value;
              bVar5 = System_String__Equals_3af50f0
                                ((System_String_o *)__this_00,(System_String_o *)value,5,(MethodInfo *)0x0);
              if ((char)bVar5 != '\0') goto label_03b2bf60;
              iVar10 = iVar10 + 1;
              __this_00 = *(System_Collections_Generic_HashSet_object__o **)&pMVar14[1].token;
              if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b2c1f0;
            }
            piVar1 = (int *)((long)&(__this_00->fields)._slots + 4);
            *piVar1 = *piVar1 + 1;
            pSVar15 = (__this_00->fields)._buckets;
            if (pSVar15 == (System_Int32_array *)0x0) goto label_03b2c1f0;
            if (uVar2 < (uint)pSVar15->max_length) {
              *(uint *)&(__this_00->fields)._slots = uVar2 + 1;
              *(System_Collections_Generic_HashSet_object__o **)(pSVar15->m_Items + (long)(int)uVar2 * 2) =
                   value;
              il2cpp_runtime_helper_022b4080(pSVar15->m_Items + (long)(int)uVar2 * 2,value);
              iVar10 = *(int *)(TypeInfo_GisketchUiPerfLog + 0xe4);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)value,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              iVar10 = *(int *)(TypeInfo_GisketchUiPerfLog + 0xe4);
            }
            if (iVar10 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            __this_00 = "ScreenPrewarm.Queue";
            Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
                      ((System_String_o *)"ScreenPrewarm.Queue",(System_String_o *)value,(MethodInfo *)0x0);
            pSVar11 = value;
          }
        }
label_03b2bf60:
        uVar16 = uVar16 + 1;
        uVar2 = *(uint *)&(pSVar8->fields)._slots;
        if ((long)(int)uVar2 <= (long)uVar16) goto label_03b2c139;
      } while (uVar16 < uVar2);
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057a9bff == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    g_data_057a9bff = '\x01';
  }
  pSVar15 = __this_00[2].fields._buckets;
  if (pSVar15 != (System_Int32_array *)0x0) {
    iVar10 = 0;
    do {
      if ((int)pSVar15->max_length <= iVar10) {
        return;
      }
      a = (System_String_o *)
          System_Collections_Generic_List_object___get_Item
                    ((System_Collections_Generic_List_object__o *)pSVar15,iVar10,MethodInfo_String_get_Item);
      bVar5 = System_String__Equals_3af50f0(a,(System_String_o *)pSVar11,5,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        return;
      }
      iVar10 = iVar10 + 1;
      pSVar15 = __this_00[2].fields._buckets;
    } while (pSVar15 != (System_Int32_array *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$DestroyObject
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__DestroyObject (UnityEngine_GameObject_o** go, const MethodInfo* method);
// 0x3b2b140

void Gisketch_Aottg2UI_GisketchUIRoot__DestroyObject(UnityEngine_GameObject_o **go,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  
  if (g_data_057a9bf6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9bf6 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)*go;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  pUVar1 = (UnityEngine_Object_o *)*go;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((char)bVar2 == '\0') {
    UnityEngine_Object__DestroyImmediate_4e01e00(pUVar1,(MethodInfo *)0x0);
  }
  else {
    UnityEngine_Object__Destroy_4e01c60(pUVar1,(MethodInfo *)0x0);
  }
  *go = (UnityEngine_GameObject_o *)0x0;
  il2cpp_runtime_helper_022b4080(go,0);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$MarkEditorPreview
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__MarkEditorPreview (UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x3b2b7e0

void Gisketch_Aottg2UI_GisketchUIRoot__MarkEditorPreview(UnityEngine_GameObject_o *go,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$UpdateFocusInput
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__UpdateFocusInput (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3b29fb0

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
  if (g_data_057a9bf7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9bf7 = '\x01';
  }
  auStack_28 = (undefined1  [8])((ulong)auStack_28 & 0xffffffffffffff);
  pMVar4 = (MethodInfo *)(auStack_28 + 7);
  bVar2 = Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__TakeTab((bool_conflict *)pMVar4,(MethodInfo *)0x0)
  ;
  if ((char)bVar2 == '\0') {
    x_00 = Gisketch_Aottg2UI_GisketchUIRoot__SelectedInput(pMVar4);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar4 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__PollPointerOnly((MethodInfo *)0x0);
      return;
    }
    bVar2 = Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__Poll((MethodInfo *)0x0);
    if (g_data_057a9c87 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
      g_data_057a9c87 = '\x01';
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
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar3 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar3 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_EventSystems_EventSystem_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9c44 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
        g_data_057a9c44 = '\x01';
      }
      if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
      return;
    }
    x = (UnityEngine_Object_o *)(pUVar3->fields).m_CurrentSelected;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
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
                        ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)pGVar1,(uint)auStack_28[7],
                         (MethodInfo *)0x0);
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
// 0x3b2bc00

void Gisketch_Aottg2UI_GisketchUIRoot__ClearPointerSelection
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  int *piVar1;
  uint uVar2;
  System_Collections_Generic_HashSet_Slot_T__array *pSVar3;
  char cVar4;
  bool_conflict bVar5;
  UnityEngine_EventSystems_EventSystem_o *pUVar6;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  UnityEngine_Object_o *pUVar7;
  System_Collections_Generic_HashSet_object__o *__this_01;
  System_Collections_Generic_HashSet_object__o *pSVar8;
  UnityEngine_Coroutine_o *pUVar9;
  System_String_o *a;
  MethodInfo *method_00;
  int iVar10;
  System_Collections_Generic_HashSet_object__o *value;
  System_Collections_Generic_HashSet_object__o *pSVar11;
  long lVar12;
  MethodInfo *pMVar13;
  MethodInfo *pMVar14;
  System_Int32_array *pSVar15;
  ulong uVar16;
  
  if (g_data_057a9bf8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9bf8 = '\x01';
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar6 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar13 = (MethodInfo *)0x0;
  pMVar14 = (MethodInfo *)0x0;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar12 = 0;
    pUVar6 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto label_03b2bd1f;
    pMVar13 = (MethodInfo *)(pUVar6->fields).m_CurrentSelected;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((((char)bVar5 == '\0') ||
      (pMVar14 = pMVar13,
      bVar5 = Gisketch_Aottg2UI_GisketchUIRoot__IsInsideGisketchCanvas
                        (__this,(UnityEngine_GameObject_o *)pMVar13,method_00), (char)bVar5 == '\0')) ||
     (bVar5 = Gisketch_Aottg2UI_GisketchUIRoot__IsInput((UnityEngine_GameObject_o *)pMVar13,pMVar14),
     (char)bVar5 != '\0')) {
    return;
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar12 = 0;
  pUVar6 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (pUVar6 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
    UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_50f16d0
              (pUVar6,(UnityEngine_GameObject_o *)0x0,(MethodInfo *)0x0);
    return;
  }
label_03b2bd1f:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9bfa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9bfa = '\x01';
  }
  pUVar7 = *(UnityEngine_Object_o **)(lVar12 + 0x40);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = (System_Collections_Generic_HashSet_object__o *)0x0;
  pMVar13 = pMVar14;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  if (pMVar14 != (MethodInfo *)0x0) {
    pSVar8 = (System_Collections_Generic_HashSet_object__o *)0x0;
    __this_00 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pMVar14,(MethodInfo *)0x0);
    pMVar13 = *(MethodInfo **)(lVar12 + 0x40);
    if (pMVar13 != (MethodInfo *)0x0) {
      pSVar8 = (System_Collections_Generic_HashSet_object__o *)0x0;
      parent = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pMVar13,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__IsChildOf(__this_00,parent,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar14 = pMVar13;
  if (g_data_057a9bfb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputField_GetComponent_InputField);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_GetComponent_TMP_InputField);
    pMVar14 = (MethodInfo *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9bfb = '\x01';
  }
  if (pMVar13 != (MethodInfo *)0x0) {
    pUVar7 = (UnityEngine_Object_o *)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pMVar13,MethodInfo_TMP_InputField_GetComponent_TMP_InputField);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return;
    }
    pUVar7 = (UnityEngine_Object_o *)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pMVar13,MethodInfo_InputField_GetComponent_InputField);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar11 = pSVar8;
  if (g_data_057a9bfc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&"ScreenPrewarm.Queue");
    g_data_057a9bfc = '\x01';
    iVar10 = *(int *)(TypeInfo_Application + 0xe4);
  }
  else {
    iVar10 = *(int *)(TypeInfo_Application + 0xe4);
  }
  if (iVar10 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this_01 = (System_Collections_Generic_HashSet_object__o *)0x0;
    bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    cVar4 = (char)bVar5;
  }
  else {
    __this_01 = (System_Collections_Generic_HashSet_object__o *)0x0;
    bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    cVar4 = (char)bVar5;
  }
  if ((pSVar8 == (System_Collections_Generic_HashSet_object__o *)0x0) || (cVar4 == '\0')) {
    return;
  }
  pSVar3 = (pSVar8->fields)._slots;
  if ((int)pSVar3 < 1) {
label_03b2c139:
    if (*(long *)&pMVar14[1].token != 0) {
      if (*(int *)(*(long *)&pMVar14[1].token + 0x18) < 1) {
        return;
      }
      if (pMVar14[2].methodPointer != (Il2CppMethodPointer)0x0) {
        return;
      }
      if (g_data_057a9bfd == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_RunScreenPrewarmQueue_d__73);
        g_data_057a9bfd = '\x01';
      }
      pSVar8 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_RunScreenPrewarmQueue_d__73);
      pSVar11 = (System_Collections_Generic_HashSet_object__o *)0x0;
      __this_01 = pSVar8;
      System_Object___ctor((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
      *(int32_t *)&(pSVar8->fields)._buckets = 0;
      if (pSVar8 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        *(MethodInfo **)&(pSVar8->fields)._count = pMVar14;
        il2cpp_runtime_helper_022b4080(&(pSVar8->fields)._count,pMVar14);
        pUVar9 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                           ((UnityEngine_MonoBehaviour_o *)pMVar14,(System_Collections_IEnumerator_o *)pSVar8,
                            (MethodInfo *)0x0);
        pMVar14[2].methodPointer = (Il2CppMethodPointer)pUVar9;
        il2cpp_runtime_helper_022b4080(pMVar14 + 2,pUVar9);
        return;
      }
    }
label_03b2c1f0:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar16 = 0;
    if (((ulong)pSVar3 & 0xffffffff) != 0) {
      do {
        value = *(System_Collections_Generic_HashSet_object__o **)(&(pSVar8->fields)._count + uVar16 * 2);
        pSVar11 = (System_Collections_Generic_HashSet_object__o *)0x0;
        __this_01 = value;
        bVar5 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          __this_01 = *(System_Collections_Generic_HashSet_object__o **)&pMVar14[1].slot;
          if (__this_01 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b2c1f0;
          pSVar11 = value;
          bVar5 = System_Collections_Generic_HashSet_object___Contains
                            (__this_01,(Il2CppObject *)value,MethodInfo_Boolean_Contains);
          if ((char)bVar5 == '\0') {
            if (g_data_057a9bff == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
              il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
              g_data_057a9bff = '\x01';
            }
            __this_01 = *(System_Collections_Generic_HashSet_object__o **)&pMVar14[1].token;
            if (__this_01 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b2c1f0;
            iVar10 = 0;
            while( true ) {
              lVar12 = MethodInfo_Void_Add;
              uVar2 = *(uint *)&(__this_01->fields)._slots;
              if ((int)uVar2 <= iVar10) break;
              __this_01 = (System_Collections_Generic_HashSet_object__o *)
                          System_Collections_Generic_List_object___get_Item
                                    ((System_Collections_Generic_List_object__o *)__this_01,iVar10,
                                     MethodInfo_String_get_Item);
              pSVar11 = value;
              bVar5 = System_String__Equals_3af50f0
                                ((System_String_o *)__this_01,(System_String_o *)value,5,(MethodInfo *)0x0);
              if ((char)bVar5 != '\0') goto label_03b2bf60;
              iVar10 = iVar10 + 1;
              __this_01 = *(System_Collections_Generic_HashSet_object__o **)&pMVar14[1].token;
              if (__this_01 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b2c1f0;
            }
            piVar1 = (int *)((long)&(__this_01->fields)._slots + 4);
            *piVar1 = *piVar1 + 1;
            pSVar15 = (__this_01->fields)._buckets;
            if (pSVar15 == (System_Int32_array *)0x0) goto label_03b2c1f0;
            if (uVar2 < (uint)pSVar15->max_length) {
              *(uint *)&(__this_01->fields)._slots = uVar2 + 1;
              *(System_Collections_Generic_HashSet_object__o **)(pSVar15->m_Items + (long)(int)uVar2 * 2) =
                   value;
              il2cpp_runtime_helper_022b4080(pSVar15->m_Items + (long)(int)uVar2 * 2,value);
              iVar10 = *(int *)(TypeInfo_GisketchUiPerfLog + 0xe4);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)value,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              iVar10 = *(int *)(TypeInfo_GisketchUiPerfLog + 0xe4);
            }
            if (iVar10 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            __this_01 = "ScreenPrewarm.Queue";
            Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
                      ((System_String_o *)"ScreenPrewarm.Queue",(System_String_o *)value,(MethodInfo *)0x0);
            pSVar11 = value;
          }
        }
label_03b2bf60:
        uVar16 = uVar16 + 1;
        uVar2 = *(uint *)&(pSVar8->fields)._slots;
        if ((long)(int)uVar2 <= (long)uVar16) goto label_03b2c139;
      } while (uVar16 < uVar2);
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057a9bff == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    g_data_057a9bff = '\x01';
  }
  pSVar15 = __this_01[2].fields._buckets;
  if (pSVar15 != (System_Int32_array *)0x0) {
    iVar10 = 0;
    do {
      if ((int)pSVar15->max_length <= iVar10) {
        return;
      }
      a = (System_String_o *)
          System_Collections_Generic_List_object___get_Item
                    ((System_Collections_Generic_List_object__o *)pSVar15,iVar10,MethodInfo_String_get_Item);
      bVar5 = System_String__Equals_3af50f0(a,(System_String_o *)pSVar11,5,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        return;
      }
      iVar10 = iVar10 + 1;
      pSVar15 = __this_01[2].fields._buckets;
    } while (pSVar15 != (System_Int32_array *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$SelectedInput
// il2cpp: UnityEngine_UI_Selectable_o* Gisketch_Aottg2UI_GisketchUIRoot__SelectedInput (const MethodInfo* method);
// 0x3b2bab0

UnityEngine_UI_Selectable_o * Gisketch_Aottg2UI_GisketchUIRoot__SelectedInput(MethodInfo *method)

{
  int *piVar1;
  uint uVar2;
  System_Collections_Generic_HashSet_Slot_T__array *pSVar3;
  bool_conflict bVar4;
  UnityEngine_EventSystems_EventSystem_o *pUVar5;
  UnityEngine_UI_Selectable_o *pUVar6;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  UnityEngine_UI_Selectable_o *extraout_RAX;
  UnityEngine_Transform_o *__this;
  UnityEngine_Transform_o *parent;
  undefined4 extraout_var_02;
  UnityEngine_Object_o *pUVar7;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  System_Collections_Generic_HashSet_object__o *__this_00;
  undefined4 extraout_var_06;
  System_Collections_Generic_HashSet_object__o *pSVar8;
  UnityEngine_Coroutine_o *pUVar9;
  System_String_o *a;
  undefined4 extraout_var_07;
  MethodInfo *method_00;
  int iVar10;
  System_Collections_Generic_HashSet_object__o *value;
  System_Collections_Generic_HashSet_object__o *pSVar11;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_01;
  long lVar12;
  MethodInfo *pMVar13;
  MethodInfo *pMVar14;
  System_Int32_array *pSVar15;
  ulong uVar16;
  Gisketch_Aottg2UI_GisketchUIRoot_o *x;
  
  if (g_data_057a9bf9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputField_GetComponent_InputField);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_GetComponent_TMP_InputField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9bf9 = '\x01';
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar5 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
label_03b2bb6c:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_01 = x;
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return (UnityEngine_UI_Selectable_o *)0x0;
    }
    if (x != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      pUVar6 = (UnityEngine_UI_Selectable_o *)
               UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)x,MethodInfo_TMP_InputField_GetComponent_TMP_InputField);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        return pUVar6;
      }
      pUVar6 = (UnityEngine_UI_Selectable_o *)
               UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)x,MethodInfo_InputField_GetComponent_InputField);
      return pUVar6;
    }
  }
  else {
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_01 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
    pUVar5 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
      x = (Gisketch_Aottg2UI_GisketchUIRoot_o *)(pUVar5->fields).m_CurrentSelected;
      goto label_03b2bb6c;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9bf8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9bf8 = '\x01';
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar5 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar13 = (MethodInfo *)0x0;
  pMVar14 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar12 = 0;
    pUVar5 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto label_03b2bd1f;
    pMVar13 = (MethodInfo *)(pUVar5->fields).m_CurrentSelected;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return (UnityEngine_UI_Selectable_o *)CONCAT44(extraout_var,bVar4);
  }
  pMVar14 = pMVar13;
  bVar4 = Gisketch_Aottg2UI_GisketchUIRoot__IsInsideGisketchCanvas
                    (__this_01,(UnityEngine_GameObject_o *)pMVar13,method_00);
  if ((char)bVar4 == '\0') {
    return (UnityEngine_UI_Selectable_o *)CONCAT44(extraout_var_00,bVar4);
  }
  bVar4 = Gisketch_Aottg2UI_GisketchUIRoot__IsInput((UnityEngine_GameObject_o *)pMVar13,pMVar14);
  if ((char)bVar4 != '\0') {
    return (UnityEngine_UI_Selectable_o *)CONCAT44(extraout_var_01,bVar4);
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar12 = 0;
  pUVar5 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
    UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_50f16d0
              (pUVar5,(UnityEngine_GameObject_o *)0x0,(MethodInfo *)0x0);
    return extraout_RAX;
  }
label_03b2bd1f:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9bfa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9bfa = '\x01';
  }
  pUVar7 = *(UnityEngine_Object_o **)(lVar12 + 0x40);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return (UnityEngine_UI_Selectable_o *)0x0;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = (System_Collections_Generic_HashSet_object__o *)0x0;
  pMVar13 = pMVar14;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return (UnityEngine_UI_Selectable_o *)0x0;
  }
  if (pMVar14 != (MethodInfo *)0x0) {
    pSVar8 = (System_Collections_Generic_HashSet_object__o *)0x0;
    __this = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pMVar14,(MethodInfo *)0x0);
    pMVar13 = *(MethodInfo **)(lVar12 + 0x40);
    if (pMVar13 != (MethodInfo *)0x0) {
      pSVar8 = (System_Collections_Generic_HashSet_object__o *)0x0;
      parent = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pMVar13,(MethodInfo *)0x0);
      if (__this != (UnityEngine_Transform_o *)0x0) {
        bVar4 = UnityEngine_Transform__IsChildOf(__this,parent,(MethodInfo *)0x0);
        return (UnityEngine_UI_Selectable_o *)CONCAT44(extraout_var_02,bVar4);
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar14 = pMVar13;
  if (g_data_057a9bfb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputField_GetComponent_InputField);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_GetComponent_TMP_InputField);
    pMVar14 = (MethodInfo *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9bfb = '\x01';
  }
  if (pMVar13 != (MethodInfo *)0x0) {
    pUVar7 = (UnityEngine_Object_o *)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pMVar13,MethodInfo_TMP_InputField_GetComponent_TMP_InputField);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      pUVar7 = (UnityEngine_Object_o *)
               UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pMVar13,MethodInfo_InputField_GetComponent_InputField);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      return (UnityEngine_UI_Selectable_o *)CONCAT44(extraout_var_04,bVar4);
    }
    return (UnityEngine_UI_Selectable_o *)CONCAT71((int7)(CONCAT44(extraout_var_03,bVar4) >> 8),1);
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar11 = pSVar8;
  if (g_data_057a9bfc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&"ScreenPrewarm.Queue");
    g_data_057a9bfc = '\x01';
    iVar10 = *(int *)(TypeInfo_Application + 0xe4);
  }
  else {
    iVar10 = *(int *)(TypeInfo_Application + 0xe4);
  }
  if (iVar10 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this_00 = (System_Collections_Generic_HashSet_object__o *)0x0;
    bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    pUVar6 = (UnityEngine_UI_Selectable_o *)CONCAT44(extraout_var_06,bVar4);
  }
  else {
    __this_00 = (System_Collections_Generic_HashSet_object__o *)0x0;
    bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    pUVar6 = (UnityEngine_UI_Selectable_o *)CONCAT44(extraout_var_05,bVar4);
  }
  if ((pSVar8 == (System_Collections_Generic_HashSet_object__o *)0x0) || ((char)pUVar6 == '\0')) {
    return pUVar6;
  }
  pSVar3 = (pSVar8->fields)._slots;
  if ((int)pSVar3 < 1) {
label_03b2c139:
    pUVar6 = *(UnityEngine_UI_Selectable_o **)&pMVar14[1].token;
    if (pUVar6 != (UnityEngine_UI_Selectable_o *)0x0) {
      if (*(int *)&(pUVar6->fields).m_CancellationTokenSource < 1) {
        return pUVar6;
      }
      if (pMVar14[2].methodPointer != (Il2CppMethodPointer)0x0) {
        return pUVar6;
      }
      if (g_data_057a9bfd == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_RunScreenPrewarmQueue_d__73);
        g_data_057a9bfd = '\x01';
      }
      pSVar8 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_RunScreenPrewarmQueue_d__73);
      pSVar11 = (System_Collections_Generic_HashSet_object__o *)0x0;
      __this_00 = pSVar8;
      System_Object___ctor((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
      *(int32_t *)&(pSVar8->fields)._buckets = 0;
      if (pSVar8 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        *(MethodInfo **)&(pSVar8->fields)._count = pMVar14;
        il2cpp_runtime_helper_022b4080(&(pSVar8->fields)._count,pMVar14);
        pUVar9 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                           ((UnityEngine_MonoBehaviour_o *)pMVar14,(System_Collections_IEnumerator_o *)pSVar8,
                            (MethodInfo *)0x0);
        pMVar14[2].methodPointer = (Il2CppMethodPointer)pUVar9;
        pUVar6 = (UnityEngine_UI_Selectable_o *)il2cpp_runtime_helper_022b4080(pMVar14 + 2,pUVar9);
        return pUVar6;
      }
    }
label_03b2c1f0:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar16 = 0;
    if (((ulong)pSVar3 & 0xffffffff) != 0) {
      do {
        value = *(System_Collections_Generic_HashSet_object__o **)(&(pSVar8->fields)._count + uVar16 * 2);
        pSVar11 = (System_Collections_Generic_HashSet_object__o *)0x0;
        __this_00 = value;
        bVar4 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          __this_00 = *(System_Collections_Generic_HashSet_object__o **)&pMVar14[1].slot;
          if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b2c1f0;
          pSVar11 = value;
          bVar4 = System_Collections_Generic_HashSet_object___Contains
                            (__this_00,(Il2CppObject *)value,MethodInfo_Boolean_Contains);
          if ((char)bVar4 == '\0') {
            if (g_data_057a9bff == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
              il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
              g_data_057a9bff = '\x01';
            }
            __this_00 = *(System_Collections_Generic_HashSet_object__o **)&pMVar14[1].token;
            if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b2c1f0;
            iVar10 = 0;
            while( true ) {
              lVar12 = MethodInfo_Void_Add;
              uVar2 = *(uint *)&(__this_00->fields)._slots;
              if ((int)uVar2 <= iVar10) break;
              __this_00 = (System_Collections_Generic_HashSet_object__o *)
                          System_Collections_Generic_List_object___get_Item
                                    ((System_Collections_Generic_List_object__o *)__this_00,iVar10,
                                     MethodInfo_String_get_Item);
              pSVar11 = value;
              bVar4 = System_String__Equals_3af50f0
                                ((System_String_o *)__this_00,(System_String_o *)value,5,(MethodInfo *)0x0);
              if ((char)bVar4 != '\0') goto label_03b2bf60;
              iVar10 = iVar10 + 1;
              __this_00 = *(System_Collections_Generic_HashSet_object__o **)&pMVar14[1].token;
              if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b2c1f0;
            }
            piVar1 = (int *)((long)&(__this_00->fields)._slots + 4);
            *piVar1 = *piVar1 + 1;
            pSVar15 = (__this_00->fields)._buckets;
            if (pSVar15 == (System_Int32_array *)0x0) goto label_03b2c1f0;
            if (uVar2 < (uint)pSVar15->max_length) {
              *(uint *)&(__this_00->fields)._slots = uVar2 + 1;
              *(System_Collections_Generic_HashSet_object__o **)(pSVar15->m_Items + (long)(int)uVar2 * 2) =
                   value;
              il2cpp_runtime_helper_022b4080(pSVar15->m_Items + (long)(int)uVar2 * 2,value);
              iVar10 = *(int *)(TypeInfo_GisketchUiPerfLog + 0xe4);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)value,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              iVar10 = *(int *)(TypeInfo_GisketchUiPerfLog + 0xe4);
            }
            if (iVar10 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            __this_00 = "ScreenPrewarm.Queue";
            Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
                      ((System_String_o *)"ScreenPrewarm.Queue",(System_String_o *)value,(MethodInfo *)0x0);
            pSVar11 = value;
          }
        }
label_03b2bf60:
        uVar16 = uVar16 + 1;
        uVar2 = *(uint *)&(pSVar8->fields)._slots;
        if ((long)(int)uVar2 <= (long)uVar16) goto label_03b2c139;
      } while (uVar16 < uVar2);
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057a9bff == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    g_data_057a9bff = '\x01';
  }
  pSVar15 = __this_00[2].fields._buckets;
  if (pSVar15 != (System_Int32_array *)0x0) {
    iVar10 = 0;
    do {
      if ((int)pSVar15->max_length <= iVar10) {
        return (UnityEngine_UI_Selectable_o *)0x0;
      }
      a = (System_String_o *)
          System_Collections_Generic_List_object___get_Item
                    ((System_Collections_Generic_List_object__o *)pSVar15,iVar10,MethodInfo_String_get_Item);
      bVar4 = System_String__Equals_3af50f0(a,(System_String_o *)pSVar11,5,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        return (UnityEngine_UI_Selectable_o *)CONCAT71((int7)(CONCAT44(extraout_var_07,bVar4) >> 8),1);
      }
      iVar10 = iVar10 + 1;
      pSVar15 = __this_00[2].fields._buckets;
    } while (pSVar15 != (System_Int32_array *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  return (UnityEngine_UI_Selectable_o *)0x0;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$IsInsideGisketchCanvas
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__IsInsideGisketchCanvas (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, UnityEngine_GameObject_o* selected, const MethodInfo* method);
// 0x3b2bd30

bool_conflict
Gisketch_Aottg2UI_GisketchUIRoot__IsInsideGisketchCanvas
          (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,UnityEngine_GameObject_o *selected,MethodInfo *method)

{
  System_Collections_Generic_HashSet_Slot_T__array *pSVar1;
  System_Int32_array *pSVar2;
  undefined1 *puVar3;
  long lVar4;
  bool_conflict bVar5;
  uint uVar6;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  UnityEngine_Object_o *pUVar7;
  UnityEngine_MonoBehaviour_c *__this_01;
  UnityEngine_MonoBehaviour_c *pUVar8;
  UnityEngine_MonoBehaviour_c *pUVar9;
  UnityEngine_Coroutine_o *pUVar10;
  System_String_o *a;
  int iVar11;
  UnityEngine_MonoBehaviour_c *pUVar12;
  UnityEngine_MonoBehaviour_o *__this_02;
  UnityEngine_MonoBehaviour_o *__this_03;
  System_Collections_Generic_List_object__o *__this_04;
  ulong uVar13;
  
  if (g_data_057a9bfa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9bfa = '\x01';
  }
  pUVar7 = *(UnityEngine_Object_o **)&(__this->fields)._motionScale;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return 0;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar9 = (UnityEngine_MonoBehaviour_c *)0x0;
  __this_02 = (UnityEngine_MonoBehaviour_o *)selected;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)selected,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return 0;
  }
  if (selected != (UnityEngine_GameObject_o *)0x0) {
    pUVar9 = (UnityEngine_MonoBehaviour_c *)0x0;
    __this_00 = UnityEngine_GameObject__get_transform(selected,(MethodInfo *)0x0);
    __this_02 = *(UnityEngine_MonoBehaviour_o **)&(__this->fields)._motionScale;
    if (__this_02 != (UnityEngine_MonoBehaviour_o *)0x0) {
      pUVar9 = (UnityEngine_MonoBehaviour_c *)0x0;
      parent = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_02,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        bVar5 = UnityEngine_Transform__IsChildOf(__this_00,parent,(MethodInfo *)0x0);
        return bVar5;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_03 = __this_02;
  if (g_data_057a9bfb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputField_GetComponent_InputField);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_GetComponent_TMP_InputField);
    __this_03 = (UnityEngine_MonoBehaviour_o *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9bfb = '\x01';
  }
  if (__this_02 != (UnityEngine_MonoBehaviour_o *)0x0) {
    pUVar7 = (UnityEngine_Object_o *)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)__this_02,MethodInfo_TMP_InputField_GetComponent_TMP_InputField);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar5 >> 8),1);
    }
    pUVar7 = (UnityEngine_Object_o *)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)__this_02,MethodInfo_InputField_GetComponent_InputField);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar12 = pUVar9;
  if (g_data_057a9bfc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&"ScreenPrewarm.Queue");
    g_data_057a9bfc = '\x01';
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) goto label_03b2c122;
label_03b2bf05:
    __this_01 = (UnityEngine_MonoBehaviour_c *)0x0;
    uVar6 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  }
  else {
    if (*(int *)(TypeInfo_Application + 0xe4) != 0) goto label_03b2bf05;
label_03b2c122:
    il2cpp_runtime_helper_02337ed0();
    __this_01 = (UnityEngine_MonoBehaviour_c *)0x0;
    uVar6 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  }
  pUVar8 = (UnityEngine_MonoBehaviour_c *)(ulong)uVar6;
  if ((pUVar9 != (UnityEngine_MonoBehaviour_c *)0x0) && ((char)uVar6 != '\0')) {
    pSVar1 = (System_Collections_Generic_HashSet_Slot_T__array *)(pUVar9->_1).namespaze;
    if ((int)pSVar1 < 1) {
label_03b2c139:
      pUVar8 = __this_03[5].klass;
      if (pUVar8 != (UnityEngine_MonoBehaviour_c *)0x0) {
        if ((*(int *)&(pUVar8->_1).namespaze < 1) || (__this_03[5].fields.m_CachedPtr != 0))
        goto label_03b2c159;
        if (g_data_057a9bfd == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_RunScreenPrewarmQueue_d__73);
          g_data_057a9bfd = '\x01';
        }
        pUVar9 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_RunScreenPrewarmQueue_d__73);
        pUVar12 = (UnityEngine_MonoBehaviour_c *)0x0;
        __this_01 = pUVar9;
        System_Object___ctor((Il2CppObject *)pUVar9,(MethodInfo *)0x0);
        *(int32_t *)&((System_Collections_Generic_HashSet_object__Fields *)&(pUVar9->_1).name)->_buckets = 0;
        if (pUVar9 != (UnityEngine_MonoBehaviour_c *)0x0) {
          (pUVar9->_1).byval_arg.data = __this_03;
          il2cpp_runtime_helper_022b4080(&(pUVar9->_1).byval_arg,__this_03);
          pUVar10 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              (__this_03,(System_Collections_IEnumerator_o *)pUVar9,(MethodInfo *)0x0);
          __this_03[5].fields.m_CachedPtr = (intptr_t)pUVar10;
          bVar5 = il2cpp_runtime_helper_022b4080(&__this_03[5].fields,pUVar10);
          return bVar5;
        }
      }
label_03b2c1f0:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      uVar13 = 0;
      if (((ulong)pSVar1 & 0xffffffff) != 0) {
        do {
          pUVar8 = (&(pUVar9->_1).byval_arg.data)[uVar13];
          pUVar12 = (UnityEngine_MonoBehaviour_c *)0x0;
          __this_01 = pUVar8;
          bVar5 = System_String__IsNullOrEmpty((System_String_o *)pUVar8,(MethodInfo *)0x0);
          if ((char)bVar5 == '\0') {
            __this_01 = __this_03[5].monitor;
            if (__this_01 == (UnityEngine_MonoBehaviour_c *)0x0) goto label_03b2c1f0;
            pUVar12 = pUVar8;
            bVar5 = System_Collections_Generic_HashSet_object___Contains
                              ((System_Collections_Generic_HashSet_object__o *)__this_01,
                               (Il2CppObject *)pUVar8,MethodInfo_Boolean_Contains);
            if ((char)bVar5 == '\0') {
              if (g_data_057a9bff == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
                g_data_057a9bff = '\x01';
              }
              __this_01 = __this_03[5].klass;
              if (__this_01 == (UnityEngine_MonoBehaviour_c *)0x0) goto label_03b2c1f0;
              iVar11 = 0;
              while( true ) {
                lVar4 = MethodInfo_Void_Add;
                uVar6 = *(uint *)&(__this_01->_1).namespaze;
                if ((int)uVar6 <= iVar11) break;
                __this_01 = (UnityEngine_MonoBehaviour_c *)
                            System_Collections_Generic_List_object___get_Item
                                      ((System_Collections_Generic_List_object__o *)__this_01,iVar11,
                                       MethodInfo_String_get_Item);
                pUVar12 = pUVar8;
                bVar5 = System_String__Equals_3af50f0
                                  ((System_String_o *)__this_01,(System_String_o *)pUVar8,5,(MethodInfo *)0x0)
                ;
                if ((char)bVar5 != '\0') goto label_03b2bf60;
                iVar11 = iVar11 + 1;
                __this_01 = __this_03[5].klass;
                if (__this_01 == (UnityEngine_MonoBehaviour_c *)0x0) goto label_03b2c1f0;
              }
              puVar3 = (undefined1 *)((long)&(__this_01->_1).namespaze + 4);
              *(int *)puVar3 = *(int *)puVar3 + 1;
              pSVar2 = ((System_Collections_Generic_HashSet_object__Fields *)&(__this_01->_1).name)->_buckets;
              if (pSVar2 == (System_Int32_array *)0x0) goto label_03b2c1f0;
              if (uVar6 < (uint)pSVar2->max_length) {
                *(uint *)&(__this_01->_1).namespaze = uVar6 + 1;
                *(UnityEngine_MonoBehaviour_c **)(pSVar2->m_Items + (long)(int)uVar6 * 2) = pUVar8;
                il2cpp_runtime_helper_022b4080(pSVar2->m_Items + (long)(int)uVar6 * 2,pUVar8);
                iVar11 = *(int *)(TypeInfo_GisketchUiPerfLog + 0xe4);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pUVar8,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                iVar11 = *(int *)(TypeInfo_GisketchUiPerfLog + 0xe4);
              }
              if (iVar11 == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              __this_01 = "ScreenPrewarm.Queue";
              Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
                        ((System_String_o *)"ScreenPrewarm.Queue",(System_String_o *)pUVar8,(MethodInfo *)0x0);
              pUVar12 = pUVar8;
            }
          }
label_03b2bf60:
          uVar13 = uVar13 + 1;
          uVar6 = *(uint *)&(pUVar9->_1).namespaze;
          if ((long)(int)uVar6 <= (long)uVar13) goto label_03b2c139;
        } while (uVar13 < uVar6);
      }
    }
    il2cpp_runtime_helper_022b2ca0();
    if (g_data_057a9bff == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
      g_data_057a9bff = '\x01';
    }
    __this_04 = (System_Collections_Generic_List_object__o *)(__this_01->_1).nestedTypes;
    if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
      iVar11 = 0;
      do {
        if ((__this_04->fields)._size <= iVar11) {
          return 0;
        }
        a = (System_String_o *)
            System_Collections_Generic_List_object___get_Item(__this_04,iVar11,MethodInfo_String_get_Item);
        bVar5 = System_String__Equals_3af50f0(a,(System_String_o *)pUVar12,5,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar5 >> 8),1);
        }
        iVar11 = iVar11 + 1;
        __this_04 = (System_Collections_Generic_List_object__o *)(__this_01->_1).nestedTypes;
      } while (__this_04 != (System_Collections_Generic_List_object__o *)0x0);
    }
    il2cpp_runtime_helper_022b2c90();
    return 0;
  }
label_03b2c159:
  return (bool_conflict)pUVar8;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$IsInput
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__IsInput (UnityEngine_GameObject_o* selected, const MethodInfo* method);
// 0x3b2be00

bool_conflict Gisketch_Aottg2UI_GisketchUIRoot__IsInput(UnityEngine_GameObject_o *selected,MethodInfo *method)

{
  System_Collections_Generic_HashSet_Slot_T__array *pSVar1;
  System_Int32_array *pSVar2;
  System_Collections_Generic_HashSet_Slot_T__array **ppSVar3;
  long lVar4;
  bool_conflict bVar5;
  uint uVar6;
  UnityEngine_Object_o *pUVar7;
  Il2CppClass *__this;
  Il2CppClass **ppIVar8;
  Il2CppClass *pIVar9;
  UnityEngine_Coroutine_o *pUVar10;
  System_String_o *a;
  int iVar11;
  Il2CppClass *pIVar12;
  Il2CppClass *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  ulong uVar13;
  
  __this_00 = (Il2CppClass *)selected;
  if (g_data_057a9bfb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputField_GetComponent_InputField);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_GetComponent_TMP_InputField);
    __this_00 = (Il2CppClass *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9bfb = '\x01';
  }
  if (selected != (UnityEngine_GameObject_o *)0x0) {
    pUVar7 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(selected,MethodInfo_TMP_InputField_GetComponent_TMP_InputField);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar5 >> 8),1);
    }
    pUVar7 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(selected,MethodInfo_InputField_GetComponent_InputField);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar12 = (Il2CppClass *)method;
  if (g_data_057a9bfc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&"ScreenPrewarm.Queue");
    g_data_057a9bfc = '\x01';
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) goto label_03b2c122;
label_03b2bf05:
    __this = (Il2CppClass *)0x0;
    uVar6 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  }
  else {
    if (*(int *)(TypeInfo_Application + 0xe4) != 0) goto label_03b2bf05;
label_03b2c122:
    il2cpp_runtime_helper_02337ed0();
    __this = (Il2CppClass *)0x0;
    uVar6 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  }
  ppIVar8 = (Il2CppClass **)(ulong)uVar6;
  if (((Il2CppClass *)method != (Il2CppClass *)0x0) && ((char)uVar6 != '\0')) {
    pSVar1 = *(System_Collections_Generic_HashSet_Slot_T__array **)((long)&((Il2CppClass *)method)->_1 + 0x18)
    ;
    if ((int)pSVar1 < 1) {
label_03b2c139:
      ppIVar8 = (__this_00->_1).nestedTypes;
      if (ppIVar8 != (Il2CppClass **)0x0) {
        if ((*(int *)(ppIVar8 + 3) < 1) ||
           ((__this_00->_1).interfaceOffsets != (Il2CppRuntimeInterfaceOffsetPair *)0x0)) goto label_03b2c159;
        if (g_data_057a9bfd == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_RunScreenPrewarmQueue_d__73);
          g_data_057a9bfd = '\x01';
        }
        pIVar9 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_RunScreenPrewarmQueue_d__73);
        pIVar12 = (Il2CppClass *)0x0;
        __this = pIVar9;
        System_Object___ctor((Il2CppObject *)pIVar9,(MethodInfo *)0x0);
        *(int32_t *)
         &((System_Collections_Generic_HashSet_object__Fields *)((long)&pIVar9->_1 + 0x10))->_buckets = 0;
        if (pIVar9 != (Il2CppClass *)0x0) {
          ((Il2CppType *)((long)&pIVar9->_1 + 0x20))->data = __this_00;
          il2cpp_runtime_helper_022b4080((Il2CppType *)((long)&pIVar9->_1 + 0x20),__this_00);
          pUVar10 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              ((UnityEngine_MonoBehaviour_o *)__this_00,
                               (System_Collections_IEnumerator_o *)pIVar9,(MethodInfo *)0x0);
          (__this_00->_1).interfaceOffsets = (Il2CppRuntimeInterfaceOffsetPair *)pUVar10;
          bVar5 = il2cpp_runtime_helper_022b4080(&(__this_00->_1).interfaceOffsets,pUVar10);
          return bVar5;
        }
      }
label_03b2c1f0:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      uVar13 = 0;
      if (((ulong)pSVar1 & 0xffffffff) != 0) {
        do {
          pIVar9 = *(Il2CppClass **)((long)&((Il2CppClass *)method)->_1 + uVar13 * 8 + 0x20);
          pIVar12 = (Il2CppClass *)0x0;
          __this = pIVar9;
          bVar5 = System_String__IsNullOrEmpty((System_String_o *)pIVar9,(MethodInfo *)0x0);
          if ((char)bVar5 == '\0') {
            __this = (Il2CppClass *)(__this_00->_1).implementedInterfaces;
            if (__this == (Il2CppClass *)0x0) goto label_03b2c1f0;
            pIVar12 = pIVar9;
            bVar5 = System_Collections_Generic_HashSet_object___Contains
                              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)pIVar9,
                               MethodInfo_Boolean_Contains);
            if ((char)bVar5 == '\0') {
              if (g_data_057a9bff == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
                g_data_057a9bff = '\x01';
              }
              __this = (Il2CppClass *)(__this_00->_1).nestedTypes;
              if (__this == (Il2CppClass *)0x0) goto label_03b2c1f0;
              iVar11 = 0;
              while( true ) {
                lVar4 = MethodInfo_Void_Add;
                uVar6 = *(uint *)((long)&__this->_1 + 0x18);
                if ((int)uVar6 <= iVar11) break;
                __this = (Il2CppClass *)
                         System_Collections_Generic_List_object___get_Item
                                   ((System_Collections_Generic_List_object__o *)__this,iVar11,MethodInfo_String_get_Item);
                pIVar12 = pIVar9;
                bVar5 = System_String__Equals_3af50f0
                                  ((System_String_o *)__this,(System_String_o *)pIVar9,5,(MethodInfo *)0x0);
                if ((char)bVar5 != '\0') goto label_03b2bf60;
                iVar11 = iVar11 + 1;
                __this = (Il2CppClass *)(__this_00->_1).nestedTypes;
                if (__this == (Il2CppClass *)0x0) goto label_03b2c1f0;
              }
              ppSVar3 = (System_Collections_Generic_HashSet_Slot_T__array **)((long)&__this->_1 + 0x1c);
              *(int *)ppSVar3 = *(int *)ppSVar3 + 1;
              pSVar2 = ((System_Collections_Generic_HashSet_object__Fields *)((long)&__this->_1 + 0x10))->
                       _buckets;
              if (pSVar2 == (System_Int32_array *)0x0) goto label_03b2c1f0;
              if (uVar6 < (uint)pSVar2->max_length) {
                *(uint *)((long)&__this->_1 + 0x18) = uVar6 + 1;
                *(Il2CppClass **)((long)pSVar2->m_Items + (long)(int)uVar6 * 8) = pIVar9;
                il2cpp_runtime_helper_022b4080((int32_t *)((long)pSVar2->m_Items + (long)(int)uVar6 * 8),pIVar9);
                iVar11 = *(int *)(TypeInfo_GisketchUiPerfLog + 0xe4);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pIVar9,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                iVar11 = *(int *)(TypeInfo_GisketchUiPerfLog + 0xe4);
              }
              if (iVar11 == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              __this = "ScreenPrewarm.Queue";
              Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
                        ((System_String_o *)"ScreenPrewarm.Queue",(System_String_o *)pIVar9,(MethodInfo *)0x0);
              pIVar12 = pIVar9;
            }
          }
label_03b2bf60:
          uVar13 = uVar13 + 1;
          uVar6 = *(uint *)((long)&((Il2CppClass *)method)->_1 + 0x18);
          if ((long)(int)uVar6 <= (long)uVar13) goto label_03b2c139;
        } while (uVar13 < uVar6);
      }
    }
    il2cpp_runtime_helper_022b2ca0();
    if (g_data_057a9bff == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
      g_data_057a9bff = '\x01';
    }
    __this_01 = *(System_Collections_Generic_List_object__o **)
                 &((MethodInfo *)((long)&__this->_1 + 0x58))->token;
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      iVar11 = 0;
      do {
        if ((__this_01->fields)._size <= iVar11) {
          return 0;
        }
        a = (System_String_o *)
            System_Collections_Generic_List_object___get_Item(__this_01,iVar11,MethodInfo_String_get_Item);
        bVar5 = System_String__Equals_3af50f0(a,(System_String_o *)pIVar12,5,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar5 >> 8),1);
        }
        iVar11 = iVar11 + 1;
        __this_01 = *(System_Collections_Generic_List_object__o **)
                     &((MethodInfo *)((long)&__this->_1 + 0x58))->token;
      } while (__this_01 != (System_Collections_Generic_List_object__o *)0x0);
    }
    il2cpp_runtime_helper_022b2c90();
    return 0;
  }
label_03b2c159:
  return (bool_conflict)ppIVar8;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$QueueScreenPrewarm
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__QueueScreenPrewarm (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, System_String_array* screenIds, const MethodInfo* method);
// 0x3b2bed0

void Gisketch_Aottg2UI_GisketchUIRoot__QueueScreenPrewarm
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,System_String_array *screenIds,MethodInfo *method)

{
  int *piVar1;
  uint uVar2;
  System_Int32_array *pSVar3;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *pGVar4;
  long lVar5;
  char cVar6;
  System_String_array *__this_00;
  System_String_array *pSVar8;
  System_Collections_Generic_List_string__o *pSVar9;
  System_String_o *a;
  int iVar10;
  System_String_array *pSVar11;
  System_Collections_Generic_List_object__o *__this_01;
  ulong uVar12;
  bool_conflict bVar7;
  
  pSVar11 = screenIds;
  if (g_data_057a9bfc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&"ScreenPrewarm.Queue");
    g_data_057a9bfc = '\x01';
    iVar10 = *(int *)(TypeInfo_Application + 0xe4);
  }
  else {
    iVar10 = *(int *)(TypeInfo_Application + 0xe4);
  }
  if (iVar10 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this_00 = (System_String_array *)0x0;
    bVar7 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    cVar6 = (char)bVar7;
  }
  else {
    __this_00 = (System_String_array *)0x0;
    bVar7 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    cVar6 = (char)bVar7;
  }
  if ((screenIds == (System_String_array *)0x0) || (cVar6 == '\0')) {
    return;
  }
  if ((int)screenIds->max_length < 1) {
label_03b2c139:
    pGVar4 = (__this->fields)._Toasts_k__BackingField;
    if (pGVar4 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) {
      if (*(int *)&(pGVar4->fields)._context < 1) {
        return;
      }
      if ((__this->fields)._screenPrewarmQueue != (System_Collections_Generic_List_string__o *)0x0) {
        return;
      }
      if (g_data_057a9bfd == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_RunScreenPrewarmQueue_d__73);
        g_data_057a9bfd = '\x01';
      }
      pSVar8 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_RunScreenPrewarmQueue_d__73);
      pSVar11 = (System_String_array *)0x0;
      __this_00 = pSVar8;
      System_Object___ctor((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
      *(int32_t *)&((System_Collections_Generic_HashSet_object__Fields *)&pSVar8->bounds)->_buckets = 0;
      if (pSVar8 != (System_String_array *)0x0) {
        pSVar8->m_Items[0] = (System_String_o *)__this;
        il2cpp_runtime_helper_022b4080(pSVar8->m_Items,__this);
        pSVar9 = (System_Collections_Generic_List_string__o *)
                 UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                           ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pSVar8,
                            (MethodInfo *)0x0);
        (__this->fields)._screenPrewarmQueue = pSVar9;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._screenPrewarmQueue,pSVar9);
        return;
      }
    }
label_03b2c1f0:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar12 = 0;
    if ((screenIds->max_length & 0xffffffff) != 0) {
      do {
        pSVar8 = (System_String_array *)screenIds->m_Items[uVar12];
        pSVar11 = (System_String_array *)0x0;
        __this_00 = pSVar8;
        bVar7 = System_String__IsNullOrEmpty((System_String_o *)pSVar8,(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          __this_00 = *(System_String_array **)&(__this->fields)._screenPrewarmIdleDelay;
          if (__this_00 == (System_String_array *)0x0) goto label_03b2c1f0;
          pSVar11 = pSVar8;
          bVar7 = System_Collections_Generic_HashSet_object___Contains
                            ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)pSVar8,
                             MethodInfo_Boolean_Contains);
          if ((char)bVar7 == '\0') {
            if (g_data_057a9bff == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
              il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
              g_data_057a9bff = '\x01';
            }
            __this_00 = (System_String_array *)(__this->fields)._Toasts_k__BackingField;
            if (__this_00 == (System_String_array *)0x0) goto label_03b2c1f0;
            iVar10 = 0;
            while( true ) {
              lVar5 = MethodInfo_Void_Add;
              uVar2 = *(uint *)&__this_00->max_length;
              if ((int)uVar2 <= iVar10) break;
              __this_00 = (System_String_array *)
                          System_Collections_Generic_List_object___get_Item
                                    ((System_Collections_Generic_List_object__o *)__this_00,iVar10,
                                     MethodInfo_String_get_Item);
              pSVar11 = pSVar8;
              bVar7 = System_String__Equals_3af50f0
                                ((System_String_o *)__this_00,(System_String_o *)pSVar8,5,(MethodInfo *)0x0);
              if ((char)bVar7 != '\0') goto label_03b2bf60;
              iVar10 = iVar10 + 1;
              __this_00 = (System_String_array *)(__this->fields)._Toasts_k__BackingField;
              if (__this_00 == (System_String_array *)0x0) goto label_03b2c1f0;
            }
            piVar1 = (int *)((long)&__this_00->max_length + 4);
            *piVar1 = *piVar1 + 1;
            pSVar3 = ((System_Collections_Generic_HashSet_object__Fields *)&__this_00->bounds)->_buckets;
            if (pSVar3 == (System_Int32_array *)0x0) goto label_03b2c1f0;
            if (uVar2 < (uint)pSVar3->max_length) {
              *(uint *)&__this_00->max_length = uVar2 + 1;
              *(System_String_array **)(pSVar3->m_Items + (long)(int)uVar2 * 2) = pSVar8;
              il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (long)(int)uVar2 * 2,pSVar8);
              iVar10 = *(int *)(TypeInfo_GisketchUiPerfLog + 0xe4);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar8,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              iVar10 = *(int *)(TypeInfo_GisketchUiPerfLog + 0xe4);
            }
            if (iVar10 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            __this_00 = "ScreenPrewarm.Queue";
            Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
                      ((System_String_o *)"ScreenPrewarm.Queue",(System_String_o *)pSVar8,(MethodInfo *)0x0);
            pSVar11 = pSVar8;
          }
        }
label_03b2bf60:
        uVar12 = uVar12 + 1;
        uVar2 = (uint)screenIds->max_length;
        if ((long)(int)uVar2 <= (long)uVar12) goto label_03b2c139;
      } while (uVar12 < uVar2);
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057a9bff == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    g_data_057a9bff = '\x01';
  }
  __this_01 = (System_Collections_Generic_List_object__o *)__this_00->m_Items[0x10];
  if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
    iVar10 = 0;
    do {
      if ((__this_01->fields)._size <= iVar10) {
        return;
      }
      a = (System_String_o *)System_Collections_Generic_List_object___get_Item(__this_01,iVar10,MethodInfo_String_get_Item);
      bVar7 = System_String__Equals_3af50f0(a,(System_String_o *)pSVar11,5,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        return;
      }
      iVar10 = iVar10 + 1;
      __this_01 = (System_Collections_Generic_List_object__o *)__this_00->m_Items[0x10];
    } while (__this_01 != (System_Collections_Generic_List_object__o *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$RunScreenPrewarmQueue
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3b2c2a0

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue
          (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057a9bfd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RunScreenPrewarmQueue_d__73);
    g_data_057a9bfd = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_RunScreenPrewarmQueue_d__73);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$WaitForScreenPrewarmIdle
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3b2c330

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle
          (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057a9bfe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitForScreenPrewarmIdle_d__74);
    g_data_057a9bfe = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForScreenPrewarmIdle_d__74);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$CanStartScreenPrewarm
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__CanStartScreenPrewarm (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, System_String_o* id, const MethodInfo* method);
// 0x3b2c3c0

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
    pGVar4 = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen(pGVar1,id,(MethodInfo *)0x0);
    if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
      return 0;
    }
    pGVar1 = (__this->fields)._Manifest_k__BackingField;
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
      uVar3 = System_String__Equals_3af50f0
                        ((System_String_o *)(pGVar1->fields).dialogs,id,5,(MethodInfo *)0x0);
      return uVar3 ^ 1;
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$IsScreenPrewarmQueued
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__IsScreenPrewarmQueued (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, System_String_o* id, const MethodInfo* method);
// 0x3b2c200

bool_conflict
Gisketch_Aottg2UI_GisketchUIRoot__IsScreenPrewarmQueued
          (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,System_String_o *id,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *a;
  int index;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this_00;
  
  if (g_data_057a9bff == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    g_data_057a9bff = '\x01';
  }
  __this_00 = (__this->fields)._Toasts_k__BackingField;
  if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) {
    index = 0;
    do {
      if (*(int *)&(__this_00->fields)._context <= index) {
        return 0;
      }
      a = (System_String_o *)
          System_Collections_Generic_List_object___get_Item
                    ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_String_get_Item);
      bVar1 = System_String__Equals_3af50f0(a,id,5,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar1 >> 8),1);
      }
      index = index + 1;
      __this_00 = (__this->fields)._Toasts_k__BackingField;
    } while (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  return 0;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$CanWaitForScreenPrewarm
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__CanWaitForScreenPrewarm (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3b2c440

bool_conflict
Gisketch_Aottg2UI_GisketchUIRoot__CanWaitForScreenPrewarm
          (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_object__o *__this_01;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  byte bVar7;
  MethodInfo *method_00;
  undefined1 auVar8 [12];
  System_Collections_Generic_List_T__o *pSVar9;
  Il2CppMethodPointer pIVar10;
  Il2CppObject *pIVar11;
  
  if (g_data_057a9c00 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
    g_data_057a9c00 = '\x01';
  }
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  uVar4 = 0;
  if ((char)bVar3 != '\0') {
    bVar3 = UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0)
    ;
    uVar4 = 0;
    if ((char)bVar3 != '\0') {
      pGVar1 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)(__this->fields)._Manifest_k__BackingField;
      uVar4 = 0;
      if ((pGVar1 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) &&
         (bVar3 = Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_IsTransitioning
                            (pGVar1,(MethodInfo *)0x0), uVar4 = 0, (char)bVar3 == '\0')) {
        pGVar1 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)
                 (__this->fields)._Manifest_k__BackingField;
        if (pGVar1 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057a9c41 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
            il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchMotionDriver_ActiveTween_get_Current);
            il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
            il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Tweening_GisketchM);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057a9c41 = '\x01';
          }
          pSVar9 = (System_Collections_Generic_List_T__o *)0x0;
          pIVar10 = (Il2CppMethodPointer)0x0;
          pIVar11 = (Il2CppObject *)0x0;
          if (*(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          x = *(UnityEngine_Object_o **)TypeInfo_GisketchMotionDriver[2].virtualMethodPointer;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          uVar4 = 0;
          bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar3 == '\0') {
            if (*(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            if ((*(long *)TypeInfo_GisketchMotionDriver[2].virtualMethodPointer == 0) ||
               (__this_01 = *(System_Collections_Generic_List_object__o **)
                             (*(long *)TypeInfo_GisketchMotionDriver[2].virtualMethodPointer + 0x20),
               __this_01 == (System_Collections_Generic_List_object__o *)0x0)) {
label_03b2c6ae:
              auVar8 = il2cpp_runtime_helper_022b2c90();
              uVar6 = auVar8._0_8_;
              if (auVar8._8_4_ != 1) {
label_03b2c6fb:
                __this_05.fields._8_8_ = pIVar10;
                __this_05.fields._list = pSVar9;
                __this_05.fields._current = pIVar11;
                System_Collections_Generic_List_Enumerator_object___Dispose
                          (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb0);
                _Unwind_Resume(uVar6);
              }
              plVar5 = (long *)__cxa_begin_catch(uVar6);
              lVar2 = *plVar5;
              __cxa_end_catch();
              __this_04.fields._8_8_ = pIVar10;
              __this_04.fields._list = pSVar9;
              __this_04.fields._current = pIVar11;
              System_Collections_Generic_List_Enumerator_object___Dispose
                        (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb0);
              bVar7 = 0;
              uVar6 = 0;
              if (lVar2 != 0) {
                il2cpp_runtime_helper_022fefe0(lVar2);
                goto label_03b2c6fb;
              }
            }
            else {
              System_Collections_Generic_List_object___GetEnumerator
                        ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb0,__this_01
                         ,MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Tweening_GisketchM);
              do {
                __this_02.fields._8_8_ = pIVar10;
                __this_02.fields._list = pSVar9;
                __this_02.fields._current = pIVar11;
                bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                  (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb0);
                if ((char)bVar3 == '\0') {
                  uVar6 = 6;
                  bVar7 = 0;
                  goto label_03b2c681;
                }
                if (pIVar11 == (Il2CppObject *)0x0) {
                  il2cpp_runtime_helper_022b2c90();
                  goto label_03b2c6ae;
                }
              } while (*(char *)&pIVar11[1].monitor == '\0');
              bVar7 = 1;
              uVar6 = 5;
label_03b2c681:
              __this_03.fields._8_8_ = pIVar10;
              __this_03.fields._list = pSVar9;
              __this_03.fields._current = pIVar11;
              System_Collections_Generic_List_Enumerator_object___Dispose
                        (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb0);
            }
            uVar4 = (uint)((int)uVar6 == 5 & bVar7);
          }
          return uVar4;
        }
        uVar4 = 0;
        bVar3 = Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_IsPrewarming(pGVar1,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          method_00 = TypeInfo_GisketchMotionDriver;
          if (*(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__get_HasActive(method_00);
          if ((char)bVar3 == '\0') {
            __this_00 = (__this->fields)._Theme_k__BackingField;
            if (__this_00 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
              uVar4 = 1;
            }
            else {
              uVar4 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__get_HasOpenOverlays
                                ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,
                                 (MethodInfo *)0x0);
              uVar4 = uVar4 ^ 1;
            }
          }
          else {
            uVar4 = 0;
          }
        }
      }
    }
  }
  return uVar4;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$CanContinueScreenPrewarm
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__CanContinueScreenPrewarm (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3b2c740

bool_conflict
Gisketch_Aottg2UI_GisketchUIRoot__CanContinueScreenPrewarm
          (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_00;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_01;
  bool_conflict bVar1;
  uint uVar2;
  UnityEngine_Vector2_o UVar3;
  
  if (g_data_057a9c01 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    g_data_057a9c01 = '\x01';
  }
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  uVar2 = 0;
  if ((char)bVar1 != '\0') {
    bVar1 = UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0)
    ;
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
                                        ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_01,
                                         (MethodInfo *)0x0);
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
// 0x3b2c850

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
                  CONCAT71(uVar3,0.0 < UVar4.fields.y * UVar4.fields.y + UVar4.fields.x * UVar4.fields.x);
        }
      }
    }
  }
  return bVar2;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$CancelScreenPrewarm
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__CancelScreenPrewarm (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, bool clearQueue, const MethodInfo* method);
// 0x3b2b050

void Gisketch_Aottg2UI_GisketchUIRoot__CancelScreenPrewarm
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,bool_conflict clearQueue,MethodInfo *method)

{
  int *piVar1;
  int32_t length;
  System_Collections_Generic_List_string__o *pSVar2;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *pGVar3;
  System_Collections_Generic_HashSet_object__o *__this_00;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_01;
  bool_conflict bVar4;
  System_Collections_Generic_List_string__o **ppSVar5;
  
  if (g_data_057a9c02 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&"root cancel");
    g_data_057a9c02 = '\x01';
  }
  ppSVar5 = &(__this->fields)._screenPrewarmQueue;
  pSVar2 = (__this->fields)._screenPrewarmQueue;
  if (pSVar2 != (System_Collections_Generic_List_string__o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_4dfdad0
              ((UnityEngine_MonoBehaviour_o *)__this,(UnityEngine_Coroutine_o *)pSVar2,(MethodInfo *)0x0);
  }
  *ppSVar5 = (System_Collections_Generic_List_string__o *)0x0;
  il2cpp_runtime_helper_022b4080();
  if ((char)clearQueue == '\0') {
label_03b2b108:
    __this_01 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)(__this->fields)._Manifest_k__BackingField
    ;
    if (__this_01 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
      Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelPrewarm(__this_01,"root cancel",(MethodInfo *)0x0);
      return;
    }
    return;
  }
  pGVar3 = (__this->fields)._Toasts_k__BackingField;
  if (pGVar3 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) {
    piVar1 = (int *)((long)&(pGVar3->fields)._context + 4);
    *piVar1 = *piVar1 + 1;
    length = *(int32_t *)&(pGVar3->fields)._context;
    *(undefined4 *)&(pGVar3->fields)._context = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pGVar3->fields)._layer,0,length,(MethodInfo *)0x0);
    }
    __this_00 = *(System_Collections_Generic_HashSet_object__o **)&(__this->fields)._screenPrewarmIdleDelay;
    ppSVar5 = (System_Collections_Generic_List_string__o **)0x0;
    if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___Clear(__this_00,MethodInfo_Void_Clear);
      goto label_03b2b108;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9bf6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9bf6 = '\x01';
  }
  pSVar2 = *ppSVar5;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pSVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  pSVar2 = *ppSVar5;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((char)bVar4 == '\0') {
    UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)pSVar2,(MethodInfo *)0x0);
  }
  else {
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pSVar2,(MethodInfo *)0x0);
  }
  *ppSVar5 = (System_Collections_Generic_List_string__o *)0x0;
  il2cpp_runtime_helper_022b4080(ppSVar5,0);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$get_ScalePreset
// il2cpp: int32_t Gisketch_Aottg2UI_GisketchUIRoot__get_ScalePreset (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3b2c8b0

int32_t Gisketch_Aottg2UI_GisketchUIRoot__get_ScalePreset
                  (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  return *(int32_t *)&(__this->fields)._screenPrewarmed;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$get_Scale
// il2cpp: float Gisketch_Aottg2UI_GisketchUIRoot__get_Scale (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3b2c8c0

float Gisketch_Aottg2UI_GisketchUIRoot__get_Scale
                (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  return *(float *)((long)&(__this->fields)._screenPrewarmed + 4);
}


// Gisketch.Aottg2UI.GisketchUIRoot$$SetScale
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__SetScale (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, int32_t preset, const MethodInfo* method);
// 0x3b2c8d0

void Gisketch_Aottg2UI_GisketchUIRoot__SetScale
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,int32_t preset,MethodInfo *method)

{
  int32_t iVar1;
  undefined4 in_register_00000034;
  float scale;
  
  iVar1 = preset;
  if (g_data_057a9c03 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUiScale);
    g_data_057a9c03 = '\x01';
  }
  *(int32_t *)&(__this->fields)._screenPrewarmed = preset;
  if (*(int *)(TypeInfo_AottgUiScale + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((uint)preset < 5) {
    scale = *(float *)(&g_data_00d2055c + (long)preset * 4);
  }
  else {
    scale = 1.0;
  }
  Gisketch_Aottg2UI_GisketchUIRoot__SetScale_3a2c960
            (__this,scale,(MethodInfo *)CONCAT44(in_register_00000034,iVar1));
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$SetScale
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__SetScale (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, float scale, const MethodInfo* method);
// 0x3b2c960

void Gisketch_Aottg2UI_GisketchUIRoot__SetScale_3a2c960
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,float scale,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *root;
  bool_conflict bVar1;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  float fVar2;
  
  if (g_data_057a9c04 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUiScale);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchScreenBuilder);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c04 = '\x01';
    in_RDX = extraout_RDX;
  }
  if (*(int *)(TypeInfo_AottgUiScale + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    in_RDX = extraout_RDX_00;
  }
  fVar2 = 1.5;
  if (scale <= 1.5) {
    fVar2 = scale;
  }
  *(uint *)((long)&(__this->fields)._screenPrewarmed + 4) =
       ~-(uint)(0.75 <= scale) & 0x3f400000 | (uint)fVar2 & -(uint)(0.75 <= scale);
  Gisketch_Aottg2UI_GisketchUIRoot__ApplyScale(__this,(UnityEngine_UI_CanvasScaler_o *)0x0,in_RDX);
  x = *(UnityEngine_Object_o **)&(__this->fields)._motionScale;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    root = *(UnityEngine_GameObject_o **)&(__this->fields)._motionScale;
    if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout(root,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$ApplyScale
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__ApplyScale (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, UnityEngine_UI_CanvasScaler_o* scaler, const MethodInfo* method);
// 0x3b2b7f0

void Gisketch_Aottg2UI_GisketchUIRoot__ApplyScale
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,UnityEngine_UI_CanvasScaler_o *scaler,
               MethodInfo *method)

{
  int *piVar1;
  float fVar2;
  uint uVar3;
  UnityEngine_GameObject_o *__this_00;
  System_Collections_Generic_HashSet_Slot_T__array *pSVar4;
  float fVar5;
  char cVar6;
  bool_conflict bVar7;
  UnityEngine_EventSystems_EventSystem_o *pUVar8;
  UnityEngine_Object_o *pUVar9;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_HashSet_object__o *__this_02;
  System_Collections_Generic_HashSet_object__o *pSVar10;
  UnityEngine_Coroutine_o *pUVar11;
  System_String_o *a;
  MethodInfo *method_00;
  int iVar12;
  System_Collections_Generic_HashSet_object__o *value;
  System_Collections_Generic_HashSet_object__o *pSVar13;
  UnityEngine_RectTransform_o *__this_03;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_04;
  long lVar14;
  MethodInfo *pMVar15;
  MethodInfo *pMVar16;
  System_Int32_array *pSVar17;
  ulong uVar18;
  Gisketch_Aottg2UI_GisketchUIRoot_o *x;
  undefined1 auVar19 [16];
  
  if (g_data_057a9c05 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUiScale);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasScaler_GetComponent_CanvasScaler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c05 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)scaler,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
label_03b2b8a5:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)scaler,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return;
    }
    fVar2 = *(float *)((long)&(__this->fields)._screenPrewarmed + 4);
    if (*(int *)((long)&TypeInfo_AottgUiScale[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057a9c0c != '\0') goto label_03b2b8f4;
label_03b2b970:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUiScale);
      g_data_057a9c0c = '\x01';
      iVar12 = *(int *)((long)&TypeInfo_AottgUiScale[9].monitor + 4);
      __this_03 = TypeInfo_AottgUiScale;
    }
    else {
      if (g_data_057a9c0c == '\0') goto label_03b2b970;
label_03b2b8f4:
      iVar12 = *(int *)((long)&TypeInfo_AottgUiScale[9].monitor + 4);
      __this_03 = TypeInfo_AottgUiScale;
    }
    TypeInfo_AottgUiScale = __this_03;
    if (iVar12 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (scaler != (UnityEngine_UI_CanvasScaler_o *)0x0) {
      fVar5 = 1.5;
      if (fVar2 <= 1.5) {
        fVar5 = fVar2;
      }
      auVar19._0_4_ = ~-(uint)(0.75 <= fVar2) & 0x3f400000 | (uint)fVar5 & -(uint)(0.75 <= fVar2);
      auVar19._4_4_ = auVar19._0_4_;
      auVar19._8_8_ = 0;
      auVar19 = divps(_DAT_00d1d030,auVar19);
      UnityEngine_UI_CanvasScaler__set_referenceResolution
                (scaler,(UnityEngine_Vector2_o)auVar19._0_8_,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pUVar9 = *(UnityEngine_Object_o **)&(__this->fields)._motionScale;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    scaler = (UnityEngine_UI_CanvasScaler_o *)0x0;
    bVar7 = UnityEngine_Object__op_Inequality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') goto label_03b2b8a5;
    __this_00 = *(UnityEngine_GameObject_o **)&(__this->fields)._motionScale;
    __this_03 = (UnityEngine_RectTransform_o *)0x0;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      scaler = (UnityEngine_UI_CanvasScaler_o *)
               UnityEngine_GameObject__GetComponent_object_(__this_00,MethodInfo_CanvasScaler_GetComponent_CanvasScaler);
      goto label_03b2b8a5;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a694c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a694c = '\x01';
  }
  if (__this_03 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchorMin
              (__this_03,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    if (g_data_057a9c86 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a9c86 = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax
              (__this_03,
               (UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
               (MethodInfo *)0x0);
    if (g_data_057a694c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a694c = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMin
              (__this_03,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    if (g_data_057a694c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a694c = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax
              (__this_03,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9bf9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputField_GetComponent_InputField);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_GetComponent_TMP_InputField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9bf9 = '\x01';
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar8 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
label_03b2bb6c:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_04 = x;
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      return;
    }
    if (x != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      pUVar9 = (UnityEngine_Object_o *)
               UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)x,MethodInfo_TMP_InputField_GetComponent_TMP_InputField);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar7 = UnityEngine_Object__op_Inequality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)x,MethodInfo_InputField_GetComponent_InputField);
        return;
      }
      return;
    }
  }
  else {
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_04 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
    pUVar8 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar8 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
      x = (Gisketch_Aottg2UI_GisketchUIRoot_o *)(pUVar8->fields).m_CurrentSelected;
      goto label_03b2bb6c;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9bf8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9bf8 = '\x01';
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar8 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar15 = (MethodInfo *)0x0;
  pMVar16 = (MethodInfo *)0x0;
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar14 = 0;
    pUVar8 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto label_03b2bd1f;
    pMVar15 = (MethodInfo *)(pUVar8->fields).m_CurrentSelected;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((((char)bVar7 == '\0') ||
      (pMVar16 = pMVar15,
      bVar7 = Gisketch_Aottg2UI_GisketchUIRoot__IsInsideGisketchCanvas
                        (__this_04,(UnityEngine_GameObject_o *)pMVar15,method_00), (char)bVar7 == '\0')) ||
     (bVar7 = Gisketch_Aottg2UI_GisketchUIRoot__IsInput((UnityEngine_GameObject_o *)pMVar15,pMVar16),
     (char)bVar7 != '\0')) {
    return;
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar14 = 0;
  pUVar8 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (pUVar8 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
    UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_50f16d0
              (pUVar8,(UnityEngine_GameObject_o *)0x0,(MethodInfo *)0x0);
    return;
  }
label_03b2bd1f:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9bfa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9bfa = '\x01';
  }
  pUVar9 = *(UnityEngine_Object_o **)(lVar14 + 0x40);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Inequality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar10 = (System_Collections_Generic_HashSet_object__o *)0x0;
  pMVar15 = pMVar16;
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return;
  }
  if (pMVar16 != (MethodInfo *)0x0) {
    pSVar10 = (System_Collections_Generic_HashSet_object__o *)0x0;
    __this_01 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pMVar16,(MethodInfo *)0x0);
    pMVar15 = *(MethodInfo **)(lVar14 + 0x40);
    if (pMVar15 != (MethodInfo *)0x0) {
      pSVar10 = (System_Collections_Generic_HashSet_object__o *)0x0;
      parent = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pMVar15,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__IsChildOf(__this_01,parent,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar16 = pMVar15;
  if (g_data_057a9bfb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputField_GetComponent_InputField);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_GetComponent_TMP_InputField);
    pMVar16 = (MethodInfo *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9bfb = '\x01';
  }
  if (pMVar15 != (MethodInfo *)0x0) {
    pUVar9 = (UnityEngine_Object_o *)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pMVar15,MethodInfo_TMP_InputField_GetComponent_TMP_InputField);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = UnityEngine_Object__op_Inequality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      pUVar9 = (UnityEngine_Object_o *)
               UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pMVar15,MethodInfo_InputField_GetComponent_InputField);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__op_Inequality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar13 = pSVar10;
  if (g_data_057a9bfc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&"ScreenPrewarm.Queue");
    g_data_057a9bfc = '\x01';
    iVar12 = *(int *)(TypeInfo_Application + 0xe4);
  }
  else {
    iVar12 = *(int *)(TypeInfo_Application + 0xe4);
  }
  if (iVar12 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this_02 = (System_Collections_Generic_HashSet_object__o *)0x0;
    bVar7 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    cVar6 = (char)bVar7;
  }
  else {
    __this_02 = (System_Collections_Generic_HashSet_object__o *)0x0;
    bVar7 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    cVar6 = (char)bVar7;
  }
  if ((pSVar10 == (System_Collections_Generic_HashSet_object__o *)0x0) || (cVar6 == '\0')) {
    return;
  }
  pSVar4 = (pSVar10->fields)._slots;
  if ((int)pSVar4 < 1) {
label_03b2c139:
    if (*(long *)&pMVar16[1].token != 0) {
      if (*(int *)(*(long *)&pMVar16[1].token + 0x18) < 1) {
        return;
      }
      if (pMVar16[2].methodPointer != (Il2CppMethodPointer)0x0) {
        return;
      }
      if (g_data_057a9bfd == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_RunScreenPrewarmQueue_d__73);
        g_data_057a9bfd = '\x01';
      }
      pSVar10 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_RunScreenPrewarmQueue_d__73);
      pSVar13 = (System_Collections_Generic_HashSet_object__o *)0x0;
      __this_02 = pSVar10;
      System_Object___ctor((Il2CppObject *)pSVar10,(MethodInfo *)0x0);
      *(int32_t *)&(pSVar10->fields)._buckets = 0;
      if (pSVar10 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        *(MethodInfo **)&(pSVar10->fields)._count = pMVar16;
        il2cpp_runtime_helper_022b4080(&(pSVar10->fields)._count,pMVar16);
        pUVar11 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                            ((UnityEngine_MonoBehaviour_o *)pMVar16,
                             (System_Collections_IEnumerator_o *)pSVar10,(MethodInfo *)0x0);
        pMVar16[2].methodPointer = (Il2CppMethodPointer)pUVar11;
        il2cpp_runtime_helper_022b4080(pMVar16 + 2,pUVar11);
        return;
      }
    }
label_03b2c1f0:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar18 = 0;
    if (((ulong)pSVar4 & 0xffffffff) != 0) {
      do {
        value = *(System_Collections_Generic_HashSet_object__o **)(&(pSVar10->fields)._count + uVar18 * 2);
        pSVar13 = (System_Collections_Generic_HashSet_object__o *)0x0;
        __this_02 = value;
        bVar7 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          __this_02 = *(System_Collections_Generic_HashSet_object__o **)&pMVar16[1].slot;
          if (__this_02 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b2c1f0;
          pSVar13 = value;
          bVar7 = System_Collections_Generic_HashSet_object___Contains
                            (__this_02,(Il2CppObject *)value,MethodInfo_Boolean_Contains);
          if ((char)bVar7 == '\0') {
            if (g_data_057a9bff == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
              il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
              g_data_057a9bff = '\x01';
            }
            __this_02 = *(System_Collections_Generic_HashSet_object__o **)&pMVar16[1].token;
            if (__this_02 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b2c1f0;
            iVar12 = 0;
            while( true ) {
              lVar14 = MethodInfo_Void_Add;
              uVar3 = *(uint *)&(__this_02->fields)._slots;
              if ((int)uVar3 <= iVar12) break;
              __this_02 = (System_Collections_Generic_HashSet_object__o *)
                          System_Collections_Generic_List_object___get_Item
                                    ((System_Collections_Generic_List_object__o *)__this_02,iVar12,
                                     MethodInfo_String_get_Item);
              pSVar13 = value;
              bVar7 = System_String__Equals_3af50f0
                                ((System_String_o *)__this_02,(System_String_o *)value,5,(MethodInfo *)0x0);
              if ((char)bVar7 != '\0') goto label_03b2bf60;
              iVar12 = iVar12 + 1;
              __this_02 = *(System_Collections_Generic_HashSet_object__o **)&pMVar16[1].token;
              if (__this_02 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b2c1f0;
            }
            piVar1 = (int *)((long)&(__this_02->fields)._slots + 4);
            *piVar1 = *piVar1 + 1;
            pSVar17 = (__this_02->fields)._buckets;
            if (pSVar17 == (System_Int32_array *)0x0) goto label_03b2c1f0;
            if (uVar3 < (uint)pSVar17->max_length) {
              *(uint *)&(__this_02->fields)._slots = uVar3 + 1;
              *(System_Collections_Generic_HashSet_object__o **)(pSVar17->m_Items + (long)(int)uVar3 * 2) =
                   value;
              il2cpp_runtime_helper_022b4080(pSVar17->m_Items + (long)(int)uVar3 * 2,value);
              iVar12 = *(int *)(TypeInfo_GisketchUiPerfLog + 0xe4);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)value,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              iVar12 = *(int *)(TypeInfo_GisketchUiPerfLog + 0xe4);
            }
            if (iVar12 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            __this_02 = "ScreenPrewarm.Queue";
            Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
                      ((System_String_o *)"ScreenPrewarm.Queue",(System_String_o *)value,(MethodInfo *)0x0);
            pSVar13 = value;
          }
        }
label_03b2bf60:
        uVar18 = uVar18 + 1;
        uVar3 = *(uint *)&(pSVar10->fields)._slots;
        if ((long)(int)uVar3 <= (long)uVar18) goto label_03b2c139;
      } while (uVar18 < uVar3);
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057a9bff == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    g_data_057a9bff = '\x01';
  }
  pSVar17 = __this_02[2].fields._buckets;
  if (pSVar17 != (System_Int32_array *)0x0) {
    iVar12 = 0;
    do {
      if ((int)pSVar17->max_length <= iVar12) {
        return;
      }
      a = (System_String_o *)
          System_Collections_Generic_List_object___get_Item
                    ((System_Collections_Generic_List_object__o *)pSVar17,iVar12,MethodInfo_String_get_Item);
      bVar7 = System_String__Equals_3af50f0(a,(System_String_o *)pSVar13,5,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        return;
      }
      iVar12 = iVar12 + 1;
      pSVar17 = __this_02[2].fields._buckets;
    } while (pSVar17 != (System_Int32_array *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$.ctor
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot___ctor (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x3b2cb10

void Gisketch_Aottg2UI_GisketchUIRoot___ctor(Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_IEqualityComparer_T__o *comparer;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this_00;
  System_Collections_Generic_HashSet_object__o *__this_01;
  
  if (g_data_057a9c06 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    g_data_057a9c06 = '\x01';
  }
  (__this->fields)._buildOnStart = 0x1010101;
  (__this->fields)._previewInEditor = 0x3f800000;
  (__this->fields)._Overlays_k__BackingField =
       (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0xa3f400000;
  __this_00 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_String);
  (__this->fields)._Toasts_k__BackingField = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Toasts_k__BackingField,__this_00);
  if (*(int *)(TypeInfo_StringComparer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057a9c88 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    g_data_057a9c88 = '\x01';
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  comparer = *(System_Collections_Generic_IEqualityComparer_T__o **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
  __this_01 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_33e0600(__this_01,comparer,MethodInfo_HashSet_1_System_String);
  *(System_Collections_Generic_HashSet_object__o **)&(__this->fields)._screenPrewarmIdleDelay = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._screenPrewarmIdleDelay);
  (__this->fields)._screenPrewarmed = (System_Collections_Generic_HashSet_string__o *)0x3f80000000000002;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


