// Type: Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgCodeManifestBuilder.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$Build
// il2cpp: Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Build (System_String_o* selectedScreenId, Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o* theme, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x3af2750

Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *
Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Build
          (System_String_o *selectedScreenId,Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *theme
          ,Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *catalog;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *pGVar1;
  MethodInfo *in_R8;
  
  catalog = Gisketch_Aottg2UI_Code_AottgCodeCatalog__DiscoverFresh((MethodInfo *)selectedScreenId);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Build
                     (catalog,selectedScreenId,theme,actions,in_R8);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$Build
// il2cpp: Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Build (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o* catalog, System_String_o* selectedScreenId, Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o* theme, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x3af2780

Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *
Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Build
          (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *catalog,System_String_o *selectedScreenId,
          Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *theme,
          Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  System_Collections_Generic_List_AottgScreenEntry__o *pSVar5;
  System_Collections_Generic_List_AottgScreenEntry__c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  int iVar8;
  bool_conflict bVar9;
  Il2CppMethodPointer *ppIVar10;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *pGVar11;
  Il2CppObject *__this_00;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *pGVar12;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *pGVar13;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  ulong uVar14;
  long lVar15;
  
  if (DAT_05701431 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AottgScreen_Instance_AottgScreen);
    il2cpp_init_method_metadata(&TypeInfo_GisketchManifestDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchScreenDefinition);
    il2cpp_init_method_metadata(&TypeInfo_IReadOnlyCollection_AottgScreenEntry);
    il2cpp_init_method_metadata();
    DAT_05701431 = '\x01';
  }
  if (catalog == (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)0x0) {
    return (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0;
  }
  pSVar5 = (catalog->fields)._screens;
  if (pSVar5 != (System_Collections_Generic_List_AottgScreenEntry__o *)0x0) {
    pSVar6 = pSVar5->klass;
    uVar1._0_1_ = (pSVar6->_2).rank;
    uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar7 = (pSVar6->_1).interfaceOffsets;
      lVar15 = 0;
      do {
        if (*(long *)((long)&pIVar7->interfaceType + lVar15) == TypeInfo_IReadOnlyCollection_AottgScreenEntry) {
          ppIVar10 = &(&(pSVar6->vtable)._0_Equals)[*(int *)((long)&pIVar7->offset + lVar15)].
                      methodPtr;
          goto LAB_03af2861;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar15);
    }
    ppIVar10 = (Il2CppMethodPointer *)il2cpp_runtime_glue(pSVar5,TypeInfo_IReadOnlyCollection_AottgScreenEntry,0);
LAB_03af2861:
    iVar8 = (**ppIVar10)(pSVar5,(MethodInfo *)ppIVar10[1]);
    if (iVar8 == 0) {
      return (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0;
    }
    if (actions != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      if (DAT_05701422 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
        DAT_05701422 = '\x01';
      }
      __this = (System_Collections_Generic_Dictionary_object__object__o *)(actions->fields)._actions
      ;
      if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_03af2bc3;
      System_Collections_Generic_Dictionary<object__object>__Clear(__this,MethodInfo_Void_Clear);
      (actions->fields)._next = 0;
    }
    pSVar5 = (catalog->fields)._screens;
    if (pSVar5 != (System_Collections_Generic_List_AottgScreenEntry__o *)0x0) {
      pSVar6 = pSVar5->klass;
      uVar2._0_1_ = (pSVar6->_2).rank;
      uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar7 = (pSVar6->_1).interfaceOffsets;
        lVar15 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar15) == TypeInfo_IReadOnlyCollection_AottgScreenEntry) {
            ppIVar10 = &(&(pSVar6->vtable)._0_Equals)[*(int *)((long)&pIVar7->offset + lVar15)].
                        methodPtr;
            goto LAB_03af2928;
          }
          lVar15 = lVar15 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar15);
      }
      ppIVar10 = (Il2CppMethodPointer *)il2cpp_runtime_glue(pSVar5,TypeInfo_IReadOnlyCollection_AottgScreenEntry,0);
LAB_03af2928:
      (**ppIVar10)(pSVar5,(MethodInfo *)ppIVar10[1]);
      pGVar11 = (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *)il2cpp_glue_02274930();
      if (pGVar11 != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *)0x0) {
        if (0 < (int)pGVar11->max_length) {
          uVar14 = 0;
          do {
            pSVar5 = (catalog->fields)._screens;
            if (pSVar5 == (System_Collections_Generic_List_AottgScreenEntry__o *)0x0)
            goto LAB_03af2bc3;
            pSVar6 = pSVar5->klass;
            uVar3._0_1_ = (pSVar6->_2).rank;
            uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
            if ((ulong)uVar3 != 0) {
              pIVar7 = (pSVar6->_1).interfaceOffsets;
              lVar15 = 0;
              do {
                if (*(long *)((long)&pIVar7->interfaceType + lVar15) == TypeInfo_IReadOnlyList_AottgScreenEntry) {
                  ppIVar10 = &(&(pSVar6->vtable)._0_Equals)
                              [*(int *)((long)&pIVar7->offset + lVar15)].methodPtr;
                  goto LAB_03af29d3;
                }
                lVar15 = lVar15 + 0x10;
              } while ((ulong)uVar3 << 4 != lVar15);
            }
            ppIVar10 = (Il2CppMethodPointer *)il2cpp_runtime_glue(pSVar5,TypeInfo_IReadOnlyList_AottgScreenEntry,0);
LAB_03af29d3:
            lVar15 = (**ppIVar10)(pSVar5,uVar14 & 0xffffffff,(MethodInfo *)ppIVar10[1]);
            if ((lVar15 == 0) ||
               (__this_00 = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance<object>
                                      (*(System_Type_o **)(lVar15 + 0x38),MethodInfo_AottgScreen_Instance_AottgScreen),
               __this_00 == (Il2CppObject *)0x0)) goto LAB_03af2bc3;
            pGVar12 = Gisketch_Aottg2UI_Code_AottgScreen__BuildDefinition
                                ((Gisketch_Aottg2UI_Code_AottgScreen_o *)__this_00,
                                 *(System_String_o **)(lVar15 + 0x10),
                                 *(System_String_o **)(lVar15 + 0x18),
                                 *(System_String_o **)(lVar15 + 0x20),
                                 *(System_String_o **)(lVar15 + 0x28),
                                 *(System_String_o **)(lVar15 + 0x30),actions,(MethodInfo *)0x0);
            if ((uint)pGVar11->max_length <= uVar14) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pGVar11->m_Items[uVar14] = pGVar12;
            il2cpp_runtime_glue();
            uVar14 = uVar14 + 1;
          } while ((long)uVar14 < (long)(int)pGVar11->max_length);
        }
        __this_01 = (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)
                    il2cpp_runtime_glue(TypeInfo_GisketchManifestDefinition);
        (__this_01->fields).schemaVersion = 1;
        System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
        if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
          (__this_01->fields).schemaVersion = 1;
          bVar9 = Gisketch_Aottg2UI_Code_AottgCodeCatalog__HasScreen
                            (catalog,selectedScreenId,method_00);
          if ((char)bVar9 != '\0') {
LAB_03af2b45:
            (__this_01->fields).initialScreen = selectedScreenId;
            il2cpp_runtime_glue(&(__this_01->fields).initialScreen,selectedScreenId);
            (__this_01->fields).theme = theme;
            il2cpp_runtime_glue(&(__this_01->fields).theme);
            (__this_01->fields).screens = pGVar11;
            il2cpp_runtime_glue(&(__this_01->fields).screens,pGVar11);
            pGVar13 = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialogs
                                (catalog,actions,method_01);
            (__this_01->fields).dialogs = pGVar13;
            il2cpp_runtime_glue(&(__this_01->fields).dialogs,pGVar13);
            pGVar13 = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildPopovers
                                (catalog,actions,method_02);
            (__this_01->fields).popovers = pGVar13;
            il2cpp_runtime_glue(&(__this_01->fields).popovers,pGVar13);
            return __this_01;
          }
          pSVar5 = (catalog->fields)._screens;
          if (pSVar5 != (System_Collections_Generic_List_AottgScreenEntry__o *)0x0) {
            pSVar6 = pSVar5->klass;
            uVar4._0_1_ = (pSVar6->_2).rank;
            uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
            if ((ulong)uVar4 != 0) {
              pIVar7 = (pSVar6->_1).interfaceOffsets;
              lVar15 = 0;
              do {
                if (*(long *)((long)&pIVar7->interfaceType + lVar15) == TypeInfo_IReadOnlyList_AottgScreenEntry) {
                  ppIVar10 = &(&(pSVar6->vtable)._0_Equals)
                              [*(int *)((long)&pIVar7->offset + lVar15)].methodPtr;
                  goto LAB_03af2b21;
                }
                lVar15 = lVar15 + 0x10;
              } while ((ulong)uVar4 << 4 != lVar15);
            }
            ppIVar10 = (Il2CppMethodPointer *)il2cpp_runtime_glue(pSVar5,TypeInfo_IReadOnlyList_AottgScreenEntry,0);
LAB_03af2b21:
            lVar15 = (**ppIVar10)(pSVar5,0,(MethodInfo *)ppIVar10[1]);
            if (lVar15 != 0) {
              selectedScreenId = *(System_String_o **)(lVar15 + 0x10);
              goto LAB_03af2b45;
            }
          }
        }
      }
    }
  }
LAB_03af2bc3:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$BuildDialogs
// il2cpp: Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array* Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialogs (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o* catalog, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x3af2bd0

Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *
Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialogs
          (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *catalog,
          Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  System_Collections_Generic_List_AottgDialogEntry__o *pSVar3;
  System_Collections_Generic_List_AottgDialogEntry__c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  undefined4 uVar6;
  VirtualInvokeData *pVVar7;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *pGVar8;
  Il2CppObject *__this;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *pGVar9;
  long lVar10;
  MethodInfo *in_R8;
  ulong uVar11;
  
  if (DAT_05701432 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AottgDialog_Instance_AottgDialog);
    il2cpp_init_method_metadata(&TypeInfo_GisketchOverlayDefinition);
    il2cpp_init_method_metadata(&TypeInfo_IReadOnlyCollection_AottgDialogEntry);
    il2cpp_init_method_metadata();
    DAT_05701432 = '\x01';
  }
  if ((catalog != (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)0x0) &&
     (pSVar3 = (catalog->fields)._dialogs,
     pSVar3 != (System_Collections_Generic_List_AottgDialogEntry__o *)0x0)) {
    pSVar4 = pSVar3->klass;
    uVar1._0_1_ = (pSVar4->_2).rank;
    uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar5 = (pSVar4->_1).interfaceOffsets;
      lVar10 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar10) == TypeInfo_IReadOnlyCollection_AottgDialogEntry) {
          pVVar7 = &(pSVar4->vtable)._0_Equals + *(int *)((long)&pIVar5->offset + lVar10);
          goto LAB_03af2c91;
        }
        lVar10 = lVar10 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar10);
    }
    pVVar7 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar3,TypeInfo_IReadOnlyCollection_AottgDialogEntry,0);
LAB_03af2c91:
    uVar6 = (*pVVar7->methodPtr)(pSVar3,pVVar7->method);
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)
             il2cpp_glue_02274930(TypeInfo_GisketchOverlayDefinition,uVar6);
    if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)0x0) {
      if (0 < (int)pGVar8->max_length) {
        uVar11 = 0;
        do {
          pSVar3 = (catalog->fields)._dialogs;
          if (pSVar3 == (System_Collections_Generic_List_AottgDialogEntry__o *)0x0)
          goto LAB_03af2dbf;
          pSVar4 = pSVar3->klass;
          uVar2._0_1_ = (pSVar4->_2).rank;
          uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
          if ((ulong)uVar2 != 0) {
            pIVar5 = (pSVar4->_1).interfaceOffsets;
            lVar10 = 0;
            do {
              if (*(long *)((long)&pIVar5->interfaceType + lVar10) == TypeInfo_IReadOnlyList_AottgDialogEntry) {
                pVVar7 = &(pSVar4->vtable)._0_Equals + *(int *)((long)&pIVar5->offset + lVar10);
                goto LAB_03af2d43;
              }
              lVar10 = lVar10 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar10);
          }
          pVVar7 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar3,TypeInfo_IReadOnlyList_AottgDialogEntry,0);
LAB_03af2d43:
          lVar10 = (*pVVar7->methodPtr)(pSVar3,uVar11 & 0xffffffff,pVVar7->method);
          if (lVar10 == 0) goto LAB_03af2dbf;
          __this = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance<object>
                             (*(System_Type_o **)(lVar10 + 0x18),MethodInfo_AottgDialog_Instance_AottgDialog);
          if (__this == (Il2CppObject *)0x0) goto LAB_03af2dbf;
          pGVar9 = Gisketch_Aottg2UI_Code_AottgDialog__BuildDefinition
                             ((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,
                              *(System_String_o **)(lVar10 + 0x10),
                              *(Gisketch_Aottg2UI_Code_AottgDialogAttribute_o **)(lVar10 + 0x20),
                              actions,in_R8);
          if ((uint)pGVar8->max_length <= uVar11) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pGVar8->m_Items[uVar11] = pGVar9;
          il2cpp_runtime_glue(pGVar8->m_Items + uVar11,pGVar9);
          uVar11 = uVar11 + 1;
        } while ((long)uVar11 < (long)(int)pGVar8->max_length);
      }
      return pGVar8;
    }
  }
LAB_03af2dbf:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$BuildDialog
// il2cpp: Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialog (System_String_o* id, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x3af32c0

Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *
Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialog
          (System_String_o *id,Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *catalog;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *pGVar1;
  MethodInfo *in_RCX;
  
  catalog = Gisketch_Aottg2UI_Code_AottgCodeCatalog__DiscoverFresh((MethodInfo *)id);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialog(catalog,id,actions,in_RCX);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$BuildDialog
// il2cpp: Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialog (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o* catalog, System_String_o* id, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x3af32f0

Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *
Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialog
          (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *catalog,System_String_o *id,
          Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  System_Collections_Generic_List_AottgDialogEntry__c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  bool_conflict bVar5;
  int iVar6;
  VirtualInvokeData *pVVar7;
  Il2CppObject *__this;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *pGVar8;
  MethodInfo *method_00;
  System_Collections_Generic_List_AottgDialogEntry__o *pSVar9;
  long lVar10;
  MethodInfo *in_R8;
  uint uVar11;
  
  if (DAT_05701433 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AottgDialog_Instance_AottgDialog);
    il2cpp_init_method_metadata(&TypeInfo_IReadOnlyCollection_AottgDialogEntry);
    il2cpp_init_method_metadata(&TypeInfo_IReadOnlyList_AottgDialogEntry);
    DAT_05701433 = '\x01';
  }
  if ((catalog == (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)0x0) ||
     (bVar5 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0), (char)bVar5 != '\0')) {
    return (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0;
  }
  pSVar9 = (catalog->fields)._dialogs;
  if (pSVar9 != (System_Collections_Generic_List_AottgDialogEntry__o *)0x0) {
    uVar11 = 0;
    do {
      pSVar3 = pSVar9->klass;
      uVar1._0_1_ = (pSVar3->_2).rank;
      uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar4 = (pSVar3->_1).interfaceOffsets;
        lVar10 = 0;
        do {
          if (*(long *)((long)&pIVar4->interfaceType + lVar10) == TypeInfo_IReadOnlyCollection_AottgDialogEntry) {
            pVVar7 = &(pSVar3->vtable)._0_Equals + *(int *)((long)&pIVar4->offset + lVar10);
            goto LAB_03af33d3;
          }
          lVar10 = lVar10 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar10);
      }
      pVVar7 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar9,TypeInfo_IReadOnlyCollection_AottgDialogEntry,0);
LAB_03af33d3:
      iVar6 = (*pVVar7->methodPtr)(pSVar9,pVVar7->method);
      if (iVar6 <= (int)uVar11) {
        return (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0;
      }
      pSVar9 = (catalog->fields)._dialogs;
      if (pSVar9 == (System_Collections_Generic_List_AottgDialogEntry__o *)0x0) break;
      pSVar3 = pSVar9->klass;
      uVar2._0_1_ = (pSVar3->_2).rank;
      uVar2._1_1_ = (pSVar3->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar4 = (pSVar3->_1).interfaceOffsets;
        lVar10 = 0;
        do {
          if (*(long *)((long)&pIVar4->interfaceType + lVar10) == TypeInfo_IReadOnlyList_AottgDialogEntry) {
            pVVar7 = &(pSVar3->vtable)._0_Equals + *(int *)((long)&pIVar4->offset + lVar10);
            goto LAB_03af3453;
          }
          lVar10 = lVar10 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar10);
      }
      pVVar7 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar9,TypeInfo_IReadOnlyList_AottgDialogEntry,0);
LAB_03af3453:
      lVar10 = (*pVVar7->methodPtr)(pSVar9,(ulong)uVar11,pVVar7->method);
      if (lVar10 == 0) break;
      bVar5 = System_String__Equals(*(System_String_o **)(lVar10 + 0x10),id,5,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        if (actions != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgActionRegistry__ClearOwner(actions,id,method_00);
        }
        __this = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance<object>
                           (*(System_Type_o **)(lVar10 + 0x18),MethodInfo_AottgDialog_Instance_AottgDialog);
        if (__this != (Il2CppObject *)0x0) {
          pGVar8 = Gisketch_Aottg2UI_Code_AottgDialog__BuildDefinition
                             ((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,
                              *(System_String_o **)(lVar10 + 0x10),
                              *(Gisketch_Aottg2UI_Code_AottgDialogAttribute_o **)(lVar10 + 0x20),
                              actions,in_R8);
          return pGVar8;
        }
        break;
      }
      uVar11 = uVar11 + 1;
      pSVar9 = (catalog->fields)._dialogs;
    } while (pSVar9 != (System_Collections_Generic_List_AottgDialogEntry__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$BuildPopovers
// il2cpp: Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array* Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildPopovers (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o* catalog, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x3af2dd0

Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *
Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildPopovers
          (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *catalog,
          Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  System_Collections_Generic_List_AottgPopoverEntry__o *pSVar3;
  System_Collections_Generic_List_AottgPopoverEntry__c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  undefined4 uVar6;
  VirtualInvokeData *pVVar7;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *pGVar8;
  Il2CppObject *__this;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *pGVar9;
  long lVar10;
  ulong uVar11;
  
  if (DAT_05701434 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AottgPopover_Instance_AottgPopover);
    il2cpp_init_method_metadata(&TypeInfo_GisketchOverlayDefinition);
    il2cpp_init_method_metadata(&TypeInfo_IReadOnlyCollection_AottgPopoverEntry);
    il2cpp_init_method_metadata();
    DAT_05701434 = '\x01';
  }
  if ((catalog != (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)0x0) &&
     (pSVar3 = (catalog->fields)._popovers,
     pSVar3 != (System_Collections_Generic_List_AottgPopoverEntry__o *)0x0)) {
    pSVar4 = pSVar3->klass;
    uVar1._0_1_ = (pSVar4->_2).rank;
    uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar5 = (pSVar4->_1).interfaceOffsets;
      lVar10 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar10) == TypeInfo_IReadOnlyCollection_AottgPopoverEntry) {
          pVVar7 = &(pSVar4->vtable)._0_Equals + *(int *)((long)&pIVar5->offset + lVar10);
          goto LAB_03af2e91;
        }
        lVar10 = lVar10 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar10);
    }
    pVVar7 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar3,TypeInfo_IReadOnlyCollection_AottgPopoverEntry,0);
LAB_03af2e91:
    uVar6 = (*pVVar7->methodPtr)(pSVar3,pVVar7->method);
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)
             il2cpp_glue_02274930(TypeInfo_GisketchOverlayDefinition,uVar6);
    if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)0x0) {
      if (0 < (int)pGVar8->max_length) {
        uVar11 = 0;
        do {
          pSVar3 = (catalog->fields)._popovers;
          if (pSVar3 == (System_Collections_Generic_List_AottgPopoverEntry__o *)0x0)
          goto LAB_03af2fc2;
          pSVar4 = pSVar3->klass;
          uVar2._0_1_ = (pSVar4->_2).rank;
          uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
          if ((ulong)uVar2 != 0) {
            pIVar5 = (pSVar4->_1).interfaceOffsets;
            lVar10 = 0;
            do {
              if (*(long *)((long)&pIVar5->interfaceType + lVar10) == TypeInfo_IReadOnlyList_AottgPopoverEntry) {
                pVVar7 = &(pSVar4->vtable)._0_Equals + *(int *)((long)&pIVar5->offset + lVar10);
                goto LAB_03af2f43;
              }
              lVar10 = lVar10 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar10);
          }
          pVVar7 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar3,TypeInfo_IReadOnlyList_AottgPopoverEntry,0);
LAB_03af2f43:
          lVar10 = (*pVVar7->methodPtr)(pSVar3,uVar11 & 0xffffffff,pVVar7->method);
          if (lVar10 == 0) goto LAB_03af2fc2;
          __this = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance<object>
                             (*(System_Type_o **)(lVar10 + 0x18),MethodInfo_AottgPopover_Instance_AottgPopover);
          if (__this == (Il2CppObject *)0x0) goto LAB_03af2fc2;
          pGVar9 = Gisketch_Aottg2UI_Code_AottgPopover__BuildDefinition
                             ((Gisketch_Aottg2UI_Code_AottgPopover_o *)__this,
                              *(System_String_o **)(lVar10 + 0x10),
                              *(Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o **)(lVar10 + 0x20),
                              actions,(MethodInfo *)0x0);
          if ((uint)pGVar8->max_length <= uVar11) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pGVar8->m_Items[uVar11] = pGVar9;
          il2cpp_runtime_glue(pGVar8->m_Items + uVar11,pGVar9);
          uVar11 = uVar11 + 1;
        } while ((long)uVar11 < (long)(int)pGVar8->max_length);
      }
      return pGVar8;
    }
  }
LAB_03af2fc2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$Instance<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance_object_ (System_Type_o* type, const MethodInfo_25011E0* method);
// 0x26011e0

Il2CppObject *
Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance<object>
          (System_Type_o *type,MethodInfo_25011E0 *method)

{
  Il2CppObject *pIVar1;
  Il2CppClass *pIVar2;
  Il2CppObject *pIVar3;
  
  if (method->rgctx_data == (MethodInfo_25011E0_RGCTXs *)0x0) {
    il2cpp_glue_022c2910(method);
  }
  pIVar1 = System_Activator__CreateInstance(type,(MethodInfo *)0x0);
  pIVar2 = method->rgctx_data->_0_T;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar2);
  }
  if (pIVar1 == (Il2CppObject *)0x0) {
    pIVar3 = (Il2CppObject *)0x0;
  }
  else {
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(pIVar1,pIVar2);
    if (pIVar3 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pIVar1,pIVar2);
    }
  }
  return pIVar3;
}


// Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$Instance<__Il2CppFullySharedGenericType>
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance___Il2CppFullySharedGenericType_ (System_Type_o* type, const MethodInfo_2501340* method);
// 0x2601340

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance<__Il2CppFullySharedGenericType>
          (System_Type_o *type,MethodInfo_2501340 *method)

{
  MethodInfo_2501340 *__dest;
  long *plVar1;
  ulong uVar2;
  Il2CppObject *pIVar3;
  long lVar4;
  void *__src;
  long in_RDX;
  void *extraout_RDX;
  undefined1 *__dest_00;
  ulong __n;
  undefined1 *__s;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o UVar5;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  MethodInfo_2501340 *local_40;
  System_Type_o *local_38;
  
  plVar1 = *(long **)(in_RDX + 0x38);
  local_40 = method;
  if (plVar1 == (long *)0x0) {
    uStack_50 = 0x260136c;
    il2cpp_glue_022c2910();
    plVar1 = *(long **)(in_RDX + 0x38);
  }
  __n = (ulong)*(uint *)(*plVar1 + 0xfc);
  uVar2 = __n + 0xf & 0xfffffffffffffff0;
  __dest_00 = auStack_48 + -uVar2;
  __s = __dest_00 + -uVar2;
  *(undefined8 *)(__s + -8) = 0x26013a2;
  memset(__s,0,__n);
  local_38 = type;
  *(undefined8 *)(__s + -8) = 0x26013b0;
  pIVar3 = System_Activator__CreateInstance(type,(MethodInfo *)0x0);
  lVar4 = **(long **)(in_RDX + 0x38);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    *(undefined8 *)(__s + -8) = 0x26013cc;
    lVar4 = il2cpp_glue_022c28b0(lVar4);
  }
  *(undefined8 *)(__s + -8) = 0x26013da;
  __src = (void *)il2cpp_glue_02274a70(pIVar3,lVar4,__dest_00);
  *(undefined8 *)(__s + -8) = 0x26013e8;
  memcpy(__s,__src,__n);
  *(undefined8 *)(__s + -8) = 0x26013f6;
  memcpy(__dest_00,__s,__n);
  __dest = local_40;
  *(undefined8 *)(__s + -8) = 0x2601405;
  UVar5.klass = memcpy(__dest,__dest_00,__n);
  UVar5.monitor = extraout_RDX;
  return UVar5;
}


