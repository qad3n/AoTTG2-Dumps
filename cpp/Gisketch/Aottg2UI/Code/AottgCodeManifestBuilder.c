// Type: Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgCodeManifestBuilder.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$Build
// il2cpp: Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Build (System_String_o* selectedScreenId, Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o* theme, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x1818c32d0

Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *
Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Build
          (System_String_o *selectedScreenId,Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *theme,
          Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *catalog;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *pGVar1;
  
  catalog = Gisketch_Aottg2UI_Code_AottgCodeCatalog__DiscoverFresh((MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Build_18c2f50
                     (catalog,selectedScreenId,theme,actions,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$Build
// il2cpp: Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Build (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o* catalog, System_String_o* selectedScreenId, Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o* theme, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x1818c2f50
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818c3073: mov edi, r13d
// asm:   0x1818c3076: mov eax, r13d
// asm:   0x1818c3079: nop dword ptr [rax]

Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *
Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Build_18c2f50
          (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *catalog,System_String_o *selectedScreenId,
          Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *theme,
          Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_List_AottgScreenEntry__o *pSVar2;
  System_Collections_Generic_Dictionary_string__Action_GisketchActionContext___o *__this;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  bool bVar5;
  ushort uVar6;
  uint uVar7;
  void *pvVar8;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *value;
  VirtualInvokeData *pVVar10;
  Il2CppObject *pIVar11;
  Gisketch_Aottg2UI_Code_AottgScreen_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *value_00;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *__this_01;
  longlong lVar12;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *pGVar13;
  ulonglong uVar9;
  
  if (Il2CppMethodInitialized_18434204c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder_Instance_AottgScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchManifestDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgScreenEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_AottgScreenEntry);
    Il2CppMethodInitialized_18434204c = '\x01';
  }
  if (catalog == (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)0x0) {
    return (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0;
  }
  pSVar2 = (catalog->fields)._screens;
  if (pSVar2 != (System_Collections_Generic_List_AottgScreenEntry__o *)0x0) {
    pvVar8 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)
                          TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgScreenEntry,
                        (Il2CppObject *)pSVar2);
    if ((int)pvVar8 == 0) {
      return (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0;
    }
    if (actions != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      if (Il2CppMethodInitialized_18434203c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_Clear
                  );
        Il2CppMethodInitialized_18434203c = '\x01';
      }
      __this = (actions->fields)._actions;
      if (__this == (System_Collections_Generic_Dictionary_string__Action_GisketchActionContext___o *)0x0)
      goto label_1818c32c1;
      System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                 (MethodInfo_13BF1C0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_Action_GisketchActionContext_Clear);
      (actions->fields)._next = 0;
    }
    pSVar2 = (catalog->fields)._screens;
    if (pSVar2 != (System_Collections_Generic_List_AottgScreenEntry__o *)0x0) {
      pvVar8 = InterfaceInvoker0_Invoke
                         (0,(Il2CppClass *)
                            TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgScreenEntry,
                          (Il2CppObject *)pSVar2);
      value = (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *)
              SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array,(uint32_t)pvVar8);
      uVar9 = 0;
      if (value != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *)0x0) {
        while (uVar7 = (uint)uVar9, (int)uVar7 < (int)value->max_length) {
          pSVar2 = (catalog->fields)._screens;
          if (pSVar2 == (System_Collections_Generic_List_AottgScreenEntry__o *)0x0) goto label_1818c32c1;
          pIVar3 = (Il2CppClass *)pSVar2->klass;
          uVar1 = (pIVar3->_2).interface_offsets_count;
          if (uVar1 != 0) {
            pIVar4 = (pIVar3->_1).interfaceOffsets;
            uVar9 = 0;
            do {
              if (pIVar4[uVar9].interfaceType ==
                  (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyList_AottgScreenEntry) {
                pVVar10 = pIVar3->vtable + pIVar4[uVar9].offset;
                goto label_1818c30e6;
              }
              uVar6 = (short)uVar9 + 1;
              uVar9 = (ulonglong)uVar6;
            } while (uVar6 < uVar1);
          }
          pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                              ((Il2CppObject *)pSVar2,
                               (Il2CppClass *)
                               TypeInfo_System_Collections_Generic_IReadOnlyList_AottgScreenEntry,0);
label_1818c30e6:
          pIVar11 = (*pVVar10->methodPtr)((Il2CppObject *)pSVar2,uVar7,pVVar10->method);
          if ((pIVar11 == (Il2CppObject *)0x0) ||
             (__this_00 = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance_object_
                                    (pIVar11[5].monitor,
                                     (MethodInfo_68B7A0 *)
                                     MethodInfo_Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder_Instance_AottgScreen
                                    ), __this_00 == (Gisketch_Aottg2UI_Code_AottgScreen_o *)0x0))
          goto label_1818c32c1;
          value_00 = Gisketch_Aottg2UI_Code_AottgScreen__BuildDefinition
                               (__this_00,(System_String_o *)pIVar11[1].klass,pIVar11[1].monitor,
                                (System_String_o *)pIVar11[2].klass,pIVar11[2].monitor,
                                (System_String_o *)pIVar11[3].klass,pIVar11[3].monitor,
                                (System_String_o *)pIVar11[4].klass,pIVar11[4].monitor,
                                *(int32_t *)&pIVar11[5].klass,actions,(MethodInfo *)0x0);
          if ((uint)value->max_length <= uVar7) {
            ThrowIndexOutOfRangeException();
          }
          value->m_Items[(int)uVar7] = value_00;
          Il2CppCodeGenWriteBarrier(value->m_Items + (int)uVar7,value_00);
          uVar9 = (ulonglong)(uVar7 + 1);
        }
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchManifestDefinition);
        (__this_01->fields).schemaVersion = 1;
        System_Configuration_ConfigurationCollectionAttribute___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_01,(MethodInfo *)0x0);
        if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
          (__this_01->fields).schemaVersion = 1;
          bVar5 = Gisketch_Aottg2UI_Code_AottgCodeCatalog__HasScreen
                            (catalog,selectedScreenId,(MethodInfo *)0x0);
          if (!bVar5) {
            pSVar2 = (catalog->fields)._screens;
            if ((pSVar2 == (System_Collections_Generic_List_AottgScreenEntry__o *)0x0) ||
               (lVar12 = il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_Generic_IReadOnlyList_AottgScreenEntry,
                                       pSVar2,0), lVar12 == 0)) goto label_1818c32c1;
            selectedScreenId = *(System_String_o **)(lVar12 + 0x10);
          }
          (__this_01->fields).initialScreen = selectedScreenId;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).initialScreen,selectedScreenId);
          (__this_01->fields).theme = theme;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).theme,theme);
          (__this_01->fields).screens = value;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).screens,value);
          pGVar13 = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialogs
                              (catalog,actions,(MethodInfo *)0x0);
          (__this_01->fields).dialogs = pGVar13;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).dialogs,pGVar13);
          pGVar13 = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildPopovers
                              (catalog,actions,(MethodInfo *)0x0);
          (__this_01->fields).popovers = pGVar13;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).popovers,pGVar13);
          return __this_01;
        }
      }
    }
  }
label_1818c32c1:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$BuildDialogs
// il2cpp: Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array* Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialogs (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o* catalog, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x1818c2bb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818c2c59: nop dword ptr [rax]

Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *
Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialogs
          (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *catalog,
          Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_List_AottgDialogEntry__o *pSVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  ushort uVar5;
  uint uVar6;
  void *pvVar7;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *pGVar8;
  VirtualInvokeData *pVVar10;
  Il2CppObject *pIVar11;
  Gisketch_Aottg2UI_Code_AottgDialog_o *__this;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *value;
  ulonglong uVar9;
  
  if (Il2CppMethodInitialized_18434204d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder_Instance_AottgDialog);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgDialogEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_AottgDialogEntry);
    Il2CppMethodInitialized_18434204d = '\x01';
  }
  if ((catalog != (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)0x0) &&
     (pSVar2 = (catalog->fields)._dialogs,
     pSVar2 != (System_Collections_Generic_List_AottgDialogEntry__o *)0x0)) {
    pvVar7 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)
                          TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgDialogEntry,
                        (Il2CppObject *)pSVar2);
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array,(uint32_t)pvVar7);
    if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)0x0) {
      uVar9 = 0;
      while( true ) {
        uVar6 = (uint)uVar9;
        if ((int)pGVar8->max_length <= (int)uVar6) {
          return pGVar8;
        }
        pSVar2 = (catalog->fields)._dialogs;
        if (pSVar2 == (System_Collections_Generic_List_AottgDialogEntry__o *)0x0) break;
        pIVar3 = (Il2CppClass *)pSVar2->klass;
        uVar1 = (pIVar3->_2).interface_offsets_count;
        if (uVar1 != 0) {
          pIVar4 = (pIVar3->_1).interfaceOffsets;
          uVar9 = 0;
          do {
            if (pIVar4[uVar9].interfaceType ==
                (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyList_AottgDialogEntry) {
              pVVar10 = pIVar3->vtable + pIVar4[uVar9].offset;
              goto label_1818c2cc6;
            }
            uVar5 = (short)uVar9 + 1;
            uVar9 = (ulonglong)uVar5;
          } while (uVar5 < uVar1);
        }
        pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                            ((Il2CppObject *)pSVar2,
                             (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyList_AottgDialogEntry
                             ,0);
label_1818c2cc6:
        pIVar11 = (*pVVar10->methodPtr)((Il2CppObject *)pSVar2,uVar6,pVVar10->method);
        if (pIVar11 == (Il2CppObject *)0x0) break;
        __this = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance_object_
                           (pIVar11[1].monitor,
                            (MethodInfo_68B7A0 *)
                            MethodInfo_Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder_Instance_AottgDialog);
        if (__this == (Gisketch_Aottg2UI_Code_AottgDialog_o *)0x0) break;
        value = Gisketch_Aottg2UI_Code_AottgDialog__BuildDefinition
                          (__this,(System_String_o *)pIVar11[1].klass,
                           (Gisketch_Aottg2UI_Code_AottgDialogAttribute_o *)pIVar11[2].klass,actions,
                           (MethodInfo *)0x0);
        if ((uint)pGVar8->max_length <= uVar6) {
          ThrowIndexOutOfRangeException();
        }
        pGVar8->m_Items[(int)uVar6] = value;
        Il2CppCodeGenWriteBarrier(pGVar8->m_Items + (int)uVar6,value);
        uVar9 = (ulonglong)(uVar6 + 1);
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$BuildDialog
// il2cpp: Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialog (System_String_o* id, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x1818c2a50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818c2ace: nop 

Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *
Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialog
          (System_String_o *id,Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,MethodInfo *method)

{
  System_Collections_Generic_List_AottgDialogEntry__o *obj;
  bool bVar1;
  Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *pGVar2;
  void *pvVar3;
  longlong lVar4;
  Gisketch_Aottg2UI_Code_AottgDialog_o *__this;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *pGVar5;
  int iVar6;
  
  pGVar2 = Gisketch_Aottg2UI_Code_AottgCodeCatalog__DiscoverFresh((MethodInfo *)0x0);
  if (Il2CppMethodInitialized_18434204e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder_Instance_AottgDialog);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgDialogEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_AottgDialogEntry);
    Il2CppMethodInitialized_18434204e = '\x01';
  }
  if ((pGVar2 == (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)0x0) ||
     (bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0), bVar1)) {
    return (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0;
  }
  iVar6 = 0;
  do {
    obj = (pGVar2->fields)._dialogs;
    if (obj == (System_Collections_Generic_List_AottgDialogEntry__o *)0x0) {
label_1818c2b9f:
      ThrowNullReferenceException();
    }
    pvVar3 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)
                          TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgDialogEntry,
                        (Il2CppObject *)obj);
    if ((int)pvVar3 <= iVar6) {
      return (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0;
    }
    if (((pGVar2->fields)._dialogs == (System_Collections_Generic_List_AottgDialogEntry__o *)0x0) ||
       (lVar4 = il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_Generic_IReadOnlyList_AottgDialogEntry),
       lVar4 == 0)) goto label_1818c2b9f;
    bVar1 = System_String__Equals_196c550(*(System_String_o **)(lVar4 + 0x10),id,5,(MethodInfo *)0x0);
    if (bVar1) {
      if (actions != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgActionRegistry__ClearOwner(actions,id,(MethodInfo *)0x0);
      }
      __this = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance_object_
                         (*(System_Type_o **)(lVar4 + 0x18),
                          (MethodInfo_68B7A0 *)
                          MethodInfo_Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder_Instance_AottgDialog);
      if (__this != (Gisketch_Aottg2UI_Code_AottgDialog_o *)0x0) {
        pGVar5 = Gisketch_Aottg2UI_Code_AottgDialog__BuildDefinition
                           (__this,*(System_String_o **)(lVar4 + 0x10),
                            *(Gisketch_Aottg2UI_Code_AottgDialogAttribute_o **)(lVar4 + 0x20),actions,
                            (MethodInfo *)0x0);
        return pGVar5;
      }
      goto label_1818c2b9f;
    }
    iVar6 = iVar6 + 1;
  } while( true );
}


// Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$BuildDialog
// il2cpp: Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialog (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o* catalog, System_String_o* id, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x1818c28f0

Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *
Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialog_18c28f0
          (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *catalog,System_String_o *id,
          Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,MethodInfo *method)

{
  System_Collections_Generic_List_AottgDialogEntry__o *obj;
  bool bVar1;
  void *pvVar2;
  longlong lVar3;
  Gisketch_Aottg2UI_Code_AottgDialog_o *__this;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *pGVar4;
  int iVar5;
  
  if (Il2CppMethodInitialized_18434204e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder_Instance_AottgDialog);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgDialogEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_AottgDialogEntry);
    Il2CppMethodInitialized_18434204e = '\x01';
  }
  if ((catalog == (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)0x0) ||
     (bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0), bVar1)) {
    return (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0;
  }
  iVar5 = 0;
  do {
    obj = (catalog->fields)._dialogs;
    if (obj == (System_Collections_Generic_List_AottgDialogEntry__o *)0x0) {
label_1818c2a3f:
      ThrowNullReferenceException();
    }
    pvVar2 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)
                          TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgDialogEntry,
                        (Il2CppObject *)obj);
    if ((int)pvVar2 <= iVar5) {
      return (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0;
    }
    if (((catalog->fields)._dialogs == (System_Collections_Generic_List_AottgDialogEntry__o *)0x0) ||
       (lVar3 = il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_Generic_IReadOnlyList_AottgDialogEntry),
       lVar3 == 0)) goto label_1818c2a3f;
    bVar1 = System_String__Equals_196c550(*(System_String_o **)(lVar3 + 0x10),id,5,(MethodInfo *)0x0);
    if (bVar1) {
      if (actions != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgActionRegistry__ClearOwner(actions,id,(MethodInfo *)0x0);
      }
      __this = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance_object_
                         (*(System_Type_o **)(lVar3 + 0x18),
                          (MethodInfo_68B7A0 *)
                          MethodInfo_Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder_Instance_AottgDialog);
      if (__this != (Gisketch_Aottg2UI_Code_AottgDialog_o *)0x0) {
        pGVar4 = Gisketch_Aottg2UI_Code_AottgDialog__BuildDefinition
                           (__this,*(System_String_o **)(lVar3 + 0x10),
                            *(Gisketch_Aottg2UI_Code_AottgDialogAttribute_o **)(lVar3 + 0x20),actions,
                            (MethodInfo *)0x0);
        return pGVar4;
      }
      goto label_1818c2a3f;
    }
    iVar5 = iVar5 + 1;
  } while( true );
}


// Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$BuildPopovers
// il2cpp: Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array* Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildPopovers (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o* catalog, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x1818c2d80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818c2e29: nop dword ptr [rax]

Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *
Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildPopovers
          (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *catalog,
          Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_List_AottgPopoverEntry__o *pSVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  ushort uVar5;
  uint uVar6;
  void *pvVar7;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *pGVar8;
  VirtualInvokeData *pVVar10;
  Il2CppObject *pIVar11;
  Gisketch_Aottg2UI_Code_AottgPopover_o *__this;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *value;
  ulonglong uVar9;
  
  if (Il2CppMethodInitialized_18434204f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder_Instance_AottgPopover);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgPopoverEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_AottgPopoverEntry);
    Il2CppMethodInitialized_18434204f = '\x01';
  }
  if ((catalog != (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)0x0) &&
     (pSVar2 = (catalog->fields)._popovers,
     pSVar2 != (System_Collections_Generic_List_AottgPopoverEntry__o *)0x0)) {
    pvVar7 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)
                          TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgPopoverEntry,
                        (Il2CppObject *)pSVar2);
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array,(uint32_t)pvVar7);
    if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)0x0) {
      uVar9 = 0;
      while( true ) {
        uVar6 = (uint)uVar9;
        if ((int)pGVar8->max_length <= (int)uVar6) {
          return pGVar8;
        }
        pSVar2 = (catalog->fields)._popovers;
        if (pSVar2 == (System_Collections_Generic_List_AottgPopoverEntry__o *)0x0) break;
        pIVar3 = (Il2CppClass *)pSVar2->klass;
        uVar1 = (pIVar3->_2).interface_offsets_count;
        if (uVar1 != 0) {
          pIVar4 = (pIVar3->_1).interfaceOffsets;
          uVar9 = 0;
          do {
            if (pIVar4[uVar9].interfaceType ==
                (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyList_AottgPopoverEntry) {
              pVVar10 = pIVar3->vtable + pIVar4[uVar9].offset;
              goto label_1818c2e96;
            }
            uVar5 = (short)uVar9 + 1;
            uVar9 = (ulonglong)uVar5;
          } while (uVar5 < uVar1);
        }
        pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                            ((Il2CppObject *)pSVar2,
                             (Il2CppClass *)
                             TypeInfo_System_Collections_Generic_IReadOnlyList_AottgPopoverEntry,0);
label_1818c2e96:
        pIVar11 = (*pVVar10->methodPtr)((Il2CppObject *)pSVar2,uVar6,pVVar10->method);
        if (pIVar11 == (Il2CppObject *)0x0) break;
        __this = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance_object_
                           (pIVar11[1].monitor,
                            (MethodInfo_68B7A0 *)
                            MethodInfo_Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder_Instance_AottgPopover);
        if (__this == (Gisketch_Aottg2UI_Code_AottgPopover_o *)0x0) break;
        value = Gisketch_Aottg2UI_Code_AottgPopover__BuildDefinition
                          (__this,(System_String_o *)pIVar11[1].klass,
                           (Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o *)pIVar11[2].klass,actions,
                           (MethodInfo *)0x0);
        if ((uint)pGVar8->max_length <= uVar6) {
          ThrowIndexOutOfRangeException();
        }
        pGVar8->m_Items[(int)uVar6] = value;
        Il2CppCodeGenWriteBarrier(pGVar8->m_Items + (int)uVar6,value);
        uVar9 = (ulonglong)(uVar6 + 1);
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$Instance<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance_object_ (System_Type_o* type, const MethodInfo_68B7A0* method);
// 0x18068b7a0
// eh: try 0x18068b7db..0x18068b8b4 -> pad 0x183317ba0 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 62 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18068b82b: lea rcx, [rsp + 0x30]
// asm:   0x18068b830: call 0x180012a10  ; il2cpp_runtime_helper_180012a10()
// asm:   0x18068b835: mov rsi, rax
// asm:   0x18068b838: mov rbx, qword ptr [rsp + 0x50]
// asm:   0x18068b83d: mov rcx, rbx
// asm:   0x18068b840: call 0x180001e10  ; NullCheck()
// asm:   0x18068b845: mov ecx, 0x1a
// asm:   0x18068b84a: mov rdx, rbx
// asm:   0x18068b84d: call 0x180003110  ; il2cpp_runtime_helper_180003110()
// asm:   0x18068b852: mov rbx, rax
// asm:   0x18068b855: lea rcx, [rip + 0x3a1605c]  ; "AoTTG UI type needs a public parameterless constructor: "
// asm:   0x18068b85c: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18068b861: mov rcx, rax
// asm:   0x18068b864: xor r8d, r8d
// asm:   0x18068b867: mov rdx, rbx
// asm:   0x18068b86a: call 0x181969e50  ; System_String__Concat()
// asm:   0x18068b86f: mov rdi, rax
// asm:   0x18068b872: lea rcx, [rip + 0x3a22dd7]  ; TypeInfo_System_InvalidOperationException
// asm:   0x18068b879: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18068b87e: mov rcx, rax
// asm:   0x18068b881: call 0x1804170d0  ; il2cpp_runtime_helper_1804170d0()
// asm:   0x18068b886: mov rbx, rax
// asm:   0x18068b889: xor r9d, r9d
// asm:   0x18068b88c: mov r8, rsi
// asm:   0x18068b88f: mov rdx, rdi
// asm:   0x18068b892: mov rcx, rax
// asm:   0x18068b895: call 0x181b2aea0  ; System_InvalidOperationException___ctor()
// asm:   0x18068b89a: mov rdx, qword ptr [rsp + 0x58]
// asm:   0x18068b89f: mov rcx, rbx
// asm:   0x18068b8a2: call 0x1804170e0  ; il2cpp_codegen_raise_exception()
// asm:   0x183317ba0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317ba5: push rbx
// asm:   0x183317ba6: push rbp
// asm:   0x183317ba7: push rdi
// asm:   0x183317ba8: sub rsp, 0x20
// asm:   0x183317bac: mov rbp, rdx
// asm:   0x183317baf: mov rdi, qword ptr [rbp + 0x28]
// asm:   0x183317bb3: mov rax, qword ptr [rdi]
// asm:   0x183317bb6: mov rbx, qword ptr [rax]
// asm:   0x183317bb9: lea rcx, [rip + 0xd61398]  ; TypeInfo_System_Exception
// asm:   0x183317bc0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x183317bc5: mov rcx, rax
// asm:   0x183317bc8: mov rdx, rbx
// asm:   0x183317bcb: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183317bd0: test al, al
// asm:   0x183317bd2: je 0x183317bed
// asm:   0x183317bd4: mov rdx, qword ptr [rdi]
// asm:   0x183317bd7: lea rcx, [rbp + 0x30]
// asm:   0x183317bdb: call 0x180012a00  ; il2cpp_runtime_helper_180012a00()
// asm:   0x183317be0: nop 
// asm:   0x183317be1: movabs rax, 0
// asm:   0x183317beb: jmp 0x183317c05
// asm:   0x183317bed: mov rax, qword ptr [rdi]
// asm:   0x183317bf0: mov qword ptr [rbp + 0x20], rax
// asm:   0x183317bf4: lea rdx, [rip + 0xcc438d]
// asm:   0x183317bfb: lea rcx, [rbp + 0x20]
// asm:   0x183317bff: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x183317c05: add rsp, 0x20
// asm:   0x183317c09: pop rdi
// asm:   0x183317c0a: pop rbp
// asm:   0x183317c0b: pop rbx
// asm:   0x183317c0c: ret 

Il2CppObject *
Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance_object_
          (System_Type_o *type,MethodInfo_68B7A0 *method)

{
  Il2CppObject *obj;
  Il2CppClass *klass;
  Il2CppObject *pIVar1;
  
  if (method->rgctx_data == (MethodInfo_68B7A0_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  obj = System_Activator__CreateInstance_1b5a950(type,(MethodInfo *)0x0);
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
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance___Il2CppFullySharedGenericType_ (System_Type_o* type, const MethodInfo_68B610* method);
// 0x18068b610
// eh: try 0x18068b6b1..0x18068b6f3 -> pad 0x183317b30 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 62 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18068b724: lea rcx, [rbp + 0x10]
// asm:   0x18068b728: call 0x180012a10  ; il2cpp_runtime_helper_180012a10()
// asm:   0x18068b72d: mov rsi, rax
// asm:   0x18068b730: mov rbx, qword ptr [rbp + 0x50]
// asm:   0x18068b734: mov rcx, rbx
// asm:   0x18068b737: call 0x180001e10  ; NullCheck()
// asm:   0x18068b73c: mov ecx, 0x1a
// asm:   0x18068b741: mov rdx, rbx
// asm:   0x18068b744: call 0x180003110  ; il2cpp_runtime_helper_180003110()
// asm:   0x18068b749: mov rbx, rax
// asm:   0x18068b74c: lea rcx, [rip + 0x3a16165]  ; "AoTTG UI type needs a public parameterless constructor: "
// asm:   0x18068b753: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18068b758: mov rcx, rax
// asm:   0x18068b75b: xor r8d, r8d
// asm:   0x18068b75e: mov rdx, rbx
// asm:   0x18068b761: call 0x181969e50  ; System_String__Concat()
// asm:   0x18068b766: mov rdi, rax
// asm:   0x18068b769: lea rcx, [rip + 0x3a22ee0]  ; TypeInfo_System_InvalidOperationException
// asm:   0x18068b770: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18068b775: mov rcx, rax
// asm:   0x18068b778: call 0x1804170d0  ; il2cpp_runtime_helper_1804170d0()
// asm:   0x18068b77d: mov rbx, rax
// asm:   0x18068b780: xor r9d, r9d
// asm:   0x18068b783: mov r8, rsi
// asm:   0x18068b786: mov rdx, rdi
// asm:   0x18068b789: mov rcx, rax
// asm:   0x18068b78c: call 0x181b2aea0  ; System_InvalidOperationException___ctor()
// asm:   0x18068b791: mov rdx, qword ptr [rbp + 0x60]
// asm:   0x18068b795: mov rcx, rbx
// asm:   0x18068b798: call 0x1804170e0  ; il2cpp_codegen_raise_exception()
// asm:   0x183317b30: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317b35: push rbx
// asm:   0x183317b36: push rbp
// asm:   0x183317b37: push rdi
// asm:   0x183317b38: sub rsp, 0x20
// asm:   0x183317b3c: lea rbp, [rdx + 0x20]
// asm:   0x183317b40: mov rdi, qword ptr [rbp + 8]
// asm:   0x183317b44: mov rax, qword ptr [rdi]
// asm:   0x183317b47: mov rbx, qword ptr [rax]
// asm:   0x183317b4a: lea rcx, [rip + 0xd61407]  ; TypeInfo_System_Exception
// asm:   0x183317b51: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x183317b56: mov rcx, rax
// asm:   0x183317b59: mov rdx, rbx
// asm:   0x183317b5c: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183317b61: test al, al
// asm:   0x183317b63: je 0x183317b7e
// asm:   0x183317b65: mov rdx, qword ptr [rdi]
// asm:   0x183317b68: lea rcx, [rbp + 0x10]
// asm:   0x183317b6c: call 0x180012a00  ; il2cpp_runtime_helper_180012a00()
// asm:   0x183317b71: nop 
// asm:   0x183317b72: movabs rax, 0
// asm:   0x183317b7c: jmp 0x183317b96
// asm:   0x183317b7e: mov rax, qword ptr [rdi]
// asm:   0x183317b81: mov qword ptr [rbp], rax
// asm:   0x183317b85: lea rdx, [rip + 0xcc43fc]
// asm:   0x183317b8c: lea rcx, [rbp]
// asm:   0x183317b90: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x183317b96: add rsp, 0x20
// asm:   0x183317b9a: pop rdi
// asm:   0x183317b9b: pop rbp
// asm:   0x183317b9c: pop rbx
// asm:   0x183317b9d: ret 

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *
Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance___Il2CppFullySharedGenericType_
          (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *__return_storage_ptr__,System_Type_o *type,
          MethodInfo_68B610 *method)

{
  undefined1 *destination;
  undefined1 *destination_00;
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  Il2CppObject *pIVar4;
  Il2CppClass *klass;
  void *source;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *pUVar5;
  ulonglong size;
  undefined8 auStack_70 [5];
  undefined1 local_48 [24];
  undefined4 local_30;
  
  if (method->rgctx_data == (MethodInfo_68B610_RGCTXs *)0x0) {
    auStack_70[0] = 0x18068b64b;
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  size = (ulonglong)(method->rgctx_data->_0_T->_2).stack_slot_size;
  uVar3 = size + 0xf;
  if (uVar3 <= size) {
    uVar3 = 0xffffffffffffff0;
  }
  auStack_70[0] = 0x18068b678;
  lVar1 = -(uVar3 & 0xfffffffffffffff0);
  destination = local_48 + lVar1;
  uVar3 = size + 0xf;
  if (uVar3 <= size) {
    uVar3 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_70 + lVar1) = 0x18068b695;
  lVar2 = -(uVar3 & 0xfffffffffffffff0);
  destination_00 = local_48 + lVar2 + lVar1;
  *(undefined8 *)((longlong)auStack_70 + lVar2 + lVar1) = 0x18068b6aa;
  il2cpp_runtime_helper_180522500(destination_00,0,size);
  local_30 = 0;
  *(undefined8 *)((longlong)auStack_70 + lVar2 + lVar1) = 0x18068b6bb;
  pIVar4 = System_Activator__CreateInstance_1b5a950((System_Type_o *)__return_storage_ptr__,(MethodInfo *)0x0)
  ;
  klass = method->rgctx_data->_0_T;
  if (((klass->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_70 + lVar2 + lVar1) = 0x18068b6d6;
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  *(undefined8 *)((longlong)auStack_70 + lVar2 + lVar1) = 0x18068b6e4;
  source = (void *)il2cpp_runtime_helper_180416280(pIVar4,klass,destination);
  *(undefined8 *)((longlong)auStack_70 + lVar2 + lVar1) = 0x18068b6f2;
  memcpy(destination_00,source,size);
  *(undefined8 *)((longlong)auStack_70 + lVar2 + lVar1) = 0x18068b701;
  memcpy(destination,destination_00,size);
  *(undefined8 *)((longlong)auStack_70 + lVar2 + lVar1) = 0x18068b70f;
  pUVar5 = memcpy(type,destination,size);
  return pUVar5;
}


