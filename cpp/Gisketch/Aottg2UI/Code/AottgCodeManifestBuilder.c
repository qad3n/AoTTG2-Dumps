// Type: Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgCodeManifestBuilder.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$Build
// il2cpp: Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Build (System_String_o* selectedScreenId, Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o* theme, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x3b5d4d0

Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *
Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Build
          (System_String_o *selectedScreenId,Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *theme,
          Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *catalog;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *pGVar1;
  MethodInfo *in_R8;
  
  catalog = Gisketch_Aottg2UI_Code_AottgCodeCatalog__DiscoverFresh((MethodInfo *)selectedScreenId);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Build_3a5d500
                     (catalog,selectedScreenId,theme,actions,in_R8);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$Build
// il2cpp: Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Build (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o* catalog, System_String_o* selectedScreenId, Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o* theme, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x3b5d500

Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *
Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Build_3a5d500
          (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *catalog,System_String_o *selectedScreenId,
          Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *theme,
          Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  Il2CppRuntimeInterfaceOffsetPair *pIVar10;
  System_Collections_Generic_List_AottgScreenEntry__o *pSVar11;
  System_Collections_Generic_List_AottgScreenEntry__c *pSVar12;
  System_Collections_Generic_List_AottgDialogEntry__c *pSVar13;
  code *pcVar14;
  int iVar15;
  uint uVar16;
  bool_conflict bVar17;
  Il2CppMethodPointer *ppIVar18;
  Il2CppObject *pIVar19;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar20;
  Il2CppClass *pIVar21;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *pGVar22;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *pGVar23;
  Il2CppClass *pIVar24;
  undefined8 *puVar25;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar26;
  Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *pGVar27;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  System_Collections_Generic_List_AottgDialogEntry__o *pSVar28;
  ulong uVar29;
  Il2CppClass *pIVar30;
  long *plVar31;
  long lVar32;
  long *plVar33;
  long lVar34;
  
  pIVar30 = (Il2CppClass *)selectedScreenId;
  plVar31 = (long *)catalog;
  if (g_data_057a9d54 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgScreen_Instance_AottgScreen);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchManifestDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchScreenDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgScreenEntry);
    plVar31 = &TypeInfo_IReadOnlyList_AottgScreenEntry;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d54 = '\x01';
  }
  if (catalog == (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)0x0) {
    return (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0;
  }
  pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(catalog->fields)._screens;
  if (pSVar20 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
    pIVar30 = (pSVar20->obj).klass;
    uVar1._0_1_ = (pIVar30->_2).rank;
    uVar1._1_1_ = (pIVar30->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar10 = (pIVar30->_1).interfaceOffsets;
      lVar32 = 0;
      do {
        if (*(long *)((long)&pIVar10->interfaceType + lVar32) == TypeInfo_IReadOnlyCollection_AottgScreenEntry) {
          ppIVar18 = &pIVar30->vtable[*(int *)((long)&pIVar10->offset + lVar32)].methodPtr;
          goto label_03b5d5e1;
        }
        lVar32 = lVar32 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar32);
    }
    ppIVar18 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar20,TypeInfo_IReadOnlyCollection_AottgScreenEntry,0);
label_03b5d5e1:
    pIVar30 = (Il2CppClass *)ppIVar18[1];
    iVar15 = (**ppIVar18)();
    if (iVar15 == 0) {
      return (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0;
    }
    if (actions != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      if (g_data_057a9d45 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
        g_data_057a9d45 = '\x01';
      }
      pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(actions->fields)._actions;
      plVar31 = (long *)pSVar20;
      if (pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
      goto label_03b5d943;
      pIVar30 = MethodInfo_Void_Clear;
      System_Collections_Generic_Dictionary_object__object___Clear
                ((System_Collections_Generic_Dictionary_object__object__o *)pSVar20,
                 (MethodInfo_3104FC0 *)MethodInfo_Void_Clear);
      (actions->fields)._next = 0;
    }
    pSVar11 = (catalog->fields)._screens;
    plVar31 = (long *)pSVar20;
    if (pSVar11 != (System_Collections_Generic_List_AottgScreenEntry__o *)0x0) {
      pSVar12 = pSVar11->klass;
      uVar2._0_1_ = (pSVar12->_2).rank;
      uVar2._1_1_ = (pSVar12->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar10 = (pSVar12->_1).interfaceOffsets;
        lVar32 = 0;
        do {
          if (*(long *)((long)&pIVar10->interfaceType + lVar32) == TypeInfo_IReadOnlyCollection_AottgScreenEntry) {
            ppIVar18 = &(&(pSVar12->vtable)._0_Equals)[*(int *)((long)&pIVar10->offset + lVar32)].methodPtr;
            goto label_03b5d6a8;
          }
          lVar32 = lVar32 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar32);
      }
      ppIVar18 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar11,TypeInfo_IReadOnlyCollection_AottgScreenEntry,0);
label_03b5d6a8:
      uVar16 = (**ppIVar18)(pSVar11,(MethodInfo *)ppIVar18[1]);
      pIVar21 = (Il2CppClass *)(ulong)uVar16;
      plVar31 = (long *)TypeInfo_GisketchScreenDefinition;
      pIVar19 = (Il2CppObject *)il2cpp_runtime_helper_022b2a40();
      pIVar30 = pIVar21;
      if (pIVar19 != (Il2CppObject *)0x0) {
        if (0 < *(int *)&pIVar19[1].monitor) {
          uVar29 = 0;
          do {
            pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                      (catalog->fields)._screens;
            pIVar30 = pIVar21;
            if (pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
            goto label_03b5d943;
            pIVar30 = (pSVar20->obj).klass;
            uVar3._0_1_ = (pIVar30->_2).rank;
            uVar3._1_1_ = (pIVar30->_2).minimumAlignment;
            if ((ulong)uVar3 != 0) {
              pIVar10 = (pIVar30->_1).interfaceOffsets;
              lVar32 = 0;
              do {
                if (*(long *)((long)&pIVar10->interfaceType + lVar32) == TypeInfo_IReadOnlyList_AottgScreenEntry) {
                  ppIVar18 = &pIVar30->vtable[*(int *)((long)&pIVar10->offset + lVar32)].methodPtr;
                  goto label_03b5d753;
                }
                lVar32 = lVar32 + 0x10;
              } while ((ulong)uVar3 << 4 != lVar32);
            }
            ppIVar18 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar20,TypeInfo_IReadOnlyList_AottgScreenEntry,0);
label_03b5d753:
            pIVar30 = (Il2CppClass *)(uVar29 & 0xffffffff);
            lVar32 = (**ppIVar18)(pSVar20,pIVar30,(MethodInfo *)ppIVar18[1]);
            plVar31 = (long *)pSVar20;
            if (lVar32 == 0) goto label_03b5d943;
            plVar31 = *(long **)(lVar32 + 0x38);
            pIVar30 = MethodInfo_AottgScreen_Instance_AottgScreen;
            pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                      Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance_object_
                                ((System_Type_o *)plVar31,(MethodInfo_253D250 *)MethodInfo_AottgScreen_Instance_AottgScreen);
            if (pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
            goto label_03b5d943;
            pIVar30 = *(Il2CppClass **)(lVar32 + 0x10);
            pIVar21 = (Il2CppClass *)
                      Gisketch_Aottg2UI_Code_AottgScreen__BuildDefinition
                                ((Gisketch_Aottg2UI_Code_AottgScreen_o *)pSVar20,(System_String_o *)pIVar30,
                                 *(System_String_o **)(lVar32 + 0x18),*(System_String_o **)(lVar32 + 0x20),
                                 *(System_String_o **)(lVar32 + 0x28),*(System_String_o **)(lVar32 + 0x30),
                                 actions,(MethodInfo *)0x0);
            plVar31 = (long *)pSVar20;
            if (*(uint *)&pIVar19[1].monitor <= uVar29) goto label_03b5d948;
            plVar31 = (long *)(&pIVar19[2].klass + uVar29);
            (&pIVar19[2].klass)[uVar29] = pIVar21;
            il2cpp_runtime_helper_022b4080();
            uVar29 = uVar29 + 1;
          } while ((long)uVar29 < (long)*(int *)&pIVar19[1].monitor);
        }
        pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                  il2cpp_runtime_helper_023052d0(TypeInfo_GisketchManifestDefinition);
        *(undefined4 *)&pSVar20->bounds = 1;
        pIVar30 = (Il2CppClass *)0x0;
        plVar31 = (long *)pSVar20;
        System_Object___ctor((Il2CppObject *)pSVar20,(MethodInfo *)0x0);
        if (pSVar20 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
          *(undefined4 *)&pSVar20->bounds = 1;
          pIVar30 = (Il2CppClass *)selectedScreenId;
          plVar31 = (long *)catalog;
          bVar17 = Gisketch_Aottg2UI_Code_AottgCodeCatalog__HasScreen(catalog,selectedScreenId,method_00);
          if ((char)bVar17 != '\0') {
label_03b5d8c5:
            pSVar20->max_length = (il2cpp_array_size_t)selectedScreenId;
            il2cpp_runtime_helper_022b4080(&pSVar20->max_length,selectedScreenId);
            *(Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o **)&pSVar20->m_Items[0].fields = theme;
            il2cpp_runtime_helper_022b4080(pSVar20->m_Items);
            pSVar20->m_Items[0].fields.key = pIVar19;
            il2cpp_runtime_helper_022b4080(&pSVar20->m_Items[0].fields.key,pIVar19);
            pGVar22 = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialogs(catalog,actions,method_01)
            ;
            pSVar20->m_Items[0].fields.value = &pGVar22->obj;
            il2cpp_runtime_helper_022b4080(&pSVar20->m_Items[0].fields.value,pGVar22);
            pGVar22 = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildPopovers
                                (catalog,actions,method_02);
            *(Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array **)&pSVar20->m_Items[1].fields = pGVar22;
            il2cpp_runtime_helper_022b4080(pSVar20->m_Items + 1,pGVar22);
            return (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)pSVar20;
          }
          pSVar26 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                    (catalog->fields)._screens;
          if (pSVar26 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
            pIVar30 = (pSVar26->obj).klass;
            uVar4._0_1_ = (pIVar30->_2).rank;
            uVar4._1_1_ = (pIVar30->_2).minimumAlignment;
            if ((ulong)uVar4 != 0) {
              pIVar10 = (pIVar30->_1).interfaceOffsets;
              lVar32 = 0;
              do {
                if (*(long *)((long)&pIVar10->interfaceType + lVar32) == TypeInfo_IReadOnlyList_AottgScreenEntry) {
                  ppIVar18 = &pIVar30->vtable[*(int *)((long)&pIVar10->offset + lVar32)].methodPtr;
                  goto label_03b5d8a1;
                }
                lVar32 = lVar32 + 0x10;
              } while ((ulong)uVar4 << 4 != lVar32);
            }
            ppIVar18 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar26,TypeInfo_IReadOnlyList_AottgScreenEntry,0);
label_03b5d8a1:
            pIVar30 = (Il2CppClass *)0x0;
            lVar32 = (**ppIVar18)(pSVar26,0,(MethodInfo *)ppIVar18[1]);
            plVar31 = (long *)pSVar26;
            if (lVar32 != 0) {
              selectedScreenId = *(System_String_o **)(lVar32 + 0x10);
              goto label_03b5d8c5;
            }
          }
        }
      }
    }
  }
label_03b5d943:
  il2cpp_runtime_helper_022b2c90();
label_03b5d948:
  il2cpp_runtime_helper_022b2ca0();
  pIVar21 = pIVar30;
  plVar33 = plVar31;
  if (g_data_057a9d55 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgDialog_Instance_AottgDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchOverlayDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgDialogEntry);
    plVar33 = &TypeInfo_IReadOnlyList_AottgDialogEntry;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d55 = '\x01';
  }
  if (((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar31 !=
       (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) &&
     (pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar31)->max_length,
     pSVar20 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) {
    pIVar21 = (pSVar20->obj).klass;
    uVar5._0_1_ = (pIVar21->_2).rank;
    uVar5._1_1_ = (pIVar21->_2).minimumAlignment;
    if ((ulong)uVar5 != 0) {
      pIVar10 = (pIVar21->_1).interfaceOffsets;
      lVar32 = 0;
      do {
        if (*(long *)((long)&pIVar10->interfaceType + lVar32) == TypeInfo_IReadOnlyCollection_AottgDialogEntry) {
          ppIVar18 = &pIVar21->vtable[*(int *)((long)&pIVar10->offset + lVar32)].methodPtr;
          goto label_03b5da11;
        }
        lVar32 = lVar32 + 0x10;
      } while ((ulong)uVar5 << 4 != lVar32);
    }
    ppIVar18 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar20,TypeInfo_IReadOnlyCollection_AottgDialogEntry,0);
label_03b5da11:
    uVar16 = (**ppIVar18)(pSVar20,(MethodInfo *)ppIVar18[1]);
    pIVar24 = (Il2CppClass *)(ulong)uVar16;
    plVar33 = (long *)TypeInfo_GisketchOverlayDefinition;
    pGVar23 = (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)il2cpp_runtime_helper_022b2a40();
    pIVar21 = pIVar24;
    if (pGVar23 != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
      if (0 < *(int *)&(pGVar23->fields).initialScreen) {
        uVar29 = 0;
        do {
          pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                    ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar31)->max_length;
          pIVar21 = pIVar24;
          if (pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_03b5db42;
          pIVar21 = (pSVar20->obj).klass;
          uVar6._0_1_ = (pIVar21->_2).rank;
          uVar6._1_1_ = (pIVar21->_2).minimumAlignment;
          if ((ulong)uVar6 != 0) {
            pIVar10 = (pIVar21->_1).interfaceOffsets;
            lVar32 = 0;
            do {
              if (*(long *)((long)&pIVar10->interfaceType + lVar32) == TypeInfo_IReadOnlyList_AottgDialogEntry) {
                ppIVar18 = &(&((System_Collections_Generic_Dictionary_object__object__VTable *)pIVar21->vtable
                              )->_0_Equals)[*(int *)((long)&pIVar10->offset + lVar32)].methodPtr;
                goto label_03b5dac3;
              }
              lVar32 = lVar32 + 0x10;
            } while ((ulong)uVar6 << 4 != lVar32);
          }
          ppIVar18 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar20,TypeInfo_IReadOnlyList_AottgDialogEntry,0);
label_03b5dac3:
          pIVar21 = (Il2CppClass *)(uVar29 & 0xffffffff);
          lVar32 = (**ppIVar18)(pSVar20,pIVar21,(MethodInfo *)ppIVar18[1]);
          plVar33 = (long *)pSVar20;
          if (lVar32 == 0) goto label_03b5db42;
          plVar33 = *(long **)(lVar32 + 0x18);
          pIVar21 = MethodInfo_AottgDialog_Instance_AottgDialog;
          pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                    Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance_object_
                              ((System_Type_o *)plVar33,(MethodInfo_253D250 *)MethodInfo_AottgDialog_Instance_AottgDialog);
          if (pSVar20 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_03b5db42;
          pIVar21 = *(Il2CppClass **)(lVar32 + 0x10);
          pIVar24 = (Il2CppClass *)
                    Gisketch_Aottg2UI_Code_AottgDialog__BuildDefinition
                              ((Gisketch_Aottg2UI_Code_AottgDialog_o *)pSVar20,(System_String_o *)pIVar21,
                               *(Gisketch_Aottg2UI_Code_AottgDialogAttribute_o **)(lVar32 + 0x20),
                               (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)pIVar30,(MethodInfo *)0x0);
          if (*(uint *)&(pGVar23->fields).initialScreen <= uVar29) goto label_03b5db47;
          plVar33 = (long *)(&(pGVar23->fields).theme + uVar29);
          (&(pGVar23->fields).theme)[uVar29] = (Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *)pIVar24;
          il2cpp_runtime_helper_022b4080();
          uVar29 = uVar29 + 1;
        } while ((long)uVar29 < (long)*(int *)&(pGVar23->fields).initialScreen);
      }
      return pGVar23;
    }
  }
label_03b5db42:
  pSVar20 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar33;
  il2cpp_runtime_helper_022b2c90();
label_03b5db47:
  il2cpp_runtime_helper_022b2ca0();
  pIVar30 = pIVar21;
  plVar31 = (long *)pSVar20;
  if (g_data_057a9d57 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgPopover_Instance_AottgPopover);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchOverlayDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgPopoverEntry);
    plVar31 = &TypeInfo_IReadOnlyList_AottgPopoverEntry;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d57 = '\x01';
  }
  if ((pSVar20 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) &&
     (plVar33 = *(long **)&pSVar20->m_Items[0].fields, plVar33 != (long *)0x0)) {
    lVar32 = *plVar33;
    if ((ulong)*(ushort *)(lVar32 + 0x12e) != 0) {
      lVar34 = 0;
      do {
        if (*(long *)(*(long *)(lVar32 + 0xb0) + lVar34) == TypeInfo_IReadOnlyCollection_AottgPopoverEntry) {
          puVar25 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar32 + 0xb0) + 8 + lVar34) * 0x10 + lVar32 + 0x138);
          goto label_03b5dc11;
        }
        lVar34 = lVar34 + 0x10;
      } while ((ulong)*(ushort *)(lVar32 + 0x12e) << 4 != lVar34);
    }
    puVar25 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar33,TypeInfo_IReadOnlyCollection_AottgPopoverEntry,0);
label_03b5dc11:
    uVar16 = (*(code *)*puVar25)(plVar33,puVar25[1]);
    pIVar24 = (Il2CppClass *)(ulong)uVar16;
    plVar31 = (long *)TypeInfo_GisketchOverlayDefinition;
    pGVar23 = (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)il2cpp_runtime_helper_022b2a40();
    pIVar30 = pIVar24;
    if (pGVar23 != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
      if (0 < *(int *)&(pGVar23->fields).initialScreen) {
        uVar29 = 0;
        do {
          pSVar26 = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                     &pSVar20->m_Items[0].fields;
          pIVar30 = pIVar24;
          if (pSVar26 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_03b5dd42;
          pIVar30 = (pSVar26->obj).klass;
          uVar7._0_1_ = (pIVar30->_2).rank;
          uVar7._1_1_ = (pIVar30->_2).minimumAlignment;
          if ((ulong)uVar7 != 0) {
            pIVar10 = (pIVar30->_1).interfaceOffsets;
            lVar32 = 0;
            do {
              if (*(long *)((long)&pIVar10->interfaceType + lVar32) == TypeInfo_IReadOnlyList_AottgPopoverEntry) {
                ppIVar18 = &(&((System_Collections_Generic_Dictionary_object__object__VTable *)pIVar30->vtable
                              )->_0_Equals)[*(int *)((long)&pIVar10->offset + lVar32)].methodPtr;
                goto label_03b5dcc3;
              }
              lVar32 = lVar32 + 0x10;
            } while ((ulong)uVar7 << 4 != lVar32);
          }
          ppIVar18 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar26,TypeInfo_IReadOnlyList_AottgPopoverEntry,0);
label_03b5dcc3:
          pIVar30 = (Il2CppClass *)(uVar29 & 0xffffffff);
          lVar32 = (**ppIVar18)(pSVar26,pIVar30,(MethodInfo *)ppIVar18[1]);
          plVar31 = (long *)pSVar26;
          if (lVar32 == 0) goto label_03b5dd42;
          plVar31 = *(long **)(lVar32 + 0x18);
          pIVar30 = MethodInfo_AottgPopover_Instance_AottgPopover;
          pSVar26 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                    Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance_object_
                              ((System_Type_o *)plVar31,(MethodInfo_253D250 *)MethodInfo_AottgPopover_Instance_AottgPopover);
          if (pSVar26 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_03b5dd42;
          pIVar30 = *(Il2CppClass **)(lVar32 + 0x10);
          pIVar24 = (Il2CppClass *)
                    Gisketch_Aottg2UI_Code_AottgPopover__BuildDefinition
                              ((Gisketch_Aottg2UI_Code_AottgPopover_o *)pSVar26,(System_String_o *)pIVar30,
                               *(Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o **)(lVar32 + 0x20),
                               (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)pIVar21,(MethodInfo *)0x0);
          if (*(uint *)&(pGVar23->fields).initialScreen <= uVar29) goto label_03b5dd47;
          plVar31 = (long *)(&(pGVar23->fields).theme + uVar29);
          (&(pGVar23->fields).theme)[uVar29] = (Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *)pIVar24;
          il2cpp_runtime_helper_022b4080();
          uVar29 = uVar29 + 1;
        } while ((long)uVar29 < (long)*(int *)&(pGVar23->fields).initialScreen);
      }
      return pGVar23;
    }
  }
label_03b5dd42:
  pSVar26 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar31;
  il2cpp_runtime_helper_022b2c90();
label_03b5dd47:
  il2cpp_runtime_helper_022b2ca0();
  pGVar27 = Gisketch_Aottg2UI_Code_AottgCodeCatalog__DiscoverFresh((MethodInfo *)pSVar26);
  if (g_data_057a9d56 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgDialog_Instance_AottgDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgDialogEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyList_AottgDialogEntry);
    g_data_057a9d56 = '\x01';
  }
  if ((pGVar27 == (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)0x0) ||
     (bVar17 = System_String__IsNullOrEmpty((System_String_o *)pSVar26,(MethodInfo *)0x0),
     (char)bVar17 != '\0')) {
    return (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0;
  }
  pSVar28 = (pGVar27->fields)._dialogs;
  if (pSVar28 != (System_Collections_Generic_List_AottgDialogEntry__o *)0x0) {
    uVar16 = 0;
    do {
      pSVar13 = pSVar28->klass;
      uVar8._0_1_ = (pSVar13->_2).rank;
      uVar8._1_1_ = (pSVar13->_2).minimumAlignment;
      if ((ulong)uVar8 != 0) {
        pIVar10 = (pSVar13->_1).interfaceOffsets;
        lVar32 = 0;
        do {
          if (*(long *)((long)&pIVar10->interfaceType + lVar32) == TypeInfo_IReadOnlyCollection_AottgDialogEntry) {
            ppIVar18 = &(&(pSVar13->vtable)._0_Equals)[*(int *)((long)&pIVar10->offset + lVar32)].methodPtr;
            goto label_03b5de63;
          }
          lVar32 = lVar32 + 0x10;
        } while ((ulong)uVar8 << 4 != lVar32);
      }
      ppIVar18 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar28,TypeInfo_IReadOnlyCollection_AottgDialogEntry,0);
label_03b5de63:
      iVar15 = (**ppIVar18)(pSVar28,(MethodInfo *)ppIVar18[1]);
      if (iVar15 <= (int)uVar16) {
        return (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0;
      }
      pSVar28 = (pGVar27->fields)._dialogs;
      if (pSVar28 == (System_Collections_Generic_List_AottgDialogEntry__o *)0x0) break;
      pSVar13 = pSVar28->klass;
      uVar9._0_1_ = (pSVar13->_2).rank;
      uVar9._1_1_ = (pSVar13->_2).minimumAlignment;
      if ((ulong)uVar9 != 0) {
        pIVar10 = (pSVar13->_1).interfaceOffsets;
        lVar32 = 0;
        do {
          if (*(long *)((long)&pIVar10->interfaceType + lVar32) == TypeInfo_IReadOnlyList_AottgDialogEntry) {
            ppIVar18 = &(&(pSVar13->vtable)._0_Equals)[*(int *)((long)&pIVar10->offset + lVar32)].methodPtr;
            goto label_03b5dee3;
          }
          lVar32 = lVar32 + 0x10;
        } while ((ulong)uVar9 << 4 != lVar32);
      }
      ppIVar18 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar28,TypeInfo_IReadOnlyList_AottgDialogEntry,0);
label_03b5dee3:
      lVar32 = (**ppIVar18)(pSVar28,(ulong)uVar16,(MethodInfo *)ppIVar18[1]);
      if (lVar32 == 0) break;
      bVar17 = System_String__Equals_3af50f0
                         (*(System_String_o **)(lVar32 + 0x10),(System_String_o *)pSVar26,5,(MethodInfo *)0x0)
      ;
      if ((char)bVar17 != '\0') {
        if (pIVar30 != (Il2CppClass *)0x0) {
          Gisketch_Aottg2UI_Code_AottgActionRegistry__ClearOwner
                    ((Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)pIVar30,(System_String_o *)pSVar26,
                     method_03);
        }
        pIVar19 = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance_object_
                            (*(System_Type_o **)(lVar32 + 0x18),(MethodInfo_253D250 *)MethodInfo_AottgDialog_Instance_AottgDialog);
        if (pIVar19 != (Il2CppObject *)0x0) {
          pGVar23 = (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)
                    Gisketch_Aottg2UI_Code_AottgDialog__BuildDefinition
                              ((Gisketch_Aottg2UI_Code_AottgDialog_o *)pIVar19,
                               *(System_String_o **)(lVar32 + 0x10),
                               *(Gisketch_Aottg2UI_Code_AottgDialogAttribute_o **)(lVar32 + 0x20),
                               (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)pIVar30,(MethodInfo *)0x0);
          return pGVar23;
        }
        break;
      }
      uVar16 = uVar16 + 1;
      pSVar28 = (pGVar27->fields)._dialogs;
    } while (pSVar28 != (System_Collections_Generic_List_AottgDialogEntry__o *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar14 = (code *)swi(3);
  pGVar23 = (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)(*pcVar14)();
  return pGVar23;
}


// Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$BuildDialogs
// il2cpp: Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array* Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialogs (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o* catalog, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x3b5d950

Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *
Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialogs
          (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *catalog,
          Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  System_Collections_Generic_List_AottgDialogEntry__c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Type_c *pSVar8;
  long *plVar9;
  code *pcVar10;
  uint uVar11;
  bool_conflict bVar12;
  int iVar13;
  Il2CppMethodPointer *ppIVar14;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *pGVar15;
  Il2CppClass *pIVar16;
  MethodInfo_253D250 *pMVar17;
  undefined8 *puVar18;
  Il2CppClass *pIVar19;
  MethodInfo_253D250 *pMVar20;
  Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *pGVar21;
  Il2CppObject *__this;
  MethodInfo *method_00;
  System_Collections_Generic_List_AottgDialogEntry__o *pSVar22;
  MethodInfo_253D250 *actions_00;
  long *plVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  
  actions_00 = (MethodInfo_253D250 *)actions;
  plVar23 = (long *)catalog;
  if (g_data_057a9d55 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgDialog_Instance_AottgDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchOverlayDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgDialogEntry);
    plVar23 = &TypeInfo_IReadOnlyList_AottgDialogEntry;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d55 = '\x01';
  }
  if ((catalog != (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)0x0) &&
     (pSVar22 = (catalog->fields)._dialogs,
     pSVar22 != (System_Collections_Generic_List_AottgDialogEntry__o *)0x0)) {
    pSVar6 = pSVar22->klass;
    uVar1._0_1_ = (pSVar6->_2).rank;
    uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar7 = (pSVar6->_1).interfaceOffsets;
      lVar24 = 0;
      do {
        if (*(long *)((long)&pIVar7->interfaceType + lVar24) == TypeInfo_IReadOnlyCollection_AottgDialogEntry) {
          ppIVar14 = &(&(pSVar6->vtable)._0_Equals)[*(int *)((long)&pIVar7->offset + lVar24)].methodPtr;
          goto label_03b5da11;
        }
        lVar24 = lVar24 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar24);
    }
    ppIVar14 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar22,TypeInfo_IReadOnlyCollection_AottgDialogEntry,0);
label_03b5da11:
    uVar11 = (**ppIVar14)(pSVar22,(MethodInfo *)ppIVar14[1]);
    pMVar17 = (MethodInfo_253D250 *)(ulong)uVar11;
    plVar23 = (long *)TypeInfo_GisketchOverlayDefinition;
    pGVar15 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)il2cpp_runtime_helper_022b2a40();
    actions_00 = pMVar17;
    if (pGVar15 != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)0x0) {
      if (0 < (int)pGVar15->max_length) {
        uVar26 = 0;
        do {
          pIVar16 = (Il2CppClass *)(catalog->fields)._dialogs;
          actions_00 = pMVar17;
          if (pIVar16 == (Il2CppClass *)0x0) goto label_03b5db42;
          pSVar8 = (pIVar16->_1).image;
          uVar2._0_1_ = (pSVar8->_2).rank;
          uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
          if ((ulong)uVar2 != 0) {
            pIVar7 = (pSVar8->_1).interfaceOffsets;
            lVar24 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar24) == TypeInfo_IReadOnlyList_AottgDialogEntry) {
                ppIVar14 = &(&(pSVar8->vtable)._0_Equals)[*(int *)((long)&pIVar7->offset + lVar24)].methodPtr;
                goto label_03b5dac3;
              }
              lVar24 = lVar24 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar24);
          }
          ppIVar14 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pIVar16,TypeInfo_IReadOnlyList_AottgDialogEntry,0);
label_03b5dac3:
          actions_00 = (MethodInfo_253D250 *)(uVar26 & 0xffffffff);
          lVar24 = (**ppIVar14)(pIVar16,actions_00,(MethodInfo *)ppIVar14[1]);
          plVar23 = (long *)pIVar16;
          if (lVar24 == 0) goto label_03b5db42;
          plVar23 = *(long **)(lVar24 + 0x18);
          actions_00 = MethodInfo_AottgDialog_Instance_AottgDialog;
          pIVar16 = (Il2CppClass *)
                    Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance_object_
                              ((System_Type_o *)plVar23,MethodInfo_AottgDialog_Instance_AottgDialog);
          if (pIVar16 == (Il2CppClass *)0x0) goto label_03b5db42;
          actions_00 = *(MethodInfo_253D250 **)(lVar24 + 0x10);
          pMVar17 = (MethodInfo_253D250 *)
                    Gisketch_Aottg2UI_Code_AottgDialog__BuildDefinition
                              ((Gisketch_Aottg2UI_Code_AottgDialog_o *)pIVar16,(System_String_o *)actions_00,
                               *(Gisketch_Aottg2UI_Code_AottgDialogAttribute_o **)(lVar24 + 0x20),actions,
                               (MethodInfo *)0x0);
          if ((uint)pGVar15->max_length <= uVar26) goto label_03b5db47;
          plVar23 = (long *)(pGVar15->m_Items + uVar26);
          pGVar15->m_Items[uVar26] = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)pMVar17;
          il2cpp_runtime_helper_022b4080();
          uVar26 = uVar26 + 1;
        } while ((long)uVar26 < (long)(int)pGVar15->max_length);
      }
      return pGVar15;
    }
  }
label_03b5db42:
  pIVar16 = (Il2CppClass *)plVar23;
  il2cpp_runtime_helper_022b2c90();
label_03b5db47:
  il2cpp_runtime_helper_022b2ca0();
  pMVar17 = actions_00;
  plVar23 = (long *)pIVar16;
  if (g_data_057a9d57 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgPopover_Instance_AottgPopover);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchOverlayDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgPopoverEntry);
    plVar23 = &TypeInfo_IReadOnlyList_AottgPopoverEntry;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d57 = '\x01';
  }
  if ((pIVar16 != (Il2CppClass *)0x0) && (plVar9 = (pIVar16->_1).byval_arg.data, plVar9 != (long *)0x0)) {
    lVar24 = *plVar9;
    if ((ulong)*(ushort *)(lVar24 + 0x12e) != 0) {
      lVar25 = 0;
      do {
        if (*(long *)(*(long *)(lVar24 + 0xb0) + lVar25) == TypeInfo_IReadOnlyCollection_AottgPopoverEntry) {
          puVar18 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar24 + 0xb0) + 8 + lVar25) * 0x10 + lVar24 + 0x138);
          goto label_03b5dc11;
        }
        lVar25 = lVar25 + 0x10;
      } while ((ulong)*(ushort *)(lVar24 + 0x12e) << 4 != lVar25);
    }
    puVar18 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_IReadOnlyCollection_AottgPopoverEntry,0);
label_03b5dc11:
    uVar11 = (*(code *)*puVar18)(plVar9,puVar18[1]);
    pMVar20 = (MethodInfo_253D250 *)(ulong)uVar11;
    plVar23 = (long *)TypeInfo_GisketchOverlayDefinition;
    pGVar15 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)il2cpp_runtime_helper_022b2a40();
    pMVar17 = pMVar20;
    if (pGVar15 != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)0x0) {
      if (0 < (int)pGVar15->max_length) {
        uVar26 = 0;
        do {
          pIVar19 = (pIVar16->_1).byval_arg.data;
          pMVar17 = pMVar20;
          if (pIVar19 == (Il2CppClass *)0x0) goto label_03b5dd42;
          pSVar8 = (pIVar19->_1).image;
          uVar3._0_1_ = (pSVar8->_2).rank;
          uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
          if ((ulong)uVar3 != 0) {
            pIVar7 = (pSVar8->_1).interfaceOffsets;
            lVar24 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar24) == TypeInfo_IReadOnlyList_AottgPopoverEntry) {
                ppIVar14 = &(&(pSVar8->vtable)._0_Equals)[*(int *)((long)&pIVar7->offset + lVar24)].methodPtr;
                goto label_03b5dcc3;
              }
              lVar24 = lVar24 + 0x10;
            } while ((ulong)uVar3 << 4 != lVar24);
          }
          ppIVar14 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pIVar19,TypeInfo_IReadOnlyList_AottgPopoverEntry,0);
label_03b5dcc3:
          pMVar17 = (MethodInfo_253D250 *)(uVar26 & 0xffffffff);
          lVar24 = (**ppIVar14)(pIVar19,pMVar17,(MethodInfo *)ppIVar14[1]);
          plVar23 = (long *)pIVar19;
          if (lVar24 == 0) goto label_03b5dd42;
          plVar23 = *(long **)(lVar24 + 0x18);
          pMVar17 = MethodInfo_AottgPopover_Instance_AottgPopover;
          pIVar19 = (Il2CppClass *)
                    Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance_object_
                              ((System_Type_o *)plVar23,MethodInfo_AottgPopover_Instance_AottgPopover);
          if (pIVar19 == (Il2CppClass *)0x0) goto label_03b5dd42;
          pMVar17 = *(MethodInfo_253D250 **)(lVar24 + 0x10);
          pMVar20 = (MethodInfo_253D250 *)
                    Gisketch_Aottg2UI_Code_AottgPopover__BuildDefinition
                              ((Gisketch_Aottg2UI_Code_AottgPopover_o *)pIVar19,(System_String_o *)pMVar17,
                               *(Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o **)(lVar24 + 0x20),
                               (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)actions_00,(MethodInfo *)0x0);
          if ((uint)pGVar15->max_length <= uVar26) goto label_03b5dd47;
          plVar23 = (long *)(pGVar15->m_Items + uVar26);
          pGVar15->m_Items[uVar26] = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)pMVar20;
          il2cpp_runtime_helper_022b4080();
          uVar26 = uVar26 + 1;
        } while ((long)uVar26 < (long)(int)pGVar15->max_length);
      }
      return pGVar15;
    }
  }
label_03b5dd42:
  pIVar19 = (Il2CppClass *)plVar23;
  il2cpp_runtime_helper_022b2c90();
label_03b5dd47:
  il2cpp_runtime_helper_022b2ca0();
  pGVar21 = Gisketch_Aottg2UI_Code_AottgCodeCatalog__DiscoverFresh((MethodInfo *)pIVar19);
  if (g_data_057a9d56 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgDialog_Instance_AottgDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgDialogEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyList_AottgDialogEntry);
    g_data_057a9d56 = '\x01';
  }
  if ((pGVar21 == (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)0x0) ||
     (bVar12 = System_String__IsNullOrEmpty((System_String_o *)pIVar19,(MethodInfo *)0x0),
     (char)bVar12 != '\0')) {
    return (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)0x0;
  }
  pSVar22 = (pGVar21->fields)._dialogs;
  if (pSVar22 != (System_Collections_Generic_List_AottgDialogEntry__o *)0x0) {
    uVar11 = 0;
    do {
      pSVar6 = pSVar22->klass;
      uVar4._0_1_ = (pSVar6->_2).rank;
      uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar7 = (pSVar6->_1).interfaceOffsets;
        lVar24 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar24) == TypeInfo_IReadOnlyCollection_AottgDialogEntry) {
            ppIVar14 = &(&(pSVar6->vtable)._0_Equals)[*(int *)((long)&pIVar7->offset + lVar24)].methodPtr;
            goto label_03b5de63;
          }
          lVar24 = lVar24 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar24);
      }
      ppIVar14 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar22,TypeInfo_IReadOnlyCollection_AottgDialogEntry,0);
label_03b5de63:
      iVar13 = (**ppIVar14)(pSVar22,(MethodInfo *)ppIVar14[1]);
      if (iVar13 <= (int)uVar11) {
        return (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)0x0;
      }
      pSVar22 = (pGVar21->fields)._dialogs;
      if (pSVar22 == (System_Collections_Generic_List_AottgDialogEntry__o *)0x0) break;
      pSVar6 = pSVar22->klass;
      uVar5._0_1_ = (pSVar6->_2).rank;
      uVar5._1_1_ = (pSVar6->_2).minimumAlignment;
      if ((ulong)uVar5 != 0) {
        pIVar7 = (pSVar6->_1).interfaceOffsets;
        lVar24 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar24) == TypeInfo_IReadOnlyList_AottgDialogEntry) {
            ppIVar14 = &(&(pSVar6->vtable)._0_Equals)[*(int *)((long)&pIVar7->offset + lVar24)].methodPtr;
            goto label_03b5dee3;
          }
          lVar24 = lVar24 + 0x10;
        } while ((ulong)uVar5 << 4 != lVar24);
      }
      ppIVar14 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar22,TypeInfo_IReadOnlyList_AottgDialogEntry,0);
label_03b5dee3:
      lVar24 = (**ppIVar14)(pSVar22,(ulong)uVar11,(MethodInfo *)ppIVar14[1]);
      if (lVar24 == 0) break;
      bVar12 = System_String__Equals_3af50f0
                         (*(System_String_o **)(lVar24 + 0x10),(System_String_o *)pIVar19,5,(MethodInfo *)0x0)
      ;
      if ((char)bVar12 != '\0') {
        if (pMVar17 != (MethodInfo_253D250 *)0x0) {
          Gisketch_Aottg2UI_Code_AottgActionRegistry__ClearOwner
                    ((Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)pMVar17,(System_String_o *)pIVar19,
                     method_00);
        }
        __this = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance_object_
                           (*(System_Type_o **)(lVar24 + 0x18),MethodInfo_AottgDialog_Instance_AottgDialog);
        if (__this != (Il2CppObject *)0x0) {
          pGVar15 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)
                    Gisketch_Aottg2UI_Code_AottgDialog__BuildDefinition
                              ((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,
                               *(System_String_o **)(lVar24 + 0x10),
                               *(Gisketch_Aottg2UI_Code_AottgDialogAttribute_o **)(lVar24 + 0x20),
                               (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)pMVar17,(MethodInfo *)0x0);
          return pGVar15;
        }
        break;
      }
      uVar11 = uVar11 + 1;
      pSVar22 = (pGVar21->fields)._dialogs;
    } while (pSVar22 != (System_Collections_Generic_List_AottgDialogEntry__o *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar10 = (code *)swi(3);
  pGVar15 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)(*pcVar10)();
  return pGVar15;
}


// Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$BuildDialog
// il2cpp: Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialog (System_String_o* id, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x3b5dd50

Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *
Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialog
          (System_String_o *id,Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  System_Collections_Generic_List_AottgDialogEntry__c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *pcVar5;
  bool_conflict bVar6;
  int iVar7;
  Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *pGVar8;
  VirtualInvokeData *pVVar9;
  Il2CppObject *__this;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *pGVar10;
  MethodInfo *method_00;
  System_Collections_Generic_List_AottgDialogEntry__o *pSVar11;
  long lVar12;
  uint uVar13;
  
  pGVar8 = Gisketch_Aottg2UI_Code_AottgCodeCatalog__DiscoverFresh((MethodInfo *)id);
  if (g_data_057a9d56 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgDialog_Instance_AottgDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgDialogEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyList_AottgDialogEntry);
    g_data_057a9d56 = '\x01';
  }
  if ((pGVar8 == (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)0x0) ||
     (bVar6 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0), (char)bVar6 != '\0')) {
    return (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0;
  }
  pSVar11 = (pGVar8->fields)._dialogs;
  if (pSVar11 != (System_Collections_Generic_List_AottgDialogEntry__o *)0x0) {
    uVar13 = 0;
    do {
      pSVar3 = pSVar11->klass;
      uVar1._0_1_ = (pSVar3->_2).rank;
      uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar4 = (pSVar3->_1).interfaceOffsets;
        lVar12 = 0;
        do {
          if (*(long *)((long)&pIVar4->interfaceType + lVar12) == TypeInfo_IReadOnlyCollection_AottgDialogEntry) {
            pVVar9 = &(pSVar3->vtable)._0_Equals + *(int *)((long)&pIVar4->offset + lVar12);
            goto label_03b5de63;
          }
          lVar12 = lVar12 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar12);
      }
      pVVar9 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar11,TypeInfo_IReadOnlyCollection_AottgDialogEntry,0);
label_03b5de63:
      iVar7 = (*pVVar9->methodPtr)(pSVar11,pVVar9->method);
      if (iVar7 <= (int)uVar13) {
        return (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0;
      }
      pSVar11 = (pGVar8->fields)._dialogs;
      if (pSVar11 == (System_Collections_Generic_List_AottgDialogEntry__o *)0x0) break;
      pSVar3 = pSVar11->klass;
      uVar2._0_1_ = (pSVar3->_2).rank;
      uVar2._1_1_ = (pSVar3->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar4 = (pSVar3->_1).interfaceOffsets;
        lVar12 = 0;
        do {
          if (*(long *)((long)&pIVar4->interfaceType + lVar12) == TypeInfo_IReadOnlyList_AottgDialogEntry) {
            pVVar9 = &(pSVar3->vtable)._0_Equals + *(int *)((long)&pIVar4->offset + lVar12);
            goto label_03b5dee3;
          }
          lVar12 = lVar12 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar12);
      }
      pVVar9 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar11,TypeInfo_IReadOnlyList_AottgDialogEntry,0);
label_03b5dee3:
      lVar12 = (*pVVar9->methodPtr)(pSVar11,(ulong)uVar13,pVVar9->method);
      if (lVar12 == 0) break;
      bVar6 = System_String__Equals_3af50f0(*(System_String_o **)(lVar12 + 0x10),id,5,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        if (actions != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgActionRegistry__ClearOwner(actions,id,method_00);
        }
        __this = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance_object_
                           (*(System_Type_o **)(lVar12 + 0x18),MethodInfo_AottgDialog_Instance_AottgDialog);
        if (__this != (Il2CppObject *)0x0) {
          pGVar10 = Gisketch_Aottg2UI_Code_AottgDialog__BuildDefinition
                              ((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,
                               *(System_String_o **)(lVar12 + 0x10),
                               *(Gisketch_Aottg2UI_Code_AottgDialogAttribute_o **)(lVar12 + 0x20),actions,
                               (MethodInfo *)0x0);
          return pGVar10;
        }
        break;
      }
      uVar13 = uVar13 + 1;
      pSVar11 = (pGVar8->fields)._dialogs;
    } while (pSVar11 != (System_Collections_Generic_List_AottgDialogEntry__o *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar5 = (code *)swi(3);
  pGVar10 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)(*pcVar5)();
  return pGVar10;
}


// Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$BuildDialog
// il2cpp: Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialog (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o* catalog, System_String_o* id, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x3b5dd80

Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *
Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialog_3a5dd80
          (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *catalog,System_String_o *id,
          Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  System_Collections_Generic_List_AottgDialogEntry__c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *pcVar5;
  bool_conflict bVar6;
  int iVar7;
  VirtualInvokeData *pVVar8;
  Il2CppObject *__this;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *pGVar9;
  MethodInfo *method_00;
  System_Collections_Generic_List_AottgDialogEntry__o *pSVar10;
  long lVar11;
  uint uVar12;
  
  if (g_data_057a9d56 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgDialog_Instance_AottgDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgDialogEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyList_AottgDialogEntry);
    g_data_057a9d56 = '\x01';
  }
  if ((catalog == (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)0x0) ||
     (bVar6 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0), (char)bVar6 != '\0')) {
    return (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0;
  }
  pSVar10 = (catalog->fields)._dialogs;
  if (pSVar10 != (System_Collections_Generic_List_AottgDialogEntry__o *)0x0) {
    uVar12 = 0;
    do {
      pSVar3 = pSVar10->klass;
      uVar1._0_1_ = (pSVar3->_2).rank;
      uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar4 = (pSVar3->_1).interfaceOffsets;
        lVar11 = 0;
        do {
          if (*(long *)((long)&pIVar4->interfaceType + lVar11) == TypeInfo_IReadOnlyCollection_AottgDialogEntry) {
            pVVar8 = &(pSVar3->vtable)._0_Equals + *(int *)((long)&pIVar4->offset + lVar11);
            goto label_03b5de63;
          }
          lVar11 = lVar11 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar11);
      }
      pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar10,TypeInfo_IReadOnlyCollection_AottgDialogEntry,0);
label_03b5de63:
      iVar7 = (*pVVar8->methodPtr)(pSVar10,pVVar8->method);
      if (iVar7 <= (int)uVar12) {
        return (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0;
      }
      pSVar10 = (catalog->fields)._dialogs;
      if (pSVar10 == (System_Collections_Generic_List_AottgDialogEntry__o *)0x0) break;
      pSVar3 = pSVar10->klass;
      uVar2._0_1_ = (pSVar3->_2).rank;
      uVar2._1_1_ = (pSVar3->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar4 = (pSVar3->_1).interfaceOffsets;
        lVar11 = 0;
        do {
          if (*(long *)((long)&pIVar4->interfaceType + lVar11) == TypeInfo_IReadOnlyList_AottgDialogEntry) {
            pVVar8 = &(pSVar3->vtable)._0_Equals + *(int *)((long)&pIVar4->offset + lVar11);
            goto label_03b5dee3;
          }
          lVar11 = lVar11 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar11);
      }
      pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar10,TypeInfo_IReadOnlyList_AottgDialogEntry,0);
label_03b5dee3:
      lVar11 = (*pVVar8->methodPtr)(pSVar10,(ulong)uVar12,pVVar8->method);
      if (lVar11 == 0) break;
      bVar6 = System_String__Equals_3af50f0(*(System_String_o **)(lVar11 + 0x10),id,5,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        if (actions != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgActionRegistry__ClearOwner(actions,id,method_00);
        }
        __this = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance_object_
                           (*(System_Type_o **)(lVar11 + 0x18),MethodInfo_AottgDialog_Instance_AottgDialog);
        if (__this != (Il2CppObject *)0x0) {
          pGVar9 = Gisketch_Aottg2UI_Code_AottgDialog__BuildDefinition
                             ((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,
                              *(System_String_o **)(lVar11 + 0x10),
                              *(Gisketch_Aottg2UI_Code_AottgDialogAttribute_o **)(lVar11 + 0x20),actions,
                              (MethodInfo *)0x0);
          return pGVar9;
        }
        break;
      }
      uVar12 = uVar12 + 1;
      pSVar10 = (catalog->fields)._dialogs;
    } while (pSVar10 != (System_Collections_Generic_List_AottgDialogEntry__o *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar5 = (code *)swi(3);
  pGVar9 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)(*pcVar5)();
  return pGVar9;
}


// Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$BuildPopovers
// il2cpp: Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array* Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildPopovers (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o* catalog, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x3b5db50

Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *
Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildPopovers
          (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *catalog,
          Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  System_Collections_Generic_List_AottgPopoverEntry__o *pSVar5;
  System_Collections_Generic_List_AottgPopoverEntry__c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Type_c *pSVar8;
  System_Collections_Generic_List_AottgDialogEntry__c *pSVar9;
  code *pcVar10;
  uint uVar11;
  bool_conflict bVar12;
  int iVar13;
  VirtualInvokeData *pVVar14;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *pGVar15;
  MethodInfo *pMVar16;
  MethodInfo_253D250 *pMVar17;
  Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *pGVar18;
  Il2CppObject *__this;
  MethodInfo *method_00;
  System_Collections_Generic_List_AottgDialogEntry__o *pSVar19;
  MethodInfo_253D250 *__this_00;
  long *type;
  long lVar20;
  ulong uVar21;
  
  __this_00 = (MethodInfo_253D250 *)actions;
  type = (long *)catalog;
  if (g_data_057a9d57 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgPopover_Instance_AottgPopover);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchOverlayDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgPopoverEntry);
    type = &TypeInfo_IReadOnlyList_AottgPopoverEntry;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d57 = '\x01';
  }
  if ((catalog != (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)0x0) &&
     (pSVar5 = (catalog->fields)._popovers,
     pSVar5 != (System_Collections_Generic_List_AottgPopoverEntry__o *)0x0)) {
    pSVar6 = pSVar5->klass;
    uVar1._0_1_ = (pSVar6->_2).rank;
    uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar7 = (pSVar6->_1).interfaceOffsets;
      lVar20 = 0;
      do {
        if (*(long *)((long)&pIVar7->interfaceType + lVar20) == TypeInfo_IReadOnlyCollection_AottgPopoverEntry) {
          pVVar14 = &(pSVar6->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar20);
          goto label_03b5dc11;
        }
        lVar20 = lVar20 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar20);
    }
    pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar5,TypeInfo_IReadOnlyCollection_AottgPopoverEntry,0);
label_03b5dc11:
    uVar11 = (*pVVar14->methodPtr)(pSVar5,pVVar14->method);
    pMVar17 = (MethodInfo_253D250 *)(ulong)uVar11;
    type = (long *)TypeInfo_GisketchOverlayDefinition;
    pGVar15 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)il2cpp_runtime_helper_022b2a40();
    __this_00 = pMVar17;
    if (pGVar15 != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)0x0) {
      if (0 < (int)pGVar15->max_length) {
        uVar21 = 0;
        do {
          pMVar16 = (MethodInfo *)(catalog->fields)._popovers;
          __this_00 = pMVar17;
          if (pMVar16 == (MethodInfo *)0x0) goto label_03b5dd42;
          pSVar8 = (System_Type_c *)pMVar16->methodPointer;
          uVar2._0_1_ = (pSVar8->_2).rank;
          uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
          if ((ulong)uVar2 != 0) {
            pIVar7 = (pSVar8->_1).interfaceOffsets;
            lVar20 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar20) == TypeInfo_IReadOnlyList_AottgPopoverEntry) {
                pVVar14 = &(pSVar8->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar20);
                goto label_03b5dcc3;
              }
              lVar20 = lVar20 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar20);
          }
          pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pMVar16,TypeInfo_IReadOnlyList_AottgPopoverEntry,0);
label_03b5dcc3:
          __this_00 = (MethodInfo_253D250 *)(uVar21 & 0xffffffff);
          lVar20 = (*pVVar14->methodPtr)(pMVar16,__this_00,pVVar14->method);
          type = (long *)pMVar16;
          if (lVar20 == 0) goto label_03b5dd42;
          type = *(long **)(lVar20 + 0x18);
          __this_00 = MethodInfo_AottgPopover_Instance_AottgPopover;
          pMVar16 = (MethodInfo *)
                    Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance_object_
                              ((System_Type_o *)type,MethodInfo_AottgPopover_Instance_AottgPopover);
          if (pMVar16 == (MethodInfo *)0x0) goto label_03b5dd42;
          __this_00 = *(MethodInfo_253D250 **)(lVar20 + 0x10);
          pMVar17 = (MethodInfo_253D250 *)
                    Gisketch_Aottg2UI_Code_AottgPopover__BuildDefinition
                              ((Gisketch_Aottg2UI_Code_AottgPopover_o *)pMVar16,(System_String_o *)__this_00,
                               *(Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o **)(lVar20 + 0x20),actions,
                               (MethodInfo *)0x0);
          if ((uint)pGVar15->max_length <= uVar21) goto label_03b5dd47;
          type = (long *)(pGVar15->m_Items + uVar21);
          pGVar15->m_Items[uVar21] = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)pMVar17;
          il2cpp_runtime_helper_022b4080();
          uVar21 = uVar21 + 1;
        } while ((long)uVar21 < (long)(int)pGVar15->max_length);
      }
      return pGVar15;
    }
  }
label_03b5dd42:
  pMVar16 = (MethodInfo *)type;
  il2cpp_runtime_helper_022b2c90();
label_03b5dd47:
  il2cpp_runtime_helper_022b2ca0();
  pGVar18 = Gisketch_Aottg2UI_Code_AottgCodeCatalog__DiscoverFresh(pMVar16);
  if (g_data_057a9d56 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgDialog_Instance_AottgDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgDialogEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyList_AottgDialogEntry);
    g_data_057a9d56 = '\x01';
  }
  if ((pGVar18 == (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)0x0) ||
     (bVar12 = System_String__IsNullOrEmpty((System_String_o *)pMVar16,(MethodInfo *)0x0),
     (char)bVar12 != '\0')) {
    return (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)0x0;
  }
  pSVar19 = (pGVar18->fields)._dialogs;
  if (pSVar19 != (System_Collections_Generic_List_AottgDialogEntry__o *)0x0) {
    uVar11 = 0;
    do {
      pSVar9 = pSVar19->klass;
      uVar3._0_1_ = (pSVar9->_2).rank;
      uVar3._1_1_ = (pSVar9->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar7 = (pSVar9->_1).interfaceOffsets;
        lVar20 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar20) == TypeInfo_IReadOnlyCollection_AottgDialogEntry) {
            pVVar14 = &(pSVar9->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar20);
            goto label_03b5de63;
          }
          lVar20 = lVar20 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar20);
      }
      pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar19,TypeInfo_IReadOnlyCollection_AottgDialogEntry,0);
label_03b5de63:
      iVar13 = (*pVVar14->methodPtr)(pSVar19,pVVar14->method);
      if (iVar13 <= (int)uVar11) {
        return (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)0x0;
      }
      pSVar19 = (pGVar18->fields)._dialogs;
      if (pSVar19 == (System_Collections_Generic_List_AottgDialogEntry__o *)0x0) break;
      pSVar9 = pSVar19->klass;
      uVar4._0_1_ = (pSVar9->_2).rank;
      uVar4._1_1_ = (pSVar9->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar7 = (pSVar9->_1).interfaceOffsets;
        lVar20 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar20) == TypeInfo_IReadOnlyList_AottgDialogEntry) {
            pVVar14 = &(pSVar9->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar20);
            goto label_03b5dee3;
          }
          lVar20 = lVar20 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar20);
      }
      pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar19,TypeInfo_IReadOnlyList_AottgDialogEntry,0);
label_03b5dee3:
      lVar20 = (*pVVar14->methodPtr)(pSVar19,(ulong)uVar11,pVVar14->method);
      if (lVar20 == 0) break;
      bVar12 = System_String__Equals_3af50f0
                         (*(System_String_o **)(lVar20 + 0x10),(System_String_o *)pMVar16,5,(MethodInfo *)0x0)
      ;
      if ((char)bVar12 != '\0') {
        if (__this_00 != (MethodInfo_253D250 *)0x0) {
          Gisketch_Aottg2UI_Code_AottgActionRegistry__ClearOwner
                    ((Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)__this_00,(System_String_o *)pMVar16,
                     method_00);
        }
        __this = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance_object_
                           (*(System_Type_o **)(lVar20 + 0x18),MethodInfo_AottgDialog_Instance_AottgDialog);
        if (__this != (Il2CppObject *)0x0) {
          pGVar15 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)
                    Gisketch_Aottg2UI_Code_AottgDialog__BuildDefinition
                              ((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,
                               *(System_String_o **)(lVar20 + 0x10),
                               *(Gisketch_Aottg2UI_Code_AottgDialogAttribute_o **)(lVar20 + 0x20),
                               (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)__this_00,(MethodInfo *)0x0);
          return pGVar15;
        }
        break;
      }
      uVar11 = uVar11 + 1;
      pSVar19 = (pGVar18->fields)._dialogs;
    } while (pSVar19 != (System_Collections_Generic_List_AottgDialogEntry__o *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar10 = (code *)swi(3);
  pGVar15 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)(*pcVar10)();
  return pGVar15;
}


// Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$Instance<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance_object_ (System_Type_o* type, const MethodInfo_253D250* method);
// 0x263d250

Il2CppObject *
Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance_object_
          (System_Type_o *type,MethodInfo_253D250 *method)

{
  Il2CppObject *pIVar1;
  Il2CppClass *pIVar2;
  Il2CppObject *pIVar3;
  
  if (method->rgctx_data == (MethodInfo_253D250_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(method);
  }
  pIVar1 = System_Activator__CreateInstance_3ce7ba0(type,(MethodInfo *)0x0);
  pIVar2 = method->rgctx_data->_0_T;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar2);
  }
  if (pIVar1 != (Il2CppObject *)0x0) {
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_023051f0(pIVar1,pIVar2);
    if (pIVar3 != (Il2CppObject *)0x0) {
      return pIVar3;
    }
    il2cpp_runtime_helper_022b2fd0(pIVar1,pIVar2);
  }
  return (Il2CppObject *)0x0;
}


// Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$Instance<__Il2CppFullySharedGenericType>
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance___Il2CppFullySharedGenericType_ (System_Type_o* type, const MethodInfo_253D3B0* method);
// 0x263d3b0

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance___Il2CppFullySharedGenericType_
          (System_Type_o *type,MethodInfo_253D3B0 *method)

{
  MethodInfo_253D3B0 *__dest;
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
  MethodInfo_253D3B0 *local_40;
  System_Type_o *local_38;
  
  plVar1 = *(long **)(in_RDX + 0x38);
  local_40 = method;
  if (plVar1 == (long *)0x0) {
    uStack_50 = 0x263d3dc;
    il2cpp_runtime_helper_02300a20();
    plVar1 = *(long **)(in_RDX + 0x38);
  }
  __n = (ulong)*(uint *)(*plVar1 + 0xfc);
  uVar2 = __n + 0xf & 0xfffffffffffffff0;
  __dest_00 = auStack_48 + -uVar2;
  __s = __dest_00 + -uVar2;
  *(undefined8 *)(__s + -8) = 0x263d412;
  memset(__s,0,__n);
  local_38 = type;
  *(undefined8 *)(__s + -8) = 0x263d420;
  pIVar3 = System_Activator__CreateInstance_3ce7ba0(type,(MethodInfo *)0x0);
  lVar4 = **(long **)(in_RDX + 0x38);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    *(undefined8 *)(__s + -8) = 0x263d43c;
    lVar4 = il2cpp_runtime_helper_023009c0(lVar4);
  }
  *(undefined8 *)(__s + -8) = 0x263d44a;
  __src = (void *)il2cpp_runtime_helper_022b2b80(pIVar3,lVar4,__dest_00);
  *(undefined8 *)(__s + -8) = 0x263d458;
  memcpy(__s,__src,__n);
  *(undefined8 *)(__s + -8) = 0x263d466;
  memcpy(__dest_00,__s,__n);
  __dest = local_40;
  *(undefined8 *)(__s + -8) = 0x263d475;
  UVar5.klass = memcpy(__dest,__dest_00,__n);
  UVar5.monitor = extraout_RDX;
  return UVar5;
}


