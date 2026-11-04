// Type: Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgToggleColorSettingRow.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o* descriptor, const MethodInfo* method);
// 0x1812b8cd0

void
Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow___ctor_12b8cd0(Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o* descriptor, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._descriptor = method;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._descriptor,method);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow__Build (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x18239f7b0

void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow__Build
               (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t layoutMode;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar2;
  System_String_o *id;
  System_String_o *label;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar3;
  System_String_o *tooltip;
  System_String_o *searchKeywords;
  System_String_o *tooltipKey;
  System_Func_string__o *dirtyValue;
  System_String_o *searchTitle;
  System_String_o *labelKey;
  System_String_o *icon;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  DG_Tweening_Core_DOGetter_Vector2__o *__this_00;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_01;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this_02;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o local_98 [2];
  
  if (Il2CppMethodInitialized_184347b5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_BuildControl);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_Build_b__4_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string);
    Il2CppMethodInitialized_184347b5c = '\x01';
  }
  if ((__this->fields)._descriptor == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    return;
  }
  pGVar2 = (__this->fields)._descriptor;
  __this_00 = (DG_Tweening_Core_DOGetter_Vector2__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string);
  System_Func_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_Build_b__4_0,
             (MethodInfo_1387740 *)0x0);
  if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    (pGVar2->fields).DirtyValue = (System_Func_string__o *)__this_00;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).DirtyValue,__this_00);
    pGVar2 = (__this->fields)._descriptor;
    if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
      id = (pGVar2->fields).Id;
      label = (((__this->fields)._descriptor)->fields).Label;
      __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (__this_01,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_BuildControl
                 ,(MethodInfo *)0x0);
      pGVar2 = (__this->fields)._descriptor;
      if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
        pGVar3 = (__this->fields)._descriptor;
        tooltip = (pGVar2->fields).Tooltip;
        searchKeywords = (pGVar3->fields).SearchKeywords;
        tooltipKey = (pGVar3->fields).TooltipKey;
        dirtyValue = (pGVar3->fields).DirtyValue;
        searchTitle = (pGVar3->fields).SearchTitle;
        labelKey = (pGVar3->fields).LabelKey;
        icon = (pGVar3->fields).Icon;
        pSVar4 = (__this->fields)._searchContext.fields.ScreenTitle;
        pSVar5 = (__this->fields)._searchContext.fields.CategoryId;
        pSVar6 = (__this->fields)._searchContext.fields.CategoryTitle;
        pSVar7 = (__this->fields)._searchContext.fields.GroupId;
        pSVar1 = (__this->fields)._searchContext.fields.GroupTitle;
        layoutMode = (__this->fields)._layoutMode;
        __this_02 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame);
        local_98[0].fields.ScreenTitle = pSVar4;
        local_98[0].fields.CategoryId = pSVar5;
        local_98[0].fields.CategoryTitle = pSVar6;
        local_98[0].fields.GroupId = pSVar7;
        local_98[0].fields.GroupTitle = pSVar1;
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___ctor
                  (__this_02,id,label,200.0,(System_Action_AottgUi__o *)__this_01,tooltip,searchTitle,
                   searchKeywords,icon,(System_Nullable_float__o)0x0,labelKey,tooltipKey,
                   (System_String_o *)0x0,local_98,dirtyValue,(System_String_o *)0x0,(System_String_o *)0x0,
                   layoutMode,(MethodInfo *)0x0);
        if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgUi__Component
                    (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_02,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$ApplySearchContext
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow__ApplySearchContext (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context, const MethodInfo* method);
// 0x1821ebcd0

void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow__ApplySearchContext
               (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o *__this,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o *context,MethodInfo *method)

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


// Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$ApplyLayoutMode
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow__ApplyLayoutMode (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o* __this, int32_t mode, const MethodInfo* method);
// 0x18058aa60

void
Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow__ApplyLayoutMode(Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o* __this, int32_t mode, MethodInfo* method)

{
  (__this->fields)._layoutMode.fields._state = (uint32_t)value.fields._state;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$SyncState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow__SyncState (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o* __this, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x18239fb30
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18239fc08: mov rax, qword ptr [rip + 0x1d34e89]  ; "false"
// asm:   0x18239fcc6: mov rbp, qword ptr [rip + 0x1d0aa23]  ; "#FFFFFFFF"

void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow__SyncState
               (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o *__this,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar2;
  undefined1 value;
  bool bVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  void *pvVar6;
  UnityEngine_GameObject_o *source;
  
  if (Il2CppMethodInitialized_184347b5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"-color");
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFFFF");
    il2cpp_codegen_initialize_runtime_metadata(&"false");
    Il2CppMethodInitialized_184347b5d = '\x01';
  }
  if ((__this->fields)._descriptor == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    return;
  }
  if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    pGVar1 = (root->fields)._State_k__BackingField;
    if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      pSVar4 = Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow__ControlValueKey
                         (__this,(MethodInfo *)0x0);
      pGVar2 = (__this->fields)._descriptor;
      if (pGVar2 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_18239fd86;
      pSVar5 = "false";
      if ((pGVar2->fields).Adapter != (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
        pSVar5 = InterfaceInvoker0_Invoke
                           (0,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
                            (Il2CppObject *)(pGVar2->fields).Adapter);
      }
      Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar1,pSVar4,pSVar5,(MethodInfo *)0x0);
    }
    pGVar1 = (root->fields)._State_k__BackingField;
    if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      pSVar4 = Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow__ColorEnabledKey
                         (__this,(MethodInfo *)0x0);
      pGVar2 = (__this->fields)._descriptor;
      if (pGVar2 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_18239fd86;
      if ((pGVar2->fields).Adapter == (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
        value = false;
      }
      else {
        pvVar6 = InterfaceInvoker0_Invoke
                           (2,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
                            (Il2CppObject *)(pGVar2->fields).Adapter);
        value = SUB81(pvVar6,0);
      }
      Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar1,pSVar4,(bool)value,(MethodInfo *)0x0);
    }
  }
  pGVar2 = (__this->fields)._descriptor;
  if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    pSVar4 = System_String__Concat_1969e50((pGVar2->fields).Id,"-color",(MethodInfo *)0x0);
    pGVar2 = (__this->fields)._descriptor;
    if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
      pSVar5 = "#FFFFFFFF";
      if ((pGVar2->fields).SecondaryAdapter != (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0)
      {
        pSVar5 = InterfaceInvoker0_Invoke
                           (0,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
                            (Il2CppObject *)(pGVar2->fields).SecondaryAdapter);
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_18239fd86;
        source = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)root,(MethodInfo *)0x0);
      }
      else {
        source = (UnityEngine_GameObject_o *)0x0;
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
      }
      Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetValue(pSVar4,pSVar5,true,source,(MethodInfo *)0x0);
      pGVar2 = (__this->fields)._descriptor;
      if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
        pSVar4 = (pGVar2->fields).Id;
        if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
        }
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SyncRow(root,pSVar4,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_18239fd86:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$BuildControl
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow__BuildControl (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x18239f5b0

void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow__BuildControl
               (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347b5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_BuildControl_b__8_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"-toggle-color");
    Il2CppMethodInitialized_184347b5e = '\x01';
  }
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_BuildControl_b__8_0,
             (MethodInfo *)0x0);
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    id = System_String__Concat_1969e50((pGVar1->fields).Id,"-toggle-color",(MethodInfo *)0x0);
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
                (control,"clear",(System_Action_AottgUi__o *)__this_00,id,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$ColorEnabledKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow__ColorEnabledKey (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o* __this, const MethodInfo* method);
// 0x18239fa90

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow__ColorEnabledKey
          (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184347b5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".color.enabled");
    Il2CppMethodInitialized_184347b5f = '\x01';
  }
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    pSVar2 = System_String__Concat_1969e50((pGVar1->fields).Id,".color.enabled",(MethodInfo *)0x0);
    return pSVar2;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$ControlValueKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow__ControlValueKey (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o* __this, const MethodInfo* method);
// 0x18239fae0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow__ControlValueKey
          (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184347b60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".controlValue");
    Il2CppMethodInitialized_184347b60 = '\x01';
  }
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    pSVar2 = System_String__Concat_1969e50((pGVar1->fields).Id,".controlValue",(MethodInfo *)0x0);
    return pSVar2;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$<Build>b__4_0
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow___Build_b__4_0 (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o* __this, const MethodInfo* method);
// 0x1823a0430

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow___Build_b__4_0
          (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  System_String_o *str1;
  System_String_o *pSVar2;
  System_String_o *str2;
  
  if (Il2CppMethodInitialized_184347b61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&"|");
    Il2CppMethodInitialized_184347b61 = '\x01';
  }
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    if ((pGVar1->fields).Adapter == (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
      pSVar2 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    else {
      pSVar2 = InterfaceInvoker0_Invoke
                         (0,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
                          (Il2CppObject *)(pGVar1->fields).Adapter);
    }
    str1 = "|";
    pGVar1 = (__this->fields)._descriptor;
    if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
      if ((pGVar1->fields).SecondaryAdapter == (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0)
      {
        str2 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      else {
        str2 = InterfaceInvoker0_Invoke
                         (0,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
                          (Il2CppObject *)(pGVar1->fields).SecondaryAdapter);
      }
      pSVar2 = System_String__Concat_1969b70(pSVar2,str1,str2,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$<BuildControl>b__8_0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow___BuildControl_b__8_0 (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x18239fd90

void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow___BuildControl_b__8_0
               (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar2;
  Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *adapter;
  undefined1 value;
  System_String_o *pSVar3;
  DG_Tweening_Core_DOSetter_Color2__o *pDVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value_00;
  void *pvVar6;
  System_String_o *enabledKey;
  byte disabled;
  System_Nullable_bool__Fields local_res8 [4];
  System_Nullable_bool__Fields local_res10 [4];
  
  if (Il2CppMethodInitialized_184347b62 == '\0') {
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
    Il2CppMethodInitialized_184347b62 = '\x01';
  }
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    pSVar3 = System_String__Concat_1969e50((pGVar1->fields).Id,"-switch",(MethodInfo *)0x0);
    pGVar1 = (__this->fields)._descriptor;
    if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
      if ((pGVar1->fields).Adapter == (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
        value = false;
      }
      else {
        pvVar6 = InterfaceInvoker0_Invoke
                           (2,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
                            (Il2CppObject *)(pGVar1->fields).Adapter);
        value = SUB81(pvVar6,0);
      }
      pDVar4 = (DG_Tweening_Core_DOSetter_Color2__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor
                (pDVar4,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_BuildControl_b__8_1,
                 (MethodInfo_1387DC0 *)0x0);
      if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Switch
                           (row,pSVar3,(bool)value,(System_Action_GisketchActionContext__o *)pDVar4,
                            (MethodInfo *)0x0);
        pGVar1 = (__this->fields)._descriptor;
        if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
          local_res8[0].hasValue = false;
          local_res8[0].value = false;
          System_Nullable_bool____ctor
                    ((System_Data_SqlTypes_SqlByte_o *)local_res8,(pGVar1->fields).Disabled == false,
                     MethodInfo_System_Nullable_bool_ctor);
          if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar5->fields).enabled.fields = local_res8[0];
            __this_00 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition)
            ;
            UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
                      ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_184347b60 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&".controlValue");
              Il2CppMethodInitialized_184347b60 = '\x01';
            }
            pGVar1 = (__this->fields)._descriptor;
            if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
              pSVar3 = System_String__Concat_1969e50
                                 ((pGVar1->fields).Id,".controlValue",(MethodInfo *)0x0);
              if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
                (__this_00->fields).value = pSVar3;
                Il2CppCodeGenWriteBarrier(&(__this_00->fields).value,pSVar3);
                (pGVar5->fields).bind = __this_00;
                Il2CppCodeGenWriteBarrier(&(pGVar5->fields).bind,__this_00);
                width = Gisketch_Aottg2UI_Code_AottgUi__Points(58.0,(MethodInfo *)0x0);
                value_00 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                     ("Row","Center","Center",
                                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,
                                      0.0,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
                (pGVar5->fields).layout = value_00;
                Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout,value_00);
                pGVar1 = (__this->fields)._descriptor;
                if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
                  pGVar2 = (__this->fields)._descriptor;
                  adapter = (pGVar1->fields).SecondaryAdapter;
                  if ((pGVar2->fields).Disabled == false) {
                    if ((pGVar2->fields).Adapter ==
                        (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
                      disabled = true;
                    }
                    else {
                      pvVar6 = InterfaceInvoker0_Invoke
                                         (2,(Il2CppClass *)
                                            TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
                                          (Il2CppObject *)(pGVar2->fields).Adapter);
                      disabled = (byte)pvVar6 ^ 1;
                    }
                  }
                  else {
                    disabled = true;
                  }
                  pGVar1 = (__this->fields)._descriptor;
                  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
                    pSVar3 = (pGVar1->fields).Id;
                    pDVar4 = (DG_Tweening_Core_DOSetter_Color2__o *)
                             il2cpp_codegen_object_new
                                       ((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
                    System_Action_GisketchActionContext____ctor
                              (pDVar4,(Il2CppObject *)pGVar1,
                               (intptr_t)
                               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_Changed,
                               (MethodInfo_1387DC0 *)0x0);
                    if (Il2CppMethodInitialized_184347b5f == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata(&".color.enabled");
                      Il2CppMethodInitialized_184347b5f = '\x01';
                    }
                    pGVar1 = (__this->fields)._descriptor;
                    if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
                      enabledKey = System_String__Concat_1969e50
                                             ((pGVar1->fields).Id,".color.enabled",(MethodInfo *)0x0);
                      pGVar1 = (__this->fields)._descriptor;
                      if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
                        local_res10[0].hasValue = false;
                        local_res10[0].value = false;
                        System_Nullable_bool____ctor
                                  ((System_Data_SqlTypes_SqlByte_o *)local_res10,(pGVar1->fields).Disabled,
                                   MethodInfo_System_Nullable_bool_ctor);
                        Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__BuildPicker_21ebd00
                                  (row,adapter,(bool)disabled,pSVar3,
                                   (System_Action_GisketchActionContext__o *)pDVar4,enabledKey,
                                   (System_Nullable_bool__o)local_res10[0],(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                  ThrowNullReferenceException();
                }
              }
            }
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$<BuildControl>b__8_1
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow___BuildControl_b__8_1 (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x1823a01f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823a0367: mov rax, qword ptr [rip + 0x1d3472a]  ; "false"

void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow___BuildControl_b__8_1
               (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  ushort uVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar2;
  Il2CppObject *obj;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  UnityEngine_GameObject_o *pUVar5;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar6;
  bool value;
  undefined1 value_00;
  VirtualInvokeData *pVVar7;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar8;
  System_String_o *pSVar9;
  System_String_o *value_01;
  void *pvVar10;
  ushort uVar11;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  if (Il2CppMethodInitialized_184347b63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&"false");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_184347b63 = '\x01';
  }
  pGVar2 = (__this->fields)._descriptor;
  if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    obj = (Il2CppObject *)(pGVar2->fields).Adapter;
    if (obj != (Il2CppObject *)0x0) {
      if ((context->fields).Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        value = false;
      }
      else {
        value = System_String__op_Equality
                          ((((context->fields).Node)->fields).value,"true",(MethodInfo *)0x0);
      }
      pIVar3 = obj->klass;
      uVar11 = 0;
      uVar1 = (pIVar3->_2).interface_offsets_count;
      if (uVar1 != 0) {
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        do {
          if (pIVar4[uVar11].interfaceType ==
              (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter) {
            pVVar7 = pIVar3->vtable + (pIVar4[uVar11].offset + 8);
            goto label_1823a02d9;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar1);
      }
      pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,8)
      ;
label_1823a02d9:
      (*pVVar7->methodPtr)(obj,value,pVVar7->method);
    }
    pUVar5 = (context->fields).GameObject;
    if (((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
        (pGVar8 = UnityEngine_GameObject__GetComponentInParent_object_
                            (pUVar5,(MethodInfo_6F53B0 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot),
        pGVar8 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0)) &&
       (pGVar6 = (pGVar8->fields)._State_k__BackingField,
       pGVar6 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
      pSVar9 = Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow__ControlValueKey
                         (__this,(MethodInfo *)0x0);
      pGVar2 = (__this->fields)._descriptor;
      if (pGVar2 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_1823a0429;
      value_01 = "false";
      if ((pGVar2->fields).Adapter != (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
        value_01 = InterfaceInvoker0_Invoke
                             (0,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
                              (Il2CppObject *)(pGVar2->fields).Adapter);
      }
      Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar6,pSVar9,value_01,(MethodInfo *)0x0);
    }
    pUVar5 = (context->fields).GameObject;
    if (((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
        (pGVar8 = UnityEngine_GameObject__GetComponentInParent_object_
                            (pUVar5,(MethodInfo_6F53B0 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot),
        pGVar8 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0)) &&
       (pGVar6 = (pGVar8->fields)._State_k__BackingField,
       pGVar6 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
      pSVar9 = Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow__ColorEnabledKey
                         (__this,(MethodInfo *)0x0);
      pGVar2 = (__this->fields)._descriptor;
      if (pGVar2 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_1823a0429;
      if ((pGVar2->fields).Adapter == (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
        value_00 = false;
      }
      else {
        pvVar10 = InterfaceInvoker0_Invoke
                            (2,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter,
                             (Il2CppObject *)(pGVar2->fields).Adapter);
        value_00 = SUB81(pvVar10,0);
      }
      Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar6,pSVar9,(bool)value_00,(MethodInfo *)0x0);
    }
    pGVar2 = (__this->fields)._descriptor;
    if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
      local_28.fields.ElementId = (context->fields).ElementId;
      local_28.fields.GameObject = (context->fields).GameObject;
      local_28.fields.Node = (context->fields).Node;
      local_28.fields.InputSource = (context->fields).InputSource;
      local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor__Changed(pGVar2,&local_28,(MethodInfo *)0x0);
      return;
    }
  }
label_1823a0429:
  ThrowNullReferenceException();
}


