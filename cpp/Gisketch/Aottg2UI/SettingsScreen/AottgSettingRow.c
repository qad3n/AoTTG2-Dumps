// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingRow.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o* descriptor, const MethodInfo* method);
// 0x5dc6d70

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *descriptor,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._descriptor = descriptor;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._descriptor);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__Build (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5dc6da0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__Build
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  int32_t layoutMode;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *icon;
  System_Func_string__o *dirtyValue;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o searchContext;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this_01;
  ulong uVar4;
  undefined *puVar5;
  float controlWidth;
  float value;
  MethodInfo *in_stack_ffffffffffffff50;
  System_Nullable_float__Fields SStack_98;
  System_String_o *pSStack_90;
  System_String_o *pSStack_88;
  System_String_o *pSStack_80;
  System_Action_AottgUi__o *pSStack_78;
  System_String_o *pSStack_70;
  System_String_o *pSStack_68;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_60;
  System_String_o *pSStack_58;
  System_String_o *pSStack_50;
  System_String_o *pSStack_48;
  System_String_o *pSStack_40;
  System_String_o *pSStack_38;
  
  if (Il2CppMethodInitialized_075481cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_BuildControl);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    Il2CppMethodInitialized_075481cc = '\x01';
  }
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    return;
  }
  switch((pGVar1->fields).Kind) {
  case 0:
    controlWidth = 58.0;
    break;
  case 1:
  case 2:
    controlWidth = 300.0;
    break;
  case 3:
    uVar4 = (ulong)((__this->fields)._layoutMode == 1);
    puVar5 = &g_data_0100ae58;
    goto label_05dc6e6f;
  case 4:
  case 6:
    uVar4 = (ulong)((__this->fields)._layoutMode == 1);
    puVar5 = &g_data_0100ac50;
    goto label_05dc6e6f;
  case 5:
    uVar4 = (ulong)((__this->fields)._layoutMode == 1);
    puVar5 = &g_data_0100acc0;
label_05dc6e6f:
    controlWidth = *(float *)(puVar5 + uVar4 * 4);
    break;
  default:
    controlWidth = 360.0;
  }
  pSVar2 = (pGVar1->fields).Id;
  pSVar3 = (pGVar1->fields).Label;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_BuildControl,
             (MethodInfo_4A81BE0 *)0x0);
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_05dc70b6;
  value = 58.0;
  switch((pGVar1->fields).Kind) {
  case 0:
    break;
  case 1:
  case 2:
    value = 300.0;
    break;
  case 3:
    uVar4 = (ulong)((__this->fields)._layoutMode == 1);
    puVar5 = &g_data_0100ae58;
    goto label_05dc6f34;
  case 4:
  case 6:
    uVar4 = (ulong)((__this->fields)._layoutMode == 1);
    puVar5 = &g_data_0100ac50;
    goto label_05dc6f34;
  case 5:
    uVar4 = (ulong)((__this->fields)._layoutMode == 1);
    puVar5 = &g_data_0100acc0;
label_05dc6f34:
    value = *(float *)(puVar5 + uVar4 * 4);
    break;
  default:
    value = 360.0;
  }
  pSStack_80 = (pGVar1->fields).Tooltip;
  pSStack_88 = (pGVar1->fields).SearchTitle;
  pSStack_90 = (pGVar1->fields).SearchKeywords;
  icon = (pGVar1->fields).Icon;
  SStack_98.hasValue = false;
  SStack_98._1_3_ = 0;
  SStack_98.value = 0.0;
  pSStack_78 = __this_00;
  pSStack_70 = pSVar3;
  pSStack_68 = pSVar2;
  pGStack_60 = ui;
  System_Nullable_float____ctor
            ((System_Nullable_float__o *)&SStack_98,value,
             (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    pSVar2 = (pGVar1->fields).LabelKey;
    pSVar3 = (pGVar1->fields).TooltipKey;
    pSStack_38 = (__this->fields)._searchContext.fields.GroupTitle;
    pSStack_58 = (__this->fields)._searchContext.fields.ScreenTitle;
    pSStack_50 = (__this->fields)._searchContext.fields.CategoryId;
    pSStack_48 = (__this->fields)._searchContext.fields.CategoryTitle;
    pSStack_40 = (__this->fields)._searchContext.fields.GroupId;
    dirtyValue = (pGVar1->fields).DirtyValue;
    layoutMode = (__this->fields)._layoutMode;
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame);
    searchContext.fields.CategoryId = pSStack_50;
    searchContext.fields.ScreenTitle = pSStack_58;
    searchContext.fields.CategoryTitle = pSStack_48;
    searchContext.fields.GroupId = pSStack_40;
    searchContext.fields.GroupTitle = pSStack_38;
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___ctor
              (__this_01,pSStack_68,pSStack_70,controlWidth,pSStack_78,pSStack_80,pSStack_88,pSStack_90,icon,
               (System_Nullable_float__o)SStack_98,pSVar2,pSVar3,(System_String_o *)0x0,searchContext,
               dirtyValue,(System_String_o *)0x0,(System_String_o *)0x0,layoutMode,in_stack_ffffffffffffff50);
    if (pGStack_60 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Component
                (pGStack_60,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
      return;
    }
  }
label_05dc70b6:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$ApplySearchContext
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplySearchContext (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context, const MethodInfo* method);
// 0x5dc71e0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplySearchContext
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context,MethodInfo *method)

{
  (__this->fields)._searchContext.fields.GroupTitle = context.fields.GroupTitle;
  (__this->fields)._searchContext.fields.CategoryTitle = context.fields.CategoryTitle;
  (__this->fields)._searchContext.fields.GroupId = context.fields.GroupId;
  (__this->fields)._searchContext.fields.ScreenTitle = context.fields.ScreenTitle;
  (__this->fields)._searchContext.fields.CategoryId = context.fields.CategoryId;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields)._searchContext);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$SyncState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SyncState (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x5dc7210
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dc7290: jmp 0x5dc7263

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SyncState
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar2;
  MethodInfo *extraout_RDX;
  System_String_o *rowId;
  
  if (Il2CppMethodInitialized_075481cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    Il2CppMethodInitialized_075481cd = '\x01';
    method = extraout_RDX;
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SyncValue(root,(__this->fields)._descriptor,method);
  pGVar2 = (__this->fields)._descriptor;
  if (pGVar2 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    rowId = (System_String_o *)0x0;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
            cctor_finished_or_no_cctor;
  }
  else {
    rowId = (pGVar2->fields).Id;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SyncRow(root,rowId,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$ApplyLayoutMode
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplyLayoutMode (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, int32_t mode, const MethodInfo* method);
// 0x5dc73d0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplyLayoutMode
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,int32_t mode,MethodInfo *method)

{
  (__this->fields)._layoutMode = mode;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$BuildControl
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildControl (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x5dc73e0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildControl
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    ThrowNullReferenceException();
  }
  switch((pGVar1->fields).Kind) {
  case 0:
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildSwitch(__this,control,method);
    return;
  case 1:
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildDropdown
              (__this,control,true,(MethodInfo *)&switchD_05dc7401::switchdataD_010a5f44);
    return;
  case 2:
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildDropdown
              (__this,control,false,(MethodInfo *)&switchD_05dc7401::switchdataD_010a5f44);
    return;
  case 3:
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildSlider(__this,control,method);
    return;
  case 4:
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildInput(__this,control,method);
    return;
  case 5:
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildActionButton(__this,control,method);
    return;
  default:
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildReadOnly(__this,control,method);
    return;
  }
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$BuildSwitch
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildSwitch (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x5dc7440
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dc7509: nop dword ptr [rax]
// asm:   0x5dc7531: xor ebp, ebp
// asm:   0x5dc7533: mov r13, r12
// asm:   0x5dc7536: mov r15, rax
// asm:   0x5dc7539: jmp 0x5dc755e

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildSwitch
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  Il2CppObject *obj;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool value;
  System_String_o *pSVar4;
  VirtualInvokeData *pVVar5;
  System_Action_GisketchActionContext__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_01;
  ulong uVar6;
  MethodInfo *method_00;
  long lVar7;
  
  if (Il2CppMethodInitialized_075481ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_BuildSwitch_b__10_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&"-switch");
    Il2CppMethodInitialized_075481ce = '\x01';
  }
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    pSVar4 = System_String__Concat_52f0320((pGVar1->fields).Id,"-switch",(MethodInfo *)0x0);
    pGVar1 = (__this->fields)._descriptor;
    if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
      obj = (Il2CppObject *)(pGVar1->fields).Adapter;
      if (obj == (Il2CppObject *)0x0) {
        value = false;
      }
      else {
        pIVar2 = obj->klass;
        uVar6 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar6 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar7 = 0;
          do {
            if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
                 ((long)&pIVar3->interfaceType + lVar7) ==
                TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
              pVVar5 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar7) + 2);
              goto label_05dc7553;
            }
            lVar7 = lVar7 + 0x10;
          } while (uVar6 * 0x10 != lVar7);
        }
        pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                           (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
                            2);
label_05dc7553:
        value = (*pVVar5->methodPtr)(obj,pVVar5->method);
      }
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor
                (__this_00,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_BuildSwitch_b__10_0,
                 (MethodInfo_4A803E0 *)0x0);
      if (control != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        node = Gisketch_Aottg2UI_Code_AottgUi__Switch(control,pSVar4,value,__this_00,(MethodInfo *)0x0);
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_01,(MethodInfo *)0x0);
        pGVar1 = (__this->fields)._descriptor;
        if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
          pSVar4 = (pGVar1->fields).Id;
          if (Il2CppMethodInitialized_075481dc == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&".controlValue");
            Il2CppMethodInitialized_075481dc = '\x01';
          }
          pSVar4 = System_String__Concat_52f0320(pSVar4,".controlValue",(MethodInfo *)0x0);
          if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
            (__this_01->fields).value = pSVar4;
            Il2CppCodeGenWriteBarrier(&(__this_01->fields).value);
            if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              (node->fields).bind = __this_01;
              Il2CppCodeGenWriteBarrier(&(node->fields).bind);
              Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplyControlLayout(__this,node,58.0,method_00)
              ;
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$BuildDropdown
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildDropdown (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, bool dropdown, const MethodInfo* method);
// 0x5dc7670

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildDropdown
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,bool dropdown,MethodInfo *method)

{
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *options;
  VirtualInvokeData *pVVar3;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_Action_GisketchActionContext__o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  ulong uVar8;
  undefined *puVar9;
  MethodInfo *method_00;
  MethodInfo *method_01;
  long lVar10;
  float minWidth;
  
  method_01 = (MethodInfo *)control;
  if (Il2CppMethodInitialized_075481cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_OnValueChanged);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&"-select");
    il2cpp_codegen_initialize_runtime_metadata(&"-dropdown");
    Il2CppMethodInitialized_075481cf = '\x01';
  }
  options = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ChoiceOptions(__this,method_01);
  pGVar4 = (__this->fields)._descriptor;
  if (pGVar4 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_05dc79e6;
  obj = (Il2CppObject *)(pGVar4->fields).Adapter;
  if (obj == (Il2CppObject *)0x0) {
    pSVar5 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    pGVar4 = (__this->fields)._descriptor;
    if (dropdown) goto label_05dc782b;
label_05dc777b:
    if (pGVar4 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_05dc79e6;
    pSVar6 = System_String__Concat_52f0320((pGVar4->fields).Id,"-select",(MethodInfo *)0x0);
    pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (pSVar7,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_OnValueChanged,
               (MethodInfo_4A803E0 *)0x0);
    pGVar4 = (__this->fields)._descriptor;
    if ((pGVar4 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) ||
       (control == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0)) goto label_05dc79e6;
    node = Gisketch_Aottg2UI_Code_AottgUi__Select_52692c0
                     (control,pSVar6,pSVar5,options,pSVar7,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                      (pGVar4->fields).MaxVisibleItems,(MethodInfo *)0x0);
  }
  else {
    pIVar1 = obj->klass;
    uVar8 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar10 = 0;
      do {
        if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
             ((long)&pIVar2->interfaceType + lVar10) ==
            TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
          pVVar3 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar10);
          goto label_05dc7811;
        }
        lVar10 = lVar10 + 0x10;
      } while (uVar8 * 0x10 != lVar10);
    }
    pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                       (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,0);
label_05dc7811:
    pSVar5 = (*pVVar3->methodPtr)(obj,pVVar3->method);
    pGVar4 = (__this->fields)._descriptor;
    if (!dropdown) goto label_05dc777b;
label_05dc782b:
    if (pGVar4 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_05dc79e6;
    pSVar6 = System_String__Concat_52f0320((pGVar4->fields).Id,"-dropdown",(MethodInfo *)0x0);
    pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (pSVar7,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_OnValueChanged,
               (MethodInfo_4A803E0 *)0x0);
    pGVar4 = (__this->fields)._descriptor;
    if ((pGVar4 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) ||
       (control == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0)) goto label_05dc79e6;
    node = Gisketch_Aottg2UI_Code_AottgUi__Dropdown_5268fb0
                     (control,pSVar6,pSVar5,options,pSVar7,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                      (pGVar4->fields).MaxVisibleItems,(MethodInfo *)0x0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
  pGVar4 = (__this->fields)._descriptor;
  if (pGVar4 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
label_05dc79e6:
    ThrowNullReferenceException();
  }
  pSVar5 = (pGVar4->fields).Id;
  if (Il2CppMethodInitialized_075481dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".controlValue");
    Il2CppMethodInitialized_075481dc = '\x01';
  }
  pSVar5 = System_String__Concat_52f0320(pSVar5,".controlValue",(MethodInfo *)0x0);
  if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_05dc79e6;
  (__this_00->fields).value = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).value);
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_05dc79e6;
  (node->fields).bind = __this_00;
  Il2CppCodeGenWriteBarrier(&(node->fields).bind);
  pGVar4 = (__this->fields)._descriptor;
  if (pGVar4 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_05dc79e6;
  switch((pGVar4->fields).Kind) {
  case 0:
    minWidth = 58.0;
    goto label_05dc79cd;
  case 1:
  case 2:
    minWidth = 300.0;
    goto label_05dc79cd;
  case 3:
    uVar8 = (ulong)((__this->fields)._layoutMode == 1);
    puVar9 = &g_data_0100ae58;
    break;
  case 4:
  case 6:
    uVar8 = (ulong)((__this->fields)._layoutMode == 1);
    puVar9 = &g_data_0100ac50;
    break;
  case 5:
    uVar8 = (ulong)((__this->fields)._layoutMode == 1);
    puVar9 = &g_data_0100acc0;
    break;
  default:
    minWidth = 360.0;
    goto label_05dc79cd;
  }
  minWidth = *(float *)(puVar9 + uVar8 * 4);
label_05dc79cd:
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplyControlLayout(__this,node,minWidth,method_00);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$BuildSlider
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildSlider (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x5dc79f0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildSlider
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  System_Action_AottgUi__o *__this_00;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  MethodInfo *pMVar3;
  MethodInfo *method_00;
  undefined *puVar4;
  MethodInfo *method_01;
  float minWidth;
  
  if (Il2CppMethodInitialized_075481d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_BuildSlider_b__12_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"-slider-with-value");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"-slider");
    Il2CppMethodInitialized_075481d0 = '\x01';
  }
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_05dc7c62;
  pMVar3 = (MethodInfo *)(ulong)(uint)(pGVar1->fields).Kind;
  if ((MethodInfo *)&g_data_00000006 < pMVar3) {
    minWidth = 360.0;
    method_00 = pMVar3;
    goto label_05dc7ae2;
  }
  method_00 = (MethodInfo *)
              ((long)&switchD_05dc7a89::switchdataD_010a5f78 +
              (long)(int)(&switchD_05dc7a89::switchdataD_010a5f78)[(long)pMVar3]);
  switch(pMVar3) {
  case (MethodInfo *)0x0:
    minWidth = 58.0;
    goto label_05dc7ae2;
  default:
    minWidth = 300.0;
    goto label_05dc7ae2;
  case (MethodInfo *)0x3:
    method_00 = (MethodInfo *)(ulong)((__this->fields)._layoutMode == 1);
    puVar4 = &g_data_0100ae58;
    break;
  case (MethodInfo *)0x4:
  case (MethodInfo *)0x6:
    method_00 = (MethodInfo *)(ulong)((__this->fields)._layoutMode == 1);
    puVar4 = &g_data_0100ac50;
    break;
  case (MethodInfo *)0x5:
    method_00 = (MethodInfo *)(ulong)((__this->fields)._layoutMode == 1);
    puVar4 = &g_data_0100acc0;
  }
  minWidth = *(float *)(puVar4 + (long)method_00 * 4);
label_05dc7ae2:
  if ((pGVar1->fields).ShowValue == false) {
    pSVar2 = System_String__Concat_52f0320((pGVar1->fields).Id,"-slider",(MethodInfo *)0x0);
    node = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderNode(__this,control,pSVar2,method_00);
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplyControlLayout(__this,node,minWidth,method_01);
    return;
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_BuildSlider_b__12_0,
             (MethodInfo_4A81BE0 *)0x0);
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    pSVar2 = System_String__Concat_52f0320((pGVar1->fields).Id,"-slider-with-value",(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(minWidth,(MethodInfo *)0x0);
    maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,"Center",
                        (System_String_o *)0x0,(System_String_o *)0x0,10.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (control != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (control,"clear",__this_00,pSVar2,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
label_05dc7c62:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$SliderNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderNode (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, System_String_o* id, const MethodInfo* method);
// 0x5dc8890
// asm: 15 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dc897e: xorps xmm0, xmm0
// asm:   0x5dc8981: movss dword ptr [rsp + 0x14], xmm0
// asm:   0x5dc8987: mov qword ptr [rsp + 0x28], rbp
// asm:   0x5dc898c: mov qword ptr [rsp + 0x20], r14
// asm:   0x5dc8991: jmp 0x5dc89b8
// asm:   0x5dc8a8c: xorps xmm1, xmm1
// asm:   0x5dc8a8f: mov rdx, rbp
// asm:   0x5dc8b2e: movss xmm2, dword ptr [rip - 0x4e072d2]
// asm:   0x5dc8b36: movaps xmm1, xmm0
// asm:   0x5dc8b39: mov r12, rdx
// asm:   0x5dc8b3c: mov r13, r15
// asm:   0x5dc8b3f: movss xmm0, dword ptr [rsp + 0x14]
// asm:   0x5dc8b45: mov rbx, rcx
// asm:   0x5dc8b48: mov rbp, rax
// asm:   0x5dc8b4b: jmp 0x5dc8b7c

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderNode
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
          Gisketch_Aottg2UI_Code_AottgUi_o *control,System_String_o *id,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  System_String_o *id_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *pGVar4;
  VirtualInvokeData *pVVar5;
  System_Action_GisketchActionContext__o *__this_01;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_02;
  System_String_o *pSVar8;
  ulong uVar9;
  long lVar10;
  float min;
  float max;
  float value;
  System_Nullable_bool__Fields local_58 [2];
  float fStack_54;
  float local_50;
  float local_4c;
  System_String_o *local_48;
  Gisketch_Aottg2UI_Code_AottgUi_o *local_40;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *local_38;
  
  if (Il2CppMethodInitialized_075481d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_SliderNode_b__13_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"slider");
    Il2CppMethodInitialized_075481d1 = '\x01';
  }
  pGVar6 = (__this->fields)._descriptor;
  if (pGVar6 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    pIVar1 = (Il2CppObject *)(pGVar6->fields).Adapter;
    local_48 = id;
    local_40 = control;
    if (pIVar1 == (Il2CppObject *)0x0) {
      fStack_54 = 0.0;
    }
    else {
      pIVar2 = pIVar1->klass;
      uVar9 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar9 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar10 = 0;
        do {
          if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
               ((long)&pIVar3->interfaceType + lVar10) ==
              TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
            pVVar5 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar10) + 1);
            goto label_05dc89a9;
          }
          lVar10 = lVar10 + 0x10;
        } while (uVar9 * 0x10 != lVar10);
      }
      pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar1,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter
                          ,1);
label_05dc89a9:
      fStack_54 = (*pVVar5->methodPtr)(pIVar1,pVVar5->method);
    }
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_SliderNode_b__13_0,
               (MethodInfo_4A803E0 *)0x0);
    pSVar8 = "slider";
    pGVar6 = (__this->fields)._descriptor;
    if (pGVar6 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
      pIVar1 = (Il2CppObject *)(pGVar6->fields).Adapter;
      min = 0.0;
      if (pIVar1 != (Il2CppObject *)0x0) {
        pIVar2 = pIVar1->klass;
        uVar9 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar9 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar10 = 0;
          do {
            if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
                 ((long)&pIVar3->interfaceType + lVar10) ==
                TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
              pVVar5 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar10) + 3);
              goto label_05dc8a75;
            }
            lVar10 = lVar10 + 0x10;
          } while (uVar9 * 0x10 != lVar10);
        }
        pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar1,(Il2CppClass *)
                                   TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,3);
label_05dc8a75:
        min = (*pVVar5->methodPtr)(pIVar1,pVVar5->method);
        pGVar6 = (__this->fields)._descriptor;
        if (pGVar6 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_05dc8c8b;
      }
      __this_00 = local_40;
      id_00 = local_48;
      pIVar1 = (Il2CppObject *)(pGVar6->fields).Adapter;
      local_38 = __this;
      if (pIVar1 == (Il2CppObject *)0x0) {
        max = 1.0;
        value = fStack_54;
      }
      else {
        pIVar2 = pIVar1->klass;
        uVar9 = (ulong)(pIVar2->_2).interface_offsets_count;
        local_50 = fStack_54;
        local_4c = min;
        if (uVar9 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar10 = 0;
          do {
            if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
                 ((long)&pIVar3->interfaceType + lVar10) ==
                TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
              pVVar5 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar10) + 4);
              goto label_05dc8b64;
            }
            lVar10 = lVar10 + 0x10;
          } while (uVar9 * 0x10 != lVar10);
        }
        pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar1,(Il2CppClass *)
                                   TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,4);
label_05dc8b64:
        max = (*pVVar5->methodPtr)(pIVar1,pVVar5->method);
        value = local_50;
        min = local_4c;
      }
      if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Slider_5268360
                           (__this_00,id_00,value,false,__this_01,pSVar8,min,max,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        pGVar4 = local_38;
        pGVar6 = (local_38->fields)._descriptor;
        if (pGVar6 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
          local_58[0].hasValue = false;
          local_58[0].value = false;
          System_Nullable_bool____ctor
                    ((System_Nullable_bool__o *)local_58,(pGVar6->fields).Disabled == false,
                     (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
          if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar7->fields).enabled.fields = local_58[0];
            __this_02 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition)
            ;
            Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_02,(MethodInfo *)0x0);
            pGVar6 = (pGVar4->fields)._descriptor;
            if (pGVar6 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
              pSVar8 = (pGVar6->fields).Id;
              if (Il2CppMethodInitialized_075481dc == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&".controlValue");
                Il2CppMethodInitialized_075481dc = '\x01';
              }
              pSVar8 = System_String__Concat_52f0320(pSVar8,".controlValue",(MethodInfo *)0x0);
              if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
                (__this_02->fields).value = pSVar8;
                Il2CppCodeGenWriteBarrier(&(__this_02->fields).value);
                (pGVar7->fields).bind = __this_02;
                Il2CppCodeGenWriteBarrier(&(pGVar7->fields).bind);
                return pGVar7;
              }
            }
          }
        }
      }
    }
  }
label_05dc8c8b:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$UpdateSliderValueText
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__UpdateSliderValueText (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5dc8c90

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__UpdateSliderValueText
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075481d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075481d2 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  method_00 = extraout_RDX;
  if (bVar1) {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    root = UnityEngine_GameObject__GetComponentInParent_object_
                     (context.fields.GameObject,
                      (MethodInfo_353BB40 *)
                      MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    method_00 = extraout_RDX_00;
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SyncValue(root,(__this->fields)._descriptor,method_00);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$SliderValueKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderValueKey (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, const MethodInfo* method);
// 0x5dc8d40

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderValueKey
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  System_String_o *pSVar2;
  
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = (pGVar1->fields).Id;
  if (Il2CppMethodInitialized_075481db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".value");
    Il2CppMethodInitialized_075481db = '\x01';
  }
  pSVar2 = System_String__Concat_52f0320(pSVar2,".value",(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$SliderValueText
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderValueText (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, const MethodInfo* method);
// 0x5dc8dd0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderValueText
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderValueText_5cc8de0
                     ((__this->fields)._descriptor,method);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$BuildInput
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildInput (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x5dc7c70
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dc7f4e: nop 
// asm:   0x5dc805e: lea rcx, [rip + 0x178e663]
// asm:   0x5dc8065: mov rcx, qword ptr [rcx + 0x90]
// asm:   0x5dc806c: mov rcx, qword ptr [rcx + 0xb8]
// asm:   0x5dc8073: mov rsi, qword ptr [rcx]
// asm:   0x5dc8076: mov rbp, rax
// asm:   0x5dc8079: jmp 0x5dc809a

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildInput
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *pGVar2;
  Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c *pGVar3;
  Il2CppObject *pIVar4;
  Il2CppClass *pIVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  int32_t maxCharacters;
  System_String_o *pSVar7;
  ulong uVar8;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  System_Action_GisketchActionContext__o *__this_00;
  VirtualInvokeData *pVVar9;
  System_Action_GisketchActionContext__o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar10;
  System_String_o *pSVar11;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_02;
  undefined *puVar12;
  long lVar13;
  float value;
  System_Nullable_bool__Fields aSStack_58 [2];
  int iStack_54;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGStack_50;
  System_String_o *pSStack_48;
  System_String_o *pSStack_40;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_38;
  
  if (Il2CppMethodInitialized_075481d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_OnInputChanged);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_OnInputCommitted);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"-input");
    Il2CppMethodInitialized_075481d3 = '\x01';
  }
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_05dc8180;
  pSVar7 = System_String__Concat_52f0320((pGVar1->fields).Id,"-input",(MethodInfo *)0x0);
  pSVar11 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  if (Il2CppMethodInitialized_075481d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter);
    Il2CppMethodInitialized_075481d4 = '\x01';
  }
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_05dc8180;
  pGVar2 = (pGVar1->fields).Adapter;
  if (pGVar2 == (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
    iStack_54 = 2;
  }
  else {
    pGVar3 = pGVar2->klass;
    if (pGVar3 == (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c *)
                  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter) {
      iStack_54 = 0;
    }
    else {
      iStack_54 = 2 - (uint)(pGVar3 ==
                            (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c *)
                            TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter);
    }
  }
  switch((pGVar1->fields).Kind) {
  case 0:
    value = 58.0;
    break;
  case 1:
  case 2:
    value = 300.0;
    break;
  case 3:
    uVar8 = (ulong)((__this->fields)._layoutMode == 1);
    puVar12 = &g_data_0100ae58;
    goto label_05dc7e28;
  case 4:
  case 6:
    uVar8 = (ulong)((__this->fields)._layoutMode == 1);
    puVar12 = &g_data_0100ac50;
    goto label_05dc7e28;
  case 5:
    uVar8 = (ulong)((__this->fields)._layoutMode == 1);
    puVar12 = &g_data_0100acc0;
label_05dc7e28:
    value = *(float *)(puVar12 + uVar8 * 4);
    break;
  default:
    value = 360.0;
  }
  maxCharacters = 0;
  pSStack_48 = pSVar11;
  pSStack_40 = pSVar7;
  pGStack_38 = control;
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(value,(MethodInfo *)0x0);
  maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGStack_50 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_OnInputChanged,
             (MethodInfo_4A803E0 *)0x0);
  pSVar11 = "inputField";
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    pIVar4 = (Il2CppObject *)(pGVar1->fields).Adapter;
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar5 = pIVar4->klass;
      uVar8 = (ulong)(pIVar5->_2).interface_offsets_count;
      if (uVar8 != 0) {
        pIVar6 = (pIVar5->_1).interfaceOffsets;
        lVar13 = 0;
        do {
          if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
               ((long)&pIVar6->interfaceType + lVar13) ==
              TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
            pVVar9 = pIVar5->vtable + (*(int *)((long)&pIVar6->offset + lVar13) + 7);
            goto label_05dc7f89;
          }
          lVar13 = lVar13 + 0x10;
        } while (uVar8 * 0x10 != lVar13);
      }
      pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar4,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter
                          ,7);
label_05dc7f89:
      maxCharacters = (*pVVar9->methodPtr)(pIVar4,pVVar9->method);
    }
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_OnInputCommitted,
               (MethodInfo_4A803E0 *)0x0);
    if (pGStack_38 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                          (pGStack_38,pSStack_40,pSStack_48,iStack_54,pSVar11,pGStack_50,
                           (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,__this_00,0.05,
                           maxCharacters,__this_01,(MethodInfo *)0x0);
      pGVar1 = (__this->fields)._descriptor;
      if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
        pIVar4 = (Il2CppObject *)(pGVar1->fields).Adapter;
        if (pIVar4 == (Il2CppObject *)0x0) {
          pSVar11 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
        }
        else {
          pIVar5 = pIVar4->klass;
          uVar8 = (ulong)(pIVar5->_2).interface_offsets_count;
          if (uVar8 != 0) {
            pIVar6 = (pIVar5->_1).interfaceOffsets;
            lVar13 = 0;
            do {
              if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
                   ((long)&pIVar6->interfaceType + lVar13) ==
                  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
                pVVar9 = pIVar5->vtable + *(int *)((long)&pIVar6->offset + lVar13);
                goto label_05dc808e;
              }
              lVar13 = lVar13 + 0x10;
            } while (uVar8 * 0x10 != lVar13);
          }
          pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                             (pIVar4,(Il2CppClass *)
                                     TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,0);
label_05dc808e:
          pSVar11 = (*pVVar9->methodPtr)(pIVar4,pVVar9->method);
        }
        if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar10->fields).value = pSVar11;
          Il2CppCodeGenWriteBarrier(&(pGVar10->fields).value);
          pGVar1 = (__this->fields)._descriptor;
          if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
            aSStack_58[0].hasValue = false;
            aSStack_58[0].value = false;
            System_Nullable_bool____ctor
                      ((System_Nullable_bool__o *)aSStack_58,(pGVar1->fields).Disabled == false,
                       (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
            (pGVar10->fields).enabled.fields = aSStack_58[0];
            __this_02 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition)
            ;
            Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_02,(MethodInfo *)0x0);
            pGVar1 = (__this->fields)._descriptor;
            if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
              pSVar11 = (pGVar1->fields).Id;
              if (Il2CppMethodInitialized_075481dc == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&".controlValue");
                Il2CppMethodInitialized_075481dc = '\x01';
              }
              pSVar11 = System_String__Concat_52f0320(pSVar11,".controlValue",(MethodInfo *)0x0);
              if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
                (__this_02->fields).value = pSVar11;
                Il2CppCodeGenWriteBarrier(&(__this_02->fields).value);
                (pGVar10->fields).bind = __this_02;
                Il2CppCodeGenWriteBarrier(&(pGVar10->fields).bind);
                return;
              }
            }
          }
        }
      }
    }
  }
label_05dc8180:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$InputType
// il2cpp: int32_t Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__InputType (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, const MethodInfo* method);
// 0x5dc8f80

int32_t Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__InputType
                  (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *pGVar2;
  Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c *pGVar3;
  
  if (Il2CppMethodInitialized_075481d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter);
    Il2CppMethodInitialized_075481d4 = '\x01';
  }
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    ThrowNullReferenceException();
  }
  pGVar2 = (pGVar1->fields).Adapter;
  if (pGVar2 == (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
    return 2;
  }
  pGVar3 = pGVar2->klass;
  if (pGVar3 == (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c *)
                TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter) {
    return 0;
  }
  return 2 - (uint)(pGVar3 ==
                   (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c *)
                   TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter);
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$BuildActionButton
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildActionButton (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x5dc8190
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dc8233: jmp 0x5dc8325

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildActionButton
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  System_Action_GisketchActionContext__o *action;
  MethodInfo *pMVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  System_String_o *id;
  ulong uVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  uint *method_00;
  System_String_o *text;
  float minWidth;
  
  if (Il2CppMethodInitialized_075481d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-button");
    Il2CppMethodInitialized_075481d5 = '\x01';
  }
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
label_05dc8325:
    ThrowNullReferenceException();
  }
  text = (pGVar1->fields).ActionText;
  action = (pGVar1->fields).Action;
  if (action == (System_Action_GisketchActionContext__o *)0x0) {
    if (text == (System_String_o *)0x0) {
      text = (pGVar1->fields).Label;
    }
    pSVar3 = (pGVar1->fields).ActionId;
    id = System_String__Concat_52f0320((pGVar1->fields).Id,"-button",(MethodInfo *)0x0);
    if (control == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05dc8325;
    node = Gisketch_Aottg2UI_Code_AottgUi__Button
                     (control,1,text,pSVar3,id,(System_String_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                      (MethodInfo *)0x0);
    pGVar1 = (__this->fields)._descriptor;
    pMVar2 = extraout_RDX_00;
  }
  else {
    if (text == (System_String_o *)0x0) {
      text = (pGVar1->fields).Label;
    }
    pSVar3 = System_String__Concat_52f0320((pGVar1->fields).Id,"-button",(MethodInfo *)0x0);
    if (control == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05dc8325;
    node = Gisketch_Aottg2UI_Code_AottgUi__Button_5265860
                     (control,1,text,action,pSVar3,(System_String_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                      (MethodInfo *)0x0);
    pGVar1 = (__this->fields)._descriptor;
    pMVar2 = extraout_RDX;
  }
  if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_05dc8325;
  method_00 = &switchD_05dc82b3::switchdataD_010a5fb0;
  switch((pGVar1->fields).Kind) {
  case 0:
    minWidth = 58.0;
    goto label_05dc830f;
  case 1:
  case 2:
    minWidth = 300.0;
    goto label_05dc830f;
  case 3:
    uVar4 = (ulong)((__this->fields)._layoutMode == 1);
    method_00 = (uint *)&g_data_0100ae58;
    break;
  case 4:
  case 6:
    uVar4 = (ulong)((__this->fields)._layoutMode == 1);
    method_00 = (uint *)&g_data_0100ac50;
    break;
  case 5:
    uVar4 = (ulong)((__this->fields)._layoutMode == 1);
    method_00 = (uint *)&g_data_0100acc0;
    break;
  default:
    minWidth = 360.0;
    method_00 = (uint *)pMVar2;
    goto label_05dc830f;
  }
  minWidth = *(float *)((long)&((MethodInfo *)method_00)->methodPointer + uVar4 * 4);
label_05dc830f:
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplyControlLayout
            (__this,node,minWidth,(MethodInfo *)method_00);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$BuildReadOnly
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildReadOnly (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x5dc8330
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dc83fe: lea rcx, [rip + 0x178e2c3]
// asm:   0x5dc8405: mov rcx, qword ptr [rcx + 0x90]
// asm:   0x5dc840c: mov rcx, qword ptr [rcx + 0xb8]
// asm:   0x5dc8413: mov rbx, qword ptr [rcx]
// asm:   0x5dc8416: jmp 0x5dc8447
// asm:   0x5dc8444: mov r12, r13

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__BuildReadOnly
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  VirtualInvokeData *pVVar3;
  System_String_o *text;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar4;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  ulong uVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  undefined *puVar8;
  long lVar9;
  float value;
  
  if (Il2CppMethodInitialized_075481d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"-value");
    Il2CppMethodInitialized_075481d6 = '\x01';
  }
  pGVar4 = (__this->fields)._descriptor;
  if (pGVar4 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_05dc85d5;
  text = (pGVar4->fields).ReadOnlyText;
  if (text == (System_String_o *)0x0) {
    obj = (Il2CppObject *)(pGVar4->fields).Adapter;
    if (obj == (Il2CppObject *)0x0) {
      text = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    else {
      pIVar1 = obj->klass;
      uVar6 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar6 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar9 = 0;
        do {
          if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
               ((long)&pIVar2->interfaceType + lVar9) ==
              TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
            pVVar3 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar9);
            goto label_05dc842b;
          }
          lVar9 = lVar9 + 0x10;
        } while (uVar6 * 0x10 != lVar9);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,0)
      ;
label_05dc842b:
      text = (*pVVar3->methodPtr)(obj,pVVar3->method);
      pGVar4 = (__this->fields)._descriptor;
      if (pGVar4 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_05dc85d5;
    }
  }
  id = System_String__Concat_52f0320((pGVar4->fields).Id,"-value",(MethodInfo *)0x0);
  if (control == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05dc85d5;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                     (control,text,"text",id,(System_String_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pGVar4 = (__this->fields)._descriptor;
  if (pGVar4 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_05dc85d5;
  switch((pGVar4->fields).Kind) {
  case 0:
    value = 58.0;
    break;
  case 1:
  case 2:
    value = 300.0;
    break;
  case 3:
    uVar6 = (ulong)((__this->fields)._layoutMode == 1);
    puVar8 = &g_data_0100ae58;
    goto label_05dc8509;
  case 4:
  case 6:
    uVar6 = (ulong)((__this->fields)._layoutMode == 1);
    puVar8 = &g_data_0100ac50;
    goto label_05dc8509;
  case 5:
    uVar6 = (ulong)((__this->fields)._layoutMode == 1);
    puVar8 = &g_data_0100acc0;
label_05dc8509:
    value = *(float *)(puVar8 + uVar6 * 4);
    break;
  default:
    value = 360.0;
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(value,(MethodInfo *)0x0);
  maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar5->fields).layout = pGVar7;
    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout);
    return;
  }
label_05dc85d5:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$OnValueChanged
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__OnValueChanged (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5dc9000
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dc90f5: movups xmm0, xmmword ptr [r12]
// asm:   0x5dc90fa: movups xmm1, xmmword ptr [r12 + 0x10]
// asm:   0x5dc9100: movaps xmmword ptr [rsp + 0x30], xmm1
// asm:   0x5dc9105: movaps xmmword ptr [rsp + 0x20], xmm0
// asm:   0x5dc910a: jmp 0x5dc917f

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__OnValueChanged
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  bool bVar3;
  VirtualInvokeData *pVVar4;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  ulong uVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  long lVar6;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *__this_00;
  
  if (Il2CppMethodInitialized_075481d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075481d7 = '\x01';
  }
  __this_00 = (__this->fields)._descriptor;
  if (__this_00 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
label_05dc91a3:
    ThrowNullReferenceException();
  }
  obj = (Il2CppObject *)(__this_00->fields).Adapter;
  if (obj != (Il2CppObject *)0x0) {
    pIVar1 = obj->klass;
    uVar5 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar5 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar6 = 0;
      do {
        if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
             ((long)&pIVar2->interfaceType + lVar6) ==
            TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
          pVVar4 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar6) + 0xb);
          goto label_05dc90c5;
        }
        lVar6 = lVar6 + 0x10;
      } while (uVar5 * 0x10 != lVar6);
    }
    pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                       (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,0xb)
    ;
label_05dc90c5:
    method = pVVar4->method;
    (*pVVar4->methodPtr)(obj,context,method);
    __this_00 = (__this->fields)._descriptor;
    if (__this_00 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_05dc91a3;
  }
  if ((__this_00->fields).Kind != 4) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    method_00 = extraout_RDX;
    if (bVar3) {
      if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) goto label_05dc91a3;
      root = UnityEngine_GameObject__GetComponentInParent_object_
                       (context.fields.GameObject,
                        (MethodInfo_353BB40 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
      method_00 = extraout_RDX_00;
    }
    method = (MethodInfo *)(__this->fields)._descriptor;
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SyncValue
              (root,(Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)method,method_00);
    __this_00 = (__this->fields)._descriptor;
    if (__this_00 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_05dc91a3;
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor__Changed(__this_00,context,method);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$OnInputChanged
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__OnInputChanged (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5dc91b0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dc9219: nop dword ptr [rax]
// asm:   0x5dc923e: movups xmm0, xmmword ptr [r15]
// asm:   0x5dc9242: movups xmm1, xmmword ptr [r15 + 0x10]
// asm:   0x5dc9247: movaps xmmword ptr [rsp + 0x30], xmm1
// asm:   0x5dc924c: movaps xmmword ptr [rsp + 0x20], xmm0
// asm:   0x5dc9251: jmp 0x5dc92a1

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__OnInputChanged
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *__this_00;
  
  if (Il2CppMethodInitialized_075481d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    Il2CppMethodInitialized_075481d8 = '\x01';
  }
  __this_00 = (__this->fields)._descriptor;
  if (__this_00 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
label_05dc92c3:
    ThrowNullReferenceException();
  }
  obj = (Il2CppObject *)(__this_00->fields).Adapter;
  if (obj != (Il2CppObject *)0x0) {
    pIVar1 = obj->klass;
    uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar4 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar5 = 0;
      do {
        if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
             ((long)&pIVar2->interfaceType + lVar5) ==
            TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
          pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 0xb);
          goto label_05dc926a;
        }
        lVar5 = lVar5 + 0x10;
      } while (uVar4 * 0x10 != lVar5);
    }
    pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                       (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,0xb)
    ;
label_05dc926a:
    method = pVVar3->method;
    (*pVVar3->methodPtr)(obj,context,method);
    __this_00 = (__this->fields)._descriptor;
    if (__this_00 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_05dc92c3;
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor__Changed(__this_00,context,method);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$OnInputCommitted
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__OnInputCommitted (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5dc92d0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__OnInputCommitted
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *__this_00;
  System_Action_GisketchActionContext__o *pSVar3;
  bool bVar4;
  VirtualInvokeData *pVVar5;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  ulong uVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar7;
  long lVar8;
  
  if (Il2CppMethodInitialized_075481d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075481d9 = '\x01';
  }
  pGVar7 = (__this->fields)._descriptor;
  if (pGVar7 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    obj = (Il2CppObject *)(pGVar7->fields).Adapter;
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar6 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar6 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar8 = 0;
        do {
          if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
               ((long)&pIVar2->interfaceType + lVar8) ==
              TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
            pVVar5 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar8) + 0xb);
            goto label_05dc9395;
          }
          lVar8 = lVar8 + 0x10;
        } while (uVar6 * 0x10 != lVar8);
      }
      pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
                          0xb);
label_05dc9395:
      (*pVVar5->methodPtr)(obj,context,pVVar5->method);
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    method_00 = extraout_RDX;
    if (bVar4) {
      if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) goto label_05dc9463;
      root = UnityEngine_GameObject__GetComponentInParent_object_
                       (context.fields.GameObject,
                        (MethodInfo_353BB40 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
      method_00 = extraout_RDX_00;
    }
    pGVar7 = (__this->fields)._descriptor;
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SyncValue(root,pGVar7,method_00);
    __this_00 = (__this->fields)._descriptor;
    if (__this_00 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor__Changed(__this_00,context,(MethodInfo *)pGVar7)
      ;
      pGVar7 = (__this->fields)._descriptor;
      if (pGVar7 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
        pSVar3 = (pGVar7->fields).OnCommitted;
        if (pSVar3 == (System_Action_GisketchActionContext__o *)0x0) {
          return;
        }
        (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,(pSVar3->fields).method);
        return;
      }
    }
  }
label_05dc9463:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$SyncSliderValue
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SyncSliderValue (Gisketch_Aottg2UI_GisketchUIRoot_o* root, Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o* descriptor, const MethodInfo* method);
// 0x5dc8d30

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SyncSliderValue
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *descriptor,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SyncValue(root,descriptor,method);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$SyncValue
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SyncValue (Gisketch_Aottg2UI_GisketchUIRoot_o* root, Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o* descriptor, const MethodInfo* method);
// 0x5dc72a0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SyncValue
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *descriptor,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar1;
  bool bVar2;
  MethodInfo *method_00;
  System_String_o *pSVar3;
  System_String_o *value;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_075481da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075481da = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((descriptor != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) && (!bVar2)) &&
     ((descriptor->fields).Adapter != (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0)) {
    if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      ThrowNullReferenceException();
    }
    pGVar1 = (root->fields)._State_k__BackingField;
    if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      pSVar3 = (descriptor->fields).Id;
      if (Il2CppMethodInitialized_075481dc == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&".controlValue");
        Il2CppMethodInitialized_075481dc = '\x01';
      }
      method_01 = (MethodInfo *)".controlValue";
      method_00 = (MethodInfo *)System_String__Concat_52f0320(pSVar3,".controlValue",(MethodInfo *)0x0);
      pSVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ControlValueText
                         ((descriptor->fields).Adapter,method_01);
      Gisketch_Aottg2UI_State_GisketchUIState__Set
                (pGVar1,(System_String_o *)method_00,pSVar3,(MethodInfo *)0x0);
    }
    if (((descriptor->fields).ShowValue != false) &&
       (pGVar1 = (root->fields)._State_k__BackingField,
       pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
      pSVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderValueKey_5cc8d90
                         ((descriptor->fields).Id,method_00);
      value = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderValueText_5cc8de0(descriptor,method_00);
      Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar1,pSVar3,value,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$SliderValueKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderValueKey (System_String_o* id, const MethodInfo* method);
// 0x5dc8d90

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderValueKey_5cc8d90
          (System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075481db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".value");
    Il2CppMethodInitialized_075481db = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320(id,".value",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$ControlValueKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ControlValueKey (System_String_o* id, const MethodInfo* method);
// 0x5dc85e0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ControlValueKey(System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075481dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".controlValue");
    Il2CppMethodInitialized_075481dc = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320(id,".controlValue",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$SliderValueText
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderValueText (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o* descriptor, const MethodInfo* method);
// 0x5dc8de0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderValueText_5cc8de0
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *descriptor,MethodInfo *method)

{
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  ulong uVar3;
  VirtualInvokeData *pVVar4;
  System_String_o *pSVar5;
  System_Globalization_CultureInfo_o *provider;
  long lVar6;
  float local_c;
  
  if (Il2CppMethodInitialized_075481dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&"0.##");
    il2cpp_codegen_initialize_runtime_metadata(&"0");
    Il2CppMethodInitialized_075481dd = '\x01';
  }
  if ((descriptor == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) ||
     (obj = (Il2CppObject *)(descriptor->fields).Adapter, obj == (Il2CppObject *)0x0)) {
    return "0";
  }
  pIVar1 = obj->klass;
  if (pIVar1 == (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter) {
    uVar3 = (ulong)(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter->_2).
                   interface_offsets_count;
    if (uVar3 != 0) {
      pIVar2 = (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter->_1).interfaceOffsets;
      lVar6 = 0;
      do {
        if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
             ((long)&pIVar2->interfaceType + lVar6) ==
            TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
          pVVar4 = &(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter->vtable)._0_Equals +
                   (*(int *)((long)&pIVar2->offset + lVar6) + 1);
          goto label_05dc8f27;
        }
        lVar6 = lVar6 + 0x10;
      } while (uVar3 * 0x10 != lVar6);
    }
    pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                       (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,1);
label_05dc8f27:
    local_c = (*pVVar4->methodPtr)(obj,pVVar4->method);
    if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
    }
    provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    pSVar5 = System_Single__ToString_54d0ad0
                       (&local_c,"0.##",(System_IFormatProvider_o *)provider,(MethodInfo *)0x0)
    ;
    return pSVar5;
  }
  uVar3 = (ulong)(pIVar1->_2).interface_offsets_count;
  if (uVar3 != 0) {
    pIVar2 = (pIVar1->_1).interfaceOffsets;
    lVar6 = 0;
    do {
      if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)((long)&pIVar2->interfaceType + lVar6)
          == TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
        pVVar4 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar6);
        goto label_05dc8f00;
      }
      lVar6 = lVar6 + 0x10;
    } while (uVar3 * 0x10 != lVar6);
  }
  pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                     (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,0);
label_05dc8f00:
  pSVar5 = (*pVVar4->methodPtr)(obj,pVVar4->method);
  return pSVar5;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$ControlValueText
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ControlValueText (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o* adapter, const MethodInfo* method);
// 0x5dc9470

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ControlValueText
          (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *adapter,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c *pGVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  ulong uVar3;
  VirtualInvokeData *pVVar4;
  System_String_o *pSVar5;
  System_Globalization_CultureInfo_o *provider;
  long lVar6;
  float local_c;
  
  if (Il2CppMethodInitialized_075481de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    Il2CppMethodInitialized_075481de = '\x01';
  }
  if (adapter == (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  pGVar1 = adapter->klass;
  if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c *)
                TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter) {
    uVar3 = (ulong)(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter->_2).
                   interface_offsets_count;
    if (uVar3 != 0) {
      pIVar2 = (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter->_1).interfaceOffsets;
      lVar6 = 0;
      do {
        if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
             ((long)&pIVar2->interfaceType + lVar6) ==
            TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
          pVVar4 = &(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter->vtable)._0_Equals +
                   (*(int *)((long)&pIVar2->offset + lVar6) + 1);
          goto label_05dc95a7;
        }
        lVar6 = lVar6 + 0x10;
      } while (uVar3 * 0x10 != lVar6);
    }
    pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)adapter,
                        (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,1);
label_05dc95a7:
    local_c = (*pVVar4->methodPtr)((Il2CppObject *)adapter,pVVar4->method);
    if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
    }
    provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    pSVar5 = System_Single__ToString_54d09f0(&local_c,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
    return pSVar5;
  }
  uVar3 = (ulong)(pGVar1->_2).interface_offsets_count;
  if (uVar3 != 0) {
    pIVar2 = (pGVar1->_1).interfaceOffsets;
    lVar6 = 0;
    do {
      if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)((long)&pIVar2->interfaceType + lVar6)
          == TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
        pVVar4 = &((Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_VTable *)pGVar1->vtable)->
                  _0_Equals + *(int *)((long)&pIVar2->offset + lVar6);
        goto label_05dc9580;
      }
      lVar6 = lVar6 + 0x10;
    } while (uVar3 * 0x10 != lVar6);
  }
  pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)adapter,
                      (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,0);
label_05dc9580:
  pSVar5 = (*pVVar4->methodPtr)((Il2CppObject *)adapter,pVVar4->method);
  return pSVar5;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$ChoiceOptions
// il2cpp: Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ChoiceOptions (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, const MethodInfo* method);
// 0x5dc8780
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dc8819: nop dword ptr [rax]

Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ChoiceOptions
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar4;
  ulong uVar5;
  MethodInfo *method_00;
  ulong uVar6;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o **targetAddress;
  
  if (Il2CppMethodInitialized_075481df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array);
    Il2CppMethodInitialized_075481df = '\x01';
  }
  pGVar2 = (__this->fields)._descriptor;
  if (pGVar2 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
label_05dc8870:
    ThrowNullReferenceException();
  }
  pGVar3 = (pGVar2->fields).Options;
  if (pGVar3 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)0x0) {
    pGVar3 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array,0);
    if (pGVar3 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)0x0) goto label_05dc8870;
  }
  uVar1 = (uint)pGVar3->max_length;
  method_00 = (MethodInfo *)(ulong)uVar1;
  pGVar4 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array,uVar1);
  if (0 < (int)pGVar3->max_length) {
    __this_00 = pGVar3->m_Items;
    if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__ToChoice(__this_00,method_00);
      ThrowNullReferenceException();
    }
    uVar5 = pGVar3->max_length & 0xffffffff;
    targetAddress = pGVar4->m_Items;
    uVar6 = 0;
    do {
      if (uVar5 <= uVar6) {
label_05dc886b:
        ThrowIndexOutOfRangeException();
      }
      method_00 = (MethodInfo *)
                  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__ToChoice(__this_00,method_00);
      if ((uint)pGVar4->max_length <= uVar6) goto label_05dc886b;
      *targetAddress = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)method_00;
      Il2CppCodeGenWriteBarrier(targetAddress);
      uVar6 = uVar6 + 1;
      uVar1 = (uint)pGVar3->max_length;
      uVar5 = (ulong)uVar1;
      __this_00 = __this_00 + 1;
      targetAddress = targetAddress + 1;
    } while ((long)uVar6 < (long)(int)uVar1);
  }
  return pGVar4;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$PreferredControlWidth
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__PreferredControlWidth (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, const MethodInfo* method);
// 0x5dc70c0

float Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__PreferredControlWidth
                (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    ThrowNullReferenceException();
  }
  switch((pGVar1->fields).Kind) {
  case 0:
    return 58.0;
  case 1:
  case 2:
    return 300.0;
  case 3:
    return *(float *)(&g_data_0100ae58 + (ulong)((__this->fields)._layoutMode == 1) * 4);
  case 4:
  case 6:
    return *(float *)(&g_data_0100ac50 + (ulong)((__this->fields)._layoutMode == 1) * 4);
  case 5:
    return *(float *)(&g_data_0100acc0 + (ulong)((__this->fields)._layoutMode == 1) * 4);
  default:
    return 360.0;
  }
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$PreferredControlVisualWidth
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__PreferredControlVisualWidth (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, const MethodInfo* method);
// 0x5dc7150

float Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__PreferredControlVisualWidth
                (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  float fVar2;
  
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar2 = 58.0;
  switch((pGVar1->fields).Kind) {
  case 0:
    break;
  case 1:
  case 2:
    return 300.0;
  case 3:
    return *(float *)(&g_data_0100ae58 + (ulong)((__this->fields)._layoutMode == 1) * 4);
  case 4:
  case 6:
    return *(float *)(&g_data_0100ac50 + (ulong)((__this->fields)._layoutMode == 1) * 4);
  case 5:
    return *(float *)(&g_data_0100acc0 + (ulong)((__this->fields)._layoutMode == 1) * 4);
  default:
    fVar2 = 360.0;
  }
  return fVar2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$ApplyControlLayout
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplyControlLayout (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, float minWidth, const MethodInfo* method);
// 0x5dc8620

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__ApplyControlLayout
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,float minWidth,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  System_Nullable_bool__Fields local_18 [2];
  float local_14;
  
  local_14 = minWidth;
  if (Il2CppMethodInitialized_075481e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_075481e0 = '\x01';
  }
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pGVar1 = (__this->fields)._descriptor;
    if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_18[0].hasValue = false;
    local_18[0].value = false;
    System_Nullable_bool____ctor
              ((System_Nullable_bool__o *)local_18,(pGVar1->fields).Disabled == false,
               (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
    (node->fields).enabled.fields = local_18[0];
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(local_14,(MethodInfo *)0x0);
    maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row","Center","Center",
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    (node->fields).layout = pGVar2;
    Il2CppCodeGenWriteBarrier(&(node->fields).layout);
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$<BuildSwitch>b__10_0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___BuildSwitch_b__10_0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5dc95f0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___BuildSwitch_b__10_0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *__this_00;
  bool bVar3;
  VirtualInvokeData *pVVar4;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  ulong uVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar6;
  long lVar7;
  
  if (Il2CppMethodInitialized_075481e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_075481e1 = '\x01';
  }
  pGVar6 = (__this->fields)._descriptor;
  if (pGVar6 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    obj = (Il2CppObject *)(pGVar6->fields).Adapter;
    if (obj != (Il2CppObject *)0x0) {
      if (context.fields.Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        bVar3 = false;
      }
      else {
        bVar3 = System_String__op_Equality
                          (((context.fields.Node)->fields).value,"true",(MethodInfo *)0x0);
      }
      pIVar1 = obj->klass;
      uVar5 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar5 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar7 = 0;
        do {
          if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
               ((long)&pIVar2->interfaceType + lVar7) ==
              TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
            pVVar4 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar7) + 8);
            goto label_05dc96e5;
          }
          lVar7 = lVar7 + 0x10;
        } while (uVar5 * 0x10 != lVar7);
      }
      pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,8)
      ;
label_05dc96e5:
      (*pVVar4->methodPtr)(obj,bVar3,pVVar4->method);
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    method_00 = extraout_RDX;
    if (bVar3) {
      if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) goto label_05dc975e;
      root = UnityEngine_GameObject__GetComponentInParent_object_
                       (context.fields.GameObject,
                        (MethodInfo_353BB40 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
      method_00 = extraout_RDX_00;
    }
    pGVar6 = (__this->fields)._descriptor;
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SyncValue(root,pGVar6,method_00);
    __this_00 = (__this->fields)._descriptor;
    if (__this_00 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor__Changed(__this_00,context,(MethodInfo *)pGVar6)
      ;
      return;
    }
  }
label_05dc975e:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$<BuildSlider>b__12_0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___BuildSlider_b__12_0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x5dc9770

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___BuildSlider_b__12_0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  System_Action_GisketchActionContext__o *__this_00;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  MethodInfo *in_RCX;
  System_Nullable_bool__Fields local_30 [4];
  
  if (Il2CppMethodInitialized_075481e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_BuildSlider_b__12_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-value-button");
    il2cpp_codegen_initialize_runtime_metadata(&"-slider");
    Il2CppMethodInitialized_075481e2 = '\x01';
  }
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    pSVar2 = System_String__Concat_52f0320((pGVar1->fields).Id,"-slider",(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderNode(__this,row,pSVar2,in_RCX);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).layout = pGVar5;
      Il2CppCodeGenWriteBarrier(&(pGVar3->fields).layout);
      pSVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SliderValueText_5cc8de0
                         ((__this->fields)._descriptor,(MethodInfo *)pGVar5);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor
                (__this_00,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_BuildSlider_b__12_1,
                 (MethodInfo_4A803E0 *)0x0);
      pGVar1 = (__this->fields)._descriptor;
      if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
        id = System_String__Concat_52f0320((pGVar1->fields).Id,"-value-button",(MethodInfo *)0x0);
        if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button_5265860
                             (row,5,pSVar2,__this_00,id,(System_String_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                              (MethodInfo *)0x0);
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
          Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_01,(MethodInfo *)0x0);
          pGVar1 = (__this->fields)._descriptor;
          if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
            pSVar2 = (pGVar1->fields).Id;
            if (Il2CppMethodInitialized_075481db == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&".value");
              Il2CppMethodInitialized_075481db = '\x01';
            }
            pSVar2 = System_String__Concat_52f0320(pSVar2,".value",(MethodInfo *)0x0);
            if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
              (__this_01->fields).text = pSVar2;
              Il2CppCodeGenWriteBarrier(&(__this_01->fields).text);
              if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                (pGVar3->fields).bind = __this_01;
                Il2CppCodeGenWriteBarrier(&(pGVar3->fields).bind);
                pGVar1 = (__this->fields)._descriptor;
                if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
                  local_30[0].hasValue = false;
                  local_30[0].value = false;
                  System_Nullable_bool____ctor
                            ((System_Nullable_bool__o *)local_30,(pGVar1->fields).Disabled == false,
                             (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
                  (pGVar3->fields).enabled.fields = local_30[0];
                  (pGVar3->fields).clip = true;
                  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(80.0,(MethodInfo *)0x0);
                  minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(80.0,(MethodInfo *)0x0);
                  maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(80.0,(MethodInfo *)0x0);
                  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minWidth,
                                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,
                                      0.0,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
                  (pGVar3->fields).layout = pGVar5;
                  Il2CppCodeGenWriteBarrier(&(pGVar3->fields).layout);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$<BuildSlider>b__12_1
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___BuildSlider_b__12_1 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5dc9ae0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___BuildSlider_b__12_1
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__Open
            (context,(__this->fields)._descriptor,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$<SliderNode>b__13_0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___SliderNode_b__13_0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5dc9af0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___SliderNode_b__13_0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *s;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *__this_00;
  bool bVar3;
  System_Globalization_CultureInfo_o *provider;
  VirtualInvokeData *pVVar4;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  ulong uVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar6;
  long lVar7;
  float fVar8;
  
  if (Il2CppMethodInitialized_075481e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    Il2CppMethodInitialized_075481e3 = '\x01';
  }
  pGVar6 = (__this->fields)._descriptor;
  if (pGVar6 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    obj = (Il2CppObject *)(pGVar6->fields).Adapter;
    if (obj != (Il2CppObject *)0x0) {
      if (context.fields.Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_05dc9c90;
      s = ((context.fields.Node)->fields).value;
      if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
      }
      provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      fVar8 = System_Single__Parse_54d0cc0(s,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
      pIVar1 = obj->klass;
      uVar5 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar5 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar7 = 0;
        do {
          if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
               ((long)&pIVar2->interfaceType + lVar7) ==
              TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
            pVVar4 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar7) + 9);
            goto label_05dc9bf1;
          }
          lVar7 = lVar7 + 0x10;
        } while (uVar5 * 0x10 != lVar7);
      }
      pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,9)
      ;
label_05dc9bf1:
      (*pVVar4->methodPtr)(fVar8,obj);
    }
    if (Il2CppMethodInitialized_075481d2 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_075481d2 = '\x01';
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    method_00 = extraout_RDX;
    if (bVar3) {
      if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) goto label_05dc9c90;
      root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
             UnityEngine_GameObject__GetComponentInParent_object_
                       (context.fields.GameObject,
                        (MethodInfo_353BB40 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
      method_00 = extraout_RDX_00;
    }
    pGVar6 = (__this->fields)._descriptor;
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow__SyncValue(root,pGVar6,method_00);
    __this_00 = (__this->fields)._descriptor;
    if (__this_00 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor__Changed(__this_00,context,(MethodInfo *)pGVar6)
      ;
      return;
    }
  }
label_05dc9c90:
  ThrowNullReferenceException();
}


