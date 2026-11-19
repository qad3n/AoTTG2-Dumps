// Type: Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgColorSettingRow.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow.<>c__DisplayClass9_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass9_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass9_0_o* __this, const MethodInfo* method);
// 0x5dbce70

void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass9_0___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass9_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow.<>c__DisplayClass9_0$$<BuildPicker>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass9_0___BuildPicker_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass9_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* frame, const MethodInfo* method);
// 0x5dbce80

void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass9_0___BuildPicker_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass9_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *frame,MethodInfo *method)

{
  System_Nullable_bool__Fields SVar1;
  System_String_o *label;
  System_String_o *value;
  char cVar2;
  System_String_o *id;
  System_Action_GisketchActionContext__o *__this_00;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *__this_01;
  
  if (Il2CppMethodInitialized_0754815e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_c__DisplayClass9_0_BuildPicker_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata(&"-color");
    Il2CppMethodInitialized_0754815e = '\x01';
  }
  id = System_String__Concat_52f0320((__this->fields).pickerId,"-color",(MethodInfo *)0x0);
  label = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  value = (__this->fields).value;
  __this_00 = (__this->fields).__9__1;
  if (__this_00 == (System_Action_GisketchActionContext__o *)0x0) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_c__DisplayClass9_0_BuildPicker_b__1
               ,(MethodInfo_4A803E0 *)0x0);
    (__this->fields).__9__1 = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1);
    SVar1 = (__this->fields).pickerDisabled.fields;
    cVar2 = SVar1.hasValue;
  }
  else {
    SVar1 = (__this->fields).pickerDisabled.fields;
    cVar2 = SVar1.hasValue;
  }
  if (cVar2 == '\0') {
    cVar2 = (__this->fields).disabled;
  }
  else {
    cVar2 = SVar1.value;
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker___ctor
            (__this_01,id,label,value,__this_00,true,false,true,cVar2 != '\0',(MethodInfo *)0x0);
  if (frame == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (frame,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow.<>c__DisplayClass9_0$$<BuildPicker>b__1
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass9_0___BuildPicker_b__1 (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass9_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5dbcff0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dbd04c: nop dword ptr [rax]

void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass9_0___BuildPicker_b__1
               (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass9_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  System_Action_GisketchActionContext__o *pSVar3;
  VirtualInvokeData *pVVar4;
  ulong uVar5;
  long lVar6;
  
  if (Il2CppMethodInitialized_0754815f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    Il2CppMethodInitialized_0754815f = '\x01';
  }
  obj = (Il2CppObject *)(__this->fields).adapter;
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
          goto label_05dbd085;
        }
        lVar6 = lVar6 + 0x10;
      } while (uVar5 * 0x10 != lVar6);
    }
    pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                       (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,0xb)
    ;
label_05dbd085:
    (*pVVar4->methodPtr)(obj,context,pVVar4->method);
  }
  pSVar3 = (__this->fields).changed;
  if (pSVar3 == (System_Action_GisketchActionContext__o *)0x0) {
    return;
  }
  (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,(pSVar3->fields).method);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o* descriptor, const MethodInfo* method);
// 0x5dbc5e0

void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_o *__this,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *descriptor,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._descriptor = descriptor;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._descriptor);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__Build (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5dbc610

void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__Build
               (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_o *__this,
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
  System_Func_string__o *dirtyValue;
  System_String_o *searchKeywords;
  System_String_o *icon;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_Fields searchContext;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this_01;
  MethodInfo *in_stack_ffffffffffffff50;
  
  if (Il2CppMethodInitialized_0754815a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_BuildPicker);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame);
    Il2CppMethodInitialized_0754815a = '\x01';
  }
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    return;
  }
  id = (pGVar1->fields).Id;
  label = (pGVar1->fields).Label;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_BuildPicker,
             (MethodInfo_4A81BE0 *)0x0);
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    labelKey = (pGVar1->fields).LabelKey;
    tooltip = (pGVar1->fields).Tooltip;
    searchTitle = (pGVar1->fields).SearchTitle;
    searchKeywords = (pGVar1->fields).SearchKeywords;
    icon = (pGVar1->fields).Icon;
    tooltipKey = (pGVar1->fields).TooltipKey;
    dirtyValue = (pGVar1->fields).DirtyValue;
    layoutMode = (__this->fields)._layoutMode;
    searchContext = (__this->fields)._searchContext.fields;
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame);
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___ctor
              (__this_01,id,label,92.0,__this_00,tooltip,searchTitle,searchKeywords,icon,
               (System_Nullable_float__o)0x0,labelKey,tooltipKey,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o)searchContext,dirtyValue,
               (System_String_o *)0x0,(System_String_o *)0x0,layoutMode,in_stack_ffffffffffffff50);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Component
                (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow$$ApplySearchContext
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__ApplySearchContext (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context, const MethodInfo* method);
// 0x5dbc800

void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__ApplySearchContext
               (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_o *__this,
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


// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow$$ApplyLayoutMode
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__ApplyLayoutMode (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_o* __this, int32_t mode, const MethodInfo* method);
// 0x5dbc830

void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__ApplyLayoutMode
               (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_o *__this,int32_t mode,
               MethodInfo *method)

{
  (__this->fields)._layoutMode = mode;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow$$SyncState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__SyncState (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_o* __this, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x5dbc840
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dbc938: lea rcx, [rip + 0x1512949]  ; "#FFFFFFFF"
// asm:   0x5dbc93f: mov r12, qword ptr [rcx]
// asm:   0x5dbc942: mov r13, rax
// asm:   0x5dbc945: lea rax, [rip + 0x14beaa4]  ; TypeInfo_UnityEngine_Object
// asm:   0x5dbc94c: mov rdi, qword ptr [rax]
// asm:   0x5dbc94f: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x5dbc958: jmp 0x5dbc98c

void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__SyncState
               (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_o *__this,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar2;
  Il2CppObject *obj;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  bool bVar5;
  System_String_o *pSVar6;
  VirtualInvokeData *pVVar7;
  System_String_o *value;
  UnityEngine_GameObject_o *source;
  ulong uVar8;
  long lVar9;
  
  if (Il2CppMethodInitialized_0754815b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"-color");
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFFFF");
    Il2CppMethodInitialized_0754815b = '\x01';
  }
  pGVar2 = (__this->fields)._descriptor;
  if (pGVar2 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    return;
  }
  pSVar6 = System_String__Concat_52f0320((pGVar2->fields).Id,"-color",(MethodInfo *)0x0);
  pGVar2 = (__this->fields)._descriptor;
  if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    obj = (Il2CppObject *)(pGVar2->fields).Adapter;
    if (obj == (Il2CppObject *)0x0) {
      uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      value = "#FFFFFFFF";
    }
    else {
      pIVar3 = obj->klass;
      uVar8 = (ulong)(pIVar3->_2).interface_offsets_count;
      if (uVar8 != 0) {
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        lVar9 = 0;
        do {
          if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
               ((long)&pIVar4->interfaceType + lVar9) ==
              TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
            pVVar7 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar9);
            goto label_05dbc96d;
          }
          lVar9 = lVar9 + 0x10;
        } while (uVar8 * 0x10 != lVar9);
      }
      pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,0)
      ;
label_05dbc96d:
      value = (*pVVar7->methodPtr)(obj,pVVar7->method);
      uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    source = (UnityEngine_GameObject_o *)0x0;
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_05dbca1e;
      source = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)root,(MethodInfo *)0x0);
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    }
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetValue(pSVar6,value,true,source,(MethodInfo *)0x0);
    pGVar2 = (__this->fields)._descriptor;
    if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
      pSVar6 = (pGVar2->fields).Id;
      if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
      }
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SyncRow(root,pSVar6,(MethodInfo *)0x0);
      return;
    }
  }
label_05dbca1e:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow$$BuildPicker
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__BuildPicker (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x5dbca30

void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__BuildPicker
               (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  bool disabled;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *object;
  System_String_o *id;
  Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *adapter;
  System_Action_GisketchActionContext__o *__this_00;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  if (Il2CppMethodInitialized_0754815c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_Changed);
    Il2CppMethodInitialized_0754815c = '\x01';
  }
  object = (__this->fields)._descriptor;
  if (object == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    ThrowNullReferenceException();
  }
  id = (object->fields).Id;
  adapter = (object->fields).Adapter;
  disabled = (object->fields).Disabled;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor
            (__this_00,(Il2CppObject *)object,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_Changed,
             (MethodInfo_4A803E0 *)0x0);
  Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__BuildPicker_5cbcae0
            (control,adapter,disabled,id,__this_00,(System_String_o *)0x0,(System_Nullable_bool__o)0x0,
             in_stack_ffffffffffffffc0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow$$BuildPicker
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__BuildPicker (Gisketch_Aottg2UI_Code_AottgUi_o* control, Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o* adapter, bool disabled, System_String_o* id, System_Action_GisketchActionContext__o* changed, System_String_o* enabledKey, System_Nullable_bool__o pickerDisabled, const MethodInfo* method);
// 0x5dbcae0

void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__BuildPicker_5cbcae0
               (Gisketch_Aottg2UI_Code_AottgUi_o *control,
               Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *adapter,bool disabled,
               System_String_o *id,System_Action_GisketchActionContext__o *changed,System_String_o *enabledKey
               ,System_Nullable_bool__o pickerDisabled,MethodInfo *method)

{
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  bool bVar3;
  Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass9_0_o *__this;
  VirtualInvokeData *pVVar4;
  System_String_o *pSVar5;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_01;
  ulong uVar7;
  long lVar8;
  System_Nullable_bool__Fields local_48 [4];
  System_String_o *local_40;
  Gisketch_Aottg2UI_Code_AottgUi_o *local_38;
  
  local_40 = enabledKey;
  local_38 = control;
  if (Il2CppMethodInitialized_0754815d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_c__DisplayClass9_0_BuildPicker_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_c__DisplayClass9_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"-color-frame");
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFFFF");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"setting-color");
    Il2CppMethodInitialized_0754815d = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_c__DisplayClass9_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass9_0_o *)0x0) {
    (__this->fields).adapter = adapter;
    Il2CppCodeGenWriteBarrier(&(__this->fields).adapter);
    (__this->fields).changed = changed;
    Il2CppCodeGenWriteBarrier(&(__this->fields).changed);
    (__this->fields).pickerDisabled.fields = pickerDisabled.fields;
    (__this->fields).disabled = disabled;
    bVar3 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
    if (bVar3) {
      id = "setting-color";
    }
    (__this->fields).pickerId = id;
    Il2CppCodeGenWriteBarrier(&(__this->fields).pickerId);
    obj = (Il2CppObject *)(__this->fields).adapter;
    if (obj == (Il2CppObject *)0x0) {
      pSVar5 = "#FFFFFFFF";
    }
    else {
      pIVar1 = obj->klass;
      uVar7 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar7 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar8 = 0;
        do {
          if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c **)
               ((long)&pIVar2->interfaceType + lVar8) ==
              TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
            pVVar4 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar8);
            goto label_05dbcc9d;
          }
          lVar8 = lVar8 + 0x10;
        } while (uVar7 * 0x10 != lVar8);
      }
      pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,0)
      ;
label_05dbcc9d:
      pSVar5 = (*pVVar4->methodPtr)(obj,pVVar4->method);
      if (obj == (Il2CppObject *)0x0) goto label_05dbce66;
    }
    (__this->fields).value = pSVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields).value);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_c__DisplayClass9_0_BuildPicker_b__0
               ,(MethodInfo_4A81BE0 *)0x0);
    pSVar5 = System_String__Concat_52f0320((__this->fields).pickerId,"-color-frame",(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row","Center","Center",
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (local_38 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         (local_38,"clear",__this_00,pSVar5,layout,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      local_48[0].hasValue = false;
      local_48[0].value = false;
      System_Nullable_bool____ctor
                ((System_Nullable_bool__o *)local_48,(__this->fields).disabled == false,
                 (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
      pSVar5 = local_40;
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).enabled.fields = local_48[0];
        bVar3 = System_String__IsNullOrEmpty(local_40,(MethodInfo *)0x0);
        if (!bVar3) {
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
          Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_01,(MethodInfo *)0x0);
          if (__this_01 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_05dbce66;
          (__this_01->fields).enabled = pSVar5;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).enabled);
          (pGVar6->fields).bind = __this_01;
          Il2CppCodeGenWriteBarrier(&(pGVar6->fields).bind);
        }
        return;
      }
    }
  }
label_05dbce66:
  ThrowNullReferenceException();
}


