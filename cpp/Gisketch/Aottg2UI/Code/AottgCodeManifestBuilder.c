// Type: Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgCodeManifestBuilder.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$Build
// il2cpp: Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Build (System_String_o* selectedScreenId, Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o* theme, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x5363830

Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *
Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Build
          (System_String_o *selectedScreenId,Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *theme,
          Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *catalog;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *pGVar1;
  MethodInfo *in_R8;
  
  catalog = Gisketch_Aottg2UI_Code_AottgCodeCatalog__DiscoverFresh((MethodInfo *)selectedScreenId);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Build_5263860
                     (catalog,selectedScreenId,theme,actions,in_R8);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$Build
// il2cpp: Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Build (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o* catalog, System_String_o* selectedScreenId, Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o* theme, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x5363860

Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *
Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Build_5263860
          (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *catalog,System_String_o *selectedScreenId,
          Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *theme,
          Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,MethodInfo *method)

{
  System_Collections_Generic_List_AottgScreenEntry__o *pSVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar4;
  int32_t iVar5;
  uint32_t length;
  VirtualInvokeData *pVVar6;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *pGVar7;
  Il2CppObject *pIVar8;
  Gisketch_Aottg2UI_Code_AottgScreen_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *pGVar10;
  ulong uVar11;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  ulong uVar12;
  long lVar13;
  
  if (Il2CppMethodInitialized_075429c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder_Instance_AottgScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchManifestDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgScreenEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_AottgScreenEntry);
    Il2CppMethodInitialized_075429c9 = '\x01';
  }
  if (catalog == (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)0x0) {
    return (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0;
  }
  pSVar1 = (catalog->fields)._screens;
  if (pSVar1 != (System_Collections_Generic_List_AottgScreenEntry__o *)0x0) {
    pIVar2 = (Il2CppClass *)pSVar1->klass;
    uVar12 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar12 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar13 = 0;
      do {
        if (*(System_Collections_Generic_IReadOnlyCollection_AottgScreenEntry__c **)
             ((long)&pIVar3->interfaceType + lVar13) ==
            TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgScreenEntry) {
          pVVar6 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar13);
          goto label_05363941;
        }
        lVar13 = lVar13 + 0x10;
      } while (uVar12 * 0x10 != lVar13);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)pSVar1,
                        (Il2CppClass *)
                        TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgScreenEntry,0);
label_05363941:
    iVar5 = (*pVVar6->methodPtr)((Il2CppObject *)pSVar1,pVVar6->method);
    if (iVar5 == 0) {
      return (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0;
    }
    if (actions != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      if (Il2CppMethodInitialized_075429b9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_Clear
                  );
        Il2CppMethodInitialized_075429b9 = '\x01';
      }
      __this = (System_Collections_Generic_Dictionary_object__object__o *)(actions->fields)._actions;
      if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05363cb8;
      System_Collections_Generic_Dictionary_object__object___Clear
                (__this,(MethodInfo_4AAD690 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_Clear
                );
      (actions->fields)._next = 0;
    }
    pSVar1 = (catalog->fields)._screens;
    if (pSVar1 != (System_Collections_Generic_List_AottgScreenEntry__o *)0x0) {
      pIVar2 = (Il2CppClass *)pSVar1->klass;
      uVar12 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar12 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar13 = 0;
        do {
          if (*(System_Collections_Generic_IReadOnlyCollection_AottgScreenEntry__c **)
               ((long)&pIVar3->interfaceType + lVar13) ==
              TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgScreenEntry) {
            pVVar6 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar13);
            goto label_05363a08;
          }
          lVar13 = lVar13 + 0x10;
        } while (uVar12 * 0x10 != lVar13);
      }
      pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                         ((Il2CppObject *)pSVar1,
                          (Il2CppClass *)
                          TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgScreenEntry,0);
label_05363a08:
      length = (*pVVar6->methodPtr)((Il2CppObject *)pSVar1,pVVar6->method);
      pGVar7 = (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *)
               SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array,length);
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *)0x0) {
        if (0 < (int)pGVar7->max_length) {
          uVar12 = 0;
          do {
            pSVar1 = (catalog->fields)._screens;
            if (pSVar1 == (System_Collections_Generic_List_AottgScreenEntry__o *)0x0) goto label_05363cb8;
            pIVar2 = (Il2CppClass *)pSVar1->klass;
            uVar11 = (ulong)(pIVar2->_2).interface_offsets_count;
            if (uVar11 != 0) {
              pIVar3 = (pIVar2->_1).interfaceOffsets;
              lVar13 = 0;
              do {
                if (*(System_Collections_Generic_IReadOnlyList_AottgScreenEntry__c **)
                     ((long)&pIVar3->interfaceType + lVar13) ==
                    TypeInfo_System_Collections_Generic_IReadOnlyList_AottgScreenEntry) {
                  pVVar6 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar13);
                  goto label_05363ac3;
                }
                lVar13 = lVar13 + 0x10;
              } while (uVar11 * 0x10 != lVar13);
            }
            pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                               ((Il2CppObject *)pSVar1,
                                (Il2CppClass *)
                                TypeInfo_System_Collections_Generic_IReadOnlyList_AottgScreenEntry,0);
label_05363ac3:
            pIVar8 = (*pVVar6->methodPtr)((Il2CppObject *)pSVar1,(int32_t)uVar12,pVVar6->method);
            if ((pIVar8 == (Il2CppObject *)0x0) ||
               (__this_00 = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance_object_
                                      (pIVar8[5].monitor,
                                       (MethodInfo_3488260 *)
                                       MethodInfo_Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder_Instance_AottgScreen
                                      ), __this_00 == (Gisketch_Aottg2UI_Code_AottgScreen_o *)0x0))
            goto label_05363cb8;
            pGVar9 = Gisketch_Aottg2UI_Code_AottgScreen__BuildDefinition
                               (__this_00,(System_String_o *)pIVar8[1].klass,pIVar8[1].monitor,
                                (System_String_o *)pIVar8[2].klass,pIVar8[2].monitor,
                                (System_String_o *)pIVar8[3].klass,pIVar8[3].monitor,
                                (System_String_o *)pIVar8[4].klass,pIVar8[4].monitor,
                                *(int32_t *)&pIVar8[5].klass,actions,(MethodInfo *)0x0);
            if ((uint)pGVar7->max_length <= uVar12) {
              ThrowIndexOutOfRangeException();
            }
            pGVar7->m_Items[uVar12] = pGVar9;
            Il2CppCodeGenWriteBarrier(pGVar7->m_Items + uVar12);
            uVar12 = uVar12 + 1;
          } while ((long)uVar12 < (long)(int)pGVar7->max_length);
        }
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchManifestDefinition);
        (__this_01->fields).schemaVersion = 1;
        System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
        (__this_01->fields).schemaVersion = 1;
        bVar4 = Gisketch_Aottg2UI_Code_AottgCodeCatalog__HasScreen(catalog,selectedScreenId,method_00);
        if (bVar4) {
label_05363c3b:
          (__this_01->fields).initialScreen = selectedScreenId;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).initialScreen);
          (__this_01->fields).theme = theme;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).theme);
          (__this_01->fields).screens = pGVar7;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).screens);
          pGVar10 = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialogs(catalog,actions,method_01);
          (__this_01->fields).dialogs = pGVar10;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).dialogs);
          pGVar10 = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildPopovers(catalog,actions,method_02);
          (__this_01->fields).popovers = pGVar10;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).popovers);
          return __this_01;
        }
        pSVar1 = (catalog->fields)._screens;
        if (pSVar1 != (System_Collections_Generic_List_AottgScreenEntry__o *)0x0) {
          pIVar2 = (Il2CppClass *)pSVar1->klass;
          uVar12 = (ulong)(pIVar2->_2).interface_offsets_count;
          if (uVar12 != 0) {
            pIVar3 = (pIVar2->_1).interfaceOffsets;
            lVar13 = 0;
            do {
              if (*(System_Collections_Generic_IReadOnlyList_AottgScreenEntry__c **)
                   ((long)&pIVar3->interfaceType + lVar13) ==
                  TypeInfo_System_Collections_Generic_IReadOnlyList_AottgScreenEntry) {
                pVVar6 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar13);
                goto label_05363c11;
              }
              lVar13 = lVar13 + 0x10;
            } while (uVar12 * 0x10 != lVar13);
          }
          pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                             ((Il2CppObject *)pSVar1,
                              (Il2CppClass *)
                              TypeInfo_System_Collections_Generic_IReadOnlyList_AottgScreenEntry,0);
label_05363c11:
          pIVar8 = (*pVVar6->methodPtr)((Il2CppObject *)pSVar1,0,pVVar6->method);
          if ((pIVar8 != (Il2CppObject *)0x0) &&
             (__this_01 != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0)) {
            selectedScreenId = (System_String_o *)pIVar8[1].klass;
            goto label_05363c3b;
          }
        }
      }
    }
  }
label_05363cb8:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$BuildDialogs
// il2cpp: Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array* Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialogs (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o* catalog, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x5363cd0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5363d5d: nop dword ptr [rax]

Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *
Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialogs
          (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *catalog,
          Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,MethodInfo *method)

{
  System_Collections_Generic_List_AottgDialogEntry__o *pSVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  uint32_t length;
  VirtualInvokeData *pVVar4;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *pGVar5;
  Il2CppObject *pIVar6;
  Gisketch_Aottg2UI_Code_AottgDialog_o *__this;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *pGVar7;
  ulong uVar8;
  long lVar9;
  MethodInfo *in_R8;
  ulong uVar10;
  
  if (Il2CppMethodInitialized_075429ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder_Instance_AottgDialog);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgDialogEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_AottgDialogEntry);
    Il2CppMethodInitialized_075429ca = '\x01';
  }
  if ((catalog != (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)0x0) &&
     (pSVar1 = (catalog->fields)._dialogs,
     pSVar1 != (System_Collections_Generic_List_AottgDialogEntry__o *)0x0)) {
    pIVar2 = (Il2CppClass *)pSVar1->klass;
    uVar10 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar10 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar9 = 0;
      do {
        if (*(System_Collections_Generic_IReadOnlyCollection_AottgDialogEntry__c **)
             ((long)&pIVar3->interfaceType + lVar9) ==
            TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgDialogEntry) {
          pVVar4 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar9);
          goto label_05363d91;
        }
        lVar9 = lVar9 + 0x10;
      } while (uVar10 * 0x10 != lVar9);
    }
    pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)pSVar1,
                        (Il2CppClass *)
                        TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgDialogEntry,0);
label_05363d91:
    length = (*pVVar4->methodPtr)((Il2CppObject *)pSVar1,pVVar4->method);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array,length);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)0x0) {
      if (0 < (int)pGVar5->max_length) {
        uVar10 = 0;
        do {
          pSVar1 = (catalog->fields)._dialogs;
          if (pSVar1 == (System_Collections_Generic_List_AottgDialogEntry__o *)0x0) goto label_05363ec7;
          pIVar2 = (Il2CppClass *)pSVar1->klass;
          uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
          if (uVar8 != 0) {
            pIVar3 = (pIVar2->_1).interfaceOffsets;
            lVar9 = 0;
            do {
              if (*(System_Collections_Generic_IReadOnlyList_AottgDialogEntry__c **)
                   ((long)&pIVar3->interfaceType + lVar9) ==
                  TypeInfo_System_Collections_Generic_IReadOnlyList_AottgDialogEntry) {
                pVVar4 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar9);
                goto label_05363e43;
              }
              lVar9 = lVar9 + 0x10;
            } while (uVar8 * 0x10 != lVar9);
          }
          pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                             ((Il2CppObject *)pSVar1,
                              (Il2CppClass *)
                              TypeInfo_System_Collections_Generic_IReadOnlyList_AottgDialogEntry,0);
label_05363e43:
          pIVar6 = (*pVVar4->methodPtr)((Il2CppObject *)pSVar1,(int32_t)uVar10,pVVar4->method);
          if (pIVar6 == (Il2CppObject *)0x0) goto label_05363ec7;
          __this = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance_object_
                             (pIVar6[1].monitor,
                              (MethodInfo_3488260 *)
                              MethodInfo_Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder_Instance_AottgDialog)
          ;
          if (__this == (Gisketch_Aottg2UI_Code_AottgDialog_o *)0x0) goto label_05363ec7;
          pGVar7 = Gisketch_Aottg2UI_Code_AottgDialog__BuildDefinition
                             (__this,(System_String_o *)pIVar6[1].klass,
                              (Gisketch_Aottg2UI_Code_AottgDialogAttribute_o *)pIVar6[2].klass,actions,in_R8);
          if ((uint)pGVar5->max_length <= uVar10) {
            ThrowIndexOutOfRangeException();
          }
          pGVar5->m_Items[uVar10] = pGVar7;
          Il2CppCodeGenWriteBarrier(pGVar5->m_Items + uVar10);
          uVar10 = uVar10 + 1;
        } while ((long)uVar10 < (long)(int)pGVar5->max_length);
      }
      return pGVar5;
    }
  }
label_05363ec7:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$BuildDialog
// il2cpp: Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialog (System_String_o* id, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x5364410

Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *
Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialog
          (System_String_o *id,Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *catalog;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *pGVar1;
  MethodInfo *in_RCX;
  
  catalog = Gisketch_Aottg2UI_Code_AottgCodeCatalog__DiscoverFresh((MethodInfo *)id);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialog_5264440(catalog,id,actions,in_RCX);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$BuildDialog
// il2cpp: Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialog (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o* catalog, System_String_o* id, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x5364440
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53644cc: nop dword ptr [rax]
// asm:   0x53645df: jmp 0x536462e

Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *
Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialog_5264440
          (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *catalog,System_String_o *id,
          Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  bool bVar3;
  int32_t iVar4;
  VirtualInvokeData *pVVar5;
  Il2CppObject *pIVar6;
  Gisketch_Aottg2UI_Code_AottgDialog_o *__this;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *pGVar7;
  ulong uVar8;
  MethodInfo *method_00;
  System_Collections_Generic_List_AottgDialogEntry__o *pSVar9;
  long lVar10;
  MethodInfo *in_R8;
  int32_t iVar11;
  
  if (Il2CppMethodInitialized_075429cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder_Instance_AottgDialog);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgDialogEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_AottgDialogEntry);
    Il2CppMethodInitialized_075429cb = '\x01';
  }
  if ((catalog == (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)0x0) ||
     (bVar3 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0), bVar3)) {
    return (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0;
  }
  pSVar9 = (catalog->fields)._dialogs;
  if (pSVar9 != (System_Collections_Generic_List_AottgDialogEntry__o *)0x0) {
    iVar11 = 0;
    do {
      pIVar1 = (Il2CppClass *)pSVar9->klass;
      uVar8 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar8 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar10 = 0;
        do {
          if (*(System_Collections_Generic_IReadOnlyCollection_AottgDialogEntry__c **)
               ((long)&pIVar2->interfaceType + lVar10) ==
              TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgDialogEntry) {
            pVVar5 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar10);
            goto label_05364523;
          }
          lVar10 = lVar10 + 0x10;
        } while (uVar8 * 0x10 != lVar10);
      }
      pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                         ((Il2CppObject *)pSVar9,
                          (Il2CppClass *)
                          TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgDialogEntry,0);
label_05364523:
      iVar4 = (*pVVar5->methodPtr)((Il2CppObject *)pSVar9,pVVar5->method);
      if (iVar4 <= iVar11) {
        return (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0;
      }
      pSVar9 = (catalog->fields)._dialogs;
      if (pSVar9 == (System_Collections_Generic_List_AottgDialogEntry__o *)0x0) break;
      pIVar1 = (Il2CppClass *)pSVar9->klass;
      uVar8 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar8 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar10 = 0;
        do {
          if (*(System_Collections_Generic_IReadOnlyList_AottgDialogEntry__c **)
               ((long)&pIVar2->interfaceType + lVar10) ==
              TypeInfo_System_Collections_Generic_IReadOnlyList_AottgDialogEntry) {
            pVVar5 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar10);
            goto label_053645a3;
          }
          lVar10 = lVar10 + 0x10;
        } while (uVar8 * 0x10 != lVar10);
      }
      pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                         ((Il2CppObject *)pSVar9,
                          (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyList_AottgDialogEntry,0)
      ;
label_053645a3:
      pIVar6 = (*pVVar5->methodPtr)((Il2CppObject *)pSVar9,iVar11,pVVar5->method);
      if (pIVar6 == (Il2CppObject *)0x0) break;
      bVar3 = System_String__Equals_52ffe30((System_String_o *)pIVar6[1].klass,id,5,(MethodInfo *)0x0);
      if (bVar3) {
        if (actions != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgActionRegistry__ClearOwner(actions,id,method_00);
        }
        __this = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance_object_
                           (pIVar6[1].monitor,
                            (MethodInfo_3488260 *)
                            MethodInfo_Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder_Instance_AottgDialog);
        if (__this != (Gisketch_Aottg2UI_Code_AottgDialog_o *)0x0) {
          pGVar7 = Gisketch_Aottg2UI_Code_AottgDialog__BuildDefinition
                             (__this,(System_String_o *)pIVar6[1].klass,
                              (Gisketch_Aottg2UI_Code_AottgDialogAttribute_o *)pIVar6[2].klass,actions,in_R8);
          return pGVar7;
        }
        break;
      }
      iVar11 = iVar11 + 1;
      pSVar9 = (catalog->fields)._dialogs;
    } while (pSVar9 != (System_Collections_Generic_List_AottgDialogEntry__o *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$BuildPopovers
// il2cpp: Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array* Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildPopovers (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o* catalog, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x5363ee0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5363f6d: nop dword ptr [rax]

Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *
Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildPopovers
          (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *catalog,
          Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,MethodInfo *method)

{
  System_Collections_Generic_List_AottgPopoverEntry__o *pSVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  uint32_t length;
  VirtualInvokeData *pVVar4;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *pGVar5;
  Il2CppObject *pIVar6;
  Gisketch_Aottg2UI_Code_AottgPopover_o *__this;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *pGVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  if (Il2CppMethodInitialized_075429cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder_Instance_AottgPopover);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgPopoverEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_AottgPopoverEntry);
    Il2CppMethodInitialized_075429cc = '\x01';
  }
  if ((catalog != (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)0x0) &&
     (pSVar1 = (catalog->fields)._popovers,
     pSVar1 != (System_Collections_Generic_List_AottgPopoverEntry__o *)0x0)) {
    pIVar2 = (Il2CppClass *)pSVar1->klass;
    uVar10 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar10 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar9 = 0;
      do {
        if (*(System_Collections_Generic_IReadOnlyCollection_AottgPopoverEntry__c **)
             ((long)&pIVar3->interfaceType + lVar9) ==
            TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgPopoverEntry) {
          pVVar4 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar9);
          goto label_05363fa1;
        }
        lVar9 = lVar9 + 0x10;
      } while (uVar10 * 0x10 != lVar9);
    }
    pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)pSVar1,
                        (Il2CppClass *)
                        TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgPopoverEntry,0);
label_05363fa1:
    length = (*pVVar4->methodPtr)((Il2CppObject *)pSVar1,pVVar4->method);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array,length);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)0x0) {
      if (0 < (int)pGVar5->max_length) {
        uVar10 = 0;
        do {
          pSVar1 = (catalog->fields)._popovers;
          if (pSVar1 == (System_Collections_Generic_List_AottgPopoverEntry__o *)0x0) goto label_053640da;
          pIVar2 = (Il2CppClass *)pSVar1->klass;
          uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
          if (uVar8 != 0) {
            pIVar3 = (pIVar2->_1).interfaceOffsets;
            lVar9 = 0;
            do {
              if (*(System_Collections_Generic_IReadOnlyList_AottgPopoverEntry__c **)
                   ((long)&pIVar3->interfaceType + lVar9) ==
                  TypeInfo_System_Collections_Generic_IReadOnlyList_AottgPopoverEntry) {
                pVVar4 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar9);
                goto label_05364053;
              }
              lVar9 = lVar9 + 0x10;
            } while (uVar8 * 0x10 != lVar9);
          }
          pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                             ((Il2CppObject *)pSVar1,
                              (Il2CppClass *)
                              TypeInfo_System_Collections_Generic_IReadOnlyList_AottgPopoverEntry,0);
label_05364053:
          pIVar6 = (*pVVar4->methodPtr)((Il2CppObject *)pSVar1,(int32_t)uVar10,pVVar4->method);
          if (pIVar6 == (Il2CppObject *)0x0) goto label_053640da;
          __this = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance_object_
                             (pIVar6[1].monitor,
                              (MethodInfo_3488260 *)
                              MethodInfo_Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder_Instance_AottgPopover
                             );
          if (__this == (Gisketch_Aottg2UI_Code_AottgPopover_o *)0x0) goto label_053640da;
          pGVar7 = Gisketch_Aottg2UI_Code_AottgPopover__BuildDefinition
                             (__this,(System_String_o *)pIVar6[1].klass,
                              (Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o *)pIVar6[2].klass,actions,
                              (MethodInfo *)0x0);
          if ((uint)pGVar5->max_length <= uVar10) {
            ThrowIndexOutOfRangeException();
          }
          pGVar5->m_Items[uVar10] = pGVar7;
          Il2CppCodeGenWriteBarrier(pGVar5->m_Items + uVar10);
          uVar10 = uVar10 + 1;
        } while ((long)uVar10 < (long)(int)pGVar5->max_length);
      }
      return pGVar5;
    }
  }
label_053640da:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$Instance<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance_object_ (System_Type_o* type, const MethodInfo_3488260* method);
// 0x3588260
// eh: try 0x358827d..0x35882c5 -> pad 0x35882d3 catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x35882ea..0x358839d -> pad 0x358839d (+1 call sites) cleanup
// eh: try 0x35883a0..0x35883a5 -> pad 0x35883ad catch (...) [compiler noexcept guard]
// asm: 57 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x35882d3: mov rbx, rax
// asm:   0x35882d6: cmp edx, 1
// asm:   0x35882d9: jne 0x35883a5
// asm:   0x35882df: mov rdi, rbx
// asm:   0x35882e2: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x35882e7: mov rbx, rax
// asm:   0x35882ea: lea rdi, [rip + 0x3cefdcf]  ; TypeInfo_System_Exception
// asm:   0x35882f1: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x35882f6: mov rcx, qword ptr [rbx]
// asm:   0x35882f9: mov rsi, qword ptr [rcx]
// asm:   0x35882fc: mov rdi, rax
// asm:   0x35882ff: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x3588304: test al, al
// asm:   0x3588306: je 0x358837c
// asm:   0x3588308: mov r12, qword ptr [rbx]
// asm:   0x358830b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x3588310: mov rdi, r14
// asm:   0x3588313: call 0x2ab87e0  ; NullCheck()
// asm:   0x3588318: mov rax, qword ptr [r14]
// asm:   0x358831b: mov rsi, qword ptr [rax + 0x2e0]
// asm:   0x3588322: mov rdi, r14
// asm:   0x3588325: call qword ptr [rax + 0x2d8]  ; vtable slot 26
// asm:   0x358832b: mov rbx, rax
// asm:   0x358832e: lea rdi, [rip + 0x3d4bef3]  ; "AoTTG UI type needs a public parameterless constructor: "
// asm:   0x3588335: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x358833a: mov rdi, rax
// asm:   0x358833d: mov rsi, rbx
// asm:   0x3588340: xor edx, edx
// asm:   0x3588342: call 0x53f0320  ; System_String__Concat()
// asm:   0x3588347: mov r14, rax
// asm:   0x358834a: lea rdi, [rip + 0x3cf1c2f]  ; TypeInfo_System_InvalidOperationException
// asm:   0x3588351: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x3588356: mov rdi, rax
// asm:   0x3588359: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x358835e: mov rbx, rax
// asm:   0x3588361: mov rdi, rax
// asm:   0x3588364: mov rsi, r14
// asm:   0x3588367: mov rdx, r12
// asm:   0x358836a: xor ecx, ecx
// asm:   0x358836c: call 0x55b9aa0  ; System_InvalidOperationException___ctor()
// asm:   0x3588371: mov rdi, rbx
// asm:   0x3588374: mov rsi, r15
// asm:   0x3588377: call 0x30d6220  ; il2cpp_codegen_raise_exception()
// asm:   0x358837c: mov edi, 8
// asm:   0x3588381: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x3588386: mov rcx, qword ptr [rbx]
// asm:   0x3588389: mov qword ptr [rax], rcx
// asm:   0x358838c: lea rsi, [rip + 0x38a516d]
// asm:   0x3588393: mov rdi, rax
// asm:   0x3588396: xor edx, edx
// asm:   0x3588398: call 0x6e255c0  ; __cxa_throw()
// asm:   0x358839d: mov rbx, rax
// asm:   0x35883a0: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x35883a5: mov rdi, rbx
// asm:   0x35883a8: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x35883ad: mov rdi, rax
// asm:   0x35883b0: call 0x2ab61e0  ; __clang_call_terminate()

Il2CppObject *
Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance_object_
          (System_Type_o *type,MethodInfo_3488260 *method)

{
  Il2CppObject *obj;
  Il2CppClass *klass;
  Il2CppObject *pIVar1;
  
  if (method->rgctx_data == (MethodInfo_3488260_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  obj = System_Activator__CreateInstance_54ec050(type,(MethodInfo *)0x0);
  klass = method->rgctx_data->_0_T;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  if (obj == (Il2CppObject *)0x0) {
    pIVar1 = (Il2CppObject *)0x0;
  }
  else {
    pIVar1 = il2cpp_vm_Object_IsInst(obj,klass);
    if (pIVar1 == (Il2CppObject *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(obj,klass);
    }
  }
  return pIVar1;
}


// Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$Instance<__Il2CppFullySharedGenericType>
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance___Il2CppFullySharedGenericType_ (System_Type_o* type, const MethodInfo_34883C0* method);
// 0x35883c0
// eh: try 0x3588407..0x358843e -> pad 0x3588469 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x3588482..0x3588539 -> pad 0x3588539 (+1 call sites) cleanup
// eh: try 0x358853c..0x3588541 -> pad 0x3588549 catch (...) [compiler noexcept guard]
// asm: 59 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x3588469: jmp 0x358846b
// asm:   0x358846b: mov rbx, rax
// asm:   0x358846e: cmp edx, 1
// asm:   0x3588471: jne 0x3588541
// asm:   0x3588477: mov rdi, rbx
// asm:   0x358847a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x358847f: mov rbx, rax
// asm:   0x3588482: lea rdi, [rip + 0x3cefc37]  ; TypeInfo_System_Exception
// asm:   0x3588489: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x358848e: mov rcx, qword ptr [rbx]
// asm:   0x3588491: mov rsi, qword ptr [rcx]
// asm:   0x3588494: mov rdi, rax
// asm:   0x3588497: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x358849c: test al, al
// asm:   0x358849e: je 0x3588518
// asm:   0x35884a0: mov r14, qword ptr [rbx]
// asm:   0x35884a3: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x35884a8: mov rbx, qword ptr [rbp - 0x30]
// asm:   0x35884ac: mov rdi, rbx
// asm:   0x35884af: call 0x2ab87e0  ; NullCheck()
// asm:   0x35884b4: mov rax, qword ptr [rbx]
// asm:   0x35884b7: mov rsi, qword ptr [rax + 0x2e0]
// asm:   0x35884be: mov rdi, rbx
// asm:   0x35884c1: call qword ptr [rax + 0x2d8]  ; vtable slot 26
// asm:   0x35884c7: mov rbx, rax
// asm:   0x35884ca: lea rdi, [rip + 0x3d4bd57]  ; "AoTTG UI type needs a public parameterless constructor: "
// asm:   0x35884d1: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x35884d6: mov rdi, rax
// asm:   0x35884d9: mov rsi, rbx
// asm:   0x35884dc: xor edx, edx
// asm:   0x35884de: call 0x53f0320  ; System_String__Concat()
// asm:   0x35884e3: mov r12, rax
// asm:   0x35884e6: lea rdi, [rip + 0x3cf1a93]  ; TypeInfo_System_InvalidOperationException
// asm:   0x35884ed: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x35884f2: mov rdi, rax
// asm:   0x35884f5: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x35884fa: mov rbx, rax
// asm:   0x35884fd: mov rdi, rax
// asm:   0x3588500: mov rsi, r12
// asm:   0x3588503: mov rdx, r14
// asm:   0x3588506: xor ecx, ecx
// asm:   0x3588508: call 0x55b9aa0  ; System_InvalidOperationException___ctor()
// asm:   0x358850d: mov rdi, rbx
// asm:   0x3588510: mov rsi, r15
// asm:   0x3588513: call 0x30d6220  ; il2cpp_codegen_raise_exception()
// asm:   0x3588518: mov edi, 8
// asm:   0x358851d: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x3588522: mov rcx, qword ptr [rbx]
// asm:   0x3588525: mov qword ptr [rax], rcx
// asm:   0x3588528: lea rsi, [rip + 0x38a4fd1]
// asm:   0x358852f: mov rdi, rax
// asm:   0x3588532: xor edx, edx
// asm:   0x3588534: call 0x6e255c0  ; __cxa_throw()
// asm:   0x3588539: mov rbx, rax
// asm:   0x358853c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x3588541: mov rdi, rbx
// asm:   0x3588544: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x3588549: mov rdi, rax
// asm:   0x358854c: call 0x2ab61e0  ; __clang_call_terminate()

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance___Il2CppFullySharedGenericType_
          (System_Type_o *type,MethodInfo_34883C0 *method)

{
  long lVar1;
  Il2CppRGCTXData *pIVar2;
  Il2CppObject *pIVar3;
  Il2CppClass *klass;
  void *__src;
  MethodInfo *in_RDX;
  void *extraout_RDX;
  void *__dest;
  undefined1 *puVar4;
  ulong __n;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o UVar5;
  undefined8 uStack_40;
  System_Type_o *local_38;
  
  pIVar2 = (in_RDX->field7_0x38).rgctx_data;
  if (pIVar2 == (Il2CppRGCTXData *)0x0) {
    uStack_40 = 0x35883e8;
    il2cpp_codegen_rgctx_method_init(in_RDX);
    pIVar2 = (in_RDX->field7_0x38).rgctx_data;
  }
  __n = (ulong)(pIVar2->klass->_2).stack_slot_size;
  lVar1 = -(__n + 0xf & 0xfffffffffffffff0);
  __dest = (void *)((long)&local_38 + lVar1);
  local_38 = type;
  *(undefined8 *)((long)&uStack_40 + lVar1) = 0x3588415;
  pIVar3 = System_Activator__CreateInstance_54ec050(type,(MethodInfo *)0x0);
  puVar4 = (undefined1 *)((long)&local_38 + lVar1);
  klass = ((in_RDX->field7_0x38).rgctx_data)->klass;
  if (((klass->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((long)&uStack_40 + lVar1) = 0x3588430;
    klass = il2cpp_codegen_class_init_checked(klass);
    puVar4 = (undefined1 *)((long)&local_38 + lVar1);
  }
  *(undefined8 *)(puVar4 + -8) = 0x358843e;
  __src = (void *)il2cpp_runtime_helper_030d6290(pIVar3,klass,__dest);
  *(undefined8 *)(puVar4 + -8) = 0x358844c;
  memmove(__dest,__src,__n);
  *(undefined8 *)(puVar4 + -8) = 0x358845a;
  UVar5.klass = memcpy(method,__dest,__n);
  UVar5.monitor = extraout_RDX;
  return UVar5;
}


