// Type: Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgToggleColorSettingRow.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o* descriptor, const MethodInfo* method);
// 0x5e4ad80

void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o *__this,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *descriptor,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._descriptor = descriptor;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._descriptor);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow__Build (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5e56ec0

void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow__Build
               (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  int32_t layoutMode;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  System_String_o *id;
  System_String_o *label;
  System_String_o *labelKey;
  System_String_o *tooltip;
  System_String_o *searchTitle;
  System_String_o *tooltipKey;
  System_String_o *searchKeywords;
  System_String_o *icon;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_Fields searchContext;
  System_Func_string__o *pSVar2;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this_01;
  
  if (Il2CppMethodInitialized_0754867e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_BuildControl);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_Build_b__4_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string);
    Il2CppMethodInitialized_0754867e = '\x01';
  }
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    return;
  }
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string);
  System_Func_object____ctor
            ((System_Func_object__o *)pSVar2,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_Build_b__4_0,
             (MethodInfo_4F0C6A0 *)0x0);
  (pGVar1->fields).DirtyValue = pSVar2;
  Il2CppCodeGenWriteBarrier(&(pGVar1->fields).DirtyValue);
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    id = (pGVar1->fields).Id;
    label = (pGVar1->fields).Label;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_BuildControl,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = (__this->fields)._descriptor;
    if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
      labelKey = (pGVar1->fields).LabelKey;
      tooltip = (pGVar1->fields).Tooltip;
      searchTitle = (pGVar1->fields).SearchTitle;
      searchKeywords = (pGVar1->fields).SearchKeywords;
      icon = (pGVar1->fields).Icon;
      tooltipKey = (pGVar1->fields).TooltipKey;
      pSVar2 = (pGVar1->fields).DirtyValue;
      layoutMode = (__this->fields)._layoutMode;
      searchContext = (__this->fields)._searchContext.fields;
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame);
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___ctor
                (__this_01,id,label,200.0,__this_00,tooltip,searchTitle,searchKeywords,icon,
                 (System_Nullable_float__o)0x0,labelKey,tooltipKey,(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o)searchContext,pSVar2,
                 (System_String_o *)0x0,(System_String_o *)0x0,layoutMode,(MethodInfo *)0x0);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$ApplySearchContext
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow__ApplySearchContext (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context, const MethodInfo* method);
// 0x5e57130

void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow__ApplySearchContext
               (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o *__this,
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


// Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$ApplyLayoutMode
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow__ApplyLayoutMode (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o* __this, int32_t mode, const MethodInfo* method);
// 0x5e57160

void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow__ApplyLayoutMode
               (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o *__this,int32_t mode,
               MethodInfo *method)

{
  (__this->fields)._layoutMode = mode;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$SyncState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow__SyncState (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o* __this, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x5e57170
// asm: 17 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e572b8: lea rcx, [rip + 0x149e099]  ; "false"
// asm:   0x5e572bf: mov rdx, qword ptr [rcx]
// asm:   0x5e572c2: mov r13, rax
// asm:   0x5e572c5: jmp 0x5e572ef
// asm:   0x5e5738d: nop dword ptr [rax]
// asm:   0x5e573b1: xor ecx, ecx
// asm:   0x5e573b3: mov r13, rax
// asm:   0x5e573b6: jmp 0x5e573e4
// asm:   0x5e573e2: mov ecx, eax
// asm:   0x5e57459: nop dword ptr [rax]
// asm:   0x5e5747e: lea rcx, [rip + 0x1477e03]  ; "#FFFFFFFF"
// asm:   0x5e57485: mov r12, qword ptr [rcx]
// asm:   0x5e57488: mov r13, rax
// asm:   0x5e5748b: lea rax, [rip + 0x1423f5e]  ; TypeInfo_UnityEngine_Object
// asm:   0x5e57492: mov rdi, qword ptr [rax]
// asm:   0x5e57495: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x5e5749e: jmp 0x5e574d2

void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow__SyncState
               (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o *__this,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar2;
  Il2CppObject *pIVar3;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  bool bVar6;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar7;
  System_String_o *pSVar8;
  VirtualInvokeData *pVVar9;
  System_String_o *pSVar10;
  UnityEngine_GameObject_o *source;
  ulong uVar11;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  long lVar12;
  
  if (Il2CppMethodInitialized_0754867f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"-color");
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFFFF");
    il2cpp_codegen_initialize_runtime_metadata(&"false");
    Il2CppMethodInitialized_0754867f = '\x01';
  }
  pGVar7 = (__this->fields)._descriptor;
  if (pGVar7 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    return;
  }
  if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    pGVar2 = (root->fields)._State_k__BackingField;
    if (pGVar2 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      if (Il2CppMethodInitialized_07548682 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&".controlValue");
        Il2CppMethodInitialized_07548682 = '\x01';
        pGVar7 = (__this->fields)._descriptor;
        if (pGVar7 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_05e57562;
      }
      pSVar8 = System_String__Concat_52f0320((pGVar7->fields).Id,".controlValue",(MethodInfo *)0x0);
      pGVar7 = (__this->fields)._descriptor;
      if (pGVar7 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_05e57562;
      pIVar3 = (Il2CppObject *)(pGVar7->fields).Adapter;
      if (pIVar3 == (Il2CppObject *)0x0) {
        pSVar10 = "false";
      }
      else {
        pIVar4 = pIVar3->klass;
        uVar11 = (ulong)(pIVar4->_2).interface_offsets_count;
        if (uVar11 != 0) {
          pIVar5 = (pIVar4->_1).interfaceOffsets;
          lVar12 = 0;
          do {
            if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
                 ((long)&pIVar5->interfaceType + lVar12) ==
                TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
              pVVar9 = pIVar4->vtable + *(int *)((long)&pIVar5->offset + lVar12);
              goto label_05e572da;
            }
            lVar12 = lVar12 + 0x10;
          } while (uVar11 * 0x10 != lVar12);
        }
        pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar3,(Il2CppClass *)
                                   TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,0);
label_05e572da:
        pSVar10 = (*pVVar9->methodPtr)(pIVar3,pVVar9->method);
        if (pIVar3 == (Il2CppObject *)0x0) goto label_05e57562;
      }
      Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar2,pSVar8,pSVar10,(MethodInfo *)0x0);
      pGVar2 = (root->fields)._State_k__BackingField;
      if (pGVar2 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        if (Il2CppMethodInitialized_07548681 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&".color.enabled");
          Il2CppMethodInitialized_07548681 = '\x01';
        }
        pGVar7 = (__this->fields)._descriptor;
        if (pGVar7 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_05e57562;
        pSVar8 = System_String__Concat_52f0320((pGVar7->fields).Id,".color.enabled",(MethodInfo *)0x0);
        pGVar7 = (__this->fields)._descriptor;
        if (pGVar7 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_05e57562;
        pIVar3 = (Il2CppObject *)(pGVar7->fields).Adapter;
        if (pIVar3 == (Il2CppObject *)0x0) {
          bVar6 = false;
        }
        else {
          pIVar4 = pIVar3->klass;
          uVar11 = (ulong)(pIVar4->_2).interface_offsets_count;
          if (uVar11 != 0) {
            pIVar5 = (pIVar4->_1).interfaceOffsets;
            lVar12 = 0;
            do {
              if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
                   ((long)&pIVar5->interfaceType + lVar12) ==
                  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
                pVVar9 = pIVar4->vtable + (*(int *)((long)&pIVar5->offset + lVar12) + 2);
                goto label_05e573d0;
              }
              lVar12 = lVar12 + 0x10;
            } while (uVar11 * 0x10 != lVar12);
          }
          pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                             (pIVar3,(Il2CppClass *)
                                     TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,2);
label_05e573d0:
          bVar6 = (*pVVar9->methodPtr)(pIVar3,pVVar9->method);
          if (pIVar3 == (Il2CppObject *)0x0) goto label_05e57562;
        }
        Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar2,pSVar8,bVar6,(MethodInfo *)0x0);
      }
    }
    pGVar7 = (__this->fields)._descriptor;
    if (pGVar7 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_05e57562;
  }
  pSVar8 = System_String__Concat_52f0320((pGVar7->fields).Id,"-color",(MethodInfo *)0x0);
  pGVar7 = (__this->fields)._descriptor;
  if (pGVar7 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    pIVar3 = (Il2CppObject *)(pGVar7->fields).SecondaryAdapter;
    if (pIVar3 == (Il2CppObject *)0x0) {
      uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      pSVar10 = "#FFFFFFFF";
    }
    else {
      pIVar4 = pIVar3->klass;
      uVar11 = (ulong)(pIVar4->_2).interface_offsets_count;
      if (uVar11 != 0) {
        pIVar5 = (pIVar4->_1).interfaceOffsets;
        lVar12 = 0;
        do {
          if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
               ((long)&pIVar5->interfaceType + lVar12) ==
              TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
            pVVar9 = pIVar4->vtable + *(int *)((long)&pIVar5->offset + lVar12);
            goto label_05e574b3;
          }
          lVar12 = lVar12 + 0x10;
        } while (uVar11 * 0x10 != lVar12);
      }
      pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar3,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter
                          ,0);
label_05e574b3:
      pSVar10 = (*pVVar9->methodPtr)(pIVar3,pVVar9->method);
      uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    source = (UnityEngine_GameObject_o *)0x0;
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar6) {
      if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_05e57562;
      source = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)root,(MethodInfo *)0x0);
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    }
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetValue(pSVar8,pSVar10,true,source,(MethodInfo *)0x0);
    pGVar7 = (__this->fields)._descriptor;
    if (pGVar7 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
      pSVar8 = (pGVar7->fields).Id;
      method_00 = extraout_RDX;
      if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
        method_00 = extraout_RDX_00;
      }
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SyncRow(root,pSVar8,method_00);
      return;
    }
  }
label_05e57562:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$BuildControl
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow__BuildControl (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x5e57610

void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow__BuildControl
               (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  System_Action_AottgUi__o *__this_00;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_07548680 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_BuildControl_b__8_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"-toggle-color");
    Il2CppMethodInitialized_07548680 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_BuildControl_b__8_0,
             (MethodInfo_4A81BE0 *)0x0);
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    id = System_String__Concat_52f0320((pGVar1->fields).Id,"-toggle-color",(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(200.0,(MethodInfo *)0x0);
    maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row","Center","Center",
                        (System_String_o *)0x0,(System_String_o *)0x0,10.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (control != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (control,"clear",__this_00,id,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$ColorEnabledKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow__ColorEnabledKey (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o* __this, const MethodInfo* method);
// 0x5e575c0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow__ColorEnabledKey
          (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07548681 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".color.enabled");
    Il2CppMethodInitialized_07548681 = '\x01';
  }
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = System_String__Concat_52f0320((pGVar1->fields).Id,".color.enabled",(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$ControlValueKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow__ControlValueKey (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o* __this, const MethodInfo* method);
// 0x5e57570

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow__ControlValueKey
          (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07548682 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".controlValue");
    Il2CppMethodInitialized_07548682 = '\x01';
  }
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = System_String__Concat_52f0320((pGVar1->fields).Id,".controlValue",(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$<Build>b__4_0
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow___Build_b__4_0 (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o* __this, const MethodInfo* method);
// 0x5e577b0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e5781c: nop dword ptr [rax]
// asm:   0x5e578bd: nop dword ptr [rax]

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow___Build_b__4_0
          (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  System_String_o *str1;
  VirtualInvokeData *pVVar4;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar6;
  System_String_o *str2;
  ulong uVar7;
  long lVar8;
  
  if (Il2CppMethodInitialized_07548683 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&"|");
    Il2CppMethodInitialized_07548683 = '\x01';
  }
  pGVar6 = (__this->fields)._descriptor;
  if (pGVar6 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
label_05e57929:
    ThrowNullReferenceException();
  }
  pIVar1 = (Il2CppObject *)(pGVar6->fields).Adapter;
  if (pIVar1 == (Il2CppObject *)0x0) {
    pSVar5 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    pIVar2 = pIVar1->klass;
    uVar7 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar7 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar8 = 0;
      do {
        if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
             ((long)&pIVar3->interfaceType + lVar8) ==
            TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
          pVVar4 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar8);
          goto label_05e5786b;
        }
        lVar8 = lVar8 + 0x10;
      } while (uVar7 * 0x10 != lVar8);
    }
    pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar1,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,0
                       );
label_05e5786b:
    pSVar5 = (*pVVar4->methodPtr)(pIVar1,pVVar4->method);
    pGVar6 = (__this->fields)._descriptor;
    if (pGVar6 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_05e57929;
  }
  str1 = "|";
  pIVar1 = (Il2CppObject *)(pGVar6->fields).SecondaryAdapter;
  if (pIVar1 == (Il2CppObject *)0x0) {
    str2 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    pIVar2 = pIVar1->klass;
    uVar7 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar7 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar8 = 0;
      do {
        if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
             ((long)&pIVar3->interfaceType + lVar8) ==
            TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
          pVVar4 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar8);
          goto label_05e5790b;
        }
        lVar8 = lVar8 + 0x10;
      } while (uVar7 * 0x10 != lVar8);
    }
    pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar1,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,0
                       );
label_05e5790b:
    str2 = (*pVVar4->methodPtr)(pIVar1,pVVar4->method);
  }
  pSVar5 = System_String__Concat_5301f10(pSVar5,str1,str2,(MethodInfo *)0x0);
  return pSVar5;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$<BuildControl>b__8_0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow___BuildControl_b__8_0 (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x5e57930
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e57a2d: nop dword ptr [rax]
// asm:   0x5e57a51: xor r14d, r14d
// asm:   0x5e57a54: mov rbx, r13
// asm:   0x5e57a57: mov r12, rax
// asm:   0x5e57a5a: jmp 0x5e57a80
// asm:   0x5e57c74: mov r13, rax
// asm:   0x5e57c77: cmove r13, rbp
// asm:   0x5e57c7b: je 0x5e57d0e

void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow___BuildControl_b__8_0
               (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *pGVar4;
  bool bVar5;
  System_String_o *pSVar6;
  VirtualInvokeData *pVVar7;
  System_Action_GisketchActionContext__o *pSVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar10;
  System_String_o *enabledKey;
  ulong uVar11;
  long lVar12;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar13;
  undefined4 uStack_50;
  System_Nullable_bool__Fields aSStack_48 [4];
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_40;
  Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *pGStack_38;
  
  if (Il2CppMethodInitialized_07548684 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_Changed);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_BuildControl_b__8_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"-switch");
    Il2CppMethodInitialized_07548684 = '\x01';
  }
  pGVar13 = (__this->fields)._descriptor;
  if (pGVar13 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    pSVar6 = System_String__Concat_52f0320((pGVar13->fields).Id,"-switch",(MethodInfo *)0x0);
    pGVar13 = (__this->fields)._descriptor;
    if (pGVar13 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
      pIVar1 = (Il2CppObject *)(pGVar13->fields).Adapter;
      if (pIVar1 == (Il2CppObject *)0x0) {
        bVar5 = false;
      }
      else {
        pIVar2 = pIVar1->klass;
        uVar11 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar11 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar12 = 0;
          do {
            if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
                 ((long)&pIVar3->interfaceType + lVar12) ==
                TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
              pVVar7 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar12) + 2);
              goto label_05e57a74;
            }
            lVar12 = lVar12 + 0x10;
          } while (uVar11 * 0x10 != lVar12);
        }
        pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar1,(Il2CppClass *)
                                   TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,2);
label_05e57a74:
        bVar5 = (*pVVar7->methodPtr)(pIVar1,pVVar7->method);
      }
      pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor
                (pSVar8,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_BuildControl_b__8_1,
                 (MethodInfo_4A803E0 *)0x0);
      if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Switch(row,pSVar6,bVar5,pSVar8,(MethodInfo *)0x0);
        pGVar13 = (__this->fields)._descriptor;
        if (pGVar13 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
          aSStack_48[0].hasValue = false;
          aSStack_48[0].value = false;
          System_Nullable_bool____ctor
                    ((System_Nullable_bool__o *)aSStack_48,(pGVar13->fields).Disabled == false,
                     (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
          if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar9->fields).enabled.fields = aSStack_48[0];
            __this_00 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition)
            ;
            Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_07548682 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&".controlValue");
              Il2CppMethodInitialized_07548682 = '\x01';
            }
            pGVar13 = (__this->fields)._descriptor;
            if ((pGVar13 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) &&
               (pSVar6 = System_String__Concat_52f0320
                                   ((pGVar13->fields).Id,".controlValue",(MethodInfo *)0x0),
               __this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0)) {
              (__this_00->fields).value = pSVar6;
              Il2CppCodeGenWriteBarrier(&(__this_00->fields).value);
              (pGVar9->fields).bind = __this_00;
              Il2CppCodeGenWriteBarrier(&(pGVar9->fields).bind);
              width = Gisketch_Aottg2UI_Code_AottgUi__Points(58.0,(MethodInfo *)0x0);
              pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                  ("Row","Center","Center",
                                   (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                                   (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                   (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                   (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                   (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                   (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                                   0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
              (pGVar9->fields).layout = pGVar10;
              Il2CppCodeGenWriteBarrier(&(pGVar9->fields).layout);
              pGVar13 = (__this->fields)._descriptor;
              if (pGVar13 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
                pGVar4 = (pGVar13->fields).SecondaryAdapter;
                bVar5 = true;
                pGStack_40 = row;
                if (((pGVar13->fields).Disabled == false) &&
                   (pIVar1 = (Il2CppObject *)(pGVar13->fields).Adapter, pIVar1 != (Il2CppObject *)0x0)) {
                  pIVar2 = pIVar1->klass;
                  uVar11 = (ulong)(pIVar2->_2).interface_offsets_count;
                  if (uVar11 != 0) {
                    pIVar3 = (pIVar2->_1).interfaceOffsets;
                    lVar12 = 0;
                    do {
                      if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
                           ((long)&pIVar3->interfaceType + lVar12) ==
                          TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
                        pVVar7 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar12) + 2);
                        goto label_05e57ce9;
                      }
                      lVar12 = lVar12 + 0x10;
                    } while (uVar11 * 0x10 != lVar12);
                  }
                  pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                                     (pIVar1,(Il2CppClass *)
                                             TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,2)
                  ;
label_05e57ce9:
                  bVar5 = (*pVVar7->methodPtr)(pIVar1,pVVar7->method);
                  pGVar13 = (__this->fields)._descriptor;
                  if (pGVar13 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0)
                  goto label_05e57de0;
                  bVar5 = !bVar5;
                }
                pSVar6 = (pGVar13->fields).Id;
                pGStack_40 = row;
                pGStack_38 = pGVar4;
                pSVar8 = il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
                System_Action_GisketchActionContext____ctor
                          (pSVar8,(Il2CppObject *)pGVar13,
                           (intptr_t)
                           MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_Changed,
                           (MethodInfo_4A803E0 *)0x0);
                if (Il2CppMethodInitialized_07548681 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&".color.enabled");
                  Il2CppMethodInitialized_07548681 = '\x01';
                }
                pGVar13 = (__this->fields)._descriptor;
                if (pGVar13 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
                  enabledKey = System_String__Concat_52f0320
                                         ((pGVar13->fields).Id,".color.enabled",(MethodInfo *)0x0);
                  pGVar13 = (__this->fields)._descriptor;
                  if (pGVar13 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
                    uStack_50 = (uint)uStack_50._2_2_ << 0x10;
                    System_Nullable_bool____ctor
                              ((System_Nullable_bool__o *)&uStack_50,(pGVar13->fields).Disabled,
                               (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
                    Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__BuildPicker_5cbcae0
                              (pGStack_40,pGStack_38,bVar5,pSVar6,pSVar8,enabledKey,
                               (System_Nullable_bool__o)SUB42(uStack_50,0),(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_05e57de0:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$<BuildControl>b__8_1
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow___BuildControl_b__8_1 (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5e57df0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e57fde: test rdi, rdi
// asm:   0x5e57fe1: je 0x5e5814e
// asm:   0x5e580f1: xor ecx, ecx
// asm:   0x5e580f3: mov r12, rax
// asm:   0x5e580f6: jmp 0x5e58120
// asm:   0x5e5811e: mov ecx, eax

void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow___BuildControl_b__8_1
               (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  Il2CppObject *pIVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar5;
  bool bVar6;
  VirtualInvokeData *pVVar7;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar8;
  System_String_o *pSVar9;
  System_String_o *value;
  ulong uVar10;
  long lVar11;
  
  if (Il2CppMethodInitialized_07548685 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&"false");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_07548685 = '\x01';
  }
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_05e5814e;
  pIVar2 = (Il2CppObject *)(pGVar1->fields).Adapter;
  if (pIVar2 != (Il2CppObject *)0x0) {
    if (context.fields.Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      bVar6 = false;
    }
    else {
      bVar6 = System_String__op_Equality
                        (((context.fields.Node)->fields).value,"true",(MethodInfo *)0x0);
    }
    pIVar3 = pIVar2->klass;
    uVar10 = (ulong)(pIVar3->_2).interface_offsets_count;
    if (uVar10 != 0) {
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
             ((long)&pIVar4->interfaceType + lVar11) ==
            TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
          pVVar7 = pIVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar11) + 8);
          goto label_05e57ee5;
        }
        lVar11 = lVar11 + 0x10;
      } while (uVar10 * 0x10 != lVar11);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar2,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,8
                       );
label_05e57ee5:
    (*pVVar7->methodPtr)(pIVar2,bVar6,pVVar7->method);
  }
  if (context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) {
    pGVar8 = UnityEngine_GameObject__GetComponentInParent_object_
                       (context.fields.GameObject,
                        (MethodInfo_353BB40 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    if ((pGVar8 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (pGVar5 = (pGVar8->fields)._State_k__BackingField,
       pGVar5 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
      if (Il2CppMethodInitialized_07548682 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&".controlValue");
        Il2CppMethodInitialized_07548682 = '\x01';
      }
      pGVar1 = (__this->fields)._descriptor;
      if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_05e5814e;
      pSVar9 = System_String__Concat_52f0320((pGVar1->fields).Id,".controlValue",(MethodInfo *)0x0);
      pGVar1 = (__this->fields)._descriptor;
      if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_05e5814e;
      pIVar2 = (Il2CppObject *)(pGVar1->fields).Adapter;
      if (pIVar2 == (Il2CppObject *)0x0) {
        if (pGVar5 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) goto label_05e5814e;
        value = "false";
      }
      else {
        pIVar3 = pIVar2->klass;
        uVar10 = (ulong)(pIVar3->_2).interface_offsets_count;
        if (uVar10 != 0) {
          pIVar4 = (pIVar3->_1).interfaceOffsets;
          lVar11 = 0;
          do {
            if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
                 ((long)&pIVar4->interfaceType + lVar11) ==
                TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
              pVVar7 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar11);
              goto label_05e58006;
            }
            lVar11 = lVar11 + 0x10;
          } while (uVar10 * 0x10 != lVar11);
        }
        pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar2,(Il2CppClass *)
                                   TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,0);
label_05e58006:
        value = (*pVVar7->methodPtr)(pIVar2,pVVar7->method);
      }
      Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar5,pSVar9,value,(MethodInfo *)0x0);
    }
    pGVar8 = UnityEngine_GameObject__GetComponentInParent_object_
                       (context.fields.GameObject,
                        (MethodInfo_353BB40 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    if ((pGVar8 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (pGVar5 = (pGVar8->fields)._State_k__BackingField,
       pGVar5 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
      if (Il2CppMethodInitialized_07548681 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&".color.enabled");
        Il2CppMethodInitialized_07548681 = '\x01';
      }
      pGVar1 = (__this->fields)._descriptor;
      if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_05e5814e;
      pSVar9 = System_String__Concat_52f0320((pGVar1->fields).Id,".color.enabled",(MethodInfo *)0x0);
      pGVar1 = (__this->fields)._descriptor;
      if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_05e5814e;
      pIVar2 = (Il2CppObject *)(pGVar1->fields).Adapter;
      if (pIVar2 == (Il2CppObject *)0x0) {
        bVar6 = false;
      }
      else {
        pIVar3 = pIVar2->klass;
        uVar10 = (ulong)(pIVar3->_2).interface_offsets_count;
        if (uVar10 != 0) {
          pIVar4 = (pIVar3->_1).interfaceOffsets;
          lVar11 = 0;
          do {
            if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
                 ((long)&pIVar4->interfaceType + lVar11) ==
                TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
              pVVar7 = pIVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar11) + 2);
              goto label_05e58110;
            }
            lVar11 = lVar11 + 0x10;
          } while (uVar10 * 0x10 != lVar11);
        }
        pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar2,(Il2CppClass *)
                                   TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,2);
label_05e58110:
        bVar6 = (*pVVar7->methodPtr)(pIVar2,pVVar7->method);
        if (pIVar2 == (Il2CppObject *)0x0) goto label_05e5814e;
      }
      Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar5,pSVar9,bVar6,(MethodInfo *)0x0);
    }
  }
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor__Changed(pGVar1,context,(MethodInfo *)0x0);
    return;
  }
label_05e5814e:
  ThrowNullReferenceException();
}


