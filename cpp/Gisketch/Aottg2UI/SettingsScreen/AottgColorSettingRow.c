// Type: Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgColorSettingRow.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow.<>c__DisplayClass9_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass9_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass9_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass9_0___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass9_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow.<>c__DisplayClass9_0$$<BuildPicker>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass9_0___BuildPicker_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass9_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* frame, const MethodInfo* method);
// 0x182201470

void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass9_0___BuildPicker_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass9_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *frame,MethodInfo *method)

{
  System_Nullable_bool__Fields SVar1;
  System_String_o *value;
  System_String_o *label;
  System_String_o *id;
  DG_Tweening_Core_DOSetter_Color2__o *__this_00;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *__this_01;
  bool disabled;
  
  if (Il2CppMethodInitialized_184347082 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_c__DisplayClass9_0_BuildPicker_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata(&"-color");
    Il2CppMethodInitialized_184347082 = '\x01';
  }
  id = System_String__Concat_1969e50((__this->fields).pickerId,"-color",(MethodInfo *)0x0);
  __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)(__this->fields).__9__1;
  value = (__this->fields).value;
  label = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  if (__this_00 == (DG_Tweening_Core_DOSetter_Color2__o *)0x0) {
    __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_c__DisplayClass9_0_BuildPicker_b__1
               ,(MethodInfo_1387DC0 *)0x0);
    (__this->fields).__9__1 = (System_Action_GisketchActionContext__o *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1,__this_00);
  }
  SVar1 = (__this->fields).pickerDisabled.fields;
  if (SVar1.hasValue == false) {
    disabled = (__this->fields).disabled;
  }
  else {
    disabled = SVar1.value;
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker___ctor
            (__this_01,id,label,value,(System_Action_GisketchActionContext__o *)__this_00,true,false,true,
             disabled,(MethodInfo *)0x0);
  if (frame != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (frame,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow.<>c__DisplayClass9_0$$<BuildPicker>b__1
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass9_0___BuildPicker_b__1 (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass9_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x1822015c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18220161c: nop dword ptr [rax]

void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass9_0___BuildPicker_b__1
               (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass9_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *obj;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  System_Action_GisketchActionContext__o *pSVar4;
  VirtualInvokeData *pVVar5;
  ushort uVar6;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  if (Il2CppMethodInitialized_184347083 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    Il2CppMethodInitialized_184347083 = '\x01';
  }
  obj = (Il2CppObject *)(__this->fields).adapter;
  if (obj != (Il2CppObject *)0x0) {
    pIVar2 = obj->klass;
    uVar1 = (pIVar2->_2).interface_offsets_count;
    if (uVar1 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      uVar6 = 0;
      do {
        if (pIVar3[uVar6].interfaceType ==
            (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
          pVVar5 = pIVar2->vtable + (pIVar3[uVar6].offset + 0xb);
          goto label_182201645;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar1);
    }
    pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                       (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,0xb)
    ;
label_182201645:
    local_28.fields.ElementId = (context->fields).ElementId;
    local_28.fields.GameObject = (context->fields).GameObject;
    local_28.fields.Node = (context->fields).Node;
    local_28.fields.InputSource = (context->fields).InputSource;
    local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
    (*pVVar5->methodPtr)(obj,&local_28,pVVar5->method);
  }
  pSVar4 = (__this->fields).changed;
  if (pSVar4 != (System_Action_GisketchActionContext__o *)0x0) {
    local_28.fields.ElementId = (context->fields).ElementId;
    local_28.fields.GameObject = (context->fields).GameObject;
    local_28.fields.Node = (context->fields).Node;
    local_28.fields.InputSource = (context->fields).InputSource;
    local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
    (*(code *)(pSVar4->fields).invoke_impl)((pSVar4->fields).method_code,&local_28,(pSVar4->fields).method);
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o* descriptor, const MethodInfo* method);
// 0x1812b8cd0

void
Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___ctor_12b8cd0(Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o* descriptor, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._descriptor = method;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._descriptor,method);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__Build (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1821ec130

void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__Build
               (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t layoutMode;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar2;
  System_String_o *id;
  System_String_o *label;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar3;
  System_String_o *tooltip;
  System_String_o *tooltipKey;
  System_Func_string__o *dirtyValue;
  System_String_o *searchKeywords;
  System_String_o *searchTitle;
  System_String_o *labelKey;
  System_String_o *icon;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this_01;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o local_98 [2];
  
  if (Il2CppMethodInitialized_18434707e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_BuildPicker);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame);
    Il2CppMethodInitialized_18434707e = '\x01';
  }
  if ((__this->fields)._descriptor == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    return;
  }
  pGVar2 = (__this->fields)._descriptor;
  if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    id = (pGVar2->fields).Id;
    label = (((__this->fields)._descriptor)->fields).Label;
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_BuildPicker,
               (MethodInfo *)0x0);
    pGVar2 = (__this->fields)._descriptor;
    if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
      pGVar3 = (__this->fields)._descriptor;
      tooltip = (pGVar2->fields).Tooltip;
      tooltipKey = (pGVar3->fields).TooltipKey;
      dirtyValue = (pGVar3->fields).DirtyValue;
      searchKeywords = (pGVar3->fields).SearchKeywords;
      searchTitle = (pGVar3->fields).SearchTitle;
      labelKey = (pGVar3->fields).LabelKey;
      icon = (pGVar3->fields).Icon;
      pSVar4 = (__this->fields)._searchContext.fields.ScreenTitle;
      pSVar5 = (__this->fields)._searchContext.fields.CategoryId;
      pSVar6 = (__this->fields)._searchContext.fields.CategoryTitle;
      pSVar7 = (__this->fields)._searchContext.fields.GroupId;
      pSVar1 = (__this->fields)._searchContext.fields.GroupTitle;
      layoutMode = (__this->fields)._layoutMode;
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame);
      local_98[0].fields.ScreenTitle = pSVar4;
      local_98[0].fields.CategoryId = pSVar5;
      local_98[0].fields.CategoryTitle = pSVar6;
      local_98[0].fields.GroupId = pSVar7;
      local_98[0].fields.GroupTitle = pSVar1;
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___ctor
                (__this_01,id,label,92.0,(System_Action_AottgUi__o *)__this_00,tooltip,searchTitle,
                 searchKeywords,icon,(System_Nullable_float__o)0x0,labelKey,tooltipKey,(System_String_o *)0x0,
                 local_98,dirtyValue,(System_String_o *)0x0,(System_String_o *)0x0,layoutMode,
                 (MethodInfo *)0x0);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow$$ApplySearchContext
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__ApplySearchContext (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context, const MethodInfo* method);
// 0x1821ebcd0

void
Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__ApplySearchContext(Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context, MethodInfo* method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  
  pSVar1 = (context->fields).CategoryId;
  pSVar2 = (context->fields).CategoryTitle;
  pSVar3 = (context->fields).GroupId;
  (__this->fields)._searchContext.fields.ScreenTitle = (context->fields).ScreenTitle;
  (__this->fields)._searchContext.fields.CategoryId = pSVar1;
  pSVar1 = (context->fields).GroupTitle;
  (__this->fields)._searchContext.fields.CategoryTitle = pSVar2;
  (__this->fields)._searchContext.fields.GroupId = pSVar3;
  (__this->fields)._searchContext.fields.GroupTitle = pSVar1;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields)._searchContext,(void *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow$$ApplyLayoutMode
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__ApplyLayoutMode (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_o* __this, int32_t mode, const MethodInfo* method);
// 0x18058aa60

void
Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__ApplyLayoutMode(Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_o* __this, int32_t mode, MethodInfo* method)

{
  (__this->fields)._layoutMode.fields._state = (uint32_t)value.fields._state;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow$$SyncState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__SyncState (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_o* __this, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x1821ec3b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821ec477: mov rbp, qword ptr [rip + 0x1ebe272]  ; "#FFFFFFFF"

void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__SyncState
               (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_o *__this,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_o *value;
  UnityEngine_GameObject_o *source;
  
  if (Il2CppMethodInitialized_18434707f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"-color");
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFFFF");
    Il2CppMethodInitialized_18434707f = '\x01';
  }
  if ((__this->fields)._descriptor == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    return;
  }
  pSVar3 = System_String__Concat_1969e50
                     ((((__this->fields)._descriptor)->fields).Id,"-color",(MethodInfo *)0x0);
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    value = "#FFFFFFFF";
    if ((pGVar1->fields).Adapter != (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
      value = InterfaceInvoker0_Invoke
                        (0,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
                         (Il2CppObject *)(pGVar1->fields).Adapter);
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_1821ec537;
      source = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)root,(MethodInfo *)0x0);
    }
    else {
      source = (UnityEngine_GameObject_o *)0x0;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    }
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetValue(pSVar3,value,true,source,(MethodInfo *)0x0);
    pGVar1 = (__this->fields)._descriptor;
    if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
      pSVar3 = (pGVar1->fields).Id;
      if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
      }
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SyncRow(root,pSVar3,(MethodInfo *)0x0);
      return;
    }
  }
label_1821ec537:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow$$BuildPicker
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__BuildPicker (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x1821ec050

void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__BuildPicker
               (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  bool disabled;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *object;
  Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *adapter;
  System_String_o *id;
  DG_Tweening_Core_DOSetter_Color2__o *__this_00;
  
  if (Il2CppMethodInitialized_184347080 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_Changed);
    Il2CppMethodInitialized_184347080 = '\x01';
  }
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    object = (__this->fields)._descriptor;
    adapter = (pGVar1->fields).Adapter;
    disabled = (object->fields).Disabled;
    id = (object->fields).Id;
    __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this_00,(Il2CppObject *)object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_Changed,
               (MethodInfo_1387DC0 *)0x0);
    Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__BuildPicker_21ebd00
              (control,adapter,disabled,id,(System_Action_GisketchActionContext__o *)__this_00,
               (System_String_o *)0x0,(System_Nullable_bool__o)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow$$BuildPicker
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__BuildPicker (Gisketch_Aottg2UI_Code_AottgUi_o* control, Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o* adapter, bool disabled, System_String_o* id, System_Action_GisketchActionContext__o* changed, System_String_o* enabledKey, System_Nullable_bool__o pickerDisabled, const MethodInfo* method);
// 0x1821ebd00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821ebe5c: mov rax, qword ptr [rip + 0x1ebe88d]  ; "#FFFFFFFF"

void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__BuildPicker_21ebd00
               (Gisketch_Aottg2UI_Code_AottgUi_o *control,
               Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *adapter,bool disabled,
               System_String_o *id,System_Action_GisketchActionContext__o *changed,System_String_o *enabledKey
               ,System_Nullable_bool__o pickerDisabled,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass9_0_o *object;
  System_String_o *pSVar2;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  System_Nullable_bool__Fields local_res10 [4];
  
  if (Il2CppMethodInitialized_184347081 == '\0') {
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
    Il2CppMethodInitialized_184347081 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_c__DisplayClass9_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass9_0_o *)0x0) {
label_1821ec03e:
    ThrowNullReferenceException();
  }
  (object->fields).adapter = adapter;
  Il2CppCodeGenWriteBarrier(&(object->fields).adapter,adapter);
  (object->fields).changed = changed;
  Il2CppCodeGenWriteBarrier(&(object->fields).changed,changed);
  (object->fields).pickerDisabled.fields = pickerDisabled.fields;
  (object->fields).disabled = disabled;
  bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if (bVar1) {
    id = "setting-color";
  }
  (object->fields).pickerId = id;
  Il2CppCodeGenWriteBarrier(&(object->fields).pickerId,id);
  pSVar2 = "#FFFFFFFF";
  if ((object->fields).adapter != (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
    pSVar2 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
                        (Il2CppObject *)(object->fields).adapter);
  }
  (object->fields).value = pSVar2;
  Il2CppCodeGenWriteBarrier(&(object->fields).value,pSVar2);
  __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (__this,(Il2CppObject *)object,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_c__DisplayClass9_0_BuildPicker_b__0
             ,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_1969e50((object->fields).pickerId,"-color-frame",(MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","Center","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (control != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (control,"clear",(System_Action_AottgUi__o *)__this,pSVar2,layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    local_res10[0].hasValue = false;
    local_res10[0].value = false;
    System_Nullable_bool____ctor
              ((System_Data_SqlTypes_SqlByte_o *)local_res10,(object->fields).disabled == false,
               MethodInfo_System_Nullable_bool_ctor);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).enabled.fields = local_res10[0];
      bVar1 = System_String__IsNullOrEmpty(enabledKey,(MethodInfo *)0x0);
      if (!bVar1) {
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
        if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_1821ec03e;
        (__this_00->fields).enabled = enabledKey;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).enabled,enabledKey);
        (pGVar3->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).bind,__this_00);
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


