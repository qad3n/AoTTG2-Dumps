// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSkinSetActions.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$get_CurrentSettings
// il2cpp: Settings_ISetSettingsContainer_o* Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__get_CurrentSettings (const MethodInfo* method);
// 0x5e55800

Settings_ISetSettingsContainer_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__get_CurrentSettings(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07548669 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions)
    ;
    Il2CppMethodInitialized_07548669 = '\x01';
  }
  return TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_settings;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$get_CurrentOperation
// il2cpp: int32_t Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__get_CurrentOperation (const MethodInfo* method);
// 0x5e55840

int32_t Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__get_CurrentOperation(MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754866a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions)
    ;
    Il2CppMethodInitialized_0754866a = '\x01';
  }
  return TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_operation;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$OpenCreate
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenCreate (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, Settings_ISetSettingsContainer_o* settings, System_Action_o* afterChange, const MethodInfo* method);
// 0x5e51520

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenCreate
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,
               Settings_ISetSettingsContainer_o *settings,System_Action_o *afterChange,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenName(context,settings,0,afterChange,in_RCX);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$OpenRename
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenRename (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, Settings_ISetSettingsContainer_o* settings, System_Action_o* afterChange, const MethodInfo* method);
// 0x5e517d0

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenRename
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,
               Settings_ISetSettingsContainer_o *settings,System_Action_o *afterChange,MethodInfo *method)

{
  Settings_ISetSettingsContainer_c *pSVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  bool bVar3;
  MethodInfo *method_00;
  ulong uVar4;
  long lVar5;
  
  if (Il2CppMethodInitialized_0754866b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ISetSettingsContainer);
    Il2CppMethodInitialized_0754866b = '\x01';
  }
  if (settings != (Settings_ISetSettingsContainer_o *)0x0) {
    pSVar1 = settings->klass;
    uVar4 = (ulong)(pSVar1->_2).interface_offsets_count;
    if (uVar4 != 0) {
      pIVar2 = (pSVar1->_1).interfaceOffsets;
      lVar5 = 0;
      do {
        if (*(Settings_ISetSettingsContainer_c **)((long)&pIVar2->interfaceType + lVar5) ==
            TypeInfo_Settings_ISetSettingsContainer) {
          method_00 = (MethodInfo *)(pSVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 8));
          goto label_05e51869;
        }
        lVar5 = lVar5 + 0x10;
      } while (uVar4 * 0x10 != lVar5);
    }
    method_00 = (MethodInfo *)
                GetInterfaceInvokeDataFromVTableSlowPath
                          ((Il2CppObject *)settings,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,8);
label_05e51869:
    bVar3 = (*method_00->methodPointer)
                      ((Il2CppObject *)settings,(MethodInfo *)method_00->virtualMethodPointer);
    if (bVar3) {
      Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenName(context,settings,1,afterChange,method_00)
      ;
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$OpenCopy
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenCopy (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, Settings_ISetSettingsContainer_o* settings, System_Action_o* afterChange, const MethodInfo* method);
// 0x5e518e0

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenCopy
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,
               Settings_ISetSettingsContainer_o *settings,System_Action_o *afterChange,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenName(context,settings,2,afterChange,in_RCX);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$OpenDelete
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenDelete (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, Settings_ISetSettingsContainer_o* settings, System_Action_o* afterChange, const MethodInfo* method);
// 0x5e51570
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e515ed: nop dword ptr [rax]

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenDelete
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,
               Settings_ISetSettingsContainer_o *settings,System_Action_o *afterChange,MethodInfo *method)

{
  Settings_ISetSettingsContainer_c *pSVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions_StaticFields *pGVar3;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  bool bVar4;
  VirtualInvokeData *pVVar5;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar6;
  ulong uVar7;
  long lVar8;
  
  if (Il2CppMethodInitialized_0754866c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ISetSettingsContainer);
    il2cpp_codegen_initialize_runtime_metadata(&"setting-skin-set-delete");
    Il2CppMethodInitialized_0754866c = '\x01';
  }
  if (settings != (Settings_ISetSettingsContainer_o *)0x0) {
    pSVar1 = settings->klass;
    uVar7 = (ulong)(pSVar1->_2).interface_offsets_count;
    if (uVar7 != 0) {
      pIVar2 = (pSVar1->_1).interfaceOffsets;
      lVar8 = 0;
      do {
        if (*(Settings_ISetSettingsContainer_c **)((long)&pIVar2->interfaceType + lVar8) ==
            TypeInfo_Settings_ISetSettingsContainer) {
          pVVar5 = pSVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar8) + 7);
          goto label_05e51629;
        }
        lVar8 = lVar8 + 0x10;
      } while (uVar7 * 0x10 != lVar8);
    }
    pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)settings,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,7);
label_05e51629:
    bVar4 = (*pVVar5->methodPtr)((Il2CppObject *)settings,pVVar5->method);
    if (bVar4) {
      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_settings = settings;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_settings);
      pGVar3 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields;
      pGVar3->_afterChange = afterChange;
      Il2CppCodeGenWriteBarrier(&pGVar3->_afterChange);
      if (context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) {
        pGVar6 = UnityEngine_GameObject__GetComponentInParent_object_
                           (context.fields.GameObject,
                            (MethodInfo_353BB40 *)
                            MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
        if ((pGVar6 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
           (__this = (pGVar6->fields)._Overlays_k__BackingField,
           __this != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                    (__this,"setting-skin-set-delete",true,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$SelectedName
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__SelectedName (const MethodInfo* method);
// 0x5e55970
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e559ec: nop dword ptr [rax]

System_String_o * Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__SelectedName(MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  VirtualInvokeData *pVVar3;
  Il2CppObject *pIVar4;
  Il2CppType *pIVar5;
  ulong uVar6;
  long lVar7;
  
  if (Il2CppMethodInitialized_0754866d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ISetSettingsContainer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_0754866d = '\x01';
  }
  pIVar4 = (Il2CppObject *)
           TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_settings;
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar1 = pIVar4->klass;
    uVar6 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar6 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar7 = 0;
      do {
        if (*(Settings_ISetSettingsContainer_c **)((long)&pIVar2->interfaceType + lVar7) ==
            TypeInfo_Settings_ISetSettingsContainer) {
          pVVar3 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar7);
          goto label_05e55a21;
        }
        lVar7 = lVar7 + 0x10;
      } while (uVar6 * 0x10 != lVar7);
    }
    pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar4,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,0);
label_05e55a21:
    pIVar4 = (*pVVar3->methodPtr)(pIVar4,pVVar3->method);
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar4 = (Il2CppObject *)
               TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_settings;
      if (pIVar4 == (Il2CppObject *)0x0) {
label_05e55adc:
        ThrowNullReferenceException();
      }
      pIVar1 = pIVar4->klass;
      uVar6 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar6 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar7 = 0;
        do {
          if (*(Settings_ISetSettingsContainer_c **)((long)&pIVar2->interfaceType + lVar7) ==
              TypeInfo_Settings_ISetSettingsContainer) {
            pVVar3 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar7);
            goto label_05e55ab8;
          }
          lVar7 = lVar7 + 0x10;
        } while (uVar6 * 0x10 != lVar7);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar4,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,0);
label_05e55ab8:
      pIVar4 = (*pVVar3->methodPtr)(pIVar4,pVVar3->method);
      if ((pIVar4 == (Il2CppObject *)0x0) || (pIVar4[3].klass == (Il2CppClass *)0x0)) goto label_05e55adc;
      pIVar5 = &((pIVar4[3].klass)->_1).byval_arg;
      goto label_05e55ad3;
    }
  }
  pIVar5 = *(Il2CppType **)(g_data_07556758 + 0xb8);
label_05e55ad3:
  return pIVar5->data;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$ApplyName
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__ApplyName (System_String_o* name, const MethodInfo* method);
// 0x5e55af0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e55e3e: nop 
// asm:   0x5e55ed3: jmp 0x5e5604f
// asm:   0x5e56099: cmp byte ptr [rip + 0x16f25d1], 0
// asm:   0x5e56149: jmp 0x5e560b5

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__ApplyName(System_String_o *name,MethodInfo *method)

{
  System_Action_o *pSVar1;
  bool bVar2;
  int iVar3;
  int32_t iVar4;
  VirtualInvokeData *pVVar5;
  Settings_TypedSetting_int__o *__this;
  Il2CppObject *pIVar6;
  Il2CppClass *pIVar7;
  ulong uVar8;
  Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions_StaticFields *pGVar9;
  Il2CppRuntimeInterfaceOffsetPair *pIVar10;
  long lVar11;
  
  if (Il2CppMethodInitialized_0754866e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IListSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ISetSettingsContainer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_0754866e = '\x01';
  }
  if (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_settings ==
      (Settings_ISetSettingsContainer_o *)0x0) {
    return;
  }
  bVar2 = System_String__IsNullOrEmpty(name,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  pGVar9 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields;
  iVar3 = pGVar9->_operation;
  if (iVar3 == 1) {
    pIVar6 = (Il2CppObject *)pGVar9->_settings;
    if (pIVar6 == (Il2CppObject *)0x0) goto label_05e5614e;
    pIVar7 = pIVar6->klass;
    uVar8 = (ulong)(pIVar7->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar10 = (pIVar7->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(Settings_ISetSettingsContainer_c **)((long)&pIVar10->interfaceType + lVar11) ==
            TypeInfo_Settings_ISetSettingsContainer) {
          pVVar5 = pIVar7->vtable + (*(int *)((long)&pIVar10->offset + lVar11) + 8);
          goto label_05e55d00;
        }
        lVar11 = lVar11 + 0x10;
      } while (uVar8 * 0x10 != lVar11);
    }
    pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar6,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,8);
label_05e55d00:
    bVar2 = (*pVVar5->methodPtr)(pIVar6,pVVar5->method);
    pGVar9 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields;
    if (bVar2) {
      pIVar6 = (Il2CppObject *)pGVar9->_settings;
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05e5614e;
      pIVar7 = pIVar6->klass;
      uVar8 = (ulong)(pIVar7->_2).interface_offsets_count;
      if (uVar8 != 0) {
        pIVar10 = (pIVar7->_1).interfaceOffsets;
        lVar11 = 0;
        do {
          if (*(Settings_ISetSettingsContainer_c **)((long)&pIVar10->interfaceType + lVar11) ==
              TypeInfo_Settings_ISetSettingsContainer) {
            pVVar5 = pIVar7->vtable + *(int *)((long)&pIVar10->offset + lVar11);
            goto label_05e56113;
          }
          lVar11 = lVar11 + 0x10;
        } while (uVar8 * 0x10 != lVar11);
      }
      pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar6,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,0);
label_05e56113:
      pIVar6 = (*pVVar5->methodPtr)(pIVar6,pVVar5->method);
      if ((pIVar6 == (Il2CppObject *)0x0) || (pIVar6[3].klass == (Il2CppClass *)0x0)) goto label_05e5614e;
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pIVar6[3].klass,(Il2CppObject *)name,
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      goto joined_r0x05e560a0;
    }
    iVar3 = pGVar9->_operation;
label_05e55d78:
    if (iVar3 != 2) goto joined_r0x05e560a0;
    pIVar6 = (Il2CppObject *)pGVar9->_settings;
    if (pIVar6 == (Il2CppObject *)0x0) goto label_05e5614e;
    pIVar7 = pIVar6->klass;
    uVar8 = (ulong)(pIVar7->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar10 = (pIVar7->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(Settings_ISetSettingsContainer_c **)((long)&pIVar10->interfaceType + lVar11) ==
            TypeInfo_Settings_ISetSettingsContainer) {
          pVVar5 = pIVar7->vtable + (*(int *)((long)&pIVar10->offset + lVar11) + 5);
          goto label_05e55eef;
        }
        lVar11 = lVar11 + 0x10;
      } while (uVar8 * 0x10 != lVar11);
    }
    pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar6,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,5);
label_05e55eef:
    (*pVVar5->methodPtr)(pIVar6,name,pVVar5->method);
    pIVar6 = (Il2CppObject *)
             TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_settings;
    if (pIVar6 == (Il2CppObject *)0x0) goto label_05e5614e;
    pIVar7 = pIVar6->klass;
    uVar8 = (ulong)(pIVar7->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar10 = (pIVar7->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(Settings_ISetSettingsContainer_c **)((long)&pIVar10->interfaceType + lVar11) ==
            TypeInfo_Settings_ISetSettingsContainer) {
          pVVar5 = pIVar7->vtable + (*(int *)((long)&pIVar10->offset + lVar11) + 1);
          goto label_05e55f78;
        }
        lVar11 = lVar11 + 0x10;
      } while (uVar8 * 0x10 != lVar11);
    }
    pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar6,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,1);
label_05e55f78:
    __this = (Settings_TypedSetting_int__o *)(*pVVar5->methodPtr)(pIVar6,pVVar5->method);
    pIVar6 = (Il2CppObject *)
             TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_settings;
    if (pIVar6 == (Il2CppObject *)0x0) goto label_05e5614e;
    pIVar7 = pIVar6->klass;
    uVar8 = (ulong)(pIVar7->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar10 = (pIVar7->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(Settings_ISetSettingsContainer_c **)((long)&pIVar10->interfaceType + lVar11) ==
            TypeInfo_Settings_ISetSettingsContainer) {
          pVVar5 = pIVar7->vtable + (*(int *)((long)&pIVar10->offset + lVar11) + 2);
          goto label_05e55ff9;
        }
        lVar11 = lVar11 + 0x10;
      } while (uVar8 * 0x10 != lVar11);
    }
    pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar6,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,2);
label_05e55ff9:
    pIVar6 = (*pVVar5->methodPtr)(pIVar6,pVVar5->method);
    if (pIVar6 == (Il2CppObject *)0x0) goto label_05e5614e;
    pIVar7 = pIVar6->klass;
    uVar8 = (ulong)(pIVar7->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar10 = (pIVar7->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(Settings_IListSetting_c **)((long)&pIVar10->interfaceType + lVar11) ==
            TypeInfo_Settings_IListSetting) goto label_05e5605e;
        lVar11 = lVar11 + 0x10;
      } while (uVar8 * 0x10 != lVar11);
    }
  }
  else {
    if (iVar3 != 0) goto label_05e55d78;
    pIVar6 = (Il2CppObject *)pGVar9->_settings;
    if (pIVar6 == (Il2CppObject *)0x0) goto label_05e5614e;
    pIVar7 = pIVar6->klass;
    uVar8 = (ulong)(pIVar7->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar10 = (pIVar7->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(Settings_ISetSettingsContainer_c **)((long)&pIVar10->interfaceType + lVar11) ==
            TypeInfo_Settings_ISetSettingsContainer) {
          pVVar5 = pIVar7->vtable + (*(int *)((long)&pIVar10->offset + lVar11) + 4);
          goto label_05e55c6f;
        }
        lVar11 = lVar11 + 0x10;
      } while (uVar8 * 0x10 != lVar11);
    }
    pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar6,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,4);
label_05e55c6f:
    (*pVVar5->methodPtr)(pIVar6,name,pVVar5->method);
    pIVar6 = (Il2CppObject *)
             TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_settings;
    if (pIVar6 == (Il2CppObject *)0x0) goto label_05e5614e;
    pIVar7 = pIVar6->klass;
    uVar8 = (ulong)(pIVar7->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar10 = (pIVar7->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(Settings_ISetSettingsContainer_c **)((long)&pIVar10->interfaceType + lVar11) ==
            TypeInfo_Settings_ISetSettingsContainer) {
          pVVar5 = pIVar7->vtable + (*(int *)((long)&pIVar10->offset + lVar11) + 1);
          goto label_05e55dfc;
        }
        lVar11 = lVar11 + 0x10;
      } while (uVar8 * 0x10 != lVar11);
    }
    pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar6,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,1);
label_05e55dfc:
    __this = (Settings_TypedSetting_int__o *)(*pVVar5->methodPtr)(pIVar6,pVVar5->method);
    pIVar6 = (Il2CppObject *)
             TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_settings;
    if (pIVar6 == (Il2CppObject *)0x0) goto label_05e5614e;
    pIVar7 = pIVar6->klass;
    uVar8 = (ulong)(pIVar7->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar10 = (pIVar7->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(Settings_ISetSettingsContainer_c **)((long)&pIVar10->interfaceType + lVar11) ==
            TypeInfo_Settings_ISetSettingsContainer) {
          pVVar5 = pIVar7->vtable + (*(int *)((long)&pIVar10->offset + lVar11) + 2);
          goto label_05e55e79;
        }
        lVar11 = lVar11 + 0x10;
      } while (uVar8 * 0x10 != lVar11);
    }
    pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar6,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,2);
label_05e55e79:
    pIVar6 = (*pVVar5->methodPtr)(pIVar6,pVVar5->method);
    if (pIVar6 == (Il2CppObject *)0x0) goto label_05e5614e;
    pIVar7 = pIVar6->klass;
    uVar8 = (ulong)(pIVar7->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar10 = (pIVar7->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(Settings_IListSetting_c **)((long)&pIVar10->interfaceType + lVar11) ==
            TypeInfo_Settings_IListSetting) goto label_05e5605e;
        lVar11 = lVar11 + 0x10;
      } while (uVar8 * 0x10 != lVar11);
    }
  }
  pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar6,(Il2CppClass *)TypeInfo_Settings_IListSetting,0);
label_05e56071:
  iVar4 = (*pVVar5->methodPtr)(pIVar6,pVVar5->method);
  if (__this == (Settings_TypedSetting_int__o *)0x0) {
label_05e5614e:
    ThrowNullReferenceException();
  }
  Settings_TypedSetting_int___set_Value
            (__this,iVar4 + -1,(MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
joined_r0x05e560a0:
  if (Il2CppMethodInitialized_07548671 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions)
    ;
    Il2CppMethodInitialized_07548671 = '\x01';
  }
  pGVar9 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields;
  pSVar1 = pGVar9->_afterChange;
  pGVar9->_afterChange = (System_Action_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pGVar9->_afterChange);
  if (pSVar1 == (System_Action_o *)0x0) {
    return;
  }
  (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
  return;
label_05e5605e:
  pVVar5 = pIVar7->vtable + *(int *)((long)&pIVar10->offset + lVar11);
  goto label_05e56071;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$DeleteSelected
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__DeleteSelected (const MethodInfo* method);
// 0x5e561c0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e5623c: nop dword ptr [rax]
// asm:   0x5e562bf: nop 

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__DeleteSelected(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions_StaticFields *pGVar4;
  System_Action_o *pSVar5;
  bool bVar6;
  VirtualInvokeData *pVVar7;
  Settings_TypedSetting_int__o *__this;
  ulong uVar8;
  long lVar9;
  
  if (Il2CppMethodInitialized_0754866f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ISetSettingsContainer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_0754866f = '\x01';
  }
  pIVar1 = (Il2CppObject *)
           TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_settings;
  if (pIVar1 != (Il2CppObject *)0x0) {
    pIVar2 = pIVar1->klass;
    uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar9 = 0;
      do {
        if (*(Settings_ISetSettingsContainer_c **)((long)&pIVar3->interfaceType + lVar9) ==
            TypeInfo_Settings_ISetSettingsContainer) {
          pVVar7 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar9) + 7);
          goto label_05e56279;
        }
        lVar9 = lVar9 + 0x10;
      } while (uVar8 * 0x10 != lVar9);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar1,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,7);
label_05e56279:
    bVar6 = (*pVVar7->methodPtr)(pIVar1,pVVar7->method);
    if (bVar6) {
      pIVar1 = (Il2CppObject *)
               TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_settings;
      if (pIVar1 != (Il2CppObject *)0x0) {
        pIVar2 = pIVar1->klass;
        uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar8 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar9 = 0;
          do {
            if (*(Settings_ISetSettingsContainer_c **)((long)&pIVar3->interfaceType + lVar9) ==
                TypeInfo_Settings_ISetSettingsContainer) {
              pVVar7 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar9) + 6);
              goto label_05e562f5;
            }
            lVar9 = lVar9 + 0x10;
          } while (uVar8 * 0x10 != lVar9);
        }
        pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar1,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,6);
label_05e562f5:
        (*pVVar7->methodPtr)(pIVar1,pVVar7->method);
        pIVar1 = (Il2CppObject *)
                 TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_settings;
        if (pIVar1 != (Il2CppObject *)0x0) {
          pIVar2 = pIVar1->klass;
          uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
          if (uVar8 != 0) {
            pIVar3 = (pIVar2->_1).interfaceOffsets;
            lVar9 = 0;
            do {
              if (*(Settings_ISetSettingsContainer_c **)((long)&pIVar3->interfaceType + lVar9) ==
                  TypeInfo_Settings_ISetSettingsContainer) {
                pVVar7 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar9) + 1);
                goto label_05e56378;
              }
              lVar9 = lVar9 + 0x10;
            } while (uVar8 * 0x10 != lVar9);
          }
          pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                             (pIVar1,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,1);
label_05e56378:
          __this = (Settings_TypedSetting_int__o *)(*pVVar7->methodPtr)(pIVar1,pVVar7->method);
          if (__this != (Settings_TypedSetting_int__o *)0x0) {
            Settings_TypedSetting_int___set_Value
                      (__this,0,(MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
            if (Il2CppMethodInitialized_07548671 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions);
              Il2CppMethodInitialized_07548671 = '\x01';
            }
            pGVar4 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields;
            pSVar5 = pGVar4->_afterChange;
            pGVar4->_afterChange = (System_Action_o *)0x0;
            Il2CppCodeGenWriteBarrier(&pGVar4->_afterChange);
            if (pSVar5 == (System_Action_o *)0x0) {
              return;
            }
            (*(code *)(pSVar5->fields).invoke_impl)((pSVar5->fields).method_code,(pSVar5->fields).method);
            return;
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$OpenName
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenName (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, Settings_ISetSettingsContainer_o* settings, int32_t operation, System_Action_o* afterChange, const MethodInfo* method);
// 0x5e55880

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenName
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,
               Settings_ISetSettingsContainer_o *settings,int32_t operation,System_Action_o *afterChange,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions_StaticFields *pGVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  
  if (Il2CppMethodInitialized_07548670 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&"setting-skin-set-name");
    Il2CppMethodInitialized_07548670 = '\x01';
  }
  if (settings != (Settings_ISetSettingsContainer_o *)0x0) {
    TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_settings = settings;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_settings);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields;
    pGVar1->_operation = operation;
    pGVar1->_afterChange = afterChange;
    Il2CppCodeGenWriteBarrier(&pGVar1->_afterChange);
    if (context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) {
      pGVar2 = UnityEngine_GameObject__GetComponentInParent_object_
                         (context.fields.GameObject,
                          (MethodInfo_353BB40 *)
                          MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
      if ((pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
         (__this = (pGVar2->fields)._Overlays_k__BackingField,
         __this != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                  (__this,"setting-skin-set-name",true,(MethodInfo *)0x0);
        return;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$InvokeAfterChange
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__InvokeAfterChange (const MethodInfo* method);
// 0x5e56160

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__InvokeAfterChange(MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions_StaticFields *pGVar1;
  System_Action_o *pSVar2;
  
  if (Il2CppMethodInitialized_07548671 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions)
    ;
    Il2CppMethodInitialized_07548671 = '\x01';
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields;
  pSVar2 = pGVar1->_afterChange;
  pGVar1->_afterChange = (System_Action_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pGVar1->_afterChange);
  if (pSVar2 == (System_Action_o *)0x0) {
    return;
  }
  (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,(pSVar2->fields).method);
  return;
}


